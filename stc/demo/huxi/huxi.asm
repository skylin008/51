;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Sun Nov  6 21:15:00 2016
;--------------------------------------------------------
	.module huxi
	.optsdcc -mmcs51 --model-small
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _pwm
	.globl _timer0
	.globl _Init
	.globl _CCF0
	.globl _CCF1
	.globl _CR
	.globl _CF
	.globl _P5_3
	.globl _P5_2
	.globl _P5_1
	.globl _P5_0
	.globl _P4_7
	.globl _P4_6
	.globl _P4_5
	.globl _P4_4
	.globl _P4_3
	.globl _P4_2
	.globl _P4_1
	.globl _P4_0
	.globl _PADC
	.globl _PLVD
	.globl _PPCA
	.globl _EADC
	.globl _ELVD
	.globl _CY
	.globl _AC
	.globl _F0
	.globl _RS1
	.globl _RS0
	.globl _OV
	.globl _F1
	.globl _P
	.globl _PS
	.globl _PT1
	.globl _PX1
	.globl _PT0
	.globl _PX0
	.globl _RD
	.globl _WR
	.globl _T1
	.globl _T0
	.globl _INT1
	.globl _INT0
	.globl _TXD
	.globl _RXD
	.globl _P3_7
	.globl _P3_6
	.globl _P3_5
	.globl _P3_4
	.globl _P3_3
	.globl _P3_2
	.globl _P3_1
	.globl _P3_0
	.globl _EA
	.globl _ES
	.globl _ET1
	.globl _EX1
	.globl _ET0
	.globl _EX0
	.globl _P2_7
	.globl _P2_6
	.globl _P2_5
	.globl _P2_4
	.globl _P2_3
	.globl _P2_2
	.globl _P2_1
	.globl _P2_0
	.globl _SM0
	.globl _SM1
	.globl _SM2
	.globl _REN
	.globl _TB8
	.globl _RB8
	.globl _TI
	.globl _RI
	.globl _P1_7
	.globl _P1_6
	.globl _P1_5
	.globl _P1_4
	.globl _P1_3
	.globl _P1_2
	.globl _P1_1
	.globl _P1_0
	.globl _TF1
	.globl _TR1
	.globl _TF0
	.globl _TR0
	.globl _IE1
	.globl _IT1
	.globl _IE0
	.globl _IT0
	.globl _P0_7
	.globl _P0_6
	.globl _P0_5
	.globl _P0_4
	.globl _P0_3
	.globl _P0_2
	.globl _P0_1
	.globl _P0_0
	.globl _IAP_CONTR
	.globl _IAP_TRIG
	.globl _IAP_CMD
	.globl _IAP_ADDRL
	.globl _IAP_ADDRH
	.globl _IAP_DATA
	.globl _SPDAT
	.globl _SPSTAT
	.globl _SPCTL
	.globl _ADC_RESL
	.globl _ADC_RES
	.globl _ADC_CONTR
	.globl _P1ASF
	.globl _PCA_PWM1
	.globl _PCA_PWM0
	.globl _CCAP1H
	.globl _CCAP1L
	.globl _CCAP0H
	.globl _CCAP0L
	.globl _CCAPM1
	.globl _CCAPM0
	.globl _CH
	.globl _CL
	.globl _CMOD
	.globl _CCON
	.globl _WDT_CONTR
	.globl _BRT
	.globl _S2BUF
	.globl _S2CON
	.globl _SADDR
	.globl _SADEN
	.globl _P5M1
	.globl _P5M0
	.globl _P4SW
	.globl _P4M1
	.globl _P4M0
	.globl _P3M1
	.globl _P3M0
	.globl _P2M1
	.globl _P2M0
	.globl _P1M1
	.globl _P1M0
	.globl _P0M1
	.globl _P0M0
	.globl _P5
	.globl _P4
	.globl _IP2H
	.globl _IP2
	.globl _IPH
	.globl _IE2
	.globl _BUS_SPEED
	.globl _CLK_DIV
	.globl _WAKE_CLKO
	.globl _AUXR1
	.globl _AUXR
	.globl _B
	.globl _ACC
	.globl _PSW
	.globl _IP
	.globl _P3
	.globl _IE
	.globl _P2
	.globl _SBUF
	.globl _SCON
	.globl _P1
	.globl _TH1
	.globl _TH0
	.globl _TL1
	.globl _TL0
	.globl _TMOD
	.globl _TCON
	.globl _PCON
	.globl _DPH
	.globl _DPL
	.globl _SP
	.globl _P0
	.globl _ccc
	.globl _bbb
	.globl _aaa
	.globl _vvv
	.globl _Time_3ms
	.globl _Time_50ms
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P0	=	0x0080
_SP	=	0x0081
_DPL	=	0x0082
_DPH	=	0x0083
_PCON	=	0x0087
_TCON	=	0x0088
_TMOD	=	0x0089
_TL0	=	0x008a
_TL1	=	0x008b
_TH0	=	0x008c
_TH1	=	0x008d
_P1	=	0x0090
_SCON	=	0x0098
_SBUF	=	0x0099
_P2	=	0x00a0
_IE	=	0x00a8
_P3	=	0x00b0
_IP	=	0x00b8
_PSW	=	0x00d0
_ACC	=	0x00e0
_B	=	0x00f0
_AUXR	=	0x008e
_AUXR1	=	0x00a2
_WAKE_CLKO	=	0x008f
_CLK_DIV	=	0x0097
_BUS_SPEED	=	0x00a1
_IE2	=	0x00af
_IPH	=	0x00b7
_IP2	=	0x00b5
_IP2H	=	0x00b6
_P4	=	0x00c0
_P5	=	0x00c8
_P0M0	=	0x0094
_P0M1	=	0x0093
_P1M0	=	0x0092
_P1M1	=	0x0091
_P2M0	=	0x0096
_P2M1	=	0x0095
_P3M0	=	0x00b2
_P3M1	=	0x00b1
_P4M0	=	0x00b4
_P4M1	=	0x00b3
_P4SW	=	0x00bb
_P5M0	=	0x00ca
_P5M1	=	0x00c9
_SADEN	=	0x00b9
_SADDR	=	0x00a9
_S2CON	=	0x009a
_S2BUF	=	0x009b
_BRT	=	0x009c
_WDT_CONTR	=	0x00c1
_CCON	=	0x00d8
_CMOD	=	0x00d9
_CL	=	0x00e9
_CH	=	0x00f9
_CCAPM0	=	0x00da
_CCAPM1	=	0x00db
_CCAP0L	=	0x00ea
_CCAP0H	=	0x00fa
_CCAP1L	=	0x00eb
_CCAP1H	=	0x00fb
_PCA_PWM0	=	0x00f2
_PCA_PWM1	=	0x00f3
_P1ASF	=	0x009d
_ADC_CONTR	=	0x00bc
_ADC_RES	=	0x00bd
_ADC_RESL	=	0x00be
_SPCTL	=	0x00ce
_SPSTAT	=	0x00cd
_SPDAT	=	0x00cf
_IAP_DATA	=	0x00c2
_IAP_ADDRH	=	0x00c3
_IAP_ADDRL	=	0x00c4
_IAP_CMD	=	0x00c5
_IAP_TRIG	=	0x00c6
_IAP_CONTR	=	0x00c7
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P0_0	=	0x0080
_P0_1	=	0x0081
_P0_2	=	0x0082
_P0_3	=	0x0083
_P0_4	=	0x0084
_P0_5	=	0x0085
_P0_6	=	0x0086
_P0_7	=	0x0087
_IT0	=	0x0088
_IE0	=	0x0089
_IT1	=	0x008a
_IE1	=	0x008b
_TR0	=	0x008c
_TF0	=	0x008d
_TR1	=	0x008e
_TF1	=	0x008f
_P1_0	=	0x0090
_P1_1	=	0x0091
_P1_2	=	0x0092
_P1_3	=	0x0093
_P1_4	=	0x0094
_P1_5	=	0x0095
_P1_6	=	0x0096
_P1_7	=	0x0097
_RI	=	0x0098
_TI	=	0x0099
_RB8	=	0x009a
_TB8	=	0x009b
_REN	=	0x009c
_SM2	=	0x009d
_SM1	=	0x009e
_SM0	=	0x009f
_P2_0	=	0x00a0
_P2_1	=	0x00a1
_P2_2	=	0x00a2
_P2_3	=	0x00a3
_P2_4	=	0x00a4
_P2_5	=	0x00a5
_P2_6	=	0x00a6
_P2_7	=	0x00a7
_EX0	=	0x00a8
_ET0	=	0x00a9
_EX1	=	0x00aa
_ET1	=	0x00ab
_ES	=	0x00ac
_EA	=	0x00af
_P3_0	=	0x00b0
_P3_1	=	0x00b1
_P3_2	=	0x00b2
_P3_3	=	0x00b3
_P3_4	=	0x00b4
_P3_5	=	0x00b5
_P3_6	=	0x00b6
_P3_7	=	0x00b7
_RXD	=	0x00b0
_TXD	=	0x00b1
_INT0	=	0x00b2
_INT1	=	0x00b3
_T0	=	0x00b4
_T1	=	0x00b5
_WR	=	0x00b6
_RD	=	0x00b7
_PX0	=	0x00b8
_PT0	=	0x00b9
_PX1	=	0x00ba
_PT1	=	0x00bb
_PS	=	0x00bc
_P	=	0x00d0
_F1	=	0x00d1
_OV	=	0x00d2
_RS0	=	0x00d3
_RS1	=	0x00d4
_F0	=	0x00d5
_AC	=	0x00d6
_CY	=	0x00d7
_ELVD	=	0x00ae
_EADC	=	0x00ad
_PPCA	=	0x00bf
_PLVD	=	0x00be
_PADC	=	0x00bd
_P4_0	=	0x00c0
_P4_1	=	0x00c1
_P4_2	=	0x00c2
_P4_3	=	0x00c3
_P4_4	=	0x00c4
_P4_5	=	0x00c5
_P4_6	=	0x00c6
_P4_7	=	0x00c7
_P5_0	=	0x00c8
_P5_1	=	0x00c9
_P5_2	=	0x00ca
_P5_3	=	0x00cb
_CF	=	0x00df
_CR	=	0x00de
_CCF1	=	0x00d9
_CCF0	=	0x00d8
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
	.area REG_BANK_1	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
