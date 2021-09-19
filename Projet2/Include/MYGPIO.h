#ifndef MYGPIO_H
#define MYGPIO_H
#include "stm32f10x.h"

#define In_Floating 0x1 
#define In_PullDown 0x2 
#define In_PullUp 0x2
#define In_Analog 0x0
#define Out_Ppull 0x0 
#define Out_OD 0x1
#define AltOut_Ppull 0x2
#define AltOut_OD 0x3

#define ModInput 0x0
#define Mod10 0x1
#define Mod2 0x2
#define Mod50 0x3
 

void MyGPIO_Init (GPIO_TypeDef* GPIO, int Pin, int Mode, int CRLH ) ; // Configuration du PIN

int MyGPIO_Read ( GPIO_TypeDef * GPIO , char Pin ) ; // renvoie 0 ou autre chose differe n t de 0

void MyGPIO_Set ( GPIO_TypeDef * GPIO , char Pin ) ; //Passe le Pin séléctionné à 1

void MyGPIO_Reset ( GPIO_TypeDef * GPIO , char Pin ) ; //Passe le Pin séléctionné à 0

void MyGPIO_Toggle ( GPIO_TypeDef * GPIO , char Pin ) ; //Change le Pin d'état

void Test (void); //Procedure de test des pins et modes
#endif

//void Test (); //TEST



