#ifndef MYGPIO_H
#define MYGPIO_H
#include "stm32f10x.h"

#define In_Floating 0b01 
#define In_PullDown 0b10 
#define In_PullUp 0b10
#define In_Analog 0b00
#define Out_Ppull 0b00 
#define Out_OD 0b01
#define AltOut_Ppull 0b10
#define AltOut_OD 0b11

#define ModInput 0b00
#define Mod10 0b01
#define Mod2 0b10
#define Mod50 0b11
 

void MyGPIO_Init (GPIO_TypeDef* GPIO, int Pin, int Mode, int CRLH ) ; // Configuration du PIN

int MyGPIO_Read ( GPIO_TypeDef * GPIO , char Pin ) ; // renvoie 0 ou autre chose differe n t de 0

void MyGPIO_Set ( GPIO_TypeDef * GPIO , char Pin ) ; //Passe le Pin séléctionné à 1

void MyGPIO_Reset ( GPIO_TypeDef * GPIO , char Pin ) ; //Passe le Pin séléctionné à 0

void MyGPIO_Toggle ( GPIO_TypeDef * GPIO , char Pin ) ; //Change le Pin d'état
#endif

//void Test (); //TEST



