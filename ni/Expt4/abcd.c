#include <reg51.h>

void delay(unsigned int time);

void main(){
	
	while(1){
	
      P1=0x03;
		  delay(100);
      P1=0X06;
		  delay(100);
      P1=0X0C;
		  delay(100);
      P1=0x09;
		  delay(100);
   
	}
}
void delay(unsigned int time)
{
	unsigned int i,j;
	for(i = 0; i < time; i++){
		for(j = 0; j < 1275; j++){
		}
	}
}