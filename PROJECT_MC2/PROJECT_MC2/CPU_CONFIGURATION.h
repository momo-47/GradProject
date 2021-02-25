/*
 * CPU_CONFIGURATION.h
 *
 * Created: 1/10/2021 11:22:52 AM
 *  Author: magam
 */ 


#ifndef CPU_CONFIGURATION_H_
#define CPU_CONFIGURATION_H_

#undef  F_CPU
#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO.h"


#endif /* CPU_CONFIGURATION_H_ */