#include<reg51.h>
code unsigned char seven_seg[10] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
void delay (void)                          //ʱ���ӳٺ��� 
{              
	unsigned char i,j;
	for(i = 0;i < 255;i++)
	for (j = 0;j < 255;j++);
}
void main (void)
{
	unsigned char i;            // ���� i �������� 0~9 */ /*����ѭ��
	P2  =  0xfe;				//����λѡ�ź�,P2.0�ӷ��������ٽ�����ܵ�����
	while (1)
	{ 
		for  (i = 0; i < 10; i++)
		{
			P0 = seven_seg[i];        //���0~9�������߶���ʾ��
			delay();delay();          //����ʱ���ӳٺ���delay
		}
	}
}
/***************Ҳ���Բ���������Ʒ���ʵ��*********************/
/*void main (void)
{
	unsigned char i;                  //���� i �������� 0~9����ѭ��
	P2  =  0xfe;					  //����λѡ�ź�,P2.0�ӷ��������ٽ�����ܵ�����
	while (1)
	{ 
		P0 = seven_seg[i];			  //���0~9�������߶���ʾ��
		delay();delay();              //����ʱ���ӳٺ���delay				
		i++;	
		if(i >= 10)
		i = 0;
	}
}*/
