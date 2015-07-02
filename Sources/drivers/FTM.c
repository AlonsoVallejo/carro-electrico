/*
 * FTM.c
 *
 *  Created on: May 2, 2015
 *      Author: Vallejo
 */

#include "FTM.h"

//**************************************************
//				DEFINE USES FOR THE TPM MODULES
//**************************************************

//source clock select.
#define  FTM_PLLFLL 	1
#define  FTM_OSCERCLK 	2
#define  FTM_MCGIRCLK	3

#define	 FTM_CNT_DIS	0
#define	 FTM_CLK		1
#define	 FTM_EXT_CLK	2

//preescaler definitions.
#define PS_1	0
#define PS_2	1
#define PS_4	2
#define PS_8	3
#define PS_16	4
#define PS_32	5
#define PS_64	6
#define PS_128	7

//confuralbles bits for the TPM modules.
#define  FTM_OC_TOGGLE		 FTM_CnSC_MSA_MASK|FTM_CnSC_ELSA_MASK
#define  FTM_OC_CLR			 FTM_CnSC_MSA_MASK|FTM_CnSC_ELSB_MASK
#define  FTM_OC_SET			 FTM_CnSC_MSA_MASK|FTM_CnSC_ELSA_MASK|FTM_CnSC_ELSB_MASK
#define  FTM_OC_OUTL		 FTM_CnSC_MSB_MASK|FTM_CnSC_MSA_MASK|FTM_CnSC_ELSB_MASK
#define  FTM_OC_OUTH		 FTM_CnSC_MSB_MASK|FTM_CnSC_MSA_MASK|FTM_CnSC_ELSA_MASK

#define  FTM_PWM_H 			 FTM_CnSC_MSB_MASK|FTM_CnSC_ELSB_MASK // PWM  with HIGH TRUE pulse.
#define  FTM_PWM_L			 FTM_CnSC_MSB_MASK|FTM_CnSC_ELSA_MASK // PWM  with LOW  TRUE pulse.

#define EDGE_PWM			0 
#define CENTER_PWM			1

void init_FTM0(void)
{
	SIM_SCGC5 |= SIM_SCGC5_PORTA_MASK|SIM_SCGC5_PORTC_MASK; 
	
	PORTC_PCR1 = PORT_PCR_MUX(4); // S1
	PORTC_PCR2 = PORT_PCR_MUX(4); // S2		
	PORTC_PCR3 = PORT_PCR_MUX(4); // S3
	PORTC_PCR4 = PORT_PCR_MUX(4); // S4
	PORTA_PCR1 = PORT_PCR_MUX(3); // S5
	PORTA_PCR2 = PORT_PCR_MUX(3); // S6
	
	SIM_SOPT2 |= SIM_SOPT2_PLLFLLSEL_MASK; 
	//SIM_SOPT2 &= ~(SIM_SOPT2_FTMSRC_MASK);
	SIM_SCGC6 |= SIM_SCGC6_FTM0_MASK;
	//SIM_SOPT2 |= SIM_SOPT2_FTMSRC(FTM_PLLFLL);

	FTM0_MOD = 350;
	FTM0_MODE |= FTM_MODE_WPDIS_MASK; 
	FTM0_SC |=  FTM_SC_PS(PS_4)|FTM_SC_CPWMS_MASK|FTM_SC_CLKS(FTM_CLK);
	
	FTM0_C0SC |=  FTM_PWM_H; //S1 
	FTM0_C1SC |=  FTM_PWM_L; //S2
	FTM0_C2SC |=  FTM_PWM_H; //S3
	FTM0_C3SC |=  FTM_PWM_L; //S4
	FTM0_C6SC |=  FTM_PWM_H; //S5
	FTM0_C7SC |=  FTM_PWM_L; //S6
	
	//PORTA_PCR1  |= PORT_PCR_MUX(1) | PORT_PCR_DSE_MASK;
	//GPIOA_PDDR |= (1 << 1); 
	
	
}

void pwm_write(unsigned int pwm1, unsigned int pwm2, unsigned int pwm3, unsigned int pwm4, unsigned int pwm5, unsigned int pwm6)
{
	 FTM0_C0V = pwm1;
	 FTM0_C1V = pwm2;
	 FTM0_C2V = pwm3;
	 FTM0_C3V = pwm4;
	 FTM0_C6V = pwm5;
	 FTM0_C7V = pwm6;
}




