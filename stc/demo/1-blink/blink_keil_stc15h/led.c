#include "STC15.h"

void delay()
{
    int i, j;

    for (i=0; i<1000; i++)
    for (j=0; j<500; j++);
}


void main()
{

    while (1)
    {
        P32 = 0;          //P3.0/P3.1?????USB????????
        delay();
        P32 = 1;
				delay();

    }
}

