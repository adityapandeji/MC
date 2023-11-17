// Problem Statement: Write a Program to implement BCD Counter in embedded C
// Name: Pande Aditya
// Roll no. : 32251
// Batch : K6

#include<reg51.h>

void MsDelay(unsigned int itime){
	unsigned int i,j;
	for(i=0;i<itime;i++){
		for(j=0;j<1275;j++){}}
}

void main(){
	unsigned int k,z;

	for(k=0;k<=9;k++){
		for(z=0;z<=9;z++){
		P1=(k<<4)|z;
			MsDelay(5000);
		}
	}

}