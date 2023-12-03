1	/*
2	 * File: ert_main.c
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
18	#include <stdio.h>                     /* This ert_main.c example uses printf/fflush */
19	#include "WiperMotor.h"                /* Model's header file */
20	#include "rtwtypes.h"
21	#include "stddef.h"
22	#define _user_read(var)                (void)var
23	#define _user_write(var)               (void)var
24	
25	/*
26	 * Example use case for call to exported function:
27	 * Scheduler_10ms
28	 */
29	void sample_usage_Scheduler_10ms(void)
30	{
31	  /*
32	   * Set task inputs here:
33	   */
34	  _user_write(rtU.WiprMod);
35	  _user_write(rtU.RainSnsrErr);
36	  _user_write(rtU.wiprSpdReq);
37	
38	  /*
39	   * Call to exported function
40	   */
41	  Scheduler_10ms();
42	
43	  /*
44	   * Read function outputs here
45	   */
46	  _user_read(rtY.WiprMotPwmDutyCyc);
47	  _user_read(rtY.WiprActv);
48	}
49	
50	/*
51	 * The example "main" function illustrates what is required by your
52	 * application code to initialize, execute, and terminate the generated code.
53	 * Attaching exported functions to a real-time clock is target specific.
54	 * This example illustrates how you do this relative to initializing the model.
55	 */
56	int_T main(int_T argc, const char *argv[])
57	{
58	  /* Unused arguments */
59	  (void)(argc);
60	  (void)(argv);
61	
62	  /* Initialize model */
63	  WiperMotor_initialize();
64	
65	  /* First time initialization of system output variables.
66	   * Constant and invariant outputs will not be updated
67	   * after this step.
68	   */
69	  _user_read(rtY.WiprMotPwmDutyCyc);
70	  _user_read(rtY.WiprActv);
71	  while (rtmGetErrorStatus(rtM) == (NULL)) {
72	    /*  Perform application tasks here. */
73	  }
74	
75	  return 0;
76	}
77	
78	/*
79	 * File trailer for generated code.
80	 *
81	 * [EOF]
82	 */
