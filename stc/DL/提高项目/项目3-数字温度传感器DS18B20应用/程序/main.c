/*********************************************************************/
//��ȡDS18B20�¶ȣ�ͨ���������ʾ�����¶ȳ���35��ʱ�̵�������																						
/*********************************************************************/
#include<reg51.h>
#include"18B20.c"		
#define uchar unsigned char 
#define uint unsigned int

code  uchar seven_seg[] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
code uchar seven_bit[] = {0xfe,0xfd,0xfb,0xf7};
uchar cp;
uint temp1,temp2;
sbit jdq = P2^6; 
void timer0_init(void)	 //��ʼ��
{
	TMOD = 0x01;
	TH0 = 0xec;
	TL0 = 0x78;
	TR0 = 1;
	EA  = 1;
	ET0 = 1;
}
/*****************************************************************************/
void timer0_isr(void) interrupt 1		  //�ж�
{
	uchar j;
	TR0 = 0;
	EA = 0;
	TH0 = 0xec;
	TL0 = 0x78;
	TR0 = 1;
	EA = 1;
	cp++;
	if(cp >= 200)   //�պ�1��
   {
		cp = 0;
		temp1 = Read_Temperature();//�õ��¶�
		if((temp1 & 0x80) == 0x80) //����¶�Ϊ��ֵ
		{	
		
			temp2 =0x7f & ~temp1  +  (0x0f & ~c) /15;  //��������,��Ҫ����С�����Ľ�λ
			c = 0x0f & ~c + 0x01;   //С������
		}
		else temp2 = temp1;//����¶�Ϊ��ֵ�����ô���
	}
	P0 = 0xff;
	switch(j)
	{
		case 0:P0 = seven_seg[c * 10/16];break;//��ʾС��
		case 1:P0 = 0x7f & seven_seg[temp2 % 10];break;//��ʾ��λ������С����
		case 2:{	
					if((temp2 < 10) && (temp1 < 0x80)){P0 = 0xff;break;}//����¶�С��10�ȣ���Ϊ��ֵ��ʮλ0����ʾ
					if((temp1 > 0x80) && (temp2 < 10)){P0 = 0xbf;break;}//����¶�С��10�ȣ���Ϊ��ֵ��ʮλ0����ʾ��ֻ��ʾ��-��
				   	P0 = seven_seg[temp2 / 10];	break;//����¶ȴ���10�ȣ�10λ������ʾ
				
				}
		case 3:{
					if((temp1 > 0x80) && ((temp2 / 10) > 0))//����¶�Ϊ��ֵ����ʮλ��Ϊ0����λ��ʾ��-��
					P0 = 0xbf;
					break;
				}
	}
	P2 = seven_bit[j];
	j++;
	if(j >= 4)
	j=0;
}
void main(void)
{
	timer0_init();
	
	while(1)
	{
		if(temp2 >= 35) 
			jdq = 0;
		else
			jdq = 1;
	}
}