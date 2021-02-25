/*
 * PROJECT_MC1.c
 *
 * Created: 2/23/2021 12:53:12 PM
 * Author : magam
 */ 
#include "USART.h"
#include "SPI.h"

int main(void)
{
	USART_Init();
	SPI_Init();
	
    while (1) 
    {

    }
}

ISR (USART_RXC_vect)
{
	Uint8t data = UDR;
	SPI_Transmit(data); 
}