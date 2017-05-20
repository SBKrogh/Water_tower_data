/*
 * wss_system_.c
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
#include "wss_system__dt.h"

/* Block signals (auto storage) */
BlockIO_wss_system_ wss_system__B;

/* Block states (auto storage) */
D_Work_wss_system_ wss_system__DWork;

/* Real-time model */
RT_MODEL_wss_system_ wss_system__M_;
RT_MODEL_wss_system_ *const wss_system__M = &wss_system__M_;

/*
 * Writes out MAT-file header.  Returns success or failure.
 * Returns:
 *      0 - success
 *      1 - failure
 */
int_T rt_WriteMat4FileHeader(FILE *fp, int32_T m, int32_T n, const char *name)
{
  typedef enum { ELITTLE_ENDIAN, EBIG_ENDIAN } ByteOrder;

  int16_T one = 1;
  ByteOrder byteOrder = (*((int8_T *)&one)==1) ? ELITTLE_ENDIAN : EBIG_ENDIAN;
  int32_T type = (byteOrder == ELITTLE_ENDIAN) ? 0: 1000;
  int32_T imagf = 0;
  int32_T name_len = strlen(name) + 1;
  if ((fwrite(&type, sizeof(int32_T), 1, fp) == 0) ||
      (fwrite(&m, sizeof(int32_T), 1, fp) == 0) ||
      (fwrite(&n, sizeof(int32_T), 1, fp) == 0) ||
      (fwrite(&imagf, sizeof(int32_T), 1, fp) == 0) ||
      (fwrite(&name_len, sizeof(int32_T), 1, fp) == 0) ||
      (fwrite(name, sizeof(char), name_len, fp) == 0)) {
    return(1);
  } else {
    return(0);
  }
}                                      /* end rt_WriteMat4FileHeader */

