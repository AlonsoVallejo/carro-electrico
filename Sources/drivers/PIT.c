/*
 * PIT.c
 *
 *  Created on: May 2, 2015
 *      Author: Vallejo
 */

#include "PIT.h"

void init_pit0(unsigned int microseconds)
{
     unsigned int load_val = ((microseconds*0.000001)*60000000) - 1;

	 PIT_MCR = 0x1; // enable module clock
	 PIT_LDVAL0 = PIT_LDVAL_TSV(load_val); // load value LDVAL = (period * 60MHz) - 1 FOR (FRDM_K64F)
	 PIT_TCTRL0 = PIT_TCTRL_TIE_MASK;  // timer interrupt enable and timer PIT0 enable
	 PIT_TCTRL0 |= PIT_TCTRL_TEN_MASK;
	 
	 NVIC_ClearPendingIRQ(PIT0_IRQn);
	 NVIC_EnableIRQ(PIT0_IRQn);
	 NVIC_SetPriority(PIT0_IRQn,0);
	 EnableInterrupts;

}


void init_pit1(unsigned int microseconds1)
{
	 unsigned int load_val1 = ((microseconds1*0.000001)*60000000) - 1;

	 PIT_MCR = 0x1; // enable module clock
	 PIT_LDVAL1 = PIT_LDVAL_TSV(load_val1); // load value LDVAL = (period * 60MHz) - 1 FOR (FRDM_K64F)
	 PIT_TCTRL1 = PIT_TCTRL_TIE_MASK;  // timer interrupt enable and timer PIT1 enable
	 PIT_TCTRL1 |= PIT_TCTRL_TEN_MASK;

	 NVIC_ClearPendingIRQ(PIT1_IRQn);
	 NVIC_EnableIRQ(PIT1_IRQn);
	 NVIC_SetPriority(PIT1_IRQn,0);
	 EnableInterrupts;
}
