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
			
#include "Utility.h"




void q3(void){

	GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
	Delay_ms(50);
	GPIOA->ODR |= (1 << 6);
	Delay_ms(1000);

	GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
	Delay_ms(50);
	GPIOA->ODR |= (1 << 6);
	Delay_ms(250);

	GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
	Delay_ms(50);
	GPIOA->ODR |= (1 << 6);
	Delay_ms(1000);

}



void q2(void){


	GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
	Delay_ms(100);
	GPIOA->ODR |= (1 << 6);
	Delay_ms(1900);



}


void q1(void){


	GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
	Delay_ms(250);
	GPIOA->ODR |= (1 << 6);
	Delay_ms(250);



}


void q4(void){


	int delay = 1000;

	while(delay != 0){
		GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
		Delay_ms(50);
		GPIOA->ODR |= (1 << 6);		//faz o estado do pino como HIGH
		Delay_ms(delay);
		delay = delay - 80;

	}



}

void q5(void){

}

void q6(void){
		GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
		Delay_ms(1);
		GPIOA->ODR |= (1 << 6);
		Delay_ms(9);
//		GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
//		Delay_ms(1000);
//		GPIOA->ODR |= (1 << 6);
//		Delay_ms(1000);
}

void q7(void){
		int valor1 = 1;
		while(1){
			GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
			Delay_ms(valor1);
			GPIOA->ODR |= (1 << 6);
			Delay_ms(15);
			valor1 = valor1+1;
			if(valor1 == 15){
				valor1 = 1;
			}
		}
//		GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
//		Delay_ms(1000);
//		GPIOA->ODR |= (1 << 6);
//		Delay_ms(1000);
}


int main(void)
{
	//palio melhor carro do brasil

	Configure_Clock(); // configura sistema de clock do stm32
	Delay_Start(); // inicializa as funções de Delay
	//Configuração do pino PA6 como saída digital
	RCC->AHB1ENR |= 1;				//habilita o clock do GPIOA

	GPIOA->MODER |= (1 << 12);		//seleciona modo de saída digital no pino

	while(1)
	{

		q7();








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
