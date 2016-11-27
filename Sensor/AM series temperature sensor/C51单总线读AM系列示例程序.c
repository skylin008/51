//****************************************************************//
//	       AMϵ�ж�������ʹ�÷��� 
//��Ƭ�� ��AT89S52 �� STC89C52RC 
// ����  �����ڷ�����ʪ������  ������ 9600 
// ����  ��12M (�û�ϵͳʱ���粻��12M �������غ궨�弰ע�͵���ʱʱ��)
// ���뻷��:  Keil3
// ��˾  �����ɵ���    
//****************************************************************//

#include "reg52.h"
#include <intrins.h>

//�û������Լ��ľ����޸���Ӧֵ
#define FOSC  12000000
#define BAUD  9600 

//�������� �˿�λ���壬���޸�
sbit Sensor_SDA = P0^0;
sbit Sensor_SCL = P0^1;

// ��������
unsigned char Sensor_Data[5]={0x00,0x00,0x00,0x00,0x00};
unsigned char Sensor_Check;		  //У���

unsigned char Sensor_AnswerFlag;  //�յ���ʼ��־λ
unsigned char Sensor_ErrorFlag;   //��ȡ�����������־
unsigned int  Sys_CNT;
unsigned int  Tmp;

unsigned char *String;

//�ַ�������
#define S_Temp "Temp:"
#define S_RH   "RH:"
#define S_CRCT "Check: True"
#define S_CRCF "Check: Wrong"
#define S_Data "Data: "
#define S_NotS "Sensor Not Connected"

/********************************************\
|* ���ܣ� ��ʱ	����Ϊ12Mʱ				    *|
|*  t = 1 Ϊ 20us  Ȼ��ɱ�����10us����		*|
\********************************************/
void Delay_N10us(unsigned char t)
{
    while(t--)
   {
   	 _nop_();
   }
}
/********************************************\
|* ���ܣ� ��ʱ	����Ϊ12Mʱ					*|
|* ��ʱ��Լ 1ms			    				*|
\********************************************/ 
void Delay_N1ms(unsigned int t)
{
  unsigned int i;
  unsigned int j;
  for(j=t;j>0;j--)
     for(i=124;i>0;i--);  //��ʱ��Լ 1ms
}
/********************************************\
|* ���ܣ� ��ʼ������					    *|
\********************************************/
void InitUART(void)
  {
    unsigned int iTmpBaud;
    unsigned long lTmpBaud;
    iTmpBaud = 0;
    //����ѡ����ʱ��2��Ϊ�����ʷ�����,16λ��ʱ��,�Զ�װ��
    SCON = 0x50;	//SM0 SM1 SM2 REN TB8 RB8 TI RI		//0   1   0   1   0   0   0  0	
  	PCON = 0x00;	//PCON�ĵ�ַ��87H,����SMOD =0

  	T2CON = 0x30;	//TF2 EXF2 RCLK TCLK EXEN2 TR2 C(/T2) CP(/RL2) //0 0 1 1 0 0 0 0 
  	T2MOD = 0x00;	// /	/	/	/		/	/	T2OE	DCEN   //0 0 0 0 0 0 0 0

  	lTmpBaud = FOSC/BAUD;
  	lTmpBaud /= 32;						//12T-mode
  	iTmpBaud = lTmpBaud & 0xFFFF;		
  	iTmpBaud = 65536 - iTmpBaud;
  	RCAP2H = (iTmpBaud>>8) & 0x0FF;
  	RCAP2L = iTmpBaud & 0x0FF;

  	RI = 0;			//��������жϱ�־
  	REN = 1;		//�����н���
  	ES = 1;			//�������ж�
  	TR2 = 1;		//������ʱ��1

  	EA=1;//�����ж�
  }  

/********************************************\
|* ���ܣ� ���ڷ��ͺ��� 			            *|
\********************************************/
void UARTSend(char UCHAR)
  {
    SBUF=UCHAR;
    while(TI==0);
    TI=0;
  }
/********************************************\
|* ���ܣ� �����жϺ��� 			            *|
\********************************************/
void UARTRead(void) interrupt 4
  {
    char temp; 
    if(RI)
    {
      RI=0;
      temp = SBUF;
    }
  }
 /********************************************\
|* ���ܣ� ���ڷ����Ӻ��� 			        *|
\********************************************/
void UART_PutString(unsigned char *buf)
  {
	while(*buf)
      UARTSend(*buf++);
  }
void UART_PutStringAndNum(unsigned char *buf ,unsigned int num)
  {
	unsigned char a[3],i;
	a[3] = '0'+num%10;
	a[2] = '.';
	a[1] = '0'+num/10%10;
	a[0] = '0'+num/100%10;
	while(*buf)
      UARTSend(*buf++);
	UARTSend(' ');
	 for(i=0;i<4;i++)
	{
		UARTSend(a[i]);
	} 
  }
void UART_PutStringAnd_Data(unsigned char *buf ,unsigned char *bufdata)
  {
	unsigned char a[2],i,j;
	while(*buf)
      UARTSend(*buf++);
	UARTSend(' ');
	for(i=0;i<5;i++)
	{
		a[0] = bufdata[i]/16; 
		a[1] = bufdata[i]%16;
		for(j=0;j<2;j++)
		{
		  if(a[j]>9)
		  {
		    a[j] = (a[j]-10)+'A';
		  }
		  else
		  {
		    a[j] = a[j]+'0';
		  }
		  UARTSend(a[j]);
		}
		UARTSend(' ');
	} 
  }
