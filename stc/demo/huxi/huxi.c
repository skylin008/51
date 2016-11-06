#include<stc12.h>
#define N 20 //亮暗的速率
#define T 3000 //PWM的周期
typedef unsigned char uchar;

#define led1  P3_0 //   轮流七彩变色   3.0 红色
#define led2  P3_1 //                            3.1 绿色
#define led3  P3_2 //                           3.2 蓝色

__bit vvv=1;  //检测是否完成了一次呼吸。

__bit aaa=0;   //这3路当作BCD开关来使用
__bit bbb=0;
__bit ccc=0;

uchar Time_50ms;//
uchar Time_3ms; //

void Init (void)    //中断初始化
{
	TMOD = 0x01;           //12M 50000
	TH0 = 0x4C;
	TL0 = 0x00;
	EA=1;
	ET0=1;
	TR0=1;
}

//***********定时器t0中断子函数**************
void timer0(void) __interrupt 1 __using 1 
{
	TH0 = 0xDC;
	TL0 = 0x00;

	Time_50ms++;   // 加1
   
	if(vvv==0)  //每呼吸完一次，计时器就工作一下。等待呼吸完后再计时。
	    
		if(Time_50ms>=100)   
		{
			Time_50ms=0;    //清零复位
			Time_3ms++;//计时器每工作一次Time_3ms就加一。
		}
    
	if(Time_3ms>=7)  //七种颜色轮流呼吸
	{
		Time_3ms=0;
	}
    
	if(Time_3ms==0)  //    AAA BBB CCC 用来切换亮什么颜色 这里的==0      ==1   ==2，，，， 3 4 5 6 可以理解为7个开关
	{
		aaa=1;
		bbb=1;
		ccc=1;
	}
	else if(Time_3ms==1)
	{
		aaa=0;
		bbb=1;
		ccc=1;
	}
	else if(Time_3ms==2)
	{
		aaa=1;
		bbb=0;
		ccc=1;
	}
	else if(Time_3ms==3)
	{
		aaa=1;
		bbb=1;
		ccc=0;
	}
	else if(Time_3ms==4)
	{
		aaa=0;
		bbb=0;
		ccc=1;
	}
	else if(Time_3ms==5)
	{
		aaa=1;
		bbb=0;
		ccc=0;
	}
	else if(Time_3ms==6)
	{
		aaa=0;
		bbb=1;
		ccc=0;
	}

}

//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●//
void pwm(int x)
{
    while(x--){}
}

void main()
{
	int t=0;
	char f=0;//亮暗标志，0为亮
	Init();
	while(1) //主循环。
	{

//111111111111111111111111                  当abc开关为1时。红色LED呼吸一下。其他颜色不亮。
		if((aaa==1)&&(bbb==1)&&(ccc==1))
		{
			led1=0;
			pwm(t);
			led1=1;
		}
//2222222222222222222222           否则   当abc开关为2时。黄色LED呼吸一下。其他颜色不亮。
// else
		else
			if((aaa==0)&&(bbb==1)&&(ccc==1))
			{
				led1=0;
				led3=0;
				pwm(t);
				led1=1;
				led3=1;
			}
//3333333333333333333333          否则   当abc开关为3时。绿色LED呼吸一下。其他颜色不亮。
			else        if((aaa==1)&&(bbb==0)&&(ccc==1))
			{
				led3=0;
				pwm(t);
				led3=1;
			}
//44444444444444444444444
			else        if((aaa==1)&&(bbb==1)&&(ccc==0))
			{ led1=0;
				led2=0;
				pwm(t);
				led1=1;
				led2=1;
			}
//5555555555555555555555
			else        if((aaa==0)&&(bbb==0)&&(ccc==1))
			{
				led2=0;
				pwm(t);
				led2=1;
			}
//6666666666666666666666
			else        if((aaa==1)&&(bbb==0)&&(ccc==0))
			{ led3=0;
				led2=0;
				pwm(t);
				led3=1;
				led2=1;
			}
//77777777777777777777  else
			else        if((aaa==0)&&(bbb==1)&&(ccc==0))
			{
				led1=0;
				led2=0;
				led3=0;
				pwm(t);
				led1=1;
				led2=1;
				led3=1;
			}
//===========   //因为使用了 else 语句  所以1 2 3 4 5 6 7  只有其中一组颜色会被点亮。
//.....................
		pwm(T-t);
		if(!f)
		{
			t+=N;
		}
		else
		{
			t-=N;    //暗速率较慢
		}
		if(t>T)
		{
			f=1;
			t=T;
			vvv=1; //  呼吸开始，关闭计时器，以免中途又切换其他颜色。
		}//超过最大值时，返回最大值，标志为暗

		if(t<0)
		{
			f=0;
			t=0;
			vvv=0; // 呼吸完一次，打开计时器 切换颜色。
		}//超过最小值时，返回最小值，标志为亮
	}
}
