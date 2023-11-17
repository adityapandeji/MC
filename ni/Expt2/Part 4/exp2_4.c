#include<reg51.h>
void MSdelay(unsigned int);
void main(void){
	while(1){
	unsigned int s,z;

		for(s=0;s<=9;s++)
		{
		  for(z=0;z<=9;z++)
			{
			P1=(s<<4|z);
			MSdelay(2500);
			}
		}
		
	}
}
void MSdelay(unsigned int time){
	unsigned int i,j;
	for(i=0;i<time;i++)
	{
	for(j=0;j<1275;j++){}
	}
}