_Time_50ms::
	.ds 1
_Time_3ms::
	.ds 1
;--------------------------------------------------------
; overlayable items in internal ram 
;--------------------------------------------------------
	.area	OSEG    (OVR,DATA)
;--------------------------------------------------------
; Stack segment in internal ram 
;--------------------------------------------------------
	.area	SSEG
__start__stack:
	.ds	1

;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; absolute internal ram data
;--------------------------------------------------------
	.area IABS    (ABS,DATA)
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
_vvv::
	.ds 1
_aaa::
	.ds 1
_bbb::
	.ds 1
_ccc::
	.ds 1
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area XABS    (ABS,XDATA)
;--------------------------------------------------------
; external initialized ram data
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; interrupt vector 
;--------------------------------------------------------
	.area HOME    (CODE)
__interrupt_vect:
	ljmp	__sdcc_gsinit_startup
	reti
	.ds	7
	ljmp	_timer0
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
	.globl __sdcc_gsinit_startup
	.globl __sdcc_program_startup
	.globl __start__stack
	.globl __mcs51_genRAMCLEAR
;	huxi.c:10: __bit vvv=1;  //检测是否完成了一次呼吸。
	setb	_vvv
;	huxi.c:12: __bit aaa=0;   //这3路当作BCD开关来使用
	clr	_aaa
