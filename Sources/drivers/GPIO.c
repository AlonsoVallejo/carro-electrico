/*
 * GPIO.c
 *
 *  Created on: May 4, 2015
 *      Author: Vallejo
 */

#include "GPIO.h"

void init_GPIO(void)
{
	SIM_SCGC5 |= SIM_SCGC5_PORTB_MASK|SIM_SCGC5_PORTE_MASK|SIM_SCGC5_PORTD_MASK;
	SIM_SCGC6 |= SIM_SCGC6_PIT_MASK;
	init_rgb();
	
	PORTD_PCR0 |= PORT_PCR_MUX(1);
	PORTD_PCR2 |= PORT_PCR_MUX(1);
	
	GPIOD_PDDR |= GPIO_PIN(0);
	GPIOD_PDDR |= GPIO_PIN(2);
	
	PTD0_LOW;
	PTD2_LOW;
	
}

void init_rgb(void)
{
	PORTB_PCR22 |= PORT_PCR_MUX(1);
	PORTB_PCR23 |= PORT_PCR_MUX(1);
	PORTE_PCR26 |= PORT_PCR_MUX(1);
		
	GPIOB_PDDR |= GPIO_PIN(22);
	GPIOB_PDDR |= GPIO_PIN(21);
	GPIOE_PDDR |= GPIO_PIN(26);
	
	RED_RGB_LOW;
	BLUE_RGB_LOW;
	GREEN_RGB_LOW;
}