/* Model output function */
void wss_system__output(void)
{
  /* local block i/o variables */
  real_T rtb_TmpSignalConversionAtToFile[4];
  real_T rtb_Clock;
  real_T rtb_DiscreteTimeIntegrator;
  real_T rtb_Add1_k;
  real_T rtb_Add1_e;
  real_T rtb_Add1_c3;

  /* Level2 S-Function Block: '<S27>/Comedi0 ADC3' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[0];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S27>/Gain' */
  wss_system__B.Gain = wss_system__P.Gain_Gain_mf * wss_system__B.Comedi0ADC3;

  /* DiscreteIntegrator: '<S17>/Integ4' */
  if (wss_system__DWork.Integ4_SYSTEM_ENABLE != 0) {
    wss_system__B.Integ4 = wss_system__DWork.Integ4_DSTATE;
  } else {
    wss_system__B.Integ4 = wss_system__P.Integ4_gainval * wss_system__B.Gain +
      wss_system__DWork.Integ4_DSTATE;
  }

  /* End of DiscreteIntegrator: '<S17>/Integ4' */
  /* S-Function block: <S21>/S-Function  */
  {
    int_T indDelayed;
    int_T discreteDelay;

    /* Input present value(s) */
    ((real_T *)wss_system__DWork.SFunction_PWORK.uBuffers)
      [wss_system__DWork.SFunction_IWORK.indEnd] = wss_system__B.Integ4;

    /* Calculate delayed index */
    discreteDelay =
      (int_T)floor((wss_system__P.K1_Value/0.05) + 0.5);
    if (discreteDelay > wss_system__DWork.SFunction_IWORK.maxDiscrDelay)
      discreteDelay = wss_system__DWork.SFunction_IWORK.maxDiscrDelay;
    indDelayed = wss_system__DWork.SFunction_IWORK.indEnd - ((discreteDelay > 0)
      ? discreteDelay : 0);
    if (indDelayed < 0) {
      if (wss_system__DWork.SFunction_IWORK.indBeg == 0 )
        indDelayed = 0;
      else
        indDelayed += wss_system__DWork.SFunction_IWORK.bufSz;
    }

    /* Output past value(s) */
    wss_system__B.SFunction = ((real_T *)
      wss_system__DWork.SFunction_PWORK.uBuffers)[indDelayed];
  }

  /* Step: '<S17>/Step' */
  if (wss_system__M->Timing.t[1] < wss_system__P.Step_Time) {
    rtb_Add1_k = wss_system__P.Step_Y0;
  } else {
    rtb_Add1_k = wss_system__P.Step_YFinal;
  }

  /* End of Step: '<S17>/Step' */

  /* Switch: '<S17>/Switch' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S17>/K2'
   *  Gain: '<S17>/Gain'
   *  Gain: '<S17>/Gain1'
   *  Product: '<S17>/Product'
   *  Sum: '<S17>/Sum1'
   *  Sum: '<S17>/Sum5'
   *  Sum: '<S17>/Sum7'
   *  UnitDelay: '<S17>/Unit Delay'
   */
  if (rtb_Add1_k >= wss_system__P.Switch_Threshold) {
    wss_system__B.Switch = (wss_system__B.Integ4 - wss_system__B.SFunction) *
      wss_system__P.K2_Value + (wss_system__P.Gain1_Gain * wss_system__B.Gain -
      wss_system__P.Gain_Gain * wss_system__DWork.UnitDelay_DSTATE);
  } else {
    wss_system__B.Switch = wss_system__P.Constant_Value;
  }

  /* End of Switch: '<S17>/Switch' */

  /* Level2 S-Function Block: '<S27>/Comedi0 ADC4' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[1];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S27>/Gain1' */
  wss_system__B.Gain1 = wss_system__P.Gain1_Gain_d * wss_system__B.Comedi0ADC4;

  /* DiscreteIntegrator: '<S18>/Integ4' */
  if (wss_system__DWork.Integ4_SYSTEM_ENABLE_f != 0) {
    wss_system__B.Integ4_f = wss_system__DWork.Integ4_DSTATE_g;
  } else {
    wss_system__B.Integ4_f = wss_system__P.Integ4_gainval_d *
      wss_system__B.Gain1 + wss_system__DWork.Integ4_DSTATE_g;
  }

  /* End of DiscreteIntegrator: '<S18>/Integ4' */
  /* S-Function block: <S22>/S-Function  */
  {
    int_T indDelayed;
    int_T discreteDelay;

    /* Input present value(s) */
    ((real_T *)wss_system__DWork.SFunction_PWORK_f.uBuffers)
      [wss_system__DWork.SFunction_IWORK_a.indEnd] = wss_system__B.Integ4_f;

    /* Calculate delayed index */
    discreteDelay =
      (int_T)floor((wss_system__P.K1_Value_f/0.05) + 0.5);
    if (discreteDelay > wss_system__DWork.SFunction_IWORK_a.maxDiscrDelay)
      discreteDelay = wss_system__DWork.SFunction_IWORK_a.maxDiscrDelay;
    indDelayed = wss_system__DWork.SFunction_IWORK_a.indEnd - ((discreteDelay >
      0) ? discreteDelay : 0);
    if (indDelayed < 0) {
      if (wss_system__DWork.SFunction_IWORK_a.indBeg == 0 )
        indDelayed = 0;
      else
        indDelayed += wss_system__DWork.SFunction_IWORK_a.bufSz;
    }

    /* Output past value(s) */
    wss_system__B.SFunction_d = ((real_T *)
      wss_system__DWork.SFunction_PWORK_f.uBuffers)[indDelayed];
  }

  /* Step: '<S18>/Step' */
  if (wss_system__M->Timing.t[1] < wss_system__P.Step_Time_o) {
    rtb_Add1_k = wss_system__P.Step_Y0_n;
  } else {
    rtb_Add1_k = wss_system__P.Step_YFinal_g;
  }

  /* End of Step: '<S18>/Step' */

  /* Switch: '<S18>/Switch' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S18>/K2'
   *  Gain: '<S18>/Gain'
   *  Gain: '<S18>/Gain1'
   *  Product: '<S18>/Product'
   *  Sum: '<S18>/Sum1'
   *  Sum: '<S18>/Sum5'
   *  Sum: '<S18>/Sum7'
   *  UnitDelay: '<S18>/Unit Delay'
   */
  if (rtb_Add1_k >= wss_system__P.Switch_Threshold_m) {
    wss_system__B.Switch_d = (wss_system__B.Integ4_f - wss_system__B.SFunction_d)
      * wss_system__P.K2_Value_i + (wss_system__P.Gain1_Gain_m *
      wss_system__B.Gain1 - wss_system__P.Gain_Gain_n *
      wss_system__DWork.UnitDelay_DSTATE_n);
  } else {
    wss_system__B.Switch_d = wss_system__P.Constant_Value_g;
  }

  /* End of Switch: '<S18>/Switch' */

  /* Level2 S-Function Block: '<S27>/Comedi2 ADC4' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[2];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S27>/Gain2' */
  wss_system__B.Gain2 = wss_system__P.Gain2_Gain * wss_system__B.Comedi2ADC4;

  /* DiscreteIntegrator: '<S19>/Integ4' */
  if (wss_system__DWork.Integ4_SYSTEM_ENABLE_e != 0) {
    wss_system__B.Integ4_d = wss_system__DWork.Integ4_DSTATE_d;
  } else {
    wss_system__B.Integ4_d = wss_system__P.Integ4_gainval_m *
      wss_system__B.Gain2 + wss_system__DWork.Integ4_DSTATE_d;
  }

  /* End of DiscreteIntegrator: '<S19>/Integ4' */
  /* S-Function block: <S23>/S-Function  */
  {
    int_T indDelayed;
    int_T discreteDelay;

    /* Input present value(s) */
    ((real_T *)wss_system__DWork.SFunction_PWORK_c.uBuffers)
      [wss_system__DWork.SFunction_IWORK_b.indEnd] = wss_system__B.Integ4_d;

    /* Calculate delayed index */
    discreteDelay =
      (int_T)floor((wss_system__P.K1_Value_n/0.05) + 0.5);
    if (discreteDelay > wss_system__DWork.SFunction_IWORK_b.maxDiscrDelay)
      discreteDelay = wss_system__DWork.SFunction_IWORK_b.maxDiscrDelay;
    indDelayed = wss_system__DWork.SFunction_IWORK_b.indEnd - ((discreteDelay >
      0) ? discreteDelay : 0);
    if (indDelayed < 0) {
      if (wss_system__DWork.SFunction_IWORK_b.indBeg == 0 )
        indDelayed = 0;
      else
        indDelayed += wss_system__DWork.SFunction_IWORK_b.bufSz;
    }

    /* Output past value(s) */
    wss_system__B.SFunction_j = ((real_T *)
      wss_system__DWork.SFunction_PWORK_c.uBuffers)[indDelayed];
  }

  /* Step: '<S19>/Step' */
  if (wss_system__M->Timing.t[1] < wss_system__P.Step_Time_c) {
    rtb_Add1_k = wss_system__P.Step_Y0_b;
  } else {
    rtb_Add1_k = wss_system__P.Step_YFinal_o;
  }

  /* End of Step: '<S19>/Step' */

  /* Switch: '<S19>/Switch' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S19>/K2'
   *  Gain: '<S19>/Gain'
   *  Gain: '<S19>/Gain1'
   *  Product: '<S19>/Product'
   *  Sum: '<S19>/Sum1'
   *  Sum: '<S19>/Sum5'
   *  Sum: '<S19>/Sum7'
   *  UnitDelay: '<S19>/Unit Delay'
   */
  if (rtb_Add1_k >= wss_system__P.Switch_Threshold_a) {
    wss_system__B.Switch_k = (wss_system__B.Integ4_d - wss_system__B.SFunction_j)
      * wss_system__P.K2_Value_b + (wss_system__P.Gain1_Gain_b *
      wss_system__B.Gain2 - wss_system__P.Gain_Gain_d *
      wss_system__DWork.UnitDelay_DSTATE_e);
  } else {
    wss_system__B.Switch_k = wss_system__P.Constant_Value_o;
  }

  /* End of Switch: '<S19>/Switch' */

  /* Level2 S-Function Block: '<S27>/Comedi2 ADC5' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[3];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S27>/Gain3' */
  wss_system__B.Gain3 = wss_system__P.Gain3_Gain * wss_system__B.Comedi2ADC5;

  /* DiscreteIntegrator: '<S20>/Integ4' */
  if (wss_system__DWork.Integ4_SYSTEM_ENABLE_g != 0) {
    wss_system__B.Integ4_ff = wss_system__DWork.Integ4_DSTATE_h;
  } else {
    wss_system__B.Integ4_ff = wss_system__P.Integ4_gainval_g *
      wss_system__B.Gain3 + wss_system__DWork.Integ4_DSTATE_h;
  }

  /* End of DiscreteIntegrator: '<S20>/Integ4' */
  /* S-Function block: <S24>/S-Function  */
  {
    int_T indDelayed;
    int_T discreteDelay;

    /* Input present value(s) */
    ((real_T *)wss_system__DWork.SFunction_PWORK_a.uBuffers)
      [wss_system__DWork.SFunction_IWORK_o.indEnd] = wss_system__B.Integ4_ff;

    /* Calculate delayed index */
    discreteDelay =
      (int_T)floor((wss_system__P.K1_Value_o/0.05) + 0.5);
    if (discreteDelay > wss_system__DWork.SFunction_IWORK_o.maxDiscrDelay)
      discreteDelay = wss_system__DWork.SFunction_IWORK_o.maxDiscrDelay;
    indDelayed = wss_system__DWork.SFunction_IWORK_o.indEnd - ((discreteDelay >
      0) ? discreteDelay : 0);
    if (indDelayed < 0) {
      if (wss_system__DWork.SFunction_IWORK_o.indBeg == 0 )
        indDelayed = 0;
      else
        indDelayed += wss_system__DWork.SFunction_IWORK_o.bufSz;
    }

    /* Output past value(s) */
    wss_system__B.SFunction_dm = ((real_T *)
      wss_system__DWork.SFunction_PWORK_a.uBuffers)[indDelayed];
  }

  /* Step: '<S20>/Step' */
  if (wss_system__M->Timing.t[1] < wss_system__P.Step_Time_l) {
    rtb_Add1_k = wss_system__P.Step_Y0_f;
  } else {
    rtb_Add1_k = wss_system__P.Step_YFinal_i;
  }

  /* End of Step: '<S20>/Step' */

  /* Switch: '<S20>/Switch' incorporates:
   *  Constant: '<S20>/Constant'
   *  Constant: '<S20>/K2'
   *  Gain: '<S20>/Gain'
   *  Gain: '<S20>/Gain1'
   *  Product: '<S20>/Product'
   *  Sum: '<S20>/Sum1'
   *  Sum: '<S20>/Sum5'
   *  Sum: '<S20>/Sum7'
   *  UnitDelay: '<S20>/Unit Delay'
   */
  if (rtb_Add1_k >= wss_system__P.Switch_Threshold_k) {
    wss_system__B.Switch_a = (wss_system__B.Integ4_ff -
      wss_system__B.SFunction_dm) * wss_system__P.K2_Value_e +
      (wss_system__P.Gain1_Gain_c * wss_system__B.Gain3 -
       wss_system__P.Gain_Gain_l * wss_system__DWork.UnitDelay_DSTATE_b);
  } else {
    wss_system__B.Switch_a = wss_system__P.Constant_Value_b;
  }

  /* End of Switch: '<S20>/Switch' */

  /* Level2 S-Function Block: '<S31>/Comedi2 ADC0' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[4];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S31>/Gain' incorporates:
   *  Constant: '<S31>/Constant'
   *  Sum: '<S31>/Add'
   */
  wss_system__B.Gain_n = (wss_system__B.Comedi2ADC0 -
    wss_system__P.Constant_Value_oh) * wss_system__P.Gain_Gain_b;

  /* DiscreteIntegrator: '<S45>/Integ4' */
  if (wss_system__DWork.Integ4_SYSTEM_ENABLE_fl != 0) {
    wss_system__B.Integ4_a = wss_system__DWork.Integ4_DSTATE_a;
  } else {
    wss_system__B.Integ4_a = wss_system__P.Integ4_gainval_k *
      wss_system__B.Gain_n + wss_system__DWork.Integ4_DSTATE_a;
  }

  /* End of DiscreteIntegrator: '<S45>/Integ4' */
  /* S-Function block: <S49>/S-Function  */
  {
    int_T indDelayed;
    int_T discreteDelay;

    /* Input present value(s) */
    ((real_T *)wss_system__DWork.SFunction_PWORK_i.uBuffers)
      [wss_system__DWork.SFunction_IWORK_aa.indEnd] = wss_system__B.Integ4_a;

    /* Calculate delayed index */
    discreteDelay =
      (int_T)floor((wss_system__P.K1_Value_i/0.05) + 0.5);
    if (discreteDelay > wss_system__DWork.SFunction_IWORK_aa.maxDiscrDelay)
      discreteDelay = wss_system__DWork.SFunction_IWORK_aa.maxDiscrDelay;
    indDelayed = wss_system__DWork.SFunction_IWORK_aa.indEnd - ((discreteDelay >
      0) ? discreteDelay : 0);
    if (indDelayed < 0) {
      if (wss_system__DWork.SFunction_IWORK_aa.indBeg == 0 )
        indDelayed = 0;
      else
        indDelayed += wss_system__DWork.SFunction_IWORK_aa.bufSz;
    }

    /* Output past value(s) */
    wss_system__B.SFunction_jd = ((real_T *)
      wss_system__DWork.SFunction_PWORK_i.uBuffers)[indDelayed];
  }

  /* Step: '<S45>/Step' */
  if (wss_system__M->Timing.t[1] < wss_system__P.Step_Time_ow) {
    rtb_Add1_k = wss_system__P.Step_Y0_e;
  } else {
    rtb_Add1_k = wss_system__P.Step_YFinal_e;
  }

  /* End of Step: '<S45>/Step' */

  /* Switch: '<S45>/Switch' incorporates:
   *  Constant: '<S45>/Constant'
   *  Constant: '<S45>/K2'
   *  Gain: '<S45>/Gain'
   *  Gain: '<S45>/Gain1'
   *  Product: '<S45>/Product'
   *  Sum: '<S45>/Sum1'
   *  Sum: '<S45>/Sum5'
   *  Sum: '<S45>/Sum7'
   *  UnitDelay: '<S45>/Unit Delay'
   */
  if (rtb_Add1_k >= wss_system__P.Switch_Threshold_i) {
    rtb_Add1_c3 = (wss_system__B.Integ4_a - wss_system__B.SFunction_jd) *
      wss_system__P.K2_Value_iq + (wss_system__P.Gain1_Gain_i *
      wss_system__B.Gain_n - wss_system__P.Gain_Gain_j *
      wss_system__DWork.UnitDelay_DSTATE_c);
  } else {
    rtb_Add1_c3 = wss_system__P.Constant_Value_j;
  }

  /* End of Switch: '<S45>/Switch' */

  /* Level2 S-Function Block: '<S31>/Comedi0 ADC1' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[5];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S31>/Gain1' incorporates:
   *  Constant: '<S31>/Constant1'
   *  Sum: '<S31>/Add1'
   */
  wss_system__B.Gain1_d = (wss_system__B.Comedi0ADC1 -
    wss_system__P.Constant1_Value) * wss_system__P.Gain1_Gain_cg;

  /* DiscreteIntegrator: '<S42>/Integ4' */
  if (wss_system__DWork.Integ4_SYSTEM_ENABLE_o != 0) {
    wss_system__B.Integ4_b = wss_system__DWork.Integ4_DSTATE_j;
  } else {
    wss_system__B.Integ4_b = wss_system__P.Integ4_gainval_p *
      wss_system__B.Gain1_d + wss_system__DWork.Integ4_DSTATE_j;
  }

  /* End of DiscreteIntegrator: '<S42>/Integ4' */
  /* S-Function block: <S46>/S-Function  */
  {
    int_T indDelayed;
    int_T discreteDelay;

    /* Input present value(s) */
    ((real_T *)wss_system__DWork.SFunction_PWORK_j.uBuffers)
      [wss_system__DWork.SFunction_IWORK_f.indEnd] = wss_system__B.Integ4_b;

    /* Calculate delayed index */
    discreteDelay =
      (int_T)floor((wss_system__P.K1_Value_a/0.05) + 0.5);
    if (discreteDelay > wss_system__DWork.SFunction_IWORK_f.maxDiscrDelay)
      discreteDelay = wss_system__DWork.SFunction_IWORK_f.maxDiscrDelay;
    indDelayed = wss_system__DWork.SFunction_IWORK_f.indEnd - ((discreteDelay >
      0) ? discreteDelay : 0);
    if (indDelayed < 0) {
      if (wss_system__DWork.SFunction_IWORK_f.indBeg == 0 )
        indDelayed = 0;
      else
        indDelayed += wss_system__DWork.SFunction_IWORK_f.bufSz;
    }

    /* Output past value(s) */
    wss_system__B.SFunction_l = ((real_T *)
      wss_system__DWork.SFunction_PWORK_j.uBuffers)[indDelayed];
  }

  /* Step: '<S42>/Step' */
  if (wss_system__M->Timing.t[1] < wss_system__P.Step_Time_b) {
    rtb_Add1_k = wss_system__P.Step_Y0_f4;
  } else {
    rtb_Add1_k = wss_system__P.Step_YFinal_ol;
  }

  /* End of Step: '<S42>/Step' */

  /* Switch: '<S42>/Switch' incorporates:
   *  Constant: '<S42>/Constant'
   *  Constant: '<S42>/K2'
   *  Gain: '<S42>/Gain'
   *  Gain: '<S42>/Gain1'
   *  Product: '<S42>/Product'
   *  Sum: '<S42>/Sum1'
   *  Sum: '<S42>/Sum5'
   *  Sum: '<S42>/Sum7'
   *  UnitDelay: '<S42>/Unit Delay'
   */
  if (rtb_Add1_k >= wss_system__P.Switch_Threshold_l) {
    rtb_Add1_e = (wss_system__B.Integ4_b - wss_system__B.SFunction_l) *
      wss_system__P.K2_Value_j + (wss_system__P.Gain1_Gain_l *
      wss_system__B.Gain1_d - wss_system__P.Gain_Gain_hw *
      wss_system__DWork.UnitDelay_DSTATE_k);
  } else {
    rtb_Add1_e = wss_system__P.Constant_Value_l;
  }

  /* End of Switch: '<S42>/Switch' */

  /* Level2 S-Function Block: '<S31>/Comedi2 ADC1' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[6];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S31>/Gain2' incorporates:
   *  Constant: '<S31>/Constant2'
   *  Sum: '<S31>/Add2'
   */
  wss_system__B.Gain2_h = (wss_system__B.Comedi2ADC1 -
    wss_system__P.Constant2_Value) * wss_system__P.Gain2_Gain_o;

  /* DiscreteIntegrator: '<S43>/Integ4' */
  if (wss_system__DWork.Integ4_SYSTEM_ENABLE_k != 0) {
    wss_system__B.Integ4_l = wss_system__DWork.Integ4_DSTATE_k;
  } else {
    wss_system__B.Integ4_l = wss_system__P.Integ4_gainval_gu *
      wss_system__B.Gain2_h + wss_system__DWork.Integ4_DSTATE_k;
  }

  /* End of DiscreteIntegrator: '<S43>/Integ4' */
  /* S-Function block: <S47>/S-Function  */
  {
    int_T indDelayed;
    int_T discreteDelay;

    /* Input present value(s) */
    ((real_T *)wss_system__DWork.SFunction_PWORK_n.uBuffers)
      [wss_system__DWork.SFunction_IWORK_l.indEnd] = wss_system__B.Integ4_l;

    /* Calculate delayed index */
    discreteDelay =
      (int_T)floor((wss_system__P.K1_Value_nt/0.05) + 0.5);
    if (discreteDelay > wss_system__DWork.SFunction_IWORK_l.maxDiscrDelay)
      discreteDelay = wss_system__DWork.SFunction_IWORK_l.maxDiscrDelay;
    indDelayed = wss_system__DWork.SFunction_IWORK_l.indEnd - ((discreteDelay >
      0) ? discreteDelay : 0);
    if (indDelayed < 0) {
      if (wss_system__DWork.SFunction_IWORK_l.indBeg == 0 )
        indDelayed = 0;
      else
        indDelayed += wss_system__DWork.SFunction_IWORK_l.bufSz;
    }

    /* Output past value(s) */
    wss_system__B.SFunction_b = ((real_T *)
      wss_system__DWork.SFunction_PWORK_n.uBuffers)[indDelayed];
  }

  /* Step: '<S43>/Step' */
  if (wss_system__M->Timing.t[1] < wss_system__P.Step_Time_lb) {
    rtb_Add1_k = wss_system__P.Step_Y0_d;
  } else {
    rtb_Add1_k = wss_system__P.Step_YFinal_n;
  }

  /* End of Step: '<S43>/Step' */

  /* Switch: '<S43>/Switch' incorporates:
   *  Constant: '<S43>/Constant'
   *  Constant: '<S43>/K2'
   *  Gain: '<S43>/Gain'
   *  Gain: '<S43>/Gain1'
   *  Product: '<S43>/Product'
   *  Sum: '<S43>/Sum1'
   *  Sum: '<S43>/Sum5'
   *  Sum: '<S43>/Sum7'
   *  UnitDelay: '<S43>/Unit Delay'
   */
  if (rtb_Add1_k >= wss_system__P.Switch_Threshold_m4) {
    rtb_Add1_k = (wss_system__B.Integ4_l - wss_system__B.SFunction_b) *
      wss_system__P.K2_Value_f + (wss_system__P.Gain1_Gain_kj *
      wss_system__B.Gain2_h - wss_system__P.Gain_Gain_fm *
      wss_system__DWork.UnitDelay_DSTATE_d);
  } else {
    rtb_Add1_k = wss_system__P.Constant_Value_jd;
  }

  /* End of Switch: '<S43>/Switch' */

  /* Level2 S-Function Block: '<S31>/Comedi2 ADC2' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[7];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S31>/Gain3' incorporates:
   *  Constant: '<S31>/Constant3'
   *  Sum: '<S31>/Add3'
   */
  wss_system__B.Gain3_k = (wss_system__B.Comedi2ADC2 -
    wss_system__P.Constant3_Value) * wss_system__P.Gain3_Gain_a;

  /* DiscreteIntegrator: '<S44>/Integ4' */
  if (wss_system__DWork.Integ4_SYSTEM_ENABLE_a != 0) {
    wss_system__B.Integ4_b2 = wss_system__DWork.Integ4_DSTATE_b;
  } else {
    wss_system__B.Integ4_b2 = wss_system__P.Integ4_gainval_de *
      wss_system__B.Gain3_k + wss_system__DWork.Integ4_DSTATE_b;
  }

  /* End of DiscreteIntegrator: '<S44>/Integ4' */
  /* S-Function block: <S48>/S-Function  */
  {
    int_T indDelayed;
    int_T discreteDelay;

    /* Input present value(s) */
    ((real_T *)wss_system__DWork.SFunction_PWORK_g.uBuffers)
      [wss_system__DWork.SFunction_IWORK_ob.indEnd] = wss_system__B.Integ4_b2;

    /* Calculate delayed index */
    discreteDelay =
      (int_T)floor((wss_system__P.K1_Value_av/0.05) + 0.5);
    if (discreteDelay > wss_system__DWork.SFunction_IWORK_ob.maxDiscrDelay)
      discreteDelay = wss_system__DWork.SFunction_IWORK_ob.maxDiscrDelay;
    indDelayed = wss_system__DWork.SFunction_IWORK_ob.indEnd - ((discreteDelay >
      0) ? discreteDelay : 0);
    if (indDelayed < 0) {
      if (wss_system__DWork.SFunction_IWORK_ob.indBeg == 0 )
        indDelayed = 0;
      else
        indDelayed += wss_system__DWork.SFunction_IWORK_ob.bufSz;
    }

    /* Output past value(s) */
    wss_system__B.SFunction_m = ((real_T *)
      wss_system__DWork.SFunction_PWORK_g.uBuffers)[indDelayed];
  }

  /* SignalConversion: '<Root>/TmpSignal ConversionAtTo FileInport1' */
  rtb_TmpSignalConversionAtToFile[0] = rtb_Add1_c3;
  rtb_TmpSignalConversionAtToFile[1] = rtb_Add1_e;
  rtb_TmpSignalConversionAtToFile[2] = rtb_Add1_k;

  /* Step: '<S44>/Step' */
  if (wss_system__M->Timing.t[1] < wss_system__P.Step_Time_j) {
    rtb_Add1_k = wss_system__P.Step_Y0_h;
  } else {
    rtb_Add1_k = wss_system__P.Step_YFinal_m;
  }

  /* End of Step: '<S44>/Step' */

  /* Switch: '<S44>/Switch' */
  if (rtb_Add1_k >= wss_system__P.Switch_Threshold_h) {
    /* SignalConversion: '<Root>/TmpSignal ConversionAtTo FileInport1' incorporates:
     *  Constant: '<S44>/K2'
     *  Gain: '<S44>/Gain'
     *  Gain: '<S44>/Gain1'
     *  Product: '<S44>/Product'
     *  Sum: '<S44>/Sum1'
     *  Sum: '<S44>/Sum5'
     *  Sum: '<S44>/Sum7'
     *  UnitDelay: '<S44>/Unit Delay'
     */
    rtb_TmpSignalConversionAtToFile[3] = (wss_system__B.Integ4_b2 -
      wss_system__B.SFunction_m) * wss_system__P.K2_Value_o +
      (wss_system__P.Gain1_Gain_f * wss_system__B.Gain3_k -
       wss_system__P.Gain_Gain_k * wss_system__DWork.UnitDelay_DSTATE_p);
  } else {
    /* SignalConversion: '<Root>/TmpSignal ConversionAtTo FileInport1' incorporates:
     *  Constant: '<S44>/Constant'
     */
    rtb_TmpSignalConversionAtToFile[3] = wss_system__P.Constant_Value_h;
  }

  /* End of Switch: '<S44>/Switch' */

  /* ToFile: '<Root>/To File' */
  {
    if (!(++wss_system__DWork.ToFile_IWORK.Decimation % 1) &&
        (wss_system__DWork.ToFile_IWORK.Count*5)+1 < 100000000 ) {
      FILE *fp = (FILE *) wss_system__DWork.ToFile_PWORK.FilePtr;
      if (fp != (NULL)) {
        real_T u[5];
        wss_system__DWork.ToFile_IWORK.Decimation = 0;
        u[0] = wss_system__M->Timing.t[1];
        u[1] = rtb_TmpSignalConversionAtToFile[0];
        u[2] = rtb_TmpSignalConversionAtToFile[1];
        u[3] = rtb_TmpSignalConversionAtToFile[2];
        u[4] = rtb_TmpSignalConversionAtToFile[3];
        if (fwrite(u, sizeof(real_T), 5, fp) != 5) {
          rtmSetErrorStatus(wss_system__M, "Error writing to MAT-file ring.mat");
          return;
        }

        if (((++wss_system__DWork.ToFile_IWORK.Count)*5)+1 >= 100000000) {
          (void)fprintf(stdout,
                        "*** The ToFile block will stop logging data before\n"
                        "    the simulation has ended, because it has reached\n"
                        "    the maximum number of elements (100000000)\n"
                        "    allowed in MAT-file ring.mat.\n");
        }
      }
    }
  }

  /* Level2 S-Function Block: '<S30>/Comedi2 ADC7' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[8];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S30>/Gain' incorporates:
   *  Constant: '<S30>/Constant'
   *  Sum: '<S30>/Add'
   */
  wss_system__B.Gain_i = (wss_system__B.Comedi2ADC7 -
    wss_system__P.Constant_Value_k) * wss_system__P.Gain_Gain_jj;

  /* DiscreteIntegrator: '<S37>/Integ4' */
  if (wss_system__DWork.Integ4_SYSTEM_ENABLE_d != 0) {
    wss_system__B.Integ4_e = wss_system__DWork.Integ4_DSTATE_hy;
  } else {
    wss_system__B.Integ4_e = wss_system__P.Integ4_gainval_e *
      wss_system__B.Gain_i + wss_system__DWork.Integ4_DSTATE_hy;
  }

  /* End of DiscreteIntegrator: '<S37>/Integ4' */
  /* S-Function block: <S41>/S-Function  */
  {
    int_T indDelayed;
    int_T discreteDelay;

    /* Input present value(s) */
    ((real_T *)wss_system__DWork.SFunction_PWORK_b.uBuffers)
      [wss_system__DWork.SFunction_IWORK_fw.indEnd] = wss_system__B.Integ4_e;

    /* Calculate delayed index */
    discreteDelay =
      (int_T)floor((wss_system__P.K1_Value_c/0.05) + 0.5);
    if (discreteDelay > wss_system__DWork.SFunction_IWORK_fw.maxDiscrDelay)
      discreteDelay = wss_system__DWork.SFunction_IWORK_fw.maxDiscrDelay;
    indDelayed = wss_system__DWork.SFunction_IWORK_fw.indEnd - ((discreteDelay >
      0) ? discreteDelay : 0);
    if (indDelayed < 0) {
      if (wss_system__DWork.SFunction_IWORK_fw.indBeg == 0 )
        indDelayed = 0;
      else
        indDelayed += wss_system__DWork.SFunction_IWORK_fw.bufSz;
    }

    /* Output past value(s) */
    wss_system__B.SFunction_bt = ((real_T *)
      wss_system__DWork.SFunction_PWORK_b.uBuffers)[indDelayed];
  }

  /* Step: '<S37>/Step' */
  if (wss_system__M->Timing.t[1] < wss_system__P.Step_Time_i) {
    rtb_Add1_k = wss_system__P.Step_Y0_j;
  } else {
    rtb_Add1_k = wss_system__P.Step_YFinal_d;
  }

  /* End of Step: '<S37>/Step' */

  /* Switch: '<S37>/Switch' incorporates:
   *  Constant: '<S37>/Constant'
   *  Constant: '<S37>/K2'
   *  Gain: '<S37>/Gain'
   *  Gain: '<S37>/Gain1'
   *  Product: '<S37>/Product'
   *  Sum: '<S37>/Sum1'
   *  Sum: '<S37>/Sum5'
   *  Sum: '<S37>/Sum7'
   *  UnitDelay: '<S37>/Unit Delay'
   */
  if (rtb_Add1_k >= wss_system__P.Switch_Threshold_j) {
    wss_system__B.Switch_n = (wss_system__B.Integ4_e -
      wss_system__B.SFunction_bt) * wss_system__P.K2_Value_k +
      (wss_system__P.Gain1_Gain_e * wss_system__B.Gain_i -
       wss_system__P.Gain_Gain_h * wss_system__DWork.UnitDelay_DSTATE_f);
  } else {
    wss_system__B.Switch_n = wss_system__P.Constant_Value_f;
  }

  /* End of Switch: '<S37>/Switch' */

  /* Level2 S-Function Block: '<S30>/Comedi0 ADC7' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[9];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S30>/Gain1' incorporates:
   *  Constant: '<S30>/Constant1'
   *  Sum: '<S30>/Add1'
   */
  wss_system__B.Gain1_i = (wss_system__B.Comedi0ADC7 -
    wss_system__P.Constant1_Value_g) * wss_system__P.Gain1_Gain_p;

  /* DiscreteIntegrator: '<S34>/Integ4' */
  if (wss_system__DWork.Integ4_SYSTEM_ENABLE_df != 0) {
    wss_system__B.Integ4_o = wss_system__DWork.Integ4_DSTATE_e;
  } else {
    wss_system__B.Integ4_o = wss_system__P.Integ4_gainval_a *
      wss_system__B.Gain1_i + wss_system__DWork.Integ4_DSTATE_e;
  }

  /* End of DiscreteIntegrator: '<S34>/Integ4' */
  /* S-Function block: <S38>/S-Function  */
  {
    int_T indDelayed;
    int_T discreteDelay;

    /* Input present value(s) */
    ((real_T *)wss_system__DWork.SFunction_PWORK_l.uBuffers)
      [wss_system__DWork.SFunction_IWORK_e.indEnd] = wss_system__B.Integ4_o;

    /* Calculate delayed index */
    discreteDelay =
      (int_T)floor((wss_system__P.K1_Value_oa/0.05) + 0.5);
    if (discreteDelay > wss_system__DWork.SFunction_IWORK_e.maxDiscrDelay)
      discreteDelay = wss_system__DWork.SFunction_IWORK_e.maxDiscrDelay;
    indDelayed = wss_system__DWork.SFunction_IWORK_e.indEnd - ((discreteDelay >
      0) ? discreteDelay : 0);
    if (indDelayed < 0) {
      if (wss_system__DWork.SFunction_IWORK_e.indBeg == 0 )
        indDelayed = 0;
      else
        indDelayed += wss_system__DWork.SFunction_IWORK_e.bufSz;
    }

    /* Output past value(s) */
    wss_system__B.SFunction_dl = ((real_T *)
      wss_system__DWork.SFunction_PWORK_l.uBuffers)[indDelayed];
  }

  /* Step: '<S34>/Step' */
  if (wss_system__M->Timing.t[1] < wss_system__P.Step_Time_m) {
    rtb_Add1_k = wss_system__P.Step_Y0_k;
  } else {
    rtb_Add1_k = wss_system__P.Step_YFinal_gg;
  }

  /* End of Step: '<S34>/Step' */

  /* Switch: '<S34>/Switch' incorporates:
   *  Constant: '<S34>/Constant'
   *  Constant: '<S34>/K2'
   *  Gain: '<S34>/Gain'
   *  Gain: '<S34>/Gain1'
   *  Product: '<S34>/Product'
   *  Sum: '<S34>/Sum1'
   *  Sum: '<S34>/Sum5'
   *  Sum: '<S34>/Sum7'
   *  UnitDelay: '<S34>/Unit Delay'
   */
  if (rtb_Add1_k >= wss_system__P.Switch_Threshold_d) {
    wss_system__B.Switch_l = (wss_system__B.Integ4_o -
      wss_system__B.SFunction_dl) * wss_system__P.K2_Value_l +
      (wss_system__P.Gain1_Gain_a * wss_system__B.Gain1_i -
       wss_system__P.Gain_Gain_f * wss_system__DWork.UnitDelay_DSTATE_f4);
  } else {
    wss_system__B.Switch_l = wss_system__P.Constant_Value_e;
  }

  /* End of Switch: '<S34>/Switch' */

  /* Level2 S-Function Block: '<S30>/Comedi2 ADC3' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[10];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S30>/Gain2' incorporates:
   *  Constant: '<S30>/Constant2'
   *  Sum: '<S30>/Add2'
   */
  wss_system__B.Gain2_hi = (wss_system__B.Comedi2ADC3 -
    wss_system__P.Constant2_Value_h) * wss_system__P.Gain2_Gain_i;

  /* DiscreteIntegrator: '<S35>/Integ4' */
  if (wss_system__DWork.Integ4_SYSTEM_ENABLE_b != 0) {
    wss_system__B.Integ4_f1 = wss_system__DWork.Integ4_DSTATE_ag;
  } else {
    wss_system__B.Integ4_f1 = wss_system__P.Integ4_gainval_i *
      wss_system__B.Gain2_hi + wss_system__DWork.Integ4_DSTATE_ag;
  }

  /* End of DiscreteIntegrator: '<S35>/Integ4' */
  /* S-Function block: <S39>/S-Function  */
  {
    int_T indDelayed;
    int_T discreteDelay;

    /* Input present value(s) */
    ((real_T *)wss_system__DWork.SFunction_PWORK_it.uBuffers)
      [wss_system__DWork.SFunction_IWORK_al.indEnd] = wss_system__B.Integ4_f1;

    /* Calculate delayed index */
    discreteDelay =
      (int_T)floor((wss_system__P.K1_Value_e/0.05) + 0.5);
    if (discreteDelay > wss_system__DWork.SFunction_IWORK_al.maxDiscrDelay)
      discreteDelay = wss_system__DWork.SFunction_IWORK_al.maxDiscrDelay;
    indDelayed = wss_system__DWork.SFunction_IWORK_al.indEnd - ((discreteDelay >
      0) ? discreteDelay : 0);
    if (indDelayed < 0) {
      if (wss_system__DWork.SFunction_IWORK_al.indBeg == 0 )
        indDelayed = 0;
      else
        indDelayed += wss_system__DWork.SFunction_IWORK_al.bufSz;
    }

    /* Output past value(s) */
    wss_system__B.SFunction_g = ((real_T *)
      wss_system__DWork.SFunction_PWORK_it.uBuffers)[indDelayed];
  }

  /* Step: '<S35>/Step' */
  if (wss_system__M->Timing.t[1] < wss_system__P.Step_Time_g) {
    rtb_Add1_k = wss_system__P.Step_Y0_c;
  } else {
    rtb_Add1_k = wss_system__P.Step_YFinal_oz;
  }

  /* End of Step: '<S35>/Step' */

  /* Switch: '<S35>/Switch' incorporates:
   *  Constant: '<S35>/Constant'
   *  Constant: '<S35>/K2'
   *  Gain: '<S35>/Gain'
   *  Gain: '<S35>/Gain1'
   *  Product: '<S35>/Product'
   *  Sum: '<S35>/Sum1'
   *  Sum: '<S35>/Sum5'
   *  Sum: '<S35>/Sum7'
   *  UnitDelay: '<S35>/Unit Delay'
   */
  if (rtb_Add1_k >= wss_system__P.Switch_Threshold_f) {
    wss_system__B.Switch_do = (wss_system__B.Integ4_f1 -
      wss_system__B.SFunction_g) * wss_system__P.K2_Value_fb +
      (wss_system__P.Gain1_Gain_mm * wss_system__B.Gain2_hi -
       wss_system__P.Gain_Gain_m * wss_system__DWork.UnitDelay_DSTATE_kc);
  } else {
    wss_system__B.Switch_do = wss_system__P.Constant_Value_c;
  }

  /* End of Switch: '<S35>/Switch' */

  /* Level2 S-Function Block: '<S30>/Comedi0 ADC6' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[11];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S30>/Gain3' incorporates:
   *  Constant: '<S30>/Constant3'
   *  Sum: '<S30>/Add3'
   */
  wss_system__B.Gain3_a = (wss_system__B.Comedi0ADC6 -
    wss_system__P.Constant3_Value_h) * wss_system__P.Gain3_Gain_h;

  /* DiscreteIntegrator: '<S36>/Integ4' */
  if (wss_system__DWork.Integ4_SYSTEM_ENABLE_m != 0) {
    wss_system__B.Integ4_dg = wss_system__DWork.Integ4_DSTATE_o;
  } else {
    wss_system__B.Integ4_dg = wss_system__P.Integ4_gainval_e3 *
      wss_system__B.Gain3_a + wss_system__DWork.Integ4_DSTATE_o;
  }

  /* End of DiscreteIntegrator: '<S36>/Integ4' */
  /* S-Function block: <S40>/S-Function  */
  {
    int_T indDelayed;
    int_T discreteDelay;

    /* Input present value(s) */
    ((real_T *)wss_system__DWork.SFunction_PWORK_p.uBuffers)
      [wss_system__DWork.SFunction_IWORK_m.indEnd] = wss_system__B.Integ4_dg;

    /* Calculate delayed index */
    discreteDelay =
      (int_T)floor((wss_system__P.K1_Value_nz/0.05) + 0.5);
    if (discreteDelay > wss_system__DWork.SFunction_IWORK_m.maxDiscrDelay)
      discreteDelay = wss_system__DWork.SFunction_IWORK_m.maxDiscrDelay;
    indDelayed = wss_system__DWork.SFunction_IWORK_m.indEnd - ((discreteDelay >
      0) ? discreteDelay : 0);
    if (indDelayed < 0) {
      if (wss_system__DWork.SFunction_IWORK_m.indBeg == 0 )
        indDelayed = 0;
      else
        indDelayed += wss_system__DWork.SFunction_IWORK_m.bufSz;
    }

    /* Output past value(s) */
    wss_system__B.SFunction_gz = ((real_T *)
      wss_system__DWork.SFunction_PWORK_p.uBuffers)[indDelayed];
  }

  /* Step: '<S36>/Step' */
  if (wss_system__M->Timing.t[1] < wss_system__P.Step_Time_f) {
    rtb_Add1_k = wss_system__P.Step_Y0_a;
  } else {
    rtb_Add1_k = wss_system__P.Step_YFinal_b;
  }

  /* End of Step: '<S36>/Step' */

  /* Switch: '<S36>/Switch' incorporates:
   *  Constant: '<S36>/Constant'
   *  Constant: '<S36>/K2'
   *  Gain: '<S36>/Gain'
   *  Gain: '<S36>/Gain1'
   *  Product: '<S36>/Product'
   *  Sum: '<S36>/Sum1'
   *  Sum: '<S36>/Sum5'
   *  Sum: '<S36>/Sum7'
   *  UnitDelay: '<S36>/Unit Delay'
   */
  if (rtb_Add1_k >= wss_system__P.Switch_Threshold_b) {
    wss_system__B.Switch_kz = (wss_system__B.Integ4_dg -
      wss_system__B.SFunction_gz) * wss_system__P.K2_Value_bh +
      (wss_system__P.Gain1_Gain_mh * wss_system__B.Gain3_a -
       wss_system__P.Gain_Gain_lw * wss_system__DWork.UnitDelay_DSTATE_nt);
  } else {
    wss_system__B.Switch_kz = wss_system__P.Constant_Value_hc;
  }

  /* End of Switch: '<S36>/Switch' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtTo File1Inport1' */
  rtb_TmpSignalConversionAtToFile[0] = wss_system__B.Switch_n;
  rtb_TmpSignalConversionAtToFile[1] = wss_system__B.Switch_l;
  rtb_TmpSignalConversionAtToFile[2] = wss_system__B.Switch_do;
  rtb_TmpSignalConversionAtToFile[3] = wss_system__B.Switch_kz;

  /* ToFile: '<Root>/To File1' */
  {
    if (!(++wss_system__DWork.ToFile1_IWORK.Decimation % 1) &&
        (wss_system__DWork.ToFile1_IWORK.Count*5)+1 < 100000000 ) {
      FILE *fp = (FILE *) wss_system__DWork.ToFile1_PWORK.FilePtr;
      if (fp != (NULL)) {
        real_T u[5];
        wss_system__DWork.ToFile1_IWORK.Decimation = 0;
        u[0] = wss_system__M->Timing.t[1];
        u[1] = rtb_TmpSignalConversionAtToFile[0];
        u[2] = rtb_TmpSignalConversionAtToFile[1];
        u[3] = rtb_TmpSignalConversionAtToFile[2];
        u[4] = rtb_TmpSignalConversionAtToFile[3];
        if (fwrite(u, sizeof(real_T), 5, fp) != 5) {
          rtmSetErrorStatus(wss_system__M, "Error writing to MAT-file pump.mat");
          return;
        }

        if (((++wss_system__DWork.ToFile1_IWORK.Count)*5)+1 >= 100000000) {
          (void)fprintf(stdout,
                        "*** The ToFile block will stop logging data before\n"
                        "    the simulation has ended, because it has reached\n"
                        "    the maximum number of elements (100000000)\n"
                        "    allowed in MAT-file pump.mat.\n");
        }
      }
    }
  }

  /* Constant: '<Root>/Constant8' */
  wss_system__B.Constant8 = wss_system__P.Constant8_Value;

  /* Constant: '<Root>/Constant5' */
  wss_system__B.Constant5 = wss_system__P.Constant5_Value;

  /* Constant: '<Root>/Constant9' */
  wss_system__B.Constant9 = wss_system__P.Constant9_Value;

  /* Clock: '<S12>/Clock' */
  rtb_Clock = wss_system__M->Timing.t[0];

  /* Lookup: '<S12>/Look-Up Table' */
  wss_system__B.LookUpTable = rt_Lookup((const real_T *)
    &wss_system__P.LookUpTable_XData, 11, rtb_Clock, (const real_T *)
    &wss_system__P.LookUpTable_YData);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtTo File2Inport1' */
  rtb_TmpSignalConversionAtToFile[0] = wss_system__B.Constant8;
  rtb_TmpSignalConversionAtToFile[1] = wss_system__B.Constant5;
  rtb_TmpSignalConversionAtToFile[2] = wss_system__B.Constant9;
  rtb_TmpSignalConversionAtToFile[3] = wss_system__B.LookUpTable;

  /* ToFile: '<Root>/To File2' */
  {
    if (!(++wss_system__DWork.ToFile2_IWORK.Decimation % 1) &&
        (wss_system__DWork.ToFile2_IWORK.Count*5)+1 < 100000000 ) {
      FILE *fp = (FILE *) wss_system__DWork.ToFile2_PWORK.FilePtr;
      if (fp != (NULL)) {
        real_T u[5];
        wss_system__DWork.ToFile2_IWORK.Decimation = 0;
        u[0] = wss_system__M->Timing.t[1];
        u[1] = rtb_TmpSignalConversionAtToFile[0];
        u[2] = rtb_TmpSignalConversionAtToFile[1];
        u[3] = rtb_TmpSignalConversionAtToFile[2];
        u[4] = rtb_TmpSignalConversionAtToFile[3];
        if (fwrite(u, sizeof(real_T), 5, fp) != 5) {
          rtmSetErrorStatus(wss_system__M, "Error writing to MAT-file valve.mat");
          return;
        }

        if (((++wss_system__DWork.ToFile2_IWORK.Count)*5)+1 >= 100000000) {
          (void)fprintf(stdout,
                        "*** The ToFile block will stop logging data before\n"
                        "    the simulation has ended, because it has reached\n"
                        "    the maximum number of elements (100000000)\n"
                        "    allowed in MAT-file valve.mat.\n");
        }
      }
    }
  }

  /* Level2 S-Function Block: '<S27>/Comedi0 ADC2' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[12];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S27>/Gain4' */
  wss_system__B.Gain4 = wss_system__P.Gain4_Gain * wss_system__B.Comedi0ADC2;

  /* DiscreteIntegrator: '<S25>/Integ4' */
  if (wss_system__DWork.Integ4_SYSTEM_ENABLE_i != 0) {
    wss_system__B.Integ4_g = wss_system__DWork.Integ4_DSTATE_kk;
  } else {
    wss_system__B.Integ4_g = wss_system__P.Integ4_gainval_dp *
      wss_system__B.Gain4 + wss_system__DWork.Integ4_DSTATE_kk;
  }

  /* End of DiscreteIntegrator: '<S25>/Integ4' */
  /* S-Function block: <S26>/S-Function  */
  {
    int_T indDelayed;
    int_T discreteDelay;

    /* Input present value(s) */
    ((real_T *)wss_system__DWork.SFunction_PWORK_o.uBuffers)
      [wss_system__DWork.SFunction_IWORK_p.indEnd] = wss_system__B.Integ4_g;

    /* Calculate delayed index */
    discreteDelay =
      (int_T)floor((wss_system__P.K1_Value_od/0.05) + 0.5);
    if (discreteDelay > wss_system__DWork.SFunction_IWORK_p.maxDiscrDelay)
      discreteDelay = wss_system__DWork.SFunction_IWORK_p.maxDiscrDelay;
    indDelayed = wss_system__DWork.SFunction_IWORK_p.indEnd - ((discreteDelay >
      0) ? discreteDelay : 0);
    if (indDelayed < 0) {
      if (wss_system__DWork.SFunction_IWORK_p.indBeg == 0 )
        indDelayed = 0;
      else
        indDelayed += wss_system__DWork.SFunction_IWORK_p.bufSz;
    }

    /* Output past value(s) */
    wss_system__B.SFunction_ge = ((real_T *)
      wss_system__DWork.SFunction_PWORK_o.uBuffers)[indDelayed];
  }

  /* Step: '<S25>/Step' */
  if (wss_system__M->Timing.t[1] < wss_system__P.Step_Time_ia) {
    rtb_Add1_k = wss_system__P.Step_Y0_d2;
  } else {
    rtb_Add1_k = wss_system__P.Step_YFinal_nn;
  }

  /* End of Step: '<S25>/Step' */

  /* Switch: '<S25>/Switch' incorporates:
   *  Constant: '<S25>/Constant'
   *  Constant: '<S25>/K2'
   *  Gain: '<S25>/Gain'
   *  Gain: '<S25>/Gain1'
   *  Product: '<S25>/Product'
   *  Sum: '<S25>/Sum1'
   *  Sum: '<S25>/Sum5'
   *  Sum: '<S25>/Sum7'
   *  UnitDelay: '<S25>/Unit Delay'
   */
  if (rtb_Add1_k >= wss_system__P.Switch_Threshold_fx) {
    wss_system__B.Switch_nj = (wss_system__B.Integ4_g -
      wss_system__B.SFunction_ge) * wss_system__P.K2_Value_p +
      (wss_system__P.Gain1_Gain_k * wss_system__B.Gain4 -
       wss_system__P.Gain_Gain_dt * wss_system__DWork.UnitDelay_DSTATE_m);
  } else {
    wss_system__B.Switch_nj = wss_system__P.Constant_Value_n;
  }

  /* End of Switch: '<S25>/Switch' */

  /* ToFile: '<Root>/To File3' */
  {
    if (!(++wss_system__DWork.ToFile3_IWORK.Decimation % 1) &&
        (wss_system__DWork.ToFile3_IWORK.Count*2)+1 < 100000000 ) {
      FILE *fp = (FILE *) wss_system__DWork.ToFile3_PWORK.FilePtr;
      if (fp != (NULL)) {
        real_T u[2];
        wss_system__DWork.ToFile3_IWORK.Decimation = 0;
        u[0] = wss_system__M->Timing.t[1];
        u[1] = wss_system__B.Switch_nj;
        if (fwrite(u, sizeof(real_T), 2, fp) != 2) {
          rtmSetErrorStatus(wss_system__M, "Error writing to MAT-file wt.mat");
          return;
        }

        if (((++wss_system__DWork.ToFile3_IWORK.Count)*2)+1 >= 100000000) {
          (void)fprintf(stdout,
                        "*** The ToFile block will stop logging data before\n"
                        "    the simulation has ended, because it has reached\n"
                        "    the maximum number of elements (100000000)\n"
                        "    allowed in MAT-file wt.mat.\n");
        }
      }
    }
  }

  /* SignalConversion: '<Root>/TmpSignal ConversionAtTo File4Inport1' */
  rtb_TmpSignalConversionAtToFile[0] = wss_system__B.Switch;
  rtb_TmpSignalConversionAtToFile[1] = wss_system__B.Switch_d;
  rtb_TmpSignalConversionAtToFile[2] = wss_system__B.Switch_k;
  rtb_TmpSignalConversionAtToFile[3] = wss_system__B.Switch_a;

  /* ToFile: '<Root>/To File4' */
  {
    if (!(++wss_system__DWork.ToFile4_IWORK.Decimation % 1) &&
        (wss_system__DWork.ToFile4_IWORK.Count*5)+1 < 100000000 ) {
      FILE *fp = (FILE *) wss_system__DWork.ToFile4_PWORK.FilePtr;
      if (fp != (NULL)) {
        real_T u[5];
        wss_system__DWork.ToFile4_IWORK.Decimation = 0;
        u[0] = wss_system__M->Timing.t[1];
        u[1] = rtb_TmpSignalConversionAtToFile[0];
        u[2] = rtb_TmpSignalConversionAtToFile[1];
        u[3] = rtb_TmpSignalConversionAtToFile[2];
        u[4] = rtb_TmpSignalConversionAtToFile[3];
        if (fwrite(u, sizeof(real_T), 5, fp) != 5) {
          rtmSetErrorStatus(wss_system__M, "Error writing to MAT-file pma.mat");
          return;
        }

        if (((++wss_system__DWork.ToFile4_IWORK.Count)*5)+1 >= 100000000) {
          (void)fprintf(stdout,
                        "*** The ToFile block will stop logging data before\n"
                        "    the simulation has ended, because it has reached\n"
                        "    the maximum number of elements (100000000)\n"
                        "    allowed in MAT-file pma.mat.\n");
        }
      }
    }
  }

  /* Sum: '<S4>/Add1' incorporates:
   *  Constant: '<Root>/Constant14'
   */
  rtb_Add1_k = wss_system__P.Constant14_Value - wss_system__B.Gain_i;

  /* Sum: '<S4>/Add2' incorporates:
   *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
   *  Gain: '<S4>/Gain1'
   */
  wss_system__B.Add2 = wss_system__P.Gain1_Gain_fn * rtb_Add1_k +
    wss_system__DWork.DiscreteTimeIntegrator_DSTATE;

  /* Sum: '<S1>/Add1' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  rtb_Add1_e = wss_system__P.Constant2_Value_hd - wss_system__B.Gain1_i;

  /* Sum: '<S1>/Add2' incorporates:
   *  DiscreteIntegrator: '<S1>/Discrete-Time Integrator'
   *  Gain: '<S1>/Gain1'
   */
  wss_system__B.Add2_m = wss_system__P.Gain1_Gain_g * rtb_Add1_e +
    wss_system__DWork.DiscreteTimeIntegrator_DSTATE_d;

  /* Sum: '<S2>/Add1' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  rtb_Add1_c3 = wss_system__P.Constant3_Value_i - wss_system__B.Gain2_hi;

  /* Sum: '<S2>/Add2' incorporates:
   *  DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
   *  Gain: '<S2>/Gain1'
   */
  wss_system__B.Add2_g = wss_system__P.Gain1_Gain_f2 * rtb_Add1_c3 +
    wss_system__DWork.DiscreteTimeIntegrator_DSTATE_b;

  /* Sum: '<S3>/Add1' incorporates:
   *  Constant: '<Root>/Constant4'
   */
  rtb_DiscreteTimeIntegrator = wss_system__P.Constant4_Value -
    wss_system__B.Gain3_a;

  /* Sum: '<S3>/Add2' incorporates:
   *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator'
   *  Gain: '<S3>/Gain1'
   */
  wss_system__B.Add2_h = wss_system__P.Gain1_Gain_bb *
    rtb_DiscreteTimeIntegrator +
    wss_system__DWork.DiscreteTimeIntegrator_DSTATE_a;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtTo File5Inport1' */
  rtb_TmpSignalConversionAtToFile[0] = wss_system__B.Add2;
  rtb_TmpSignalConversionAtToFile[1] = wss_system__B.Add2_m;
  rtb_TmpSignalConversionAtToFile[2] = wss_system__B.Add2_g;
  rtb_TmpSignalConversionAtToFile[3] = wss_system__B.Add2_h;

  /* ToFile: '<Root>/To File5' */
  {
    if (!(++wss_system__DWork.ToFile5_IWORK.Decimation % 1) &&
        (wss_system__DWork.ToFile5_IWORK.Count*5)+1 < 100000000 ) {
      FILE *fp = (FILE *) wss_system__DWork.ToFile5_PWORK.FilePtr;
      if (fp != (NULL)) {
        real_T u[5];
        wss_system__DWork.ToFile5_IWORK.Decimation = 0;
        u[0] = wss_system__M->Timing.t[1];
        u[1] = rtb_TmpSignalConversionAtToFile[0];
        u[2] = rtb_TmpSignalConversionAtToFile[1];
        u[3] = rtb_TmpSignalConversionAtToFile[2];
        u[4] = rtb_TmpSignalConversionAtToFile[3];
        if (fwrite(u, sizeof(real_T), 5, fp) != 5) {
          rtmSetErrorStatus(wss_system__M,
                            "Error writing to MAT-file pump_real.mat");
          return;
        }

        if (((++wss_system__DWork.ToFile5_IWORK.Count)*5)+1 >= 100000000) {
          (void)fprintf(stdout,
                        "*** The ToFile block will stop logging data before\n"
                        "    the simulation has ended, because it has reached\n"
                        "    the maximum number of elements (100000000)\n"
                        "    allowed in MAT-file pump_real.mat.\n");
        }
      }
    }
  }

  /* SignalConversion: '<Root>/TmpSignal ConversionAtTo File6Inport1' incorporates:
   *  Constant: '<Root>/Constant14'
   *  Constant: '<Root>/Constant2'
   *  Constant: '<Root>/Constant3'
   *  Constant: '<Root>/Constant4'
   */
  rtb_TmpSignalConversionAtToFile[0] = wss_system__P.Constant14_Value;
  rtb_TmpSignalConversionAtToFile[1] = wss_system__P.Constant2_Value_hd;
  rtb_TmpSignalConversionAtToFile[2] = wss_system__P.Constant3_Value_i;
  rtb_TmpSignalConversionAtToFile[3] = wss_system__P.Constant4_Value;

  /* ToFile: '<Root>/To File6' */
  {
    if (!(++wss_system__DWork.ToFile6_IWORK.Decimation % 1) &&
        (wss_system__DWork.ToFile6_IWORK.Count*5)+1 < 100000000 ) {
      FILE *fp = (FILE *) wss_system__DWork.ToFile6_PWORK.FilePtr;
      if (fp != (NULL)) {
        real_T u[5];
        wss_system__DWork.ToFile6_IWORK.Decimation = 0;
        u[0] = wss_system__M->Timing.t[1];
        u[1] = rtb_TmpSignalConversionAtToFile[0];
        u[2] = rtb_TmpSignalConversionAtToFile[1];
        u[3] = rtb_TmpSignalConversionAtToFile[2];
        u[4] = rtb_TmpSignalConversionAtToFile[3];
        if (fwrite(u, sizeof(real_T), 5, fp) != 5) {
          rtmSetErrorStatus(wss_system__M,
                            "Error writing to MAT-file pump_ref.mat");
          return;
        }

        if (((++wss_system__DWork.ToFile6_IWORK.Count)*5)+1 >= 100000000) {
          (void)fprintf(stdout,
                        "*** The ToFile block will stop logging data before\n"
                        "    the simulation has ended, because it has reached\n"
                        "    the maximum number of elements (100000000)\n"
                        "    allowed in MAT-file pump_ref.mat.\n");
        }
      }
    }
  }

  /* Gain: '<S1>/Gain' */
  wss_system__B.Gain_iz = wss_system__P.Gain_Gain_i * rtb_Add1_e;

  /* Gain: '<S2>/Gain' */
  wss_system__B.Gain_b = wss_system__P.Gain_Gain_jr * rtb_Add1_c3;

  /* Gain: '<S3>/Gain' */
  wss_system__B.Gain_c = wss_system__P.Gain_Gain_ii * rtb_DiscreteTimeIntegrator;

  /* Gain: '<S4>/Gain' */
  wss_system__B.Gain_l = wss_system__P.Gain_Gain_lb * rtb_Add1_k;

  /* Derivative: '<S12>/Derivative' */
  {
    real_T t = wss_system__M->Timing.t[0];
    real_T timeStampA = wss_system__DWork.Derivative_RWORK.TimeStampA;
    real_T timeStampB = wss_system__DWork.Derivative_RWORK.TimeStampB;
    real_T *lastU = &wss_system__DWork.Derivative_RWORK.LastUAtTimeA;
    if (timeStampA >= t && timeStampB >= t) {
      wss_system__B.Derivative = 0.0;
    } else {
      real_T deltaT;
      real_T lastTime = timeStampA;
      if (timeStampA < timeStampB) {
        if (timeStampB < t) {
          lastTime = timeStampB;
          lastU = &wss_system__DWork.Derivative_RWORK.LastUAtTimeB;
        }
      } else if (timeStampA >= t) {
        lastTime = timeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK.LastUAtTimeB;
      }

      deltaT = t - lastTime;
      wss_system__B.Derivative = (wss_system__B.LookUpTable - *lastU++) / deltaT;
    }
  }

  /* Level2 S-Function Block: '<S27>/Comedi2 ADC6' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[13];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S30>/Comedi0 ADC5' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[14];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S31>/Comedi0 ADC0' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[15];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC0' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[16];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC1' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[17];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC2' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[18];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC3' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[19];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC4' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[20];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC5' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[21];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S32>/Comedi2 DAC0' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[22];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S32>/Comedi2 DAC1' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[23];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S32>/Comedi2 DAC2' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[24];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S32>/Comedi2 DAC3' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[25];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S32>/Comedi0 DAC4' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[26];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S32>/Comedi0 DAC5' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[27];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S33>/Gain' */
  wss_system__B.Gain_in = wss_system__P.Gain_Gain_o * wss_system__B.Constant8;

  /* Level2 S-Function Block: '<S33>/Comedi0 DAC2' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[28];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S33>/Gain1' */
  wss_system__B.Gain1_a = wss_system__P.Gain1_Gain_j * wss_system__B.Constant5;

  /* Level2 S-Function Block: '<S33>/Comedi0 DAC1' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[29];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S33>/Gain2' */
  wss_system__B.Gain2_i = wss_system__P.Gain2_Gain_ou * wss_system__B.Constant9;

  /* Level2 S-Function Block: '<S33>/Comedi2 DAC4' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[30];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S33>/Gain3' */
  wss_system__B.Gain3_i = wss_system__P.Gain3_Gain_e * wss_system__B.LookUpTable;

  /* Level2 S-Function Block: '<S33>/Comedi2 DAC5' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[31];
    sfcnOutputs(rts, 0);
  }

  /* Gain: '<S33>/Gain4' incorporates:
   *  Constant: '<Root>/Constant11'
   */
  wss_system__B.Gain4_n = wss_system__P.Gain4_Gain_a *
    wss_system__P.Constant11_Value;

  /* Level2 S-Function Block: '<S33>/Comedi0 DAC0' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[32];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S33>/Gain5' incorporates:
   *  Constant: '<Root>/Constant12'
   */
  wss_system__B.Gain5 = wss_system__P.Gain5_Gain *
    wss_system__P.Constant12_Value;

  /* Level2 S-Function Block: '<S33>/Comedi2  DAC6' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[33];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S28>/Comedi0 DO0' (sfun_comedi_do) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[34];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S28>/Comedi0 DO1' (sfun_comedi_do) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[35];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S28>/Comedi0 DO2' (sfun_comedi_do) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[36];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S28>/Comedi0 DO3' (sfun_comedi_do) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[37];
    sfcnOutputs(rts, 1);
  }

  /* Clock: '<S6>/Clock' */
  rtb_Clock = wss_system__M->Timing.t[0];

  /* Lookup: '<S6>/Look-Up Table' */
  wss_system__B.LookUpTable_p = rt_Lookup((const real_T *)
    &wss_system__P.LookUpTable_XData_p, 23, rtb_Clock, (const real_T *)
    &wss_system__P.LookUpTable_YData_k);

  /* Derivative: '<S6>/Derivative' */
  {
    real_T t = wss_system__M->Timing.t[0];
    real_T timeStampA = wss_system__DWork.Derivative_RWORK_e.TimeStampA;
    real_T timeStampB = wss_system__DWork.Derivative_RWORK_e.TimeStampB;
    real_T *lastU = &wss_system__DWork.Derivative_RWORK_e.LastUAtTimeA;
    if (timeStampA >= t && timeStampB >= t) {
      wss_system__B.Derivative_o = 0.0;
    } else {
      real_T deltaT;
      real_T lastTime = timeStampA;
      if (timeStampA < timeStampB) {
        if (timeStampB < t) {
          lastTime = timeStampB;
          lastU = &wss_system__DWork.Derivative_RWORK_e.LastUAtTimeB;
        }
      } else if (timeStampA >= t) {
        lastTime = timeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_e.LastUAtTimeB;
      }

      deltaT = t - lastTime;
      wss_system__B.Derivative_o = (wss_system__B.LookUpTable_p - *lastU++) /
        deltaT;
    }
  }

  /* Clock: '<S7>/Clock' */
  rtb_Clock = wss_system__M->Timing.t[0];

  /* Lookup: '<S7>/Look-Up Table' */
  wss_system__B.LookUpTable_m = rt_Lookup((const real_T *)
    &wss_system__P.LookUpTable_XData_i, 39, rtb_Clock, (const real_T *)
    &wss_system__P.LookUpTable_YData_b);

  /* Derivative: '<S7>/Derivative' */
  {
    real_T t = wss_system__M->Timing.t[0];
    real_T timeStampA = wss_system__DWork.Derivative_RWORK_l.TimeStampA;
    real_T timeStampB = wss_system__DWork.Derivative_RWORK_l.TimeStampB;
    real_T *lastU = &wss_system__DWork.Derivative_RWORK_l.LastUAtTimeA;
    if (timeStampA >= t && timeStampB >= t) {
      wss_system__B.Derivative_m = 0.0;
    } else {
      real_T deltaT;
      real_T lastTime = timeStampA;
      if (timeStampA < timeStampB) {
        if (timeStampB < t) {
          lastTime = timeStampB;
          lastU = &wss_system__DWork.Derivative_RWORK_l.LastUAtTimeB;
        }
      } else if (timeStampA >= t) {
        lastTime = timeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_l.LastUAtTimeB;
      }

      deltaT = t - lastTime;
      wss_system__B.Derivative_m = (wss_system__B.LookUpTable_m - *lastU++) /
        deltaT;
    }
  }

  /* Clock: '<S8>/Clock' */
  rtb_Clock = wss_system__M->Timing.t[0];

  /* Lookup: '<S8>/Look-Up Table' */
  wss_system__B.LookUpTable_b = rt_Lookup((const real_T *)
    &wss_system__P.LookUpTable_XData_is, 39, rtb_Clock, (const real_T *)
    &wss_system__P.LookUpTable_YData_g);

  /* Derivative: '<S8>/Derivative' */
  {
    real_T t = wss_system__M->Timing.t[0];
    real_T timeStampA = wss_system__DWork.Derivative_RWORK_h.TimeStampA;
    real_T timeStampB = wss_system__DWork.Derivative_RWORK_h.TimeStampB;
    real_T *lastU = &wss_system__DWork.Derivative_RWORK_h.LastUAtTimeA;
    if (timeStampA >= t && timeStampB >= t) {
      wss_system__B.Derivative_k = 0.0;
    } else {
      real_T deltaT;
      real_T lastTime = timeStampA;
      if (timeStampA < timeStampB) {
        if (timeStampB < t) {
          lastTime = timeStampB;
          lastU = &wss_system__DWork.Derivative_RWORK_h.LastUAtTimeB;
        }
      } else if (timeStampA >= t) {
        lastTime = timeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_h.LastUAtTimeB;
      }

      deltaT = t - lastTime;
      wss_system__B.Derivative_k = (wss_system__B.LookUpTable_b - *lastU++) /
        deltaT;
    }
  }

  /* Clock: '<S9>/Clock' */
  rtb_Clock = wss_system__M->Timing.t[0];

  /* Lookup: '<S9>/Look-Up Table' */
  wss_system__B.LookUpTable_bh = rt_Lookup((const real_T *)
    &wss_system__P.LookUpTable_XData_d, 39, rtb_Clock, (const real_T *)
    &wss_system__P.LookUpTable_YData_p);

  /* Derivative: '<S9>/Derivative' */
  {
    real_T t = wss_system__M->Timing.t[0];
    real_T timeStampA = wss_system__DWork.Derivative_RWORK_o.TimeStampA;
    real_T timeStampB = wss_system__DWork.Derivative_RWORK_o.TimeStampB;
    real_T *lastU = &wss_system__DWork.Derivative_RWORK_o.LastUAtTimeA;
    if (timeStampA >= t && timeStampB >= t) {
      wss_system__B.Derivative_f = 0.0;
    } else {
      real_T deltaT;
      real_T lastTime = timeStampA;
      if (timeStampA < timeStampB) {
        if (timeStampB < t) {
          lastTime = timeStampB;
          lastU = &wss_system__DWork.Derivative_RWORK_o.LastUAtTimeB;
        }
      } else if (timeStampA >= t) {
        lastTime = timeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_o.LastUAtTimeB;
      }

      deltaT = t - lastTime;
      wss_system__B.Derivative_f = (wss_system__B.LookUpTable_bh - *lastU++) /
        deltaT;
    }
  }

  /* Clock: '<S10>/Clock' */
  rtb_Clock = wss_system__M->Timing.t[0];

  /* Lookup: '<S10>/Look-Up Table' */
  wss_system__B.LookUpTable_e = rt_Lookup((const real_T *)
    &wss_system__P.LookUpTable_XData_f, 7, rtb_Clock, (const real_T *)
    &wss_system__P.LookUpTable_YData_d);

  /* Derivative: '<S10>/Derivative' */
  {
    real_T t = wss_system__M->Timing.t[0];
    real_T timeStampA = wss_system__DWork.Derivative_RWORK_m.TimeStampA;
    real_T timeStampB = wss_system__DWork.Derivative_RWORK_m.TimeStampB;
    real_T *lastU = &wss_system__DWork.Derivative_RWORK_m.LastUAtTimeA;
    if (timeStampA >= t && timeStampB >= t) {
      wss_system__B.Derivative_e = 0.0;
    } else {
      real_T deltaT;
      real_T lastTime = timeStampA;
      if (timeStampA < timeStampB) {
        if (timeStampB < t) {
          lastTime = timeStampB;
          lastU = &wss_system__DWork.Derivative_RWORK_m.LastUAtTimeB;
        }
      } else if (timeStampA >= t) {
        lastTime = timeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_m.LastUAtTimeB;
      }

      deltaT = t - lastTime;
      wss_system__B.Derivative_e = (wss_system__B.LookUpTable_e - *lastU++) /
        deltaT;
    }
  }

  /* Clock: '<S11>/Clock' */
  rtb_Clock = wss_system__M->Timing.t[0];

  /* Lookup: '<S11>/Look-Up Table' */
  wss_system__B.LookUpTable_j = rt_Lookup((const real_T *)
    &wss_system__P.LookUpTable_XData_n, 7, rtb_Clock, (const real_T *)
    &wss_system__P.LookUpTable_YData_ko);

  /* Derivative: '<S11>/Derivative' */
  {
    real_T t = wss_system__M->Timing.t[0];
    real_T timeStampA = wss_system__DWork.Derivative_RWORK_p.TimeStampA;
    real_T timeStampB = wss_system__DWork.Derivative_RWORK_p.TimeStampB;
    real_T *lastU = &wss_system__DWork.Derivative_RWORK_p.LastUAtTimeA;
    if (timeStampA >= t && timeStampB >= t) {
      wss_system__B.Derivative_oi = 0.0;
    } else {
      real_T deltaT;
      real_T lastTime = timeStampA;
      if (timeStampA < timeStampB) {
        if (timeStampB < t) {
          lastTime = timeStampB;
          lastU = &wss_system__DWork.Derivative_RWORK_p.LastUAtTimeB;
        }
      } else if (timeStampA >= t) {
        lastTime = timeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_p.LastUAtTimeB;
      }

      deltaT = t - lastTime;
      wss_system__B.Derivative_oi = (wss_system__B.LookUpTable_j - *lastU++) /
        deltaT;
    }
  }
}

