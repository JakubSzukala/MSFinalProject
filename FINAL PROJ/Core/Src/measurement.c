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
	uint8_t tmp;

	tmp = BH1750_POWER_ON;	// Power On sensor
	HAL_I2C_Master_Transmit(&hi2c1, BH1750_ADDRESS, &tmp, 1, 0xffff);

	tmp = BH1750_CONTINOUS_H_RES_MODE;	// Select sensor measurement mode
	HAL_I2C_Master_Transmit(&hi2c1, BH1750_ADDRESS, &tmp, 1, 0xffff);
}

/**
  * @brief Read value from sensor BH1750
  * @retval Measured luminous intensity in lux
  */
float BH1750_Read()
{
	float brightness = 0; //brightness in LUX
	uint8_t buff[2];

	HAL_I2C_Master_Receive(&hi2c1, BH1750_ADDRESS, buff, 2, 0xffff);	//Read value from sensor,

	brightness = ((buff[0]<<8) | buff[1]) / 1.2;	// Convert value to LUX, in lower bytes
/*
 * 1000_0011
 * 1001_0000
 * 1000001110010000=LUX
 */

	return brightness;
}

