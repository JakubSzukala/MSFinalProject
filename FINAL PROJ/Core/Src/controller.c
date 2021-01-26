/**
  ******************************************************************************
  * File Name          : controller.c
  * Description        : This file provides code for PID controller.
  ******************************************************************************
  */

#include "controller.h"

/**
  * @brief Initialize PID
  * @retval None
  */
void PID_Init()
{
	/* Giving parameters for PID */
	PID.Kp = PID_PARAM_KP;
	PID.Ki = PID_PARAM_KI;
	PID.Kd = PID_PARAM_KD;

	/* Initialize PID */
	arm_pid_init_f32(&PID, 1);
}

/**
  * @brief Calculate duty
  * @param measurement value measured from sensor
  * @param reference value set by user
  * @retval duty_cycle
  */
float PID_GetDutyCycle(float measurement, float reference)
{
	float pid_error = reference - measurement;
	float duty_cycle = arm_pid_f32(&PID, pid_error);
	return duty_cycle;
}
