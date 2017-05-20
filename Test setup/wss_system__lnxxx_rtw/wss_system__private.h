/*
 * wss_system__private.h
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
#ifndef RTW_HEADER_wss_system__private_h_
#define RTW_HEADER_wss_system__private_h_
#include "rtwtypes.h"
#include <math.h>
#include <stdlib.h>
#define MAX_DELAY_BUFFER_SIZE          32768
#ifndef ssGetFixedStepSize
#define ssGetFixedStepSize(S)          (S).stepSize
#endif                                 /* ssGetFixedStepSize */

#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#else
#ifdef TMWTYPES_PREVIOUSLY_INCLUDED
#error This file requires rtwtypes.h to be included before tmwtypes.h
#else

/* Check for inclusion of an incorrect version of rtwtypes.h */
#ifndef RTWTYPES_ID_C08S16I32L32N32F1
#error This code was generated with a different "rtwtypes.h" than the file included
#endif                                 /* RTWTYPES_ID_C08S16I32L32N32F1 */
#endif                                 /* TMWTYPES_PREVIOUSLY_INCLUDED */
#endif                                 /* __RTWTYPES_H__ */

int_T rt_WriteMat4FileHeader(FILE *fp,
  int32_T m,
  int32_T n,
  const char_T *name);
extern void sfun_comedi_ai(SimStruct *rts);
extern void sfun_comedi_ao(SimStruct *rts);
extern void sfun_comedi_do(SimStruct *rts);

#endif                                 /* RTW_HEADER_wss_system__private_h_ */
