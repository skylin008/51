#include<stc15.h>                    //header reg51
//__sbit __at (0xB2) P3_2 ;
#define led P3_2

void delay()
{
    int i, j;

    for (i=0; i<100; i++)
    for (j=0; j<500; j++);
}


void main(void)                     //main
{
	//P3 = 0x00;					  	//output P0 all low
	//P3_2 = 1;
	while(1)                        //loop
	{
		P3 =0x00;
		led = 1;
		delay();  
		P3 = 0xff;
		led = 0;
		delay();                
	}
}