;	huxi.c:13: __bit bbb=0;
	clr	_bbb
;	huxi.c:14: __bit ccc=0;
	clr	_ccc
	.area GSFINAL (CODE)
	ljmp	__sdcc_program_startup
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
__sdcc_program_startup:
	ljmp	_main
;	return from main will return to caller
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'Init'
;------------------------------------------------------------
;	huxi.c:19: void Init (void)    //中断初始化
;	-----------------------------------------
;	 function Init
;	-----------------------------------------
_Init:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
;	huxi.c:21: TMOD = 0x01;           //12M 50000
	mov	_TMOD,#0x01
;	huxi.c:22: TH0 = 0x4C;
	mov	_TH0,#0x4C
;	huxi.c:23: TL0 = 0x00;
	mov	_TL0,#0x00
;	huxi.c:24: EA=1;
	setb	_EA
;	huxi.c:25: ET0=1;
	setb	_ET0
;	huxi.c:26: TR0=1;
	setb	_TR0
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'timer0'
;------------------------------------------------------------
;	huxi.c:30: void timer0(void) __interrupt 1 __using 1 
;	-----------------------------------------
;	 function timer0
;	-----------------------------------------
_timer0:
	ar7 = 0x0F
	ar6 = 0x0E
	ar5 = 0x0D
	ar4 = 0x0C
	ar3 = 0x0B
	ar2 = 0x0A
	ar1 = 0x09
	ar0 = 0x08
	push	acc
	push	psw
