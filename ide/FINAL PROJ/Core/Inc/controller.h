/**
  ******************************************************************************
  * File Name          : controller.c
  * Description        : This file provides code for PID controller.
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef INC_CONTROLLER_H_
#define INC_CONTROLLER_H_

/* Includes ------------------------------------------------------------------*/
#include "arm_math.h"
#include "main.h"

/* Defines -------------------------------------------------------------------*/
#define PID_PARAM_KP		10.0
#define PID_PARAM_KI        10.0
#define PID_PARAM_KD       	1.0

/* Variables -----------------------------------------------------------------*/
extern arm_pid_instance_f32 PID;

/* Function prototypes -------------------------------------------------------*/
void PID_Init();
float PID_GetDuty(float meas_val, float ref_val);

#endif /* INC_CONTROLLER_H_ */
