#include "getData.h"
#include "AD7606.h"
#include "rs2103.h"
#include <stdio.h>
#include "math.h"

float a1;
float a2;
int step=0;
float R_TEM_1[23];
float pre_step_data = 0,now_step_data = 0;
float threshold = 0.052;
extern int ration_target;
extern float real_tem;

int i=0,j=0;
float R[256],V[256],I,R_TEM[2];
float deltadata_V[256];//定义电压变化率数组
int rawArrBuff[256];//定义初始电阻R0数组
//int adcDataBuff[16];
int sensorArrBuff[256];//定义AD值数组
float deltadata_R[256];//定义电阻变化率数组

extern float datatemp[23];

//数据发送标志
int data_send = 1;

//极大值 电压变化率之和 平均值
float max_value,total_value,ave_value;

float tem_value;

/*初始电阻采集*/
void setR0()
{
	for(i=0;i<16;i++)//循环导通列
	{
		delay(2);
		BL1151_GND(i);	//导通列
		delay(2);
		AD7606_read16Data(rawArrBuff+16*i);	//采集16通道数据
		BL1151_VCC(i);	//断开导通的列
	}
	for(i=0;i<16;i++)
	{
		delay(2);
		BL1151_GND(i);	//导通列
		delay(2);
		AD7606_read16Data(rawArrBuff+16*i);
		BL1151_VCC(i);	//断开导通的列
	}
}

/*阵列数据采集*/
void setArray()
{
  for(i=0;i<16;i++)//循环导通列
		{
			delay(2);
			BL1151_GND(i);	//导通行		
			delay(2);
			AD7606_read16Data(sensorArrBuff+16*i);//采集16通道数据
			BL1151_VCC(i);	//断开导通的行		
		}	
}
//right:0.206  left:0.226
float total;
float max = 0;
float min = 0;

void senddeltaR()
{
  for(i=0;i<256;i++)
	{
		V[i]=(float)(*(sensorArrBuff+i))/32767*5;      //电压
		deltadata_V[i]=( (float)(*(sensorArrBuff+i))-(float)(*(rawArrBuff+i)) )/32767*5*400;    //电压变化率     
		R[i]=(100*1.614)/(V[i]-1.614)*1.3;     //电阻
		I=0.9/R[i];	
		deltadata_R[i] = (R[i] - (float)(*(rawArrBuff+i))/32767*5)*100; //电阻变化率
//		if(i%16==15)
//		{
//			printf("%.2f;\r\n",deltadata_V[i]);
//		}else{
//			printf("%.2f,",deltadata_V[i]);
//		
		if(i != 0)
		{
			tem_value = deltadata_V[i-1];
		}

		if(i==2|i==3|i==4|i==5|i==17|i==18|i==19|i==20|i==21|
			i==22|i==32|i==33|i==34|i==35|i==36|i==37|i==38|i==39|
			i==48|i==49|i==50|i==51|i==52|i==53|i==54|i==55|i==56|
			i==64|i==65|i==66|i==67|i==68|i==69|i==70|i==71|i==72|
			i==80|i==81|i==82|i==83|i==84|i==85|i==86|i==87|i==88|
			i==97|i==98|i==99|i==100|i==101|i==102|i==103|i==104|
			i==113|i==114|i==115|i==116|i==117|i==118|i==119|i==130|
			i==131|i==132|i==133|i==134|i==135|i==146|i==147|i==148|
			i==149|i==150|i==162|i==163|i==164|i==165|i==166|i==177|
			i==178|i==179|i==180|i==181|i==182|i==193|i==194|i==195|
			i==196|i==197|i==198|i==209|i==210|i==211|i==212|i==213|
			i==214|i==225|i==226|i==227|i==228|i==229|i==230|i==242|
			i==243|i==244|i==245)
			{
				total_value = total_value + deltadata_V[i];
				if(i == 2)
				{
					max_value = deltadata_V[i];
				}else{
					if(max_value < deltadata_V[i])
					{
						max_value = deltadata_V[i];
					}
				}	
			}
		
	}
	
	ave_value = total_value/104;
	printf("%.3f,%.3f,%.3f\r\n",max_value,total_value,ave_value);
//	printf("H");
//	printf("\r\n");	
}

/*蓝灯闪烁*/
void twinkle_blueLED()
{
  blueLED_ON;
	delay_us(10);
	blueLED_OFF;
}
/*红灯闪烁*/
void twinkle_redLED()
{
  redLED_ON;
	delay_ms(10);
	redLED_OFF;
	delay_ms(10);
	redLED_ON;
	delay_ms(10);
	redLED_OFF;
	delay_ms(10);
	redLED_ON;
	delay_ms(10);
	redLED_OFF;
	delay_ms(10);
	redLED_ON;
}
/*绿灯闪烁*/
void twinkle_greenLED()
{
  greenLED_ON;
	delay_ms(10);
  greenLED_OFF;
	delay_ms(10);
	greenLED_ON;
	delay_ms(10);
  greenLED_OFF;
	delay_ms(10);
	greenLED_ON;
	delay_ms(10);
  greenLED_OFF;
}

