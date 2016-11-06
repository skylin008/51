#include<reg51.h>                    //header reg51

sbit led = P3^2;                     //define port p32

void delay()
{
    int i, j;

    for (i=0; i<1000; i++)
    for (j=0; j<500; j++);
}


void main(void)                     //main
{
	P3 = 0x00;					  	//output P0 all low
	led = 1;
	while(1)                        //loop
	{
		led = 1;
		delay();                 
		led = 0;
		delay();                
	}
}
