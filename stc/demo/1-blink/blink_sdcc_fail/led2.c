#include "stc15x.h"

#define LED P32
//SBIT(LED, _P3, 2);//LED1dddddddddddddddddddddddddddddddddd

void delay()
{
    int i, j;

    for (i=0; i<10; i++)
    for (j=0; j<500; j++);
}


void main()
{

    while (1)
    {
	LED = 1;
        P3 = 0x03;
        delay();
	LED = 0;
        P3 = 0xff;
	delay();
    }
}