;	huxi.c:32: TH0 = 0xDC;
	mov	_TH0,#0xDC
;	huxi.c:33: TL0 = 0x00;
	mov	_TL0,#0x00
;	huxi.c:35: Time_50ms++;   // 加1
	inc	_Time_50ms
;	huxi.c:37: if(vvv==0)  //每呼吸完一次，计时器就工作一下。等待呼吸完后再计时。
	jb	_vvv,00104$
;	huxi.c:39: if(Time_50ms>=100)   
	mov	a,#0x100 - 0x64
	add	a,_Time_50ms
	jnc	00104$
;	huxi.c:41: Time_50ms=0;    //清零复位
	mov	_Time_50ms,#0x00
;	huxi.c:42: Time_3ms++;//计时器每工作一次Time_3ms就加一。
	inc	_Time_3ms
00104$:
;	huxi.c:45: if(Time_3ms>=7)  //七种颜色轮流呼吸
	mov	a,#0x100 - 0x07
	add	a,_Time_3ms
	jnc	00106$
;	huxi.c:47: Time_3ms=0;
	mov	_Time_3ms,#0x00
00106$:
;	huxi.c:50: if(Time_3ms==0)  //    AAA BBB CCC 用来切换亮什么颜色 这里的==0      ==1   ==2，，，， 3 4 5 6 可以理解为7个开关
	mov	a,_Time_3ms
	jnz	00125$
;	huxi.c:52: aaa=1;
	setb	_aaa
;	huxi.c:53: bbb=1;
	setb	_bbb
;	huxi.c:54: ccc=1;
	setb	_ccc
	sjmp	00127$
00125$:
;	huxi.c:56: else if(Time_3ms==1)
	mov	a,#0x01
	cjne	a,_Time_3ms,00122$
;	huxi.c:58: aaa=0;
	clr	_aaa
;	huxi.c:59: bbb=1;
	setb	_bbb
;	huxi.c:60: ccc=1;
	setb	_ccc
	sjmp	00127$
00122$:
;	huxi.c:62: else if(Time_3ms==2)
	mov	a,#0x02
	cjne	a,_Time_3ms,00119$
;	huxi.c:64: aaa=1;
	setb	_aaa
;	huxi.c:65: bbb=0;
	clr	_bbb
;	huxi.c:66: ccc=1;
	setb	_ccc
	sjmp	00127$
00119$:
;	huxi.c:68: else if(Time_3ms==3)
	mov	a,#0x03
	cjne	a,_Time_3ms,00116$
;	huxi.c:70: aaa=1;
	setb	_aaa
;	huxi.c:71: bbb=1;
	setb	_bbb
;	huxi.c:72: ccc=0;
	clr	_ccc
	sjmp	00127$
00116$:
;	huxi.c:74: else if(Time_3ms==4)
	mov	a,#0x04
	cjne	a,_Time_3ms,00113$
;	huxi.c:76: aaa=0;
	clr	_aaa
;	huxi.c:77: bbb=0;
	clr	_bbb
;	huxi.c:78: ccc=1;
	setb	_ccc
	sjmp	00127$
00113$:
;	huxi.c:80: else if(Time_3ms==5)
	mov	a,#0x05
	cjne	a,_Time_3ms,00110$
;	huxi.c:82: aaa=1;
	setb	_aaa
;	huxi.c:83: bbb=0;
	clr	_bbb
;	huxi.c:84: ccc=0;
	clr	_ccc
	sjmp	00127$
00110$:
;	huxi.c:86: else if(Time_3ms==6)
	mov	a,#0x06
	cjne	a,_Time_3ms,00127$
;	huxi.c:88: aaa=0;
	clr	_aaa
