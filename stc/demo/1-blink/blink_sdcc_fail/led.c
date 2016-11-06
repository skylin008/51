#include<stc12.h>                    //header reg51

#define led P3_2

void delay()
{
    int i, j;

    for (i=0; i<1000; i++)
    for (j=0; j<500; j++);
}


void main(void)                     //main
{
	//P3 = 0x00;					  	//output P0 all low
	//P3_2 = 1;
	while(1)                        //loop
	{
		led = 1;
		delay();                 
		led = 0;
		delay();                
	}
}
