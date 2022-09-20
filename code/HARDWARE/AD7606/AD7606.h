#ifndef __AD7606_H
#define __AD7606_H

#include "sys.h"
#include "delay.h"

#define ADC1_D2_Pin GPIO_Pin_2
#define ADC1_D2_GPIO_Port GPIOE
#define ADC1_D3_Pin GPIO_Pin_3
#define ADC1_D3_GPIO_Port GPIOE
#define ADC1_D4_Pin GPIO_Pin_4
#define ADC1_D4_GPIO_Port GPIOE
#define ADC1_D5_Pin GPIO_Pin_5
#define ADC1_D5_GPIO_Port GPIOE
#define ADC1_D6_Pin GPIO_Pin_6
#define ADC1_D6_GPIO_Port GPIOE
#define ENB2_8_Pin GPIO_Pin_0
#define ENB2_8_GPIO_Port GPIOC
#define ENB2_7_Pin GPIO_Pin_1
#define ENB2_7_GPIO_Port GPIOC
#define ENB2_6_Pin GPIO_Pin_2
#define ENB2_6_GPIO_Port GPIOC
#define ENB2_5_Pin GPIO_Pin_3
#define ENB2_5_GPIO_Port GPIOC
#define KEY_Pin GPIO_Pin_0
#define KEY_GPIO_Port GPIOA
#define KEY_EXTI_IRQn EXTI0_IRQn
#define ENB2_4_Pin GPIO_Pin_1
#define ENB2_4_GPIO_Port GPIOA
#define ENB2_3_Pin GPIO_Pin_2
#define ENB2_3_GPIO_Port GPIOA
#define ENB2_2_Pin GPIO_Pin_3
#define ENB2_2_GPIO_Port GPIOA
#define ENB2_1_Pin GPIO_Pin_4
#define ENB2_1_GPIO_Port GPIOA
#define ADC1_FRST_Pin GPIO_Pin_7
#define ADC1_FRST_GPIO_Port GPIOA
#define ADC1_BUSY_Pin GPIO_Pin_4
#define ADC1_BUSY_GPIO_Port GPIOC
#define ADC1_CS_Pin GPIO_Pin_5
#define ADC1_CS_GPIO_Port GPIOC
#define ADC1_RD_Pin GPIO_Pin_0
#define ADC1_RD_GPIO_Port GPIOB
#define ADC1_RST_Pin GPIO_Pin_1
#define ADC1_RST_GPIO_Port GPIOB
#define ADC1_CVAB_Pin GPIO_Pin_2
#define ADC1_CVAB_GPIO_Port GPIOB
#define ADC1_D7_Pin GPIO_Pin_7
#define ADC1_D7_GPIO_Port GPIOE
#define ADC1_D8_Pin GPIO_Pin_8
#define ADC1_D8_GPIO_Port GPIOE
#define ADC1_D9_Pin GPIO_Pin_9
#define ADC1_D9_GPIO_Port GPIOE
#define ADC1_D10_Pin GPIO_Pin_10
#define ADC1_D10_GPIO_Port GPIOE
#define ADC1_D11_Pin GPIO_Pin_11
#define ADC1_D11_GPIO_Port GPIOE
#define ADC1_D12_Pin GPIO_Pin_12
#define ADC1_D12_GPIO_Port GPIOE
#define ADC1_D13_Pin GPIO_Pin_13
#define ADC1_D13_GPIO_Port GPIOE
#define ADC1_D14_Pin GPIO_Pin_14
#define ADC1_D14_GPIO_Port GPIOE
#define ADC1_D15_Pin GPIO_Pin_15
#define ADC1_D15_GPIO_Port GPIOE
#define ADC2_D8_Pin GPIO_Pin_8
#define ADC2_D8_GPIO_Port GPIOD
#define ADC2_D9_Pin GPIO_Pin_9
#define ADC2_D9_GPIO_Port GPIOD
#define ADC2_D10_Pin GPIO_Pin_10
#define ADC2_D10_GPIO_Port GPIOD
#define ADC2_D11_Pin GPIO_Pin_11
#define ADC2_D11_GPIO_Port GPIOD
#define ADC2_D12_Pin GPIO_Pin_12
#define ADC2_D12_GPIO_Port GPIOD
#define ADC2_D13_Pin GPIO_Pin_13
#define ADC2_D13_GPIO_Port GPIOD
#define ADC2_D14_Pin GPIO_Pin_14
#define ADC2_D14_GPIO_Port GPIOD
#define ADC2_D15_Pin GPIO_Pin_15
#define ADC2_D15_GPIO_Port GPIOD
#define ADC2_FRST_Pin GPIO_Pin_6
#define ADC2_FRST_GPIO_Port GPIOC
#define ADC2_BUSY_Pin GPIO_Pin_7
#define ADC2_BUSY_GPIO_Port GPIOC
#define ADC2_CS_Pin GPIO_Pin_8
#define ADC2_CS_GPIO_Port GPIOC
#define ADC2_RD_Pin GPIO_Pin_9
#define ADC2_RD_GPIO_Port GPIOC
#define ADC2_RST_Pin GPIO_Pin_8
#define ADC2_RST_GPIO_Port GPIOA
#define ADC2_CVAB_Pin GPIO_Pin_11
#define ADC2_CVAB_GPIO_Port GPIOA
#define redLED_Pin GPIO_Pin_15
#define redLED_GPIO_Port GPIOA
#define blueLED_Pin GPIO_Pin_10
#define blueLED_GPIO_Port GPIOC
#define greenLED_Pin GPIO_Pin_11
#define greenLED_GPIO_Port GPIOC
#define ENB1_8_Pin GPIO_Pin_12
#define ENB1_8_GPIO_Port GPIOC
#define ADC2_D0_Pin GPIO_Pin_0
#define ADC2_D0_GPIO_Port GPIOD
#define ADC2_D1_Pin GPIO_Pin_1
#define ADC2_D1_GPIO_Port GPIOD
#define ADC2_D2_Pin GPIO_Pin_2
#define ADC2_D2_GPIO_Port GPIOD
#define ADC2_D3_Pin GPIO_Pin_3
#define ADC2_D3_GPIO_Port GPIOD
#define ADC2_D4_Pin GPIO_Pin_4
#define ADC2_D4_GPIO_Port GPIOD
#define ADC2_D5_Pin GPIO_Pin_5
#define ADC2_D5_GPIO_Port GPIOD
#define ADC2_D6_Pin GPIO_Pin_6
#define ADC2_D6_GPIO_Port GPIOD
#define ADC2_D7_Pin GPIO_Pin_7
#define ADC2_D7_GPIO_Port GPIOD
#define ENB1_7_Pin GPIO_Pin_3
#define ENB1_7_GPIO_Port GPIOB
#define ENB1_6_Pin GPIO_Pin_4
#define ENB1_6_GPIO_Port GPIOB
#define ENB1_5_Pin GPIO_Pin_5
#define ENB1_5_GPIO_Port GPIOB
#define ENB1_4_Pin GPIO_Pin_6
#define ENB1_4_GPIO_Port GPIOB
#define ENB1_3_Pin GPIO_Pin_7
#define ENB1_3_GPIO_Port GPIOB
#define ENB1_2_Pin GPIO_Pin_8
#define ENB1_2_GPIO_Port GPIOB
#define ENB1_1_Pin GPIO_Pin_9
#define ENB1_1_GPIO_Port GPIOB
#define ADC1_D0_Pin GPIO_Pin_0
#define ADC1_D0_GPIO_Port GPIOE
#define ADC1_D1_Pin GPIO_Pin_1
#define ADC1_D1_GPIO_Port GPIOE
#define OS1_0_Pin GPIO_Pin_12
#define OS1_0_GPIO_Port GPIOB
#define OS1_1_Pin GPIO_Pin_11
#define OS1_1_GPIO_Port GPIOB
#define OS1_2_Pin GPIO_Pin_10
#define OS1_2_GPIO_Port GPIOB
#define OS2_0_Pin GPIO_Pin_15
#define OS2_0_GPIO_Port GPIOB
#define OS2_1_Pin GPIO_Pin_14
#define OS2_1_GPIO_Port GPIOB
#define OS2_2_Pin GPIO_Pin_13
#define OS2_2_GPIO_Port GPIOB


