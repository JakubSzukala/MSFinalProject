/**
  ******************************************************************************
  * File Name          : measurement.h
  * Description        : This file provides code for receiving and
  * 					 converting data from BH1750 sensor.
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef INC_MEASUREMENT_H_
#define INC_MEASUREMENT_H_

/* Includes ------------------------------------------------------------------*/
#include "i2c.h"
#include "main.h"

/* Defines -------------------------------------------------------------------*/
#define BH1750_POWER_ON 				0x01
#define BH1750_CONTINOUS_H_RES_MODE		0x10
#define BH1750_ADDRESS					(0x23 << 1)

/* Function prototypes -------------------------------------------------------*/
void BH1750_Init();
float BH1750_Read();

#endif /* INC_MEASUREMENT_H_ */