;	huxi.c:89: bbb=1;
	setb	_bbb
;	huxi.c:90: ccc=0;
	clr	_ccc
00127$:
	pop	psw
	pop	acc
	reti
;	eliminated unneeded mov psw,# (no regs used in bank)
;	eliminated unneeded push/pop dpl
;	eliminated unneeded push/pop dph
;	eliminated unneeded push/pop b
;------------------------------------------------------------
;Allocation info for local variables in function 'pwm'
;------------------------------------------------------------
;x                         Allocated to registers 
;------------------------------------------------------------
;	huxi.c:96: void pwm(int x)
;	-----------------------------------------
;	 function pwm
;	-----------------------------------------
_pwm:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
	mov	r6,dpl
	mov	r7,dph
;	huxi.c:98: while(x--){}
00101$:
	mov	ar4,r6
	mov	ar5,r7
	dec	r6
	cjne	r6,#0xFF,00110$
	dec	r7
00110$:
	mov	a,r4
	orl	a,r5
	jnz	00101$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'main'
;------------------------------------------------------------
;t                         Allocated to registers r6 r7 
;f                         Allocated to registers r5 
;------------------------------------------------------------
;	huxi.c:101: void main()
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	huxi.c:103: int t=0;
	mov	r6,#0x00
	mov	r7,#0x00
;	huxi.c:104: char f=0;//亮暗标志，0为亮
	mov	r5,#0x00
;	huxi.c:105: Init();
	push	ar7
	push	ar6
	push	ar5
	lcall	_Init
	pop	ar5
	pop	ar6
	pop	ar7
;	huxi.c:106: while(1) //主循环。
00143$:
;	huxi.c:110: if((aaa==1)&&(bbb==1)&&(ccc==1))
	jnb	_aaa,00131$
	jnb	_bbb,00131$
	jnb	_ccc,00131$
;	huxi.c:112: led1=0;
	clr	_P3_0
;	huxi.c:113: pwm(t);
	mov	dpl,r6
	mov	dph,r7
	push	ar7
	push	ar6
	push	ar5
	lcall	_pwm
	pop	ar5
	pop	ar6
	pop	ar7
;	huxi.c:114: led1=1;
	setb	_P3_0
	ljmp	00132$
00131$:
;	huxi.c:119: if((aaa==0)&&(bbb==1)&&(ccc==1))
	jb	_aaa,00126$
	jnb	_bbb,00126$
	jnb	_ccc,00126$
;	huxi.c:121: led1=0;
	clr	_P3_0
;	huxi.c:122: led3=0;
	clr	_P3_2
;	huxi.c:123: pwm(t);
	mov	dpl,r6
	mov	dph,r7
	push	ar7
	push	ar6
	push	ar5
	lcall	_pwm
	pop	ar5
	pop	ar6
	pop	ar7
;	huxi.c:124: led1=1;
	setb	_P3_0
;	huxi.c:125: led3=1;
	setb	_P3_2
	ljmp	00132$
00126$:
;	huxi.c:128: else        if((aaa==1)&&(bbb==0)&&(ccc==1))
	jnb	_aaa,00121$
	jb	_bbb,00121$
	jnb	_ccc,00121$
;	huxi.c:130: led3=0;
	clr	_P3_2
;	huxi.c:131: pwm(t);
	mov	dpl,r6
	mov	dph,r7
	push	ar7
	push	ar6
	push	ar5
	lcall	_pwm
	pop	ar5
	pop	ar6
	pop	ar7
;	huxi.c:132: led3=1;
	setb	_P3_2
	ljmp	00132$
00121$:
;	huxi.c:135: else        if((aaa==1)&&(bbb==1)&&(ccc==0))
	jnb	_aaa,00116$
	jnb	_bbb,00116$
	jb	_ccc,00116$
