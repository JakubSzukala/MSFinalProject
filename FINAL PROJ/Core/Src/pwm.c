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
void PWM_SetDutyCycle(float duty_cycle)
{
	TIM3 -> CCR2 = duty_cycle/100; // timer 3, channel 2,
}

/**
  * @brief Initialize PWM
  * @retval None
  */
void PWM_Init()
{
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_2);
}
