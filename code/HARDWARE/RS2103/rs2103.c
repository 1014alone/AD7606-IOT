#include "rs2103.h"

void BL1151_VCC(int num)
{
	switch(num)
	{
		case 0:
		ENB1_1_L;
		break;
		case 1:
		ENB1_2_L;
		break;
		case 2:	
		ENB1_3_L;
		break;
		case 3:
		ENB1_4_L;
		break;
		case 4:
		ENB1_5_L;
		break;
		case 5:
		ENB1_6_L;
		break;
		case 6:
		ENB1_7_L;
		break;
		case 7:
		ENB1_8_L;
		break;
		case 8:
		ENB2_1_L;
		break;
		case 9:
		ENB2_2_L;
		break;
		case 10:	
		ENB2_3_L;
		break;
		case 11:
		ENB2_4_L;
		break;
		case 12:
		ENB2_5_L;
		break;
		case 13:
		ENB2_6_L;
		break;
		case 14:
		ENB2_7_L;
		break;
		case 15:
		ENB2_8_L;
		break;
		default:
		break;
	}
}

//BL1551_VCC
void BL1151_GND(int num)
{
	switch(num)
	{
		case 0:
		ENB1_1_H;
		break;
		case 1:
		ENB1_2_H;
		break;
		case 2:
		ENB1_3_H;	
		break;
		case 3:
		ENB1_4_H;
		break;
		case 4:
		ENB1_5_H;
		break;
		case 5:
		ENB1_6_H;
		break;
		case 6:
		ENB1_7_H;
		break;
		case 7:
		ENB1_8_H;
		break;
		case 8:
		ENB2_1_H;
		break;
		case 9:
		ENB2_2_H;
		break;
		case 10:
		ENB2_3_H;	
		break;
		case 11:
		ENB2_4_H;
		break;
		case 12:
		ENB2_5_H;
		break;
		case 13:
		ENB2_6_H;
		break;
		case 14:
		ENB2_7_H;
		break;
		case 15:
		ENB2_8_H;
		break;
		default:
		break;
	}
}
