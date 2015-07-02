/*
 * FTM.h
 *
 *  Created on: May 2, 2015
 *      Author: Vallejo
 */

#ifndef FTM_H_
#define FTM_H_

#include "MK64F12.h"

void init_FTM0(void);
void pwm_write(unsigned int pwm1, unsigned int pwm2, unsigned int pwm3, unsigned int pwm4, unsigned int pwm5, unsigned int pwm6);


#endif /* FTM_H_ */