/********************************************\
|* ���ܣ� ���ڷ��ʹ��������ݺ��� 			*|
\********************************************/
void UARTSend_Nbyte(void)
  {
	   if(Sensor_AnswerFlag == 1)
	   {
	      Sensor_Check = Sensor_Data[0]+Sensor_Data[1]+Sensor_Data[2]+Sensor_Data[3];
		  //У��ɹ�
		  if(Sensor_Check ==Sensor_Data[4])	
		  {
		     String = S_RH;//"RH:";	   
	         Tmp = Sensor_Data[0]*256+Sensor_Data[1];	   
	         UART_PutStringAndNum(String,Tmp); 
	   		 UARTSend(' ');
	         UARTSend(' ');
	         
			 String = S_Temp;// "Temp:";	   
	       	 Tmp = Sensor_Data[2]*256+Sensor_Data[3];	   
	         UART_PutStringAndNum(String,Tmp);
		   	 UARTSend(' ');
	         UARTSend(' ');

		     String = S_CRCT;//"Check: True";
		     UART_PutString(String);
		  }else	//У��ʧ�� ���϶�������
		  {
             String = S_Data;//"Data: ";
		     UART_PutStringAnd_Data(String,Sensor_Data);
			 UARTSend(' ');	
			 UARTSend(' ');
			 String = S_CRCF;//"Check: Wrong";
		     UART_PutString(String); 
		  }
		}// ������δ����
		else
		{
		   String = S_NotS; //"Sensor Not Connected";
 		   UART_PutString(String);
		}	    
	    UARTSend(0x0A); 

  }  
void Clear_Data (void)
  {
	int i;
	for(i=0;i<5;i++)
	{
	   Sensor_Data[i] = 0x00;
	 }//������������
  }


/********************************************\
|* ���ܣ� �����������͵ĵ����ֽ�	        *|
\********************************************/
unsigned char Read_SensorData(void)
  {
	unsigned char i,cnt;
	unsigned char buffer,tmp;
	buffer = 0;
	for(i=0;i<8;i++)
	{
		cnt=0;
		while(!Sensor_SDA)	//����ϴε͵�ƽ�Ƿ����
		{
		  if(++cnt >= 300)
		   {
			  break;
		   }
		}
		//��ʱMin=26us Max50us ��������"0" �ĸߵ�ƽ
		Delay_N10us(2);	 //��ʱ30us   
		
		//�жϴ�������������λ
		tmp =0;
		if(Sensor_SDA)	 
		{
		  tmp = 1;
		}  
		cnt =0;
		while(Sensor_SDA)		//�ȴ��ߵ�ƽ ����
		{
		   	if(++cnt >= 200)
			{
			  break;
			}
		}
		buffer <<=1;
		buffer |= tmp;	
	}
	return buffer;
  }

/********************************************\
|* ���ܣ� ��������              	        *|
\********************************************/
unsigned char Read_Sensor(void)
  {
	unsigned char i;
	//��������(Min=800US Max=20Ms) 
    Sensor_SDA = 0;
	Delay_N1ms(2);  //��ʱ2Ms
	  
	//�ͷ����� ��ʱ(Min=30us Max=50us)
	Sensor_SDA = 1; 	
	Delay_N10us(1);//��ʱ30us
	//������Ϊ���� �жϴ�������Ӧ�ź� 
	Sensor_SDA = 1; 
     	  
	Sensor_AnswerFlag = 0;  // ��������Ӧ��־	 

	//�жϴӻ��Ƿ��е͵�ƽ��Ӧ�ź� �粻��Ӧ����������Ӧ����������	  
	if(Sensor_SDA ==0)
	{
	   Sensor_AnswerFlag = 1;//�յ���ʼ�ź�
	   Sys_CNT = 0;
	   //�жϴӻ��Ƿ񷢳� 80us �ĵ͵�ƽ��Ӧ�ź��Ƿ����	 
	   while((!Sensor_SDA))
	   {
	     if(++Sys_CNT>300) //��ֹ������ѭ��
		 {
		   Sensor_ErrorFlag = 1;
		   return 0;
		  } 
	    }
	    Sys_CNT = 0;
	    //�жϴӻ��Ƿ񷢳� 80us �ĸߵ�ƽ���緢����������ݽ���״̬
	    while((Sensor_SDA))
	    {
	       if(++Sys_CNT>300) //��ֹ������ѭ��
		   {
		     Sensor_ErrorFlag = 1;
		     return 0;
		   } 
	    } 		 
	    // ���ݽ���	������������40λ���� 
	    // ��5���ֽ� ��λ����  5���ֽڷֱ�Ϊʪ�ȸ�λ ʪ�ȵ�λ �¶ȸ�λ �¶ȵ�λ У���
	    // У���Ϊ��ʪ�ȸ�λ+ʪ�ȵ�λ+�¶ȸ�λ+�¶ȵ�λ
	    for(i=0;i<5;i++)
	    {
	      Sensor_Data[i] = Read_SensorData();
	    }
	  }
	  else
	  {
	    Sensor_AnswerFlag = 0;	  // δ�յ���������Ӧ	
	  }
	  return 1;
  }    

void main(void)
{
  Sensor_SCL = 0;
  InitUART();  //��ʼ���ڷ��ͺ���
  while(1)
  {
	Clear_Data();         // ����յ�����
	Read_Sensor();		  // ��ȡ����������
	UARTSend_Nbyte();	  // ���ڷ��Ͷ�������������
    Delay_N1ms(2000);	  // ��ʱ 2S(���ζ�ȡ�������2S) 
  }
}
