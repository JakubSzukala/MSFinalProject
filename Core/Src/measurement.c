/**
  ******************************************************************************
  * File Name          : measurement.c
  * Description        : This file provides code for receiving and
  * 					 converting data from BH1750 sensor.
  ******************************************************************************
  */

#include "measurement.h"

/**
  * @brief Initialize sensor BH1750
  * @retval None
  */
void BH1750_Init()
{
	uint8_t command;

	/* Power sensor ON */
	command = BH1750_POWER_ON;
	HAL_I2C_Master_Transmit(&hi2c1, BH1750_ADDRESS, &command, 1, 0xffff);

	/* Select measurement mode */
	command = BH1750_CONTINOUS_H_RES_MODE;
	HAL_I2C_Master_Transmit(&hi2c1, BH1750_ADDRESS, &command, 1, 0xffff);
}

/**
  * @brief Read value from sensor BH1750
  * @retval Measured luminous intensity in lux
  */
float BH1750_Read()
{
	float light = 0;
	uint8_t buff[2];

	/* Read value from sensor */
	HAL_I2C_Master_Receive(&hi2c1, BH1750_ADDRESS, buff, 2, 0xffff);

	/* Convert value to lux */
	light = ((buff[0]<<8) | buff[1]) / 1.2;

	return light;
}

