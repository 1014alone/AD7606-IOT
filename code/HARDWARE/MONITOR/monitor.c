#include "monitor.h"
#include "sys.h"

extern float deltadata_V[256];
int front_count = 0;
int behind_count = 0;

void monitor_fall_back(void)
{
	int i = 0;
	for(i=0;i<256;i++)
	{
		if(i==2|i==3|i==4|i==5|i==17|i==18|i==19|i==20|i==21|
			 i==22|i==32|i==33|i==34|i==35|i==36|i==37|i==38|i==39|
			 i==48|i==49|i==50|i==51|i==52|i==53|i==54|i==55|i==56|
			 i==64|i==65|i==66|i==67|i==68|i==69|i==70|i==71|i==72|
			 i==80|i==81|i==82|i==83|i==84|i==85|i==86|i==87|i==88|
			 i==97|i==98|i==99|i==100|i==101|i==102|i==103|i==104|
			 i==113|i==114|i==115|i==116|i==117|i==118|i==119|i==130|
			 i==131|i==132|i==133|i==134|i==135|i==146|i==147|i==148|
			 i==149|i==150|i==162|i==163|i==164|i==165|i==166|i==177|
			 i==178|i==179|i==180|i==181|i==182|i==193)
		
		{
			if(deltadata_V[i]<5)
			{
				front_count++;
			}
		}
		
		if(i==194|i==195|i==196|i==197|i==198|i==209|i==210|i==211|i==212
			 |i==213|i==214|i==225|i==226|i==227|i==228|i==229|i==230|i==242
		   |i==243|i==244|i==245)
		{
			if(deltadata_V[i]>5)
			{
				behind_count++;
			}
		}
	}
	if(front_count > 70&behind_count>10)
	{
		GPIO_ResetBits(GPIOC,GPIO_Pin_10);
	}
}