#define ADC1_CVAB_L GPIO_ResetBits(ADC1_CVAB_GPIO_Port,ADC1_CVAB_Pin);
#define ADC1_CVAB_H GPIO_SetBits(ADC1_CVAB_GPIO_Port,ADC1_CVAB_Pin);
#define ADC1_RST_L GPIO_ResetBits(ADC1_RST_GPIO_Port,ADC1_RST_Pin);
#define ADC1_RST_H GPIO_SetBits(ADC1_RST_GPIO_Port,ADC1_RST_Pin);
#define ADC1_CS_L GPIO_ResetBits(ADC1_CS_GPIO_Port,ADC1_CS_Pin);
#define ADC1_CS_H GPIO_SetBits(ADC1_CS_GPIO_Port,ADC1_CS_Pin);
#define ADC1_BUSY GPIO_ReadInputDataBit(ADC1_BUSY_GPIO_Port, ADC1_BUSY_Pin)
#define ADC1_RD_L GPIO_ResetBits(ADC1_RD_GPIO_Port,ADC1_RD_Pin);
#define ADC1_RD_H GPIO_SetBits(ADC1_RD_GPIO_Port,ADC1_RD_Pin);

#define ADC2_CVAB_L GPIO_ResetBits(ADC2_CVAB_GPIO_Port,ADC2_CVAB_Pin);
#define ADC2_CVAB_H GPIO_SetBits(ADC2_CVAB_GPIO_Port,ADC2_CVAB_Pin);
#define ADC2_RST_L GPIO_ResetBits(ADC2_RST_GPIO_Port,ADC2_RST_Pin);
#define ADC2_RST_H GPIO_SetBits(ADC2_RST_GPIO_Port,ADC2_RST_Pin);
#define ADC2_CS_L GPIO_ResetBits(ADC2_CS_GPIO_Port,ADC2_CS_Pin);
#define ADC2_CS_H GPIO_SetBits(ADC2_CS_GPIO_Port,ADC2_CS_Pin);
#define ADC2_BUSY GPIO_ReadInputDataBit(ADC2_BUSY_GPIO_Port, ADC2_BUSY_Pin)
#define ADC2_RD_L GPIO_ResetBits(ADC2_RD_GPIO_Port,ADC2_RD_Pin);
#define ADC2_RD_H GPIO_SetBits(ADC2_RD_GPIO_Port,ADC2_RD_Pin);

void AD7606_1_startconvst(void);
void AD7606_2_startconvst(void);
void AD7606_1_reset(void);
void AD7606_2_reset(void);
void AD7606_init(void);
int AD7606_1_readOneData(void);
int AD7606_2_readOneData(void);
void AD7606_read16Data(int* databuff);
void delay(uint32_t t);

#endif

