#include "stm32f10x.h"
#include "MYGPIO.h" 



int main (void)
{
	MyGPIO_Init(GPIOC,5,1,1) ; //Mod10,Out_Ppull);
	MyGPIO_Set(GPIOC, 5);
	MyGPIO_Reset(GPIOC, 5);
	MyGPIO_Toggle(GPIOC, 5);
	
	/*MyGPIO_Init(GPIOA, 5, Mod10, In_Floating);
	MyGPIO_Init(GPIOA, 9, Mod10, In_PullUp);
	MyGPIO_Set(GPIOB, 5);
	MyGPIO_Reset(GPIOC, 5);
	MyGPIO_Toggle(GPIOD, 2);*/
}
