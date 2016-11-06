#include <stc12.h>
#define uint unsigned int
void delay(uint x)
{
	while(x--);
}
void main(void)
{
	P0 = 0x01;			   //led0先亮，其他都不亮

	while(1)
	{
		delay(10000);	   //调用延时函数
		P0 = P0 << 1;	   //第一次循环，led1亮，其他都不亮
		if(P0 == 0x00)     //全部移出
		P0 = 0x01;
	}
}
