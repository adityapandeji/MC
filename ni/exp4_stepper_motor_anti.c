#include <reg51.h>

void delay(unsigned int time);

void main(){
	
	while(1){
		P1 = 0x06;
		delay(50);
		P1 = 0x03;
		delay(50);
		P1 = 0x09;
		delay(50);
		P1 = 0x0C;
		delay(50);
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