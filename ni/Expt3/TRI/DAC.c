// Online C compiler to run C program online
#include <reg51.h>

void main(void) {
    // Write C code here
		int temp;
		P1 = 0x00;
    while(1){
			
			
		for(temp = 0; temp<=255; temp++){
			P1 = temp;
			
		}
	     for(temp = 255; temp>=0; temp--){
			P1 = temp;
			
		} 
			
		}
}