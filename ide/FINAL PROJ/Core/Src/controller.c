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
	/* Set parameters for PID */
	PID.Kp = PID_PARAM_KP; //gain
	PID.Ki = PID_PARAM_KI; //inte
	PID.Kd = PID_PARAM_KD; //deriv

	/* Initialize PID */
	arm_pid_init_f32 (&PID, 1);
}

/**
  * @brief Calculate duty
  * @param meas_val Value measured from sensor
  * @param ref_val Value desired by user
  * @retval Duty
  */
float PID_GetDuty(float meas_val, float ref_val)
{
	float pid_error = ref_val - meas_val;
	float duty = arm_pid_f32(&PID, pid_error);
	return duty;
}
