#include "stm32f10x.h"
#include "MYGPIO.h" 



void MyGPIO_Init (GPIO_TypeDef* GPIO, int Pin, int Mode, int CRLH ) { // Configuration du PIN
	
	RCC->APB2ENR |= (0x01 << 2) | (0x01 << 3) | (0x01 << 4) ;
	
	if (Pin<8) { //CRL	
		GPIO -> CRL = GPIOC -> CRL &~(0xF << (Pin*4)); //Mise à 0
		GPIOC-> CRL = GPIOC -> CRL | (Mode << ((Pin*4)+2));
		GPIOC-> CRL = GPIOC -> CRL | (CRLH << (Pin*4));
	}
	else { //CRH
		GPIO -> CRH = GPIOC -> CRH &~(0xF << (Pin*4)); //Mise à 0
		GPIOC-> CRH = GPIOC -> CRH | (Mode << ((Pin*4)+2));
		GPIOC-> CRH = GPIOC -> CRH | (CRLH << (Pin*4));
	}
}

int MyGPIO_Read ( GPIO_TypeDef * GPIO , char Pin ){  // renvoie 0 ou autre chose different de 0
	int value = -1;
	value=(GPIO -> IDR & (0x1<<Pin))>>Pin;// 
	return value; 
}
void MyGPIO_Set ( GPIO_TypeDef * GPIO , char Pin ){ //Passe le Pin séléctionné à 1
	GPIO->ODR = GPIO -> ODR | (1<<Pin);
}

void MyGPIO_Reset ( GPIO_TypeDef * GPIO , char Pin ){ //Passe le Pin séléctionné à 0
	GPIO->ODR = GPIO -> ODR | (0<<Pin);
}


void MyGPIO_Toggle ( GPIO_TypeDef * GPIO , char Pin ) { //Echange la valeur du Pin séléctionné 
	int value = MyGPIO_Read(GPIO, Pin);
	if (value == 0 ){
		MyGPIO_Set(GPIO,Pin);
	}
	else if (value == 1 ){
				MyGPIO_Reset(GPIO,Pin);
	}	
	
	/*void Test (){
	MyGPIO_Init(GPIOA, 2, Mod10, In_Analog);
	MyGPIO_Init(GPIOA, 15, Mod10, In_Floating);
	MyGPIO_Init(GPIOA, 5, Mod10, In_Floating);
	MyGPIO_Init(GPIOB, 5, Mod2, In_PullUp);
	MyGPIO_Init(GPIOC, 5, Mod50, Out_Ppull);
	MyGPIO_Init(GPIOD, 5, ModInput, Out_OD);
	}*/
	

	}
