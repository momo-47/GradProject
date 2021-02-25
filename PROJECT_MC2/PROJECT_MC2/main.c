/*
 * PROJECT_MC2.c
 *
 * Created: 2/25/2021 3:49:40 AM
 * Author : magam
 */ 
#include "SPI.h"
#include "LED.h"

int main(void)
{
	SPI_Init();
	LED0_Init();
	LED1_Init();
	LED2_Init();
	
    while (1) 
    {
    }
}

ISR (SPI_STC_vect)
{
	if (SPI_Recieve() == '1') 
	LED0_TGL();
	else if (SPI_Recieve() == '2') 
	LED1_TGL();
	else if (SPI_Recieve() == '3') 
	LED2_TGL();
}