/* Model update function */
void wss_system__update(void)
{
  /* Update for DiscreteIntegrator: '<S17>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE = 0U;
  wss_system__DWork.Integ4_DSTATE = wss_system__P.Integ4_gainval *
    wss_system__B.Gain + wss_system__B.Integ4;

  /* S-Function block: <S21>/S-Function  */
  {
    int_T indBeg = wss_system__DWork.SFunction_IWORK.indBeg;
    int_T indEnd = wss_system__DWork.SFunction_IWORK.indEnd;
    int_T bufSz = wss_system__DWork.SFunction_IWORK.bufSz;
    indEnd = indEnd < bufSz-1 ? indEnd+1 : 0;
    if (indEnd == indBeg) {
      indBeg = indBeg < bufSz-1 ? indBeg+1 : 0;
    }

    wss_system__DWork.SFunction_IWORK.indBeg = indBeg;
    wss_system__DWork.SFunction_IWORK.indEnd = indEnd;
  }

  /* Update for UnitDelay: '<S17>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE = wss_system__B.Gain;

  /* Update for DiscreteIntegrator: '<S18>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_f = 0U;
  wss_system__DWork.Integ4_DSTATE_g = wss_system__P.Integ4_gainval_d *
    wss_system__B.Gain1 + wss_system__B.Integ4_f;

  /* S-Function block: <S22>/S-Function  */
  {
    int_T indBeg = wss_system__DWork.SFunction_IWORK_a.indBeg;
    int_T indEnd = wss_system__DWork.SFunction_IWORK_a.indEnd;
    int_T bufSz = wss_system__DWork.SFunction_IWORK_a.bufSz;
    indEnd = indEnd < bufSz-1 ? indEnd+1 : 0;
    if (indEnd == indBeg) {
      indBeg = indBeg < bufSz-1 ? indBeg+1 : 0;
    }

    wss_system__DWork.SFunction_IWORK_a.indBeg = indBeg;
    wss_system__DWork.SFunction_IWORK_a.indEnd = indEnd;
  }

  /* Update for UnitDelay: '<S18>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_n = wss_system__B.Gain1;

  /* Update for DiscreteIntegrator: '<S19>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_e = 0U;
  wss_system__DWork.Integ4_DSTATE_d = wss_system__P.Integ4_gainval_m *
    wss_system__B.Gain2 + wss_system__B.Integ4_d;

  /* S-Function block: <S23>/S-Function  */
  {
    int_T indBeg = wss_system__DWork.SFunction_IWORK_b.indBeg;
    int_T indEnd = wss_system__DWork.SFunction_IWORK_b.indEnd;
    int_T bufSz = wss_system__DWork.SFunction_IWORK_b.bufSz;
    indEnd = indEnd < bufSz-1 ? indEnd+1 : 0;
    if (indEnd == indBeg) {
      indBeg = indBeg < bufSz-1 ? indBeg+1 : 0;
    }

    wss_system__DWork.SFunction_IWORK_b.indBeg = indBeg;
    wss_system__DWork.SFunction_IWORK_b.indEnd = indEnd;
  }

  /* Update for UnitDelay: '<S19>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_e = wss_system__B.Gain2;

  /* Update for DiscreteIntegrator: '<S20>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_g = 0U;
  wss_system__DWork.Integ4_DSTATE_h = wss_system__P.Integ4_gainval_g *
    wss_system__B.Gain3 + wss_system__B.Integ4_ff;

  /* S-Function block: <S24>/S-Function  */
  {
    int_T indBeg = wss_system__DWork.SFunction_IWORK_o.indBeg;
    int_T indEnd = wss_system__DWork.SFunction_IWORK_o.indEnd;
    int_T bufSz = wss_system__DWork.SFunction_IWORK_o.bufSz;
    indEnd = indEnd < bufSz-1 ? indEnd+1 : 0;
    if (indEnd == indBeg) {
      indBeg = indBeg < bufSz-1 ? indBeg+1 : 0;
    }

    wss_system__DWork.SFunction_IWORK_o.indBeg = indBeg;
    wss_system__DWork.SFunction_IWORK_o.indEnd = indEnd;
  }

  /* Update for UnitDelay: '<S20>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_b = wss_system__B.Gain3;

  /* Update for DiscreteIntegrator: '<S45>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_fl = 0U;
  wss_system__DWork.Integ4_DSTATE_a = wss_system__P.Integ4_gainval_k *
    wss_system__B.Gain_n + wss_system__B.Integ4_a;

  /* S-Function block: <S49>/S-Function  */
  {
    int_T indBeg = wss_system__DWork.SFunction_IWORK_aa.indBeg;
    int_T indEnd = wss_system__DWork.SFunction_IWORK_aa.indEnd;
    int_T bufSz = wss_system__DWork.SFunction_IWORK_aa.bufSz;
    indEnd = indEnd < bufSz-1 ? indEnd+1 : 0;
    if (indEnd == indBeg) {
      indBeg = indBeg < bufSz-1 ? indBeg+1 : 0;
    }

    wss_system__DWork.SFunction_IWORK_aa.indBeg = indBeg;
    wss_system__DWork.SFunction_IWORK_aa.indEnd = indEnd;
  }

  /* Update for UnitDelay: '<S45>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_c = wss_system__B.Gain_n;

  /* Update for DiscreteIntegrator: '<S42>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_o = 0U;
  wss_system__DWork.Integ4_DSTATE_j = wss_system__P.Integ4_gainval_p *
    wss_system__B.Gain1_d + wss_system__B.Integ4_b;

  /* S-Function block: <S46>/S-Function  */
  {
    int_T indBeg = wss_system__DWork.SFunction_IWORK_f.indBeg;
    int_T indEnd = wss_system__DWork.SFunction_IWORK_f.indEnd;
    int_T bufSz = wss_system__DWork.SFunction_IWORK_f.bufSz;
    indEnd = indEnd < bufSz-1 ? indEnd+1 : 0;
    if (indEnd == indBeg) {
      indBeg = indBeg < bufSz-1 ? indBeg+1 : 0;
    }

    wss_system__DWork.SFunction_IWORK_f.indBeg = indBeg;
    wss_system__DWork.SFunction_IWORK_f.indEnd = indEnd;
  }

  /* Update for UnitDelay: '<S42>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_k = wss_system__B.Gain1_d;

  /* Update for DiscreteIntegrator: '<S43>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_k = 0U;
  wss_system__DWork.Integ4_DSTATE_k = wss_system__P.Integ4_gainval_gu *
    wss_system__B.Gain2_h + wss_system__B.Integ4_l;

  /* S-Function block: <S47>/S-Function  */
  {
    int_T indBeg = wss_system__DWork.SFunction_IWORK_l.indBeg;
    int_T indEnd = wss_system__DWork.SFunction_IWORK_l.indEnd;
    int_T bufSz = wss_system__DWork.SFunction_IWORK_l.bufSz;
    indEnd = indEnd < bufSz-1 ? indEnd+1 : 0;
    if (indEnd == indBeg) {
      indBeg = indBeg < bufSz-1 ? indBeg+1 : 0;
    }

    wss_system__DWork.SFunction_IWORK_l.indBeg = indBeg;
    wss_system__DWork.SFunction_IWORK_l.indEnd = indEnd;
  }

  /* Update for UnitDelay: '<S43>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_d = wss_system__B.Gain2_h;

  /* Update for DiscreteIntegrator: '<S44>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_a = 0U;
  wss_system__DWork.Integ4_DSTATE_b = wss_system__P.Integ4_gainval_de *
    wss_system__B.Gain3_k + wss_system__B.Integ4_b2;

  /* S-Function block: <S48>/S-Function  */
  {
    int_T indBeg = wss_system__DWork.SFunction_IWORK_ob.indBeg;
    int_T indEnd = wss_system__DWork.SFunction_IWORK_ob.indEnd;
    int_T bufSz = wss_system__DWork.SFunction_IWORK_ob.bufSz;
    indEnd = indEnd < bufSz-1 ? indEnd+1 : 0;
    if (indEnd == indBeg) {
      indBeg = indBeg < bufSz-1 ? indBeg+1 : 0;
    }

    wss_system__DWork.SFunction_IWORK_ob.indBeg = indBeg;
    wss_system__DWork.SFunction_IWORK_ob.indEnd = indEnd;
  }

  /* Update for UnitDelay: '<S44>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_p = wss_system__B.Gain3_k;

  /* Update for DiscreteIntegrator: '<S37>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_d = 0U;
  wss_system__DWork.Integ4_DSTATE_hy = wss_system__P.Integ4_gainval_e *
    wss_system__B.Gain_i + wss_system__B.Integ4_e;

  /* S-Function block: <S41>/S-Function  */
  {
    int_T indBeg = wss_system__DWork.SFunction_IWORK_fw.indBeg;
    int_T indEnd = wss_system__DWork.SFunction_IWORK_fw.indEnd;
    int_T bufSz = wss_system__DWork.SFunction_IWORK_fw.bufSz;
    indEnd = indEnd < bufSz-1 ? indEnd+1 : 0;
    if (indEnd == indBeg) {
      indBeg = indBeg < bufSz-1 ? indBeg+1 : 0;
    }

    wss_system__DWork.SFunction_IWORK_fw.indBeg = indBeg;
    wss_system__DWork.SFunction_IWORK_fw.indEnd = indEnd;
  }

  /* Update for UnitDelay: '<S37>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_f = wss_system__B.Gain_i;

  /* Update for DiscreteIntegrator: '<S34>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_df = 0U;
  wss_system__DWork.Integ4_DSTATE_e = wss_system__P.Integ4_gainval_a *
    wss_system__B.Gain1_i + wss_system__B.Integ4_o;

  /* S-Function block: <S38>/S-Function  */
  {
    int_T indBeg = wss_system__DWork.SFunction_IWORK_e.indBeg;
    int_T indEnd = wss_system__DWork.SFunction_IWORK_e.indEnd;
    int_T bufSz = wss_system__DWork.SFunction_IWORK_e.bufSz;
    indEnd = indEnd < bufSz-1 ? indEnd+1 : 0;
    if (indEnd == indBeg) {
      indBeg = indBeg < bufSz-1 ? indBeg+1 : 0;
    }

    wss_system__DWork.SFunction_IWORK_e.indBeg = indBeg;
    wss_system__DWork.SFunction_IWORK_e.indEnd = indEnd;
  }

  /* Update for UnitDelay: '<S34>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_f4 = wss_system__B.Gain1_i;

  /* Update for DiscreteIntegrator: '<S35>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_b = 0U;
  wss_system__DWork.Integ4_DSTATE_ag = wss_system__P.Integ4_gainval_i *
    wss_system__B.Gain2_hi + wss_system__B.Integ4_f1;

  /* S-Function block: <S39>/S-Function  */
  {
    int_T indBeg = wss_system__DWork.SFunction_IWORK_al.indBeg;
    int_T indEnd = wss_system__DWork.SFunction_IWORK_al.indEnd;
    int_T bufSz = wss_system__DWork.SFunction_IWORK_al.bufSz;
    indEnd = indEnd < bufSz-1 ? indEnd+1 : 0;
    if (indEnd == indBeg) {
      indBeg = indBeg < bufSz-1 ? indBeg+1 : 0;
    }

    wss_system__DWork.SFunction_IWORK_al.indBeg = indBeg;
    wss_system__DWork.SFunction_IWORK_al.indEnd = indEnd;
  }

  /* Update for UnitDelay: '<S35>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_kc = wss_system__B.Gain2_hi;

  /* Update for DiscreteIntegrator: '<S36>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_m = 0U;
  wss_system__DWork.Integ4_DSTATE_o = wss_system__P.Integ4_gainval_e3 *
    wss_system__B.Gain3_a + wss_system__B.Integ4_dg;

  /* S-Function block: <S40>/S-Function  */
  {
    int_T indBeg = wss_system__DWork.SFunction_IWORK_m.indBeg;
    int_T indEnd = wss_system__DWork.SFunction_IWORK_m.indEnd;
    int_T bufSz = wss_system__DWork.SFunction_IWORK_m.bufSz;
    indEnd = indEnd < bufSz-1 ? indEnd+1 : 0;
    if (indEnd == indBeg) {
      indBeg = indBeg < bufSz-1 ? indBeg+1 : 0;
    }

    wss_system__DWork.SFunction_IWORK_m.indBeg = indBeg;
    wss_system__DWork.SFunction_IWORK_m.indEnd = indEnd;
  }

  /* Update for UnitDelay: '<S36>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_nt = wss_system__B.Gain3_a;

  /* Update for DiscreteIntegrator: '<S25>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_i = 0U;
  wss_system__DWork.Integ4_DSTATE_kk = wss_system__P.Integ4_gainval_dp *
    wss_system__B.Gain4 + wss_system__B.Integ4_g;

  /* S-Function block: <S26>/S-Function  */
  {
    int_T indBeg = wss_system__DWork.SFunction_IWORK_p.indBeg;
    int_T indEnd = wss_system__DWork.SFunction_IWORK_p.indEnd;
    int_T bufSz = wss_system__DWork.SFunction_IWORK_p.bufSz;
    indEnd = indEnd < bufSz-1 ? indEnd+1 : 0;
    if (indEnd == indBeg) {
      indBeg = indBeg < bufSz-1 ? indBeg+1 : 0;
    }

    wss_system__DWork.SFunction_IWORK_p.indBeg = indBeg;
    wss_system__DWork.SFunction_IWORK_p.indEnd = indEnd;
  }

  /* Update for UnitDelay: '<S25>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_m = wss_system__B.Gain4;

  /* Update for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  wss_system__DWork.DiscreteTimeIntegrator_DSTATE +=
    wss_system__P.DiscreteTimeIntegrator_gainval * wss_system__B.Gain_l;

  /* Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator' */
  wss_system__DWork.DiscreteTimeIntegrator_DSTATE_d +=
    wss_system__P.DiscreteTimeIntegrator_gainva_g * wss_system__B.Gain_iz;

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  wss_system__DWork.DiscreteTimeIntegrator_DSTATE_b +=
    wss_system__P.DiscreteTimeIntegrator_gainva_c * wss_system__B.Gain_b;

  /* Update for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  wss_system__DWork.DiscreteTimeIntegrator_DSTATE_a +=
    wss_system__P.DiscreteTimeIntegrator_gainva_o * wss_system__B.Gain_c;

  /* Update for Derivative: '<S12>/Derivative' */
  {
    real_T timeStampA = wss_system__DWork.Derivative_RWORK.TimeStampA;
    real_T timeStampB = wss_system__DWork.Derivative_RWORK.TimeStampB;
    real_T* lastTime = &wss_system__DWork.Derivative_RWORK.TimeStampA;
    real_T* lastU = &wss_system__DWork.Derivative_RWORK.LastUAtTimeA;
    if (timeStampA != rtInf) {
      if (timeStampB == rtInf) {
        lastTime = &wss_system__DWork.Derivative_RWORK.TimeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK.LastUAtTimeB;
      } else if (timeStampA >= timeStampB) {
        lastTime = &wss_system__DWork.Derivative_RWORK.TimeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK.LastUAtTimeB;
      }
    }

    *lastTime = wss_system__M->Timing.t[0];
    *lastU++ = wss_system__B.LookUpTable;
  }

  /* Update for Derivative: '<S6>/Derivative' */
  {
    real_T timeStampA = wss_system__DWork.Derivative_RWORK_e.TimeStampA;
    real_T timeStampB = wss_system__DWork.Derivative_RWORK_e.TimeStampB;
    real_T* lastTime = &wss_system__DWork.Derivative_RWORK_e.TimeStampA;
    real_T* lastU = &wss_system__DWork.Derivative_RWORK_e.LastUAtTimeA;
    if (timeStampA != rtInf) {
      if (timeStampB == rtInf) {
        lastTime = &wss_system__DWork.Derivative_RWORK_e.TimeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_e.LastUAtTimeB;
      } else if (timeStampA >= timeStampB) {
        lastTime = &wss_system__DWork.Derivative_RWORK_e.TimeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_e.LastUAtTimeB;
      }
    }

    *lastTime = wss_system__M->Timing.t[0];
    *lastU++ = wss_system__B.LookUpTable_p;
  }

  /* Update for Derivative: '<S7>/Derivative' */
  {
    real_T timeStampA = wss_system__DWork.Derivative_RWORK_l.TimeStampA;
    real_T timeStampB = wss_system__DWork.Derivative_RWORK_l.TimeStampB;
    real_T* lastTime = &wss_system__DWork.Derivative_RWORK_l.TimeStampA;
    real_T* lastU = &wss_system__DWork.Derivative_RWORK_l.LastUAtTimeA;
    if (timeStampA != rtInf) {
      if (timeStampB == rtInf) {
        lastTime = &wss_system__DWork.Derivative_RWORK_l.TimeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_l.LastUAtTimeB;
      } else if (timeStampA >= timeStampB) {
        lastTime = &wss_system__DWork.Derivative_RWORK_l.TimeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_l.LastUAtTimeB;
      }
    }

    *lastTime = wss_system__M->Timing.t[0];
    *lastU++ = wss_system__B.LookUpTable_m;
  }

  /* Update for Derivative: '<S8>/Derivative' */
  {
    real_T timeStampA = wss_system__DWork.Derivative_RWORK_h.TimeStampA;
    real_T timeStampB = wss_system__DWork.Derivative_RWORK_h.TimeStampB;
    real_T* lastTime = &wss_system__DWork.Derivative_RWORK_h.TimeStampA;
    real_T* lastU = &wss_system__DWork.Derivative_RWORK_h.LastUAtTimeA;
    if (timeStampA != rtInf) {
      if (timeStampB == rtInf) {
        lastTime = &wss_system__DWork.Derivative_RWORK_h.TimeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_h.LastUAtTimeB;
      } else if (timeStampA >= timeStampB) {
        lastTime = &wss_system__DWork.Derivative_RWORK_h.TimeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_h.LastUAtTimeB;
      }
    }

    *lastTime = wss_system__M->Timing.t[0];
    *lastU++ = wss_system__B.LookUpTable_b;
  }

  /* Update for Derivative: '<S9>/Derivative' */
  {
    real_T timeStampA = wss_system__DWork.Derivative_RWORK_o.TimeStampA;
    real_T timeStampB = wss_system__DWork.Derivative_RWORK_o.TimeStampB;
    real_T* lastTime = &wss_system__DWork.Derivative_RWORK_o.TimeStampA;
    real_T* lastU = &wss_system__DWork.Derivative_RWORK_o.LastUAtTimeA;
    if (timeStampA != rtInf) {
      if (timeStampB == rtInf) {
        lastTime = &wss_system__DWork.Derivative_RWORK_o.TimeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_o.LastUAtTimeB;
      } else if (timeStampA >= timeStampB) {
        lastTime = &wss_system__DWork.Derivative_RWORK_o.TimeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_o.LastUAtTimeB;
      }
    }

    *lastTime = wss_system__M->Timing.t[0];
    *lastU++ = wss_system__B.LookUpTable_bh;
  }

  /* Update for Derivative: '<S10>/Derivative' */
  {
    real_T timeStampA = wss_system__DWork.Derivative_RWORK_m.TimeStampA;
    real_T timeStampB = wss_system__DWork.Derivative_RWORK_m.TimeStampB;
    real_T* lastTime = &wss_system__DWork.Derivative_RWORK_m.TimeStampA;
    real_T* lastU = &wss_system__DWork.Derivative_RWORK_m.LastUAtTimeA;
    if (timeStampA != rtInf) {
      if (timeStampB == rtInf) {
        lastTime = &wss_system__DWork.Derivative_RWORK_m.TimeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_m.LastUAtTimeB;
      } else if (timeStampA >= timeStampB) {
        lastTime = &wss_system__DWork.Derivative_RWORK_m.TimeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_m.LastUAtTimeB;
      }
    }

    *lastTime = wss_system__M->Timing.t[0];
    *lastU++ = wss_system__B.LookUpTable_e;
  }

  /* Update for Derivative: '<S11>/Derivative' */
  {
    real_T timeStampA = wss_system__DWork.Derivative_RWORK_p.TimeStampA;
    real_T timeStampB = wss_system__DWork.Derivative_RWORK_p.TimeStampB;
    real_T* lastTime = &wss_system__DWork.Derivative_RWORK_p.TimeStampA;
    real_T* lastU = &wss_system__DWork.Derivative_RWORK_p.LastUAtTimeA;
    if (timeStampA != rtInf) {
      if (timeStampB == rtInf) {
        lastTime = &wss_system__DWork.Derivative_RWORK_p.TimeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_p.LastUAtTimeB;
      } else if (timeStampA >= timeStampB) {
        lastTime = &wss_system__DWork.Derivative_RWORK_p.TimeStampB;
        lastU = &wss_system__DWork.Derivative_RWORK_p.LastUAtTimeB;
      }
    }

    *lastTime = wss_system__M->Timing.t[0];
    *lastU++ = wss_system__B.LookUpTable_j;
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++wss_system__M->Timing.clockTick0)) {
    ++wss_system__M->Timing.clockTickH0;
  }

  wss_system__M->Timing.t[0] = wss_system__M->Timing.clockTick0 *
    wss_system__M->Timing.stepSize0 + wss_system__M->Timing.clockTickH0 *
    wss_system__M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.05s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++wss_system__M->Timing.clockTick1)) {
      ++wss_system__M->Timing.clockTickH1;
    }

    wss_system__M->Timing.t[1] = wss_system__M->Timing.clockTick1 *
      wss_system__M->Timing.stepSize1 + wss_system__M->Timing.clockTickH1 *
      wss_system__M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void wss_system__initialize(void)
{
  /* Level2 S-Function Block: '<S27>/Comedi0 ADC3' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S21>/S-Function  */
  {
    static real_T dvtd_buffer[1 * 101];
    wss_system__DWork.SFunction_IWORK.bufSz = 101;
    wss_system__DWork.SFunction_PWORK.uBuffers = (void *)&dvtd_buffer[0];
  }

  {
    wss_system__DWork.SFunction_IWORK.maxDiscrDelay =
      wss_system__DWork.SFunction_IWORK.bufSz - 1;

    /* Assign default sample(s) */
    /* Single initial value */
    if (wss_system__DWork.SFunction_PWORK.uBuffers != NULL)
      *((real_T *)wss_system__DWork.SFunction_PWORK.uBuffers) = (real_T)0.0;

    /* Set work values */
    wss_system__DWork.SFunction_IWORK.indBeg = 0;
    wss_system__DWork.SFunction_IWORK.indEnd = 1;
  }

  /* Level2 S-Function Block: '<S27>/Comedi0 ADC4' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S22>/S-Function  */
  {
    static real_T dvtd_buffer[1 * 101];
    wss_system__DWork.SFunction_IWORK_a.bufSz = 101;
    wss_system__DWork.SFunction_PWORK_f.uBuffers = (void *)&dvtd_buffer[0];
  }

  {
    wss_system__DWork.SFunction_IWORK_a.maxDiscrDelay =
      wss_system__DWork.SFunction_IWORK_a.bufSz - 1;

    /* Assign default sample(s) */
    /* Single initial value */
    if (wss_system__DWork.SFunction_PWORK_f.uBuffers != NULL)
      *((real_T *)wss_system__DWork.SFunction_PWORK_f.uBuffers) = (real_T)0.0;

    /* Set work values */
    wss_system__DWork.SFunction_IWORK_a.indBeg = 0;
    wss_system__DWork.SFunction_IWORK_a.indEnd = 1;
  }

  /* Level2 S-Function Block: '<S27>/Comedi2 ADC4' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S23>/S-Function  */
  {
    static real_T dvtd_buffer[1 * 101];
    wss_system__DWork.SFunction_IWORK_b.bufSz = 101;
    wss_system__DWork.SFunction_PWORK_c.uBuffers = (void *)&dvtd_buffer[0];
  }

  {
    wss_system__DWork.SFunction_IWORK_b.maxDiscrDelay =
      wss_system__DWork.SFunction_IWORK_b.bufSz - 1;

    /* Assign default sample(s) */
    /* Single initial value */
    if (wss_system__DWork.SFunction_PWORK_c.uBuffers != NULL)
      *((real_T *)wss_system__DWork.SFunction_PWORK_c.uBuffers) = (real_T)0.0;

    /* Set work values */
    wss_system__DWork.SFunction_IWORK_b.indBeg = 0;
    wss_system__DWork.SFunction_IWORK_b.indEnd = 1;
  }

  /* Level2 S-Function Block: '<S27>/Comedi2 ADC5' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S24>/S-Function  */
  {
    static real_T dvtd_buffer[1 * 101];
    wss_system__DWork.SFunction_IWORK_o.bufSz = 101;
    wss_system__DWork.SFunction_PWORK_a.uBuffers = (void *)&dvtd_buffer[0];
  }

  {
    wss_system__DWork.SFunction_IWORK_o.maxDiscrDelay =
      wss_system__DWork.SFunction_IWORK_o.bufSz - 1;

    /* Assign default sample(s) */
    /* Single initial value */
    if (wss_system__DWork.SFunction_PWORK_a.uBuffers != NULL)
      *((real_T *)wss_system__DWork.SFunction_PWORK_a.uBuffers) = (real_T)0.0;

    /* Set work values */
    wss_system__DWork.SFunction_IWORK_o.indBeg = 0;
    wss_system__DWork.SFunction_IWORK_o.indEnd = 1;
  }

  /* Level2 S-Function Block: '<S31>/Comedi2 ADC0' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S49>/S-Function  */
  {
    static real_T dvtd_buffer[1 * 101];
    wss_system__DWork.SFunction_IWORK_aa.bufSz = 101;
    wss_system__DWork.SFunction_PWORK_i.uBuffers = (void *)&dvtd_buffer[0];
  }

  {
    wss_system__DWork.SFunction_IWORK_aa.maxDiscrDelay =
      wss_system__DWork.SFunction_IWORK_aa.bufSz - 1;

    /* Assign default sample(s) */
    /* Single initial value */
    if (wss_system__DWork.SFunction_PWORK_i.uBuffers != NULL)
      *((real_T *)wss_system__DWork.SFunction_PWORK_i.uBuffers) = (real_T)0.0;

    /* Set work values */
    wss_system__DWork.SFunction_IWORK_aa.indBeg = 0;
    wss_system__DWork.SFunction_IWORK_aa.indEnd = 1;
  }

  /* Level2 S-Function Block: '<S31>/Comedi0 ADC1' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S46>/S-Function  */
  {
    static real_T dvtd_buffer[1 * 101];
    wss_system__DWork.SFunction_IWORK_f.bufSz = 101;
    wss_system__DWork.SFunction_PWORK_j.uBuffers = (void *)&dvtd_buffer[0];
  }

  {
    wss_system__DWork.SFunction_IWORK_f.maxDiscrDelay =
      wss_system__DWork.SFunction_IWORK_f.bufSz - 1;

    /* Assign default sample(s) */
    /* Single initial value */
    if (wss_system__DWork.SFunction_PWORK_j.uBuffers != NULL)
      *((real_T *)wss_system__DWork.SFunction_PWORK_j.uBuffers) = (real_T)0.0;

    /* Set work values */
    wss_system__DWork.SFunction_IWORK_f.indBeg = 0;
    wss_system__DWork.SFunction_IWORK_f.indEnd = 1;
  }

  /* Level2 S-Function Block: '<S31>/Comedi2 ADC1' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S47>/S-Function  */
  {
    static real_T dvtd_buffer[1 * 101];
    wss_system__DWork.SFunction_IWORK_l.bufSz = 101;
    wss_system__DWork.SFunction_PWORK_n.uBuffers = (void *)&dvtd_buffer[0];
  }

  {
    wss_system__DWork.SFunction_IWORK_l.maxDiscrDelay =
      wss_system__DWork.SFunction_IWORK_l.bufSz - 1;

    /* Assign default sample(s) */
    /* Single initial value */
    if (wss_system__DWork.SFunction_PWORK_n.uBuffers != NULL)
      *((real_T *)wss_system__DWork.SFunction_PWORK_n.uBuffers) = (real_T)0.0;

    /* Set work values */
    wss_system__DWork.SFunction_IWORK_l.indBeg = 0;
    wss_system__DWork.SFunction_IWORK_l.indEnd = 1;
  }

  /* Level2 S-Function Block: '<S31>/Comedi2 ADC2' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S48>/S-Function  */
  {
    static real_T dvtd_buffer[1 * 101];
    wss_system__DWork.SFunction_IWORK_ob.bufSz = 101;
    wss_system__DWork.SFunction_PWORK_g.uBuffers = (void *)&dvtd_buffer[0];
  }

  {
    wss_system__DWork.SFunction_IWORK_ob.maxDiscrDelay =
      wss_system__DWork.SFunction_IWORK_ob.bufSz - 1;

    /* Assign default sample(s) */
    /* Single initial value */
    if (wss_system__DWork.SFunction_PWORK_g.uBuffers != NULL)
      *((real_T *)wss_system__DWork.SFunction_PWORK_g.uBuffers) = (real_T)0.0;

    /* Set work values */
    wss_system__DWork.SFunction_IWORK_ob.indBeg = 0;
    wss_system__DWork.SFunction_IWORK_ob.indEnd = 1;
  }

  /* Start for ToFile: '<Root>/To File' */
  {
    char fileName[509] = "ring.mat";
    FILE *fp = (NULL);
    if ((fp = fopen(fileName, "wb")) == (NULL)) {
      rtmSetErrorStatus(wss_system__M, "Error creating .mat file ring.mat");
      return;
    }

    if (rt_WriteMat4FileHeader(fp,5,0,"ring_pressure")) {
      rtmSetErrorStatus(wss_system__M,
                        "Error writing mat file header to file ring.mat");
      return;
    }

    wss_system__DWork.ToFile_IWORK.Count = 0;
    wss_system__DWork.ToFile_IWORK.Decimation = -1;
    wss_system__DWork.ToFile_PWORK.FilePtr = fp;
  }

  /* Level2 S-Function Block: '<S30>/Comedi2 ADC7' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S41>/S-Function  */
  {
    static real_T dvtd_buffer[1 * 101];
    wss_system__DWork.SFunction_IWORK_fw.bufSz = 101;
    wss_system__DWork.SFunction_PWORK_b.uBuffers = (void *)&dvtd_buffer[0];
  }

  {
    wss_system__DWork.SFunction_IWORK_fw.maxDiscrDelay =
      wss_system__DWork.SFunction_IWORK_fw.bufSz - 1;

    /* Assign default sample(s) */
    /* Single initial value */
    if (wss_system__DWork.SFunction_PWORK_b.uBuffers != NULL)
      *((real_T *)wss_system__DWork.SFunction_PWORK_b.uBuffers) = (real_T)0.0;

    /* Set work values */
    wss_system__DWork.SFunction_IWORK_fw.indBeg = 0;
    wss_system__DWork.SFunction_IWORK_fw.indEnd = 1;
  }

  /* Level2 S-Function Block: '<S30>/Comedi0 ADC7' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S38>/S-Function  */
  {
    static real_T dvtd_buffer[1 * 101];
    wss_system__DWork.SFunction_IWORK_e.bufSz = 101;
    wss_system__DWork.SFunction_PWORK_l.uBuffers = (void *)&dvtd_buffer[0];
  }

  {
    wss_system__DWork.SFunction_IWORK_e.maxDiscrDelay =
      wss_system__DWork.SFunction_IWORK_e.bufSz - 1;

    /* Assign default sample(s) */
    /* Single initial value */
    if (wss_system__DWork.SFunction_PWORK_l.uBuffers != NULL)
      *((real_T *)wss_system__DWork.SFunction_PWORK_l.uBuffers) = (real_T)0.0;

    /* Set work values */
    wss_system__DWork.SFunction_IWORK_e.indBeg = 0;
    wss_system__DWork.SFunction_IWORK_e.indEnd = 1;
  }

  /* Level2 S-Function Block: '<S30>/Comedi2 ADC3' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S39>/S-Function  */
  {
    static real_T dvtd_buffer[1 * 101];
    wss_system__DWork.SFunction_IWORK_al.bufSz = 101;
    wss_system__DWork.SFunction_PWORK_it.uBuffers = (void *)&dvtd_buffer[0];
  }

  {
    wss_system__DWork.SFunction_IWORK_al.maxDiscrDelay =
      wss_system__DWork.SFunction_IWORK_al.bufSz - 1;

    /* Assign default sample(s) */
    /* Single initial value */
    if (wss_system__DWork.SFunction_PWORK_it.uBuffers != NULL)
      *((real_T *)wss_system__DWork.SFunction_PWORK_it.uBuffers) = (real_T)0.0;

    /* Set work values */
    wss_system__DWork.SFunction_IWORK_al.indBeg = 0;
    wss_system__DWork.SFunction_IWORK_al.indEnd = 1;
  }

  /* Level2 S-Function Block: '<S30>/Comedi0 ADC6' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S40>/S-Function  */
  {
    static real_T dvtd_buffer[1 * 101];
    wss_system__DWork.SFunction_IWORK_m.bufSz = 101;
    wss_system__DWork.SFunction_PWORK_p.uBuffers = (void *)&dvtd_buffer[0];
  }

  {
    wss_system__DWork.SFunction_IWORK_m.maxDiscrDelay =
      wss_system__DWork.SFunction_IWORK_m.bufSz - 1;

    /* Assign default sample(s) */
    /* Single initial value */
    if (wss_system__DWork.SFunction_PWORK_p.uBuffers != NULL)
      *((real_T *)wss_system__DWork.SFunction_PWORK_p.uBuffers) = (real_T)0.0;

    /* Set work values */
    wss_system__DWork.SFunction_IWORK_m.indBeg = 0;
    wss_system__DWork.SFunction_IWORK_m.indEnd = 1;
  }

  /* Start for ToFile: '<Root>/To File1' */
  {
    char fileName[509] = "pump.mat";
    FILE *fp = (NULL);
    if ((fp = fopen(fileName, "wb")) == (NULL)) {
      rtmSetErrorStatus(wss_system__M, "Error creating .mat file pump.mat");
      return;
    }

    if (rt_WriteMat4FileHeader(fp,5,0,"pump_pressure")) {
      rtmSetErrorStatus(wss_system__M,
                        "Error writing mat file header to file pump.mat");
      return;
    }

    wss_system__DWork.ToFile1_IWORK.Count = 0;
    wss_system__DWork.ToFile1_IWORK.Decimation = -1;
    wss_system__DWork.ToFile1_PWORK.FilePtr = fp;
  }

  /* Start for ToFile: '<Root>/To File2' */
  {
    char fileName[509] = "valve.mat";
    FILE *fp = (NULL);
    if ((fp = fopen(fileName, "wb")) == (NULL)) {
      rtmSetErrorStatus(wss_system__M, "Error creating .mat file valve.mat");
      return;
    }

    if (rt_WriteMat4FileHeader(fp,5,0,"valve_OD")) {
      rtmSetErrorStatus(wss_system__M,
                        "Error writing mat file header to file valve.mat");
      return;
    }

    wss_system__DWork.ToFile2_IWORK.Count = 0;
    wss_system__DWork.ToFile2_IWORK.Decimation = -1;
    wss_system__DWork.ToFile2_PWORK.FilePtr = fp;
  }

  /* Level2 S-Function Block: '<S27>/Comedi0 ADC2' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S26>/S-Function  */
  {
    static real_T dvtd_buffer[1 * 101];
    wss_system__DWork.SFunction_IWORK_p.bufSz = 101;
    wss_system__DWork.SFunction_PWORK_o.uBuffers = (void *)&dvtd_buffer[0];
  }

  {
    wss_system__DWork.SFunction_IWORK_p.maxDiscrDelay =
      wss_system__DWork.SFunction_IWORK_p.bufSz - 1;

    /* Assign default sample(s) */
    /* Single initial value */
    if (wss_system__DWork.SFunction_PWORK_o.uBuffers != NULL)
      *((real_T *)wss_system__DWork.SFunction_PWORK_o.uBuffers) = (real_T)0.0;

    /* Set work values */
    wss_system__DWork.SFunction_IWORK_p.indBeg = 0;
    wss_system__DWork.SFunction_IWORK_p.indEnd = 1;
  }

  /* Start for ToFile: '<Root>/To File3' */
  {
    char fileName[509] = "wt.mat";
    FILE *fp = (NULL);
    if ((fp = fopen(fileName, "wb")) == (NULL)) {
      rtmSetErrorStatus(wss_system__M, "Error creating .mat file wt.mat");
      return;
    }

    if (rt_WriteMat4FileHeader(fp,2,0,"wt_pressure")) {
      rtmSetErrorStatus(wss_system__M,
                        "Error writing mat file header to file wt.mat");
      return;
    }

    wss_system__DWork.ToFile3_IWORK.Count = 0;
    wss_system__DWork.ToFile3_IWORK.Decimation = -1;
    wss_system__DWork.ToFile3_PWORK.FilePtr = fp;
  }

  /* Start for ToFile: '<Root>/To File4' */
  {
    char fileName[509] = "pma.mat";
    FILE *fp = (NULL);
    if ((fp = fopen(fileName, "wb")) == (NULL)) {
      rtmSetErrorStatus(wss_system__M, "Error creating .mat file pma.mat");
      return;
    }

    if (rt_WriteMat4FileHeader(fp,5,0,"pma_pressure")) {
      rtmSetErrorStatus(wss_system__M,
                        "Error writing mat file header to file pma.mat");
      return;
    }

    wss_system__DWork.ToFile4_IWORK.Count = 0;
    wss_system__DWork.ToFile4_IWORK.Decimation = -1;
    wss_system__DWork.ToFile4_PWORK.FilePtr = fp;
  }

  /* Start for ToFile: '<Root>/To File5' */
  {
    char fileName[509] = "pump_real.mat";
    FILE *fp = (NULL);
    if ((fp = fopen(fileName, "wb")) == (NULL)) {
      rtmSetErrorStatus(wss_system__M, "Error creating .mat file pump_real.mat");
      return;
    }

    if (rt_WriteMat4FileHeader(fp,5,0,"pump_pressure_r")) {
      rtmSetErrorStatus(wss_system__M,
                        "Error writing mat file header to file pump_real.mat");
      return;
    }

    wss_system__DWork.ToFile5_IWORK.Count = 0;
    wss_system__DWork.ToFile5_IWORK.Decimation = -1;
    wss_system__DWork.ToFile5_PWORK.FilePtr = fp;
  }

  /* Start for ToFile: '<Root>/To File6' */
  {
    char fileName[509] = "pump_ref.mat";
    FILE *fp = (NULL);
    if ((fp = fopen(fileName, "wb")) == (NULL)) {
      rtmSetErrorStatus(wss_system__M, "Error creating .mat file pump_ref.mat");
      return;
    }

    if (rt_WriteMat4FileHeader(fp,5,0,"pump_pressure_ref")) {
      rtmSetErrorStatus(wss_system__M,
                        "Error writing mat file header to file pump_ref.mat");
      return;
    }

    wss_system__DWork.ToFile6_IWORK.Count = 0;
    wss_system__DWork.ToFile6_IWORK.Decimation = -1;
    wss_system__DWork.ToFile6_PWORK.FilePtr = fp;
  }

  /* Level2 S-Function Block: '<S27>/Comedi2 ADC6' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[13];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S30>/Comedi0 ADC5' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[14];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S31>/Comedi0 ADC0' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[15];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC0' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC1' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[17];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC2' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[18];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC3' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[19];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC4' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[20];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC5' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[21];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S32>/Comedi2 DAC0' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[22];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S32>/Comedi2 DAC1' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[23];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S32>/Comedi2 DAC2' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[24];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S32>/Comedi2 DAC3' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[25];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S32>/Comedi0 DAC4' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[26];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S32>/Comedi0 DAC5' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[27];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S33>/Comedi0 DAC2' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[28];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S33>/Comedi0 DAC1' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[29];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S33>/Comedi2 DAC4' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[30];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S33>/Comedi2 DAC5' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[31];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S33>/Comedi0 DAC0' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[32];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S33>/Comedi2  DAC6' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[33];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S28>/Comedi0 DO0' (sfun_comedi_do) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[34];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S28>/Comedi0 DO1' (sfun_comedi_do) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[35];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S28>/Comedi0 DO2' (sfun_comedi_do) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[36];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S28>/Comedi0 DO3' (sfun_comedi_do) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[37];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for DiscreteIntegrator: '<S17>/Integ4' */
  wss_system__DWork.Integ4_DSTATE = wss_system__P.Integ4_IC;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE = wss_system__P.UnitDelay_X0;

  /* InitializeConditions for DiscreteIntegrator: '<S18>/Integ4' */
  wss_system__DWork.Integ4_DSTATE_g = wss_system__P.Integ4_IC_i;

  /* InitializeConditions for UnitDelay: '<S18>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_n = wss_system__P.UnitDelay_X0_f;

  /* InitializeConditions for DiscreteIntegrator: '<S19>/Integ4' */
  wss_system__DWork.Integ4_DSTATE_d = wss_system__P.Integ4_IC_c;

  /* InitializeConditions for UnitDelay: '<S19>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_e = wss_system__P.UnitDelay_X0_p;

  /* InitializeConditions for DiscreteIntegrator: '<S20>/Integ4' */
  wss_system__DWork.Integ4_DSTATE_h = wss_system__P.Integ4_IC_m;

  /* InitializeConditions for UnitDelay: '<S20>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_b = wss_system__P.UnitDelay_X0_b;

  /* InitializeConditions for DiscreteIntegrator: '<S45>/Integ4' */
  wss_system__DWork.Integ4_DSTATE_a = wss_system__P.Integ4_IC_h;

  /* InitializeConditions for UnitDelay: '<S45>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_c = wss_system__P.UnitDelay_X0_j;

  /* InitializeConditions for DiscreteIntegrator: '<S42>/Integ4' */
  wss_system__DWork.Integ4_DSTATE_j = wss_system__P.Integ4_IC_ma;

  /* InitializeConditions for UnitDelay: '<S42>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_k = wss_system__P.UnitDelay_X0_h;

  /* InitializeConditions for DiscreteIntegrator: '<S43>/Integ4' */
  wss_system__DWork.Integ4_DSTATE_k = wss_system__P.Integ4_IC_o;

  /* InitializeConditions for UnitDelay: '<S43>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_d = wss_system__P.UnitDelay_X0_k;

  /* InitializeConditions for DiscreteIntegrator: '<S44>/Integ4' */
  wss_system__DWork.Integ4_DSTATE_b = wss_system__P.Integ4_IC_ik;

  /* InitializeConditions for UnitDelay: '<S44>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_p = wss_system__P.UnitDelay_X0_by;

  /* InitializeConditions for DiscreteIntegrator: '<S37>/Integ4' */
  wss_system__DWork.Integ4_DSTATE_hy = wss_system__P.Integ4_IC_l;

  /* InitializeConditions for UnitDelay: '<S37>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_f = wss_system__P.UnitDelay_X0_d;

  /* InitializeConditions for DiscreteIntegrator: '<S34>/Integ4' */
  wss_system__DWork.Integ4_DSTATE_e = wss_system__P.Integ4_IC_f;

  /* InitializeConditions for UnitDelay: '<S34>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_f4 = wss_system__P.UnitDelay_X0_c;

  /* InitializeConditions for DiscreteIntegrator: '<S35>/Integ4' */
  wss_system__DWork.Integ4_DSTATE_ag = wss_system__P.Integ4_IC_mq;

  /* InitializeConditions for UnitDelay: '<S35>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_kc = wss_system__P.UnitDelay_X0_dc;

  /* InitializeConditions for DiscreteIntegrator: '<S36>/Integ4' */
  wss_system__DWork.Integ4_DSTATE_o = wss_system__P.Integ4_IC_c1;

  /* InitializeConditions for UnitDelay: '<S36>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_nt = wss_system__P.UnitDelay_X0_jj;

  /* InitializeConditions for DiscreteIntegrator: '<S25>/Integ4' */
  wss_system__DWork.Integ4_DSTATE_kk = wss_system__P.Integ4_IC_fz;

  /* InitializeConditions for UnitDelay: '<S25>/Unit Delay' */
  wss_system__DWork.UnitDelay_DSTATE_m = wss_system__P.UnitDelay_X0_o;

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  wss_system__DWork.DiscreteTimeIntegrator_DSTATE =
    wss_system__P.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S1>/Discrete-Time Integrator' */
  wss_system__DWork.DiscreteTimeIntegrator_DSTATE_d =
    wss_system__P.DiscreteTimeIntegrator_IC_c;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  wss_system__DWork.DiscreteTimeIntegrator_DSTATE_b =
    wss_system__P.DiscreteTimeIntegrator_IC_cl;

  /* InitializeConditions for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  wss_system__DWork.DiscreteTimeIntegrator_DSTATE_a =
    wss_system__P.DiscreteTimeIntegrator_IC_f;

  /* InitializeConditions for Derivative: '<S12>/Derivative' */
  wss_system__DWork.Derivative_RWORK.TimeStampA = rtInf;
  wss_system__DWork.Derivative_RWORK.TimeStampB = rtInf;

  /* InitializeConditions for Derivative: '<S6>/Derivative' */
  wss_system__DWork.Derivative_RWORK_e.TimeStampA = rtInf;
  wss_system__DWork.Derivative_RWORK_e.TimeStampB = rtInf;

  /* InitializeConditions for Derivative: '<S7>/Derivative' */
  wss_system__DWork.Derivative_RWORK_l.TimeStampA = rtInf;
  wss_system__DWork.Derivative_RWORK_l.TimeStampB = rtInf;

  /* InitializeConditions for Derivative: '<S8>/Derivative' */
  wss_system__DWork.Derivative_RWORK_h.TimeStampA = rtInf;
  wss_system__DWork.Derivative_RWORK_h.TimeStampB = rtInf;

  /* InitializeConditions for Derivative: '<S9>/Derivative' */
  wss_system__DWork.Derivative_RWORK_o.TimeStampA = rtInf;
  wss_system__DWork.Derivative_RWORK_o.TimeStampB = rtInf;

  /* InitializeConditions for Derivative: '<S10>/Derivative' */
  wss_system__DWork.Derivative_RWORK_m.TimeStampA = rtInf;
  wss_system__DWork.Derivative_RWORK_m.TimeStampB = rtInf;

  /* InitializeConditions for Derivative: '<S11>/Derivative' */
  wss_system__DWork.Derivative_RWORK_p.TimeStampA = rtInf;
  wss_system__DWork.Derivative_RWORK_p.TimeStampB = rtInf;

  /* Enable for DiscreteIntegrator: '<S17>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE = 1U;

  /* Enable for DiscreteIntegrator: '<S18>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_f = 1U;

  /* Enable for DiscreteIntegrator: '<S19>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_e = 1U;

  /* Enable for DiscreteIntegrator: '<S20>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_g = 1U;

  /* Enable for DiscreteIntegrator: '<S45>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_fl = 1U;

  /* Enable for DiscreteIntegrator: '<S42>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_o = 1U;

  /* Enable for DiscreteIntegrator: '<S43>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_k = 1U;

  /* Enable for DiscreteIntegrator: '<S44>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_a = 1U;

  /* Enable for DiscreteIntegrator: '<S37>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_d = 1U;

  /* Enable for DiscreteIntegrator: '<S34>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_df = 1U;

  /* Enable for DiscreteIntegrator: '<S35>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_b = 1U;

  /* Enable for DiscreteIntegrator: '<S36>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_m = 1U;

  /* Enable for DiscreteIntegrator: '<S25>/Integ4' */
  wss_system__DWork.Integ4_SYSTEM_ENABLE_i = 1U;
}

