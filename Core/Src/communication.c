/**
  ******************************************************************************
  * File Name          : communication.c
  * Description        : This file provides code for communication via
  * 					 USART.
  ******************************************************************************
  */

#include "communication.h"

void COM_Init()
{
	HAL_UART_Receive_IT(&huart3, data, 4);
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if(huart->Instance == USART3)
	{
		sscanf(data,"%d", &ref_val);
		HAL_UART_Receive_IT(&huart3, data, 4);
	}
}