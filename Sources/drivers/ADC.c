/*
 * ADC.c
 *
 *  Created on: 18/05/2015
 *      Author: Vallejo
 */

#include "ADC.h"

void init_adc0(void) // init the ADC0
{
	SIM_SCGC6 |= SIM_SCGC6_ADC0_MASK;	// enable the ADC0 port.
	ADC0_CFG1 |= ADC_CFG1_MODE( Eight ) | ADC_CFG1_ADIV(0); // ADC set of bits to a certain value and dividing the frequency conversion
	ADC0_CFG2 |= ADC_CFG2_ADHSC_MASK; // High speed conversion.
	ADC0_CFG2 |= ADC_CFG2_ADLSTS_MASK; // 2 extra ASDCK cycles
	ADC0_SC1A = ADC_SC1_ADCH(31);

}

void init_adc1(void) // init the ADC1
{
	SIM_SCGC3 |= SIM_SCGC3_ADC1_MASK;	// enable the ADC1 port.
	ADC1_CFG1 |= ADC_CFG1_MODE( Eight ) | ADC_CFG1_ADIV(0); // ADC set of bits to a certain value and dividing the frequency conversion
	ADC1_CFG2 |= ADC_CFG2_ADHSC_MASK; // High speed conversion.
	ADC1_CFG2 |= ADC_CFG2_ADLSTS_MASK; // 2 extra ASDCK cycles
	ADC1_SC1A = ADC_SC1_ADCH(31);

}


unsigned int read_adc_acel(unsigned short PORT) // function for read the ADC.
{
	ADC0_CFG2 |= ADC_CFG2_MUXSEL_SHIFT;// select channel A ADxxA
	ADC0_SC1A = ADC_SC1_ADCH(PORT); // select the  reading port.
	while(ADC0_SC2 & ADC_SC2_ADACT_MASK);  	// while the conversion is process.
	while(!(ADC0_SC1A & ADC_SC1_COCO_MASK));// when the conversion ends.
	return ADC0_RA; // return the conversion value.
}

unsigned int read_adc_freno(unsigned short PORT) // function for read the ADC.
{
	ADC0_CFG2 |= ADC_CFG2_MUXSEL_SHIFT;// select channel A ADxxA
	ADC0_SC1A = ADC_SC1_ADCH(PORT); // select the  reading port.
	while(ADC0_SC2 & ADC_SC2_ADACT_MASK);  	// while the conversion is process.
	while(!(ADC0_SC1A & ADC_SC1_COCO_MASK));// when the conversion ends.
	return ADC0_RA; // return the conversion value.
}

unsigned int read_adc_sensor1(unsigned short PORT) // function for read the ADC.
{
	ADC1_CFG2 |= ADC_CFG2_MUXSEL_SHIFT; // select channel A ADxxA
	ADC1_SC1A = ADC_SC1_ADCH(PORT); // select the  reading port.
	while(ADC1_SC2 & ADC_SC2_ADACT_MASK);  	// while the conversion is process.
	while(!(ADC1_SC1A & ADC_SC1_COCO_MASK));// when the conversion ends.
	return ADC1_RA; // return the conversion value.
}

unsigned int read_adc_sensor2(unsigned short PORT) // function for read the ADC.
{
	ADC1_CFG2 |= ADC_CFG2_MUXSEL_SHIFT; // select channel A ADxxA
	ADC1_SC1A = ADC_SC1_ADCH(PORT); // select the  reading port.
	while(ADC1_SC2 & ADC_SC2_ADACT_MASK);  	// while the conversion is process.
	while(!(ADC1_SC1A & ADC_SC1_COCO_MASK));// when the conversion ends.
	return ADC1_RA; // return the conversion value.
}

unsigned int read_adc_sensor3(unsigned short PORT) // function for read the ADC.
{
	ADC1_CFG2 |= ADC_CFG2_MUXSEL_MASK; // select channel B ADxxB
	ADC1_SC1A = ADC_SC1_ADCH(PORT); // select the  reading port.
	while(ADC1_SC2 & ADC_SC2_ADACT_MASK);  	// while the conversion is process.
	while(!(ADC1_SC1A & ADC_SC1_COCO_MASK));// when the conversion ends.
	return ADC1_RA; // return the conversion value.
}

unsigned int read_adc_sensor4(unsigned short PORT) // function for read the ADC.
{
	ADC1_CFG2 |= ADC_CFG2_MUXSEL_MASK; // select channel B ADxxB
	ADC1_SC1A = ADC_SC1_ADCH(PORT); // select the  reading port.
	while(ADC1_SC2 & ADC_SC2_ADACT_MASK);  	// while the conversion is process.
	while(!(ADC1_SC1A & ADC_SC1_COCO_MASK));// when the conversion ends.
	return ADC1_RA; // return the conversion value.
}

unsigned int read_adc_sensor5(unsigned short PORT) // function for read the ADC.
{
	ADC0_CFG2 |= ADC_CFG2_MUXSEL_MASK; // select channel B ADxxB
	ADC0_SC1A = ADC_SC1_ADCH(PORT); // select the  reading port.
	while(ADC0_SC2 & ADC_SC2_ADACT_MASK);  	// while the conversion is process.
	while(!(ADC0_SC1A & ADC_SC1_COCO_MASK));// when the conversion ends.
	return ADC0_RA; // return the conversion value.
}
