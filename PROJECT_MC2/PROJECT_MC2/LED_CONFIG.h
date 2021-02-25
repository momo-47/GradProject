/*
 * LED_CONFIG.h
 *
 * Created: 1/11/2021 5:32:11 AM
 *  Author: magam
 */ 


#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_

#include "CPU_CONFIGURATION.h"

/* Renaming LED Ports*/
#define LED0_PORT DIO_PORTC
#define LED1_PORT DIO_PORTC
#define LED2_PORT DIO_PORTD


/* Renaming LED Pins*/
#define LED0_PIN DIO_PIN2
#define LED1_PIN DIO_PIN7
#define LED2_PIN DIO_PIN3

/* Renaming Pins state @ HIGH*/
#define LED0_HIGH DIO_PIN_HIGH
#define LED1_HIGH DIO_PIN_HIGH
#define LED2_HIGH DIO_PIN_HIGH

/* Renaming Pins State @ LOW*/
#define LED0_LOW DIO_PIN_LOW
#define LED1_LOW DIO_PIN_LOW
#define LED2_LOW DIO_PIN_LOW

/* Renaming Pins Direction @ OUTPUT*/
#define LED0_OUTPUT DIO_PIN_OUTPUT
#define LED1_OUTPUT DIO_PIN_OUTPUT
#define LED2_OUTPUT DIO_PIN_OUTPUT



#endif /* LED_CONFIG_H_ */