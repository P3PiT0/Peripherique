#include "stm32f10x.h"
#include "MYGPIO.h" 

int main (void)
{
	MyGPIO_Init(GPIOC,5,Mod10,Out_Ppull);
	MyGPIO_Set(GPIOC, 5);

	MyGPIO_Reset(GPIOC, 5);
	MyGPIO_Toggle(GPIOC, 5);
	MyGPIO_Toggle(GPIOC, 5);
	
	Test();
}
