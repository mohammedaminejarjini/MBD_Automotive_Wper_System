1	/*
2	 * File: WiperMotor.c
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
18	#include "WiperMotor.h"
19	
20	/* External inputs (root inport signals with auto storage) */
21	ExtU rtU;
22	
23	/* External outputs (root outports fed by signals with auto storage) */
24	ExtY rtY;
25	
26	/* Real-time model */
27	RT_MODEL rtM_;
28	RT_MODEL *const rtM = &rtM_;
29	
30	/* Model step function */
31	void Scheduler_10ms(void)
32	{
33	  real_T rtb_Select_WiperSpdReq;
34	
35	  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Scheduler_10ms_at_outport_1' incorporates:
36	   *  SubSystem: '<S1>/Function-Call Subsystem'
37	   */
38	  /* MultiPortSwitch: '<S2>/Select_WiperMode' incorporates:
39	   *  Inport: '<Root>/WiprMod'
40	   */
41	  switch (rtU.WiprMod) {
42	   case 0:
43	    /* Outport: '<Root>/WiprMotPwmDutyCyc' incorporates:
44	     *  Constant: '<S2>/Constant'
45	     */
46	    rtY.WiprMotPwmDutyCyc = 0.0F;
47	    break;
48	
49	   case 1:
50	    /* Switch: '<S2>/Switch1' incorporates:
51	     *  Constant: '<S2>/Constant'
52	     *  Inport: '<Root>/RainSnsrErr'
53	     */
54	    if (rtU.RainSnsrErr) {
55	      rtb_Select_WiperSpdReq = 0.0;
56	    } else {
57	      /* MultiPortSwitch: '<S2>/Select_WiperSpdReq' incorporates:
58	       *  Constant: '<S2>/Constant10'
59	       *  Constant: '<S2>/Constant11'
60	       *  Constant: '<S2>/Constant4'
61	       *  Constant: '<S2>/Constant5'
62	       *  Constant: '<S2>/Constant6'
63	       *  Constant: '<S2>/Constant7'
64	       *  Constant: '<S2>/Constant8'
65	       *  Constant: '<S2>/Constant9'
66	       *  Inport: '<Root>/wiprSpdReq'
67	       */
68	      switch (rtU.wiprSpdReq) {
69	       case 0:
70	        rtb_Select_WiperSpdReq = 0.0;
71	        break;
72	
73	       case 1:
74	        rtb_Select_WiperSpdReq = 0.4;
75	        break;
76	
77	       case 2:
78	        rtb_Select_WiperSpdReq = 0.45;
79	        break;
80	
81	       case 3:
82	        rtb_Select_WiperSpdReq = 0.5;
83	        break;
84	
85	       case 4:
86	        rtb_Select_WiperSpdReq = 0.6;
87	        break;
88	
89	       case 5:
90	        rtb_Select_WiperSpdReq = 0.65;
91	        break;
92	
93	       case 6:
94	        rtb_Select_WiperSpdReq = 0.65;
95	        break;
96	
97	       default:
98	        rtb_Select_WiperSpdReq = 0.7;
99	        break;
100	      }
101	
102	      /* End of MultiPortSwitch: '<S2>/Select_WiperSpdReq' */
103	    }
104	
105	    /* End of Switch: '<S2>/Switch1' */
106	
107	    /* Outport: '<Root>/WiprMotPwmDutyCyc' */
108	    rtY.WiprMotPwmDutyCyc = (real32_T)rtb_Select_WiperSpdReq;
109	    break;
110	
111	   case 2:
112	    /* Outport: '<Root>/WiprMotPwmDutyCyc' incorporates:
113	     *  Constant: '<S2>/Constant1'
114	     */
115	    rtY.WiprMotPwmDutyCyc = 0.4F;
116	    break;
117	
118	   default:
119	    /* Outport: '<Root>/WiprMotPwmDutyCyc' incorporates:
120	     *  Constant: '<S2>/Constant2'
121	     */
122	    rtY.WiprMotPwmDutyCyc = 0.7F;
123	    break;
124	  }
125	
126	  /* End of MultiPortSwitch: '<S2>/Select_WiperMode' */
127	
128	  /* Outport: '<Root>/WiprActv' incorporates:
129	   *  Logic: '<S2>/Logical Operator'
130	   *  Outport: '<Root>/WiprMotPwmDutyCyc'
131	   */
132	  rtY.WiprActv = (rtY.WiprMotPwmDutyCyc != 0.0F);
133	
134	  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Scheduler_10ms_at_outport_1' */
135	}
136	
137	/* Model initialize function */
138	void WiperMotor_initialize(void)
139	{
140	  /* (no initialization code required) */
141	}
142	
143	/*
144	 * File trailer for generated code.
145	 *
146	 * [EOF]
147	 */
