/*
 * it.c
 *
 *  Created on: Aug 24, 2021
 *      Author: neeraj5k
 */

#include "main.h"

extern UART_HandleTypeDef huart2;
extern TIM_HandleTypeDef htimer6;
extern TIM_HandleTypeDef htimer2;
extern CAN_HandleTypeDef hcan1;

void SysTick_Handler(void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}


void USART2_IRQHandler(void)
{
	/* Uncomment when UART IRQ is needed */
	HAL_UART_IRQHandler(&huart2);
}

/* Uncomment when TIM6 IRQ is needed */
//void TIM6_DAC_IRQHandler(void)
//{
//	HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
//	HAL_TIM_IRQHandler(&htimer6);
//}

/* Uncomment when TIM2 IRQ is needed */
//void TIM2_IRQHandler(void)
//{
//	HAL_TIM_IRQHandler(&htimer2);
//}


void CAN1_TX_IRQHandler(void)
{
	HAL_CAN_IRQHandler(&hcan1);

}


void CAN1_RX0_IRQHandler(void)
{
	HAL_CAN_IRQHandler(&hcan1);

}


void CAN1_RX1_IRQHandler(void)
{
	HAL_CAN_IRQHandler(&hcan1);

}


void CAN1_SCE_IRQHandler(void)
{
	HAL_CAN_IRQHandler(&hcan1);

}
