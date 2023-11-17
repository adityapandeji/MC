#include<reg51.h>
void delay(unsigned int);

void main()
{
   while(1)
   {
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

 void delay(unsigned int t)
 {
     unsigned int i,j;
     for( i=0;i<t;i++ )
     {
         for( j=0;j<127;j++ )
         {
         }
			 }
 }		 