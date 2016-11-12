                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
                                      4 ; This file was generated Mon Nov  7 18:55:29 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module led_standard
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _delay
                                     14 	.globl _LED
                                     15 	.globl _CF
                                     16 	.globl _CR
                                     17 	.globl _CCF2
                                     18 	.globl _CCF1
                                     19 	.globl _CCF0
                                     20 	.globl _PX0
                                     21 	.globl _PT0
                                     22 	.globl _PX1
                                     23 	.globl _PT1
                                     24 	.globl _PS
                                     25 	.globl _PADC
                                     26 	.globl _PLVD
                                     27 	.globl _PPCA
                                     28 	.globl _B7
                                     29 	.globl _B6
                                     30 	.globl _B5
                                     31 	.globl _B4
                                     32 	.globl _B3
                                     33 	.globl _B2
                                     34 	.globl _B1
                                     35 	.globl _B0
                                     36 	.globl _ACC7
                                     37 	.globl _ACC6
                                     38 	.globl _ACC5
                                     39 	.globl _ACC4
                                     40 	.globl _ACC3
                                     41 	.globl _ACC2
                                     42 	.globl _ACC1
                                     43 	.globl _ACC0
                                     44 	.globl _EX0
                                     45 	.globl _ET0
                                     46 	.globl _EX1
                                     47 	.globl _ET1
                                     48 	.globl _ES
                                     49 	.globl _EADC
                                     50 	.globl _ELVD
                                     51 	.globl _EA
                                     52 	.globl _RI
                                     53 	.globl _TI
                                     54 	.globl _RB8
                                     55 	.globl _TB8
                                     56 	.globl _REN
                                     57 	.globl _SM2
                                     58 	.globl _SM1
                                     59 	.globl _SM0
                                     60 	.globl _P57
                                     61 	.globl _P56
                                     62 	.globl _P55
                                     63 	.globl _P54
                                     64 	.globl _P53
                                     65 	.globl _P52
                                     66 	.globl _P51
                                     67 	.globl _P50
                                     68 	.globl _P47
                                     69 	.globl _P46
                                     70 	.globl _P45
                                     71 	.globl _P44
                                     72 	.globl _P43
                                     73 	.globl _P42
                                     74 	.globl _P41
                                     75 	.globl _P40
                                     76 	.globl _CLKOUT1
                                     77 	.globl _CLKOUT0
                                     78 	.globl _CCP2
                                     79 	.globl _RD
                                     80 	.globl _WR
                                     81 	.globl _T1
                                     82 	.globl _T0
                                     83 	.globl _INT1
                                     84 	.globl _INT0
                                     85 	.globl _TXD
                                     86 	.globl _RXD
                                     87 	.globl _P37
                                     88 	.globl _P36
                                     89 	.globl _P35
                                     90 	.globl _P34
                                     91 	.globl _P33
                                     92 	.globl _P32
                                     93 	.globl _P31
                                     94 	.globl _P30
                                     95 	.globl _P27
                                     96 	.globl _P26
                                     97 	.globl _P25
                                     98 	.globl _P24
                                     99 	.globl _P23
                                    100 	.globl _P22
                                    101 	.globl _P21
                                    102 	.globl _P20
                                    103 	.globl _SPI_SCLK
                                    104 	.globl _SPI_MISO
                                    105 	.globl _SPI_MOSI
                                    106 	.globl _SPI_SS
                                    107 	.globl _CCP0
                                    108 	.globl _CCP1
                                    109 	.globl _TXD2
                                    110 	.globl _RXD2
                                    111 	.globl _P17
                                    112 	.globl _P16
                                    113 	.globl _P15
                                    114 	.globl _P14
                                    115 	.globl _P13
                                    116 	.globl _P12
                                    117 	.globl _P11
                                    118 	.globl _P10
                                    119 	.globl _P07
                                    120 	.globl _P06
                                    121 	.globl _P05
                                    122 	.globl _P04
                                    123 	.globl _P03
                                    124 	.globl _P02
                                    125 	.globl _P01
                                    126 	.globl _P00
                                    127 	.globl _IT0
                                    128 	.globl _IE0
                                    129 	.globl _IT1
                                    130 	.globl _IE1
                                    131 	.globl _TR0
                                    132 	.globl _TF0
                                    133 	.globl _TR1
                                    134 	.globl _TF1
                                    135 	.globl _P
                                    136 	.globl _F1
                                    137 	.globl _OV
                                    138 	.globl _RS0
                                    139 	.globl _RS1
                                    140 	.globl _F0
                                    141 	.globl _AC
                                    142 	.globl _CY
                                    143 	.globl _CCAP2H
                                    144 	.globl _CCAP1H
                                    145 	.globl _CCAP0H
                                    146 	.globl _CH
                                    147 	.globl _P7
                                    148 	.globl _PCA_PWM2
                                    149 	.globl _PCA_PWM1
                                    150 	.globl _PCA_PWM0
                                    151 	.globl _B
                                    152 	.globl _CCAP2L
                                    153 	.globl _CCAP1L
                                    154 	.globl _CCAP0L
                                    155 	.globl _CL
                                    156 	.globl _P6
                                    157 	.globl _CMPCR2
                                    158 	.globl _CMPCR1
                                    159 	.globl _P7M0
                                    160 	.globl _P7M1
                                    161 	.globl _ACC
                                    162 	.globl _CCAPM2
                                    163 	.globl _CCAPM1
                                    164 	.globl _CCAPM0
                                    165 	.globl _CMOD
                                    166 	.globl _CCON
                                    167 	.globl _RL_T2L
                                    168 	.globl _RL_T2H
                                    169 	.globl _RL_T3L
                                    170 	.globl _RL_T3H
                                    171 	.globl _RL_T4L
                                    172 	.globl _RL_T4H
                                    173 	.globl _TL2
                                    174 	.globl _TH2
                                    175 	.globl _TL3
                                    176 	.globl _TH3
                                    177 	.globl _TL4
                                    178 	.globl _TH4
                                    179 	.globl _T2L
                                    180 	.globl _T2H
                                    181 	.globl _T3L
                                    182 	.globl _T3H
                                    183 	.globl _T4L
                                    184 	.globl _T4H
                                    185 	.globl _T4T3M
                                    186 	.globl _PSW
                                    187 	.globl _SPDAT
                                    188 	.globl _SPCTL
                                    189 	.globl _SPSTAT
                                    190 	.globl _P6M0
                                    191 	.globl _P6M1
                                    192 	.globl _P5M0
                                    193 	.globl _P5M1
                                    194 	.globl _P5
                                    195 	.globl _ISP_CONTR
                                    196 	.globl _ISP_TRIG
                                    197 	.globl _ISP_CMD
                                    198 	.globl _ISP_ADDRL
                                    199 	.globl _ISP_ADDRH
                                    200 	.globl _ISP_DATA
                                    201 	.globl _IAP_CONTR
                                    202 	.globl _IAP_TRIG
                                    203 	.globl _IAP_CMD
                                    204 	.globl _IAP_ADDRL
                                    205 	.globl _IAP_ADDRH
                                    206 	.globl _IAP_DATA
                                    207 	.globl _WDT_CONTR
                                    208 	.globl _P4
                                    209 	.globl _ADC_RESL
                                    210 	.globl _ADC_RES
                                    211 	.globl _ADC_CONTR
                                    212 	.globl _P_SW2
                                    213 	.globl _SADEN
                                    214 	.globl _IP
                                    215 	.globl _IPH
                                    216 	.globl _IPH2
                                    217 	.globl _IP2
                                    218 	.globl _P4M0
                                    219 	.globl _P4M1
                                    220 	.globl _P3M0
                                    221 	.globl _P3M1
                                    222 	.globl _P3
                                    223 	.globl _IE2
                                    224 	.globl _S3BUF
                                    225 	.globl _S3CON
                                    226 	.globl _WKTCH
                                    227 	.globl _WKTCL
                                    228 	.globl _SADDR
                                    229 	.globl _IE
                                    230 	.globl _P_SW1
                                    231 	.globl _AUXR1
                                    232 	.globl _BUS_SPEED
                                    233 	.globl _P2
                                    234 	.globl _P1ASF
                                    235 	.globl _S2BUF
                                    236 	.globl _S2CON
                                    237 	.globl _SBUF
                                    238 	.globl _SCON
                                    239 	.globl _PCON2
                                    240 	.globl _CLK_DIV
                                    241 	.globl _P2M0
                                    242 	.globl _P2M1
                                    243 	.globl _P0M0
                                    244 	.globl _P0M1
                                    245 	.globl _P1M0
                                    246 	.globl _P1M1
                                    247 	.globl _P1
                                    248 	.globl _RL_TH1
                                    249 	.globl _RL_TH0
                                    250 	.globl _RL_TL1
                                    251 	.globl _RL_TL0
                                    252 	.globl _AUXR2
                                    253 	.globl _INT_CLKO
                                    254 	.globl _WAKE_CLKO
                                    255 	.globl _AUXR
                                    256 	.globl _TH1
                                    257 	.globl _TH0
                                    258 	.globl _TL1
                                    259 	.globl _TL0
                                    260 	.globl _TMOD
                                    261 	.globl _TCON
                                    262 	.globl _PCON
                                    263 	.globl _S4BUF
                                    264 	.globl _S4CON
                                    265 	.globl _DPH
                                    266 	.globl _DPL
                                    267 	.globl _SP
                                    268 	.globl _P0
                                    269 ;--------------------------------------------------------
                                    270 ; special function registers
                                    271 ;--------------------------------------------------------
                                    272 	.area RSEG    (ABS,DATA)
      000000                        273 	.org 0x0000
                           000080   274 _P0	=	0x0080
                           000081   275 _SP	=	0x0081
                           000082   276 _DPL	=	0x0082
                           000083   277 _DPH	=	0x0083
                           000084   278 _S4CON	=	0x0084
                           000085   279 _S4BUF	=	0x0085
                           000087   280 _PCON	=	0x0087
                           000088   281 _TCON	=	0x0088
                           000089   282 _TMOD	=	0x0089
                           00008A   283 _TL0	=	0x008a
                           00008B   284 _TL1	=	0x008b
                           00008C   285 _TH0	=	0x008c
                           00008D   286 _TH1	=	0x008d
                           00008E   287 _AUXR	=	0x008e
                           00008F   288 _WAKE_CLKO	=	0x008f
                           00008F   289 _INT_CLKO	=	0x008f
                           00008F   290 _AUXR2	=	0x008f
                           00008A   291 _RL_TL0	=	0x008a
                           00008B   292 _RL_TL1	=	0x008b
                           00008C   293 _RL_TH0	=	0x008c
                           00008D   294 _RL_TH1	=	0x008d
                           000090   295 _P1	=	0x0090
                           000091   296 _P1M1	=	0x0091
                           000092   297 _P1M0	=	0x0092
                           000093   298 _P0M1	=	0x0093
                           000094   299 _P0M0	=	0x0094
                           000095   300 _P2M1	=	0x0095
                           000096   301 _P2M0	=	0x0096
                           000097   302 _CLK_DIV	=	0x0097
                           000097   303 _PCON2	=	0x0097
                           000098   304 _SCON	=	0x0098
                           000099   305 _SBUF	=	0x0099
                           00009A   306 _S2CON	=	0x009a
                           00009B   307 _S2BUF	=	0x009b
                           00009D   308 _P1ASF	=	0x009d
                           0000A0   309 _P2	=	0x00a0
                           0000A1   310 _BUS_SPEED	=	0x00a1
                           0000A2   311 _AUXR1	=	0x00a2
                           0000A2   312 _P_SW1	=	0x00a2
                           0000A8   313 _IE	=	0x00a8
                           0000A9   314 _SADDR	=	0x00a9
                           0000AA   315 _WKTCL	=	0x00aa
                           0000AB   316 _WKTCH	=	0x00ab
                           0000AC   317 _S3CON	=	0x00ac
                           0000AD   318 _S3BUF	=	0x00ad
                           0000AF   319 _IE2	=	0x00af
                           0000B0   320 _P3	=	0x00b0
                           0000B1   321 _P3M1	=	0x00b1
                           0000B2   322 _P3M0	=	0x00b2
                           0000B3   323 _P4M1	=	0x00b3
                           0000B4   324 _P4M0	=	0x00b4
                           0000B5   325 _IP2	=	0x00b5
                           0000B6   326 _IPH2	=	0x00b6
                           0000B7   327 _IPH	=	0x00b7
                           0000B8   328 _IP	=	0x00b8
                           0000B9   329 _SADEN	=	0x00b9
                           0000BA   330 _P_SW2	=	0x00ba
                           0000BC   331 _ADC_CONTR	=	0x00bc
                           0000BD   332 _ADC_RES	=	0x00bd
                           0000BE   333 _ADC_RESL	=	0x00be
                           0000C0   334 _P4	=	0x00c0
                           0000C1   335 _WDT_CONTR	=	0x00c1
                           0000C2   336 _IAP_DATA	=	0x00c2
                           0000C3   337 _IAP_ADDRH	=	0x00c3
                           0000C4   338 _IAP_ADDRL	=	0x00c4
                           0000C5   339 _IAP_CMD	=	0x00c5
                           0000C6   340 _IAP_TRIG	=	0x00c6
                           0000C7   341 _IAP_CONTR	=	0x00c7
                           0000C2   342 _ISP_DATA	=	0x00c2
                           0000C3   343 _ISP_ADDRH	=	0x00c3
                           0000C4   344 _ISP_ADDRL	=	0x00c4
                           0000C5   345 _ISP_CMD	=	0x00c5
                           0000C6   346 _ISP_TRIG	=	0x00c6
                           0000C7   347 _ISP_CONTR	=	0x00c7
                           0000C8   348 _P5	=	0x00c8
                           0000C9   349 _P5M1	=	0x00c9
                           0000CA   350 _P5M0	=	0x00ca
                           0000CB   351 _P6M1	=	0x00cb
                           0000CC   352 _P6M0	=	0x00cc
                           0000CD   353 _SPSTAT	=	0x00cd
                           0000CE   354 _SPCTL	=	0x00ce
                           0000CF   355 _SPDAT	=	0x00cf
                           0000D0   356 _PSW	=	0x00d0
                           0000D1   357 _T4T3M	=	0x00d1
                           0000D2   358 _T4H	=	0x00d2
                           0000D3   359 _T4L	=	0x00d3
                           0000D4   360 _T3H	=	0x00d4
                           0000D5   361 _T3L	=	0x00d5
                           0000D6   362 _T2H	=	0x00d6
                           0000D7   363 _T2L	=	0x00d7
                           0000D2   364 _TH4	=	0x00d2
                           0000D3   365 _TL4	=	0x00d3
                           0000D4   366 _TH3	=	0x00d4
                           0000D5   367 _TL3	=	0x00d5
                           0000D6   368 _TH2	=	0x00d6
                           0000D7   369 _TL2	=	0x00d7
                           0000D2   370 _RL_T4H	=	0x00d2
                           0000D3   371 _RL_T4L	=	0x00d3
                           0000D4   372 _RL_T3H	=	0x00d4
                           0000D5   373 _RL_T3L	=	0x00d5
                           0000D6   374 _RL_T2H	=	0x00d6
                           0000D7   375 _RL_T2L	=	0x00d7
                           0000D8   376 _CCON	=	0x00d8
                           0000D9   377 _CMOD	=	0x00d9
                           0000DA   378 _CCAPM0	=	0x00da
                           0000DB   379 _CCAPM1	=	0x00db
                           0000DC   380 _CCAPM2	=	0x00dc
                           0000E0   381 _ACC	=	0x00e0
                           0000E1   382 _P7M1	=	0x00e1
                           0000E2   383 _P7M0	=	0x00e2
                           0000E6   384 _CMPCR1	=	0x00e6
                           0000E7   385 _CMPCR2	=	0x00e7
                           0000E8   386 _P6	=	0x00e8
                           0000E9   387 _CL	=	0x00e9
                           0000EA   388 _CCAP0L	=	0x00ea
                           0000EB   389 _CCAP1L	=	0x00eb
                           0000EC   390 _CCAP2L	=	0x00ec
                           0000F0   391 _B	=	0x00f0
                           0000F2   392 _PCA_PWM0	=	0x00f2
                           0000F3   393 _PCA_PWM1	=	0x00f3
                           0000F4   394 _PCA_PWM2	=	0x00f4
                           0000F8   395 _P7	=	0x00f8
                           0000F9   396 _CH	=	0x00f9
                           0000FA   397 _CCAP0H	=	0x00fa
                           0000FB   398 _CCAP1H	=	0x00fb
                           0000FC   399 _CCAP2H	=	0x00fc
                                    400 ;--------------------------------------------------------
                                    401 ; special function bits
                                    402 ;--------------------------------------------------------
                                    403 	.area RSEG    (ABS,DATA)
      000000                        404 	.org 0x0000
                           0000D7   405 _CY	=	0x00d7
                           0000D6   406 _AC	=	0x00d6
                           0000D5   407 _F0	=	0x00d5
                           0000D4   408 _RS1	=	0x00d4
                           0000D3   409 _RS0	=	0x00d3
                           0000D2   410 _OV	=	0x00d2
                           0000D1   411 _F1	=	0x00d1
                           0000D0   412 _P	=	0x00d0
                           00008F   413 _TF1	=	0x008f
                           00008E   414 _TR1	=	0x008e
                           00008D   415 _TF0	=	0x008d
                           00008C   416 _TR0	=	0x008c
                           00008B   417 _IE1	=	0x008b
                           00008A   418 _IT1	=	0x008a
                           000089   419 _IE0	=	0x0089
                           000088   420 _IT0	=	0x0088
                           000080   421 _P00	=	0x0080
                           000081   422 _P01	=	0x0081
                           000082   423 _P02	=	0x0082
                           000083   424 _P03	=	0x0083
                           000084   425 _P04	=	0x0084
                           000085   426 _P05	=	0x0085
                           000086   427 _P06	=	0x0086
                           000087   428 _P07	=	0x0087
                           000090   429 _P10	=	0x0090
                           000091   430 _P11	=	0x0091
                           000092   431 _P12	=	0x0092
                           000093   432 _P13	=	0x0093
                           000094   433 _P14	=	0x0094
                           000095   434 _P15	=	0x0095
                           000096   435 _P16	=	0x0096
                           000097   436 _P17	=	0x0097
                           000090   437 _RXD2	=	0x0090
                           000091   438 _TXD2	=	0x0091
                           000090   439 _CCP1	=	0x0090
                           000091   440 _CCP0	=	0x0091
                           000092   441 _SPI_SS	=	0x0092
                           000093   442 _SPI_MOSI	=	0x0093
                           000094   443 _SPI_MISO	=	0x0094
                           000095   444 _SPI_SCLK	=	0x0095
                           0000A0   445 _P20	=	0x00a0
                           0000A1   446 _P21	=	0x00a1
                           0000A2   447 _P22	=	0x00a2
                           0000A3   448 _P23	=	0x00a3
                           0000A4   449 _P24	=	0x00a4
                           0000A5   450 _P25	=	0x00a5
                           0000A6   451 _P26	=	0x00a6
                           0000A7   452 _P27	=	0x00a7
                           0000B0   453 _P30	=	0x00b0
                           0000B1   454 _P31	=	0x00b1
                           0000B2   455 _P32	=	0x00b2
                           0000B3   456 _P33	=	0x00b3
                           0000B4   457 _P34	=	0x00b4
                           0000B5   458 _P35	=	0x00b5
                           0000B6   459 _P36	=	0x00b6
                           0000B7   460 _P37	=	0x00b7
                           0000B0   461 _RXD	=	0x00b0
                           0000B1   462 _TXD	=	0x00b1
                           0000B2   463 _INT0	=	0x00b2
                           0000B3   464 _INT1	=	0x00b3
                           0000B4   465 _T0	=	0x00b4
                           0000B5   466 _T1	=	0x00b5
                           0000B6   467 _WR	=	0x00b6
                           0000B7   468 _RD	=	0x00b7
                           0000B7   469 _CCP2	=	0x00b7
                           0000B5   470 _CLKOUT0	=	0x00b5
                           0000B4   471 _CLKOUT1	=	0x00b4
                           0000C0   472 _P40	=	0x00c0
                           0000C1   473 _P41	=	0x00c1
                           0000C2   474 _P42	=	0x00c2
                           0000C3   475 _P43	=	0x00c3
                           0000C4   476 _P44	=	0x00c4
                           0000C5   477 _P45	=	0x00c5
                           0000C6   478 _P46	=	0x00c6
                           0000C7   479 _P47	=	0x00c7
                           0000C8   480 _P50	=	0x00c8
                           0000C9   481 _P51	=	0x00c9
                           0000CA   482 _P52	=	0x00ca
                           0000CB   483 _P53	=	0x00cb
                           0000CC   484 _P54	=	0x00cc
                           0000CD   485 _P55	=	0x00cd
                           0000CE   486 _P56	=	0x00ce
                           0000CF   487 _P57	=	0x00cf
                           00009F   488 _SM0	=	0x009f
                           00009E   489 _SM1	=	0x009e
                           00009D   490 _SM2	=	0x009d
                           00009C   491 _REN	=	0x009c
                           00009B   492 _TB8	=	0x009b
                           00009A   493 _RB8	=	0x009a
                           000099   494 _TI	=	0x0099
                           000098   495 _RI	=	0x0098
                           0000AF   496 _EA	=	0x00af
                           0000AE   497 _ELVD	=	0x00ae
                           0000AD   498 _EADC	=	0x00ad
                           0000AC   499 _ES	=	0x00ac
                           0000AB   500 _ET1	=	0x00ab
                           0000AA   501 _EX1	=	0x00aa
                           0000A9   502 _ET0	=	0x00a9
                           0000A8   503 _EX0	=	0x00a8
                           0000E0   504 _ACC0	=	0x00e0
                           0000E1   505 _ACC1	=	0x00e1
                           0000E2   506 _ACC2	=	0x00e2
                           0000E3   507 _ACC3	=	0x00e3
                           0000E4   508 _ACC4	=	0x00e4
                           0000E5   509 _ACC5	=	0x00e5
                           0000E6   510 _ACC6	=	0x00e6
                           0000E7   511 _ACC7	=	0x00e7
                           0000F0   512 _B0	=	0x00f0
                           0000F1   513 _B1	=	0x00f1
                           0000F2   514 _B2	=	0x00f2
                           0000F3   515 _B3	=	0x00f3
                           0000F4   516 _B4	=	0x00f4
                           0000F5   517 _B5	=	0x00f5
                           0000F6   518 _B6	=	0x00f6
                           0000F7   519 _B7	=	0x00f7
                           0000BF   520 _PPCA	=	0x00bf
                           0000BE   521 _PLVD	=	0x00be
                           0000BD   522 _PADC	=	0x00bd
                           0000BC   523 _PS	=	0x00bc
                           0000BB   524 _PT1	=	0x00bb
                           0000BA   525 _PX1	=	0x00ba
                           0000B9   526 _PT0	=	0x00b9
                           0000B8   527 _PX0	=	0x00b8
                           0000D8   528 _CCF0	=	0x00d8
                           0000D9   529 _CCF1	=	0x00d9
                           0000DA   530 _CCF2	=	0x00da
                           0000DE   531 _CR	=	0x00de
                           0000DF   532 _CF	=	0x00df
                           0000B2   533 _LED	=	0x00b2
                                    534 ;--------------------------------------------------------
                                    535 ; overlayable register banks
                                    536 ;--------------------------------------------------------
                                    537 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        538 	.ds 8
                                    539 ;--------------------------------------------------------
                                    540 ; internal ram data
                                    541 ;--------------------------------------------------------
                                    542 	.area DSEG    (DATA)
                                    543 ;--------------------------------------------------------
                                    544 ; overlayable items in internal ram 
                                    545 ;--------------------------------------------------------
                                    546 	.area	OSEG    (OVR,DATA)
                                    547 ;--------------------------------------------------------
                                    548 ; Stack segment in internal ram 
                                    549 ;--------------------------------------------------------
                                    550 	.area	SSEG
      000008                        551 __start__stack:
      000008                        552 	.ds	1
                                    553 
                                    554 ;--------------------------------------------------------
                                    555 ; indirectly addressable internal ram data
                                    556 ;--------------------------------------------------------
                                    557 	.area ISEG    (DATA)
                                    558 ;--------------------------------------------------------
                                    559 ; absolute internal ram data
                                    560 ;--------------------------------------------------------
                                    561 	.area IABS    (ABS,DATA)
                                    562 	.area IABS    (ABS,DATA)
                                    563 ;--------------------------------------------------------
                                    564 ; bit data
                                    565 ;--------------------------------------------------------
                                    566 	.area BSEG    (BIT)
                                    567 ;--------------------------------------------------------
                                    568 ; paged external ram data
                                    569 ;--------------------------------------------------------
                                    570 	.area PSEG    (PAG,XDATA)
                                    571 ;--------------------------------------------------------
                                    572 ; external ram data
                                    573 ;--------------------------------------------------------
                                    574 	.area XSEG    (XDATA)
                                    575 ;--------------------------------------------------------
                                    576 ; absolute external ram data
                                    577 ;--------------------------------------------------------
                                    578 	.area XABS    (ABS,XDATA)
                                    579 ;--------------------------------------------------------
                                    580 ; external initialized ram data
                                    581 ;--------------------------------------------------------
                                    582 	.area XISEG   (XDATA)
                                    583 	.area HOME    (CODE)
                                    584 	.area GSINIT0 (CODE)
                                    585 	.area GSINIT1 (CODE)
                                    586 	.area GSINIT2 (CODE)
                                    587 	.area GSINIT3 (CODE)
                                    588 	.area GSINIT4 (CODE)
                                    589 	.area GSINIT5 (CODE)
                                    590 	.area GSINIT  (CODE)
                                    591 	.area GSFINAL (CODE)
                                    592 	.area CSEG    (CODE)
                                    593 ;--------------------------------------------------------
                                    594 ; interrupt vector 
                                    595 ;--------------------------------------------------------
                                    596 	.area HOME    (CODE)
      000000                        597 __interrupt_vect:
      000000 02 00 06         [24]  598 	ljmp	__sdcc_gsinit_startup
                                    599 ;--------------------------------------------------------
                                    600 ; global & static initialisations
                                    601 ;--------------------------------------------------------
                                    602 	.area HOME    (CODE)
                                    603 	.area GSINIT  (CODE)
                                    604 	.area GSFINAL (CODE)
                                    605 	.area GSINIT  (CODE)
                                    606 	.globl __sdcc_gsinit_startup
                                    607 	.globl __sdcc_program_startup
                                    608 	.globl __start__stack
                                    609 	.globl __mcs51_genXINIT
                                    610 	.globl __mcs51_genXRAMCLEAR
                                    611 	.globl __mcs51_genRAMCLEAR
                                    612 	.area GSFINAL (CODE)
      00005F 02 00 03         [24]  613 	ljmp	__sdcc_program_startup
                                    614 ;--------------------------------------------------------
                                    615 ; Home
                                    616 ;--------------------------------------------------------
                                    617 	.area HOME    (CODE)
                                    618 	.area HOME    (CODE)
      000003                        619 __sdcc_program_startup:
      000003 02 00 8B         [24]  620 	ljmp	_main
                                    621 ;	return from main will return to caller
                                    622 ;--------------------------------------------------------
                                    623 ; code
                                    624 ;--------------------------------------------------------
                                    625 	.area CSEG    (CODE)
                                    626 ;------------------------------------------------------------
                                    627 ;Allocation info for local variables in function 'delay'
                                    628 ;------------------------------------------------------------
                                    629 ;i                         Allocated to registers r6 r7 
                                    630 ;j                         Allocated to registers r4 r5 
                                    631 ;------------------------------------------------------------
                                    632 ;	led_standard.c:22: void delay()
                                    633 ;	-----------------------------------------
                                    634 ;	 function delay
                                    635 ;	-----------------------------------------
      000062                        636 _delay:
                           000007   637 	ar7 = 0x07
                           000006   638 	ar6 = 0x06
                           000005   639 	ar5 = 0x05
                           000004   640 	ar4 = 0x04
                           000003   641 	ar3 = 0x03
                           000002   642 	ar2 = 0x02
                           000001   643 	ar1 = 0x01
                           000000   644 	ar0 = 0x00
                                    645 ;	led_standard.c:26: for (i=0; i<1000; i++)
      000062 7E 00            [12]  646 	mov	r6,#0x00
      000064 7F 00            [12]  647 	mov	r7,#0x00
      000066                        648 00106$:
                                    649 ;	led_standard.c:27: for (j=0; j<500; j++);
      000066 7C F4            [12]  650 	mov	r4,#0xF4
      000068 7D 01            [12]  651 	mov	r5,#0x01
      00006A                        652 00105$:
      00006A EC               [12]  653 	mov	a,r4
      00006B 24 FF            [12]  654 	add	a,#0xFF
      00006D FA               [12]  655 	mov	r2,a
      00006E ED               [12]  656 	mov	a,r5
      00006F 34 FF            [12]  657 	addc	a,#0xFF
      000071 FB               [12]  658 	mov	r3,a
      000072 8A 04            [24]  659 	mov	ar4,r2
      000074 8B 05            [24]  660 	mov	ar5,r3
      000076 EA               [12]  661 	mov	a,r2
      000077 4B               [12]  662 	orl	a,r3
      000078 70 F0            [24]  663 	jnz	00105$
                                    664 ;	led_standard.c:26: for (i=0; i<1000; i++)
      00007A 0E               [12]  665 	inc	r6
      00007B BE 00 01         [24]  666 	cjne	r6,#0x00,00121$
      00007E 0F               [12]  667 	inc	r7
      00007F                        668 00121$:
      00007F C3               [12]  669 	clr	c
      000080 EE               [12]  670 	mov	a,r6
      000081 94 E8            [12]  671 	subb	a,#0xE8
      000083 EF               [12]  672 	mov	a,r7
      000084 64 80            [12]  673 	xrl	a,#0x80
      000086 94 83            [12]  674 	subb	a,#0x83
      000088 40 DC            [24]  675 	jc	00106$
      00008A 22               [24]  676 	ret
                                    677 ;------------------------------------------------------------
                                    678 ;Allocation info for local variables in function 'main'
                                    679 ;------------------------------------------------------------
                                    680 ;	led_standard.c:31: void main()
                                    681 ;	-----------------------------------------
                                    682 ;	 function main
                                    683 ;	-----------------------------------------
      00008B                        684 _main:
                                    685 ;	led_standard.c:34: while (1)
      00008B                        686 00102$:
                                    687 ;	led_standard.c:36: LED = 1;
      00008B D2 B2            [12]  688 	setb	_LED
                                    689 ;	led_standard.c:37: P3 = 0x03;
      00008D 75 B0 03         [24]  690 	mov	_P3,#0x03
                                    691 ;	led_standard.c:38: delay();
      000090 12 00 62         [24]  692 	lcall	_delay
                                    693 ;	led_standard.c:39: LED = 0;
      000093 C2 B2            [12]  694 	clr	_LED
                                    695 ;	led_standard.c:40: P3 = 0xff;
      000095 75 B0 FF         [24]  696 	mov	_P3,#0xFF
                                    697 ;	led_standard.c:41: delay();
      000098 12 00 62         [24]  698 	lcall	_delay
      00009B 80 EE            [24]  699 	sjmp	00102$
                                    700 	.area CSEG    (CODE)
                                    701 	.area CONST   (CODE)
                                    702 	.area XINIT   (CODE)
                                    703 	.area CABS    (ABS,CODE)
