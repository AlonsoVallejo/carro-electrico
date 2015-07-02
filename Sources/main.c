
/*		INCLUDE 	*/
#include "MK64F12.h"
#include "system_MK64F12.h"
#include "drivers/PIT.h"
#include "drivers/GPIO.h"
#include "drivers/FTM.h"
#include "drivers/ADC.h"
#include "APP/seno.h"

/*		FUNCIONES 	*/


int main(void)
{
	SystemInit();
	init_GPIO();
	init_adc0();
	init_adc1();
	init_FTM0();
	init_pit0(40);

	for (;;);

}

void PIT0_IRQHandler()
{
	Disable_PIT0;

	pwm();
	
	GPIOB_PTOR |= GPIO_PIN(22);

	clearflag_PIT0;
	Enable_PIT0;

}
