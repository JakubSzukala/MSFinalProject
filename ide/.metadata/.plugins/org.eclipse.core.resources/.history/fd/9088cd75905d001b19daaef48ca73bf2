/**
  ******************************************************************************
  * File Name          : pwm.c
  * Description        : This file provides code for controlling PWM.
  ******************************************************************************
  */

#include "pwm.h"

/**
  * @brief Set PWM duty
  * @retval None
  */
void PWM_SetDuty(float duty)
{
	TIM3 -> CCR1 = duty/100;
}

/**
  * @brief Initialize PWM
  * @retval None
  */
void PWM_Init()
{
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
}
