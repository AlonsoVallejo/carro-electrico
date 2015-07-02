/*
 * GPIO.h
 *
 *  Created on: May 4, 2015
 *      Author: Vallejo
 */

#ifndef GPIO_H_
#define GPIO_H_

#include "MK64F12.h"

#define GPIO_PIN(x)		1<<x

#define  RED_RGB_HIGH	GPIOB_PCOR |= GPIO_PIN(22)
#define  RED_RGB_LOW	GPIOB_PSOR |= GPIO_PIN(22)

#define  BlUE_RGB_HIGH	GPIOB_PCOR |= GPIO_PIN(21)
#define  BLUE_RGB_LOW	GPIOB_PSOR |= GPIO_PIN(21)

#define  GREEN_RGB_HIGH	GPIOE_PCOR |= GPIO_PIN(26)
#define  GREEN_RGB_LOW	GPIOE_PSOR |= GPIO_PIN(26)

#define  PTD0_HIGH		GPIOD_PCOR |= GPIO_PIN(0)
#define  PTD0_LOW		GPIOD_PSOR |= GPIO_PIN(0)

#define  PTD2_HIGH		GPIOD_PCOR |= GPIO_PIN(2)
#define  PTD2_LOW		GPIOD_PSOR |= GPIO_PIN(2)

void init_GPIO(void);
void init_rgb(void);

#endif /* GPIO_H_ */
