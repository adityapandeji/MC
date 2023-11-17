			
// program to generate 4 kHz PWM waveform
#include<p18f4520.h>
#include "vector_relocate.h"

void myMsDelay (unsigned int time);

void main()
{ 
	TRISCbits.TRISC2 = 0 ;              // Set PORTC, 2 as output
    	TRISD=0;
	PR2 = 0XBB;                         
    
    	CCP1CON = 0x0C;                     // Configure CCP1CON as explained above.
 	T2CON = 0x07;

	PORTDbits.RD5 = 1 ;  // anticolockwise
	PORTDbits.RD6 = 0 ;
  while(1)
	{

	CCPR1L = 0xBB;  //0b10111011//187
	CCP1CONbits.DC1B0=0;
	CCP1CONbits.DC1B1=0;

	myMsDelay(2000);
	CCPR1L = 0x96;  //80%
	CCP1CONbits.DC1B0=0;
	CCP1CONbits.DC1B1=0;

	myMsDelay(2000);
	CCPR1L = 0x74;   //60%
	CCP1CONbits.DC1B0=0;
	CCP1CONbits.DC1B1=1;

	myMsDelay(2000);
	CCPR1L = 0x4B;    // 40% 
	CCP1CONbits.DC1B0=0;
	CCP1CONbits.DC1B1=0;

	myMsDelay(2000);
	CCPR1L = 0x25;  //20% duty cycle
	CCP1CONbits.DC1B0=0;
	CCP1CONbits.DC1B1=1;
	myMsDelay(10);
	
	
 	}   
 
}


void myMsDelay (unsigned int time)
{
	unsigned int i, j;
	for (i = 0; i < time; i++)
		for (j = 0; j <665; j++);/*Calibrated for a 1 ms delay in MPLAB*/
}