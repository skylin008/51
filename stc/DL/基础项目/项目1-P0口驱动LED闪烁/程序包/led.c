#include<reg51.h>                    //����ͷ�ļ�
sbit led = P0^0;                     //����λ���壬һ��                     
void delay(unsigned char x)          //��ʱ����
{
	unsigned char i,j;
	for(i = 0;i < x;i++)
	for(j = 0;j < 200;j++);
}
void main(void)                     //������
{
	P0 = 0x00;					  	//��P0����͵�ƽ��8��ledȫ��
	while(1)                        //��������ѭ��
	{
		led = !led;					//led��˸
		delay(250);                 //ʵ�β��ܴ���255����Ϊ�β�xΪchar  
	}
}
