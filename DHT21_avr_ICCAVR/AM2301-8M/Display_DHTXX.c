//ICC-AVR application builder : 2008-4-28 9:22:37
// Target : M8
// Crystal: 8.0000Mhz
/*************************************************************************
���򿪷�������ICC-AVR 
���ܣ�������9600 ���ڷ�����ʪ������  
���ݸ�ʽ��ʪ�ȸ�8λ ʪ�ȸ�8λ  �¶ȵ�8λ �¶ȵ�8λ  У���     
   
          У���= ʪ�ȸ�8λ+ʪ�ȵ�8λ+�¶ȸ�8λ+�¶ȵ�8λ
		  
��˾��DHT21
оƬ��M8
�����ⲿ 8Mhz
�����ˣ� 
����ʱ�䣺09.07.03
�޸��ˣ�
�޸�ʱ�䣺
�޸�ԭ��
**************************************************** **********************/


#include <iom8v.h>
#include <macros.h>
typedef unsigned char  U8;       /* defined for unsigned 8-bits integer variable 	  �޷���8λ���ͱ���  */
typedef signed   char  S8;       /* defined for signed 8-bits integer variable		  �з���8λ���ͱ���  */
typedef unsigned int   U16;      /* defined for unsigned 16-bits integer variable 	  �޷���16λ���ͱ��� */
typedef signed   int   S16;      /* defined for signed 16-bits integer variable 	  �з���16λ���ͱ��� */
typedef unsigned long  U32;      /* defined for unsigned 32-bits integer variable 	  �޷���32λ���ͱ��� */
typedef signed   long  S32;      /* defined for signed 32-bits integer variable 	  �з���32λ���ͱ��� */
typedef float          F32;      /* single precision floating point variable (32bits) �����ȸ�������32λ���ȣ� */
typedef double         F64;      /* double precision floating point variable (64bits) ˫���ȸ�������64λ���ȣ� */


/**************************************************************************
                    I/O�ռ䶨��
***************************************************************************/
// B0_IN	DDRB &= ~(1 << PB0)		/*��������*/
// B0_OUT	DDRB |= (1 << PB0)		/*�������*/
// B0_CLR	PORTB &= ~(1 << PB0)	/*�õ͵�ƽ*/
// B0_SET	PORTB |= (1 << PB0)		/*�øߵ�ƽ*/
// B0_R	    PINB & (1 <<PB0)		/*���˵�ƽ*/

 #define    C4_IN	  DDRC &= ~(1 << PC4)		/*��������*/
 #define    C4_OUT	  DDRC |= (1 << PC4)		/*�������*/
 #define    C4_CLR	  PORTC &= ~(1 << PC4)	    /*�õ͵�ƽ*/
 #define    C4_SET	  PORTC |= (1 << PC4)		/*�øߵ�ƽ*/
 #define    C4_R	    PINC & (1 <<PC4)		/*���˵�ƽ*/

/**************************************************************************
                    ͨѶI/O�ռ䶨��
***************************************************************************/
 #define       COM_IN          C4_IN  
 #define       COM_OUT         C4_OUT
 #define       COM_CLR         C4_CLR
 #define       COM_SET         C4_SET
 #define       COM_R           C4_R
 
/**************************************************************************
                    ȫ�ֱ���������
***************************************************************************/
      U8       i;
      U8    U8FLAG,k;
      U8    U8count,U8temp;
      U8    U8T_data_H,U8T_data_L,U8RH_data_H,U8RH_data_L,U8checkdata;
      U8    U8T_data_H_temp,U8T_data_L_temp,U8RH_data_H_temp,U8RH_data_L_temp,U8checkdata_temp;
      U8    U8comdata;
      U16   ReceiveHighByte;
      U16   ReceiveLowByte;
/**************************************************************************
***************************************************************************/
void port_init(void)
{
 PORTB = 0x00;
 DDRB  = 0xFF;
 PORTC = 0x03;                    
 DDRC  = 0x0C;
 PORTD = 0x00;
 DDRD  = 0xF0;
}

void watchdog_init(void)
{
  //WDR();        //this prevents a timout on enabling
  //WDTCR = 0x0F; //WATCHDOG ENABLED - dont forget to issue WDRs
}


void Delay(unsigned int i)
{
	while(i--);
}

