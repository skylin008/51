                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
                                      4 ; This file was generated Mon Nov  7 18:30:03 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module led
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _delay
                                     14 	.globl _P3_2
                                     15 	.globl _CCF0
                                     16 	.globl _CCF1
                                     17 	.globl _CR
                                     18 	.globl _CF
                                     19 	.globl _P5_3
                                     20 	.globl _P5_2
                                     21 	.globl _P5_1
                                     22 	.globl _P5_0
                                     23 	.globl _P4_7
                                     24 	.globl _P4_6
                                     25 	.globl _P4_5
                                     26 	.globl _P4_4
                                     27 	.globl _P4_3
                                     28 	.globl _P4_2
                                     29 	.globl _P4_1
                                     30 	.globl _P4_0
                                     31 	.globl _PADC
                                     32 	.globl _PLVD
                                     33 	.globl _PPCA
                                     34 	.globl _EADC
                                     35 	.globl _ELVD
                                     36 	.globl _CY
                                     37 	.globl _AC
                                     38 	.globl _F0
                                     39 	.globl _RS1
                                     40 	.globl _RS0
                                     41 	.globl _OV
                                     42 	.globl _F1
                                     43 	.globl _P
                                     44 	.globl _PS
                                     45 	.globl _PT1
                                     46 	.globl _PX1
                                     47 	.globl _PT0
                                     48 	.globl _PX0
                                     49 	.globl _RD
                                     50 	.globl _WR
                                     51 	.globl _T1
                                     52 	.globl _T0
                                     53 	.globl _INT1
                                     54 	.globl _INT0
                                     55 	.globl _TXD
                                     56 	.globl _RXD
                                     57 	.globl _P3_7
                                     58 	.globl _P3_6
                                     59 	.globl _P3_5
                                     60 	.globl _P3_4
                                     61 	.globl _P3_3
                                     62 	.globl _P3_1
                                     63 	.globl _P3_0
                                     64 	.globl _EA
                                     65 	.globl _ES
                                     66 	.globl _ET1
                                     67 	.globl _EX1
                                     68 	.globl _ET0
                                     69 	.globl _EX0
                                     70 	.globl _P2_7
                                     71 	.globl _P2_6
                                     72 	.globl _P2_5
                                     73 	.globl _P2_4
                                     74 	.globl _P2_3
                                     75 	.globl _P2_2
                                     76 	.globl _P2_1
                                     77 	.globl _P2_0
                                     78 	.globl _SM0
                                     79 	.globl _SM1
                                     80 	.globl _SM2
                                     81 	.globl _REN
                                     82 	.globl _TB8
                                     83 	.globl _RB8
                                     84 	.globl _TI
                                     85 	.globl _RI
                                     86 	.globl _P1_7
                                     87 	.globl _P1_6
                                     88 	.globl _P1_5
                                     89 	.globl _P1_4
                                     90 	.globl _P1_3
                                     91 	.globl _P1_2
                                     92 	.globl _P1_1
                                     93 	.globl _P1_0
                                     94 	.globl _TF1
                                     95 	.globl _TR1
                                     96 	.globl _TF0
                                     97 	.globl _TR0
                                     98 	.globl _IE1
                                     99 	.globl _IT1
                                    100 	.globl _IE0
                                    101 	.globl _IT0
                                    102 	.globl _P0_7
                                    103 	.globl _P0_6
                                    104 	.globl _P0_5
                                    105 	.globl _P0_4
                                    106 	.globl _P0_3
                                    107 	.globl _P0_2
                                    108 	.globl _P0_1
                                    109 	.globl _P0_0
                                    110 	.globl _IAP_CONTR
                                    111 	.globl _IAP_TRIG
                                    112 	.globl _IAP_CMD
                                    113 	.globl _IAP_ADDRL
                                    114 	.globl _IAP_ADDRH
                                    115 	.globl _IAP_DATA
                                    116 	.globl _SPDAT
                                    117 	.globl _SPSTAT
                                    118 	.globl _SPCTL
                                    119 	.globl _ADC_RESL
                                    120 	.globl _ADC_RES
                                    121 	.globl _ADC_CONTR
                                    122 	.globl _P1ASF
                                    123 	.globl _PCA_PWM1
                                    124 	.globl _PCA_PWM0
                                    125 	.globl _CCAP1H
                                    126 	.globl _CCAP1L
                                    127 	.globl _CCAP0H
                                    128 	.globl _CCAP0L
                                    129 	.globl _CCAPM1
                                    130 	.globl _CCAPM0
                                    131 	.globl _CH
                                    132 	.globl _CL
                                    133 	.globl _CMOD
                                    134 	.globl _CCON
                                    135 	.globl _WDT_CONTR
                                    136 	.globl _BRT
                                    137 	.globl _S2BUF
                                    138 	.globl _S2CON
                                    139 	.globl _SADDR
                                    140 	.globl _SADEN
                                    141 	.globl _P5M1
                                    142 	.globl _P5M0
                                    143 	.globl _P4SW
                                    144 	.globl _P4M1
                                    145 	.globl _P4M0
                                    146 	.globl _P3M1
                                    147 	.globl _P3M0
                                    148 	.globl _P2M1
                                    149 	.globl _P2M0
                                    150 	.globl _P1M1
                                    151 	.globl _P1M0
                                    152 	.globl _P0M1
                                    153 	.globl _P0M0
                                    154 	.globl _P5
                                    155 	.globl _P4
                                    156 	.globl _IP2H
                                    157 	.globl _IP2
                                    158 	.globl _IPH
                                    159 	.globl _IE2
                                    160 	.globl _BUS_SPEED
                                    161 	.globl _CLK_DIV
                                    162 	.globl _WAKE_CLKO
                                    163 	.globl _AUXR1
                                    164 	.globl _AUXR
                                    165 	.globl _B
                                    166 	.globl _ACC
                                    167 	.globl _PSW
                                    168 	.globl _IP
                                    169 	.globl _P3
                                    170 	.globl _IE
                                    171 	.globl _P2
                                    172 	.globl _SBUF
                                    173 	.globl _SCON
                                    174 	.globl _P1
                                    175 	.globl _TH1
                                    176 	.globl _TH0
                                    177 	.globl _TL1
                                    178 	.globl _TL0
                                    179 	.globl _TMOD
                                    180 	.globl _TCON
                                    181 	.globl _PCON
                                    182 	.globl _DPH
                                    183 	.globl _DPL
                                    184 	.globl _SP
                                    185 	.globl _P0
                                    186 ;--------------------------------------------------------
                                    187 ; special function registers
                                    188 ;--------------------------------------------------------
                                    189 	.area RSEG    (ABS,DATA)
      000000                        190 	.org 0x0000
                           000080   191 _P0	=	0x0080
                           000081   192 _SP	=	0x0081
                           000082   193 _DPL	=	0x0082
                           000083   194 _DPH	=	0x0083
                           000087   195 _PCON	=	0x0087
                           000088   196 _TCON	=	0x0088
                           000089   197 _TMOD	=	0x0089
                           00008A   198 _TL0	=	0x008a
                           00008B   199 _TL1	=	0x008b
                           00008C   200 _TH0	=	0x008c
                           00008D   201 _TH1	=	0x008d
                           000090   202 _P1	=	0x0090
                           000098   203 _SCON	=	0x0098
                           000099   204 _SBUF	=	0x0099
                           0000A0   205 _P2	=	0x00a0
                           0000A8   206 _IE	=	0x00a8
                           0000B0   207 _P3	=	0x00b0
                           0000B8   208 _IP	=	0x00b8
                           0000D0   209 _PSW	=	0x00d0
                           0000E0   210 _ACC	=	0x00e0
                           0000F0   211 _B	=	0x00f0
                           00008E   212 _AUXR	=	0x008e
                           0000A2   213 _AUXR1	=	0x00a2
                           00008F   214 _WAKE_CLKO	=	0x008f
                           000097   215 _CLK_DIV	=	0x0097
                           0000A1   216 _BUS_SPEED	=	0x00a1
                           0000AF   217 _IE2	=	0x00af
                           0000B7   218 _IPH	=	0x00b7
                           0000B5   219 _IP2	=	0x00b5
                           0000B6   220 _IP2H	=	0x00b6
                           0000C0   221 _P4	=	0x00c0
                           0000C8   222 _P5	=	0x00c8
                           000094   223 _P0M0	=	0x0094
                           000093   224 _P0M1	=	0x0093
                           000092   225 _P1M0	=	0x0092
                           000091   226 _P1M1	=	0x0091
                           000096   227 _P2M0	=	0x0096
                           000095   228 _P2M1	=	0x0095
                           0000B2   229 _P3M0	=	0x00b2
                           0000B1   230 _P3M1	=	0x00b1
                           0000B4   231 _P4M0	=	0x00b4
                           0000B3   232 _P4M1	=	0x00b3
                           0000BB   233 _P4SW	=	0x00bb
                           0000CA   234 _P5M0	=	0x00ca
                           0000C9   235 _P5M1	=	0x00c9
                           0000B9   236 _SADEN	=	0x00b9
                           0000A9   237 _SADDR	=	0x00a9
                           00009A   238 _S2CON	=	0x009a
                           00009B   239 _S2BUF	=	0x009b
                           00009C   240 _BRT	=	0x009c
                           0000C1   241 _WDT_CONTR	=	0x00c1
                           0000D8   242 _CCON	=	0x00d8
                           0000D9   243 _CMOD	=	0x00d9
                           0000E9   244 _CL	=	0x00e9
                           0000F9   245 _CH	=	0x00f9
                           0000DA   246 _CCAPM0	=	0x00da
                           0000DB   247 _CCAPM1	=	0x00db
                           0000EA   248 _CCAP0L	=	0x00ea
                           0000FA   249 _CCAP0H	=	0x00fa
                           0000EB   250 _CCAP1L	=	0x00eb
                           0000FB   251 _CCAP1H	=	0x00fb
                           0000F2   252 _PCA_PWM0	=	0x00f2
                           0000F3   253 _PCA_PWM1	=	0x00f3
                           00009D   254 _P1ASF	=	0x009d
                           0000BC   255 _ADC_CONTR	=	0x00bc
                           0000BD   256 _ADC_RES	=	0x00bd
                           0000BE   257 _ADC_RESL	=	0x00be
                           0000CE   258 _SPCTL	=	0x00ce
                           0000CD   259 _SPSTAT	=	0x00cd
                           0000CF   260 _SPDAT	=	0x00cf
                           0000C2   261 _IAP_DATA	=	0x00c2
                           0000C3   262 _IAP_ADDRH	=	0x00c3
                           0000C4   263 _IAP_ADDRL	=	0x00c4
                           0000C5   264 _IAP_CMD	=	0x00c5
                           0000C6   265 _IAP_TRIG	=	0x00c6
                           0000C7   266 _IAP_CONTR	=	0x00c7
                                    267 ;--------------------------------------------------------
                                    268 ; special function bits
                                    269 ;--------------------------------------------------------
                                    270 	.area RSEG    (ABS,DATA)
      000000                        271 	.org 0x0000
                           000080   272 _P0_0	=	0x0080
                           000081   273 _P0_1	=	0x0081
                           000082   274 _P0_2	=	0x0082
                           000083   275 _P0_3	=	0x0083
                           000084   276 _P0_4	=	0x0084
                           000085   277 _P0_5	=	0x0085
                           000086   278 _P0_6	=	0x0086
                           000087   279 _P0_7	=	0x0087
                           000088   280 _IT0	=	0x0088
                           000089   281 _IE0	=	0x0089
                           00008A   282 _IT1	=	0x008a
                           00008B   283 _IE1	=	0x008b
                           00008C   284 _TR0	=	0x008c
                           00008D   285 _TF0	=	0x008d
                           00008E   286 _TR1	=	0x008e
                           00008F   287 _TF1	=	0x008f
                           000090   288 _P1_0	=	0x0090
                           000091   289 _P1_1	=	0x0091
                           000092   290 _P1_2	=	0x0092
                           000093   291 _P1_3	=	0x0093
                           000094   292 _P1_4	=	0x0094
                           000095   293 _P1_5	=	0x0095
                           000096   294 _P1_6	=	0x0096
                           000097   295 _P1_7	=	0x0097
                           000098   296 _RI	=	0x0098
                           000099   297 _TI	=	0x0099
                           00009A   298 _RB8	=	0x009a
                           00009B   299 _TB8	=	0x009b
                           00009C   300 _REN	=	0x009c
                           00009D   301 _SM2	=	0x009d
                           00009E   302 _SM1	=	0x009e
                           00009F   303 _SM0	=	0x009f
                           0000A0   304 _P2_0	=	0x00a0
                           0000A1   305 _P2_1	=	0x00a1
                           0000A2   306 _P2_2	=	0x00a2
                           0000A3   307 _P2_3	=	0x00a3
                           0000A4   308 _P2_4	=	0x00a4
                           0000A5   309 _P2_5	=	0x00a5
                           0000A6   310 _P2_6	=	0x00a6
                           0000A7   311 _P2_7	=	0x00a7
                           0000A8   312 _EX0	=	0x00a8
                           0000A9   313 _ET0	=	0x00a9
                           0000AA   314 _EX1	=	0x00aa
                           0000AB   315 _ET1	=	0x00ab
                           0000AC   316 _ES	=	0x00ac
                           0000AF   317 _EA	=	0x00af
                           0000B0   318 _P3_0	=	0x00b0
                           0000B1   319 _P3_1	=	0x00b1
                           0000B3   320 _P3_3	=	0x00b3
                           0000B4   321 _P3_4	=	0x00b4
                           0000B5   322 _P3_5	=	0x00b5
                           0000B6   323 _P3_6	=	0x00b6
                           0000B7   324 _P3_7	=	0x00b7
                           0000B0   325 _RXD	=	0x00b0
                           0000B1   326 _TXD	=	0x00b1
                           0000B2   327 _INT0	=	0x00b2
                           0000B3   328 _INT1	=	0x00b3
                           0000B4   329 _T0	=	0x00b4
                           0000B5   330 _T1	=	0x00b5
                           0000B6   331 _WR	=	0x00b6
                           0000B7   332 _RD	=	0x00b7
                           0000B8   333 _PX0	=	0x00b8
                           0000B9   334 _PT0	=	0x00b9
                           0000BA   335 _PX1	=	0x00ba
                           0000BB   336 _PT1	=	0x00bb
                           0000BC   337 _PS	=	0x00bc
                           0000D0   338 _P	=	0x00d0
                           0000D1   339 _F1	=	0x00d1
                           0000D2   340 _OV	=	0x00d2
                           0000D3   341 _RS0	=	0x00d3
                           0000D4   342 _RS1	=	0x00d4
                           0000D5   343 _F0	=	0x00d5
                           0000D6   344 _AC	=	0x00d6
                           0000D7   345 _CY	=	0x00d7
                           0000AE   346 _ELVD	=	0x00ae
                           0000AD   347 _EADC	=	0x00ad
                           0000BF   348 _PPCA	=	0x00bf
                           0000BE   349 _PLVD	=	0x00be
                           0000BD   350 _PADC	=	0x00bd
                           0000C0   351 _P4_0	=	0x00c0
                           0000C1   352 _P4_1	=	0x00c1
                           0000C2   353 _P4_2	=	0x00c2
                           0000C3   354 _P4_3	=	0x00c3
                           0000C4   355 _P4_4	=	0x00c4
                           0000C5   356 _P4_5	=	0x00c5
                           0000C6   357 _P4_6	=	0x00c6
                           0000C7   358 _P4_7	=	0x00c7
                           0000C8   359 _P5_0	=	0x00c8
                           0000C9   360 _P5_1	=	0x00c9
                           0000CA   361 _P5_2	=	0x00ca
                           0000CB   362 _P5_3	=	0x00cb
                           0000DF   363 _CF	=	0x00df
                           0000DE   364 _CR	=	0x00de
                           0000D9   365 _CCF1	=	0x00d9
                           0000D8   366 _CCF0	=	0x00d8
                           0000B2   367 _P3_2	=	0x00b2
                                    368 ;--------------------------------------------------------
                                    369 ; overlayable register banks
                                    370 ;--------------------------------------------------------
                                    371 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        372 	.ds 8
                                    373 ;--------------------------------------------------------
                                    374 ; internal ram data
                                    375 ;--------------------------------------------------------
                                    376 	.area DSEG    (DATA)
                                    377 ;--------------------------------------------------------
                                    378 ; overlayable items in internal ram 
                                    379 ;--------------------------------------------------------
                                    380 	.area	OSEG    (OVR,DATA)
                                    381 ;--------------------------------------------------------
                                    382 ; Stack segment in internal ram 
                                    383 ;--------------------------------------------------------
                                    384 	.area	SSEG
      000008                        385 __start__stack:
      000008                        386 	.ds	1
                                    387 
                                    388 ;--------------------------------------------------------
                                    389 ; indirectly addressable internal ram data
                                    390 ;--------------------------------------------------------
                                    391 	.area ISEG    (DATA)
                                    392 ;--------------------------------------------------------
                                    393 ; absolute internal ram data
                                    394 ;--------------------------------------------------------
                                    395 	.area IABS    (ABS,DATA)
                                    396 	.area IABS    (ABS,DATA)
                                    397 ;--------------------------------------------------------
                                    398 ; bit data
                                    399 ;--------------------------------------------------------
                                    400 	.area BSEG    (BIT)
                                    401 ;--------------------------------------------------------
                                    402 ; paged external ram data
                                    403 ;--------------------------------------------------------
                                    404 	.area PSEG    (PAG,XDATA)
                                    405 ;--------------------------------------------------------
                                    406 ; external ram data
                                    407 ;--------------------------------------------------------
                                    408 	.area XSEG    (XDATA)
                                    409 ;--------------------------------------------------------
                                    410 ; absolute external ram data
                                    411 ;--------------------------------------------------------
                                    412 	.area XABS    (ABS,XDATA)
                                    413 ;--------------------------------------------------------
                                    414 ; external initialized ram data
                                    415 ;--------------------------------------------------------
                                    416 	.area XISEG   (XDATA)
                                    417 	.area HOME    (CODE)
                                    418 	.area GSINIT0 (CODE)
                                    419 	.area GSINIT1 (CODE)
                                    420 	.area GSINIT2 (CODE)
                                    421 	.area GSINIT3 (CODE)
                                    422 	.area GSINIT4 (CODE)
                                    423 	.area GSINIT5 (CODE)
                                    424 	.area GSINIT  (CODE)
                                    425 	.area GSFINAL (CODE)
                                    426 	.area CSEG    (CODE)
                                    427 ;--------------------------------------------------------
                                    428 ; interrupt vector 
                                    429 ;--------------------------------------------------------
                                    430 	.area HOME    (CODE)
      000000                        431 __interrupt_vect:
      000000 02 00 06         [24]  432 	ljmp	__sdcc_gsinit_startup
                                    433 ;--------------------------------------------------------
                                    434 ; global & static initialisations
                                    435 ;--------------------------------------------------------
                                    436 	.area HOME    (CODE)
                                    437 	.area GSINIT  (CODE)
                                    438 	.area GSFINAL (CODE)
                                    439 	.area GSINIT  (CODE)
                                    440 	.globl __sdcc_gsinit_startup
                                    441 	.globl __sdcc_program_startup
                                    442 	.globl __start__stack
                                    443 	.globl __mcs51_genXINIT
                                    444 	.globl __mcs51_genXRAMCLEAR
                                    445 	.globl __mcs51_genRAMCLEAR
                                    446 	.area GSFINAL (CODE)
      00005F 02 00 03         [24]  447 	ljmp	__sdcc_program_startup
                                    448 ;--------------------------------------------------------
                                    449 ; Home
                                    450 ;--------------------------------------------------------
                                    451 	.area HOME    (CODE)
                                    452 	.area HOME    (CODE)
      000003                        453 __sdcc_program_startup:
      000003 02 00 8B         [24]  454 	ljmp	_main
                                    455 ;	return from main will return to caller
                                    456 ;--------------------------------------------------------
                                    457 ; code
                                    458 ;--------------------------------------------------------
                                    459 	.area CSEG    (CODE)
                                    460 ;------------------------------------------------------------
                                    461 ;Allocation info for local variables in function 'delay'
                                    462 ;------------------------------------------------------------
                                    463 ;i                         Allocated to registers r6 r7 
                                    464 ;j                         Allocated to registers r4 r5 
                                    465 ;------------------------------------------------------------
                                    466 ;	led.c:5: void delay()
                                    467 ;	-----------------------------------------
                                    468 ;	 function delay
                                    469 ;	-----------------------------------------
      000062                        470 _delay:
                           000007   471 	ar7 = 0x07
                           000006   472 	ar6 = 0x06
                           000005   473 	ar5 = 0x05
                           000004   474 	ar4 = 0x04
                           000003   475 	ar3 = 0x03
                           000002   476 	ar2 = 0x02
                           000001   477 	ar1 = 0x01
                           000000   478 	ar0 = 0x00
                                    479 ;	led.c:9: for (i=0; i<100; i++)
      000062 7E 00            [12]  480 	mov	r6,#0x00
      000064 7F 00            [12]  481 	mov	r7,#0x00
      000066                        482 00106$:
                                    483 ;	led.c:10: for (j=0; j<500; j++);
      000066 7C F4            [12]  484 	mov	r4,#0xF4
      000068 7D 01            [12]  485 	mov	r5,#0x01
      00006A                        486 00105$:
      00006A EC               [12]  487 	mov	a,r4
      00006B 24 FF            [12]  488 	add	a,#0xFF
      00006D FA               [12]  489 	mov	r2,a
      00006E ED               [12]  490 	mov	a,r5
      00006F 34 FF            [12]  491 	addc	a,#0xFF
      000071 FB               [12]  492 	mov	r3,a
      000072 8A 04            [24]  493 	mov	ar4,r2
      000074 8B 05            [24]  494 	mov	ar5,r3
      000076 EA               [12]  495 	mov	a,r2
      000077 4B               [12]  496 	orl	a,r3
      000078 70 F0            [24]  497 	jnz	00105$
                                    498 ;	led.c:9: for (i=0; i<100; i++)
      00007A 0E               [12]  499 	inc	r6
      00007B BE 00 01         [24]  500 	cjne	r6,#0x00,00121$
      00007E 0F               [12]  501 	inc	r7
      00007F                        502 00121$:
      00007F C3               [12]  503 	clr	c
      000080 EE               [12]  504 	mov	a,r6
      000081 94 64            [12]  505 	subb	a,#0x64
      000083 EF               [12]  506 	mov	a,r7
      000084 64 80            [12]  507 	xrl	a,#0x80
      000086 94 80            [12]  508 	subb	a,#0x80
      000088 40 DC            [24]  509 	jc	00106$
      00008A 22               [24]  510 	ret
                                    511 ;------------------------------------------------------------
                                    512 ;Allocation info for local variables in function 'main'
                                    513 ;------------------------------------------------------------
                                    514 ;	led.c:14: void main(void)                     //main
                                    515 ;	-----------------------------------------
                                    516 ;	 function main
                                    517 ;	-----------------------------------------
      00008B                        518 _main:
                                    519 ;	led.c:18: while(1)                        //loop
      00008B                        520 00102$:
                                    521 ;	led.c:20: P3 =0x00;
      00008B 75 B0 00         [24]  522 	mov	_P3,#0x00
                                    523 ;	led.c:21: led = 1;
      00008E D2 B2            [12]  524 	setb	_P3_2
                                    525 ;	led.c:22: delay();  
      000090 12 00 62         [24]  526 	lcall	_delay
                                    527 ;	led.c:23: P3 = 0xff;
      000093 75 B0 FF         [24]  528 	mov	_P3,#0xFF
                                    529 ;	led.c:24: led = 0;
      000096 C2 B2            [12]  530 	clr	_P3_2
                                    531 ;	led.c:25: delay();                
      000098 12 00 62         [24]  532 	lcall	_delay
      00009B 80 EE            [24]  533 	sjmp	00102$
                                    534 	.area CSEG    (CODE)
                                    535 	.area CONST   (CODE)
                                    536 	.area XINIT   (CODE)
                                    537 	.area CABS    (ABS,CODE)
