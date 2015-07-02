/*
 * PIT.h
 *
 *  Created on: May 2, 2015
 *      Author: Vallejo
 */

#ifndef PIT_H_
#define PIT_H_

#include "MK64F12.h"

void init_pit0(unsigned int microseconds);
void init_pit1(unsigned int microseconds1);

#define EnableInterrupts __asm(" CPSIE i");
#define DisableInterrupts __asm(" CPSID i");

#define Enable_PIT0			PIT_TCTRL0 = 0x3
#define EnableTIE_PIT0		PIT_TCTRL0 = PIT_TCTRL_TIE_MASK
#define EnableTEN_PIT0		PIT_TCTRL0 = PIT_TCTRL_TEN_MASK
#define Disable_PIT0 		PIT_TCTRL0 = 0x0
#define clearflag_PIT0		PIT_TFLG0 = PIT_TFLG_TIF_MASK

#define Enable_PIT1			PIT_TCTRL1 = 0x3
#define EnableTIE_PIT1		PIT_TCTRL1 = PIT_TCTRL_TIE_MASK
#define EnableTEN_PIT1		PIT_TCTRL1 = PIT_TCTRL_TEN_MASK
#define Disable_PIT1 		PIT_TCTRL1 = 0x0
#define clearflag_PIT1		PIT_TFLG1 = PIT_TFLG_TIF_MASK

#endif /* PIT_H_ */
