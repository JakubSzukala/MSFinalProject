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
#define PID_PARAM_KP		10.0 //proportional gain
#define PID_PARAM_KI        10.0 //integral gain
#define PID_PARAM_KD       	1.0  //derivative gain

/* Variables -----------------------------------------------------------------*/
extern arm_pid_instance_f32 PID; //external declaration of PID controller, global PID controller

/* Function prototypes -------------------------------------------------------*/
void PID_Init(); // init of PID
float PID_GetDutyCycle(float measurement, float reference);

#endif /* INC_CONTROLLER_H_ */
