/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define IVMeter_IND_Pin GPIO_PIN_0
#define IVMeter_IND_GPIO_Port GPIOC
#define RST_Pin GPIO_PIN_1
#define RST_GPIO_Port GPIOC
#define brake1_Pin GPIO_PIN_2
#define brake1_GPIO_Port GPIOC
#define brake2_Pin GPIO_PIN_3
#define brake2_GPIO_Port GPIOC
#define acc1_Pin GPIO_PIN_0
#define acc1_GPIO_Port GPIOA
#define acc2_Pin GPIO_PIN_1
#define acc2_GPIO_Port GPIOA
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define IVL_Down_Pin GPIO_PIN_4
#define IVL_Down_GPIO_Port GPIOA
#define IVTS_HALF_Pin GPIO_PIN_5
#define IVTS_HALF_GPIO_Port GPIOA
#define SHUTDOWN_Pin GPIO_PIN_6
#define SHUTDOWN_GPIO_Port GPIOA
#define PTS_HALF_Pin GPIO_PIN_7
#define PTS_HALF_GPIO_Port GPIOA
#define brakeIn_Pin GPIO_PIN_4
#define brakeIn_GPIO_Port GPIOC
#define BTS_HALF_Pin GPIO_PIN_5
#define BTS_HALF_GPIO_Port GPIOC
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
