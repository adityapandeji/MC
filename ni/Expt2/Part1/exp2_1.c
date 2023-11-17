#include<reg51.h>
void MSdelay(unsigned int);
void main(void){
	while(1){
		P1=0XFF;
		MSdelay(250);
		P1=0X00;
		MSdelay(250);
	}
}
void MSdelay(unsigned int time){
	unsigned int i,j;
	for(i=0;i<time;i++)
	{
	for(j=0;j<1275;j++){}
	}
}