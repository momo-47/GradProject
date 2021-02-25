/*
 * DIO.c
 *
 * Created: 1/11/2021 3:05:45 AM
 *  Author: magam
 */ 

#include "DIO.h"
void DIO_SetPin_DIRECTION (Uint8t port, Uint8t pin, Uint8t direction) /* 0---> INPUT      1---> OUTPUT*/
{
	switch (direction)
	{
		case DIO_PIN_INPUT:
			switch (port)
			{
				case DIO_PORTA:
				CLR_BIT(DDRA,pin);
				break;
				case DIO_PORTB:
				CLR_BIT(DDRB,pin);
				break;					
				case DIO_PORTC:
				CLR_BIT(DDRC,pin);
				break;
				case DIO_PORTD:
				CLR_BIT(DDRD,pin);
				break;
			}
			break;
		
		case DIO_PIN_OUTPUT:
			switch (port)
			{
				case DIO_PORTA:
				SET_BIT(DDRA,pin);
				break;
				case DIO_PORTB:
				SET_BIT(DDRB,pin);
				break;
				case DIO_PORTC:
				SET_BIT(DDRC,pin);
				break;
				case DIO_PORTD:
				SET_BIT(DDRD,pin);
				break;
			}
			break;
	}
}

/*
If the direction is output, we can :
1- set or clear
2- toggle
*/

void DIO_SetPin_VALUE     (Uint8t port, Uint8t pin, Uint8t value)
{
	switch (value)
	{
		case DIO_PIN_LOW:
		switch (port)
		{
			case DIO_PORTA:
			CLR_BIT(PORTA,pin);
			break;
			case DIO_PORTB:
			CLR_BIT(PORTB,pin);
			break;
			case DIO_PORTC:
			CLR_BIT(PORTC,pin);
			break;
			case DIO_PORTD:
			CLR_BIT(PORTD,pin);
			break; 
		}
		break;
		case DIO_PIN_HIGH:
		switch (port)
		{
			case DIO_PORTA:
			SET_BIT(PORTA,pin);
			break;
			case DIO_PORTB:
			SET_BIT(PORTB,pin);
			break;
			case DIO_PORTC:
			SET_BIT(PORTC,pin);
			break;
			case DIO_PORTD:
			SET_BIT(PORTD,pin);
			break;
		}
		break;
	}
}


void DIO_TglPin_VALUE     (Uint8t port, Uint8t pin)
{
	switch (port)
	{
		case DIO_PORTA:
		TGL_BIT(PORTA,pin);
		break;
		case DIO_PORTB:
		TGL_BIT(PORTB,pin);
		break;
		case DIO_PORTC:
		TGL_BIT(PORTC,pin);
		break;
		case DIO_PORTD:
		TGL_BIT(PORTD,pin);
		break;
	}
}

/*
If the direction is input, we will read it.
*/

Uint8t DIO_ReadPin_VALUE (Uint8t port, Uint8t pin)
{
	switch (port)
	{
		case DIO_PORTA:
		return GET_BIT(PINA,pin);
		break;
		case DIO_PORTB:
		return GET_BIT(PINB,pin);
		break;
		case DIO_PORTC:
		return GET_BIT(PINC,pin);
		break;
		case DIO_PORTD:
		return GET_BIT(PIND,pin);
		break;
	}
}

void DIO_SetPin_PULLUP (Uint8t port, Uint8t pin)
{
	switch (port)
	{
		case DIO_PORTA:
		SET_BIT(PORTA,pin);
		break;
		case DIO_PORTB:
		SET_BIT(PORTB,pin);
		break;
		case DIO_PORTC:
		SET_BIT(PORTC,pin);
		break;
		case DIO_PORTD:
		SET_BIT(PORTD,pin);
		break;
	}
}