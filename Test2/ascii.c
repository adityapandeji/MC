 // Problem Statement: Write a Program to implement ASCII Counter in embedded C
 // Name: Pande Aditya
 // Roll no. : 32251
 // Batch : K6

 #include <reg51.h>
 void msdelay(unsigned int itime){
 unsigned int i,j;
 for(i=0;i<itime;i++){
 for(j=0;j<1275;j++);
 }
 }

 void main(void){
 unsigned int s;
 for(s='A';s<='Z';s++){
 P1=(s);
 msdelay(2000);
 }
 } 