/* Model terminate function */
void wss_system__terminate(void)
{
  /* Level2 S-Function Block: '<S27>/Comedi0 ADC3' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* S-Function block: <S21>/S-Function  */
  {
    /* Nothing to do! */
  }

  /* Level2 S-Function Block: '<S27>/Comedi0 ADC4' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* S-Function block: <S22>/S-Function  */
  {
    /* Nothing to do! */
  }

  /* Level2 S-Function Block: '<S27>/Comedi2 ADC4' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* S-Function block: <S23>/S-Function  */
  {
    /* Nothing to do! */
  }

  /* Level2 S-Function Block: '<S27>/Comedi2 ADC5' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* S-Function block: <S24>/S-Function  */
  {
    /* Nothing to do! */
  }

  /* Level2 S-Function Block: '<S31>/Comedi2 ADC0' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* S-Function block: <S49>/S-Function  */
  {
    /* Nothing to do! */
  }

  /* Level2 S-Function Block: '<S31>/Comedi0 ADC1' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* S-Function block: <S46>/S-Function  */
  {
    /* Nothing to do! */
  }

  /* Level2 S-Function Block: '<S31>/Comedi2 ADC1' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* S-Function block: <S47>/S-Function  */
  {
    /* Nothing to do! */
  }

  /* Level2 S-Function Block: '<S31>/Comedi2 ADC2' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* S-Function block: <S48>/S-Function  */
  {
    /* Nothing to do! */
  }

  /* Terminate for ToFile: '<Root>/To File' */
  {
    FILE *fp = (FILE *) wss_system__DWork.ToFile_PWORK.FilePtr;
    if (fp != (NULL)) {
      char fileName[509] = "ring.mat";
      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(wss_system__M, "Error closing MAT-file ring.mat");
        return;
      }

      if ((fp = fopen(fileName, "r+b")) == (NULL)) {
        rtmSetErrorStatus(wss_system__M, "Error reopening MAT-file ring.mat");
        return;
      }

      if (rt_WriteMat4FileHeader(fp, 5, wss_system__DWork.ToFile_IWORK.Count,
           "ring_pressure")) {
        rtmSetErrorStatus(wss_system__M,
                          "Error writing header for ring_pressure to MAT-file ring.mat");
      }

      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(wss_system__M, "Error closing MAT-file ring.mat");
        return;
      }

      wss_system__DWork.ToFile_PWORK.FilePtr = (NULL);
    }
  }

  /* Level2 S-Function Block: '<S30>/Comedi2 ADC7' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* S-Function block: <S41>/S-Function  */
  {
    /* Nothing to do! */
  }

  /* Level2 S-Function Block: '<S30>/Comedi0 ADC7' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* S-Function block: <S38>/S-Function  */
  {
    /* Nothing to do! */
  }

  /* Level2 S-Function Block: '<S30>/Comedi2 ADC3' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* S-Function block: <S39>/S-Function  */
  {
    /* Nothing to do! */
  }

  /* Level2 S-Function Block: '<S30>/Comedi0 ADC6' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* S-Function block: <S40>/S-Function  */
  {
    /* Nothing to do! */
  }

  /* Terminate for ToFile: '<Root>/To File1' */
  {
    FILE *fp = (FILE *) wss_system__DWork.ToFile1_PWORK.FilePtr;
    if (fp != (NULL)) {
      char fileName[509] = "pump.mat";
      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(wss_system__M, "Error closing MAT-file pump.mat");
        return;
      }

      if ((fp = fopen(fileName, "r+b")) == (NULL)) {
        rtmSetErrorStatus(wss_system__M, "Error reopening MAT-file pump.mat");
        return;
      }

      if (rt_WriteMat4FileHeader(fp, 5, wss_system__DWork.ToFile1_IWORK.Count,
           "pump_pressure")) {
        rtmSetErrorStatus(wss_system__M,
                          "Error writing header for pump_pressure to MAT-file pump.mat");
      }

      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(wss_system__M, "Error closing MAT-file pump.mat");
        return;
      }

      wss_system__DWork.ToFile1_PWORK.FilePtr = (NULL);
    }
  }

  /* Terminate for ToFile: '<Root>/To File2' */
  {
    FILE *fp = (FILE *) wss_system__DWork.ToFile2_PWORK.FilePtr;
    if (fp != (NULL)) {
      char fileName[509] = "valve.mat";
      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(wss_system__M, "Error closing MAT-file valve.mat");
        return;
      }

      if ((fp = fopen(fileName, "r+b")) == (NULL)) {
        rtmSetErrorStatus(wss_system__M, "Error reopening MAT-file valve.mat");
        return;
      }

      if (rt_WriteMat4FileHeader(fp, 5, wss_system__DWork.ToFile2_IWORK.Count,
           "valve_OD")) {
        rtmSetErrorStatus(wss_system__M,
                          "Error writing header for valve_OD to MAT-file valve.mat");
      }

      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(wss_system__M, "Error closing MAT-file valve.mat");
        return;
      }

      wss_system__DWork.ToFile2_PWORK.FilePtr = (NULL);
    }
  }

  /* Level2 S-Function Block: '<S27>/Comedi0 ADC2' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* S-Function block: <S26>/S-Function  */
  {
    /* Nothing to do! */
  }

  /* Terminate for ToFile: '<Root>/To File3' */
  {
    FILE *fp = (FILE *) wss_system__DWork.ToFile3_PWORK.FilePtr;
    if (fp != (NULL)) {
      char fileName[509] = "wt.mat";
      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(wss_system__M, "Error closing MAT-file wt.mat");
        return;
      }

      if ((fp = fopen(fileName, "r+b")) == (NULL)) {
        rtmSetErrorStatus(wss_system__M, "Error reopening MAT-file wt.mat");
        return;
      }

      if (rt_WriteMat4FileHeader(fp, 2, wss_system__DWork.ToFile3_IWORK.Count,
           "wt_pressure")) {
        rtmSetErrorStatus(wss_system__M,
                          "Error writing header for wt_pressure to MAT-file wt.mat");
      }

      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(wss_system__M, "Error closing MAT-file wt.mat");
        return;
      }

      wss_system__DWork.ToFile3_PWORK.FilePtr = (NULL);
    }
  }

  /* Terminate for ToFile: '<Root>/To File4' */
  {
    FILE *fp = (FILE *) wss_system__DWork.ToFile4_PWORK.FilePtr;
    if (fp != (NULL)) {
      char fileName[509] = "pma.mat";
      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(wss_system__M, "Error closing MAT-file pma.mat");
        return;
      }

      if ((fp = fopen(fileName, "r+b")) == (NULL)) {
        rtmSetErrorStatus(wss_system__M, "Error reopening MAT-file pma.mat");
        return;
      }

      if (rt_WriteMat4FileHeader(fp, 5, wss_system__DWork.ToFile4_IWORK.Count,
           "pma_pressure")) {
        rtmSetErrorStatus(wss_system__M,
                          "Error writing header for pma_pressure to MAT-file pma.mat");
      }

      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(wss_system__M, "Error closing MAT-file pma.mat");
        return;
      }

      wss_system__DWork.ToFile4_PWORK.FilePtr = (NULL);
    }
  }

  /* Terminate for ToFile: '<Root>/To File5' */
  {
    FILE *fp = (FILE *) wss_system__DWork.ToFile5_PWORK.FilePtr;
    if (fp != (NULL)) {
      char fileName[509] = "pump_real.mat";
      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(wss_system__M, "Error closing MAT-file pump_real.mat");
        return;
      }

      if ((fp = fopen(fileName, "r+b")) == (NULL)) {
        rtmSetErrorStatus(wss_system__M,
                          "Error reopening MAT-file pump_real.mat");
        return;
      }

      if (rt_WriteMat4FileHeader(fp, 5, wss_system__DWork.ToFile5_IWORK.Count,
           "pump_pressure_r")) {
        rtmSetErrorStatus(wss_system__M,
                          "Error writing header for pump_pressure_r to MAT-file pump_real.mat");
      }

      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(wss_system__M, "Error closing MAT-file pump_real.mat");
        return;
      }

      wss_system__DWork.ToFile5_PWORK.FilePtr = (NULL);
    }
  }

  /* Terminate for ToFile: '<Root>/To File6' */
  {
    FILE *fp = (FILE *) wss_system__DWork.ToFile6_PWORK.FilePtr;
    if (fp != (NULL)) {
      char fileName[509] = "pump_ref.mat";
      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(wss_system__M, "Error closing MAT-file pump_ref.mat");
        return;
      }

      if ((fp = fopen(fileName, "r+b")) == (NULL)) {
        rtmSetErrorStatus(wss_system__M, "Error reopening MAT-file pump_ref.mat");
        return;
      }

      if (rt_WriteMat4FileHeader(fp, 5, wss_system__DWork.ToFile6_IWORK.Count,
           "pump_pressure_ref")) {
        rtmSetErrorStatus(wss_system__M,
                          "Error writing header for pump_pressure_ref to MAT-file pump_ref.mat");
      }

      if (fclose(fp) == EOF) {
        rtmSetErrorStatus(wss_system__M, "Error closing MAT-file pump_ref.mat");
        return;
      }

      wss_system__DWork.ToFile6_PWORK.FilePtr = (NULL);
    }
  }

  /* Level2 S-Function Block: '<S27>/Comedi2 ADC6' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S30>/Comedi0 ADC5' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S31>/Comedi0 ADC0' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC0' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC1' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC2' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC3' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC4' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S29>/Comedi1 ADC5' (sfun_comedi_ai) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S32>/Comedi2 DAC0' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S32>/Comedi2 DAC1' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S32>/Comedi2 DAC2' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S32>/Comedi2 DAC3' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S32>/Comedi0 DAC4' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S32>/Comedi0 DAC5' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[27];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S33>/Comedi0 DAC2' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[28];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S33>/Comedi0 DAC1' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[29];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S33>/Comedi2 DAC4' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[30];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S33>/Comedi2 DAC5' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[31];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S33>/Comedi0 DAC0' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[32];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S33>/Comedi2  DAC6' (sfun_comedi_ao) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[33];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S28>/Comedi0 DO0' (sfun_comedi_do) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[34];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S28>/Comedi0 DO1' (sfun_comedi_do) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[35];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S28>/Comedi0 DO2' (sfun_comedi_do) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[36];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S28>/Comedi0 DO3' (sfun_comedi_do) */
  {
    SimStruct *rts = wss_system__M->childSfunctions[37];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  wss_system__output();

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  wss_system__update();

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  wss_system__initialize();
}

