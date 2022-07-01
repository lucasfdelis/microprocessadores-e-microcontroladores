/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx.h"
			
void atraso(int valor)
{
	while(valor) --valor;
}

int main(void)
{
	//palio melhor carro do brasil

	//Configuração do pino PA6 como saída digital
	RCC->AHB1ENR |= 1;				//habilita o clock do GPIOA

	GPIOA->MODER |= (1 << 12);		//seleciona modo de saída digital no pino
	GPIOA->MODER |= (1 << 14);
	while(1)
	{
		for (int i=0; i<=3; i++)
		{
			GPIOA->ODR = ~i << 6;
			atraso(6000000);
		}









//		GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
//		atraso(300000);
//		GPIOA->ODR |= (1 << 6);		//faz o estado do pino como HIGH
//
//
//
//		atraso(3000000);
//
//		GPIOA->ODR &= ~(1 << 6);
//		atraso(300000);
//		GPIOA->ODR |= (1 << 6);
//
//		atraso(1000000);
//
//		GPIOA->ODR &= ~(1 << 6);
//		atraso(300000);
//		GPIOA->ODR |= (1 << 6);
//		atraso(8000000);
	}

}
