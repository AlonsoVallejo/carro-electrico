/*
 * seno.h
 *
 *  Created on: Feb 26, 2015
 *      Author: Vallejo
 */

#ifndef SENO_H_
#define SENO_H_

#include "MK64F12.h"
#include "../drivers/FTM.h"
#include "../drivers/GPIO.h"
#include "../drivers/ADC.h"

void pwm(void);
void indica_sector(float  elegir_sector);
float modulacion_vectorial(float V_beta, float V_alfa);
void set_pwm_comp(void);
float obtener_V_beta (unsigned int cont);
float obtener_V_alfa (unsigned int cont);

unsigned int adc1,adc2,adc3,adc4,adc5,adc6,adc7;
#endif /* SENO_H_ */
