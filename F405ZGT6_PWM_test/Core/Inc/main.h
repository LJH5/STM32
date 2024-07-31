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
extern TIM_HandleTypeDef htim2;
extern TIM_HandleTypeDef htim5;
extern TIM_HandleTypeDef htim7;
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
extern uint8_t upbit_flag;
extern uint16_t timer_counter;	// millisecond
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LEDR_L_Pin GPIO_PIN_2
#define LEDR_L_GPIO_Port GPIOE
#define LEDG_L_Pin GPIO_PIN_3
#define LEDG_L_GPIO_Port GPIOE
#define LEDB_L_Pin GPIO_PIN_4
#define LEDB_L_GPIO_Port GPIOE
#define LEDR_R_Pin GPIO_PIN_5
#define LEDR_R_GPIO_Port GPIOE
#define LEDG_R_Pin GPIO_PIN_6
#define LEDG_R_GPIO_Port GPIOE
#define PUR_1_Pin GPIO_PIN_0
#define PUR_1_GPIO_Port GPIOA
#define PUR_2_Pin GPIO_PIN_1
#define PUR_2_GPIO_Port GPIOA
#define DIR_1_Pin GPIO_PIN_2
#define DIR_1_GPIO_Port GPIOA
#define DIR_2_Pin GPIO_PIN_3
#define DIR_2_GPIO_Port GPIOA
#define SDO0_Pin GPIO_PIN_14
#define SDO0_GPIO_Port GPIOD
#define SDO1_Pin GPIO_PIN_15
#define SDO1_GPIO_Port GPIOD
#define SDO2_Pin GPIO_PIN_2
#define SDO2_GPIO_Port GPIOG
#define SDO3_Pin GPIO_PIN_3
#define SDO3_GPIO_Port GPIOG
#define SDO4_Pin GPIO_PIN_4
#define SDO4_GPIO_Port GPIOG
#define SDO5_Pin GPIO_PIN_5
#define SDO5_GPIO_Port GPIOG
#define SDO6_Pin GPIO_PIN_6
#define SDO6_GPIO_Port GPIOG
#define SDO7_Pin GPIO_PIN_7
#define SDO7_GPIO_Port GPIOG
#define DIR1_485_Pin GPIO_PIN_8
#define DIR1_485_GPIO_Port GPIOA
#define TXD1_485_Pin GPIO_PIN_9
#define TXD1_485_GPIO_Port GPIOA
#define RXD1_485_Pin GPIO_PIN_10
#define RXD1_485_GPIO_Port GPIOA
#define SDI0_Pin GPIO_PIN_9
#define SDI0_GPIO_Port GPIOG
#define SDI1_Pin GPIO_PIN_10
#define SDI1_GPIO_Port GPIOG
#define SDI2_Pin GPIO_PIN_11
#define SDI2_GPIO_Port GPIOG
#define SDI3_Pin GPIO_PIN_12
#define SDI3_GPIO_Port GPIOG
#define SDI4_Pin GPIO_PIN_13
#define SDI4_GPIO_Port GPIOG
#define SDI5_Pin GPIO_PIN_14
#define SDI5_GPIO_Port GPIOG
#define SDI6_Pin GPIO_PIN_15
#define SDI6_GPIO_Port GPIOG

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