void MdlTerminate(void)
{
  wss_system__terminate();
}

RT_MODEL_wss_system_ *wss_system_(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)wss_system__M, 0,
                sizeof(RT_MODEL_wss_system_));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&wss_system__M->solverInfo,
                          &wss_system__M->Timing.simTimeStep);
    rtsiSetTPtr(&wss_system__M->solverInfo, &rtmGetTPtr(wss_system__M));
    rtsiSetStepSizePtr(&wss_system__M->solverInfo,
                       &wss_system__M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&wss_system__M->solverInfo, (&rtmGetErrorStatus
      (wss_system__M)));
    rtsiSetRTModelPtr(&wss_system__M->solverInfo, wss_system__M);
  }

  rtsiSetSimTimeStep(&wss_system__M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&wss_system__M->solverInfo,"FixedStepDiscrete");
  wss_system__M->solverInfoPtr = (&wss_system__M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = wss_system__M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    wss_system__M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    wss_system__M->Timing.sampleTimes = (&wss_system__M->
      Timing.sampleTimesArray[0]);
    wss_system__M->Timing.offsetTimes = (&wss_system__M->
      Timing.offsetTimesArray[0]);

    /* task periods */
    wss_system__M->Timing.sampleTimes[0] = (0.0);
    wss_system__M->Timing.sampleTimes[1] = (0.05);

    /* task offsets */
    wss_system__M->Timing.offsetTimes[0] = (0.0);
    wss_system__M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(wss_system__M, &wss_system__M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = wss_system__M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    wss_system__M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(wss_system__M, -1);
  wss_system__M->Timing.stepSize0 = 0.05;
  wss_system__M->Timing.stepSize1 = 0.05;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    wss_system__M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(wss_system__M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(wss_system__M->rtwLogInfo, (NULL));
    rtliSetLogT(wss_system__M->rtwLogInfo, "tout");
    rtliSetLogX(wss_system__M->rtwLogInfo, "");
    rtliSetLogXFinal(wss_system__M->rtwLogInfo, "");
    rtliSetSigLog(wss_system__M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(wss_system__M->rtwLogInfo, "rt_");
    rtliSetLogFormat(wss_system__M->rtwLogInfo, 0);
    rtliSetLogMaxRows(wss_system__M->rtwLogInfo, 10000000);
    rtliSetLogDecimation(wss_system__M->rtwLogInfo, 1);
    rtliSetLogY(wss_system__M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(wss_system__M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(wss_system__M->rtwLogInfo, (NULL));
  }

  /* External mode info */
  wss_system__M->Sizes.checksums[0] = (4001604340U);
  wss_system__M->Sizes.checksums[1] = (2963605654U);
  wss_system__M->Sizes.checksums[2] = (4230837008U);
  wss_system__M->Sizes.checksums[3] = (1505625283U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[14];
    wss_system__M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = &rtAlwaysEnabled;
    systemRan[11] = &rtAlwaysEnabled;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(wss_system__M->extModeInfo,
      &wss_system__M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(wss_system__M->extModeInfo,
                        wss_system__M->Sizes.checksums);
    rteiSetTPtr(wss_system__M->extModeInfo, rtmGetTPtr(wss_system__M));
  }

  wss_system__M->solverInfoPtr = (&wss_system__M->solverInfo);
  wss_system__M->Timing.stepSize = (0.05);
  rtsiSetFixedStepSize(&wss_system__M->solverInfo, 0.05);
  rtsiSetSolverMode(&wss_system__M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  wss_system__M->ModelData.blockIO = ((void *) &wss_system__B);

  {
    wss_system__B.Comedi0ADC3 = 0.0;
    wss_system__B.Gain = 0.0;
    wss_system__B.Integ4 = 0.0;
    wss_system__B.SFunction = 0.0;
    wss_system__B.Switch = 0.0;
    wss_system__B.Comedi0ADC4 = 0.0;
    wss_system__B.Gain1 = 0.0;
    wss_system__B.Integ4_f = 0.0;
    wss_system__B.SFunction_d = 0.0;
    wss_system__B.Switch_d = 0.0;
    wss_system__B.Comedi2ADC4 = 0.0;
    wss_system__B.Gain2 = 0.0;
    wss_system__B.Integ4_d = 0.0;
    wss_system__B.SFunction_j = 0.0;
    wss_system__B.Switch_k = 0.0;
    wss_system__B.Comedi2ADC5 = 0.0;
    wss_system__B.Gain3 = 0.0;
    wss_system__B.Integ4_ff = 0.0;
    wss_system__B.SFunction_dm = 0.0;
    wss_system__B.Switch_a = 0.0;
    wss_system__B.Comedi2ADC0 = 0.0;
    wss_system__B.Gain_n = 0.0;
    wss_system__B.Integ4_a = 0.0;
    wss_system__B.SFunction_jd = 0.0;
    wss_system__B.Comedi0ADC1 = 0.0;
    wss_system__B.Gain1_d = 0.0;
    wss_system__B.Integ4_b = 0.0;
    wss_system__B.SFunction_l = 0.0;
    wss_system__B.Comedi2ADC1 = 0.0;
    wss_system__B.Gain2_h = 0.0;
    wss_system__B.Integ4_l = 0.0;
    wss_system__B.SFunction_b = 0.0;
    wss_system__B.Comedi2ADC2 = 0.0;
    wss_system__B.Gain3_k = 0.0;
    wss_system__B.Integ4_b2 = 0.0;
    wss_system__B.SFunction_m = 0.0;
    wss_system__B.Comedi2ADC7 = 0.0;
    wss_system__B.Gain_i = 0.0;
    wss_system__B.Integ4_e = 0.0;
    wss_system__B.SFunction_bt = 0.0;
    wss_system__B.Switch_n = 0.0;
    wss_system__B.Comedi0ADC7 = 0.0;
    wss_system__B.Gain1_i = 0.0;
    wss_system__B.Integ4_o = 0.0;
    wss_system__B.SFunction_dl = 0.0;
    wss_system__B.Switch_l = 0.0;
    wss_system__B.Comedi2ADC3 = 0.0;
    wss_system__B.Gain2_hi = 0.0;
    wss_system__B.Integ4_f1 = 0.0;
    wss_system__B.SFunction_g = 0.0;
    wss_system__B.Switch_do = 0.0;
    wss_system__B.Comedi0ADC6 = 0.0;
    wss_system__B.Gain3_a = 0.0;
    wss_system__B.Integ4_dg = 0.0;
    wss_system__B.SFunction_gz = 0.0;
    wss_system__B.Switch_kz = 0.0;
    wss_system__B.Constant8 = 0.0;
    wss_system__B.Constant5 = 0.0;
    wss_system__B.Constant9 = 0.0;
    wss_system__B.LookUpTable = 0.0;
    wss_system__B.Comedi0ADC2 = 0.0;
    wss_system__B.Gain4 = 0.0;
    wss_system__B.Integ4_g = 0.0;
    wss_system__B.SFunction_ge = 0.0;
    wss_system__B.Switch_nj = 0.0;
    wss_system__B.Add2 = 0.0;
    wss_system__B.Add2_m = 0.0;
    wss_system__B.Add2_g = 0.0;
    wss_system__B.Add2_h = 0.0;
    wss_system__B.Gain_iz = 0.0;
    wss_system__B.Gain_b = 0.0;
    wss_system__B.Gain_c = 0.0;
    wss_system__B.Gain_l = 0.0;
    wss_system__B.Derivative = 0.0;
    wss_system__B.Comedi2ADC6 = 0.0;
    wss_system__B.Comedi0ADC5 = 0.0;
    wss_system__B.Comedi0ADC0 = 0.0;
    wss_system__B.Comedi1ADC0 = 0.0;
    wss_system__B.Comedi1ADC1 = 0.0;
    wss_system__B.Comedi1ADC2 = 0.0;
    wss_system__B.Comedi1ADC3 = 0.0;
    wss_system__B.Comedi1ADC4 = 0.0;
    wss_system__B.Comedi1ADC5 = 0.0;
    wss_system__B.Gain_in = 0.0;
    wss_system__B.Gain1_a = 0.0;
    wss_system__B.Gain2_i = 0.0;
    wss_system__B.Gain3_i = 0.0;
    wss_system__B.Gain4_n = 0.0;
    wss_system__B.Gain5 = 0.0;
    wss_system__B.LookUpTable_p = 0.0;
    wss_system__B.Derivative_o = 0.0;
    wss_system__B.LookUpTable_m = 0.0;
    wss_system__B.Derivative_m = 0.0;
    wss_system__B.LookUpTable_b = 0.0;
    wss_system__B.Derivative_k = 0.0;
    wss_system__B.LookUpTable_bh = 0.0;
    wss_system__B.Derivative_f = 0.0;
    wss_system__B.LookUpTable_e = 0.0;
    wss_system__B.Derivative_e = 0.0;
    wss_system__B.LookUpTable_j = 0.0;
    wss_system__B.Derivative_oi = 0.0;
  }

  /* parameters */
  wss_system__M->ModelData.defaultParam = ((real_T *)&wss_system__P);

  /* states (dwork) */
  wss_system__M->Work.dwork = ((void *) &wss_system__DWork);
  (void) memset((void *)&wss_system__DWork, 0,
                sizeof(D_Work_wss_system_));
  wss_system__DWork.Integ4_DSTATE = 0.0;
  wss_system__DWork.UnitDelay_DSTATE = 0.0;
  wss_system__DWork.Integ4_DSTATE_g = 0.0;
  wss_system__DWork.UnitDelay_DSTATE_n = 0.0;
  wss_system__DWork.Integ4_DSTATE_d = 0.0;
  wss_system__DWork.UnitDelay_DSTATE_e = 0.0;
  wss_system__DWork.Integ4_DSTATE_h = 0.0;
  wss_system__DWork.UnitDelay_DSTATE_b = 0.0;
  wss_system__DWork.Integ4_DSTATE_a = 0.0;
  wss_system__DWork.UnitDelay_DSTATE_c = 0.0;
  wss_system__DWork.Integ4_DSTATE_j = 0.0;
  wss_system__DWork.UnitDelay_DSTATE_k = 0.0;
  wss_system__DWork.Integ4_DSTATE_k = 0.0;
  wss_system__DWork.UnitDelay_DSTATE_d = 0.0;
  wss_system__DWork.Integ4_DSTATE_b = 0.0;
  wss_system__DWork.UnitDelay_DSTATE_p = 0.0;
  wss_system__DWork.Integ4_DSTATE_hy = 0.0;
  wss_system__DWork.UnitDelay_DSTATE_f = 0.0;
  wss_system__DWork.Integ4_DSTATE_e = 0.0;
  wss_system__DWork.UnitDelay_DSTATE_f4 = 0.0;
  wss_system__DWork.Integ4_DSTATE_ag = 0.0;
  wss_system__DWork.UnitDelay_DSTATE_kc = 0.0;
  wss_system__DWork.Integ4_DSTATE_o = 0.0;
  wss_system__DWork.UnitDelay_DSTATE_nt = 0.0;
  wss_system__DWork.Integ4_DSTATE_kk = 0.0;
  wss_system__DWork.UnitDelay_DSTATE_m = 0.0;
  wss_system__DWork.DiscreteTimeIntegrator_DSTATE = 0.0;
  wss_system__DWork.DiscreteTimeIntegrator_DSTATE_d = 0.0;
  wss_system__DWork.DiscreteTimeIntegrator_DSTATE_b = 0.0;
  wss_system__DWork.DiscreteTimeIntegrator_DSTATE_a = 0.0;
  wss_system__DWork.Comedi0ADC3_RWORK[0] = 0.0;
  wss_system__DWork.Comedi0ADC3_RWORK[1] = 0.0;
  wss_system__DWork.Comedi0ADC4_RWORK[0] = 0.0;
  wss_system__DWork.Comedi0ADC4_RWORK[1] = 0.0;
  wss_system__DWork.Comedi2ADC4_RWORK[0] = 0.0;
  wss_system__DWork.Comedi2ADC4_RWORK[1] = 0.0;
  wss_system__DWork.Comedi2ADC5_RWORK[0] = 0.0;
  wss_system__DWork.Comedi2ADC5_RWORK[1] = 0.0;
  wss_system__DWork.Comedi2ADC0_RWORK[0] = 0.0;
  wss_system__DWork.Comedi2ADC0_RWORK[1] = 0.0;
  wss_system__DWork.Comedi0ADC1_RWORK[0] = 0.0;
  wss_system__DWork.Comedi0ADC1_RWORK[1] = 0.0;
  wss_system__DWork.Comedi2ADC1_RWORK[0] = 0.0;
  wss_system__DWork.Comedi2ADC1_RWORK[1] = 0.0;
  wss_system__DWork.Comedi2ADC2_RWORK[0] = 0.0;
  wss_system__DWork.Comedi2ADC2_RWORK[1] = 0.0;
  wss_system__DWork.Comedi2ADC7_RWORK[0] = 0.0;
  wss_system__DWork.Comedi2ADC7_RWORK[1] = 0.0;
  wss_system__DWork.Comedi0ADC7_RWORK[0] = 0.0;
  wss_system__DWork.Comedi0ADC7_RWORK[1] = 0.0;
  wss_system__DWork.Comedi2ADC3_RWORK[0] = 0.0;
  wss_system__DWork.Comedi2ADC3_RWORK[1] = 0.0;
  wss_system__DWork.Comedi0ADC6_RWORK[0] = 0.0;
  wss_system__DWork.Comedi0ADC6_RWORK[1] = 0.0;
  wss_system__DWork.Comedi0ADC2_RWORK[0] = 0.0;
  wss_system__DWork.Comedi0ADC2_RWORK[1] = 0.0;
  wss_system__DWork.Derivative_RWORK.TimeStampA = 0.0;
  wss_system__DWork.Derivative_RWORK.LastUAtTimeA = 0.0;
  wss_system__DWork.Derivative_RWORK.TimeStampB = 0.0;
  wss_system__DWork.Derivative_RWORK.LastUAtTimeB = 0.0;
  wss_system__DWork.Comedi2ADC6_RWORK[0] = 0.0;
  wss_system__DWork.Comedi2ADC6_RWORK[1] = 0.0;
  wss_system__DWork.Comedi0ADC5_RWORK[0] = 0.0;
  wss_system__DWork.Comedi0ADC5_RWORK[1] = 0.0;
  wss_system__DWork.Comedi0ADC0_RWORK[0] = 0.0;
  wss_system__DWork.Comedi0ADC0_RWORK[1] = 0.0;
  wss_system__DWork.Comedi1ADC0_RWORK[0] = 0.0;
  wss_system__DWork.Comedi1ADC0_RWORK[1] = 0.0;
  wss_system__DWork.Comedi1ADC1_RWORK[0] = 0.0;
  wss_system__DWork.Comedi1ADC1_RWORK[1] = 0.0;
  wss_system__DWork.Comedi1ADC2_RWORK[0] = 0.0;
  wss_system__DWork.Comedi1ADC2_RWORK[1] = 0.0;
  wss_system__DWork.Comedi1ADC3_RWORK[0] = 0.0;
  wss_system__DWork.Comedi1ADC3_RWORK[1] = 0.0;
  wss_system__DWork.Comedi1ADC4_RWORK[0] = 0.0;
  wss_system__DWork.Comedi1ADC4_RWORK[1] = 0.0;
  wss_system__DWork.Comedi1ADC5_RWORK[0] = 0.0;
  wss_system__DWork.Comedi1ADC5_RWORK[1] = 0.0;
  wss_system__DWork.Comedi2DAC0_RWORK[0] = 0.0;
  wss_system__DWork.Comedi2DAC0_RWORK[1] = 0.0;
  wss_system__DWork.Comedi2DAC1_RWORK[0] = 0.0;
  wss_system__DWork.Comedi2DAC1_RWORK[1] = 0.0;
  wss_system__DWork.Comedi2DAC2_RWORK[0] = 0.0;
  wss_system__DWork.Comedi2DAC2_RWORK[1] = 0.0;
  wss_system__DWork.Comedi2DAC3_RWORK[0] = 0.0;
  wss_system__DWork.Comedi2DAC3_RWORK[1] = 0.0;
  wss_system__DWork.Comedi0DAC4_RWORK[0] = 0.0;
  wss_system__DWork.Comedi0DAC4_RWORK[1] = 0.0;
  wss_system__DWork.Comedi0DAC5_RWORK[0] = 0.0;
  wss_system__DWork.Comedi0DAC5_RWORK[1] = 0.0;
  wss_system__DWork.Comedi0DAC2_RWORK[0] = 0.0;
  wss_system__DWork.Comedi0DAC2_RWORK[1] = 0.0;
  wss_system__DWork.Comedi0DAC1_RWORK[0] = 0.0;
  wss_system__DWork.Comedi0DAC1_RWORK[1] = 0.0;
  wss_system__DWork.Comedi2DAC4_RWORK[0] = 0.0;
  wss_system__DWork.Comedi2DAC4_RWORK[1] = 0.0;
  wss_system__DWork.Comedi2DAC5_RWORK[0] = 0.0;
  wss_system__DWork.Comedi2DAC5_RWORK[1] = 0.0;
  wss_system__DWork.Comedi0DAC0_RWORK[0] = 0.0;
  wss_system__DWork.Comedi0DAC0_RWORK[1] = 0.0;
  wss_system__DWork.Comedi2DAC6_RWORK[0] = 0.0;
  wss_system__DWork.Comedi2DAC6_RWORK[1] = 0.0;
  wss_system__DWork.Derivative_RWORK_e.TimeStampA = 0.0;
  wss_system__DWork.Derivative_RWORK_e.LastUAtTimeA = 0.0;
  wss_system__DWork.Derivative_RWORK_e.TimeStampB = 0.0;
  wss_system__DWork.Derivative_RWORK_e.LastUAtTimeB = 0.0;
  wss_system__DWork.Derivative_RWORK_l.TimeStampA = 0.0;
  wss_system__DWork.Derivative_RWORK_l.LastUAtTimeA = 0.0;
  wss_system__DWork.Derivative_RWORK_l.TimeStampB = 0.0;
  wss_system__DWork.Derivative_RWORK_l.LastUAtTimeB = 0.0;
  wss_system__DWork.Derivative_RWORK_h.TimeStampA = 0.0;
  wss_system__DWork.Derivative_RWORK_h.LastUAtTimeA = 0.0;
  wss_system__DWork.Derivative_RWORK_h.TimeStampB = 0.0;
  wss_system__DWork.Derivative_RWORK_h.LastUAtTimeB = 0.0;
  wss_system__DWork.Derivative_RWORK_o.TimeStampA = 0.0;
  wss_system__DWork.Derivative_RWORK_o.LastUAtTimeA = 0.0;
  wss_system__DWork.Derivative_RWORK_o.TimeStampB = 0.0;
  wss_system__DWork.Derivative_RWORK_o.LastUAtTimeB = 0.0;
  wss_system__DWork.Derivative_RWORK_m.TimeStampA = 0.0;
  wss_system__DWork.Derivative_RWORK_m.LastUAtTimeA = 0.0;
  wss_system__DWork.Derivative_RWORK_m.TimeStampB = 0.0;
  wss_system__DWork.Derivative_RWORK_m.LastUAtTimeB = 0.0;
  wss_system__DWork.Derivative_RWORK_p.TimeStampA = 0.0;
  wss_system__DWork.Derivative_RWORK_p.LastUAtTimeA = 0.0;
  wss_system__DWork.Derivative_RWORK_p.TimeStampB = 0.0;
  wss_system__DWork.Derivative_RWORK_p.LastUAtTimeB = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    wss_system__M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &wss_system__M->NonInlinedSFcns.sfcnInfo;
    wss_system__M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(wss_system__M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &wss_system__M->Sizes.numSampTimes);
    wss_system__M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(wss_system__M)
      [0]);
    wss_system__M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(wss_system__M)
      [1]);
    rtssSetTPtrPtr(sfcnInfo,wss_system__M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(wss_system__M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(wss_system__M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(wss_system__M));
    rtssSetStepSizePtr(sfcnInfo, &wss_system__M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(wss_system__M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &wss_system__M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &wss_system__M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &wss_system__M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &wss_system__M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &wss_system__M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &wss_system__M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &wss_system__M->solverInfoPtr);
  }

  wss_system__M->Sizes.numSFcns = (38);

  /* register each child */
  {
    (void) memset((void *)&wss_system__M->NonInlinedSFcns.childSFunctions[0], 0,
                  38*sizeof(SimStruct));
    wss_system__M->childSfunctions =
      (&wss_system__M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 38; i++) {
        wss_system__M->childSfunctions[i] =
          (&wss_system__M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: wss_system_/<S27>/Comedi0 ADC3 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi0ADC3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 ADC3");
      ssSetPath(rts,
                "wss_system_/Water Supply System/End-user pres./Comedi0 ADC3");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0ADC3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0ADC3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0ADC3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi0ADC3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi0ADC3_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi0ADC3_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0ADC3_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0ADC3_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0ADC3_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0ADC3_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi0ADC3_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S27>/Comedi0 ADC4 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi0ADC4));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 ADC4");
      ssSetPath(rts,
                "wss_system_/Water Supply System/End-user pres./Comedi0 ADC4");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0ADC4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0ADC4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0ADC4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi0ADC4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi0ADC4_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi0ADC4_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0ADC4_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0ADC4_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0ADC4_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0ADC4_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi0ADC4_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S27>/Comedi2 ADC4 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi2ADC4));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi2 ADC4");
      ssSetPath(rts,
                "wss_system_/Water Supply System/End-user pres./Comedi2 ADC4");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi2ADC4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi2ADC4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi2ADC4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi2ADC4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi2ADC4_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi2ADC4_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi2ADC4_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi2ADC4_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi2ADC4_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi2ADC4_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi2ADC4_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S27>/Comedi2 ADC5 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi2ADC5));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi2 ADC5");
      ssSetPath(rts,
                "wss_system_/Water Supply System/End-user pres./Comedi2 ADC5");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi2ADC5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi2ADC5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi2ADC5_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi2ADC5_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi2ADC5_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi2ADC5_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi2ADC5_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi2ADC5_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi2ADC5_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi2ADC5_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi2ADC5_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S31>/Comedi2 ADC0 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi2ADC0));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi2 ADC0");
      ssSetPath(rts,
                "wss_system_/Water Supply System/Pump rel. pres./Comedi2 ADC0");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi2ADC0_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi2ADC0_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi2ADC0_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi2ADC0_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi2ADC0_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi2ADC0_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi2ADC0_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi2ADC0_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi2ADC0_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi2ADC0_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi2ADC0_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S31>/Comedi0 ADC1 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[5]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[5]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi0ADC1));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 ADC1");
      ssSetPath(rts,
                "wss_system_/Water Supply System/Pump rel. pres./Comedi0 ADC1");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0ADC1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0ADC1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0ADC1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi0ADC1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi0ADC1_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi0ADC1_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0ADC1_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0ADC1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0ADC1_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0ADC1_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi0ADC1_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S31>/Comedi2 ADC1 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[6]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[6]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi2ADC1));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi2 ADC1");
      ssSetPath(rts,
                "wss_system_/Water Supply System/Pump rel. pres./Comedi2 ADC1");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi2ADC1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi2ADC1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi2ADC1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi2ADC1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi2ADC1_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi2ADC1_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi2ADC1_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi2ADC1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi2ADC1_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi2ADC1_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi2ADC1_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S31>/Comedi2 ADC2 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[7]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[7]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi2ADC2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi2 ADC2");
      ssSetPath(rts,
                "wss_system_/Water Supply System/Pump rel. pres./Comedi2 ADC2");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi2ADC2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi2ADC2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi2ADC2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi2ADC2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi2ADC2_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi2ADC2_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi2ADC2_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi2ADC2_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi2ADC2_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi2ADC2_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi2ADC2_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S30>/Comedi2 ADC7 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[8]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[8]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi2ADC7));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi2 ADC7");
      ssSetPath(rts,
                "wss_system_/Water Supply System/Pump diff. pres./Comedi2 ADC7");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi2ADC7_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi2ADC7_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi2ADC7_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi2ADC7_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi2ADC7_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi2ADC7_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi2ADC7_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi2ADC7_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi2ADC7_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi2ADC7_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi2ADC7_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S30>/Comedi0 ADC7 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[9]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[9]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn9.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi0ADC7));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 ADC7");
      ssSetPath(rts,
                "wss_system_/Water Supply System/Pump diff. pres./Comedi0 ADC7");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0ADC7_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0ADC7_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0ADC7_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi0ADC7_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi0ADC7_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi0ADC7_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0ADC7_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0ADC7_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0ADC7_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0ADC7_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi0ADC7_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S30>/Comedi2 ADC3 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[10]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[10]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn10.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi2ADC3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi2 ADC3");
      ssSetPath(rts,
                "wss_system_/Water Supply System/Pump diff. pres./Comedi2 ADC3");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi2ADC3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi2ADC3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi2ADC3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi2ADC3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi2ADC3_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi2ADC3_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi2ADC3_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi2ADC3_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi2ADC3_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi2ADC3_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi2ADC3_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S30>/Comedi0 ADC6 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[11]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[11]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn11.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi0ADC6));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 ADC6");
      ssSetPath(rts,
                "wss_system_/Water Supply System/Pump diff. pres./Comedi0 ADC6");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0ADC6_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0ADC6_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0ADC6_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi0ADC6_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi0ADC6_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi0ADC6_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0ADC6_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0ADC6_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn11.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn11.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0ADC6_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0ADC6_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi0ADC6_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S27>/Comedi0 ADC2 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[12]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[12]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn12.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi0ADC2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 ADC2");
      ssSetPath(rts,
                "wss_system_/Water Supply System/End-user pres./Comedi0 ADC2");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0ADC2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0ADC2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0ADC2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi0ADC2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi0ADC2_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi0ADC2_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0ADC2_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0ADC2_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0ADC2_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0ADC2_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi0ADC2_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S27>/Comedi2 ADC6 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[13]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[13]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn13.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi2ADC6));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi2 ADC6");
      ssSetPath(rts,
                "wss_system_/Water Supply System/End-user pres./Comedi2 ADC6");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi2ADC6_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi2ADC6_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi2ADC6_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi2ADC6_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi2ADC6_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi2ADC6_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi2ADC6_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi2ADC6_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn13.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn13.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi2ADC6_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi2ADC6_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi2ADC6_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S30>/Comedi0 ADC5 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[14]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[14]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn14.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi0ADC5));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 ADC5");
      ssSetPath(rts,
                "wss_system_/Water Supply System/Pump diff. pres./Comedi0 ADC5");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0ADC5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0ADC5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0ADC5_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi0ADC5_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi0ADC5_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi0ADC5_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0ADC5_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0ADC5_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0ADC5_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0ADC5_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi0ADC5_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S31>/Comedi0 ADC0 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[15]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[15]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn15.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi0ADC0));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 ADC0");
      ssSetPath(rts,
                "wss_system_/Water Supply System/Pump rel. pres./Comedi0 ADC0");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0ADC0_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0ADC0_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0ADC0_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi0ADC0_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi0ADC0_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi0ADC0_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0ADC0_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0ADC0_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0ADC0_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0ADC0_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi0ADC0_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S29>/Comedi1 ADC0 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[16]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[16]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn16.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi1ADC0));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi1 ADC0");
      ssSetPath(rts, "wss_system_/Water Supply System/Pump Power/Comedi1 ADC0");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi1ADC0_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi1ADC0_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi1ADC0_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi1ADC0_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi1ADC0_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi1ADC0_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi1ADC0_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi1ADC0_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi1ADC0_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi1ADC0_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi1ADC0_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S29>/Comedi1 ADC1 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[17]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[17]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn17.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi1ADC1));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi1 ADC1");
      ssSetPath(rts, "wss_system_/Water Supply System/Pump Power/Comedi1 ADC1");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi1ADC1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi1ADC1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi1ADC1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi1ADC1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi1ADC1_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi1ADC1_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi1ADC1_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi1ADC1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn17.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn17.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi1ADC1_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi1ADC1_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi1ADC1_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S29>/Comedi1 ADC2 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[18]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[18]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn18.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi1ADC2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi1 ADC2");
      ssSetPath(rts, "wss_system_/Water Supply System/Pump Power/Comedi1 ADC2");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi1ADC2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi1ADC2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi1ADC2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi1ADC2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi1ADC2_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi1ADC2_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi1ADC2_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi1ADC2_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi1ADC2_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi1ADC2_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi1ADC2_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S29>/Comedi1 ADC3 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[19]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[19]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn19.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi1ADC3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi1 ADC3");
      ssSetPath(rts, "wss_system_/Water Supply System/Pump Power/Comedi1 ADC3");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi1ADC3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi1ADC3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi1ADC3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi1ADC3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi1ADC3_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi1ADC3_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi1ADC3_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi1ADC3_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn19.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn19.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi1ADC3_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi1ADC3_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi1ADC3_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S29>/Comedi1 ADC4 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[20]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[20]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn20.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi1ADC4));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi1 ADC4");
      ssSetPath(rts, "wss_system_/Water Supply System/Pump Power/Comedi1 ADC4");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi1ADC4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi1ADC4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi1ADC4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi1ADC4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi1ADC4_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi1ADC4_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi1ADC4_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi1ADC4_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn20.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn20.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi1ADC4_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi1ADC4_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi1ADC4_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S29>/Comedi1 ADC5 (sfun_comedi_ai) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[21]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[21]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn21.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &wss_system__B.Comedi1ADC5));
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi1 ADC5");
      ssSetPath(rts, "wss_system_/Water Supply System/Pump Power/Comedi1 ADC5");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi1ADC5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi1ADC5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi1ADC5_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi1ADC5_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)wss_system__P.Comedi1ADC5_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi1ADC5_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi1ADC5_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi1ADC5_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn21.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn21.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi1ADC5_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi1ADC5_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi1ADC5_PWORK);
      }

      /* registration */
      sfun_comedi_ai(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: wss_system_/<S32>/Comedi2 DAC0 (sfun_comedi_ao) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[22]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[22]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn22.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &wss_system__M->NonInlinedSFcns.Sfcn22.UPtrs0;
          sfcnUPtrs[0] = &wss_system__B.Add2;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi2 DAC0");
      ssSetPath(rts, "wss_system_/Water Supply System/Pumps/Comedi2 DAC0");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi2DAC0_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi2DAC0_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi2DAC0_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi2DAC0_P4_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi2DAC0_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi2DAC0_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi2DAC0_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn22.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn22.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi2DAC0_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi2DAC0_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi2DAC0_PWORK);
      }

      /* registration */
      sfun_comedi_ao(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: wss_system_/<S32>/Comedi2 DAC1 (sfun_comedi_ao) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[23]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[23]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn23.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &wss_system__M->NonInlinedSFcns.Sfcn23.UPtrs0;
          sfcnUPtrs[0] = &wss_system__P.Constant1_Value_m;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi2 DAC1");
      ssSetPath(rts, "wss_system_/Water Supply System/Pumps/Comedi2 DAC1");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi2DAC1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi2DAC1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi2DAC1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi2DAC1_P4_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi2DAC1_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi2DAC1_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi2DAC1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn23.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn23.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi2DAC1_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi2DAC1_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi2DAC1_PWORK);
      }

      /* registration */
      sfun_comedi_ao(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: wss_system_/<S32>/Comedi2 DAC2 (sfun_comedi_ao) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[24]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[24]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn24.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &wss_system__M->NonInlinedSFcns.Sfcn24.UPtrs0;
          sfcnUPtrs[0] = &wss_system__B.Add2_m;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi2 DAC2");
      ssSetPath(rts, "wss_system_/Water Supply System/Pumps/Comedi2 DAC2");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi2DAC2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi2DAC2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi2DAC2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi2DAC2_P4_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi2DAC2_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi2DAC2_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi2DAC2_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn24.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn24.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi2DAC2_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi2DAC2_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi2DAC2_PWORK);
      }

      /* registration */
      sfun_comedi_ao(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: wss_system_/<S32>/Comedi2 DAC3 (sfun_comedi_ao) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[25]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[25]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn25.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &wss_system__M->NonInlinedSFcns.Sfcn25.UPtrs0;
          sfcnUPtrs[0] = &wss_system__B.Add2_g;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi2 DAC3");
      ssSetPath(rts, "wss_system_/Water Supply System/Pumps/Comedi2 DAC3");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi2DAC3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi2DAC3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi2DAC3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi2DAC3_P4_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi2DAC3_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi2DAC3_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi2DAC3_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn25.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn25.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi2DAC3_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi2DAC3_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi2DAC3_PWORK);
      }

      /* registration */
      sfun_comedi_ao(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: wss_system_/<S32>/Comedi0 DAC4 (sfun_comedi_ao) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[26]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[26]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn26.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &wss_system__M->NonInlinedSFcns.Sfcn26.UPtrs0;
          sfcnUPtrs[0] = &wss_system__B.Add2_h;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 DAC4");
      ssSetPath(rts, "wss_system_/Water Supply System/Pumps/Comedi0 DAC4");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0DAC4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0DAC4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0DAC4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi0DAC4_P4_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi0DAC4_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0DAC4_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0DAC4_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn26.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn26.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0DAC4_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0DAC4_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi0DAC4_PWORK);
      }

      /* registration */
      sfun_comedi_ao(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: wss_system_/<S32>/Comedi0 DAC5 (sfun_comedi_ao) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[27];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn27.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn27.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn27.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[27]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[27]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[27]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[27]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn27.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &wss_system__M->NonInlinedSFcns.Sfcn27.UPtrs0;
          sfcnUPtrs[0] = &wss_system__P.Constant6_Value;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 DAC5");
      ssSetPath(rts, "wss_system_/Water Supply System/Pumps/Comedi0 DAC5");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn27.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0DAC5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0DAC5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0DAC5_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi0DAC5_P4_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi0DAC5_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0DAC5_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0DAC5_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn27.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn27.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0DAC5_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0DAC5_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi0DAC5_PWORK);
      }

      /* registration */
      sfun_comedi_ao(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: wss_system_/<S33>/Comedi0 DAC2 (sfun_comedi_ao) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[28];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn28.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn28.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn28.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[28]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[28]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[28]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[28]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn28.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &wss_system__M->NonInlinedSFcns.Sfcn28.UPtrs0;
          sfcnUPtrs[0] = &wss_system__B.Gain_in;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 DAC2");
      ssSetPath(rts, "wss_system_/Water Supply System/Valves/Comedi0 DAC2");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn28.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0DAC2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0DAC2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0DAC2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi0DAC2_P4_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi0DAC2_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0DAC2_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0DAC2_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn28.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn28.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0DAC2_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0DAC2_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi0DAC2_PWORK);
      }

      /* registration */
      sfun_comedi_ao(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: wss_system_/<S33>/Comedi0 DAC1 (sfun_comedi_ao) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[29];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn29.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn29.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn29.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[29]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[29]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[29]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[29]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn29.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &wss_system__M->NonInlinedSFcns.Sfcn29.UPtrs0;
          sfcnUPtrs[0] = &wss_system__B.Gain1_a;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 DAC1");
      ssSetPath(rts, "wss_system_/Water Supply System/Valves/Comedi0 DAC1");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn29.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0DAC1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0DAC1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0DAC1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi0DAC1_P4_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi0DAC1_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0DAC1_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0DAC1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn29.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn29.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0DAC1_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0DAC1_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi0DAC1_PWORK);
      }

      /* registration */
      sfun_comedi_ao(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: wss_system_/<S33>/Comedi2 DAC4 (sfun_comedi_ao) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[30];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn30.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn30.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn30.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[30]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[30]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[30]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[30]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn30.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &wss_system__M->NonInlinedSFcns.Sfcn30.UPtrs0;
          sfcnUPtrs[0] = &wss_system__B.Gain2_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi2 DAC4");
      ssSetPath(rts, "wss_system_/Water Supply System/Valves/Comedi2 DAC4");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn30.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi2DAC4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi2DAC4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi2DAC4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi2DAC4_P4_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi2DAC4_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi2DAC4_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi2DAC4_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn30.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn30.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi2DAC4_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi2DAC4_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi2DAC4_PWORK);
      }

      /* registration */
      sfun_comedi_ao(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: wss_system_/<S33>/Comedi2 DAC5 (sfun_comedi_ao) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[31];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn31.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn31.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn31.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[31]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[31]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[31]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[31]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn31.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &wss_system__M->NonInlinedSFcns.Sfcn31.UPtrs0;
          sfcnUPtrs[0] = &wss_system__B.Gain3_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi2 DAC5");
      ssSetPath(rts, "wss_system_/Water Supply System/Valves/Comedi2 DAC5");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn31.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi2DAC5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi2DAC5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi2DAC5_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi2DAC5_P4_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi2DAC5_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi2DAC5_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi2DAC5_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn31.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn31.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi2DAC5_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi2DAC5_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi2DAC5_PWORK);
      }

      /* registration */
      sfun_comedi_ao(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: wss_system_/<S33>/Comedi0 DAC0 (sfun_comedi_ao) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[32];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn32.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn32.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn32.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[32]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[32]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[32]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[32]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn32.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &wss_system__M->NonInlinedSFcns.Sfcn32.UPtrs0;
          sfcnUPtrs[0] = &wss_system__B.Gain4_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 DAC0");
      ssSetPath(rts, "wss_system_/Water Supply System/Valves/Comedi0 DAC0");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn32.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0DAC0_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0DAC0_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0DAC0_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi0DAC0_P4_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi0DAC0_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0DAC0_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0DAC0_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn32.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn32.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0DAC0_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0DAC0_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi0DAC0_PWORK);
      }

      /* registration */
      sfun_comedi_ao(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: wss_system_/<S33>/Comedi2  DAC6 (sfun_comedi_ao) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[33];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn33.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn33.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn33.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[33]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[33]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[33]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[33]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn33.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &wss_system__M->NonInlinedSFcns.Sfcn33.UPtrs0;
          sfcnUPtrs[0] = &wss_system__B.Gain5;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi2\n DAC6");
      ssSetPath(rts, "wss_system_/Water Supply System/Valves/Comedi2  DAC6");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn33.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi2DAC6_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi2DAC6_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi2DAC6_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)wss_system__P.Comedi2DAC6_P4_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &wss_system__DWork.Comedi2DAC6_RWORK[0]);
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi2DAC6_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi2DAC6_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn33.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn33.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi2DAC6_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi2DAC6_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &wss_system__DWork.Comedi2DAC6_PWORK);
      }

      /* registration */
      sfun_comedi_ao(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: wss_system_/<S28>/Comedi0 DO0 (sfun_comedi_do) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[34];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn34.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn34.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn34.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[34]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[34]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[34]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[34]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn34.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &wss_system__M->NonInlinedSFcns.Sfcn34.UPtrs0;
          sfcnUPtrs[0] = &wss_system__P.Constant13_Value;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 DO0");
      ssSetPath(rts, "wss_system_/Water Supply System/Mag Valves/Comedi0 DO0");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn34.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0DO0_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0DO0_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0DO0_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0DO0_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0DO0_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn34.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn34.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0DO0_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0DO0_PWORK);
      }

      /* registration */
      sfun_comedi_do(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: wss_system_/<S28>/Comedi0 DO1 (sfun_comedi_do) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[35];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn35.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn35.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn35.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[35]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[35]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[35]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[35]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn35.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &wss_system__M->NonInlinedSFcns.Sfcn35.UPtrs0;
          sfcnUPtrs[0] = &wss_system__P.Constant13_Value;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 DO1");
      ssSetPath(rts, "wss_system_/Water Supply System/Mag Valves/Comedi0 DO1");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn35.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0DO1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0DO1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0DO1_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0DO1_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0DO1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn35.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn35.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0DO1_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0DO1_PWORK);
      }

      /* registration */
      sfun_comedi_do(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: wss_system_/<S28>/Comedi0 DO2 (sfun_comedi_do) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[36];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn36.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn36.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn36.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[36]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[36]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[36]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[36]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn36.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &wss_system__M->NonInlinedSFcns.Sfcn36.UPtrs0;
          sfcnUPtrs[0] = &wss_system__P.Constant13_Value;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 DO2");
      ssSetPath(rts, "wss_system_/Water Supply System/Mag Valves/Comedi0 DO2");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn36.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0DO2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0DO2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0DO2_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0DO2_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0DO2_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn36.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn36.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0DO2_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0DO2_PWORK);
      }

      /* registration */
      sfun_comedi_do(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: wss_system_/<S28>/Comedi0 DO3 (sfun_comedi_do) */
    {
      SimStruct *rts = wss_system__M->childSfunctions[37];

      /* timing info */
      time_T *sfcnPeriod = wss_system__M->NonInlinedSFcns.Sfcn37.sfcnPeriod;
      time_T *sfcnOffset = wss_system__M->NonInlinedSFcns.Sfcn37.sfcnOffset;
      int_T *sfcnTsMap = wss_system__M->NonInlinedSFcns.Sfcn37.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &wss_system__M->NonInlinedSFcns.blkInfo2[37]);
      }

      ssSetRTWSfcnInfo(rts, wss_system__M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &wss_system__M->NonInlinedSFcns.methods2[37]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &wss_system__M->NonInlinedSFcns.methods3[37]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &wss_system__M->NonInlinedSFcns.statesInfo2[37]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &wss_system__M->NonInlinedSFcns.Sfcn37.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &wss_system__M->NonInlinedSFcns.Sfcn37.UPtrs0;
          sfcnUPtrs[0] = &wss_system__P.Constant13_Value;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Comedi0 DO3");
      ssSetPath(rts, "wss_system_/Water Supply System/Mag Valves/Comedi0 DO3");
      ssSetRTModel(rts,wss_system__M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &wss_system__M->NonInlinedSFcns.Sfcn37.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)wss_system__P.Comedi0DO3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)wss_system__P.Comedi0DO3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)wss_system__P.Comedi0DO3_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &wss_system__DWork.Comedi0DO3_IWORK);
      ssSetPWork(rts, (void **) &wss_system__DWork.Comedi0DO3_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn37.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &wss_system__M->NonInlinedSFcns.Sfcn37.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &wss_system__DWork.Comedi0DO3_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &wss_system__DWork.Comedi0DO3_PWORK);
      }

      /* registration */
      sfun_comedi_do(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  wss_system__M->Sizes.numContStates = (0);/* Number of continuous states */
  wss_system__M->Sizes.numY = (0);     /* Number of model outputs */
  wss_system__M->Sizes.numU = (0);     /* Number of model inputs */
  wss_system__M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  wss_system__M->Sizes.numSampTimes = (2);/* Number of sample times */
  wss_system__M->Sizes.numBlocks = (345);/* Number of blocks */
  wss_system__M->Sizes.numBlockIO = (101);/* Number of block outputs */
  wss_system__M->Sizes.numBlockPrms = (1058);/* Sum of parameter "widths" */
  return wss_system__M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
