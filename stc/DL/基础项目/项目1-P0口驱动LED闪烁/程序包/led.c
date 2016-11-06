#include<reg51.h>                    //包含头文件
sbit led = P0^0;                     //利用位定义，一个                     
void delay(unsigned char x)          //延时函数
{
	unsigned char i,j;
	for(i = 0;i < x;i++)
	for(j = 0;j < 200;j++);
}
void main(void)                     //主函数
{
	P0 = 0x00;					  	//让P0输出低电平，8个led全灭
	while(1)                        //程序无限循环
	{
		led = !led;					//led闪烁
		delay(250);                 //实参不能大于255，因为形参x为char  
	}
}
