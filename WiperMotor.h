1	/*
2	 * File: WiperMotor.h
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
18	#ifndef RTW_HEADER_WiperMotor_h_
19	#define RTW_HEADER_WiperMotor_h_
20	#include <stddef.h>
21	#ifndef WiperMotor_COMMON_INCLUDES_
22	# define WiperMotor_COMMON_INCLUDES_
23	#include "rtwtypes.h"
24	#endif                                 /* WiperMotor_COMMON_INCLUDES_ */
25	
26	/* Macros for accessing real-time model data structure */
27	#ifndef rtmGetErrorStatus
28	# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
29	#endif
30	
31	#ifndef rtmSetErrorStatus
32	# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
33	#endif
34	
35	/* Forward declaration for rtModel */
36	typedef struct tag_RTM RT_MODEL;
37	
38	/* External inputs (root inport signals with auto storage) */
39	typedef struct {
40	  uint8_T WiprMod;                     /* '<Root>/WiprMod' */
41	  boolean_T RainSnsrErr;               /* '<Root>/RainSnsrErr' */
42	  uint8_T wiprSpdReq;                  /* '<Root>/wiprSpdReq' */
43	} ExtU;
44	
45	/* External outputs (root outports fed by signals with auto storage) */
46	typedef struct {
47	  real32_T WiprMotPwmDutyCyc;          /* '<Root>/WiprMotPwmDutyCyc' */
48	  boolean_T WiprActv;                  /* '<Root>/WiprActv' */
49	} ExtY;
50	
51	/* Real-time Model Data Structure */
52	struct tag_RTM {
53	  const char_T * volatile errorStatus;
54	};
55	
56	/* External inputs (root inport signals with auto storage) */
57	extern ExtU rtU;
58	
59	/* External outputs (root outports fed by signals with auto storage) */
60	extern ExtY rtY;
61	
62	/* Model entry point functions */
63	extern void WiperMotor_initialize(void);
64	
65	/* Exported entry point functions */
66	extern void Scheduler_10ms(void);
67	
68	/* Real-time Model object */
69	extern RT_MODEL *const rtM;
70	
71	/*-
72	 * The generated code includes comments that allow you to trace directly
73	 * back to the appropriate location in the model.  The basic format
74	 * is <system>/block_name, where system is the system number (uniquely
75	 * assigned by Simulink) and block_name is the name of the block.
76	 *
77	 * Use the MATLAB hilite_system command to trace the generated code back
78	 * to the model.  For example,
79	 *
80	 * hilite_system('<S3>')    - opens system 3
81	 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
82	 *
83	 * Here is the system hierarchy for this model
84	 *
85	 * '<Root>' : 'WiperMotor'
86	 * '<S1>'   : 'WiperMotor/RainSnsrWiprMot'
87	 * '<S2>'   : 'WiperMotor/RainSnsrWiprMot/Function-Call Subsystem'
88	 */
89	#endif                                 /* RTW_HEADER_WiperMotor_h_ */
90	
91	/*
92	 * File trailer for generated code.
93	 *
94	 * [EOF]
95	 */
