/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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

#include "stm32f3xx_ll_rcc.h"
#include "stm32f3xx_ll_bus.h"
#include "stm32f3xx_ll_system.h"
#include "stm32f3xx_ll_exti.h"
#include "stm32f3xx_ll_cortex.h"
#include "stm32f3xx_ll_utils.h"
#include "stm32f3xx_ll_pwr.h"
#include "stm32f3xx_ll_dma.h"
#include "stm32f3xx_ll_tim.h"
#include "stm32f3xx_ll_gpio.h"

#if defined(USE_FULL_ASSERT)
#include "stm32_assert.h"
#endif /* USE_FULL_ASSERT */

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <string.h>
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */
#define STR_DISP_LEN 4
/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
uint8_t displayString(uint8_t index, uint8_t* str, uint8_t length);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define S_B_Pin LL_GPIO_PIN_0
#define S_B_GPIO_Port GPIOA
#define S_A_Pin LL_GPIO_PIN_1
#define S_A_GPIO_Port GPIOA
#define D_3_Pin LL_GPIO_PIN_2
#define D_3_GPIO_Port GPIOA
#define S_F_Pin LL_GPIO_PIN_3
#define S_F_GPIO_Port GPIOA
#define D_1_Pin LL_GPIO_PIN_4
#define D_1_GPIO_Port GPIOA
#define D_0_Pin LL_GPIO_PIN_5
#define D_0_GPIO_Port GPIOA
#define D_2_Pin LL_GPIO_PIN_6
#define D_2_GPIO_Port GPIOA
#define D_T_Pin LL_GPIO_PIN_7
#define D_T_GPIO_Port GPIOA
#define S_DP_Pin LL_GPIO_PIN_1
#define S_DP_GPIO_Port GPIOB
#define S_C_Pin LL_GPIO_PIN_8
#define S_C_GPIO_Port GPIOA
#define S_E_Pin LL_GPIO_PIN_11
#define S_E_GPIO_Port GPIOA
#define S_G_Pin LL_GPIO_PIN_4
#define S_G_GPIO_Port GPIOB
#define S_D_Pin LL_GPIO_PIN_5
#define S_D_GPIO_Port GPIOB
#ifndef NVIC_PRIORITYGROUP_0
#define NVIC_PRIORITYGROUP_0         ((uint32_t)0x00000007) /*!< 0 bit  for pre-emption priority,
                                                                 4 bits for subpriority */
#define NVIC_PRIORITYGROUP_1         ((uint32_t)0x00000006) /*!< 1 bit  for pre-emption priority,
                                                                 3 bits for subpriority */
#define NVIC_PRIORITYGROUP_2         ((uint32_t)0x00000005) /*!< 2 bits for pre-emption priority,
                                                                 2 bits for subpriority */
#define NVIC_PRIORITYGROUP_3         ((uint32_t)0x00000004) /*!< 3 bits for pre-emption priority,
                                                                 1 bit  for subpriority */
#define NVIC_PRIORITYGROUP_4         ((uint32_t)0x00000003) /*!< 4 bits for pre-emption priority,
                                                                 0 bit  for subpriority */
#endif
/* USER CODE BEGIN Private defines */
typedef enum {
	Direction_DownUp, Direction_UpDown
} Direction_;

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
