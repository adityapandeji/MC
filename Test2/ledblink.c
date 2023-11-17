/*Problem Statement: Write a Program in embedded C for LED Blinking/Flashing

 Name: Pande Aditya
 Roll no. : 32251
 Batch : K6

 */


 #include <reg51.h>

 void msdelay(unsigned int itime){
 unsigned int i,j;
 for(i=0;i<itime;i++){
 for(j=0;j<1275;j++);
 }
 }
 void main(void){
while(1){
 P1=0X00;
 msdelay(2500);
 P1=0X55;
 msdelay(2500);
}
 }
