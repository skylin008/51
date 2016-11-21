#include<reg51.h>
code unsigned char seven_seg[10] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
void delay (void)                          //时间延迟函数 
{              
	unsigned char i,j;
	for(i = 0;i < 255;i++)
	for (j = 0;j < 255;j++);
}
void main (void)
{
	unsigned char i;            // 变量 i 用来储存 0~9 */ /*无穷循环
	P2  =  0xfe;				//设置位选信号,P2.0接反相器后再接数码管的阳极
	while (1)
	{ 
		for  (i = 0; i < 10; i++)
		{
			P0 = seven_seg[i];        //输出0~9到共阳七段显示器
			delay();delay();          //调用时间延迟函数delay
		}
	}
}
/***************也可以采用以下设计方法实现*********************/
/*void main (void)
{
	unsigned char i;                  //变量 i 用来储存 0~9无穷循环
	P2  =  0xfe;					  //设置位选信号,P2.0接反相器后再接数码管的阳极
	while (1)
	{ 
		P0 = seven_seg[i];			  //输出0~9到共阳七段显示器
		delay();delay();              //调用时间延迟函数delay				
		i++;	
		if(i >= 10)
		i = 0;
	}
}*/
