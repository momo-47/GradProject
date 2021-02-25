/*
 * SPI.c
 *
 * Created: 2/19/2021 8:29:10 PM
 *  Author: magam
 */ 
#include "SPI.h"

void SPI_Init (void)
{
	// set directions for Master
	#if SPI_MODE == MASTER
	SET_BIT(SPI_PORT, MOSI_PIN);
	CLR_BIT(SPI_PORT, MISO_PIN);
	SET_BIT(SPI_PORT, CLK_PIN);
	SET_BIT(SPI_PORT, SS_PIN);
	sei();
	SPCR = 0xF3;        // 1111 0011
	// set directions for Slave
	#elif SPI_MODE == SLAVE
	CLR_BIT(SPI_PORT, MOSI_PIN);
	SET_BIT(SPI_PORT, MISO_PIN);
	CLR_BIT(SPI_PORT, CLK_PIN);
	CLR_BIT(SPI_PORT, SS_PIN);	
	sei();
	SPCR = 0xE3;   // 1110 0011
	#endif
}
void SPI_Transmit (Uint8t data)
{
	SPDR = data;
	while (GET_BIT(SPSR, SPIF) != 1); 
}
Uint8t SPI_Recieve (void)
{
	while (GET_BIT(SPSR, SPIF) != 1);
	return SPDR;
}
void SPI_SlaveSelect (Uint8t slave)
{
	switch (slave)
	{
		case 0:
		CLR_BIT(PORTB, SS_PIN);     // send low signal "active low"
		break;
		case 1:
		break;
	}
}
