                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
                                      4 ; This file was generated Sun Nov  6 21:15:00 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module huxi
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _pwm
                                     14 	.globl _timer0
                                     15 	.globl _Init
                                     16 	.globl _CCF0
                                     17 	.globl _CCF1
                                     18 	.globl _CR
                                     19 	.globl _CF
                                     20 	.globl _P5_3
                                     21 	.globl _P5_2
                                     22 	.globl _P5_1
                                     23 	.globl _P5_0
                                     24 	.globl _P4_7
                                     25 	.globl _P4_6
                                     26 	.globl _P4_5
                                     27 	.globl _P4_4
                                     28 	.globl _P4_3
                                     29 	.globl _P4_2
                                     30 	.globl _P4_1
                                     31 	.globl _P4_0
                                     32 	.globl _PADC
                                     33 	.globl _PLVD
                                     34 	.globl _PPCA
                                     35 	.globl _EADC
                                     36 	.globl _ELVD
                                     37 	.globl _CY
                                     38 	.globl _AC
                                     39 	.globl _F0
                                     40 	.globl _RS1
                                     41 	.globl _RS0
                                     42 	.globl _OV
                                     43 	.globl _F1
                                     44 	.globl _P
                                     45 	.globl _PS
                                     46 	.globl _PT1
                                     47 	.globl _PX1
                                     48 	.globl _PT0
                                     49 	.globl _PX0
                                     50 	.globl _RD
                                     51 	.globl _WR
                                     52 	.globl _T1
                                     53 	.globl _T0
                                     54 	.globl _INT1
                                     55 	.globl _INT0
                                     56 	.globl _TXD
                                     57 	.globl _RXD
                                     58 	.globl _P3_7
                                     59 	.globl _P3_6
                                     60 	.globl _P3_5
                                     61 	.globl _P3_4
                                     62 	.globl _P3_3
                                     63 	.globl _P3_2
                                     64 	.globl _P3_1
                                     65 	.globl _P3_0
                                     66 	.globl _EA
                                     67 	.globl _ES
                                     68 	.globl _ET1
                                     69 	.globl _EX1
                                     70 	.globl _ET0
                                     71 	.globl _EX0
                                     72 	.globl _P2_7
                                     73 	.globl _P2_6
                                     74 	.globl _P2_5
                                     75 	.globl _P2_4
                                     76 	.globl _P2_3
                                     77 	.globl _P2_2
                                     78 	.globl _P2_1
                                     79 	.globl _P2_0
                                     80 	.globl _SM0
                                     81 	.globl _SM1
                                     82 	.globl _SM2
                                     83 	.globl _REN
                                     84 	.globl _TB8
                                     85 	.globl _RB8
                                     86 	.globl _TI
                                     87 	.globl _RI
                                     88 	.globl _P1_7
                                     89 	.globl _P1_6
                                     90 	.globl _P1_5
                                     91 	.globl _P1_4
                                     92 	.globl _P1_3
                                     93 	.globl _P1_2
                                     94 	.globl _P1_1
                                     95 	.globl _P1_0
                                     96 	.globl _TF1
                                     97 	.globl _TR1
                                     98 	.globl _TF0
                                     99 	.globl _TR0
                                    100 	.globl _IE1
                                    101 	.globl _IT1
                                    102 	.globl _IE0
                                    103 	.globl _IT0
                                    104 	.globl _P0_7
                                    105 	.globl _P0_6
                                    106 	.globl _P0_5
                                    107 	.globl _P0_4
                                    108 	.globl _P0_3
                                    109 	.globl _P0_2
                                    110 	.globl _P0_1
                                    111 	.globl _P0_0
                                    112 	.globl _IAP_CONTR
                                    113 	.globl _IAP_TRIG
                                    114 	.globl _IAP_CMD
                                    115 	.globl _IAP_ADDRL
                                    116 	.globl _IAP_ADDRH
                                    117 	.globl _IAP_DATA
                                    118 	.globl _SPDAT
                                    119 	.globl _SPSTAT
                                    120 	.globl _SPCTL
                                    121 	.globl _ADC_RESL
                                    122 	.globl _ADC_RES
                                    123 	.globl _ADC_CONTR
                                    124 	.globl _P1ASF
                                    125 	.globl _PCA_PWM1
                                    126 	.globl _PCA_PWM0
                                    127 	.globl _CCAP1H
                                    128 	.globl _CCAP1L
                                    129 	.globl _CCAP0H
                                    130 	.globl _CCAP0L
                                    131 	.globl _CCAPM1
                                    132 	.globl _CCAPM0
                                    133 	.globl _CH
                                    134 	.globl _CL
                                    135 	.globl _CMOD
                                    136 	.globl _CCON
                                    137 	.globl _WDT_CONTR
                                    138 	.globl _BRT
                                    139 	.globl _S2BUF
                                    140 	.globl _S2CON
                                    141 	.globl _SADDR
                                    142 	.globl _SADEN
                                    143 	.globl _P5M1
                                    144 	.globl _P5M0
                                    145 	.globl _P4SW
                                    146 	.globl _P4M1
                                    147 	.globl _P4M0
                                    148 	.globl _P3M1
                                    149 	.globl _P3M0
                                    150 	.globl _P2M1
                                    151 	.globl _P2M0
                                    152 	.globl _P1M1
                                    153 	.globl _P1M0
                                    154 	.globl _P0M1
                                    155 	.globl _P0M0
                                    156 	.globl _P5
                                    157 	.globl _P4
                                    158 	.globl _IP2H
                                    159 	.globl _IP2
                                    160 	.globl _IPH
                                    161 	.globl _IE2
                                    162 	.globl _BUS_SPEED
                                    163 	.globl _CLK_DIV
                                    164 	.globl _WAKE_CLKO
                                    165 	.globl _AUXR1
                                    166 	.globl _AUXR
                                    167 	.globl _B
                                    168 	.globl _ACC
                                    169 	.globl _PSW
                                    170 	.globl _IP
                                    171 	.globl _P3
                                    172 	.globl _IE
                                    173 	.globl _P2
                                    174 	.globl _SBUF
                                    175 	.globl _SCON
                                    176 	.globl _P1
                                    177 	.globl _TH1
                                    178 	.globl _TH0
                                    179 	.globl _TL1
                                    180 	.globl _TL0
                                    181 	.globl _TMOD
                                    182 	.globl _TCON
                                    183 	.globl _PCON
                                    184 	.globl _DPH
                                    185 	.globl _DPL
                                    186 	.globl _SP
                                    187 	.globl _P0
                                    188 	.globl _ccc
                                    189 	.globl _bbb
                                    190 	.globl _aaa
                                    191 	.globl _vvv
                                    192 	.globl _Time_3ms
                                    193 	.globl _Time_50ms
                                    194 ;--------------------------------------------------------
                                    195 ; special function registers
                                    196 ;--------------------------------------------------------
                                    197 	.area RSEG    (ABS,DATA)
      000000                        198 	.org 0x0000
                           000080   199 _P0	=	0x0080
                           000081   200 _SP	=	0x0081
                           000082   201 _DPL	=	0x0082
                           000083   202 _DPH	=	0x0083
                           000087   203 _PCON	=	0x0087
                           000088   204 _TCON	=	0x0088
                           000089   205 _TMOD	=	0x0089
                           00008A   206 _TL0	=	0x008a
                           00008B   207 _TL1	=	0x008b
                           00008C   208 _TH0	=	0x008c
                           00008D   209 _TH1	=	0x008d
                           000090   210 _P1	=	0x0090
                           000098   211 _SCON	=	0x0098
                           000099   212 _SBUF	=	0x0099
                           0000A0   213 _P2	=	0x00a0
                           0000A8   214 _IE	=	0x00a8
                           0000B0   215 _P3	=	0x00b0
                           0000B8   216 _IP	=	0x00b8
                           0000D0   217 _PSW	=	0x00d0
                           0000E0   218 _ACC	=	0x00e0
                           0000F0   219 _B	=	0x00f0
                           00008E   220 _AUXR	=	0x008e
                           0000A2   221 _AUXR1	=	0x00a2
                           00008F   222 _WAKE_CLKO	=	0x008f
                           000097   223 _CLK_DIV	=	0x0097
                           0000A1   224 _BUS_SPEED	=	0x00a1
                           0000AF   225 _IE2	=	0x00af
                           0000B7   226 _IPH	=	0x00b7
                           0000B5   227 _IP2	=	0x00b5
                           0000B6   228 _IP2H	=	0x00b6
                           0000C0   229 _P4	=	0x00c0
                           0000C8   230 _P5	=	0x00c8
                           000094   231 _P0M0	=	0x0094
                           000093   232 _P0M1	=	0x0093
                           000092   233 _P1M0	=	0x0092
                           000091   234 _P1M1	=	0x0091
                           000096   235 _P2M0	=	0x0096
                           000095   236 _P2M1	=	0x0095
                           0000B2   237 _P3M0	=	0x00b2
                           0000B1   238 _P3M1	=	0x00b1
                           0000B4   239 _P4M0	=	0x00b4
                           0000B3   240 _P4M1	=	0x00b3
                           0000BB   241 _P4SW	=	0x00bb
                           0000CA   242 _P5M0	=	0x00ca
                           0000C9   243 _P5M1	=	0x00c9
                           0000B9   244 _SADEN	=	0x00b9
                           0000A9   245 _SADDR	=	0x00a9
                           00009A   246 _S2CON	=	0x009a
                           00009B   247 _S2BUF	=	0x009b
                           00009C   248 _BRT	=	0x009c
                           0000C1   249 _WDT_CONTR	=	0x00c1
                           0000D8   250 _CCON	=	0x00d8
                           0000D9   251 _CMOD	=	0x00d9
                           0000E9   252 _CL	=	0x00e9
                           0000F9   253 _CH	=	0x00f9
                           0000DA   254 _CCAPM0	=	0x00da
                           0000DB   255 _CCAPM1	=	0x00db
                           0000EA   256 _CCAP0L	=	0x00ea
                           0000FA   257 _CCAP0H	=	0x00fa
                           0000EB   258 _CCAP1L	=	0x00eb
                           0000FB   259 _CCAP1H	=	0x00fb
                           0000F2   260 _PCA_PWM0	=	0x00f2
                           0000F3   261 _PCA_PWM1	=	0x00f3
                           00009D   262 _P1ASF	=	0x009d
                           0000BC   263 _ADC_CONTR	=	0x00bc
                           0000BD   264 _ADC_RES	=	0x00bd
                           0000BE   265 _ADC_RESL	=	0x00be
                           0000CE   266 _SPCTL	=	0x00ce
                           0000CD   267 _SPSTAT	=	0x00cd
                           0000CF   268 _SPDAT	=	0x00cf
                           0000C2   269 _IAP_DATA	=	0x00c2
                           0000C3   270 _IAP_ADDRH	=	0x00c3
                           0000C4   271 _IAP_ADDRL	=	0x00c4
                           0000C5   272 _IAP_CMD	=	0x00c5
                           0000C6   273 _IAP_TRIG	=	0x00c6
                           0000C7   274 _IAP_CONTR	=	0x00c7
                                    275 ;--------------------------------------------------------
                                    276 ; special function bits
                                    277 ;--------------------------------------------------------
                                    278 	.area RSEG    (ABS,DATA)
      000000                        279 	.org 0x0000
                           000080   280 _P0_0	=	0x0080
                           000081   281 _P0_1	=	0x0081
                           000082   282 _P0_2	=	0x0082
                           000083   283 _P0_3	=	0x0083
                           000084   284 _P0_4	=	0x0084
                           000085   285 _P0_5	=	0x0085
                           000086   286 _P0_6	=	0x0086
                           000087   287 _P0_7	=	0x0087
                           000088   288 _IT0	=	0x0088
                           000089   289 _IE0	=	0x0089
                           00008A   290 _IT1	=	0x008a
                           00008B   291 _IE1	=	0x008b
                           00008C   292 _TR0	=	0x008c
                           00008D   293 _TF0	=	0x008d
                           00008E   294 _TR1	=	0x008e
                           00008F   295 _TF1	=	0x008f
                           000090   296 _P1_0	=	0x0090
                           000091   297 _P1_1	=	0x0091
                           000092   298 _P1_2	=	0x0092
                           000093   299 _P1_3	=	0x0093
                           000094   300 _P1_4	=	0x0094
                           000095   301 _P1_5	=	0x0095
                           000096   302 _P1_6	=	0x0096
                           000097   303 _P1_7	=	0x0097
                           000098   304 _RI	=	0x0098
                           000099   305 _TI	=	0x0099
                           00009A   306 _RB8	=	0x009a
                           00009B   307 _TB8	=	0x009b
                           00009C   308 _REN	=	0x009c
                           00009D   309 _SM2	=	0x009d
                           00009E   310 _SM1	=	0x009e
                           00009F   311 _SM0	=	0x009f
                           0000A0   312 _P2_0	=	0x00a0
                           0000A1   313 _P2_1	=	0x00a1
                           0000A2   314 _P2_2	=	0x00a2
                           0000A3   315 _P2_3	=	0x00a3
                           0000A4   316 _P2_4	=	0x00a4
                           0000A5   317 _P2_5	=	0x00a5
                           0000A6   318 _P2_6	=	0x00a6
                           0000A7   319 _P2_7	=	0x00a7
                           0000A8   320 _EX0	=	0x00a8
                           0000A9   321 _ET0	=	0x00a9
                           0000AA   322 _EX1	=	0x00aa
                           0000AB   323 _ET1	=	0x00ab
                           0000AC   324 _ES	=	0x00ac
                           0000AF   325 _EA	=	0x00af
                           0000B0   326 _P3_0	=	0x00b0
                           0000B1   327 _P3_1	=	0x00b1
                           0000B2   328 _P3_2	=	0x00b2
                           0000B3   329 _P3_3	=	0x00b3
                           0000B4   330 _P3_4	=	0x00b4
                           0000B5   331 _P3_5	=	0x00b5
                           0000B6   332 _P3_6	=	0x00b6
                           0000B7   333 _P3_7	=	0x00b7
                           0000B0   334 _RXD	=	0x00b0
                           0000B1   335 _TXD	=	0x00b1
                           0000B2   336 _INT0	=	0x00b2
                           0000B3   337 _INT1	=	0x00b3
                           0000B4   338 _T0	=	0x00b4
                           0000B5   339 _T1	=	0x00b5
                           0000B6   340 _WR	=	0x00b6
                           0000B7   341 _RD	=	0x00b7
                           0000B8   342 _PX0	=	0x00b8
                           0000B9   343 _PT0	=	0x00b9
                           0000BA   344 _PX1	=	0x00ba
                           0000BB   345 _PT1	=	0x00bb
                           0000BC   346 _PS	=	0x00bc
                           0000D0   347 _P	=	0x00d0
                           0000D1   348 _F1	=	0x00d1
                           0000D2   349 _OV	=	0x00d2
                           0000D3   350 _RS0	=	0x00d3
                           0000D4   351 _RS1	=	0x00d4
                           0000D5   352 _F0	=	0x00d5
                           0000D6   353 _AC	=	0x00d6
                           0000D7   354 _CY	=	0x00d7
                           0000AE   355 _ELVD	=	0x00ae
                           0000AD   356 _EADC	=	0x00ad
                           0000BF   357 _PPCA	=	0x00bf
                           0000BE   358 _PLVD	=	0x00be
                           0000BD   359 _PADC	=	0x00bd
                           0000C0   360 _P4_0	=	0x00c0
                           0000C1   361 _P4_1	=	0x00c1
                           0000C2   362 _P4_2	=	0x00c2
                           0000C3   363 _P4_3	=	0x00c3
                           0000C4   364 _P4_4	=	0x00c4
                           0000C5   365 _P4_5	=	0x00c5
                           0000C6   366 _P4_6	=	0x00c6
                           0000C7   367 _P4_7	=	0x00c7
                           0000C8   368 _P5_0	=	0x00c8
                           0000C9   369 _P5_1	=	0x00c9
                           0000CA   370 _P5_2	=	0x00ca
                           0000CB   371 _P5_3	=	0x00cb
                           0000DF   372 _CF	=	0x00df
                           0000DE   373 _CR	=	0x00de
                           0000D9   374 _CCF1	=	0x00d9
                           0000D8   375 _CCF0	=	0x00d8
                                    376 ;--------------------------------------------------------
                                    377 ; overlayable register banks
                                    378 ;--------------------------------------------------------
                                    379 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        380 	.ds 8
                                    381 	.area REG_BANK_1	(REL,OVR,DATA)
      000008                        382 	.ds 8
                                    383 ;--------------------------------------------------------
                                    384 ; internal ram data
                                    385 ;--------------------------------------------------------
                                    386 	.area DSEG    (DATA)
      000010                        387 _Time_50ms::
      000010                        388 	.ds 1
      000011                        389 _Time_3ms::
      000011                        390 	.ds 1
                                    391 ;--------------------------------------------------------
                                    392 ; overlayable items in internal ram 
                                    393 ;--------------------------------------------------------
                                    394 	.area	OSEG    (OVR,DATA)
                                    395 ;--------------------------------------------------------
                                    396 ; Stack segment in internal ram 
                                    397 ;--------------------------------------------------------
                                    398 	.area	SSEG
      000021                        399 __start__stack:
      000021                        400 	.ds	1
                                    401 
                                    402 ;--------------------------------------------------------
                                    403 ; indirectly addressable internal ram data
                                    404 ;--------------------------------------------------------
                                    405 	.area ISEG    (DATA)
                                    406 ;--------------------------------------------------------
                                    407 ; absolute internal ram data
                                    408 ;--------------------------------------------------------
                                    409 	.area IABS    (ABS,DATA)
                                    410 	.area IABS    (ABS,DATA)
                                    411 ;--------------------------------------------------------
                                    412 ; bit data
                                    413 ;--------------------------------------------------------
                                    414 	.area BSEG    (BIT)
      000000                        415 _vvv::
      000000                        416 	.ds 1
      000001                        417 _aaa::
      000001                        418 	.ds 1
      000002                        419 _bbb::
      000002                        420 	.ds 1
      000003                        421 _ccc::
      000003                        422 	.ds 1
                                    423 ;--------------------------------------------------------
                                    424 ; paged external ram data
                                    425 ;--------------------------------------------------------
                                    426 	.area PSEG    (PAG,XDATA)
                                    427 ;--------------------------------------------------------
                                    428 ; external ram data
                                    429 ;--------------------------------------------------------
                                    430 	.area XSEG    (XDATA)
                                    431 ;--------------------------------------------------------
                                    432 ; absolute external ram data
                                    433 ;--------------------------------------------------------
                                    434 	.area XABS    (ABS,XDATA)
                                    435 ;--------------------------------------------------------
                                    436 ; external initialized ram data
                                    437 ;--------------------------------------------------------
                                    438 	.area HOME    (CODE)
                                    439 	.area GSINIT0 (CODE)
                                    440 	.area GSINIT1 (CODE)
                                    441 	.area GSINIT2 (CODE)
                                    442 	.area GSINIT3 (CODE)
                                    443 	.area GSINIT4 (CODE)
                                    444 	.area GSINIT5 (CODE)
                                    445 	.area GSINIT  (CODE)
                                    446 	.area GSFINAL (CODE)
                                    447 	.area CSEG    (CODE)
                                    448 ;--------------------------------------------------------
                                    449 ; interrupt vector 
                                    450 ;--------------------------------------------------------
                                    451 	.area HOME    (CODE)
      000000                        452 __interrupt_vect:
      000000 02 00 11         [24]  453 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  454 	reti
      000004                        455 	.ds	7
      00000B 02 00 3F         [24]  456 	ljmp	_timer0
                                    457 ;--------------------------------------------------------
                                    458 ; global & static initialisations
                                    459 ;--------------------------------------------------------
                                    460 	.area HOME    (CODE)
                                    461 	.area GSINIT  (CODE)
                                    462 	.area GSFINAL (CODE)
                                    463 	.area GSINIT  (CODE)
                                    464 	.globl __sdcc_gsinit_startup
                                    465 	.globl __sdcc_program_startup
                                    466 	.globl __start__stack
                                    467 	.globl __mcs51_genRAMCLEAR
                                    468 ;	huxi.c:10: __bit vvv=1;  //检测是否完成了一次呼吸。
      000024 D2 00            [12]  469 	setb	_vvv
                                    470 ;	huxi.c:12: __bit aaa=0;   //这3路当作BCD开关来使用
      000026 C2 01            [12]  471 	clr	_aaa
                                    472 ;	huxi.c:13: __bit bbb=0;
      000028 C2 02            [12]  473 	clr	_bbb
                                    474 ;	huxi.c:14: __bit ccc=0;
      00002A C2 03            [12]  475 	clr	_ccc
                                    476 	.area GSFINAL (CODE)
      00002C 02 00 0E         [24]  477 	ljmp	__sdcc_program_startup
                                    478 ;--------------------------------------------------------
                                    479 ; Home
                                    480 ;--------------------------------------------------------
                                    481 	.area HOME    (CODE)
                                    482 	.area HOME    (CODE)
      00000E                        483 __sdcc_program_startup:
      00000E 02 00 D1         [24]  484 	ljmp	_main
                                    485 ;	return from main will return to caller
                                    486 ;--------------------------------------------------------
                                    487 ; code
                                    488 ;--------------------------------------------------------
                                    489 	.area CSEG    (CODE)
                                    490 ;------------------------------------------------------------
                                    491 ;Allocation info for local variables in function 'Init'
                                    492 ;------------------------------------------------------------
                                    493 ;	huxi.c:19: void Init (void)    //中断初始化
                                    494 ;	-----------------------------------------
                                    495 ;	 function Init
                                    496 ;	-----------------------------------------
      00002F                        497 _Init:
                           000007   498 	ar7 = 0x07
                           000006   499 	ar6 = 0x06
                           000005   500 	ar5 = 0x05
                           000004   501 	ar4 = 0x04
                           000003   502 	ar3 = 0x03
                           000002   503 	ar2 = 0x02
                           000001   504 	ar1 = 0x01
                           000000   505 	ar0 = 0x00
                                    506 ;	huxi.c:21: TMOD = 0x01;           //12M 50000
      00002F 75 89 01         [24]  507 	mov	_TMOD,#0x01
                                    508 ;	huxi.c:22: TH0 = 0x4C;
      000032 75 8C 4C         [24]  509 	mov	_TH0,#0x4C
                                    510 ;	huxi.c:23: TL0 = 0x00;
      000035 75 8A 00         [24]  511 	mov	_TL0,#0x00
                                    512 ;	huxi.c:24: EA=1;
      000038 D2 AF            [12]  513 	setb	_EA
                                    514 ;	huxi.c:25: ET0=1;
      00003A D2 A9            [12]  515 	setb	_ET0
                                    516 ;	huxi.c:26: TR0=1;
      00003C D2 8C            [12]  517 	setb	_TR0
      00003E 22               [24]  518 	ret
                                    519 ;------------------------------------------------------------
                                    520 ;Allocation info for local variables in function 'timer0'
                                    521 ;------------------------------------------------------------
                                    522 ;	huxi.c:30: void timer0(void) __interrupt 1 __using 1 
                                    523 ;	-----------------------------------------
                                    524 ;	 function timer0
                                    525 ;	-----------------------------------------
      00003F                        526 _timer0:
                           00000F   527 	ar7 = 0x0F
                           00000E   528 	ar6 = 0x0E
                           00000D   529 	ar5 = 0x0D
                           00000C   530 	ar4 = 0x0C
                           00000B   531 	ar3 = 0x0B
                           00000A   532 	ar2 = 0x0A
                           000009   533 	ar1 = 0x09
                           000008   534 	ar0 = 0x08
      00003F C0 E0            [24]  535 	push	acc
      000041 C0 D0            [24]  536 	push	psw
                                    537 ;	huxi.c:32: TH0 = 0xDC;
      000043 75 8C DC         [24]  538 	mov	_TH0,#0xDC
                                    539 ;	huxi.c:33: TL0 = 0x00;
      000046 75 8A 00         [24]  540 	mov	_TL0,#0x00
                                    541 ;	huxi.c:35: Time_50ms++;   // 加1
      000049 05 10            [12]  542 	inc	_Time_50ms
                                    543 ;	huxi.c:37: if(vvv==0)  //每呼吸完一次，计时器就工作一下。等待呼吸完后再计时。
      00004B 20 00 0B         [24]  544 	jb	_vvv,00104$
                                    545 ;	huxi.c:39: if(Time_50ms>=100)   
      00004E 74 9C            [12]  546 	mov	a,#0x100 - 0x64
      000050 25 10            [12]  547 	add	a,_Time_50ms
      000052 50 05            [24]  548 	jnc	00104$
                                    549 ;	huxi.c:41: Time_50ms=0;    //清零复位
      000054 75 10 00         [24]  550 	mov	_Time_50ms,#0x00
                                    551 ;	huxi.c:42: Time_3ms++;//计时器每工作一次Time_3ms就加一。
      000057 05 11            [12]  552 	inc	_Time_3ms
      000059                        553 00104$:
                                    554 ;	huxi.c:45: if(Time_3ms>=7)  //七种颜色轮流呼吸
      000059 74 F9            [12]  555 	mov	a,#0x100 - 0x07
      00005B 25 11            [12]  556 	add	a,_Time_3ms
      00005D 50 03            [24]  557 	jnc	00106$
                                    558 ;	huxi.c:47: Time_3ms=0;
      00005F 75 11 00         [24]  559 	mov	_Time_3ms,#0x00
      000062                        560 00106$:
                                    561 ;	huxi.c:50: if(Time_3ms==0)  //    AAA BBB CCC 用来切换亮什么颜色 这里的==0      ==1   ==2，，，， 3 4 5 6 可以理解为7个开关
      000062 E5 11            [12]  562 	mov	a,_Time_3ms
      000064 70 08            [24]  563 	jnz	00125$
                                    564 ;	huxi.c:52: aaa=1;
      000066 D2 01            [12]  565 	setb	_aaa
                                    566 ;	huxi.c:53: bbb=1;
      000068 D2 02            [12]  567 	setb	_bbb
                                    568 ;	huxi.c:54: ccc=1;
      00006A D2 03            [12]  569 	setb	_ccc
      00006C 80 4C            [24]  570 	sjmp	00127$
      00006E                        571 00125$:
                                    572 ;	huxi.c:56: else if(Time_3ms==1)
      00006E 74 01            [12]  573 	mov	a,#0x01
      000070 B5 11 08         [24]  574 	cjne	a,_Time_3ms,00122$
                                    575 ;	huxi.c:58: aaa=0;
      000073 C2 01            [12]  576 	clr	_aaa
                                    577 ;	huxi.c:59: bbb=1;
      000075 D2 02            [12]  578 	setb	_bbb
                                    579 ;	huxi.c:60: ccc=1;
      000077 D2 03            [12]  580 	setb	_ccc
      000079 80 3F            [24]  581 	sjmp	00127$
      00007B                        582 00122$:
                                    583 ;	huxi.c:62: else if(Time_3ms==2)
      00007B 74 02            [12]  584 	mov	a,#0x02
      00007D B5 11 08         [24]  585 	cjne	a,_Time_3ms,00119$
                                    586 ;	huxi.c:64: aaa=1;
      000080 D2 01            [12]  587 	setb	_aaa
                                    588 ;	huxi.c:65: bbb=0;
      000082 C2 02            [12]  589 	clr	_bbb
                                    590 ;	huxi.c:66: ccc=1;
      000084 D2 03            [12]  591 	setb	_ccc
      000086 80 32            [24]  592 	sjmp	00127$
      000088                        593 00119$:
                                    594 ;	huxi.c:68: else if(Time_3ms==3)
      000088 74 03            [12]  595 	mov	a,#0x03
      00008A B5 11 08         [24]  596 	cjne	a,_Time_3ms,00116$
                                    597 ;	huxi.c:70: aaa=1;
      00008D D2 01            [12]  598 	setb	_aaa
                                    599 ;	huxi.c:71: bbb=1;
      00008F D2 02            [12]  600 	setb	_bbb
                                    601 ;	huxi.c:72: ccc=0;
      000091 C2 03            [12]  602 	clr	_ccc
      000093 80 25            [24]  603 	sjmp	00127$
      000095                        604 00116$:
                                    605 ;	huxi.c:74: else if(Time_3ms==4)
      000095 74 04            [12]  606 	mov	a,#0x04
      000097 B5 11 08         [24]  607 	cjne	a,_Time_3ms,00113$
                                    608 ;	huxi.c:76: aaa=0;
      00009A C2 01            [12]  609 	clr	_aaa
                                    610 ;	huxi.c:77: bbb=0;
      00009C C2 02            [12]  611 	clr	_bbb
                                    612 ;	huxi.c:78: ccc=1;
      00009E D2 03            [12]  613 	setb	_ccc
      0000A0 80 18            [24]  614 	sjmp	00127$
      0000A2                        615 00113$:
                                    616 ;	huxi.c:80: else if(Time_3ms==5)
      0000A2 74 05            [12]  617 	mov	a,#0x05
      0000A4 B5 11 08         [24]  618 	cjne	a,_Time_3ms,00110$
                                    619 ;	huxi.c:82: aaa=1;
      0000A7 D2 01            [12]  620 	setb	_aaa
                                    621 ;	huxi.c:83: bbb=0;
      0000A9 C2 02            [12]  622 	clr	_bbb
                                    623 ;	huxi.c:84: ccc=0;
      0000AB C2 03            [12]  624 	clr	_ccc
      0000AD 80 0B            [24]  625 	sjmp	00127$
      0000AF                        626 00110$:
                                    627 ;	huxi.c:86: else if(Time_3ms==6)
      0000AF 74 06            [12]  628 	mov	a,#0x06
      0000B1 B5 11 06         [24]  629 	cjne	a,_Time_3ms,00127$
                                    630 ;	huxi.c:88: aaa=0;
      0000B4 C2 01            [12]  631 	clr	_aaa
                                    632 ;	huxi.c:89: bbb=1;
      0000B6 D2 02            [12]  633 	setb	_bbb
                                    634 ;	huxi.c:90: ccc=0;
      0000B8 C2 03            [12]  635 	clr	_ccc
      0000BA                        636 00127$:
      0000BA D0 D0            [24]  637 	pop	psw
      0000BC D0 E0            [24]  638 	pop	acc
      0000BE 32               [24]  639 	reti
                                    640 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    641 ;	eliminated unneeded push/pop dpl
                                    642 ;	eliminated unneeded push/pop dph
                                    643 ;	eliminated unneeded push/pop b
                                    644 ;------------------------------------------------------------
                                    645 ;Allocation info for local variables in function 'pwm'
                                    646 ;------------------------------------------------------------
                                    647 ;x                         Allocated to registers 
                                    648 ;------------------------------------------------------------
                                    649 ;	huxi.c:96: void pwm(int x)
                                    650 ;	-----------------------------------------
                                    651 ;	 function pwm
                                    652 ;	-----------------------------------------
      0000BF                        653 _pwm:
                           000007   654 	ar7 = 0x07
                           000006   655 	ar6 = 0x06
                           000005   656 	ar5 = 0x05
                           000004   657 	ar4 = 0x04
                           000003   658 	ar3 = 0x03
                           000002   659 	ar2 = 0x02
                           000001   660 	ar1 = 0x01
                           000000   661 	ar0 = 0x00
      0000BF AE 82            [24]  662 	mov	r6,dpl
      0000C1 AF 83            [24]  663 	mov	r7,dph
                                    664 ;	huxi.c:98: while(x--){}
      0000C3                        665 00101$:
      0000C3 8E 04            [24]  666 	mov	ar4,r6
      0000C5 8F 05            [24]  667 	mov	ar5,r7
      0000C7 1E               [12]  668 	dec	r6
      0000C8 BE FF 01         [24]  669 	cjne	r6,#0xFF,00110$
      0000CB 1F               [12]  670 	dec	r7
      0000CC                        671 00110$:
      0000CC EC               [12]  672 	mov	a,r4
      0000CD 4D               [12]  673 	orl	a,r5
      0000CE 70 F3            [24]  674 	jnz	00101$
      0000D0 22               [24]  675 	ret
                                    676 ;------------------------------------------------------------
                                    677 ;Allocation info for local variables in function 'main'
                                    678 ;------------------------------------------------------------
                                    679 ;t                         Allocated to registers r6 r7 
                                    680 ;f                         Allocated to registers r5 
                                    681 ;------------------------------------------------------------
                                    682 ;	huxi.c:101: void main()
                                    683 ;	-----------------------------------------
                                    684 ;	 function main
                                    685 ;	-----------------------------------------
      0000D1                        686 _main:
                                    687 ;	huxi.c:103: int t=0;
      0000D1 7E 00            [12]  688 	mov	r6,#0x00
      0000D3 7F 00            [12]  689 	mov	r7,#0x00
                                    690 ;	huxi.c:104: char f=0;//亮暗标志，0为亮
      0000D5 7D 00            [12]  691 	mov	r5,#0x00
                                    692 ;	huxi.c:105: Init();
      0000D7 C0 07            [24]  693 	push	ar7
      0000D9 C0 06            [24]  694 	push	ar6
      0000DB C0 05            [24]  695 	push	ar5
      0000DD 12 00 2F         [24]  696 	lcall	_Init
      0000E0 D0 05            [24]  697 	pop	ar5
      0000E2 D0 06            [24]  698 	pop	ar6
      0000E4 D0 07            [24]  699 	pop	ar7
                                    700 ;	huxi.c:106: while(1) //主循环。
      0000E6                        701 00143$:
                                    702 ;	huxi.c:110: if((aaa==1)&&(bbb==1)&&(ccc==1))
      0000E6 30 01 20         [24]  703 	jnb	_aaa,00131$
      0000E9 30 02 1D         [24]  704 	jnb	_bbb,00131$
      0000EC 30 03 1A         [24]  705 	jnb	_ccc,00131$
                                    706 ;	huxi.c:112: led1=0;
      0000EF C2 B0            [12]  707 	clr	_P3_0
                                    708 ;	huxi.c:113: pwm(t);
      0000F1 8E 82            [24]  709 	mov	dpl,r6
      0000F3 8F 83            [24]  710 	mov	dph,r7
      0000F5 C0 07            [24]  711 	push	ar7
      0000F7 C0 06            [24]  712 	push	ar6
      0000F9 C0 05            [24]  713 	push	ar5
      0000FB 12 00 BF         [24]  714 	lcall	_pwm
      0000FE D0 05            [24]  715 	pop	ar5
      000100 D0 06            [24]  716 	pop	ar6
      000102 D0 07            [24]  717 	pop	ar7
                                    718 ;	huxi.c:114: led1=1;
      000104 D2 B0            [12]  719 	setb	_P3_0
      000106 02 01 E9         [24]  720 	ljmp	00132$
      000109                        721 00131$:
                                    722 ;	huxi.c:119: if((aaa==0)&&(bbb==1)&&(ccc==1))
      000109 20 01 24         [24]  723 	jb	_aaa,00126$
      00010C 30 02 21         [24]  724 	jnb	_bbb,00126$
      00010F 30 03 1E         [24]  725 	jnb	_ccc,00126$
                                    726 ;	huxi.c:121: led1=0;
      000112 C2 B0            [12]  727 	clr	_P3_0
                                    728 ;	huxi.c:122: led3=0;
      000114 C2 B2            [12]  729 	clr	_P3_2
                                    730 ;	huxi.c:123: pwm(t);
      000116 8E 82            [24]  731 	mov	dpl,r6
      000118 8F 83            [24]  732 	mov	dph,r7
      00011A C0 07            [24]  733 	push	ar7
      00011C C0 06            [24]  734 	push	ar6
      00011E C0 05            [24]  735 	push	ar5
      000120 12 00 BF         [24]  736 	lcall	_pwm
      000123 D0 05            [24]  737 	pop	ar5
      000125 D0 06            [24]  738 	pop	ar6
      000127 D0 07            [24]  739 	pop	ar7
                                    740 ;	huxi.c:124: led1=1;
      000129 D2 B0            [12]  741 	setb	_P3_0
                                    742 ;	huxi.c:125: led3=1;
      00012B D2 B2            [12]  743 	setb	_P3_2
      00012D 02 01 E9         [24]  744 	ljmp	00132$
      000130                        745 00126$:
                                    746 ;	huxi.c:128: else        if((aaa==1)&&(bbb==0)&&(ccc==1))
      000130 30 01 20         [24]  747 	jnb	_aaa,00121$
      000133 20 02 1D         [24]  748 	jb	_bbb,00121$
      000136 30 03 1A         [24]  749 	jnb	_ccc,00121$
                                    750 ;	huxi.c:130: led3=0;
      000139 C2 B2            [12]  751 	clr	_P3_2
                                    752 ;	huxi.c:131: pwm(t);
      00013B 8E 82            [24]  753 	mov	dpl,r6
      00013D 8F 83            [24]  754 	mov	dph,r7
      00013F C0 07            [24]  755 	push	ar7
      000141 C0 06            [24]  756 	push	ar6
      000143 C0 05            [24]  757 	push	ar5
      000145 12 00 BF         [24]  758 	lcall	_pwm
      000148 D0 05            [24]  759 	pop	ar5
      00014A D0 06            [24]  760 	pop	ar6
      00014C D0 07            [24]  761 	pop	ar7
                                    762 ;	huxi.c:132: led3=1;
      00014E D2 B2            [12]  763 	setb	_P3_2
      000150 02 01 E9         [24]  764 	ljmp	00132$
      000153                        765 00121$:
                                    766 ;	huxi.c:135: else        if((aaa==1)&&(bbb==1)&&(ccc==0))
      000153 30 01 23         [24]  767 	jnb	_aaa,00116$
      000156 30 02 20         [24]  768 	jnb	_bbb,00116$
      000159 20 03 1D         [24]  769 	jb	_ccc,00116$
                                    770 ;	huxi.c:136: { led1=0;
      00015C C2 B0            [12]  771 	clr	_P3_0
                                    772 ;	huxi.c:137: led2=0;
      00015E C2 B1            [12]  773 	clr	_P3_1
                                    774 ;	huxi.c:138: pwm(t);
      000160 8E 82            [24]  775 	mov	dpl,r6
      000162 8F 83            [24]  776 	mov	dph,r7
      000164 C0 07            [24]  777 	push	ar7
      000166 C0 06            [24]  778 	push	ar6
      000168 C0 05            [24]  779 	push	ar5
      00016A 12 00 BF         [24]  780 	lcall	_pwm
      00016D D0 05            [24]  781 	pop	ar5
      00016F D0 06            [24]  782 	pop	ar6
      000171 D0 07            [24]  783 	pop	ar7
                                    784 ;	huxi.c:139: led1=1;
      000173 D2 B0            [12]  785 	setb	_P3_0
                                    786 ;	huxi.c:140: led2=1;
      000175 D2 B1            [12]  787 	setb	_P3_1
      000177 80 70            [24]  788 	sjmp	00132$
      000179                        789 00116$:
                                    790 ;	huxi.c:143: else        if((aaa==0)&&(bbb==0)&&(ccc==1))
      000179 20 01 1F         [24]  791 	jb	_aaa,00111$
      00017C 20 02 1C         [24]  792 	jb	_bbb,00111$
      00017F 30 03 19         [24]  793 	jnb	_ccc,00111$
                                    794 ;	huxi.c:145: led2=0;
      000182 C2 B1            [12]  795 	clr	_P3_1
                                    796 ;	huxi.c:146: pwm(t);
      000184 8E 82            [24]  797 	mov	dpl,r6
      000186 8F 83            [24]  798 	mov	dph,r7
      000188 C0 07            [24]  799 	push	ar7
      00018A C0 06            [24]  800 	push	ar6
      00018C C0 05            [24]  801 	push	ar5
      00018E 12 00 BF         [24]  802 	lcall	_pwm
      000191 D0 05            [24]  803 	pop	ar5
      000193 D0 06            [24]  804 	pop	ar6
      000195 D0 07            [24]  805 	pop	ar7
                                    806 ;	huxi.c:147: led2=1;
      000197 D2 B1            [12]  807 	setb	_P3_1
      000199 80 4E            [24]  808 	sjmp	00132$
      00019B                        809 00111$:
                                    810 ;	huxi.c:150: else        if((aaa==1)&&(bbb==0)&&(ccc==0))
      00019B 30 01 23         [24]  811 	jnb	_aaa,00106$
      00019E 20 02 20         [24]  812 	jb	_bbb,00106$
      0001A1 20 03 1D         [24]  813 	jb	_ccc,00106$
                                    814 ;	huxi.c:151: { led3=0;
      0001A4 C2 B2            [12]  815 	clr	_P3_2
                                    816 ;	huxi.c:152: led2=0;
      0001A6 C2 B1            [12]  817 	clr	_P3_1
                                    818 ;	huxi.c:153: pwm(t);
      0001A8 8E 82            [24]  819 	mov	dpl,r6
      0001AA 8F 83            [24]  820 	mov	dph,r7
      0001AC C0 07            [24]  821 	push	ar7
      0001AE C0 06            [24]  822 	push	ar6
      0001B0 C0 05            [24]  823 	push	ar5
      0001B2 12 00 BF         [24]  824 	lcall	_pwm
      0001B5 D0 05            [24]  825 	pop	ar5
      0001B7 D0 06            [24]  826 	pop	ar6
      0001B9 D0 07            [24]  827 	pop	ar7
                                    828 ;	huxi.c:154: led3=1;
      0001BB D2 B2            [12]  829 	setb	_P3_2
                                    830 ;	huxi.c:155: led2=1;
      0001BD D2 B1            [12]  831 	setb	_P3_1
      0001BF 80 28            [24]  832 	sjmp	00132$
      0001C1                        833 00106$:
                                    834 ;	huxi.c:158: else        if((aaa==0)&&(bbb==1)&&(ccc==0))
      0001C1 20 01 25         [24]  835 	jb	_aaa,00132$
      0001C4 30 02 22         [24]  836 	jnb	_bbb,00132$
      0001C7 20 03 1F         [24]  837 	jb	_ccc,00132$
                                    838 ;	huxi.c:160: led1=0;
      0001CA C2 B0            [12]  839 	clr	_P3_0
                                    840 ;	huxi.c:161: led2=0;
      0001CC C2 B1            [12]  841 	clr	_P3_1
                                    842 ;	huxi.c:162: led3=0;
      0001CE C2 B2            [12]  843 	clr	_P3_2
                                    844 ;	huxi.c:163: pwm(t);
      0001D0 8E 82            [24]  845 	mov	dpl,r6
      0001D2 8F 83            [24]  846 	mov	dph,r7
      0001D4 C0 07            [24]  847 	push	ar7
      0001D6 C0 06            [24]  848 	push	ar6
      0001D8 C0 05            [24]  849 	push	ar5
      0001DA 12 00 BF         [24]  850 	lcall	_pwm
      0001DD D0 05            [24]  851 	pop	ar5
      0001DF D0 06            [24]  852 	pop	ar6
      0001E1 D0 07            [24]  853 	pop	ar7
                                    854 ;	huxi.c:164: led1=1;
      0001E3 D2 B0            [12]  855 	setb	_P3_0
                                    856 ;	huxi.c:165: led2=1;
      0001E5 D2 B1            [12]  857 	setb	_P3_1
                                    858 ;	huxi.c:166: led3=1;
      0001E7 D2 B2            [12]  859 	setb	_P3_2
      0001E9                        860 00132$:
                                    861 ;	huxi.c:170: pwm(T-t);
      0001E9 74 B8            [12]  862 	mov	a,#0xB8
      0001EB C3               [12]  863 	clr	c
      0001EC 9E               [12]  864 	subb	a,r6
      0001ED F5 82            [12]  865 	mov	dpl,a
      0001EF 74 0B            [12]  866 	mov	a,#0x0B
      0001F1 9F               [12]  867 	subb	a,r7
      0001F2 F5 83            [12]  868 	mov	dph,a
      0001F4 C0 07            [24]  869 	push	ar7
      0001F6 C0 06            [24]  870 	push	ar6
      0001F8 C0 05            [24]  871 	push	ar5
      0001FA 12 00 BF         [24]  872 	lcall	_pwm
      0001FD D0 05            [24]  873 	pop	ar5
      0001FF D0 06            [24]  874 	pop	ar6
      000201 D0 07            [24]  875 	pop	ar7
                                    876 ;	huxi.c:171: if(!f)
      000203 ED               [12]  877 	mov	a,r5
      000204 70 09            [24]  878 	jnz	00136$
                                    879 ;	huxi.c:173: t+=N;
      000206 74 14            [12]  880 	mov	a,#0x14
      000208 2E               [12]  881 	add	a,r6
      000209 FE               [12]  882 	mov	r6,a
      00020A E4               [12]  883 	clr	a
      00020B 3F               [12]  884 	addc	a,r7
      00020C FF               [12]  885 	mov	r7,a
      00020D 80 08            [24]  886 	sjmp	00137$
      00020F                        887 00136$:
                                    888 ;	huxi.c:177: t-=N;    //暗速率较慢
      00020F EE               [12]  889 	mov	a,r6
      000210 24 EC            [12]  890 	add	a,#0xEC
      000212 FE               [12]  891 	mov	r6,a
      000213 EF               [12]  892 	mov	a,r7
      000214 34 FF            [12]  893 	addc	a,#0xFF
      000216 FF               [12]  894 	mov	r7,a
      000217                        895 00137$:
                                    896 ;	huxi.c:179: if(t>T)
      000217 C3               [12]  897 	clr	c
      000218 74 B8            [12]  898 	mov	a,#0xB8
      00021A 9E               [12]  899 	subb	a,r6
      00021B 74 8B            [12]  900 	mov	a,#(0x0B ^ 0x80)
      00021D 8F F0            [24]  901 	mov	b,r7
      00021F 63 F0 80         [24]  902 	xrl	b,#0x80
      000222 95 F0            [12]  903 	subb	a,b
      000224 50 08            [24]  904 	jnc	00139$
                                    905 ;	huxi.c:181: f=1;
      000226 7D 01            [12]  906 	mov	r5,#0x01
                                    907 ;	huxi.c:182: t=T;
      000228 7E B8            [12]  908 	mov	r6,#0xB8
      00022A 7F 0B            [12]  909 	mov	r7,#0x0B
                                    910 ;	huxi.c:183: vvv=1; //  呼吸开始，关闭计时器，以免中途又切换其他颜色。
      00022C D2 00            [12]  911 	setb	_vvv
      00022E                        912 00139$:
                                    913 ;	huxi.c:186: if(t<0)
      00022E EF               [12]  914 	mov	a,r7
      00022F 20 E7 03         [24]  915 	jb	acc.7,00245$
      000232 02 00 E6         [24]  916 	ljmp	00143$
      000235                        917 00245$:
                                    918 ;	huxi.c:188: f=0;
      000235 7D 00            [12]  919 	mov	r5,#0x00
                                    920 ;	huxi.c:189: t=0;
      000237 7E 00            [12]  921 	mov	r6,#0x00
      000239 7F 00            [12]  922 	mov	r7,#0x00
                                    923 ;	huxi.c:190: vvv=0; // 呼吸完一次，打开计时器 切换颜色。
      00023B C2 00            [12]  924 	clr	_vvv
      00023D 02 00 E6         [24]  925 	ljmp	00143$
                                    926 	.area CSEG    (CODE)
                                    927 	.area CONST   (CODE)
                                    928 	.area CABS    (ABS,CODE)
