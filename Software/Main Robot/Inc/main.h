/**
******************************************************************************
 * @file            : main.h
 * @brief           : This file contains the common defines of the BLACK-R
 * @AUTHOR          : BLACK-R Team      
 * @Date            : 3 Nov 2019
 * @version         : 0.1
 * @Control Version : Git
******************************************************************************
 **/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/


void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)


#endif /* __MAIN_H */

/************************ (C) COPYRIGHT BLACK-R Team *****END OF FILE****/
