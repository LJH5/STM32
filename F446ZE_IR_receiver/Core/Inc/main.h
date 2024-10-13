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
enum _SamplingStep
{
	SAMPLING_READY = 0x00,
	SAMPLING_START,
	SAMPLING_DATA
};
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
#define USER_Btn_Pin GPIO_PIN_13
#define USER_Btn_GPIO_Port GPIOC
#define MCO_Pin GPIO_PIN_0
#define MCO_GPIO_Port GPIOH
#define LD1_Pin GPIO_PIN_0
#define LD1_GPIO_Port GPIOB
#define LD3_Pin GPIO_PIN_14
#define LD3_GPIO_Port GPIOB
#define STLK_RX_Pin GPIO_PIN_8
#define STLK_RX_GPIO_Port GPIOD
#define STLK_TX_Pin GPIO_PIN_9
#define STLK_TX_GPIO_Port GPIOD
#define USB_PowerSwitchOn_Pin GPIO_PIN_6
#define USB_PowerSwitchOn_GPIO_Port GPIOG
#define USB_OverCurrent_Pin GPIO_PIN_7
#define USB_OverCurrent_GPIO_Port GPIOG
#define USB_SOF_Pin GPIO_PIN_8
#define USB_SOF_GPIO_Port GPIOA
#define USB_VBUS_Pin GPIO_PIN_9
#define USB_VBUS_GPIO_Port GPIOA
#define USB_ID_Pin GPIO_PIN_10
#define USB_ID_GPIO_Port GPIOA
#define USB_DM_Pin GPIO_PIN_11
#define USB_DM_GPIO_Port GPIOA
#define USB_DP_Pin GPIO_PIN_12
#define USB_DP_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_7
#define LD2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
#define REMOCON_DATABITS                32
#define SAMSUNG_DATABITS                56
#define MAX_IRQueueSIZE                (REMOCON_DATABITS * 5)

#define FAIL														0
#define SUCCESS													1

#define IR_STANDBY                      0
#define IR_DATA_IN                      1
#define IR_NEC_LEADER           				2
#define IR_SAMSUNG_LEADER               3
#define IR_TC9012_LEADER                4
#define IR_NO_MORE                      5

#define NEC_LEADER_LOW                  9000
#define NEC_LEADER_HIGH                 4500

#define NEC_0_HIGH                      562
#define NEC_0_LOW                       562

#define NEC_1_HIGH                      1675
#define NEC_1_LOW                       562

#define REPEAT_HIGH											2250

#define NEC_0_LENGTH										(NEC_0_HIGH + NEC_0_LOW)
#define NEC_1_LENGTH										(NEC_1_HIGH + NEC_1_LOW)


// Tolerance
#define MIN_NEC_LEADER_LOW							(NEC_LEADER_LOW - 100)
#define MAX_NEC_LEADER_LOW							(NEC_LEADER_LOW + 500)

#define MIN_NEC_LEADER_HIGH							(NEC_LEADER_HIGH - 200)
#define MAX_NEC_LEADER_HIGH							(NEC_LEADER_HIGH + 200)

#define MIN_0_LENGTH        	          (NEC_0_LENGTH - 120)
#define MAX_0_LENGTH                    (NEC_0_LENGTH + 70)

#define MIN_1_LENGTH                    (NEC_1_LENGTH - 250)
#define MAX_1_LENGTH                    (NEC_1_LENGTH + 150)

#define MIN_REPEAT_HIGH									(REPEAT_HIGH - 100)
#define MAX_REPEAT_HIGH									(REPEAT_HIGH + 100)

typedef struct
{
	uint8_t Bytes;
	uint8_t Code[16];
}REMOCONCODE;

typedef struct
{
	uint8_t Head, Tail, Data, State, Bits;
	uint16_t QueueHigh[MAX_IRQueueSIZE];
	uint16_t QueueLow[MAX_IRQueueSIZE];
}IRQUEUE;

extern REMOCONCODE RemoconCode;
extern IRQUEUE IRQueue;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
