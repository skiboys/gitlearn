#include"lpc17xx.h"


  void delay_1s(void){
    	unsigned int i=20000000;
	  	while(i--);
 }
 int main(void)
	
	 {
		  LPC_GPIO2->FIODIR=0xffffffff;
		
	   for(;;){
		
		LPC_GPIO2->FIOSET=0x4;
		delay_1s();
		LPC_GPIO2->FIOCLR=0x4;
		delay_1s();
	 }

	}
	 

	
	
	