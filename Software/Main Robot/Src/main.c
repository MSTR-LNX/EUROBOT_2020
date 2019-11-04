/**
******************************************************************************
 * @file            : main.c
 * @brief           : Main program body
 * @AUTHOR          : BLACK-R Team      
 * @Date            : 3 Nov 2019
 * @version         : 0.1
 * @Control Version : Git
******************************************************************************
 **/

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f4xx_hal.h"


/* Note : the RSP Should not be included here in the Future */ 
#include "RSP_CLOCK/RSP_RCC.h"

int main(void)
{
  HAL_Init();
  /* Just a demo for the NewAch*/
  RSP_RCC_Initialization();

  for(;;)
  {
  }
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  if (htim->Instance == TIM6) 
  {
    HAL_IncTick();
  }
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  None
  * @retval None
  */
void _Error_Handler(char * file, int line)
{
  /* User can add his own implementation to report the HAL error return state */
  while(1) 
  {
  }
}

#ifdef USE_FULL_ASSERT

/**
   * @brief Reports the name of the source file and the source line number
   * where the assert_param error has occurred.
   * @param file: pointer to the source file name
   * @param line: assert_param error line source number
   * @retval None
   */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* User can add his own implementation to report the file name and line number,
    ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
}

#endif

/************************ (C) COPYRIGHT BLACK-R Team *****END OF FILE****/
