#include "stm32f10x.h"

int value = 1; 
int main (void)
{
RCC->APB2ENR |= (0x01 << 2) | (0x01 << 3) | (0x01 << 4) ;
do
{
GPIOC-> CRL = GPIOC -> CRL &~ (0xF << 20); //Mise à 0
GPIOC-> CRL = GPIOC -> CRL | (0x1 << 20);//configuration LED PUSH PULL sur GPIOC pin C5
GPIOC->ODR = GPIOC -> ODR | (1<<5);// Mise à 1 de C5 => Allume LED

GPIOC-> CRL = GPIOC -> CRL &~ (0xF << 24); //Mise à 0
GPIOC-> CRL = GPIOC -> CRL | (0x1 << 26);//configuration POUSSOIR sur GPIOC pin C6
value=(GPIOC -> IDR & (0x1<<6))>>6;// Mise à 1 de C5 => Allume LED	

}while(1) ;
}
