#ifndef _getData_H
#define _getData_H

//LED
#define redLED_ON GPIO_ResetBits(redLED_GPIO_Port,redLED_Pin);
#define redLED_OFF GPIO_SetBits(redLED_GPIO_Port,redLED_Pin);
#define blueLED_ON GPIO_ResetBits(blueLED_GPIO_Port,blueLED_Pin);
#define blueLED_OFF GPIO_SetBits(blueLED_GPIO_Port,blueLED_Pin);
#define greenLED_ON GPIO_ResetBits(greenLED_GPIO_Port,greenLED_Pin);
#define greenLED_OFF GPIO_SetBits(greenLED_GPIO_Port,greenLED_Pin);


void twinkle_blueLED(void);
void twinkle_redLED(void);
void twinkle_greenLED(void);
void setR0(void);
void senddeltaR(void);
void setArray(void);

#endif

