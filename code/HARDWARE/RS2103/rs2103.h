#ifndef _BL1551_H
#define _BL1551_H

#include "AD7606.h"
#include "sys.h"


#define	ENB1_1_H	GPIO_SetBits(ENB1_1_GPIO_Port, ENB1_1_Pin)
#define	ENB1_1_L	GPIO_ResetBits(ENB1_1_GPIO_Port, ENB1_1_Pin)
#define	ENB1_2_H	GPIO_SetBits(ENB1_2_GPIO_Port, ENB1_2_Pin)
#define	ENB1_2_L	GPIO_ResetBits(ENB1_2_GPIO_Port, ENB1_2_Pin)
#define	ENB1_3_H	GPIO_SetBits(ENB1_3_GPIO_Port, ENB1_3_Pin)
#define	ENB1_3_L	GPIO_ResetBits(ENB1_3_GPIO_Port, ENB1_3_Pin)
#define	ENB1_4_H	GPIO_SetBits(ENB1_4_GPIO_Port, ENB1_4_Pin)
#define	ENB1_4_L	GPIO_ResetBits(ENB1_4_GPIO_Port, ENB1_4_Pin)
#define	ENB1_5_H	GPIO_SetBits(ENB1_5_GPIO_Port, ENB1_5_Pin)
#define	ENB1_5_L	GPIO_ResetBits(ENB1_5_GPIO_Port, ENB1_5_Pin)
#define	ENB1_6_H	GPIO_SetBits(ENB1_6_GPIO_Port, ENB1_6_Pin)
#define	ENB1_6_L	GPIO_ResetBits(ENB1_6_GPIO_Port, ENB1_6_Pin)
#define	ENB1_7_H	GPIO_SetBits(ENB1_7_GPIO_Port, ENB1_7_Pin)
#define	ENB1_7_L	GPIO_ResetBits(ENB1_7_GPIO_Port, ENB1_7_Pin)
#define	ENB1_8_H	GPIO_SetBits(ENB1_8_GPIO_Port, ENB1_8_Pin)
#define	ENB1_8_L	GPIO_ResetBits(ENB1_8_GPIO_Port, ENB1_8_Pin)

#define	ENB2_1_H	GPIO_SetBits(ENB2_1_GPIO_Port, ENB2_1_Pin)
#define	ENB2_1_L	GPIO_ResetBits(ENB2_1_GPIO_Port, ENB2_1_Pin)
#define	ENB2_2_H	GPIO_SetBits(ENB2_2_GPIO_Port, ENB2_2_Pin)
#define	ENB2_2_L	GPIO_ResetBits(ENB2_2_GPIO_Port, ENB2_2_Pin)
#define	ENB2_3_H	GPIO_SetBits(ENB2_3_GPIO_Port, ENB2_3_Pin)
#define	ENB2_3_L	GPIO_ResetBits(ENB2_3_GPIO_Port, ENB2_3_Pin)
#define	ENB2_4_H	GPIO_SetBits(ENB2_4_GPIO_Port, ENB2_4_Pin)
#define	ENB2_4_L	GPIO_ResetBits(ENB2_4_GPIO_Port, ENB2_4_Pin)
#define	ENB2_5_H	GPIO_SetBits(ENB2_5_GPIO_Port, ENB2_5_Pin)
#define	ENB2_5_L	GPIO_ResetBits(ENB2_5_GPIO_Port, ENB2_5_Pin)
#define	ENB2_6_H	GPIO_SetBits(ENB2_6_GPIO_Port, ENB2_6_Pin)
#define	ENB2_6_L	GPIO_ResetBits(ENB2_6_GPIO_Port, ENB2_6_Pin)
#define	ENB2_7_H	GPIO_SetBits(ENB2_7_GPIO_Port, ENB2_7_Pin)
#define	ENB2_7_L	GPIO_ResetBits(ENB2_7_GPIO_Port, ENB2_7_Pin)
#define	ENB2_8_H	GPIO_SetBits(ENB2_8_GPIO_Port, ENB2_8_Pin)
#define	ENB2_8_L	GPIO_ResetBits(ENB2_8_GPIO_Port, ENB2_8_Pin)

void BL1151_GND(int num);
void BL1151_VCC(int num);

#endif /*_BL1551_H*/
