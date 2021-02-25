/*
 * DIO.h
 *
 * Created: 1/11/2021 3:05:30 AM
 *  Author: magam
 */ 


#ifndef DIO_H_
#define DIO_H_

/* 1- Macros*/
#include "DIO_CONFIG.h"
#include "CPU_CONFIGURATION.h"


/************************************************************************/
/* 4- Function prototypes                                               */
/************************************************************************/

void DIO_SetPin_DIRECTION (Uint8t port, Uint8t pin, Uint8t direction); /* 0---> INPUT      1---> OUTPUT*/
/*
If the direction is output, we can :
1- set or clear
2- toggle
*/

void DIO_SetPin_VALUE     (Uint8t port, Uint8t pin, Uint8t value);
void DIO_TglPin_VALUE     (Uint8t port, Uint8t pin);

/*
If the direction is input, we will read it.
*/

Uint8t DIO_ReadPin_VALUE (Uint8t port, Uint8t pin);

void DIO_SetPin_PULLUP (Uint8t port, Uint8t pin);


#endif /* DIO_H_ */