1	/*
2	 * File: rtwtypes.h
3	 *
4	 * Code generated for Simulink model 'WiperMotor'.
5	 *
6	 * Model version                  : 1.16
7	 * Simulink Coder version         : 8.12 (R2017a) 16-Feb-2017
8	 * C/C++ source code generated on : Sun Dec 03 14:08:55 2023
9	 *
10	 * Target selection: ert.tlc
11	 * Embedded hardware selection: Intel->x86-64 (Windows64)
12	 * Code generation objectives:
13	 *    1. Execution efficiency
14	 *    2. RAM efficiency
15	 * Validation result: Not run
16	 */
17	
18	#ifndef RTWTYPES_H
19	#define RTWTYPES_H
20	
21	/* Logical type definitions */
22	#if (!defined(__cplusplus))
23	#  ifndef false
24	#   define false                       (0U)
25	#  endif
26	
27	#  ifndef true
28	#   define true                        (1U)
29	#  endif
30	#endif
31	
32	/*=======================================================================*
33	 * Target hardware information
34	 *   Device type: Intel->x86-64 (Windows64)
35	 *   Number of bits:     char:   8    short:   16    int:  32
36	 *                       long:  32
37	 *                       native word size:  64
38	 *   Byte ordering: LittleEndian
39	 *   Signed integer division rounds to: Zero
40	 *   Shift right on a signed integer as arithmetic shift: on
41	 *=======================================================================*/
42	
43	/*=======================================================================*
44	 * Fixed width word size data types:                                     *
45	 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
46	 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
47	 *   real32_T, real64_T           - 32 and 64 bit floating point numbers *
48	 *=======================================================================*/
49	typedef signed char int8_T;
50	typedef unsigned char uint8_T;
51	typedef short int16_T;
52	typedef unsigned short uint16_T;
53	typedef int int32_T;
54	typedef unsigned int uint32_T;
55	typedef float real32_T;
56	typedef double real64_T;
57	
58	/*===========================================================================*
59	 * Generic type definitions: boolean_T, char_T, byte_T, int_T, uint_T,       *
60	 *                           real_T, time_T, ulong_T.                        *
61	 *===========================================================================*/
62	typedef double real_T;
63	typedef double time_T;
64	typedef unsigned char boolean_T;
65	typedef int int_T;
66	typedef unsigned int uint_T;
67	typedef unsigned long ulong_T;
68	typedef char char_T;
69	typedef unsigned char uchar_T;
70	typedef char_T byte_T;
71	
72	/*=======================================================================*
73	 * Min and Max:                                                          *
74	 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
75	 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
76	 *=======================================================================*/
77	#define MAX_int8_T                     ((int8_T)(127))
78	#define MIN_int8_T                     ((int8_T)(-128))
79	#define MAX_uint8_T                    ((uint8_T)(255U))
80	#define MAX_int16_T                    ((int16_T)(32767))
81	#define MIN_int16_T                    ((int16_T)(-32768))
82	#define MAX_uint16_T                   ((uint16_T)(65535U))
83	#define MAX_int32_T                    ((int32_T)(2147483647))
84	#define MIN_int32_T                    ((int32_T)(-2147483647-1))
85	#define MAX_uint32_T                   ((uint32_T)(0xFFFFFFFFU))
86	
87	/* Block D-Work pointer type */
88	typedef void * pointer_T;
89	
90	#endif                                 /* RTWTYPES_H */
91	
92	/*
93	 * File trailer for generated code.
94	 *
95	 * [EOF]
96	 */
