#include "led.h"
#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "gpio.h"
#include "AD7606.h"
#include "getData.h"
#include "key.h"
#include "oled.h"
#include "bmp.h"
#include "monitor.h"
#include "DS18B20.h"
#include "stmflash.h"

#define FLASH_SAVE_ADDR  0X08020000 	

int Rstflag = 0;
int fsendflag = 0;
int is_connect = 0;
extern int front_count;
extern int behind_count;

float real_tem;

float  datatemp[23];

int main(void)
{	
	delay_init();	    	 
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	uart_init(115200);
	gpio_init();
	EXTIX_Init();
	AD7606_init();//AD7606初始化
	delay_ms(100);
	setR0();//初始电阻采集
	delay_ms(100);
//	printf("+++");
//	delay_ms(1000);
//	delay_ms(1000);
//	printf("AT+ROLE=STA\r\n\r\n");
//	delay_ms(1000);
//	delay_ms(1000);
//	delay_ms(1000);
//	delay_ms(1000);
//	printf("AT+STA=18806617478,2,18806617478\r\n\r\n");
//	delay_ms(1000);
//	delay_ms(1000);
//	delay_ms(1000);
//	delay_ms(1000);
//	printf("AT+MODE=MULTIC\r\n\r\n");
//	delay_ms(1000);
//	delay_ms(1000);
//	delay_ms(1000);
//	delay_ms(1000);
//	printf("AT+SOCKA=ON,TCP,183.230.40.40,1811,23123\r\n\r\n");
//	delay_ms(1000);
//	delay_ms(1000);
//	delay_ms(1000);
//	delay_ms(1000);
//	printf("AT+RST\r\n\r\n");
//	delay_ms(1000);
//	delay_ms(1000);
//	delay_ms(1000);
//	delay_ms(1000);

	delay_ms(1000);
	delay_ms(1000);
	delay_ms(1000);
	delay_ms(1000);
	delay_ms(1000);
	printf("\*458731\#4321\#test2\*\r\n");
//	DS18B20_Init();
//	STMFLASH_Read(FLASH_SAVE_ADDR,(u16*)datatemp,92);
	while(1)
	{	
//		real_tem = DS18B20_GetTemp_SkipRom() + 273.15;
		if(Rstflag){setR0();Rstflag=0;}//复位
		setArray();//阵列数据采集		
		senddeltaR();
		delay_ms(50);
	}
}


