/*
 * ADC.h
 *
 *  Created on: 18/05/2015
 *      Author: Vallejo
 */

#ifndef ADC_H_
#define ADC_H_

#include "MK64F12.h"

//**************************************************
//					PINS FOR ADC INPUTS
//**************************************************

// definitions of the port that it can used for the ADC reading.

#define PTB2  (12)
#define PTB3  (13)
#define PTB10 (14)
#define PTB11 (15)
#define PTC11 (7)
#define PTC10 (6)
#define PTD2  (5)
// definitions for the configuration of the ADC resolution.

#define Eight  	(0)
#define Ten    	(2)
#define Twelve 	(1)
#define Sixteen (3)

/********************************************************************************
						Functions used.
********************************************************************************/
void init_adc0(void);
void init_adc1(void);
unsigned int read_adc_acel(unsigned short PORT); 	//PTB2
unsigned int read_adc_freno(unsigned short PORT);	//PTB3
unsigned int read_adc_sensor1(unsigned short PORT);	//PTB10
unsigned int read_adc_sensor2(unsigned short PORT);	//PTB11
unsigned int read_adc_sensor3(unsigned short PORT);	//PTC11
unsigned int read_adc_sensor4(unsigned short PORT);	//PTC10
unsigned int read_adc_sensor5(unsigned short PORT);	//PTD1
#endif /* ADC_H_ */
