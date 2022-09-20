#include "AD7606.h"

//自定义延时
void delay(uint32_t t)
{
	t = t + 10;
	while(t--);
}


/*名称：AD7606_startconvst()
功能：启动转换*/
void AD7606_1_startconvst(void)
{
	ADC1_CVAB_L;
	delay_us(500);
	ADC1_CVAB_H;
}

void AD7606_2_startconvst(void)
{
	ADC2_CVAB_L;
	delay_us(500);
	ADC2_CVAB_H;
}

void AD7606_NEXT(void)
{
	ADC1_RD_L;
	ADC2_RD_L;
	delay_ms(1);
	ADC1_RD_H;
	ADC2_RD_H;
}
/*名称：AD7606_reset()
功能：复位模块*/
void AD7606_1_reset(void)
{
	ADC1_RST_L;
	ADC1_RST_H;
	delay_ms(1);
	ADC1_RST_L;
}

void AD7606_2_reset(void)
{
	ADC2_RST_L;
	ADC2_RST_H;
	delay_ms(1);
	ADC2_RST_L;
}


int AD7606_1_readOneData(void)
{
	__IO uint32_t temp;
	temp=(GPIOE->IDR & 0xFFFF);
	return (int)(( (temp & 0x8000? (0xFFFF):(0x0000))<<16)|(temp&0xFFFF));
}

int AD7606_2_readOneData(void)
{
	__IO uint32_t temp;
	temp=(GPIOD->IDR & 0xFFFF);

	return (int)(( (temp & 0x8000? (0xFFFF):(0x0000))<<16)|(temp&0xFFFF));
}

void AD7606_read16Data(int* databuff)
{
	uint8_t i;
	ADC1_CS_L;
	AD7606_1_startconvst();
	while(ADC1_BUSY == 1);
	//为什么这里还放上循环
	//直接写RD置高读取再置低
	for(i=0;i<8;i++)
	{
		ADC1_RD_L;
		delay(1);
		*(databuff+i)=AD7606_1_readOneData();
		ADC1_RD_H;
	}
	ADC1_CS_H;
	delay(1);
	ADC2_CS_L;
	AD7606_2_startconvst();
	while(ADC2_BUSY == 1);
	for(i=8;i<16;i++)
	{
		ADC2_RD_L;
		delay(1);	
		*(databuff+i)=AD7606_2_readOneData();
		ADC2_RD_H;
	}
	  ADC2_CS_H;
}

void AD7606_init(void)
{
	AD7606_1_reset();
	AD7606_2_reset();
	AD7606_1_startconvst();
	AD7606_2_startconvst();
}
