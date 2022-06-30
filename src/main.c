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

	while(1)
	{

		int valor = 1000000;

				while(valor != 0){
					GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
					atraso(100000);
					GPIOA->ODR |= (1 << 6);		//faz o estado do pino como HIGH
					atraso(valor);
					valor = valor - 10000;

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
