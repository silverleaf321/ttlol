#ifndef INC_FEB_TPS2482_H_
#define INC_FEB_TPS2482_H_

// **************************************** Includes ****************************************

#include "FEB_CAN_ID.h"


#include "stm32f4xx_hal.h"
#include "stdio.h"
#include "stdint.h"
#include <string.h>

//**************************************** SETUP ***************************


// ********************************** Functions **********************************


void FEB_TPS2482_Setup();
void FEB_TPS2482_shutdownIfError(I2C_HandleTypeDef * hi2c, uint8_t DEV_ADDR, GPIO_TypeDef * EN, uint16_t EN_NUM, GPIO_TypeDef * AL, uint16_t AL_NUM,
		GPIO_TypeDef * PG, uint16_t PG_NUM, float VMAX, float VMIN, float IMAX, float IMIN, float PMAX, float PMIN);
void FEB_TPS2482_pullLowIfOutOfBounds(I2C_HandleTypeDef * hi2c, uint8_t DEV_ADDR, GPIO_TypeDef * EN, uint16_t EN_NUM, float MAX, float MIN,
		uint8_t REG);
float FEB_TPS2482_PollBusCurrent(I2C_HandleTypeDef * hi2c, uint8_t DEV_ADDR);
float FEB_TPS2482_PollBusVoltage(I2C_HandleTypeDef * hi2c, uint8_t DEV_ADDR);
void FEB_TPS2482_sendReadings();
//Remove when done. This was made to calibrate the calibration value
float FEB_TPS2482_GetShunt(I2C_HandleTypeDef * hi2c, uint8_t DEV_ADDR);
void FEB_TPS2482_CAN_Transmit(float reading);

#endif /* INC_FEB_TPS2482_H_ */