;	huxi.c:136: { led1=0;
	clr	_P3_0
;	huxi.c:137: led2=0;
	clr	_P3_1
;	huxi.c:138: pwm(t);
	mov	dpl,r6
	mov	dph,r7
	push	ar7
	push	ar6
	push	ar5
	lcall	_pwm
	pop	ar5
	pop	ar6
	pop	ar7
;	huxi.c:139: led1=1;
	setb	_P3_0
;	huxi.c:140: led2=1;
	setb	_P3_1
	sjmp	00132$
00116$:
;	huxi.c:143: else        if((aaa==0)&&(bbb==0)&&(ccc==1))
	jb	_aaa,00111$
	jb	_bbb,00111$
	jnb	_ccc,00111$
;	huxi.c:145: led2=0;
	clr	_P3_1
;	huxi.c:146: pwm(t);
	mov	dpl,r6
	mov	dph,r7
	push	ar7
	push	ar6
	push	ar5
	lcall	_pwm
	pop	ar5
	pop	ar6
	pop	ar7
;	huxi.c:147: led2=1;
	setb	_P3_1
	sjmp	00132$
00111$:
;	huxi.c:150: else        if((aaa==1)&&(bbb==0)&&(ccc==0))
	jnb	_aaa,00106$
	jb	_bbb,00106$
	jb	_ccc,00106$
;	huxi.c:151: { led3=0;
	clr	_P3_2
;	huxi.c:152: led2=0;
	clr	_P3_1
;	huxi.c:153: pwm(t);
	mov	dpl,r6
	mov	dph,r7
	push	ar7
	push	ar6
	push	ar5
	lcall	_pwm
	pop	ar5
	pop	ar6
	pop	ar7
;	huxi.c:154: led3=1;
	setb	_P3_2
;	huxi.c:155: led2=1;
	setb	_P3_1
	sjmp	00132$
00106$:
;	huxi.c:158: else        if((aaa==0)&&(bbb==1)&&(ccc==0))
	jb	_aaa,00132$
	jnb	_bbb,00132$
	jb	_ccc,00132$
;	huxi.c:160: led1=0;
	clr	_P3_0
;	huxi.c:161: led2=0;
	clr	_P3_1
;	huxi.c:162: led3=0;
	clr	_P3_2
;	huxi.c:163: pwm(t);
	mov	dpl,r6
	mov	dph,r7
	push	ar7
	push	ar6
	push	ar5
	lcall	_pwm
	pop	ar5
	pop	ar6
	pop	ar7
;	huxi.c:164: led1=1;
	setb	_P3_0
;	huxi.c:165: led2=1;
	setb	_P3_1
;	huxi.c:166: led3=1;
	setb	_P3_2
00132$:
;	huxi.c:170: pwm(T-t);
	mov	a,#0xB8
	clr	c
	subb	a,r6
	mov	dpl,a
	mov	a,#0x0B
	subb	a,r7
	mov	dph,a
	push	ar7
	push	ar6
	push	ar5
	lcall	_pwm
	pop	ar5
	pop	ar6
	pop	ar7
;	huxi.c:171: if(!f)
	mov	a,r5
	jnz	00136$
;	huxi.c:173: t+=N;
	mov	a,#0x14
	add	a,r6
	mov	r6,a
	clr	a
	addc	a,r7
	mov	r7,a
	sjmp	00137$
00136$:
;	huxi.c:177: t-=N;    //暗速率较慢
	mov	a,r6
	add	a,#0xEC
	mov	r6,a
	mov	a,r7
	addc	a,#0xFF
	mov	r7,a
00137$:
;	huxi.c:179: if(t>T)
	clr	c
	mov	a,#0xB8
	subb	a,r6
	mov	a,#(0x0B ^ 0x80)
	mov	b,r7
	xrl	b,#0x80
	subb	a,b
	jnc	00139$
;	huxi.c:181: f=1;
	mov	r5,#0x01
;	huxi.c:182: t=T;
	mov	r6,#0xB8
	mov	r7,#0x0B
;	huxi.c:183: vvv=1; //  呼吸开始，关闭计时器，以免中途又切换其他颜色。
	setb	_vvv
00139$:
;	huxi.c:186: if(t<0)
	mov	a,r7
	jb	acc.7,00245$
	ljmp	00143$
00245$:
;	huxi.c:188: f=0;
	mov	r5,#0x00
;	huxi.c:189: t=0;
	mov	r6,#0x00
	mov	r7,#0x00
;	huxi.c:190: vvv=0; // 呼吸完一次，打开计时器 切换颜色。
	clr	_vvv
	ljmp	00143$
	.area CSEG    (CODE)
	.area CONST   (CODE)
	.area CABS    (ABS,CODE)
