#include<p18f4550.h>
#include"vector_relocate.h"
void msdelay(unsigned int x){
int i,j;
for(i=0;i<x;i++){
for(j=0;j<710;j++){
}
}
}
void main(){
	unsigned int i;
	
	unsigned char val=0;
	INTCON2bits.RBPU=0;
	ADCON1=0X0F;
	TRSID=0X00;
	TRISBbits.TRISB0=1;
	TRISBbits.TRISB1=1;
	TRISBbits.TRISC1=0;
	TRISBbits.TRISC2=1;
	PORTCbits.RC1=0;
	PORTCbits.RC2=0;
	while(1){
		if(PORTBbits.RB0==0)
		{
			val=1;
		}	
		if(PORTBbits.RB1==0)
		{
			val=2;
		}
		if(val=1)
		{
			PORTCbits.RC1=1;
			PORTCbits.RC2=1;
			PORT=0X80;
			msdelay(100);
			for(i=0;i<8;i++)
			{
				PORTD=PORTD>>1;
				MSdelay(100);
			}			
		}
		if(val==2)
		{
			PORTCbits.RC1=0;
			PORTCbits.RC2=0;
			PORTD=0X01;
			MSdelay(100);
			for(i=0;i<8;i++)
			{
				PORT=PORTD<<1;
				MSdelay(100);
			}
		}
	}	