void DelaymS (U16 dly)                   
{
	U16 i;
	for ( ; dly>0; dly--)
	{
	    WDR();
		for (i=0; i<1119; i++);        
	}
}


       void  Delay_10us(void)
      {
        U8 i;                     
        i++;i++;i++;i++;i++;i++;i++;i++;i++;
		i++;i++;i++;i++;i++;i++;i++;i++;i++;
		i++;i++;i++;i++;i++;i++;i++;i++;i++;
		i++;i++;i++;i++;i++;i++;i++;i++;i++;
		i++;i++;i++;i++;i++;i++;i++;i++;i++;
		i++;i++;i++;i++;i++;i++;i++;i++;i++;
		i++;i++;i++;i++;i++;i++;i++;i++;i++;
		i++;i++;i++;i++;i++;i++;i++;
       }
        void  COM(void)
      {
     
	        U8 i;
       for(i=0;i<8;i++)	   
	    {
		
	   	    U8FLAG=2;
	   	while((!(COM_R))&&U8FLAG++);
		 if(U8FLAG==1)break;
			Delay_10us();
			Delay_10us();
		    Delay_10us();
			Delay_10us();
	  		U8temp=0;
	     if(COM_R)U8temp=1;
		    U8FLAG=2;
		   while((COM_R)&&U8FLAG++);
	   	//��ʱ������forѭ��		  
	   	 if(U8FLAG==1)break;
	   	//�ж�����λ��0����1	 
	   	   
		// ����ߵ�ƽ�߹�Ԥ��0�ߵ�ƽֵ������λΪ 1 
	   	 
		   U8comdata<<=1;
	   	   U8comdata|=U8temp;        //0
	     }//rof
	   
	}

	//--------------------------------
	//-----ʪ�ȶ�ȡ�ӳ��� ------------
	//--------------------------------
	//----���±�����Ϊȫ�ֱ���--------
	//----�¶ȸ�8λ== U8T_data_H------
	//----�¶ȵ�8λ== U8T_data_L------
	//----ʪ�ȸ�8λ== U8RH_data_H-----
	//----ʪ�ȵ�8λ== U8RH_data_L-----
	//----У�� 8λ == U8checkdata-----
	//----��������ӳ�������----------
	//---- Delay();, Delay_10us();,COM(); 
	//--------------------------------

	void RH(void)
	{
	 
	  //��������18ms 
       COM_OUT;
       COM_CLR;
	   DelaymS(1);
	   COM_IN;
	   COM_SET;
	  
	 //������������������ ������ʱ20us
	   Delay_10us();
	   Delay_10us();
	   Delay_10us();
	   Delay_10us();
	 //������Ϊ���� �жϴӻ���Ӧ�ź� 
	 //P2_0=1;
	 
	 //�жϴӻ��Ƿ��е͵�ƽ��Ӧ�ź� �粻��Ӧ����������Ӧ����������	  
	  // if(!P2_0)		 //T !	 
	   if(COM_R)U8FLAG=1;
	   while(!(COM_R))		 
	   {
	   U8FLAG=2;
	 //�жϴӻ��Ƿ񷢳� 80us �ĵ͵�ƽ��Ӧ�ź��Ƿ����	 
	   //while((!P2_0)&&U8FLAG++);
	   while((!(COM_R))&&U8FLAG++);
	   if(U8FLAG==1)break;
	   U8FLAG=2;
	 //�жϴӻ��Ƿ񷢳� 80us �ĸߵ�ƽ���緢����������ݽ���״̬
	 //while((P2_0)&&U8FLAG++);
	   while((COM_R)&&U8FLAG++);
	   if(U8FLAG==1)break;
	 //���ݽ���״̬		 
	   COM();
	   if(U8FLAG==1)break;
	   U8T_data_H_temp=U8comdata;
	   COM();
	   if(U8FLAG==1)break;
	   U8T_data_L_temp=U8comdata; 
	   COM();
	   if(U8FLAG==1)break;
	   U8RH_data_H_temp=U8comdata;
	   COM();
	   if(U8FLAG==1)break;
	   U8RH_data_L_temp=U8comdata;
	   COM();
	   if(U8FLAG==1)break;
	   U8checkdata_temp=U8comdata;
	   break;
	    }//while
	   //P2_0=1;
	   COM_IN;
	   COM_SET;
	 //����У�� 
	 
	   U8temp=(U8T_data_H_temp+U8T_data_L_temp+U8RH_data_H_temp+U8RH_data_L_temp);
	   if(U8temp==U8checkdata_temp)
	   {
	   	  U8RH_data_H=U8T_data_H_temp;
	   	  U8RH_data_L=U8T_data_L_temp;
	   	  U8T_data_H=U8RH_data_H_temp;
	   	  U8T_data_L=U8RH_data_L_temp;
	   	  U8checkdata=U8checkdata_temp;
	   }//fi
	  
	  
	   COM_IN;
	   COM_SET;

	}
	
/*
���ڳ�ʼ������
ϵͳƵ�ʣ�2MHz
ֹͣλ��1
�����ʣ�9600
���ݳ��ȣ�8
*/
void Uart_Init(void) {
	UCSRA = 0x02;		/*2����					 */
	UCSRB = 0x18;		/*�������պͷ���*/
	UCSRC = 0x06;		/*8λ����				 */
	UBRRH = 0x00;
	//UBRRL = 47;		/*9600		3.6864M      */  
	//UBRRL = 95;	    /*9600	    7.3728M      */ 
	UBRRL = 103;	    /*9600	    8.0000M      */ 
}

/*
�����ݷ���
��ѯ��ʽ����
*/
void Uart_Transmit(unsigned char i) {

	/* �ȴ����ͻ�����Ϊ��*/
	while (!(UCSRA & (1<<UDRE)));
	/* �����ݷ��뻺��������������*/
	UDR = i;
}

/*
�����ݽ���
��ѯ��ʽ����
*/
unsigned char Uart_Receive( void ) {

	/* �ȴ���������*/
	while (!(UCSRA & (1<<RXC)));
	/* �ӻ������л�ȡ����������*/
	// Uart_Transmit(UDR);
	return UDR;
}

void init_devices(void) 
{
unsigned char i;
		   CLI();                     
     port_init();
 watchdog_init();
    Uart_Init();
    MCUCR = 0x03;
    GICR  = 0x00;                //���ⲿ�ж�0
    TIMSK = 0x00;                //�ض�ʱ��1�ж�
           SEI();                //re-enable interrupts
                           
}	
/**************************************************************************



                            ������
							
							
							
							
**************************************************************************/


 void main(void)
{

 init_devices() ;
 COM_IN;
 COM_SET;
 
 while(1)
 {
 
 //��DHT21   
  RH();
  
  //�ɴ��ڷ������� 
  Uart_Transmit(U8RH_data_H); 
  Uart_Transmit(U8RH_data_L);
  Uart_Transmit(U8T_data_H);  
  Uart_Transmit(U8T_data_L); 
  Uart_Transmit(U8checkdata); 
  

  Uart_Transmit(U8checkdata); 
  //��ʱ2S
  for(U8temp=0;U8temp<200;U8temp++)
  {
  DelaymS(10);
 
  }//rof
  
 }
 
}




 






 
 
 