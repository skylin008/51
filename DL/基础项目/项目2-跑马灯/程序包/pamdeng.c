#include<reg51.h>
#define uint unsigned int
void delay(uint x)
{
	while(x--);
}
void main(void)
{
	P0 = 0x01;			   //led0����������������

	while(1)
	{
		delay(10000);	   //������ʱ����
		P0 = P0 << 1;	   //��һ��ѭ����led1��������������
		if(P0 == 0x00)     //ȫ���Ƴ�
		P0 = 0x01;
	}
}