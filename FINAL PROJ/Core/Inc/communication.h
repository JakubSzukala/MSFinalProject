/**
  ******************************************************************************
  * File Name          : communication.h
  * Description        : This file provides code for communication via
  * 					 USART.
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef INC_COMMUNICATION_H_
#define INC_COMMUNICATION_H_

/* Includes ------------------------------------------------------------------*/
#include "usart.h"
#include "main.h"
#include <stdio.h>

/* Variables -----------------------------------------------------------------*/
extern int reference;
uint8_t data[4];

/* Function prototypes -------------------------------------------------------*/
void Serial_Init();

void app_conmunication(int app_value);

#endif /* INC_COMMUNICATION_H_ */
