/*
 * LED.c
 *
 * Created: 1/11/2021 2:05:50 AM
 *  Author: magam
 */ 

#include "LED.h"

/* LED0 functions*/
void LED0_Init (void)
{
	//SET_BIT(DDRC,2);
	DIO_SetPin_DIRECTION(LED0_PORT, LED0_PIN, LED0_OUTPUT);
}

void LED0_ON   (void)
{
	//SET_BIT(PORTC,2);
	DIO_SetPin_VALUE (LED0_PORT, LED0_PIN, LED0_HIGH);
}

void LED0_OFF  (void)
{
	//CLR_BIT(PORTC,2);
	DIO_SetPin_VALUE (LED0_PORT, LED0_PIN, LED0_LOW);
}

void LED0_TGL  (void)
{
	//TGL_BIT(PORTC,2);
	DIO_TglPin_VALUE(LED0_PORT, LED0_PIN);
}
////////////////////////////////////////////////////////////////////////

/* LED1 functions*/
void LED1_Init (void)
{
	//SET_BIT(DDRC,7);
	DIO_SetPin_DIRECTION(LED1_PORT, LED1_PIN, LED1_OUTPUT);
}

void LED1_ON   (void)
{
	//SET_BIT(PORTC,7);
	DIO_SetPin_VALUE(LED1_PORT, LED1_PIN, LED1_HIGH);
}

void LED1_OFF  (void)
{
	//CLR_BIT(PORTC,7);
	DIO_SetPin_VALUE(LED1_PORT, LED1_PIN, LED1_LOW);
}

void LED1_TGL  (void)
{
	//TGL_BIT(PORTC,7);
	DIO_TglPin_VALUE(LED1_PORT, LED1_PIN);
}

////////////////////////////////////////////////////////////////////////

/* LED2 functions*/
void LED2_Init (void)
{
	//SET_BIT(DDRD,3);
	DIO_SetPin_DIRECTION(LED2_PORT, LED2_PIN, LED2_OUTPUT);
}

void LED2_ON   (void)
{
	//SET_BIT(PORTD,3);
	DIO_SetPin_VALUE(LED2_PORT, LED2_PIN, LED2_HIGH);
}

void LED2_OFF  (void)
{
	//CLR_BIT(PORTD,3);
	DIO_SetPin_VALUE(LED2_PORT, LED2_PIN, LED2_LOW);
}

void LED2_TGL  (void)
{
	//TGL_BIT(PORTD,3);
	DIO_TglPin_VALUE(LED2_PORT, LED2_PIN);
}