# MBD_Automotive_Wiper_System

In this repository you will find a model for wiper system and the code automatically generated using Matlab Simulink

## Description and requirements.

Scheduler : Executed every 10ms.

-The fisrt and principal output of this Software Component will be Wiper Motor PWM duty cycle     **WiprMotPwmDutyCyc** 

-The second output is a flag indicatng if the Wiper motor is activated or not: **WiprActiv** (0=Stop 1=Acivated)

**Model Inputs**:

1-WiprMod : 4 wiper modes 

* 0=>OFF
* 1=>Aut
* 2=>LoSpd
* 3=>HiSpd

2-RainSnsrErr : boolean indicates if ther is a sesor error or not

* 0=no error
* 1=error

3-WiprSpdReq : Required speed in case of automatic mode [1,2,3,4,5,6,7]

* WiprSpdReq =0 => 0%
* WiprSpdReq =1 => 40%
* WiprSpdReq =2 => 45%
* WiprSpdReq =3 => 50%
* WiprSpdReq =4 => 55%
* WiprSpdReq =5 => 60% 
* WiprSpdReq =6 => 65% 
* WiprSpdReq =7 => 70%

**Wiper System Control Processing:**

* WiprMod=0-->WiprMotPwmDutyCyc = 0 %
* WiprMod=1

if RainSnsrErr is true then **WiprMotPwmDutyCyc=0**

else

* WiprMod=2-->**WiprMotPwmDutyCyc = 40%.**
* WiprMod=3-->**iprMotPwmDutyCyc = 70%.**
