#include<reg51.h>
void delay(unsigned int);

void main()
{
	while(1)
	{
     P1=0x09;
     delay(5);
     P1=0x0C;
     delay(5);
     P1=0x06;
     delay(5);
     P1=0x03;
     delay(5);
  }
}

void delay(unsigned int t)
{
    unsigned int i,j;
    for( i=0;i<t;i++ )
    {
       for( j=0;j<1275;j++ )
       {
       }
		 }
}		