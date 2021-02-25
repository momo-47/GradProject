/*
 * SPI_CONFIG.h
 *
 * Created: 2/19/2021 8:28:38 PM
 *  Author: magam
 */ 


#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

#include "CPU_CONFIGURATION.h"

#define MASTER 0
#define SLAVE  1

#define SPI_PORT DDRB

#define SS_PIN      4
#define MISO_PIN    6
#define MOSI_PIN    5
#define CLK_PIN     7


#define SPI_MODE MASTER



#endif /* SPI_CONFIG_H_ */