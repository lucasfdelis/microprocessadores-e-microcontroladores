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

#include <stdio.h>



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

	while(1){

		GPIOA->ODR |= (1 << 6);
		Delay_ms(50);
		GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
		Delay_ms(100);


		GPIOA->ODR |= (1 << 6);
		Delay_ms(50);
		GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
		Delay_ms(100);

		GPIOA->ODR |= (1 << 6);
		Delay_ms(50);
		GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
		Delay_ms(100);

		GPIOA->ODR |= (1 << 6);
		Delay_ms(50);
		GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
		Delay_ms(900);


	}

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
		int valor2 = 1000;
		while(1){
			GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
			Delay_us(valor1);
			GPIOA->ODR |= (1 << 6);
			Delay_us(valor2);
			valor2 = valor2-1;
			valor1 = valor1+1;
			if(valor1 == 1000){
				valor1 = 1;
				valor2 = 1000;
			}
		}
//		GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
//		Delay_ms(1000);
//		GPIOA->ODR |= (1 << 6);
//		Delay_ms(1000);
}

void q8(void){
	GPIOA->ODR &= ~(1 << 6);
	Delay_ms(500);
	GPIOA->ODR |= (1 << 6);

	GPIOA->ODR &= ~(1 << 7);
	Delay_ms(500);
	GPIOA->ODR |= (1 << 7);

}

void q9(void){
	while(1)
	{
		for (int i=0; i<=3; i++)
		{
			GPIOA->ODR = ~i << 6;
			Delay_ms(500);
		}
	}
}

void q10(void){



		int valor1 = 1;
		int valor2 = 1000;
		while(1){
			GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
			Delay_us(valor1);
			GPIOA->ODR |= (1 << 6);
			Delay_us(valor2);


			GPIOA->ODR &= ~(1 << 7);	//faz o estado do pino como LOW
			Delay_us(valor2);
			GPIOA->ODR |= (1 << 7);
			Delay_us(valor1);



			valor2 = valor2-1;
			valor1 = valor1+1;
			if(valor1 == 1000){
				valor1 = 1;
				valor2 = 1000;
			}
		}
}


void q14(void){

//	GPIOA->ODR |= (1 << 0); //Vermelho 1 aceso
//	GPIOA->ODR |= (1 << 1); // Amarelo 1 aceso
//	GPIOA->ODR |= (1 << 2); // Verde 1 aceso
//
//	GPIOA->ODR |= (1 << 11); // Vermelho 2 aceso
//	GPIOA->ODR |= (1 << 10); // Amarelo 2 aceso
//	GPIOA->ODR |= (1 << 9); // Verde 2 aceso
//
//	GPIOA->ODR &= ~(1 << 0); //Vermelho 1 apagado
//	GPIOA->ODR &= ~(1 << 1); // Amarelo 1 apagado
//	GPIOA->ODR &= ~(1 << 2); // Verde 1 apagado
//
//	GPIOA->ODR &= ~(1 << 11); // Vermelho 2 apagado
//	GPIOA->ODR &= ~(1 << 10); // Amarelo 2 apagado
//	GPIOA->ODR &= ~(1 << 9); // Verde 2 apagado

	GPIOA->ODR |= (1 << 0); //Vermelho 1 aceso
	GPIOA->ODR |= (1 << 9); // Verde 2 aceso
	Delay_ms(1000);

	GPIOA->ODR &= ~(1 << 9); // Verde 2 apagado
	GPIOA->ODR |= (1 << 10); // Amarelo 2 aceso
	Delay_ms(1000);

	GPIOA->ODR &= ~(1 << 10); // Amarelo 2 apagado
	GPIOA->ODR |= (1 << 11); // Vermelho 2 aceso
	GPIOA->ODR |= (1 << 2); // Verde 1 aceso
	GPIOA->ODR &= ~(1 << 0); //Vermelho 1 apagado
	Delay_ms(1000);

	GPIOA->ODR &= ~(1 << 2); // Verde 1 apagado
	GPIOA->ODR |= (1 << 1); // Amarelo 1 aceso
	Delay_ms(1000);

	GPIOA->ODR &= ~(1 << 1); // Amarelo 1 apagado
	GPIOA->ODR |= (1 << 0); //Vermelho 1 aceso
	GPIOA->ODR |= (1 << 9); // Verde 2 aceso
	GPIOA->ODR &= ~(1 << 11); // Vermelho 2 apagado


}


int main(void)
{
	//palio melhor carro do brasil

	Configure_Clock(); // configura sistema de clock do stm32
	Delay_Start(); // inicializa as fun��es de Delay
	//Configura��o do pino PA6 como sa�da digital
	RCC->AHB1ENR |= 1;				//habilita o clock do GPIOA
//
	GPIOA->MODER |= (1 << 0);		//seleciona modo de sa�da digital no pino
	GPIOA->MODER |= (1 << 2);		//seleciona modo de sa�da digital no pino
	GPIOA->MODER |= (1 << 4);		//seleciona modo de sa�da digital no pino
	GPIOA->MODER |= (1 << 18);		//seleciona modo de sa�da digital no pino
	GPIOA->MODER |= (1 << 20);		//seleciona modo de sa�da digital no pino
	GPIOA->MODER |= (1 << 22);		//seleciona modo de sa�da digital no pino


	while(1){
		q14();
	}




}
