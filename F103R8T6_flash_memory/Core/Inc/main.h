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
#include "stm32f1xx_hal.h"

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
#define IR_MGT_CS_1_Pin GPIO_PIN_12
#define IR_MGT_CS_1_GPIO_Port GPIOB
#define IR_MGT_CS_0_Pin GPIO_PIN_13
#define IR_MGT_CS_0_GPIO_Port GPIOB
#define SP_DI0_Pin GPIO_PIN_14
#define SP_DI0_GPIO_Port GPIOB
#define SP_DI1_Pin GPIO_PIN_15
#define SP_DI1_GPIO_Port GPIOB
#define CPSD_IN1_Pin GPIO_PIN_6
#define CPSD_IN1_GPIO_Port GPIOC
#define CPSD_IN2_Pin GPIO_PIN_7
#define CPSD_IN2_GPIO_Port GPIOC
#define CPSD_IN3_Pin GPIO_PIN_8
#define CPSD_IN3_GPIO_Port GPIOC
#define CPSD_IN4_Pin GPIO_PIN_9
#define CPSD_IN4_GPIO_Port GPIOC
#define MODE1_Pin GPIO_PIN_10
#define MODE1_GPIO_Port GPIOC
#define MODE2_Pin GPIO_PIN_11
#define MODE2_GPIO_Port GPIOC
#define STATUSLED_Pin GPIO_PIN_12
#define STATUSLED_GPIO_Port GPIOC
#define SP_DO1_Pin GPIO_PIN_6
#define SP_DO1_GPIO_Port GPIOB
#define SP_DO2_Pin GPIO_PIN_7
#define SP_DO2_GPIO_Port GPIOB
#define IR_DCS1_Pin GPIO_PIN_8
#define IR_DCS1_GPIO_Port GPIOB
#define IR_DCS2_Pin GPIO_PIN_9
#define IR_DCS2_GPIO_Port GPIOB

// Flash Memory
#define ADDR_FLASH_PAGE_0 ((uint32_t)0x08010000)
#define ADDR_FLASH_PAGE_1 ((uint32_t)0x08010010)
#define ADDR_FLASH_PAGE_2 ((uint32_t)0x08010020)
#define ADDR_FLASH_PAGE_3 ((uint32_t)0x08010030)
#define ADDR_FLASH_PAGE_4 ((uint32_t)0x08010040)

#define FLASH_USER ADDR_FLASH_PAGE_0
#define START_ADDR FLASH_USER
#define END_ADDR ADDR_FLASH_PAGE_4

/* USER CODE BEGIN Private defines */
extern UART_HandleTypeDef huart3;
extern CAN_HandleTypeDef hcan;

extern uint16_t adc_val1[16];
extern uint16_t adc_val2[16];
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
