/**
  ******************************************************************************
  * File Name          : communication.c
  * Description        : This file provides code for communication via
  * 					 USART.
  ******************************************************************************
  */

#include "communication.h"

void Serial_Init()
{
	HAL_UART_Receive_IT(&huart3, data, 4);
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if(huart->Instance == USART3)
	{
		sscanf(data,"%d", &reference); //read data from buffer and put to reference value
		HAL_UART_Receive_IT(&huart3, data, 4);
	}
}

void app_conmunication(int app_value)
{
	  char buffer [4];
	  int n=sprintf (buffer, "%d", app_value);
	  HAL_UART_Transmit_IT(&huart3, (uint8_t*)buffer, n);
}

