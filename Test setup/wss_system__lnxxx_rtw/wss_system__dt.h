/*
 * wss_system__dt.h
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

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&wss_system__B.Comedi0ADC3), 0, 0, 101 }
  ,

  { (char_T *)(&wss_system__DWork.Integ4_DSTATE), 0, 0, 105 },

  { (char_T *)(&wss_system__DWork.Comedi0ADC3_PWORK), 11, 0, 62 },

  { (char_T *)(&wss_system__DWork.Comedi0ADC3_IWORK), 10, 0, 58 },

  { (char_T *)(&wss_system__DWork.Integ4_SYSTEM_ENABLE), 3, 0, 13 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  5U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&wss_system__P.Gain_Gain), 0, 0, 1058 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  1U,
  rtPTransitions
};

/* [EOF] wss_system__dt.h */
