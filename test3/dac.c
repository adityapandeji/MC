#include <reg51.h>

void main(){
unsigned char sun[12]={128,192,238,255,238,192,128,64,17,0,17,64};

unsigned char i=0;
while (1){
	
for (i=0;i<12;i++)
	P1=sun[i];

}

}