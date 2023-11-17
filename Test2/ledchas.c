// Problem Statement: Write a Program in embedded C for LED Chasing(Left to Right)
// Name: Pande Aditya
 // Roll no. : 32251
 // Batch : K6

 #include <reg51.h>

 void msdelay(unsigned int itime)
 {
 unsigned int i,j;
 for(i=0;i<itime;i++)
 {
 for(j=0;j<1275;j++);
 }
 }
 void main()
 {
 unsigned int z;

 
 
 P1=0x01;
 for(z=0;z<7;z++){
 msdelay(5000);
 P1=P1<<1;
 }

}