#include<reg51.h>
void MSdelay(unsigned int);
void main(void){
	while(1){
	unsigned int z;
		P1=0X01;
		for(z=0;z<255;z++)
		{
		  MSdelay(250);
		  P1=(z);
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