#include<reg51.h>
void MSdelay(unsigned int);
void main(void){
	while(1){
	unsigned char z;

		  for(z='A';z<='Z';z++)
			{
			P1=(z);
			MSdelay(250);
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