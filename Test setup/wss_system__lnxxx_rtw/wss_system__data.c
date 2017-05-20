/*
 * wss_system__data.c
 *
 * Code generation for model "wss_system_".
 *
 * Model version              : 1.495
 * Simulink Coder version : 8.2 (R2012a) 29-Dec-2011
 * C source code generated on : Sat May 20 20:00:04 2017
 *
 * Target selection: lnxxx.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "wss_system_.h"
#include "wss_system__private.h"

/* Block parameters (auto storage) */
Parameters_wss_system_ wss_system__P = {
  0.0,                                 /* Expression: K1
                                        * Referenced by: '<S17>/Gain'
                                        */
  0.0,                                 /* Expression: K2
                                        * Referenced by: '<S17>/Gain1'
                                        */
  0.0,                                 /* Expression: K1
                                        * Referenced by: '<S18>/Gain'
                                        */
  0.0,                                 /* Expression: K2
                                        * Referenced by: '<S18>/Gain1'
                                        */
  0.0,                                 /* Expression: K1
                                        * Referenced by: '<S19>/Gain'
                                        */
  0.0,                                 /* Expression: K2
                                        * Referenced by: '<S19>/Gain1'
                                        */
  0.0,                                 /* Expression: K1
                                        * Referenced by: '<S20>/Gain'
                                        */
  0.0,                                 /* Expression: K2
                                        * Referenced by: '<S20>/Gain1'
                                        */
  0.0,                                 /* Expression: K1
                                        * Referenced by: '<S25>/Gain'
                                        */
  0.0,                                 /* Expression: K2
                                        * Referenced by: '<S25>/Gain1'
                                        */
  0.0,                                 /* Expression: K1
                                        * Referenced by: '<S34>/Gain'
                                        */
  0.0,                                 /* Expression: K2
                                        * Referenced by: '<S34>/Gain1'
                                        */
  0.0,                                 /* Expression: K1
                                        * Referenced by: '<S35>/Gain'
                                        */
  0.0,                                 /* Expression: K2
                                        * Referenced by: '<S35>/Gain1'
                                        */
  0.0,                                 /* Expression: K1
                                        * Referenced by: '<S36>/Gain'
                                        */
  0.0,                                 /* Expression: K2
                                        * Referenced by: '<S36>/Gain1'
                                        */
  0.0,                                 /* Expression: K1
                                        * Referenced by: '<S37>/Gain'
                                        */
  0.0,                                 /* Expression: K2
                                        * Referenced by: '<S37>/Gain1'
                                        */
  0.0,                                 /* Expression: K1
                                        * Referenced by: '<S42>/Gain'
                                        */
  0.0,                                 /* Expression: K2
                                        * Referenced by: '<S42>/Gain1'
                                        */
  0.0,                                 /* Expression: K1
                                        * Referenced by: '<S43>/Gain'
                                        */
  0.0,                                 /* Expression: K2
                                        * Referenced by: '<S43>/Gain1'
                                        */
  0.0,                                 /* Expression: K1
                                        * Referenced by: '<S44>/Gain'
                                        */
  0.0,                                 /* Expression: K2
                                        * Referenced by: '<S44>/Gain1'
                                        */
  0.0,                                 /* Expression: K1
                                        * Referenced by: '<S45>/Gain'
                                        */
  0.0,                                 /* Expression: K2
                                        * Referenced by: '<S45>/Gain1'
                                        */

  /*  Computed Parameter: Comedi0ADC3_P1_Size
   * Referenced by: '<S27>/Comedi0 ADC3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S27>/Comedi0 ADC3'
                                        */

  /*  Computed Parameter: Comedi0ADC3_P2_Size
   * Referenced by: '<S27>/Comedi0 ADC3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: chan
                                        * Referenced by: '<S27>/Comedi0 ADC3'
                                        */

  /*  Computed Parameter: Comedi0ADC3_P3_Size
   * Referenced by: '<S27>/Comedi0 ADC3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S27>/Comedi0 ADC3'
                                        */

  /*  Computed Parameter: Comedi0ADC3_P4_Size
   * Referenced by: '<S27>/Comedi0 ADC3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S27>/Comedi0 ADC3'
                                        */

  /*  Computed Parameter: Comedi0ADC3_P5_Size
   * Referenced by: '<S27>/Comedi0 ADC3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S27>/Comedi0 ADC3'
                                        */
  0.0356,                              /* Expression: 0.0356
                                        * Referenced by: '<S27>/Gain'
                                        */
  0.025,                               /* Computed Parameter: Integ4_gainval
                                        * Referenced by: '<S17>/Integ4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Integ4'
                                        */
  5.0,                                 /* Expression: Delay
                                        * Referenced by: '<S17>/K1'
                                        */
  0.2,                                 /* Expression: Freq
                                        * Referenced by: '<S17>/K2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Unit Delay'
                                        */
  5.0,                                 /* Expression: 1/Freq
                                        * Referenced by: '<S17>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Step'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Step'
                                        */
  0.0,                                 /* Expression: Vinit
                                        * Referenced by: '<S17>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S17>/Switch'
                                        */

  /*  Computed Parameter: Comedi0ADC4_P1_Size
   * Referenced by: '<S27>/Comedi0 ADC4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S27>/Comedi0 ADC4'
                                        */

  /*  Computed Parameter: Comedi0ADC4_P2_Size
   * Referenced by: '<S27>/Comedi0 ADC4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: chan
                                        * Referenced by: '<S27>/Comedi0 ADC4'
                                        */

  /*  Computed Parameter: Comedi0ADC4_P3_Size
   * Referenced by: '<S27>/Comedi0 ADC4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S27>/Comedi0 ADC4'
                                        */

  /*  Computed Parameter: Comedi0ADC4_P4_Size
   * Referenced by: '<S27>/Comedi0 ADC4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S27>/Comedi0 ADC4'
                                        */

  /*  Computed Parameter: Comedi0ADC4_P5_Size
   * Referenced by: '<S27>/Comedi0 ADC4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S27>/Comedi0 ADC4'
                                        */
  0.0356,                              /* Expression: 0.0356
                                        * Referenced by: '<S27>/Gain1'
                                        */
  0.025,                               /* Computed Parameter: Integ4_gainval_d
                                        * Referenced by: '<S18>/Integ4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Integ4'
                                        */
  5.0,                                 /* Expression: Delay
                                        * Referenced by: '<S18>/K1'
                                        */
  0.2,                                 /* Expression: Freq
                                        * Referenced by: '<S18>/K2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Unit Delay'
                                        */
  5.0,                                 /* Expression: 1/Freq
                                        * Referenced by: '<S18>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Step'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S18>/Step'
                                        */
  0.0,                                 /* Expression: Vinit
                                        * Referenced by: '<S18>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S18>/Switch'
                                        */

  /*  Computed Parameter: Comedi2ADC4_P1_Size
   * Referenced by: '<S27>/Comedi2 ADC4'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: dev
                                        * Referenced by: '<S27>/Comedi2 ADC4'
                                        */

  /*  Computed Parameter: Comedi2ADC4_P2_Size
   * Referenced by: '<S27>/Comedi2 ADC4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: chan
                                        * Referenced by: '<S27>/Comedi2 ADC4'
                                        */

  /*  Computed Parameter: Comedi2ADC4_P3_Size
   * Referenced by: '<S27>/Comedi2 ADC4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S27>/Comedi2 ADC4'
                                        */

  /*  Computed Parameter: Comedi2ADC4_P4_Size
   * Referenced by: '<S27>/Comedi2 ADC4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S27>/Comedi2 ADC4'
                                        */

  /*  Computed Parameter: Comedi2ADC4_P5_Size
   * Referenced by: '<S27>/Comedi2 ADC4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S27>/Comedi2 ADC4'
                                        */
  0.0356,                              /* Expression: 0.0356
                                        * Referenced by: '<S27>/Gain2'
                                        */
  0.025,                               /* Computed Parameter: Integ4_gainval_m
                                        * Referenced by: '<S19>/Integ4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S19>/Integ4'
                                        */
  5.0,                                 /* Expression: Delay
                                        * Referenced by: '<S19>/K1'
                                        */
  0.2,                                 /* Expression: Freq
                                        * Referenced by: '<S19>/K2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S19>/Unit Delay'
                                        */
  5.0,                                 /* Expression: 1/Freq
                                        * Referenced by: '<S19>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S19>/Step'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S19>/Step'
                                        */
  0.0,                                 /* Expression: Vinit
                                        * Referenced by: '<S19>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S19>/Switch'
                                        */

  /*  Computed Parameter: Comedi2ADC5_P1_Size
   * Referenced by: '<S27>/Comedi2 ADC5'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: dev
                                        * Referenced by: '<S27>/Comedi2 ADC5'
                                        */

  /*  Computed Parameter: Comedi2ADC5_P2_Size
   * Referenced by: '<S27>/Comedi2 ADC5'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: chan
                                        * Referenced by: '<S27>/Comedi2 ADC5'
                                        */

  /*  Computed Parameter: Comedi2ADC5_P3_Size
   * Referenced by: '<S27>/Comedi2 ADC5'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S27>/Comedi2 ADC5'
                                        */

  /*  Computed Parameter: Comedi2ADC5_P4_Size
   * Referenced by: '<S27>/Comedi2 ADC5'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S27>/Comedi2 ADC5'
                                        */

  /*  Computed Parameter: Comedi2ADC5_P5_Size
   * Referenced by: '<S27>/Comedi2 ADC5'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S27>/Comedi2 ADC5'
                                        */
  0.0356,                              /* Expression: 0.0356
                                        * Referenced by: '<S27>/Gain3'
                                        */
  0.025,                               /* Computed Parameter: Integ4_gainval_g
                                        * Referenced by: '<S20>/Integ4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S20>/Integ4'
                                        */
  5.0,                                 /* Expression: Delay
                                        * Referenced by: '<S20>/K1'
                                        */
  0.2,                                 /* Expression: Freq
                                        * Referenced by: '<S20>/K2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S20>/Unit Delay'
                                        */
  5.0,                                 /* Expression: 1/Freq
                                        * Referenced by: '<S20>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S20>/Step'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S20>/Step'
                                        */
  0.0,                                 /* Expression: Vinit
                                        * Referenced by: '<S20>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S20>/Switch'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S31>/Constant'
                                        */

  /*  Computed Parameter: Comedi2ADC0_P1_Size
   * Referenced by: '<S31>/Comedi2 ADC0'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: dev
                                        * Referenced by: '<S31>/Comedi2 ADC0'
                                        */

  /*  Computed Parameter: Comedi2ADC0_P2_Size
   * Referenced by: '<S31>/Comedi2 ADC0'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: chan
                                        * Referenced by: '<S31>/Comedi2 ADC0'
                                        */

  /*  Computed Parameter: Comedi2ADC0_P3_Size
   * Referenced by: '<S31>/Comedi2 ADC0'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S31>/Comedi2 ADC0'
                                        */

  /*  Computed Parameter: Comedi2ADC0_P4_Size
   * Referenced by: '<S31>/Comedi2 ADC0'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S31>/Comedi2 ADC0'
                                        */

  /*  Computed Parameter: Comedi2ADC0_P5_Size
   * Referenced by: '<S31>/Comedi2 ADC0'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S31>/Comedi2 ADC0'
                                        */
  0.25,                                /* Expression: 1/4
                                        * Referenced by: '<S31>/Gain'
                                        */
  0.025,                               /* Computed Parameter: Integ4_gainval_k
                                        * Referenced by: '<S45>/Integ4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S45>/Integ4'
                                        */
  5.0,                                 /* Expression: Delay
                                        * Referenced by: '<S45>/K1'
                                        */
  0.2,                                 /* Expression: Freq
                                        * Referenced by: '<S45>/K2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S45>/Unit Delay'
                                        */
  5.0,                                 /* Expression: 1/Freq
                                        * Referenced by: '<S45>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S45>/Step'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S45>/Step'
                                        */
  0.0,                                 /* Expression: Vinit
                                        * Referenced by: '<S45>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S45>/Switch'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S31>/Constant1'
                                        */

  /*  Computed Parameter: Comedi0ADC1_P1_Size
   * Referenced by: '<S31>/Comedi0 ADC1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S31>/Comedi0 ADC1'
                                        */

  /*  Computed Parameter: Comedi0ADC1_P2_Size
   * Referenced by: '<S31>/Comedi0 ADC1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chan
                                        * Referenced by: '<S31>/Comedi0 ADC1'
                                        */

  /*  Computed Parameter: Comedi0ADC1_P3_Size
   * Referenced by: '<S31>/Comedi0 ADC1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S31>/Comedi0 ADC1'
                                        */

  /*  Computed Parameter: Comedi0ADC1_P4_Size
   * Referenced by: '<S31>/Comedi0 ADC1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S31>/Comedi0 ADC1'
                                        */

  /*  Computed Parameter: Comedi0ADC1_P5_Size
   * Referenced by: '<S31>/Comedi0 ADC1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S31>/Comedi0 ADC1'
                                        */
  0.25,                                /* Expression: 1/4
                                        * Referenced by: '<S31>/Gain1'
                                        */
  0.025,                               /* Computed Parameter: Integ4_gainval_p
                                        * Referenced by: '<S42>/Integ4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S42>/Integ4'
                                        */
  5.0,                                 /* Expression: Delay
                                        * Referenced by: '<S42>/K1'
                                        */
  0.2,                                 /* Expression: Freq
                                        * Referenced by: '<S42>/K2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S42>/Unit Delay'
                                        */
  5.0,                                 /* Expression: 1/Freq
                                        * Referenced by: '<S42>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S42>/Step'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S42>/Step'
                                        */
  0.0,                                 /* Expression: Vinit
                                        * Referenced by: '<S42>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S42>/Switch'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S31>/Constant2'
                                        */

  /*  Computed Parameter: Comedi2ADC1_P1_Size
   * Referenced by: '<S31>/Comedi2 ADC1'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: dev
                                        * Referenced by: '<S31>/Comedi2 ADC1'
                                        */

  /*  Computed Parameter: Comedi2ADC1_P2_Size
   * Referenced by: '<S31>/Comedi2 ADC1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chan
                                        * Referenced by: '<S31>/Comedi2 ADC1'
                                        */

  /*  Computed Parameter: Comedi2ADC1_P3_Size
   * Referenced by: '<S31>/Comedi2 ADC1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S31>/Comedi2 ADC1'
                                        */

  /*  Computed Parameter: Comedi2ADC1_P4_Size
   * Referenced by: '<S31>/Comedi2 ADC1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S31>/Comedi2 ADC1'
                                        */

  /*  Computed Parameter: Comedi2ADC1_P5_Size
   * Referenced by: '<S31>/Comedi2 ADC1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S31>/Comedi2 ADC1'
                                        */
  0.25,                                /* Expression: 1/4
                                        * Referenced by: '<S31>/Gain2'
                                        */
  0.025,                               /* Computed Parameter: Integ4_gainval_gu
                                        * Referenced by: '<S43>/Integ4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S43>/Integ4'
                                        */
  5.0,                                 /* Expression: Delay
                                        * Referenced by: '<S43>/K1'
                                        */
  0.2,                                 /* Expression: Freq
                                        * Referenced by: '<S43>/K2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S43>/Unit Delay'
                                        */
  5.0,                                 /* Expression: 1/Freq
                                        * Referenced by: '<S43>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S43>/Step'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S43>/Step'
                                        */
  0.0,                                 /* Expression: Vinit
                                        * Referenced by: '<S43>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S43>/Switch'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S31>/Constant3'
                                        */

  /*  Computed Parameter: Comedi2ADC2_P1_Size
   * Referenced by: '<S31>/Comedi2 ADC2'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: dev
                                        * Referenced by: '<S31>/Comedi2 ADC2'
                                        */

  /*  Computed Parameter: Comedi2ADC2_P2_Size
   * Referenced by: '<S31>/Comedi2 ADC2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: chan
                                        * Referenced by: '<S31>/Comedi2 ADC2'
                                        */

  /*  Computed Parameter: Comedi2ADC2_P3_Size
   * Referenced by: '<S31>/Comedi2 ADC2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S31>/Comedi2 ADC2'
                                        */

  /*  Computed Parameter: Comedi2ADC2_P4_Size
   * Referenced by: '<S31>/Comedi2 ADC2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S31>/Comedi2 ADC2'
                                        */

  /*  Computed Parameter: Comedi2ADC2_P5_Size
   * Referenced by: '<S31>/Comedi2 ADC2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S31>/Comedi2 ADC2'
                                        */
  0.25,                                /* Expression: 1/4
                                        * Referenced by: '<S31>/Gain3'
                                        */
  0.025,                               /* Computed Parameter: Integ4_gainval_de
                                        * Referenced by: '<S44>/Integ4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S44>/Integ4'
                                        */
  5.0,                                 /* Expression: Delay
                                        * Referenced by: '<S44>/K1'
                                        */
  0.2,                                 /* Expression: Freq
                                        * Referenced by: '<S44>/K2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S44>/Unit Delay'
                                        */
  5.0,                                 /* Expression: 1/Freq
                                        * Referenced by: '<S44>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S44>/Step'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S44>/Step'
                                        */
  0.0,                                 /* Expression: Vinit
                                        * Referenced by: '<S44>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S44>/Switch'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S30>/Constant'
                                        */

  /*  Computed Parameter: Comedi2ADC7_P1_Size
   * Referenced by: '<S30>/Comedi2 ADC7'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: dev
                                        * Referenced by: '<S30>/Comedi2 ADC7'
                                        */

  /*  Computed Parameter: Comedi2ADC7_P2_Size
   * Referenced by: '<S30>/Comedi2 ADC7'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: chan
                                        * Referenced by: '<S30>/Comedi2 ADC7'
                                        */

  /*  Computed Parameter: Comedi2ADC7_P3_Size
   * Referenced by: '<S30>/Comedi2 ADC7'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S30>/Comedi2 ADC7'
                                        */

  /*  Computed Parameter: Comedi2ADC7_P4_Size
   * Referenced by: '<S30>/Comedi2 ADC7'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S30>/Comedi2 ADC7'
                                        */

  /*  Computed Parameter: Comedi2ADC7_P5_Size
   * Referenced by: '<S30>/Comedi2 ADC7'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S30>/Comedi2 ADC7'
                                        */
  0.25,                                /* Expression: 1/4
                                        * Referenced by: '<S30>/Gain'
                                        */
  0.025,                               /* Computed Parameter: Integ4_gainval_e
                                        * Referenced by: '<S37>/Integ4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S37>/Integ4'
                                        */
  5.0,                                 /* Expression: Delay
                                        * Referenced by: '<S37>/K1'
                                        */
  0.2,                                 /* Expression: Freq
                                        * Referenced by: '<S37>/K2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S37>/Unit Delay'
                                        */
  5.0,                                 /* Expression: 1/Freq
                                        * Referenced by: '<S37>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S37>/Step'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S37>/Step'
                                        */
  0.0,                                 /* Expression: Vinit
                                        * Referenced by: '<S37>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S37>/Switch'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S30>/Constant1'
                                        */

  /*  Computed Parameter: Comedi0ADC7_P1_Size
   * Referenced by: '<S30>/Comedi0 ADC7'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S30>/Comedi0 ADC7'
                                        */

  /*  Computed Parameter: Comedi0ADC7_P2_Size
   * Referenced by: '<S30>/Comedi0 ADC7'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: chan
                                        * Referenced by: '<S30>/Comedi0 ADC7'
                                        */

  /*  Computed Parameter: Comedi0ADC7_P3_Size
   * Referenced by: '<S30>/Comedi0 ADC7'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S30>/Comedi0 ADC7'
                                        */

  /*  Computed Parameter: Comedi0ADC7_P4_Size
   * Referenced by: '<S30>/Comedi0 ADC7'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S30>/Comedi0 ADC7'
                                        */

  /*  Computed Parameter: Comedi0ADC7_P5_Size
   * Referenced by: '<S30>/Comedi0 ADC7'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S30>/Comedi0 ADC7'
                                        */
  0.25,                                /* Expression: 1/4
                                        * Referenced by: '<S30>/Gain1'
                                        */
  0.025,                               /* Computed Parameter: Integ4_gainval_a
                                        * Referenced by: '<S34>/Integ4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/Integ4'
                                        */
  5.0,                                 /* Expression: Delay
                                        * Referenced by: '<S34>/K1'
                                        */
  0.2,                                 /* Expression: Freq
                                        * Referenced by: '<S34>/K2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/Unit Delay'
                                        */
  5.0,                                 /* Expression: 1/Freq
                                        * Referenced by: '<S34>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/Step'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S34>/Step'
                                        */
  0.0,                                 /* Expression: Vinit
                                        * Referenced by: '<S34>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S34>/Switch'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S30>/Constant2'
                                        */

  /*  Computed Parameter: Comedi2ADC3_P1_Size
   * Referenced by: '<S30>/Comedi2 ADC3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: dev
                                        * Referenced by: '<S30>/Comedi2 ADC3'
                                        */

  /*  Computed Parameter: Comedi2ADC3_P2_Size
   * Referenced by: '<S30>/Comedi2 ADC3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: chan
                                        * Referenced by: '<S30>/Comedi2 ADC3'
                                        */

  /*  Computed Parameter: Comedi2ADC3_P3_Size
   * Referenced by: '<S30>/Comedi2 ADC3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S30>/Comedi2 ADC3'
                                        */

  /*  Computed Parameter: Comedi2ADC3_P4_Size
   * Referenced by: '<S30>/Comedi2 ADC3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S30>/Comedi2 ADC3'
                                        */

  /*  Computed Parameter: Comedi2ADC3_P5_Size
   * Referenced by: '<S30>/Comedi2 ADC3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S30>/Comedi2 ADC3'
                                        */
  0.25,                                /* Expression: 1/4
                                        * Referenced by: '<S30>/Gain2'
                                        */
  0.025,                               /* Computed Parameter: Integ4_gainval_i
                                        * Referenced by: '<S35>/Integ4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/Integ4'
                                        */
  5.0,                                 /* Expression: Delay
                                        * Referenced by: '<S35>/K1'
                                        */
  0.2,                                 /* Expression: Freq
                                        * Referenced by: '<S35>/K2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/Unit Delay'
                                        */
  5.0,                                 /* Expression: 1/Freq
                                        * Referenced by: '<S35>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/Step'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S35>/Step'
                                        */
  0.0,                                 /* Expression: Vinit
                                        * Referenced by: '<S35>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S35>/Switch'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S30>/Constant3'
                                        */

  /*  Computed Parameter: Comedi0ADC6_P1_Size
   * Referenced by: '<S30>/Comedi0 ADC6'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S30>/Comedi0 ADC6'
                                        */

  /*  Computed Parameter: Comedi0ADC6_P2_Size
   * Referenced by: '<S30>/Comedi0 ADC6'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: chan
                                        * Referenced by: '<S30>/Comedi0 ADC6'
                                        */

  /*  Computed Parameter: Comedi0ADC6_P3_Size
   * Referenced by: '<S30>/Comedi0 ADC6'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S30>/Comedi0 ADC6'
                                        */

  /*  Computed Parameter: Comedi0ADC6_P4_Size
   * Referenced by: '<S30>/Comedi0 ADC6'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S30>/Comedi0 ADC6'
                                        */

  /*  Computed Parameter: Comedi0ADC6_P5_Size
   * Referenced by: '<S30>/Comedi0 ADC6'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S30>/Comedi0 ADC6'
                                        */
  0.25,                                /* Expression: 1/4
                                        * Referenced by: '<S30>/Gain3'
                                        */
  0.025,                               /* Computed Parameter: Integ4_gainval_e3
                                        * Referenced by: '<S36>/Integ4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S36>/Integ4'
                                        */
  5.0,                                 /* Expression: Delay
                                        * Referenced by: '<S36>/K1'
                                        */
  0.2,                                 /* Expression: Freq
                                        * Referenced by: '<S36>/K2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S36>/Unit Delay'
                                        */
  5.0,                                 /* Expression: 1/Freq
                                        * Referenced by: '<S36>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S36>/Step'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S36>/Step'
                                        */
  0.0,                                 /* Expression: Vinit
                                        * Referenced by: '<S36>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S36>/Switch'
                                        */
  0.7,                                 /* Expression: 0.7
                                        * Referenced by: '<Root>/Constant8'
                                        */
  0.7,                                 /* Expression: 0.7
                                        * Referenced by: '<Root>/Constant5'
                                        */
  0.7,                                 /* Expression: 0.7
                                        * Referenced by: '<Root>/Constant9'
                                        */

  /*  Expression: tv
   * Referenced by: '<S12>/Look-Up Table'
   */
  { -1.0, 0.0, 1800.0, 1800.0, 3600.0, 3600.0, 5400.0, 5400.0, 7200.0, 7200.0,
    7201.0 },

  /*  Expression: opv
   * Referenced by: '<S12>/Look-Up Table'
   */
  { 0.7, 0.7, 0.7, 0.81, 0.81, 0.7, 0.7, 0.57, 0.57, 0.7, 0.7 },

  /*  Computed Parameter: Comedi0ADC2_P1_Size
   * Referenced by: '<S27>/Comedi0 ADC2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S27>/Comedi0 ADC2'
                                        */

  /*  Computed Parameter: Comedi0ADC2_P2_Size
   * Referenced by: '<S27>/Comedi0 ADC2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: chan
                                        * Referenced by: '<S27>/Comedi0 ADC2'
                                        */

  /*  Computed Parameter: Comedi0ADC2_P3_Size
   * Referenced by: '<S27>/Comedi0 ADC2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S27>/Comedi0 ADC2'
                                        */

  /*  Computed Parameter: Comedi0ADC2_P4_Size
   * Referenced by: '<S27>/Comedi0 ADC2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S27>/Comedi0 ADC2'
                                        */

  /*  Computed Parameter: Comedi0ADC2_P5_Size
   * Referenced by: '<S27>/Comedi0 ADC2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S27>/Comedi0 ADC2'
                                        */
  0.0356,                              /* Expression: 0.0356
                                        * Referenced by: '<S27>/Gain4'
                                        */
  0.025,                               /* Computed Parameter: Integ4_gainval_dp
                                        * Referenced by: '<S25>/Integ4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S25>/Integ4'
                                        */
  5.0,                                 /* Expression: Delay
                                        * Referenced by: '<S25>/K1'
                                        */
  0.2,                                 /* Expression: Freq
                                        * Referenced by: '<S25>/K2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S25>/Unit Delay'
                                        */
  5.0,                                 /* Expression: 1/Freq
                                        * Referenced by: '<S25>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S25>/Step'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S25>/Step'
                                        */
  0.0,                                 /* Expression: Vinit
                                        * Referenced by: '<S25>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S25>/Switch'
                                        */
  0.05,                                /* Computed Parameter: DiscreteTimeIntegrator_gainval
                                        * Referenced by: '<S4>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Discrete-Time Integrator'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<Root>/Constant14'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Gain1'
                                        */
  0.05,                                /* Computed Parameter: DiscreteTimeIntegrator_gainva_g
                                        * Referenced by: '<S1>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Discrete-Time Integrator'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<Root>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Gain1'
                                        */
  0.05,                                /* Computed Parameter: DiscreteTimeIntegrator_gainva_c
                                        * Referenced by: '<S2>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Discrete-Time Integrator'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<Root>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Gain1'
                                        */
  0.05,                                /* Computed Parameter: DiscreteTimeIntegrator_gainva_o
                                        * Referenced by: '<S3>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Discrete-Time Integrator'
                                        */
  0.25,                                /* Expression: 0.25
                                        * Referenced by: '<Root>/Constant4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Gain1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant11'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant12'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Constant13'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant6'
                                        */
  1.4,                                 /* Expression: 1.4
                                        * Referenced by: '<S1>/Gain'
                                        */
  1.6,                                 /* Expression: 1.6
                                        * Referenced by: '<S2>/Gain'
                                        */
  1.4,                                 /* Expression: 1.4
                                        * Referenced by: '<S3>/Gain'
                                        */
  1.4,                                 /* Expression: 1.4
                                        * Referenced by: '<S4>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S12>/Hit  Crossing'
                                        */

  /*  Computed Parameter: Comedi2ADC6_P1_Size
   * Referenced by: '<S27>/Comedi2 ADC6'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: dev
                                        * Referenced by: '<S27>/Comedi2 ADC6'
                                        */

  /*  Computed Parameter: Comedi2ADC6_P2_Size
   * Referenced by: '<S27>/Comedi2 ADC6'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: chan
                                        * Referenced by: '<S27>/Comedi2 ADC6'
                                        */

  /*  Computed Parameter: Comedi2ADC6_P3_Size
   * Referenced by: '<S27>/Comedi2 ADC6'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S27>/Comedi2 ADC6'
                                        */

  /*  Computed Parameter: Comedi2ADC6_P4_Size
   * Referenced by: '<S27>/Comedi2 ADC6'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S27>/Comedi2 ADC6'
                                        */

  /*  Computed Parameter: Comedi2ADC6_P5_Size
   * Referenced by: '<S27>/Comedi2 ADC6'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S27>/Comedi2 ADC6'
                                        */

  /*  Computed Parameter: Comedi0ADC5_P1_Size
   * Referenced by: '<S30>/Comedi0 ADC5'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S30>/Comedi0 ADC5'
                                        */

  /*  Computed Parameter: Comedi0ADC5_P2_Size
   * Referenced by: '<S30>/Comedi0 ADC5'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: chan
                                        * Referenced by: '<S30>/Comedi0 ADC5'
                                        */

  /*  Computed Parameter: Comedi0ADC5_P3_Size
   * Referenced by: '<S30>/Comedi0 ADC5'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S30>/Comedi0 ADC5'
                                        */

  /*  Computed Parameter: Comedi0ADC5_P4_Size
   * Referenced by: '<S30>/Comedi0 ADC5'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S30>/Comedi0 ADC5'
                                        */

  /*  Computed Parameter: Comedi0ADC5_P5_Size
   * Referenced by: '<S30>/Comedi0 ADC5'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S30>/Comedi0 ADC5'
                                        */

  /*  Computed Parameter: Comedi0ADC0_P1_Size
   * Referenced by: '<S31>/Comedi0 ADC0'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S31>/Comedi0 ADC0'
                                        */

  /*  Computed Parameter: Comedi0ADC0_P2_Size
   * Referenced by: '<S31>/Comedi0 ADC0'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: chan
                                        * Referenced by: '<S31>/Comedi0 ADC0'
                                        */

  /*  Computed Parameter: Comedi0ADC0_P3_Size
   * Referenced by: '<S31>/Comedi0 ADC0'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S31>/Comedi0 ADC0'
                                        */

  /*  Computed Parameter: Comedi0ADC0_P4_Size
   * Referenced by: '<S31>/Comedi0 ADC0'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S31>/Comedi0 ADC0'
                                        */

  /*  Computed Parameter: Comedi0ADC0_P5_Size
   * Referenced by: '<S31>/Comedi0 ADC0'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S31>/Comedi0 ADC0'
                                        */

  /*  Computed Parameter: Comedi1ADC0_P1_Size
   * Referenced by: '<S29>/Comedi1 ADC0'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: dev
                                        * Referenced by: '<S29>/Comedi1 ADC0'
                                        */

  /*  Computed Parameter: Comedi1ADC0_P2_Size
   * Referenced by: '<S29>/Comedi1 ADC0'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: chan
                                        * Referenced by: '<S29>/Comedi1 ADC0'
                                        */

  /*  Computed Parameter: Comedi1ADC0_P3_Size
   * Referenced by: '<S29>/Comedi1 ADC0'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S29>/Comedi1 ADC0'
                                        */

  /*  Computed Parameter: Comedi1ADC0_P4_Size
   * Referenced by: '<S29>/Comedi1 ADC0'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S29>/Comedi1 ADC0'
                                        */

  /*  Computed Parameter: Comedi1ADC0_P5_Size
   * Referenced by: '<S29>/Comedi1 ADC0'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S29>/Comedi1 ADC0'
                                        */

  /*  Computed Parameter: Comedi1ADC1_P1_Size
   * Referenced by: '<S29>/Comedi1 ADC1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: dev
                                        * Referenced by: '<S29>/Comedi1 ADC1'
                                        */

  /*  Computed Parameter: Comedi1ADC1_P2_Size
   * Referenced by: '<S29>/Comedi1 ADC1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chan
                                        * Referenced by: '<S29>/Comedi1 ADC1'
                                        */

  /*  Computed Parameter: Comedi1ADC1_P3_Size
   * Referenced by: '<S29>/Comedi1 ADC1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S29>/Comedi1 ADC1'
                                        */

  /*  Computed Parameter: Comedi1ADC1_P4_Size
   * Referenced by: '<S29>/Comedi1 ADC1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S29>/Comedi1 ADC1'
                                        */

  /*  Computed Parameter: Comedi1ADC1_P5_Size
   * Referenced by: '<S29>/Comedi1 ADC1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S29>/Comedi1 ADC1'
                                        */

  /*  Computed Parameter: Comedi1ADC2_P1_Size
   * Referenced by: '<S29>/Comedi1 ADC2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: dev
                                        * Referenced by: '<S29>/Comedi1 ADC2'
                                        */

  /*  Computed Parameter: Comedi1ADC2_P2_Size
   * Referenced by: '<S29>/Comedi1 ADC2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: chan
                                        * Referenced by: '<S29>/Comedi1 ADC2'
                                        */

  /*  Computed Parameter: Comedi1ADC2_P3_Size
   * Referenced by: '<S29>/Comedi1 ADC2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S29>/Comedi1 ADC2'
                                        */

  /*  Computed Parameter: Comedi1ADC2_P4_Size
   * Referenced by: '<S29>/Comedi1 ADC2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S29>/Comedi1 ADC2'
                                        */

  /*  Computed Parameter: Comedi1ADC2_P5_Size
   * Referenced by: '<S29>/Comedi1 ADC2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S29>/Comedi1 ADC2'
                                        */

  /*  Computed Parameter: Comedi1ADC3_P1_Size
   * Referenced by: '<S29>/Comedi1 ADC3'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: dev
                                        * Referenced by: '<S29>/Comedi1 ADC3'
                                        */

  /*  Computed Parameter: Comedi1ADC3_P2_Size
   * Referenced by: '<S29>/Comedi1 ADC3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: chan
                                        * Referenced by: '<S29>/Comedi1 ADC3'
                                        */

  /*  Computed Parameter: Comedi1ADC3_P3_Size
   * Referenced by: '<S29>/Comedi1 ADC3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S29>/Comedi1 ADC3'
                                        */

  /*  Computed Parameter: Comedi1ADC3_P4_Size
   * Referenced by: '<S29>/Comedi1 ADC3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S29>/Comedi1 ADC3'
                                        */

  /*  Computed Parameter: Comedi1ADC3_P5_Size
   * Referenced by: '<S29>/Comedi1 ADC3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S29>/Comedi1 ADC3'
                                        */

  /*  Computed Parameter: Comedi1ADC4_P1_Size
   * Referenced by: '<S29>/Comedi1 ADC4'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: dev
                                        * Referenced by: '<S29>/Comedi1 ADC4'
                                        */

  /*  Computed Parameter: Comedi1ADC4_P2_Size
   * Referenced by: '<S29>/Comedi1 ADC4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: chan
                                        * Referenced by: '<S29>/Comedi1 ADC4'
                                        */

  /*  Computed Parameter: Comedi1ADC4_P3_Size
   * Referenced by: '<S29>/Comedi1 ADC4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S29>/Comedi1 ADC4'
                                        */

  /*  Computed Parameter: Comedi1ADC4_P4_Size
   * Referenced by: '<S29>/Comedi1 ADC4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S29>/Comedi1 ADC4'
                                        */

  /*  Computed Parameter: Comedi1ADC4_P5_Size
   * Referenced by: '<S29>/Comedi1 ADC4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S29>/Comedi1 ADC4'
                                        */

  /*  Computed Parameter: Comedi1ADC5_P1_Size
   * Referenced by: '<S29>/Comedi1 ADC5'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: dev
                                        * Referenced by: '<S29>/Comedi1 ADC5'
                                        */

  /*  Computed Parameter: Comedi1ADC5_P2_Size
   * Referenced by: '<S29>/Comedi1 ADC5'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: chan
                                        * Referenced by: '<S29>/Comedi1 ADC5'
                                        */

  /*  Computed Parameter: Comedi1ADC5_P3_Size
   * Referenced by: '<S29>/Comedi1 ADC5'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S29>/Comedi1 ADC5'
                                        */

  /*  Computed Parameter: Comedi1ADC5_P4_Size
   * Referenced by: '<S29>/Comedi1 ADC5'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S29>/Comedi1 ADC5'
                                        */

  /*  Computed Parameter: Comedi1ADC5_P5_Size
   * Referenced by: '<S29>/Comedi1 ADC5'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: dt
                                        * Referenced by: '<S29>/Comedi1 ADC5'
                                        */

  /*  Computed Parameter: Comedi2DAC0_P1_Size
   * Referenced by: '<S32>/Comedi2 DAC0'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: dev
                                        * Referenced by: '<S32>/Comedi2 DAC0'
                                        */

  /*  Computed Parameter: Comedi2DAC0_P2_Size
   * Referenced by: '<S32>/Comedi2 DAC0'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: chan
                                        * Referenced by: '<S32>/Comedi2 DAC0'
                                        */

  /*  Computed Parameter: Comedi2DAC0_P3_Size
   * Referenced by: '<S32>/Comedi2 DAC0'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S32>/Comedi2 DAC0'
                                        */

  /*  Computed Parameter: Comedi2DAC0_P4_Size
   * Referenced by: '<S32>/Comedi2 DAC0'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S32>/Comedi2 DAC0'
                                        */

  /*  Computed Parameter: Comedi2DAC1_P1_Size
   * Referenced by: '<S32>/Comedi2 DAC1'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: dev
                                        * Referenced by: '<S32>/Comedi2 DAC1'
                                        */

  /*  Computed Parameter: Comedi2DAC1_P2_Size
   * Referenced by: '<S32>/Comedi2 DAC1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chan
                                        * Referenced by: '<S32>/Comedi2 DAC1'
                                        */

  /*  Computed Parameter: Comedi2DAC1_P3_Size
   * Referenced by: '<S32>/Comedi2 DAC1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S32>/Comedi2 DAC1'
                                        */

  /*  Computed Parameter: Comedi2DAC1_P4_Size
   * Referenced by: '<S32>/Comedi2 DAC1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S32>/Comedi2 DAC1'
                                        */

  /*  Computed Parameter: Comedi2DAC2_P1_Size
   * Referenced by: '<S32>/Comedi2 DAC2'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: dev
                                        * Referenced by: '<S32>/Comedi2 DAC2'
                                        */

  /*  Computed Parameter: Comedi2DAC2_P2_Size
   * Referenced by: '<S32>/Comedi2 DAC2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: chan
                                        * Referenced by: '<S32>/Comedi2 DAC2'
                                        */

  /*  Computed Parameter: Comedi2DAC2_P3_Size
   * Referenced by: '<S32>/Comedi2 DAC2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S32>/Comedi2 DAC2'
                                        */

  /*  Computed Parameter: Comedi2DAC2_P4_Size
   * Referenced by: '<S32>/Comedi2 DAC2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S32>/Comedi2 DAC2'
                                        */

  /*  Computed Parameter: Comedi2DAC3_P1_Size
   * Referenced by: '<S32>/Comedi2 DAC3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: dev
                                        * Referenced by: '<S32>/Comedi2 DAC3'
                                        */

  /*  Computed Parameter: Comedi2DAC3_P2_Size
   * Referenced by: '<S32>/Comedi2 DAC3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: chan
                                        * Referenced by: '<S32>/Comedi2 DAC3'
                                        */

  /*  Computed Parameter: Comedi2DAC3_P3_Size
   * Referenced by: '<S32>/Comedi2 DAC3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S32>/Comedi2 DAC3'
                                        */

  /*  Computed Parameter: Comedi2DAC3_P4_Size
   * Referenced by: '<S32>/Comedi2 DAC3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S32>/Comedi2 DAC3'
                                        */

  /*  Computed Parameter: Comedi0DAC4_P1_Size
   * Referenced by: '<S32>/Comedi0 DAC4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S32>/Comedi0 DAC4'
                                        */

  /*  Computed Parameter: Comedi0DAC4_P2_Size
   * Referenced by: '<S32>/Comedi0 DAC4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: chan
                                        * Referenced by: '<S32>/Comedi0 DAC4'
                                        */

  /*  Computed Parameter: Comedi0DAC4_P3_Size
   * Referenced by: '<S32>/Comedi0 DAC4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S32>/Comedi0 DAC4'
                                        */

  /*  Computed Parameter: Comedi0DAC4_P4_Size
   * Referenced by: '<S32>/Comedi0 DAC4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S32>/Comedi0 DAC4'
                                        */

  /*  Computed Parameter: Comedi0DAC5_P1_Size
   * Referenced by: '<S32>/Comedi0 DAC5'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S32>/Comedi0 DAC5'
                                        */

  /*  Computed Parameter: Comedi0DAC5_P2_Size
   * Referenced by: '<S32>/Comedi0 DAC5'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: chan
                                        * Referenced by: '<S32>/Comedi0 DAC5'
                                        */

  /*  Computed Parameter: Comedi0DAC5_P3_Size
   * Referenced by: '<S32>/Comedi0 DAC5'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S32>/Comedi0 DAC5'
                                        */

  /*  Computed Parameter: Comedi0DAC5_P4_Size
   * Referenced by: '<S32>/Comedi0 DAC5'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S32>/Comedi0 DAC5'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S33>/Gain'
                                        */

  /*  Computed Parameter: Comedi0DAC2_P1_Size
   * Referenced by: '<S33>/Comedi0 DAC2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S33>/Comedi0 DAC2'
                                        */

  /*  Computed Parameter: Comedi0DAC2_P2_Size
   * Referenced by: '<S33>/Comedi0 DAC2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: chan
                                        * Referenced by: '<S33>/Comedi0 DAC2'
                                        */

  /*  Computed Parameter: Comedi0DAC2_P3_Size
   * Referenced by: '<S33>/Comedi0 DAC2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S33>/Comedi0 DAC2'
                                        */

  /*  Computed Parameter: Comedi0DAC2_P4_Size
   * Referenced by: '<S33>/Comedi0 DAC2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S33>/Comedi0 DAC2'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S33>/Gain1'
                                        */

  /*  Computed Parameter: Comedi0DAC1_P1_Size
   * Referenced by: '<S33>/Comedi0 DAC1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S33>/Comedi0 DAC1'
                                        */

  /*  Computed Parameter: Comedi0DAC1_P2_Size
   * Referenced by: '<S33>/Comedi0 DAC1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chan
                                        * Referenced by: '<S33>/Comedi0 DAC1'
                                        */

  /*  Computed Parameter: Comedi0DAC1_P3_Size
   * Referenced by: '<S33>/Comedi0 DAC1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S33>/Comedi0 DAC1'
                                        */

  /*  Computed Parameter: Comedi0DAC1_P4_Size
   * Referenced by: '<S33>/Comedi0 DAC1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S33>/Comedi0 DAC1'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S33>/Gain2'
                                        */

  /*  Computed Parameter: Comedi2DAC4_P1_Size
   * Referenced by: '<S33>/Comedi2 DAC4'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: dev
                                        * Referenced by: '<S33>/Comedi2 DAC4'
                                        */

  /*  Computed Parameter: Comedi2DAC4_P2_Size
   * Referenced by: '<S33>/Comedi2 DAC4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: chan
                                        * Referenced by: '<S33>/Comedi2 DAC4'
                                        */

  /*  Computed Parameter: Comedi2DAC4_P3_Size
   * Referenced by: '<S33>/Comedi2 DAC4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S33>/Comedi2 DAC4'
                                        */

  /*  Computed Parameter: Comedi2DAC4_P4_Size
   * Referenced by: '<S33>/Comedi2 DAC4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S33>/Comedi2 DAC4'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S33>/Gain3'
                                        */

  /*  Computed Parameter: Comedi2DAC5_P1_Size
   * Referenced by: '<S33>/Comedi2 DAC5'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: dev
                                        * Referenced by: '<S33>/Comedi2 DAC5'
                                        */

  /*  Computed Parameter: Comedi2DAC5_P2_Size
   * Referenced by: '<S33>/Comedi2 DAC5'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: chan
                                        * Referenced by: '<S33>/Comedi2 DAC5'
                                        */

  /*  Computed Parameter: Comedi2DAC5_P3_Size
   * Referenced by: '<S33>/Comedi2 DAC5'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S33>/Comedi2 DAC5'
                                        */

  /*  Computed Parameter: Comedi2DAC5_P4_Size
   * Referenced by: '<S33>/Comedi2 DAC5'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S33>/Comedi2 DAC5'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S33>/Gain4'
                                        */

  /*  Computed Parameter: Comedi0DAC0_P1_Size
   * Referenced by: '<S33>/Comedi0 DAC0'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S33>/Comedi0 DAC0'
                                        */

  /*  Computed Parameter: Comedi0DAC0_P2_Size
   * Referenced by: '<S33>/Comedi0 DAC0'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: chan
                                        * Referenced by: '<S33>/Comedi0 DAC0'
                                        */

  /*  Computed Parameter: Comedi0DAC0_P3_Size
   * Referenced by: '<S33>/Comedi0 DAC0'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S33>/Comedi0 DAC0'
                                        */

  /*  Computed Parameter: Comedi0DAC0_P4_Size
   * Referenced by: '<S33>/Comedi0 DAC0'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S33>/Comedi0 DAC0'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S33>/Gain5'
                                        */

  /*  Computed Parameter: Comedi2DAC6_P1_Size
   * Referenced by: '<S33>/Comedi2  DAC6'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: dev
                                        * Referenced by: '<S33>/Comedi2  DAC6'
                                        */

  /*  Computed Parameter: Comedi2DAC6_P2_Size
   * Referenced by: '<S33>/Comedi2  DAC6'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: chan
                                        * Referenced by: '<S33>/Comedi2  DAC6'
                                        */

  /*  Computed Parameter: Comedi2DAC6_P3_Size
   * Referenced by: '<S33>/Comedi2  DAC6'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: range
                                        * Referenced by: '<S33>/Comedi2  DAC6'
                                        */

  /*  Computed Parameter: Comedi2DAC6_P4_Size
   * Referenced by: '<S33>/Comedi2  DAC6'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: aref
                                        * Referenced by: '<S33>/Comedi2  DAC6'
                                        */

  /*  Computed Parameter: Comedi0DO0_P1_Size
   * Referenced by: '<S28>/Comedi0 DO0'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S28>/Comedi0 DO0'
                                        */

  /*  Computed Parameter: Comedi0DO0_P2_Size
   * Referenced by: '<S28>/Comedi0 DO0'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: chan
                                        * Referenced by: '<S28>/Comedi0 DO0'
                                        */

  /*  Computed Parameter: Comedi0DO0_P3_Size
   * Referenced by: '<S28>/Comedi0 DO0'
   */
  { 1.0, 1.0 },
  0.5,                                 /* Expression: threshold
                                        * Referenced by: '<S28>/Comedi0 DO0'
                                        */

  /*  Computed Parameter: Comedi0DO1_P1_Size
   * Referenced by: '<S28>/Comedi0 DO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S28>/Comedi0 DO1'
                                        */

  /*  Computed Parameter: Comedi0DO1_P2_Size
   * Referenced by: '<S28>/Comedi0 DO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chan
                                        * Referenced by: '<S28>/Comedi0 DO1'
                                        */

  /*  Computed Parameter: Comedi0DO1_P3_Size
   * Referenced by: '<S28>/Comedi0 DO1'
   */
  { 1.0, 1.0 },
  0.5,                                 /* Expression: threshold
                                        * Referenced by: '<S28>/Comedi0 DO1'
                                        */

  /*  Computed Parameter: Comedi0DO2_P1_Size
   * Referenced by: '<S28>/Comedi0 DO2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S28>/Comedi0 DO2'
                                        */

  /*  Computed Parameter: Comedi0DO2_P2_Size
   * Referenced by: '<S28>/Comedi0 DO2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: chan
                                        * Referenced by: '<S28>/Comedi0 DO2'
                                        */

  /*  Computed Parameter: Comedi0DO2_P3_Size
   * Referenced by: '<S28>/Comedi0 DO2'
   */
  { 1.0, 1.0 },
  0.5,                                 /* Expression: threshold
                                        * Referenced by: '<S28>/Comedi0 DO2'
                                        */

  /*  Computed Parameter: Comedi0DO3_P1_Size
   * Referenced by: '<S28>/Comedi0 DO3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: dev
                                        * Referenced by: '<S28>/Comedi0 DO3'
                                        */

  /*  Computed Parameter: Comedi0DO3_P2_Size
   * Referenced by: '<S28>/Comedi0 DO3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: chan
                                        * Referenced by: '<S28>/Comedi0 DO3'
                                        */

  /*  Computed Parameter: Comedi0DO3_P3_Size
   * Referenced by: '<S28>/Comedi0 DO3'
   */
  { 1.0, 1.0 },
  0.5,                                 /* Expression: threshold
                                        * Referenced by: '<S28>/Comedi0 DO3'
                                        */

  /*  Expression: tv
   * Referenced by: '<S6>/Look-Up Table'
   */
  { -1.0, 0.0, 30.0, 30.0, 45.0, 45.0, 60.0, 60.0, 75.0, 75.0, 90.0, 90.0, 105.0,
    105.0, 120.0, 120.0, 135.0, 135.0, 150.0, 150.0, 165.0, 165.0, 166.0 },

  /*  Expression: opv
   * Referenced by: '<S6>/Look-Up Table'
   */
  { 0.8, 0.8, 0.8, 1.2, 1.2, 1.0, 1.0, 2.1, 2.1, 2.8, 2.8, 1.4, 1.4, 2.0, 2.0,
    1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 0.8, 0.8 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Hit  Crossing'
                                        */

  /*  Expression: tv
   * Referenced by: '<S7>/Look-Up Table'
   */
  { -1.0, 0.0, 300.0, 300.0, 600.0, 600.0, 900.0, 900.0, 1200.0, 1200.0, 1500.0,
    1500.0, 1800.0, 1800.0, 2100.0, 2100.0, 2400.0, 2400.0, 2700.0, 2700.0,
    3000.0, 3000.0, 3300.0, 3300.0, 3600.0, 3600.0, 3900.0, 3900.0, 4200.0,
    4200.0, 4500.0, 4500.0, 4800.0, 4800.0, 5100.0, 5100.0, 5400.0, 5400.0,
    5401.0 },

  /*  Expression: opv
   * Referenced by: '<S7>/Look-Up Table'
   */
  { 0.7, 0.7, 0.7, 0.75, 0.75, 0.65, 0.65, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7,
    0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7,
    0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Hit  Crossing'
                                        */

  /*  Expression: tv
   * Referenced by: '<S8>/Look-Up Table'
   */
  { -1.0, 0.0, 50.0, 50.0, 75.0, 75.0, 100.0, 100.0, 125.0, 125.0, 150.0, 150.0,
    175.0, 175.0, 200.0, 200.0, 225.0, 225.0, 250.0, 250.0, 275.0, 275.0, 300.0,
    300.0, 325.0, 325.0, 350.0, 350.0, 375.0, 375.0, 400.0, 400.0, 425.0, 425.0,
    450.0, 450.0, 475.0, 475.0, 476.0 },

  /*  Expression: opv
   * Referenced by: '<S8>/Look-Up Table'
   */
  { 0.2, 0.2, 0.2, 0.22, 0.22, 0.2, 0.2, 0.22, 0.22, 0.18, 0.18, 0.2, 0.2, 0.22,
    0.22, 0.18, 0.18, 0.2, 0.2, 0.22, 0.22, 0.18, 0.18, 0.2, 0.2, 0.22, 0.22,
    0.18, 0.18, 0.2, 0.2, 0.2, 0.2, 0.22, 0.22, 0.18, 0.18, 0.2, 0.2 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Hit  Crossing'
                                        */

  /*  Expression: tv
   * Referenced by: '<S9>/Look-Up Table'
   */
  { -1.0, 0.0, 120.0, 120.0, 240.0, 240.0, 360.0, 360.0, 480.0, 480.0, 600.0,
    600.0, 720.0, 720.0, 840.0, 840.0, 960.0, 960.0, 1080.0, 1080.0, 1200.0,
    1200.0, 1320.0, 1320.0, 1440.0, 1440.0, 1560.0, 1560.0, 1680.0, 1680.0,
    1800.0, 1800.0, 1920.0, 1920.0, 2040.0, 2040.0, 2160.0, 2160.0, 2161.0 },

  /*  Expression: opv
   * Referenced by: '<S9>/Look-Up Table'
   */
  { 0.2, 0.2, 0.2, 0.215, 0.215, 0.19, 0.19, 0.2, 0.2, 0.215, 0.215, 0.19, 0.19,
    0.2, 0.2, 0.215, 0.215, 0.19, 0.19, 0.2, 0.2, 0.215, 0.215, 0.19, 0.19, 0.2,
    0.2, 0.215, 0.215, 0.19, 0.19, 0.2, 0.2, 0.2, 0.2, 0.2, 0.2, 0.2, 0.2 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S9>/Hit  Crossing'
                                        */

  /*  Expression: tv
   * Referenced by: '<S10>/Look-Up Table'
   */
  { -1.0, 0.0, 1800.0, 1800.0, 3600.0, 3600.0, 3601.0 },

  /*  Expression: opv
   * Referenced by: '<S10>/Look-Up Table'
   */
  { 0.2, 0.2, 0.2, 0.19, 0.19, 0.2, 0.2 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/Hit  Crossing'
                                        */

  /*  Expression: tv
   * Referenced by: '<S11>/Look-Up Table'
   */
  { -1.0, 0.0, 1800.0, 1800.0, 3600.0, 3600.0, 3601.0 },

  /*  Expression: opv
   * Referenced by: '<S11>/Look-Up Table'
   */
  { 0.2, 0.2, 0.2, 0.18, 0.18, 0.2, 0.2 },
  0.0                                  /* Expression: 0
                                        * Referenced by: '<S11>/Hit  Crossing'
                                        */
};
