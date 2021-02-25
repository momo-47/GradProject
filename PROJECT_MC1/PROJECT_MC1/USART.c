/*
 * USART.c
 *
 * Created: 2/18/2021 5:39:55 PM
 *  Author: magam
 */ 
#include "USART.h"

void USART_Init (void)
{
	Uint16t UBRR_val = 0;
	// Define the Tx & Rx direction 
	SET_BIT(DDRD, PD1); 
	CLR_BIT(DDRD, PD0);
	
	sei();

	UCSRB = 0x00;
	UCSRB = 0x90;
	//UCSRB = (1 << RXEN) | (1 << TXEN) | (1 << RXCIE) | (1 << TXCIE); //1001 0000
	UCSRC = 0x00;
	UCSRC = 0x86;
	//UCSRC = (1 << URSEL) | (1 << UCSZ1) | (1 << UCSZ0);    // 1000 0110
	
	UBRR_val = (FRQ / (16 * BAUDRATE)) - 1;
	UBRRL = UBRR_val;
	UBRRH = (UBRR_val >> 8);
}

void USART_TRANSMIT (Uint8t data)
{
	UDR = data;
	while (GET_BIT(UCSRA, TXC) != 1);
}

Uint8t USART_RECIEVE (void)
{
	while (GET_BIT(UCSRA, RXC) != 1);
	return UDR;
}