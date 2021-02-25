/*
 * USART.h
 *
 * Created: 2/18/2021 5:39:43 PM
 *  Author: magam
 */ 


#ifndef USART_H_
#define USART_H_

#include "USART_CONFIG.h"

void USART_Init (void);
void USART_TRANSMIT (Uint8t data);
Uint8t USART_RECIEVE (void);



#endif /* USART_H_ */