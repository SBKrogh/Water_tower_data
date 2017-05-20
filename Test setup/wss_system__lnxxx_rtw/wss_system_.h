/*
 * wss_system_.h
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
#ifndef RTW_HEADER_wss_system__h_
#define RTW_HEADER_wss_system__h_
#ifndef wss_system__COMMON_INCLUDES_
# define wss_system__COMMON_INCLUDES_
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "rt_defines.h"
#include "rt_look.h"
#include "rt_look1d.h"
#include "rt_nonfinite.h"
#endif                                 /* wss_system__COMMON_INCLUDES_ */

#include "wss_system__types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->Work.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->Work.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->Work.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->Work.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTime
# define rtmGetVarNextHitTime(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTime
# define rtmSetVarNextHitTime(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define wss_system__rtModel            RT_MODEL_wss_system_

/* Block signals (auto storage) */
typedef struct {
  real_T Comedi0ADC3;                  /* '<S27>/Comedi0 ADC3' */
  real_T Gain;                         /* '<S27>/Gain' */
  real_T Integ4;                       /* '<S17>/Integ4' */
  real_T SFunction;                    /* '<S21>/S-Function ' */
  real_T Switch;                       /* '<S17>/Switch' */
  real_T Comedi0ADC4;                  /* '<S27>/Comedi0 ADC4' */
  real_T Gain1;                        /* '<S27>/Gain1' */
  real_T Integ4_f;                     /* '<S18>/Integ4' */
  real_T SFunction_d;                  /* '<S22>/S-Function ' */
  real_T Switch_d;                     /* '<S18>/Switch' */
  real_T Comedi2ADC4;                  /* '<S27>/Comedi2 ADC4' */
  real_T Gain2;                        /* '<S27>/Gain2' */
  real_T Integ4_d;                     /* '<S19>/Integ4' */
  real_T SFunction_j;                  /* '<S23>/S-Function ' */
  real_T Switch_k;                     /* '<S19>/Switch' */
  real_T Comedi2ADC5;                  /* '<S27>/Comedi2 ADC5' */
  real_T Gain3;                        /* '<S27>/Gain3' */
  real_T Integ4_ff;                    /* '<S20>/Integ4' */
  real_T SFunction_dm;                 /* '<S24>/S-Function ' */
  real_T Switch_a;                     /* '<S20>/Switch' */
  real_T Comedi2ADC0;                  /* '<S31>/Comedi2 ADC0' */
  real_T Gain_n;                       /* '<S31>/Gain' */
  real_T Integ4_a;                     /* '<S45>/Integ4' */
  real_T SFunction_jd;                 /* '<S49>/S-Function ' */
  real_T Comedi0ADC1;                  /* '<S31>/Comedi0 ADC1' */
  real_T Gain1_d;                      /* '<S31>/Gain1' */
  real_T Integ4_b;                     /* '<S42>/Integ4' */
  real_T SFunction_l;                  /* '<S46>/S-Function ' */
  real_T Comedi2ADC1;                  /* '<S31>/Comedi2 ADC1' */
  real_T Gain2_h;                      /* '<S31>/Gain2' */
  real_T Integ4_l;                     /* '<S43>/Integ4' */
  real_T SFunction_b;                  /* '<S47>/S-Function ' */
  real_T Comedi2ADC2;                  /* '<S31>/Comedi2 ADC2' */
  real_T Gain3_k;                      /* '<S31>/Gain3' */
  real_T Integ4_b2;                    /* '<S44>/Integ4' */
  real_T SFunction_m;                  /* '<S48>/S-Function ' */
  real_T Comedi2ADC7;                  /* '<S30>/Comedi2 ADC7' */
  real_T Gain_i;                       /* '<S30>/Gain' */
  real_T Integ4_e;                     /* '<S37>/Integ4' */
  real_T SFunction_bt;                 /* '<S41>/S-Function ' */
  real_T Switch_n;                     /* '<S37>/Switch' */
  real_T Comedi0ADC7;                  /* '<S30>/Comedi0 ADC7' */
  real_T Gain1_i;                      /* '<S30>/Gain1' */
  real_T Integ4_o;                     /* '<S34>/Integ4' */
  real_T SFunction_dl;                 /* '<S38>/S-Function ' */
  real_T Switch_l;                     /* '<S34>/Switch' */
  real_T Comedi2ADC3;                  /* '<S30>/Comedi2 ADC3' */
  real_T Gain2_hi;                     /* '<S30>/Gain2' */
  real_T Integ4_f1;                    /* '<S35>/Integ4' */
  real_T SFunction_g;                  /* '<S39>/S-Function ' */
  real_T Switch_do;                    /* '<S35>/Switch' */
  real_T Comedi0ADC6;                  /* '<S30>/Comedi0 ADC6' */
  real_T Gain3_a;                      /* '<S30>/Gain3' */
  real_T Integ4_dg;                    /* '<S36>/Integ4' */
  real_T SFunction_gz;                 /* '<S40>/S-Function ' */
  real_T Switch_kz;                    /* '<S36>/Switch' */
  real_T Constant8;                    /* '<Root>/Constant8' */
  real_T Constant5;                    /* '<Root>/Constant5' */
  real_T Constant9;                    /* '<Root>/Constant9' */
  real_T LookUpTable;                  /* '<S12>/Look-Up Table' */
  real_T Comedi0ADC2;                  /* '<S27>/Comedi0 ADC2' */
  real_T Gain4;                        /* '<S27>/Gain4' */
  real_T Integ4_g;                     /* '<S25>/Integ4' */
  real_T SFunction_ge;                 /* '<S26>/S-Function ' */
  real_T Switch_nj;                    /* '<S25>/Switch' */
  real_T Add2;                         /* '<S4>/Add2' */
  real_T Add2_m;                       /* '<S1>/Add2' */
  real_T Add2_g;                       /* '<S2>/Add2' */
  real_T Add2_h;                       /* '<S3>/Add2' */
  real_T Gain_iz;                      /* '<S1>/Gain' */
  real_T Gain_b;                       /* '<S2>/Gain' */
  real_T Gain_c;                       /* '<S3>/Gain' */
  real_T Gain_l;                       /* '<S4>/Gain' */
  real_T Derivative;                   /* '<S12>/Derivative' */
  real_T Comedi2ADC6;                  /* '<S27>/Comedi2 ADC6' */
  real_T Comedi0ADC5;                  /* '<S30>/Comedi0 ADC5' */
  real_T Comedi0ADC0;                  /* '<S31>/Comedi0 ADC0' */
  real_T Comedi1ADC0;                  /* '<S29>/Comedi1 ADC0' */
  real_T Comedi1ADC1;                  /* '<S29>/Comedi1 ADC1' */
  real_T Comedi1ADC2;                  /* '<S29>/Comedi1 ADC2' */
  real_T Comedi1ADC3;                  /* '<S29>/Comedi1 ADC3' */
  real_T Comedi1ADC4;                  /* '<S29>/Comedi1 ADC4' */
  real_T Comedi1ADC5;                  /* '<S29>/Comedi1 ADC5' */
  real_T Gain_in;                      /* '<S33>/Gain' */
  real_T Gain1_a;                      /* '<S33>/Gain1' */
  real_T Gain2_i;                      /* '<S33>/Gain2' */
  real_T Gain3_i;                      /* '<S33>/Gain3' */
  real_T Gain4_n;                      /* '<S33>/Gain4' */
  real_T Gain5;                        /* '<S33>/Gain5' */
  real_T LookUpTable_p;                /* '<S6>/Look-Up Table' */
  real_T Derivative_o;                 /* '<S6>/Derivative' */
  real_T LookUpTable_m;                /* '<S7>/Look-Up Table' */
  real_T Derivative_m;                 /* '<S7>/Derivative' */
  real_T LookUpTable_b;                /* '<S8>/Look-Up Table' */
  real_T Derivative_k;                 /* '<S8>/Derivative' */
  real_T LookUpTable_bh;               /* '<S9>/Look-Up Table' */
  real_T Derivative_f;                 /* '<S9>/Derivative' */
  real_T LookUpTable_e;                /* '<S10>/Look-Up Table' */
  real_T Derivative_e;                 /* '<S10>/Derivative' */
  real_T LookUpTable_j;                /* '<S11>/Look-Up Table' */
  real_T Derivative_oi;                /* '<S11>/Derivative' */
} BlockIO_wss_system_;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Integ4_DSTATE;                /* '<S17>/Integ4' */
  real_T UnitDelay_DSTATE;             /* '<S17>/Unit Delay' */
  real_T Integ4_DSTATE_g;              /* '<S18>/Integ4' */
  real_T UnitDelay_DSTATE_n;           /* '<S18>/Unit Delay' */
  real_T Integ4_DSTATE_d;              /* '<S19>/Integ4' */
  real_T UnitDelay_DSTATE_e;           /* '<S19>/Unit Delay' */
  real_T Integ4_DSTATE_h;              /* '<S20>/Integ4' */
  real_T UnitDelay_DSTATE_b;           /* '<S20>/Unit Delay' */
  real_T Integ4_DSTATE_a;              /* '<S45>/Integ4' */
  real_T UnitDelay_DSTATE_c;           /* '<S45>/Unit Delay' */
  real_T Integ4_DSTATE_j;              /* '<S42>/Integ4' */
  real_T UnitDelay_DSTATE_k;           /* '<S42>/Unit Delay' */
  real_T Integ4_DSTATE_k;              /* '<S43>/Integ4' */
  real_T UnitDelay_DSTATE_d;           /* '<S43>/Unit Delay' */
  real_T Integ4_DSTATE_b;              /* '<S44>/Integ4' */
  real_T UnitDelay_DSTATE_p;           /* '<S44>/Unit Delay' */
  real_T Integ4_DSTATE_hy;             /* '<S37>/Integ4' */
  real_T UnitDelay_DSTATE_f;           /* '<S37>/Unit Delay' */
  real_T Integ4_DSTATE_e;              /* '<S34>/Integ4' */
  real_T UnitDelay_DSTATE_f4;          /* '<S34>/Unit Delay' */
  real_T Integ4_DSTATE_ag;             /* '<S35>/Integ4' */
  real_T UnitDelay_DSTATE_kc;          /* '<S35>/Unit Delay' */
  real_T Integ4_DSTATE_o;              /* '<S36>/Integ4' */
  real_T UnitDelay_DSTATE_nt;          /* '<S36>/Unit Delay' */
  real_T Integ4_DSTATE_kk;             /* '<S25>/Integ4' */
  real_T UnitDelay_DSTATE_m;           /* '<S25>/Unit Delay' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S4>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_d;/* '<S1>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_b;/* '<S2>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_a;/* '<S3>/Discrete-Time Integrator' */
  real_T Comedi0ADC3_RWORK[2];         /* '<S27>/Comedi0 ADC3' */
  real_T Comedi0ADC4_RWORK[2];         /* '<S27>/Comedi0 ADC4' */
  real_T Comedi2ADC4_RWORK[2];         /* '<S27>/Comedi2 ADC4' */
  real_T Comedi2ADC5_RWORK[2];         /* '<S27>/Comedi2 ADC5' */
  real_T Comedi2ADC0_RWORK[2];         /* '<S31>/Comedi2 ADC0' */
  real_T Comedi0ADC1_RWORK[2];         /* '<S31>/Comedi0 ADC1' */
  real_T Comedi2ADC1_RWORK[2];         /* '<S31>/Comedi2 ADC1' */
  real_T Comedi2ADC2_RWORK[2];         /* '<S31>/Comedi2 ADC2' */
  real_T Comedi2ADC7_RWORK[2];         /* '<S30>/Comedi2 ADC7' */
  real_T Comedi0ADC7_RWORK[2];         /* '<S30>/Comedi0 ADC7' */
  real_T Comedi2ADC3_RWORK[2];         /* '<S30>/Comedi2 ADC3' */
  real_T Comedi0ADC6_RWORK[2];         /* '<S30>/Comedi0 ADC6' */
  real_T Comedi0ADC2_RWORK[2];         /* '<S27>/Comedi0 ADC2' */
  struct {
    real_T TimeStampA;
    real_T LastUAtTimeA;
    real_T TimeStampB;
    real_T LastUAtTimeB;
  } Derivative_RWORK;                  /* '<S12>/Derivative' */

  real_T Comedi2ADC6_RWORK[2];         /* '<S27>/Comedi2 ADC6' */
  real_T Comedi0ADC5_RWORK[2];         /* '<S30>/Comedi0 ADC5' */
  real_T Comedi0ADC0_RWORK[2];         /* '<S31>/Comedi0 ADC0' */
  real_T Comedi1ADC0_RWORK[2];         /* '<S29>/Comedi1 ADC0' */
  real_T Comedi1ADC1_RWORK[2];         /* '<S29>/Comedi1 ADC1' */
  real_T Comedi1ADC2_RWORK[2];         /* '<S29>/Comedi1 ADC2' */
  real_T Comedi1ADC3_RWORK[2];         /* '<S29>/Comedi1 ADC3' */
  real_T Comedi1ADC4_RWORK[2];         /* '<S29>/Comedi1 ADC4' */
  real_T Comedi1ADC5_RWORK[2];         /* '<S29>/Comedi1 ADC5' */
  real_T Comedi2DAC0_RWORK[2];         /* '<S32>/Comedi2 DAC0' */
  real_T Comedi2DAC1_RWORK[2];         /* '<S32>/Comedi2 DAC1' */
  real_T Comedi2DAC2_RWORK[2];         /* '<S32>/Comedi2 DAC2' */
  real_T Comedi2DAC3_RWORK[2];         /* '<S32>/Comedi2 DAC3' */
  real_T Comedi0DAC4_RWORK[2];         /* '<S32>/Comedi0 DAC4' */
  real_T Comedi0DAC5_RWORK[2];         /* '<S32>/Comedi0 DAC5' */
  real_T Comedi0DAC2_RWORK[2];         /* '<S33>/Comedi0 DAC2' */
  real_T Comedi0DAC1_RWORK[2];         /* '<S33>/Comedi0 DAC1' */
  real_T Comedi2DAC4_RWORK[2];         /* '<S33>/Comedi2 DAC4' */
  real_T Comedi2DAC5_RWORK[2];         /* '<S33>/Comedi2 DAC5' */
  real_T Comedi0DAC0_RWORK[2];         /* '<S33>/Comedi0 DAC0' */
  real_T Comedi2DAC6_RWORK[2];         /* '<S33>/Comedi2  DAC6' */
  struct {
    real_T TimeStampA;
    real_T LastUAtTimeA;
    real_T TimeStampB;
    real_T LastUAtTimeB;
  } Derivative_RWORK_e;                /* '<S6>/Derivative' */

  struct {
    real_T TimeStampA;
    real_T LastUAtTimeA;
    real_T TimeStampB;
    real_T LastUAtTimeB;
  } Derivative_RWORK_l;                /* '<S7>/Derivative' */

  struct {
    real_T TimeStampA;
    real_T LastUAtTimeA;
    real_T TimeStampB;
    real_T LastUAtTimeB;
  } Derivative_RWORK_h;                /* '<S8>/Derivative' */

  struct {
    real_T TimeStampA;
    real_T LastUAtTimeA;
    real_T TimeStampB;
    real_T LastUAtTimeB;
  } Derivative_RWORK_o;                /* '<S9>/Derivative' */

  struct {
    real_T TimeStampA;
    real_T LastUAtTimeA;
    real_T TimeStampB;
    real_T LastUAtTimeB;
  } Derivative_RWORK_m;                /* '<S10>/Derivative' */

  struct {
    real_T TimeStampA;
    real_T LastUAtTimeA;
    real_T TimeStampB;
    real_T LastUAtTimeB;
  } Derivative_RWORK_p;                /* '<S11>/Derivative' */

  void *Comedi0ADC3_PWORK;             /* '<S27>/Comedi0 ADC3' */
  struct {
    void *uBuffers;
  } SFunction_PWORK;                   /* '<S21>/S-Function ' */

  void *Comedi0ADC4_PWORK;             /* '<S27>/Comedi0 ADC4' */
  struct {
    void *uBuffers;
  } SFunction_PWORK_f;                 /* '<S22>/S-Function ' */

  void *Comedi2ADC4_PWORK;             /* '<S27>/Comedi2 ADC4' */
  struct {
    void *uBuffers;
  } SFunction_PWORK_c;                 /* '<S23>/S-Function ' */

  void *Comedi2ADC5_PWORK;             /* '<S27>/Comedi2 ADC5' */
  struct {
    void *uBuffers;
  } SFunction_PWORK_a;                 /* '<S24>/S-Function ' */

  struct {
    void *LoggedData;
  } PMA_pressures_PWORK;               /* '<Root>/PMA_pressures' */

  void *Comedi2ADC0_PWORK;             /* '<S31>/Comedi2 ADC0' */
  struct {
    void *uBuffers;
  } SFunction_PWORK_i;                 /* '<S49>/S-Function ' */

  void *Comedi0ADC1_PWORK;             /* '<S31>/Comedi0 ADC1' */
  struct {
    void *uBuffers;
  } SFunction_PWORK_j;                 /* '<S46>/S-Function ' */

  void *Comedi2ADC1_PWORK;             /* '<S31>/Comedi2 ADC1' */
  struct {
    void *uBuffers;
  } SFunction_PWORK_n;                 /* '<S47>/S-Function ' */

  void *Comedi2ADC2_PWORK;             /* '<S31>/Comedi2 ADC2' */
  struct {
    void *uBuffers;
  } SFunction_PWORK_g;                 /* '<S48>/S-Function ' */

  struct {
    void *FilePtr;
  } ToFile_PWORK;                      /* '<Root>/To File' */

  void *Comedi2ADC7_PWORK;             /* '<S30>/Comedi2 ADC7' */
  struct {
    void *uBuffers;
  } SFunction_PWORK_b;                 /* '<S41>/S-Function ' */

  void *Comedi0ADC7_PWORK;             /* '<S30>/Comedi0 ADC7' */
  struct {
    void *uBuffers;
  } SFunction_PWORK_l;                 /* '<S38>/S-Function ' */

  void *Comedi2ADC3_PWORK;             /* '<S30>/Comedi2 ADC3' */
  struct {
    void *uBuffers;
  } SFunction_PWORK_it;                /* '<S39>/S-Function ' */

  void *Comedi0ADC6_PWORK;             /* '<S30>/Comedi0 ADC6' */
  struct {
    void *uBuffers;
  } SFunction_PWORK_p;                 /* '<S40>/S-Function ' */

  struct {
    void *FilePtr;
  } ToFile1_PWORK;                     /* '<Root>/To File1' */

  struct {
    void *FilePtr;
  } ToFile2_PWORK;                     /* '<Root>/To File2' */

  void *Comedi0ADC2_PWORK;             /* '<S27>/Comedi0 ADC2' */
  struct {
    void *uBuffers;
  } SFunction_PWORK_o;                 /* '<S26>/S-Function ' */

  struct {
    void *FilePtr;
  } ToFile3_PWORK;                     /* '<Root>/To File3' */

  struct {
    void *FilePtr;
  } ToFile4_PWORK;                     /* '<Root>/To File4' */

  struct {
    void *FilePtr;
  } ToFile5_PWORK;                     /* '<Root>/To File5' */

  struct {
    void *FilePtr;
  } ToFile6_PWORK;                     /* '<Root>/To File6' */

  struct {
    void *LoggedData;
  } WT_pressure_PWORK;                 /* '<Root>/WT_pressure' */

  struct {
    void *LoggedData;
  } diffp1_PWORK;                      /* '<Root>/diff p1' */

  struct {
    void *LoggedData;
  } opn_deg_PWORK;                     /* '<Root>/opn_deg' */

  void *Comedi2ADC6_PWORK;             /* '<S27>/Comedi2 ADC6' */
  void *Comedi0ADC5_PWORK;             /* '<S30>/Comedi0 ADC5' */
  void *Comedi0ADC0_PWORK;             /* '<S31>/Comedi0 ADC0' */
  void *Comedi1ADC0_PWORK;             /* '<S29>/Comedi1 ADC0' */
  void *Comedi1ADC1_PWORK;             /* '<S29>/Comedi1 ADC1' */
  void *Comedi1ADC2_PWORK;             /* '<S29>/Comedi1 ADC2' */
  void *Comedi1ADC3_PWORK;             /* '<S29>/Comedi1 ADC3' */
  void *Comedi1ADC4_PWORK;             /* '<S29>/Comedi1 ADC4' */
  void *Comedi1ADC5_PWORK;             /* '<S29>/Comedi1 ADC5' */
  void *Comedi2DAC0_PWORK;             /* '<S32>/Comedi2 DAC0' */
  void *Comedi2DAC1_PWORK;             /* '<S32>/Comedi2 DAC1' */
  void *Comedi2DAC2_PWORK;             /* '<S32>/Comedi2 DAC2' */
  void *Comedi2DAC3_PWORK;             /* '<S32>/Comedi2 DAC3' */
  void *Comedi0DAC4_PWORK;             /* '<S32>/Comedi0 DAC4' */
  void *Comedi0DAC5_PWORK;             /* '<S32>/Comedi0 DAC5' */
  void *Comedi0DAC2_PWORK;             /* '<S33>/Comedi0 DAC2' */
  void *Comedi0DAC1_PWORK;             /* '<S33>/Comedi0 DAC1' */
  void *Comedi2DAC4_PWORK;             /* '<S33>/Comedi2 DAC4' */
  void *Comedi2DAC5_PWORK;             /* '<S33>/Comedi2 DAC5' */
  void *Comedi0DAC0_PWORK;             /* '<S33>/Comedi0 DAC0' */
  void *Comedi2DAC6_PWORK;             /* '<S33>/Comedi2  DAC6' */
  void *Comedi0DO0_PWORK;              /* '<S28>/Comedi0 DO0' */
  void *Comedi0DO1_PWORK;              /* '<S28>/Comedi0 DO1' */
  void *Comedi0DO2_PWORK;              /* '<S28>/Comedi0 DO2' */
  void *Comedi0DO3_PWORK;              /* '<S28>/Comedi0 DO3' */
  int_T Comedi0ADC3_IWORK;             /* '<S27>/Comedi0 ADC3' */
  struct {
    int_T indBeg;
    int_T indEnd;
    int_T bufSz;
    int_T maxDiscrDelay;
  } SFunction_IWORK;                   /* '<S21>/S-Function ' */

  int_T Comedi0ADC4_IWORK;             /* '<S27>/Comedi0 ADC4' */
  struct {
    int_T indBeg;
    int_T indEnd;
    int_T bufSz;
    int_T maxDiscrDelay;
  } SFunction_IWORK_a;                 /* '<S22>/S-Function ' */

  int_T Comedi2ADC4_IWORK;             /* '<S27>/Comedi2 ADC4' */
  struct {
    int_T indBeg;
    int_T indEnd;
    int_T bufSz;
    int_T maxDiscrDelay;
  } SFunction_IWORK_b;                 /* '<S23>/S-Function ' */

  int_T Comedi2ADC5_IWORK;             /* '<S27>/Comedi2 ADC5' */
  struct {
    int_T indBeg;
    int_T indEnd;
    int_T bufSz;
    int_T maxDiscrDelay;
  } SFunction_IWORK_o;                 /* '<S24>/S-Function ' */

  int_T Comedi2ADC0_IWORK;             /* '<S31>/Comedi2 ADC0' */
  struct {
    int_T indBeg;
    int_T indEnd;
    int_T bufSz;
    int_T maxDiscrDelay;
  } SFunction_IWORK_aa;                /* '<S49>/S-Function ' */

  int_T Comedi0ADC1_IWORK;             /* '<S31>/Comedi0 ADC1' */
  struct {
    int_T indBeg;
    int_T indEnd;
    int_T bufSz;
    int_T maxDiscrDelay;
  } SFunction_IWORK_f;                 /* '<S46>/S-Function ' */

  int_T Comedi2ADC1_IWORK;             /* '<S31>/Comedi2 ADC1' */
  struct {
    int_T indBeg;
    int_T indEnd;
    int_T bufSz;
    int_T maxDiscrDelay;
  } SFunction_IWORK_l;                 /* '<S47>/S-Function ' */

  int_T Comedi2ADC2_IWORK;             /* '<S31>/Comedi2 ADC2' */
  struct {
    int_T indBeg;
    int_T indEnd;
    int_T bufSz;
    int_T maxDiscrDelay;
  } SFunction_IWORK_ob;                /* '<S48>/S-Function ' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile_IWORK;                      /* '<Root>/To File' */

  int_T Comedi2ADC7_IWORK;             /* '<S30>/Comedi2 ADC7' */
  struct {
    int_T indBeg;
    int_T indEnd;
    int_T bufSz;
    int_T maxDiscrDelay;
  } SFunction_IWORK_fw;                /* '<S41>/S-Function ' */

  int_T Comedi0ADC7_IWORK;             /* '<S30>/Comedi0 ADC7' */
  struct {
    int_T indBeg;
    int_T indEnd;
    int_T bufSz;
    int_T maxDiscrDelay;
  } SFunction_IWORK_e;                 /* '<S38>/S-Function ' */

  int_T Comedi2ADC3_IWORK;             /* '<S30>/Comedi2 ADC3' */
  struct {
    int_T indBeg;
    int_T indEnd;
    int_T bufSz;
    int_T maxDiscrDelay;
  } SFunction_IWORK_al;                /* '<S39>/S-Function ' */

  int_T Comedi0ADC6_IWORK;             /* '<S30>/Comedi0 ADC6' */
  struct {
    int_T indBeg;
    int_T indEnd;
    int_T bufSz;
    int_T maxDiscrDelay;
  } SFunction_IWORK_m;                 /* '<S40>/S-Function ' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile1_IWORK;                     /* '<Root>/To File1' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile2_IWORK;                     /* '<Root>/To File2' */

  int_T Comedi0ADC2_IWORK;             /* '<S27>/Comedi0 ADC2' */
  struct {
    int_T indBeg;
    int_T indEnd;
    int_T bufSz;
    int_T maxDiscrDelay;
  } SFunction_IWORK_p;                 /* '<S26>/S-Function ' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile3_IWORK;                     /* '<Root>/To File3' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile4_IWORK;                     /* '<Root>/To File4' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile5_IWORK;                     /* '<Root>/To File5' */

  struct {
    int_T Count;
    int_T Decimation;
  } ToFile6_IWORK;                     /* '<Root>/To File6' */

  int_T Comedi2ADC6_IWORK;             /* '<S27>/Comedi2 ADC6' */
  int_T Comedi0ADC5_IWORK;             /* '<S30>/Comedi0 ADC5' */
  int_T Comedi0ADC0_IWORK;             /* '<S31>/Comedi0 ADC0' */
  int_T Comedi1ADC0_IWORK;             /* '<S29>/Comedi1 ADC0' */
  int_T Comedi1ADC1_IWORK;             /* '<S29>/Comedi1 ADC1' */
  int_T Comedi1ADC2_IWORK;             /* '<S29>/Comedi1 ADC2' */
  int_T Comedi1ADC3_IWORK;             /* '<S29>/Comedi1 ADC3' */
  int_T Comedi1ADC4_IWORK;             /* '<S29>/Comedi1 ADC4' */
  int_T Comedi1ADC5_IWORK;             /* '<S29>/Comedi1 ADC5' */
  int_T Comedi2DAC0_IWORK;             /* '<S32>/Comedi2 DAC0' */
  int_T Comedi2DAC1_IWORK;             /* '<S32>/Comedi2 DAC1' */
  int_T Comedi2DAC2_IWORK;             /* '<S32>/Comedi2 DAC2' */
  int_T Comedi2DAC3_IWORK;             /* '<S32>/Comedi2 DAC3' */
  int_T Comedi0DAC4_IWORK;             /* '<S32>/Comedi0 DAC4' */
  int_T Comedi0DAC5_IWORK;             /* '<S32>/Comedi0 DAC5' */
  int_T Comedi0DAC2_IWORK;             /* '<S33>/Comedi0 DAC2' */
  int_T Comedi0DAC1_IWORK;             /* '<S33>/Comedi0 DAC1' */
  int_T Comedi2DAC4_IWORK;             /* '<S33>/Comedi2 DAC4' */
  int_T Comedi2DAC5_IWORK;             /* '<S33>/Comedi2 DAC5' */
  int_T Comedi0DAC0_IWORK;             /* '<S33>/Comedi0 DAC0' */
  int_T Comedi2DAC6_IWORK;             /* '<S33>/Comedi2  DAC6' */
  int_T Comedi0DO0_IWORK;              /* '<S28>/Comedi0 DO0' */
  int_T Comedi0DO1_IWORK;              /* '<S28>/Comedi0 DO1' */
  int_T Comedi0DO2_IWORK;              /* '<S28>/Comedi0 DO2' */
  int_T Comedi0DO3_IWORK;              /* '<S28>/Comedi0 DO3' */
  uint8_T Integ4_SYSTEM_ENABLE;        /* '<S17>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_f;      /* '<S18>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_e;      /* '<S19>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_g;      /* '<S20>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_fl;     /* '<S45>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_o;      /* '<S42>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_k;      /* '<S43>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_a;      /* '<S44>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_d;      /* '<S37>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_df;     /* '<S34>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_b;      /* '<S35>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_m;      /* '<S36>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_i;      /* '<S25>/Integ4' */
} D_Work_wss_system_;

/* Backward compatible GRT Identifiers */
#define rtB                            wss_system__B
#define BlockIO                        BlockIO_wss_system_
#define rtXdot                         wss_system__Xdot
#define StateDerivatives               StateDerivatives_wss_system_
#define tXdis                          wss_system__Xdis
#define StateDisabled                  StateDisabled_wss_system_
#define rtP                            wss_system__P
#define Parameters                     Parameters_wss_system_
#define rtDWork                        wss_system__DWork
#define D_Work                         D_Work_wss_system_

/* Parameters (auto storage) */
struct Parameters_wss_system__ {
  real_T Gain_Gain;                    /* Expression: K1
                                        * Referenced by: '<S17>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: K2
                                        * Referenced by: '<S17>/Gain1'
                                        */
  real_T Gain_Gain_n;                  /* Expression: K1
                                        * Referenced by: '<S18>/Gain'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: K2
                                        * Referenced by: '<S18>/Gain1'
                                        */
  real_T Gain_Gain_d;                  /* Expression: K1
                                        * Referenced by: '<S19>/Gain'
                                        */
  real_T Gain1_Gain_b;                 /* Expression: K2
                                        * Referenced by: '<S19>/Gain1'
                                        */
  real_T Gain_Gain_l;                  /* Expression: K1
                                        * Referenced by: '<S20>/Gain'
                                        */
  real_T Gain1_Gain_c;                 /* Expression: K2
                                        * Referenced by: '<S20>/Gain1'
                                        */
  real_T Gain_Gain_dt;                 /* Expression: K1
                                        * Referenced by: '<S25>/Gain'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: K2
                                        * Referenced by: '<S25>/Gain1'
                                        */
  real_T Gain_Gain_f;                  /* Expression: K1
                                        * Referenced by: '<S34>/Gain'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: K2
                                        * Referenced by: '<S34>/Gain1'
                                        */
  real_T Gain_Gain_m;                  /* Expression: K1
                                        * Referenced by: '<S35>/Gain'
                                        */
  real_T Gain1_Gain_mm;                /* Expression: K2
                                        * Referenced by: '<S35>/Gain1'
                                        */
  real_T Gain_Gain_lw;                 /* Expression: K1
                                        * Referenced by: '<S36>/Gain'
                                        */
  real_T Gain1_Gain_mh;                /* Expression: K2
                                        * Referenced by: '<S36>/Gain1'
                                        */
  real_T Gain_Gain_h;                  /* Expression: K1
                                        * Referenced by: '<S37>/Gain'
                                        */
  real_T Gain1_Gain_e;                 /* Expression: K2
                                        * Referenced by: '<S37>/Gain1'
                                        */
  real_T Gain_Gain_hw;                 /* Expression: K1
                                        * Referenced by: '<S42>/Gain'
                                        */
  real_T Gain1_Gain_l;                 /* Expression: K2
                                        * Referenced by: '<S42>/Gain1'
                                        */
  real_T Gain_Gain_fm;                 /* Expression: K1
                                        * Referenced by: '<S43>/Gain'
                                        */
  real_T Gain1_Gain_kj;                /* Expression: K2
                                        * Referenced by: '<S43>/Gain1'
                                        */
  real_T Gain_Gain_k;                  /* Expression: K1
                                        * Referenced by: '<S44>/Gain'
                                        */
  real_T Gain1_Gain_f;                 /* Expression: K2
                                        * Referenced by: '<S44>/Gain1'
                                        */
  real_T Gain_Gain_j;                  /* Expression: K1
                                        * Referenced by: '<S45>/Gain'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: K2
                                        * Referenced by: '<S45>/Gain1'
                                        */
  real_T Comedi0ADC3_P1_Size[2];       /* Computed Parameter: Comedi0ADC3_P1_Size
                                        * Referenced by: '<S27>/Comedi0 ADC3'
                                        */
  real_T Comedi0ADC3_P1;               /* Expression: dev
                                        * Referenced by: '<S27>/Comedi0 ADC3'
                                        */
  real_T Comedi0ADC3_P2_Size[2];       /* Computed Parameter: Comedi0ADC3_P2_Size
                                        * Referenced by: '<S27>/Comedi0 ADC3'
                                        */
  real_T Comedi0ADC3_P2;               /* Expression: chan
                                        * Referenced by: '<S27>/Comedi0 ADC3'
                                        */
  real_T Comedi0ADC3_P3_Size[2];       /* Computed Parameter: Comedi0ADC3_P3_Size
                                        * Referenced by: '<S27>/Comedi0 ADC3'
                                        */
  real_T Comedi0ADC3_P3;               /* Expression: range
                                        * Referenced by: '<S27>/Comedi0 ADC3'
                                        */
  real_T Comedi0ADC3_P4_Size[2];       /* Computed Parameter: Comedi0ADC3_P4_Size
                                        * Referenced by: '<S27>/Comedi0 ADC3'
                                        */
  real_T Comedi0ADC3_P4;               /* Expression: aref
                                        * Referenced by: '<S27>/Comedi0 ADC3'
                                        */
  real_T Comedi0ADC3_P5_Size[2];       /* Computed Parameter: Comedi0ADC3_P5_Size
                                        * Referenced by: '<S27>/Comedi0 ADC3'
                                        */
  real_T Comedi0ADC3_P5;               /* Expression: dt
                                        * Referenced by: '<S27>/Comedi0 ADC3'
                                        */
  real_T Gain_Gain_mf;                 /* Expression: 0.0356
                                        * Referenced by: '<S27>/Gain'
                                        */
  real_T Integ4_gainval;               /* Computed Parameter: Integ4_gainval
                                        * Referenced by: '<S17>/Integ4'
                                        */
  real_T Integ4_IC;                    /* Expression: 0
                                        * Referenced by: '<S17>/Integ4'
                                        */
  real_T K1_Value;                     /* Expression: Delay
                                        * Referenced by: '<S17>/K1'
                                        */
  real_T K2_Value;                     /* Expression: Freq
                                        * Referenced by: '<S17>/K2'
                                        */
  real_T UnitDelay_X0;                 /* Expression: 0
                                        * Referenced by: '<S17>/Unit Delay'
                                        */
  real_T Step_Time;                    /* Expression: 1/Freq
                                        * Referenced by: '<S17>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S17>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S17>/Step'
                                        */
  real_T Constant_Value;               /* Expression: Vinit
                                        * Referenced by: '<S17>/Constant'
                                        */
  real_T Switch_Threshold;             /* Expression: 0.5
                                        * Referenced by: '<S17>/Switch'
                                        */
  real_T Comedi0ADC4_P1_Size[2];       /* Computed Parameter: Comedi0ADC4_P1_Size
                                        * Referenced by: '<S27>/Comedi0 ADC4'
                                        */
  real_T Comedi0ADC4_P1;               /* Expression: dev
                                        * Referenced by: '<S27>/Comedi0 ADC4'
                                        */
  real_T Comedi0ADC4_P2_Size[2];       /* Computed Parameter: Comedi0ADC4_P2_Size
                                        * Referenced by: '<S27>/Comedi0 ADC4'
                                        */
  real_T Comedi0ADC4_P2;               /* Expression: chan
                                        * Referenced by: '<S27>/Comedi0 ADC4'
                                        */
  real_T Comedi0ADC4_P3_Size[2];       /* Computed Parameter: Comedi0ADC4_P3_Size
                                        * Referenced by: '<S27>/Comedi0 ADC4'
                                        */
  real_T Comedi0ADC4_P3;               /* Expression: range
                                        * Referenced by: '<S27>/Comedi0 ADC4'
                                        */
  real_T Comedi0ADC4_P4_Size[2];       /* Computed Parameter: Comedi0ADC4_P4_Size
                                        * Referenced by: '<S27>/Comedi0 ADC4'
                                        */
  real_T Comedi0ADC4_P4;               /* Expression: aref
                                        * Referenced by: '<S27>/Comedi0 ADC4'
                                        */
  real_T Comedi0ADC4_P5_Size[2];       /* Computed Parameter: Comedi0ADC4_P5_Size
                                        * Referenced by: '<S27>/Comedi0 ADC4'
                                        */
  real_T Comedi0ADC4_P5;               /* Expression: dt
                                        * Referenced by: '<S27>/Comedi0 ADC4'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: 0.0356
                                        * Referenced by: '<S27>/Gain1'
                                        */
  real_T Integ4_gainval_d;             /* Computed Parameter: Integ4_gainval_d
                                        * Referenced by: '<S18>/Integ4'
                                        */
  real_T Integ4_IC_i;                  /* Expression: 0
                                        * Referenced by: '<S18>/Integ4'
                                        */
  real_T K1_Value_f;                   /* Expression: Delay
                                        * Referenced by: '<S18>/K1'
                                        */
  real_T K2_Value_i;                   /* Expression: Freq
                                        * Referenced by: '<S18>/K2'
                                        */
  real_T UnitDelay_X0_f;               /* Expression: 0
                                        * Referenced by: '<S18>/Unit Delay'
                                        */
  real_T Step_Time_o;                  /* Expression: 1/Freq
                                        * Referenced by: '<S18>/Step'
                                        */
  real_T Step_Y0_n;                    /* Expression: 0
                                        * Referenced by: '<S18>/Step'
                                        */
  real_T Step_YFinal_g;                /* Expression: 1
                                        * Referenced by: '<S18>/Step'
                                        */
  real_T Constant_Value_g;             /* Expression: Vinit
                                        * Referenced by: '<S18>/Constant'
                                        */
  real_T Switch_Threshold_m;           /* Expression: 0.5
                                        * Referenced by: '<S18>/Switch'
                                        */
  real_T Comedi2ADC4_P1_Size[2];       /* Computed Parameter: Comedi2ADC4_P1_Size
                                        * Referenced by: '<S27>/Comedi2 ADC4'
                                        */
  real_T Comedi2ADC4_P1;               /* Expression: dev
                                        * Referenced by: '<S27>/Comedi2 ADC4'
                                        */
  real_T Comedi2ADC4_P2_Size[2];       /* Computed Parameter: Comedi2ADC4_P2_Size
                                        * Referenced by: '<S27>/Comedi2 ADC4'
                                        */
  real_T Comedi2ADC4_P2;               /* Expression: chan
                                        * Referenced by: '<S27>/Comedi2 ADC4'
                                        */
  real_T Comedi2ADC4_P3_Size[2];       /* Computed Parameter: Comedi2ADC4_P3_Size
                                        * Referenced by: '<S27>/Comedi2 ADC4'
                                        */
  real_T Comedi2ADC4_P3;               /* Expression: range
                                        * Referenced by: '<S27>/Comedi2 ADC4'
                                        */
  real_T Comedi2ADC4_P4_Size[2];       /* Computed Parameter: Comedi2ADC4_P4_Size
                                        * Referenced by: '<S27>/Comedi2 ADC4'
                                        */
  real_T Comedi2ADC4_P4;               /* Expression: aref
                                        * Referenced by: '<S27>/Comedi2 ADC4'
                                        */
  real_T Comedi2ADC4_P5_Size[2];       /* Computed Parameter: Comedi2ADC4_P5_Size
                                        * Referenced by: '<S27>/Comedi2 ADC4'
                                        */
  real_T Comedi2ADC4_P5;               /* Expression: dt
                                        * Referenced by: '<S27>/Comedi2 ADC4'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.0356
                                        * Referenced by: '<S27>/Gain2'
                                        */
  real_T Integ4_gainval_m;             /* Computed Parameter: Integ4_gainval_m
                                        * Referenced by: '<S19>/Integ4'
                                        */
  real_T Integ4_IC_c;                  /* Expression: 0
                                        * Referenced by: '<S19>/Integ4'
                                        */
  real_T K1_Value_n;                   /* Expression: Delay
                                        * Referenced by: '<S19>/K1'
                                        */
  real_T K2_Value_b;                   /* Expression: Freq
                                        * Referenced by: '<S19>/K2'
                                        */
  real_T UnitDelay_X0_p;               /* Expression: 0
                                        * Referenced by: '<S19>/Unit Delay'
                                        */
  real_T Step_Time_c;                  /* Expression: 1/Freq
                                        * Referenced by: '<S19>/Step'
                                        */
  real_T Step_Y0_b;                    /* Expression: 0
                                        * Referenced by: '<S19>/Step'
                                        */
  real_T Step_YFinal_o;                /* Expression: 1
                                        * Referenced by: '<S19>/Step'
                                        */
  real_T Constant_Value_o;             /* Expression: Vinit
                                        * Referenced by: '<S19>/Constant'
                                        */
  real_T Switch_Threshold_a;           /* Expression: 0.5
                                        * Referenced by: '<S19>/Switch'
                                        */
  real_T Comedi2ADC5_P1_Size[2];       /* Computed Parameter: Comedi2ADC5_P1_Size
                                        * Referenced by: '<S27>/Comedi2 ADC5'
                                        */
  real_T Comedi2ADC5_P1;               /* Expression: dev
                                        * Referenced by: '<S27>/Comedi2 ADC5'
                                        */
  real_T Comedi2ADC5_P2_Size[2];       /* Computed Parameter: Comedi2ADC5_P2_Size
                                        * Referenced by: '<S27>/Comedi2 ADC5'
                                        */
  real_T Comedi2ADC5_P2;               /* Expression: chan
                                        * Referenced by: '<S27>/Comedi2 ADC5'
                                        */
  real_T Comedi2ADC5_P3_Size[2];       /* Computed Parameter: Comedi2ADC5_P3_Size
                                        * Referenced by: '<S27>/Comedi2 ADC5'
                                        */
  real_T Comedi2ADC5_P3;               /* Expression: range
                                        * Referenced by: '<S27>/Comedi2 ADC5'
                                        */
  real_T Comedi2ADC5_P4_Size[2];       /* Computed Parameter: Comedi2ADC5_P4_Size
                                        * Referenced by: '<S27>/Comedi2 ADC5'
                                        */
  real_T Comedi2ADC5_P4;               /* Expression: aref
                                        * Referenced by: '<S27>/Comedi2 ADC5'
                                        */
  real_T Comedi2ADC5_P5_Size[2];       /* Computed Parameter: Comedi2ADC5_P5_Size
                                        * Referenced by: '<S27>/Comedi2 ADC5'
                                        */
  real_T Comedi2ADC5_P5;               /* Expression: dt
                                        * Referenced by: '<S27>/Comedi2 ADC5'
                                        */
  real_T Gain3_Gain;                   /* Expression: 0.0356
                                        * Referenced by: '<S27>/Gain3'
                                        */
  real_T Integ4_gainval_g;             /* Computed Parameter: Integ4_gainval_g
                                        * Referenced by: '<S20>/Integ4'
                                        */
  real_T Integ4_IC_m;                  /* Expression: 0
                                        * Referenced by: '<S20>/Integ4'
                                        */
  real_T K1_Value_o;                   /* Expression: Delay
                                        * Referenced by: '<S20>/K1'
                                        */
  real_T K2_Value_e;                   /* Expression: Freq
                                        * Referenced by: '<S20>/K2'
                                        */
  real_T UnitDelay_X0_b;               /* Expression: 0
                                        * Referenced by: '<S20>/Unit Delay'
                                        */
  real_T Step_Time_l;                  /* Expression: 1/Freq
                                        * Referenced by: '<S20>/Step'
                                        */
  real_T Step_Y0_f;                    /* Expression: 0
                                        * Referenced by: '<S20>/Step'
                                        */
  real_T Step_YFinal_i;                /* Expression: 1
                                        * Referenced by: '<S20>/Step'
                                        */
  real_T Constant_Value_b;             /* Expression: Vinit
                                        * Referenced by: '<S20>/Constant'
                                        */
  real_T Switch_Threshold_k;           /* Expression: 0.5
                                        * Referenced by: '<S20>/Switch'
                                        */
  real_T Constant_Value_oh;            /* Expression: 1
                                        * Referenced by: '<S31>/Constant'
                                        */
  real_T Comedi2ADC0_P1_Size[2];       /* Computed Parameter: Comedi2ADC0_P1_Size
                                        * Referenced by: '<S31>/Comedi2 ADC0'
                                        */
  real_T Comedi2ADC0_P1;               /* Expression: dev
                                        * Referenced by: '<S31>/Comedi2 ADC0'
                                        */
  real_T Comedi2ADC0_P2_Size[2];       /* Computed Parameter: Comedi2ADC0_P2_Size
                                        * Referenced by: '<S31>/Comedi2 ADC0'
                                        */
  real_T Comedi2ADC0_P2;               /* Expression: chan
                                        * Referenced by: '<S31>/Comedi2 ADC0'
                                        */
  real_T Comedi2ADC0_P3_Size[2];       /* Computed Parameter: Comedi2ADC0_P3_Size
                                        * Referenced by: '<S31>/Comedi2 ADC0'
                                        */
  real_T Comedi2ADC0_P3;               /* Expression: range
                                        * Referenced by: '<S31>/Comedi2 ADC0'
                                        */
  real_T Comedi2ADC0_P4_Size[2];       /* Computed Parameter: Comedi2ADC0_P4_Size
                                        * Referenced by: '<S31>/Comedi2 ADC0'
                                        */
  real_T Comedi2ADC0_P4;               /* Expression: aref
                                        * Referenced by: '<S31>/Comedi2 ADC0'
                                        */
  real_T Comedi2ADC0_P5_Size[2];       /* Computed Parameter: Comedi2ADC0_P5_Size
                                        * Referenced by: '<S31>/Comedi2 ADC0'
                                        */
  real_T Comedi2ADC0_P5;               /* Expression: dt
                                        * Referenced by: '<S31>/Comedi2 ADC0'
                                        */
  real_T Gain_Gain_b;                  /* Expression: 1/4
                                        * Referenced by: '<S31>/Gain'
                                        */
  real_T Integ4_gainval_k;             /* Computed Parameter: Integ4_gainval_k
                                        * Referenced by: '<S45>/Integ4'
                                        */
  real_T Integ4_IC_h;                  /* Expression: 0
                                        * Referenced by: '<S45>/Integ4'
                                        */
  real_T K1_Value_i;                   /* Expression: Delay
                                        * Referenced by: '<S45>/K1'
                                        */
  real_T K2_Value_iq;                  /* Expression: Freq
                                        * Referenced by: '<S45>/K2'
                                        */
  real_T UnitDelay_X0_j;               /* Expression: 0
                                        * Referenced by: '<S45>/Unit Delay'
                                        */
  real_T Step_Time_ow;                 /* Expression: 1/Freq
                                        * Referenced by: '<S45>/Step'
                                        */
  real_T Step_Y0_e;                    /* Expression: 0
                                        * Referenced by: '<S45>/Step'
                                        */
  real_T Step_YFinal_e;                /* Expression: 1
                                        * Referenced by: '<S45>/Step'
                                        */
  real_T Constant_Value_j;             /* Expression: Vinit
                                        * Referenced by: '<S45>/Constant'
                                        */
  real_T Switch_Threshold_i;           /* Expression: 0.5
                                        * Referenced by: '<S45>/Switch'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S31>/Constant1'
                                        */
  real_T Comedi0ADC1_P1_Size[2];       /* Computed Parameter: Comedi0ADC1_P1_Size
                                        * Referenced by: '<S31>/Comedi0 ADC1'
                                        */
  real_T Comedi0ADC1_P1;               /* Expression: dev
                                        * Referenced by: '<S31>/Comedi0 ADC1'
                                        */
  real_T Comedi0ADC1_P2_Size[2];       /* Computed Parameter: Comedi0ADC1_P2_Size
                                        * Referenced by: '<S31>/Comedi0 ADC1'
                                        */
  real_T Comedi0ADC1_P2;               /* Expression: chan
                                        * Referenced by: '<S31>/Comedi0 ADC1'
                                        */
  real_T Comedi0ADC1_P3_Size[2];       /* Computed Parameter: Comedi0ADC1_P3_Size
                                        * Referenced by: '<S31>/Comedi0 ADC1'
                                        */
  real_T Comedi0ADC1_P3;               /* Expression: range
                                        * Referenced by: '<S31>/Comedi0 ADC1'
                                        */
  real_T Comedi0ADC1_P4_Size[2];       /* Computed Parameter: Comedi0ADC1_P4_Size
                                        * Referenced by: '<S31>/Comedi0 ADC1'
                                        */
  real_T Comedi0ADC1_P4;               /* Expression: aref
                                        * Referenced by: '<S31>/Comedi0 ADC1'
                                        */
  real_T Comedi0ADC1_P5_Size[2];       /* Computed Parameter: Comedi0ADC1_P5_Size
                                        * Referenced by: '<S31>/Comedi0 ADC1'
                                        */
  real_T Comedi0ADC1_P5;               /* Expression: dt
                                        * Referenced by: '<S31>/Comedi0 ADC1'
                                        */
  real_T Gain1_Gain_cg;                /* Expression: 1/4
                                        * Referenced by: '<S31>/Gain1'
                                        */
  real_T Integ4_gainval_p;             /* Computed Parameter: Integ4_gainval_p
                                        * Referenced by: '<S42>/Integ4'
                                        */
  real_T Integ4_IC_ma;                 /* Expression: 0
                                        * Referenced by: '<S42>/Integ4'
                                        */
  real_T K1_Value_a;                   /* Expression: Delay
                                        * Referenced by: '<S42>/K1'
                                        */
  real_T K2_Value_j;                   /* Expression: Freq
                                        * Referenced by: '<S42>/K2'
                                        */
  real_T UnitDelay_X0_h;               /* Expression: 0
                                        * Referenced by: '<S42>/Unit Delay'
                                        */
  real_T Step_Time_b;                  /* Expression: 1/Freq
                                        * Referenced by: '<S42>/Step'
                                        */
  real_T Step_Y0_f4;                   /* Expression: 0
                                        * Referenced by: '<S42>/Step'
                                        */
  real_T Step_YFinal_ol;               /* Expression: 1
                                        * Referenced by: '<S42>/Step'
                                        */
  real_T Constant_Value_l;             /* Expression: Vinit
                                        * Referenced by: '<S42>/Constant'
                                        */
  real_T Switch_Threshold_l;           /* Expression: 0.5
                                        * Referenced by: '<S42>/Switch'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<S31>/Constant2'
                                        */
  real_T Comedi2ADC1_P1_Size[2];       /* Computed Parameter: Comedi2ADC1_P1_Size
                                        * Referenced by: '<S31>/Comedi2 ADC1'
                                        */
  real_T Comedi2ADC1_P1;               /* Expression: dev
                                        * Referenced by: '<S31>/Comedi2 ADC1'
                                        */
  real_T Comedi2ADC1_P2_Size[2];       /* Computed Parameter: Comedi2ADC1_P2_Size
                                        * Referenced by: '<S31>/Comedi2 ADC1'
                                        */
  real_T Comedi2ADC1_P2;               /* Expression: chan
                                        * Referenced by: '<S31>/Comedi2 ADC1'
                                        */
  real_T Comedi2ADC1_P3_Size[2];       /* Computed Parameter: Comedi2ADC1_P3_Size
                                        * Referenced by: '<S31>/Comedi2 ADC1'
                                        */
  real_T Comedi2ADC1_P3;               /* Expression: range
                                        * Referenced by: '<S31>/Comedi2 ADC1'
                                        */
  real_T Comedi2ADC1_P4_Size[2];       /* Computed Parameter: Comedi2ADC1_P4_Size
                                        * Referenced by: '<S31>/Comedi2 ADC1'
                                        */
  real_T Comedi2ADC1_P4;               /* Expression: aref
                                        * Referenced by: '<S31>/Comedi2 ADC1'
                                        */
  real_T Comedi2ADC1_P5_Size[2];       /* Computed Parameter: Comedi2ADC1_P5_Size
                                        * Referenced by: '<S31>/Comedi2 ADC1'
                                        */
  real_T Comedi2ADC1_P5;               /* Expression: dt
                                        * Referenced by: '<S31>/Comedi2 ADC1'
                                        */
  real_T Gain2_Gain_o;                 /* Expression: 1/4
                                        * Referenced by: '<S31>/Gain2'
                                        */
  real_T Integ4_gainval_gu;            /* Computed Parameter: Integ4_gainval_gu
                                        * Referenced by: '<S43>/Integ4'
                                        */
  real_T Integ4_IC_o;                  /* Expression: 0
                                        * Referenced by: '<S43>/Integ4'
                                        */
  real_T K1_Value_nt;                  /* Expression: Delay
                                        * Referenced by: '<S43>/K1'
                                        */
  real_T K2_Value_f;                   /* Expression: Freq
                                        * Referenced by: '<S43>/K2'
                                        */
  real_T UnitDelay_X0_k;               /* Expression: 0
                                        * Referenced by: '<S43>/Unit Delay'
                                        */
  real_T Step_Time_lb;                 /* Expression: 1/Freq
                                        * Referenced by: '<S43>/Step'
                                        */
  real_T Step_Y0_d;                    /* Expression: 0
                                        * Referenced by: '<S43>/Step'
                                        */
  real_T Step_YFinal_n;                /* Expression: 1
                                        * Referenced by: '<S43>/Step'
                                        */
  real_T Constant_Value_jd;            /* Expression: Vinit
                                        * Referenced by: '<S43>/Constant'
                                        */
  real_T Switch_Threshold_m4;          /* Expression: 0.5
                                        * Referenced by: '<S43>/Switch'
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<S31>/Constant3'
                                        */
  real_T Comedi2ADC2_P1_Size[2];       /* Computed Parameter: Comedi2ADC2_P1_Size
                                        * Referenced by: '<S31>/Comedi2 ADC2'
                                        */
  real_T Comedi2ADC2_P1;               /* Expression: dev
                                        * Referenced by: '<S31>/Comedi2 ADC2'
                                        */
  real_T Comedi2ADC2_P2_Size[2];       /* Computed Parameter: Comedi2ADC2_P2_Size
                                        * Referenced by: '<S31>/Comedi2 ADC2'
                                        */
  real_T Comedi2ADC2_P2;               /* Expression: chan
                                        * Referenced by: '<S31>/Comedi2 ADC2'
                                        */
  real_T Comedi2ADC2_P3_Size[2];       /* Computed Parameter: Comedi2ADC2_P3_Size
                                        * Referenced by: '<S31>/Comedi2 ADC2'
                                        */
  real_T Comedi2ADC2_P3;               /* Expression: range
                                        * Referenced by: '<S31>/Comedi2 ADC2'
                                        */
  real_T Comedi2ADC2_P4_Size[2];       /* Computed Parameter: Comedi2ADC2_P4_Size
                                        * Referenced by: '<S31>/Comedi2 ADC2'
                                        */
  real_T Comedi2ADC2_P4;               /* Expression: aref
                                        * Referenced by: '<S31>/Comedi2 ADC2'
                                        */
  real_T Comedi2ADC2_P5_Size[2];       /* Computed Parameter: Comedi2ADC2_P5_Size
                                        * Referenced by: '<S31>/Comedi2 ADC2'
                                        */
  real_T Comedi2ADC2_P5;               /* Expression: dt
                                        * Referenced by: '<S31>/Comedi2 ADC2'
                                        */
  real_T Gain3_Gain_a;                 /* Expression: 1/4
                                        * Referenced by: '<S31>/Gain3'
                                        */
  real_T Integ4_gainval_de;            /* Computed Parameter: Integ4_gainval_de
                                        * Referenced by: '<S44>/Integ4'
                                        */
  real_T Integ4_IC_ik;                 /* Expression: 0
                                        * Referenced by: '<S44>/Integ4'
                                        */
  real_T K1_Value_av;                  /* Expression: Delay
                                        * Referenced by: '<S44>/K1'
                                        */
  real_T K2_Value_o;                   /* Expression: Freq
                                        * Referenced by: '<S44>/K2'
                                        */
  real_T UnitDelay_X0_by;              /* Expression: 0
                                        * Referenced by: '<S44>/Unit Delay'
                                        */
  real_T Step_Time_j;                  /* Expression: 1/Freq
                                        * Referenced by: '<S44>/Step'
                                        */
  real_T Step_Y0_h;                    /* Expression: 0
                                        * Referenced by: '<S44>/Step'
                                        */
  real_T Step_YFinal_m;                /* Expression: 1
                                        * Referenced by: '<S44>/Step'
                                        */
  real_T Constant_Value_h;             /* Expression: Vinit
                                        * Referenced by: '<S44>/Constant'
                                        */
  real_T Switch_Threshold_h;           /* Expression: 0.5
                                        * Referenced by: '<S44>/Switch'
                                        */
  real_T Constant_Value_k;             /* Expression: 1
                                        * Referenced by: '<S30>/Constant'
                                        */
  real_T Comedi2ADC7_P1_Size[2];       /* Computed Parameter: Comedi2ADC7_P1_Size
                                        * Referenced by: '<S30>/Comedi2 ADC7'
                                        */
  real_T Comedi2ADC7_P1;               /* Expression: dev
                                        * Referenced by: '<S30>/Comedi2 ADC7'
                                        */
  real_T Comedi2ADC7_P2_Size[2];       /* Computed Parameter: Comedi2ADC7_P2_Size
                                        * Referenced by: '<S30>/Comedi2 ADC7'
                                        */
  real_T Comedi2ADC7_P2;               /* Expression: chan
                                        * Referenced by: '<S30>/Comedi2 ADC7'
                                        */
  real_T Comedi2ADC7_P3_Size[2];       /* Computed Parameter: Comedi2ADC7_P3_Size
                                        * Referenced by: '<S30>/Comedi2 ADC7'
                                        */
  real_T Comedi2ADC7_P3;               /* Expression: range
                                        * Referenced by: '<S30>/Comedi2 ADC7'
                                        */
  real_T Comedi2ADC7_P4_Size[2];       /* Computed Parameter: Comedi2ADC7_P4_Size
                                        * Referenced by: '<S30>/Comedi2 ADC7'
                                        */
  real_T Comedi2ADC7_P4;               /* Expression: aref
                                        * Referenced by: '<S30>/Comedi2 ADC7'
                                        */
  real_T Comedi2ADC7_P5_Size[2];       /* Computed Parameter: Comedi2ADC7_P5_Size
                                        * Referenced by: '<S30>/Comedi2 ADC7'
                                        */
  real_T Comedi2ADC7_P5;               /* Expression: dt
                                        * Referenced by: '<S30>/Comedi2 ADC7'
                                        */
  real_T Gain_Gain_jj;                 /* Expression: 1/4
                                        * Referenced by: '<S30>/Gain'
                                        */
  real_T Integ4_gainval_e;             /* Computed Parameter: Integ4_gainval_e
                                        * Referenced by: '<S37>/Integ4'
                                        */
  real_T Integ4_IC_l;                  /* Expression: 0
                                        * Referenced by: '<S37>/Integ4'
                                        */
  real_T K1_Value_c;                   /* Expression: Delay
                                        * Referenced by: '<S37>/K1'
                                        */
  real_T K2_Value_k;                   /* Expression: Freq
                                        * Referenced by: '<S37>/K2'
                                        */
  real_T UnitDelay_X0_d;               /* Expression: 0
                                        * Referenced by: '<S37>/Unit Delay'
                                        */
  real_T Step_Time_i;                  /* Expression: 1/Freq
                                        * Referenced by: '<S37>/Step'
                                        */
  real_T Step_Y0_j;                    /* Expression: 0
                                        * Referenced by: '<S37>/Step'
                                        */
  real_T Step_YFinal_d;                /* Expression: 1
                                        * Referenced by: '<S37>/Step'
                                        */
  real_T Constant_Value_f;             /* Expression: Vinit
                                        * Referenced by: '<S37>/Constant'
                                        */
  real_T Switch_Threshold_j;           /* Expression: 0.5
                                        * Referenced by: '<S37>/Switch'
                                        */
  real_T Constant1_Value_g;            /* Expression: 1
                                        * Referenced by: '<S30>/Constant1'
                                        */
  real_T Comedi0ADC7_P1_Size[2];       /* Computed Parameter: Comedi0ADC7_P1_Size
                                        * Referenced by: '<S30>/Comedi0 ADC7'
                                        */
  real_T Comedi0ADC7_P1;               /* Expression: dev
                                        * Referenced by: '<S30>/Comedi0 ADC7'
                                        */
  real_T Comedi0ADC7_P2_Size[2];       /* Computed Parameter: Comedi0ADC7_P2_Size
                                        * Referenced by: '<S30>/Comedi0 ADC7'
                                        */
  real_T Comedi0ADC7_P2;               /* Expression: chan
                                        * Referenced by: '<S30>/Comedi0 ADC7'
                                        */
  real_T Comedi0ADC7_P3_Size[2];       /* Computed Parameter: Comedi0ADC7_P3_Size
                                        * Referenced by: '<S30>/Comedi0 ADC7'
                                        */
  real_T Comedi0ADC7_P3;               /* Expression: range
                                        * Referenced by: '<S30>/Comedi0 ADC7'
                                        */
  real_T Comedi0ADC7_P4_Size[2];       /* Computed Parameter: Comedi0ADC7_P4_Size
                                        * Referenced by: '<S30>/Comedi0 ADC7'
                                        */
  real_T Comedi0ADC7_P4;               /* Expression: aref
                                        * Referenced by: '<S30>/Comedi0 ADC7'
                                        */
  real_T Comedi0ADC7_P5_Size[2];       /* Computed Parameter: Comedi0ADC7_P5_Size
                                        * Referenced by: '<S30>/Comedi0 ADC7'
                                        */
  real_T Comedi0ADC7_P5;               /* Expression: dt
                                        * Referenced by: '<S30>/Comedi0 ADC7'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: 1/4
                                        * Referenced by: '<S30>/Gain1'
                                        */
  real_T Integ4_gainval_a;             /* Computed Parameter: Integ4_gainval_a
                                        * Referenced by: '<S34>/Integ4'
                                        */
  real_T Integ4_IC_f;                  /* Expression: 0
                                        * Referenced by: '<S34>/Integ4'
                                        */
  real_T K1_Value_oa;                  /* Expression: Delay
                                        * Referenced by: '<S34>/K1'
                                        */
  real_T K2_Value_l;                   /* Expression: Freq
                                        * Referenced by: '<S34>/K2'
                                        */
  real_T UnitDelay_X0_c;               /* Expression: 0
                                        * Referenced by: '<S34>/Unit Delay'
                                        */
  real_T Step_Time_m;                  /* Expression: 1/Freq
                                        * Referenced by: '<S34>/Step'
                                        */
  real_T Step_Y0_k;                    /* Expression: 0
                                        * Referenced by: '<S34>/Step'
                                        */
  real_T Step_YFinal_gg;               /* Expression: 1
                                        * Referenced by: '<S34>/Step'
                                        */
  real_T Constant_Value_e;             /* Expression: Vinit
                                        * Referenced by: '<S34>/Constant'
                                        */
  real_T Switch_Threshold_d;           /* Expression: 0.5
                                        * Referenced by: '<S34>/Switch'
                                        */
  real_T Constant2_Value_h;            /* Expression: 1
                                        * Referenced by: '<S30>/Constant2'
                                        */
  real_T Comedi2ADC3_P1_Size[2];       /* Computed Parameter: Comedi2ADC3_P1_Size
                                        * Referenced by: '<S30>/Comedi2 ADC3'
                                        */
  real_T Comedi2ADC3_P1;               /* Expression: dev
                                        * Referenced by: '<S30>/Comedi2 ADC3'
                                        */
  real_T Comedi2ADC3_P2_Size[2];       /* Computed Parameter: Comedi2ADC3_P2_Size
                                        * Referenced by: '<S30>/Comedi2 ADC3'
                                        */
  real_T Comedi2ADC3_P2;               /* Expression: chan
                                        * Referenced by: '<S30>/Comedi2 ADC3'
                                        */
  real_T Comedi2ADC3_P3_Size[2];       /* Computed Parameter: Comedi2ADC3_P3_Size
                                        * Referenced by: '<S30>/Comedi2 ADC3'
                                        */
  real_T Comedi2ADC3_P3;               /* Expression: range
                                        * Referenced by: '<S30>/Comedi2 ADC3'
                                        */
  real_T Comedi2ADC3_P4_Size[2];       /* Computed Parameter: Comedi2ADC3_P4_Size
                                        * Referenced by: '<S30>/Comedi2 ADC3'
                                        */
  real_T Comedi2ADC3_P4;               /* Expression: aref
                                        * Referenced by: '<S30>/Comedi2 ADC3'
                                        */
  real_T Comedi2ADC3_P5_Size[2];       /* Computed Parameter: Comedi2ADC3_P5_Size
                                        * Referenced by: '<S30>/Comedi2 ADC3'
                                        */
  real_T Comedi2ADC3_P5;               /* Expression: dt
                                        * Referenced by: '<S30>/Comedi2 ADC3'
                                        */
  real_T Gain2_Gain_i;                 /* Expression: 1/4
                                        * Referenced by: '<S30>/Gain2'
                                        */
  real_T Integ4_gainval_i;             /* Computed Parameter: Integ4_gainval_i
                                        * Referenced by: '<S35>/Integ4'
                                        */
  real_T Integ4_IC_mq;                 /* Expression: 0
                                        * Referenced by: '<S35>/Integ4'
                                        */
  real_T K1_Value_e;                   /* Expression: Delay
                                        * Referenced by: '<S35>/K1'
                                        */
  real_T K2_Value_fb;                  /* Expression: Freq
                                        * Referenced by: '<S35>/K2'
                                        */
  real_T UnitDelay_X0_dc;              /* Expression: 0
                                        * Referenced by: '<S35>/Unit Delay'
                                        */
  real_T Step_Time_g;                  /* Expression: 1/Freq
                                        * Referenced by: '<S35>/Step'
                                        */
  real_T Step_Y0_c;                    /* Expression: 0
                                        * Referenced by: '<S35>/Step'
                                        */
  real_T Step_YFinal_oz;               /* Expression: 1
                                        * Referenced by: '<S35>/Step'
                                        */
  real_T Constant_Value_c;             /* Expression: Vinit
                                        * Referenced by: '<S35>/Constant'
                                        */
  real_T Switch_Threshold_f;           /* Expression: 0.5
                                        * Referenced by: '<S35>/Switch'
                                        */
  real_T Constant3_Value_h;            /* Expression: 1
                                        * Referenced by: '<S30>/Constant3'
                                        */
  real_T Comedi0ADC6_P1_Size[2];       /* Computed Parameter: Comedi0ADC6_P1_Size
                                        * Referenced by: '<S30>/Comedi0 ADC6'
                                        */
  real_T Comedi0ADC6_P1;               /* Expression: dev
                                        * Referenced by: '<S30>/Comedi0 ADC6'
                                        */
  real_T Comedi0ADC6_P2_Size[2];       /* Computed Parameter: Comedi0ADC6_P2_Size
                                        * Referenced by: '<S30>/Comedi0 ADC6'
                                        */
  real_T Comedi0ADC6_P2;               /* Expression: chan
                                        * Referenced by: '<S30>/Comedi0 ADC6'
                                        */
  real_T Comedi0ADC6_P3_Size[2];       /* Computed Parameter: Comedi0ADC6_P3_Size
                                        * Referenced by: '<S30>/Comedi0 ADC6'
                                        */
  real_T Comedi0ADC6_P3;               /* Expression: range
                                        * Referenced by: '<S30>/Comedi0 ADC6'
                                        */
  real_T Comedi0ADC6_P4_Size[2];       /* Computed Parameter: Comedi0ADC6_P4_Size
                                        * Referenced by: '<S30>/Comedi0 ADC6'
                                        */
  real_T Comedi0ADC6_P4;               /* Expression: aref
                                        * Referenced by: '<S30>/Comedi0 ADC6'
                                        */
  real_T Comedi0ADC6_P5_Size[2];       /* Computed Parameter: Comedi0ADC6_P5_Size
                                        * Referenced by: '<S30>/Comedi0 ADC6'
                                        */
  real_T Comedi0ADC6_P5;               /* Expression: dt
                                        * Referenced by: '<S30>/Comedi0 ADC6'
                                        */
  real_T Gain3_Gain_h;                 /* Expression: 1/4
                                        * Referenced by: '<S30>/Gain3'
                                        */
  real_T Integ4_gainval_e3;            /* Computed Parameter: Integ4_gainval_e3
                                        * Referenced by: '<S36>/Integ4'
                                        */
  real_T Integ4_IC_c1;                 /* Expression: 0
                                        * Referenced by: '<S36>/Integ4'
                                        */
  real_T K1_Value_nz;                  /* Expression: Delay
                                        * Referenced by: '<S36>/K1'
                                        */
  real_T K2_Value_bh;                  /* Expression: Freq
                                        * Referenced by: '<S36>/K2'
                                        */
  real_T UnitDelay_X0_jj;              /* Expression: 0
                                        * Referenced by: '<S36>/Unit Delay'
                                        */
  real_T Step_Time_f;                  /* Expression: 1/Freq
                                        * Referenced by: '<S36>/Step'
                                        */
  real_T Step_Y0_a;                    /* Expression: 0
                                        * Referenced by: '<S36>/Step'
                                        */
  real_T Step_YFinal_b;                /* Expression: 1
                                        * Referenced by: '<S36>/Step'
                                        */
  real_T Constant_Value_hc;            /* Expression: Vinit
                                        * Referenced by: '<S36>/Constant'
                                        */
  real_T Switch_Threshold_b;           /* Expression: 0.5
                                        * Referenced by: '<S36>/Switch'
                                        */
  real_T Constant8_Value;              /* Expression: 0.7
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T Constant5_Value;              /* Expression: 0.7
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Constant9_Value;              /* Expression: 0.7
                                        * Referenced by: '<Root>/Constant9'
                                        */
  real_T LookUpTable_XData[11];        /* Expression: tv
                                        * Referenced by: '<S12>/Look-Up Table'
                                        */
  real_T LookUpTable_YData[11];        /* Expression: opv
                                        * Referenced by: '<S12>/Look-Up Table'
                                        */
  real_T Comedi0ADC2_P1_Size[2];       /* Computed Parameter: Comedi0ADC2_P1_Size
                                        * Referenced by: '<S27>/Comedi0 ADC2'
                                        */
  real_T Comedi0ADC2_P1;               /* Expression: dev
                                        * Referenced by: '<S27>/Comedi0 ADC2'
                                        */
  real_T Comedi0ADC2_P2_Size[2];       /* Computed Parameter: Comedi0ADC2_P2_Size
                                        * Referenced by: '<S27>/Comedi0 ADC2'
                                        */
  real_T Comedi0ADC2_P2;               /* Expression: chan
                                        * Referenced by: '<S27>/Comedi0 ADC2'
                                        */
  real_T Comedi0ADC2_P3_Size[2];       /* Computed Parameter: Comedi0ADC2_P3_Size
                                        * Referenced by: '<S27>/Comedi0 ADC2'
                                        */
  real_T Comedi0ADC2_P3;               /* Expression: range
                                        * Referenced by: '<S27>/Comedi0 ADC2'
                                        */
  real_T Comedi0ADC2_P4_Size[2];       /* Computed Parameter: Comedi0ADC2_P4_Size
                                        * Referenced by: '<S27>/Comedi0 ADC2'
                                        */
  real_T Comedi0ADC2_P4;               /* Expression: aref
                                        * Referenced by: '<S27>/Comedi0 ADC2'
                                        */
  real_T Comedi0ADC2_P5_Size[2];       /* Computed Parameter: Comedi0ADC2_P5_Size
                                        * Referenced by: '<S27>/Comedi0 ADC2'
                                        */
  real_T Comedi0ADC2_P5;               /* Expression: dt
                                        * Referenced by: '<S27>/Comedi0 ADC2'
                                        */
  real_T Gain4_Gain;                   /* Expression: 0.0356
                                        * Referenced by: '<S27>/Gain4'
                                        */
  real_T Integ4_gainval_dp;            /* Computed Parameter: Integ4_gainval_dp
                                        * Referenced by: '<S25>/Integ4'
                                        */
  real_T Integ4_IC_fz;                 /* Expression: 0
                                        * Referenced by: '<S25>/Integ4'
                                        */
  real_T K1_Value_od;                  /* Expression: Delay
                                        * Referenced by: '<S25>/K1'
                                        */
  real_T K2_Value_p;                   /* Expression: Freq
                                        * Referenced by: '<S25>/K2'
                                        */
  real_T UnitDelay_X0_o;               /* Expression: 0
                                        * Referenced by: '<S25>/Unit Delay'
                                        */
  real_T Step_Time_ia;                 /* Expression: 1/Freq
                                        * Referenced by: '<S25>/Step'
                                        */
  real_T Step_Y0_d2;                   /* Expression: 0
                                        * Referenced by: '<S25>/Step'
                                        */
  real_T Step_YFinal_nn;               /* Expression: 1
                                        * Referenced by: '<S25>/Step'
                                        */
  real_T Constant_Value_n;             /* Expression: Vinit
                                        * Referenced by: '<S25>/Constant'
                                        */
  real_T Switch_Threshold_fx;          /* Expression: 0.5
                                        * Referenced by: '<S25>/Switch'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S4>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S4>/Discrete-Time Integrator'
                                        */
  real_T Constant14_Value;             /* Expression: 0.2
                                        * Referenced by: '<Root>/Constant14'
                                        */
  real_T Gain1_Gain_fn;                /* Expression: 0
                                        * Referenced by: '<S4>/Gain1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_g;/* Computed Parameter: DiscreteTimeIntegrator_gainva_g
                                          * Referenced by: '<S1>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_c;  /* Expression: 0
                                        * Referenced by: '<S1>/Discrete-Time Integrator'
                                        */
  real_T Constant2_Value_hd;           /* Expression: 0.2
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Gain1_Gain_g;                 /* Expression: 0
                                        * Referenced by: '<S1>/Gain1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_c;/* Computed Parameter: DiscreteTimeIntegrator_gainva_c
                                          * Referenced by: '<S2>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_cl; /* Expression: 0
                                        * Referenced by: '<S2>/Discrete-Time Integrator'
                                        */
  real_T Constant3_Value_i;            /* Expression: 0.1
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Gain1_Gain_f2;                /* Expression: 0
                                        * Referenced by: '<S2>/Gain1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_o;/* Computed Parameter: DiscreteTimeIntegrator_gainva_o
                                          * Referenced by: '<S3>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_f;  /* Expression: 0
                                        * Referenced by: '<S3>/Discrete-Time Integrator'
                                        */
  real_T Constant4_Value;              /* Expression: 0.25
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Gain1_Gain_bb;                /* Expression: 0
                                        * Referenced by: '<S3>/Gain1'
                                        */
  real_T Constant1_Value_m;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant11'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 1
                                        * Referenced by: '<Root>/Constant13'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 1.4
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T Gain_Gain_jr;                 /* Expression: 1.6
                                        * Referenced by: '<S2>/Gain'
                                        */
  real_T Gain_Gain_ii;                 /* Expression: 1.4
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T Gain_Gain_lb;                 /* Expression: 1.4
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T HitCrossing_Offset;           /* Expression: 0
                                        * Referenced by: '<S12>/Hit  Crossing'
                                        */
  real_T Comedi2ADC6_P1_Size[2];       /* Computed Parameter: Comedi2ADC6_P1_Size
                                        * Referenced by: '<S27>/Comedi2 ADC6'
                                        */
  real_T Comedi2ADC6_P1;               /* Expression: dev
                                        * Referenced by: '<S27>/Comedi2 ADC6'
                                        */
  real_T Comedi2ADC6_P2_Size[2];       /* Computed Parameter: Comedi2ADC6_P2_Size
                                        * Referenced by: '<S27>/Comedi2 ADC6'
                                        */
  real_T Comedi2ADC6_P2;               /* Expression: chan
                                        * Referenced by: '<S27>/Comedi2 ADC6'
                                        */
  real_T Comedi2ADC6_P3_Size[2];       /* Computed Parameter: Comedi2ADC6_P3_Size
                                        * Referenced by: '<S27>/Comedi2 ADC6'
                                        */
  real_T Comedi2ADC6_P3;               /* Expression: range
                                        * Referenced by: '<S27>/Comedi2 ADC6'
                                        */
  real_T Comedi2ADC6_P4_Size[2];       /* Computed Parameter: Comedi2ADC6_P4_Size
                                        * Referenced by: '<S27>/Comedi2 ADC6'
                                        */
  real_T Comedi2ADC6_P4;               /* Expression: aref
                                        * Referenced by: '<S27>/Comedi2 ADC6'
                                        */
  real_T Comedi2ADC6_P5_Size[2];       /* Computed Parameter: Comedi2ADC6_P5_Size
                                        * Referenced by: '<S27>/Comedi2 ADC6'
                                        */
  real_T Comedi2ADC6_P5;               /* Expression: dt
                                        * Referenced by: '<S27>/Comedi2 ADC6'
                                        */
  real_T Comedi0ADC5_P1_Size[2];       /* Computed Parameter: Comedi0ADC5_P1_Size
                                        * Referenced by: '<S30>/Comedi0 ADC5'
                                        */
  real_T Comedi0ADC5_P1;               /* Expression: dev
                                        * Referenced by: '<S30>/Comedi0 ADC5'
                                        */
  real_T Comedi0ADC5_P2_Size[2];       /* Computed Parameter: Comedi0ADC5_P2_Size
                                        * Referenced by: '<S30>/Comedi0 ADC5'
                                        */
  real_T Comedi0ADC5_P2;               /* Expression: chan
                                        * Referenced by: '<S30>/Comedi0 ADC5'
                                        */
  real_T Comedi0ADC5_P3_Size[2];       /* Computed Parameter: Comedi0ADC5_P3_Size
                                        * Referenced by: '<S30>/Comedi0 ADC5'
                                        */
  real_T Comedi0ADC5_P3;               /* Expression: range
                                        * Referenced by: '<S30>/Comedi0 ADC5'
                                        */
  real_T Comedi0ADC5_P4_Size[2];       /* Computed Parameter: Comedi0ADC5_P4_Size
                                        * Referenced by: '<S30>/Comedi0 ADC5'
                                        */
  real_T Comedi0ADC5_P4;               /* Expression: aref
                                        * Referenced by: '<S30>/Comedi0 ADC5'
                                        */
  real_T Comedi0ADC5_P5_Size[2];       /* Computed Parameter: Comedi0ADC5_P5_Size
                                        * Referenced by: '<S30>/Comedi0 ADC5'
                                        */
  real_T Comedi0ADC5_P5;               /* Expression: dt
                                        * Referenced by: '<S30>/Comedi0 ADC5'
                                        */
  real_T Comedi0ADC0_P1_Size[2];       /* Computed Parameter: Comedi0ADC0_P1_Size
                                        * Referenced by: '<S31>/Comedi0 ADC0'
                                        */
  real_T Comedi0ADC0_P1;               /* Expression: dev
                                        * Referenced by: '<S31>/Comedi0 ADC0'
                                        */
  real_T Comedi0ADC0_P2_Size[2];       /* Computed Parameter: Comedi0ADC0_P2_Size
                                        * Referenced by: '<S31>/Comedi0 ADC0'
                                        */
  real_T Comedi0ADC0_P2;               /* Expression: chan
                                        * Referenced by: '<S31>/Comedi0 ADC0'
                                        */
  real_T Comedi0ADC0_P3_Size[2];       /* Computed Parameter: Comedi0ADC0_P3_Size
                                        * Referenced by: '<S31>/Comedi0 ADC0'
                                        */
  real_T Comedi0ADC0_P3;               /* Expression: range
                                        * Referenced by: '<S31>/Comedi0 ADC0'
                                        */
  real_T Comedi0ADC0_P4_Size[2];       /* Computed Parameter: Comedi0ADC0_P4_Size
                                        * Referenced by: '<S31>/Comedi0 ADC0'
                                        */
  real_T Comedi0ADC0_P4;               /* Expression: aref
                                        * Referenced by: '<S31>/Comedi0 ADC0'
                                        */
  real_T Comedi0ADC0_P5_Size[2];       /* Computed Parameter: Comedi0ADC0_P5_Size
                                        * Referenced by: '<S31>/Comedi0 ADC0'
                                        */
  real_T Comedi0ADC0_P5;               /* Expression: dt
                                        * Referenced by: '<S31>/Comedi0 ADC0'
                                        */
  real_T Comedi1ADC0_P1_Size[2];       /* Computed Parameter: Comedi1ADC0_P1_Size
                                        * Referenced by: '<S29>/Comedi1 ADC0'
                                        */
  real_T Comedi1ADC0_P1;               /* Expression: dev
                                        * Referenced by: '<S29>/Comedi1 ADC0'
                                        */
  real_T Comedi1ADC0_P2_Size[2];       /* Computed Parameter: Comedi1ADC0_P2_Size
                                        * Referenced by: '<S29>/Comedi1 ADC0'
                                        */
  real_T Comedi1ADC0_P2;               /* Expression: chan
                                        * Referenced by: '<S29>/Comedi1 ADC0'
                                        */
  real_T Comedi1ADC0_P3_Size[2];       /* Computed Parameter: Comedi1ADC0_P3_Size
                                        * Referenced by: '<S29>/Comedi1 ADC0'
                                        */
  real_T Comedi1ADC0_P3;               /* Expression: range
                                        * Referenced by: '<S29>/Comedi1 ADC0'
                                        */
  real_T Comedi1ADC0_P4_Size[2];       /* Computed Parameter: Comedi1ADC0_P4_Size
                                        * Referenced by: '<S29>/Comedi1 ADC0'
                                        */
  real_T Comedi1ADC0_P4;               /* Expression: aref
                                        * Referenced by: '<S29>/Comedi1 ADC0'
                                        */
  real_T Comedi1ADC0_P5_Size[2];       /* Computed Parameter: Comedi1ADC0_P5_Size
                                        * Referenced by: '<S29>/Comedi1 ADC0'
                                        */
  real_T Comedi1ADC0_P5;               /* Expression: dt
                                        * Referenced by: '<S29>/Comedi1 ADC0'
                                        */
  real_T Comedi1ADC1_P1_Size[2];       /* Computed Parameter: Comedi1ADC1_P1_Size
                                        * Referenced by: '<S29>/Comedi1 ADC1'
                                        */
  real_T Comedi1ADC1_P1;               /* Expression: dev
                                        * Referenced by: '<S29>/Comedi1 ADC1'
                                        */
  real_T Comedi1ADC1_P2_Size[2];       /* Computed Parameter: Comedi1ADC1_P2_Size
                                        * Referenced by: '<S29>/Comedi1 ADC1'
                                        */
  real_T Comedi1ADC1_P2;               /* Expression: chan
                                        * Referenced by: '<S29>/Comedi1 ADC1'
                                        */
  real_T Comedi1ADC1_P3_Size[2];       /* Computed Parameter: Comedi1ADC1_P3_Size
                                        * Referenced by: '<S29>/Comedi1 ADC1'
                                        */
  real_T Comedi1ADC1_P3;               /* Expression: range
                                        * Referenced by: '<S29>/Comedi1 ADC1'
                                        */
  real_T Comedi1ADC1_P4_Size[2];       /* Computed Parameter: Comedi1ADC1_P4_Size
                                        * Referenced by: '<S29>/Comedi1 ADC1'
                                        */
  real_T Comedi1ADC1_P4;               /* Expression: aref
                                        * Referenced by: '<S29>/Comedi1 ADC1'
                                        */
  real_T Comedi1ADC1_P5_Size[2];       /* Computed Parameter: Comedi1ADC1_P5_Size
                                        * Referenced by: '<S29>/Comedi1 ADC1'
                                        */
  real_T Comedi1ADC1_P5;               /* Expression: dt
                                        * Referenced by: '<S29>/Comedi1 ADC1'
                                        */
  real_T Comedi1ADC2_P1_Size[2];       /* Computed Parameter: Comedi1ADC2_P1_Size
                                        * Referenced by: '<S29>/Comedi1 ADC2'
                                        */
  real_T Comedi1ADC2_P1;               /* Expression: dev
                                        * Referenced by: '<S29>/Comedi1 ADC2'
                                        */
  real_T Comedi1ADC2_P2_Size[2];       /* Computed Parameter: Comedi1ADC2_P2_Size
                                        * Referenced by: '<S29>/Comedi1 ADC2'
                                        */
  real_T Comedi1ADC2_P2;               /* Expression: chan
                                        * Referenced by: '<S29>/Comedi1 ADC2'
                                        */
  real_T Comedi1ADC2_P3_Size[2];       /* Computed Parameter: Comedi1ADC2_P3_Size
                                        * Referenced by: '<S29>/Comedi1 ADC2'
                                        */
  real_T Comedi1ADC2_P3;               /* Expression: range
                                        * Referenced by: '<S29>/Comedi1 ADC2'
                                        */
  real_T Comedi1ADC2_P4_Size[2];       /* Computed Parameter: Comedi1ADC2_P4_Size
                                        * Referenced by: '<S29>/Comedi1 ADC2'
                                        */
  real_T Comedi1ADC2_P4;               /* Expression: aref
                                        * Referenced by: '<S29>/Comedi1 ADC2'
                                        */
  real_T Comedi1ADC2_P5_Size[2];       /* Computed Parameter: Comedi1ADC2_P5_Size
                                        * Referenced by: '<S29>/Comedi1 ADC2'
                                        */
  real_T Comedi1ADC2_P5;               /* Expression: dt
                                        * Referenced by: '<S29>/Comedi1 ADC2'
                                        */
  real_T Comedi1ADC3_P1_Size[2];       /* Computed Parameter: Comedi1ADC3_P1_Size
                                        * Referenced by: '<S29>/Comedi1 ADC3'
                                        */
  real_T Comedi1ADC3_P1;               /* Expression: dev
                                        * Referenced by: '<S29>/Comedi1 ADC3'
                                        */
  real_T Comedi1ADC3_P2_Size[2];       /* Computed Parameter: Comedi1ADC3_P2_Size
                                        * Referenced by: '<S29>/Comedi1 ADC3'
                                        */
  real_T Comedi1ADC3_P2;               /* Expression: chan
                                        * Referenced by: '<S29>/Comedi1 ADC3'
                                        */
  real_T Comedi1ADC3_P3_Size[2];       /* Computed Parameter: Comedi1ADC3_P3_Size
                                        * Referenced by: '<S29>/Comedi1 ADC3'
                                        */
  real_T Comedi1ADC3_P3;               /* Expression: range
                                        * Referenced by: '<S29>/Comedi1 ADC3'
                                        */
  real_T Comedi1ADC3_P4_Size[2];       /* Computed Parameter: Comedi1ADC3_P4_Size
                                        * Referenced by: '<S29>/Comedi1 ADC3'
                                        */
  real_T Comedi1ADC3_P4;               /* Expression: aref
                                        * Referenced by: '<S29>/Comedi1 ADC3'
                                        */
  real_T Comedi1ADC3_P5_Size[2];       /* Computed Parameter: Comedi1ADC3_P5_Size
                                        * Referenced by: '<S29>/Comedi1 ADC3'
                                        */
  real_T Comedi1ADC3_P5;               /* Expression: dt
                                        * Referenced by: '<S29>/Comedi1 ADC3'
                                        */
  real_T Comedi1ADC4_P1_Size[2];       /* Computed Parameter: Comedi1ADC4_P1_Size
                                        * Referenced by: '<S29>/Comedi1 ADC4'
                                        */
  real_T Comedi1ADC4_P1;               /* Expression: dev
                                        * Referenced by: '<S29>/Comedi1 ADC4'
                                        */
  real_T Comedi1ADC4_P2_Size[2];       /* Computed Parameter: Comedi1ADC4_P2_Size
                                        * Referenced by: '<S29>/Comedi1 ADC4'
                                        */
  real_T Comedi1ADC4_P2;               /* Expression: chan
                                        * Referenced by: '<S29>/Comedi1 ADC4'
                                        */
  real_T Comedi1ADC4_P3_Size[2];       /* Computed Parameter: Comedi1ADC4_P3_Size
                                        * Referenced by: '<S29>/Comedi1 ADC4'
                                        */
  real_T Comedi1ADC4_P3;               /* Expression: range
                                        * Referenced by: '<S29>/Comedi1 ADC4'
                                        */
  real_T Comedi1ADC4_P4_Size[2];       /* Computed Parameter: Comedi1ADC4_P4_Size
                                        * Referenced by: '<S29>/Comedi1 ADC4'
                                        */
  real_T Comedi1ADC4_P4;               /* Expression: aref
                                        * Referenced by: '<S29>/Comedi1 ADC4'
                                        */
  real_T Comedi1ADC4_P5_Size[2];       /* Computed Parameter: Comedi1ADC4_P5_Size
                                        * Referenced by: '<S29>/Comedi1 ADC4'
                                        */
  real_T Comedi1ADC4_P5;               /* Expression: dt
                                        * Referenced by: '<S29>/Comedi1 ADC4'
                                        */
  real_T Comedi1ADC5_P1_Size[2];       /* Computed Parameter: Comedi1ADC5_P1_Size
                                        * Referenced by: '<S29>/Comedi1 ADC5'
                                        */
  real_T Comedi1ADC5_P1;               /* Expression: dev
                                        * Referenced by: '<S29>/Comedi1 ADC5'
                                        */
  real_T Comedi1ADC5_P2_Size[2];       /* Computed Parameter: Comedi1ADC5_P2_Size
                                        * Referenced by: '<S29>/Comedi1 ADC5'
                                        */
  real_T Comedi1ADC5_P2;               /* Expression: chan
                                        * Referenced by: '<S29>/Comedi1 ADC5'
                                        */
  real_T Comedi1ADC5_P3_Size[2];       /* Computed Parameter: Comedi1ADC5_P3_Size
                                        * Referenced by: '<S29>/Comedi1 ADC5'
                                        */
  real_T Comedi1ADC5_P3;               /* Expression: range
                                        * Referenced by: '<S29>/Comedi1 ADC5'
                                        */
  real_T Comedi1ADC5_P4_Size[2];       /* Computed Parameter: Comedi1ADC5_P4_Size
                                        * Referenced by: '<S29>/Comedi1 ADC5'
                                        */
  real_T Comedi1ADC5_P4;               /* Expression: aref
                                        * Referenced by: '<S29>/Comedi1 ADC5'
                                        */
  real_T Comedi1ADC5_P5_Size[2];       /* Computed Parameter: Comedi1ADC5_P5_Size
                                        * Referenced by: '<S29>/Comedi1 ADC5'
                                        */
  real_T Comedi1ADC5_P5;               /* Expression: dt
                                        * Referenced by: '<S29>/Comedi1 ADC5'
                                        */
  real_T Comedi2DAC0_P1_Size[2];       /* Computed Parameter: Comedi2DAC0_P1_Size
                                        * Referenced by: '<S32>/Comedi2 DAC0'
                                        */
  real_T Comedi2DAC0_P1;               /* Expression: dev
                                        * Referenced by: '<S32>/Comedi2 DAC0'
                                        */
  real_T Comedi2DAC0_P2_Size[2];       /* Computed Parameter: Comedi2DAC0_P2_Size
                                        * Referenced by: '<S32>/Comedi2 DAC0'
                                        */
  real_T Comedi2DAC0_P2;               /* Expression: chan
                                        * Referenced by: '<S32>/Comedi2 DAC0'
                                        */
  real_T Comedi2DAC0_P3_Size[2];       /* Computed Parameter: Comedi2DAC0_P3_Size
                                        * Referenced by: '<S32>/Comedi2 DAC0'
                                        */
  real_T Comedi2DAC0_P3;               /* Expression: range
                                        * Referenced by: '<S32>/Comedi2 DAC0'
                                        */
  real_T Comedi2DAC0_P4_Size[2];       /* Computed Parameter: Comedi2DAC0_P4_Size
                                        * Referenced by: '<S32>/Comedi2 DAC0'
                                        */
  real_T Comedi2DAC0_P4;               /* Expression: aref
                                        * Referenced by: '<S32>/Comedi2 DAC0'
                                        */
  real_T Comedi2DAC1_P1_Size[2];       /* Computed Parameter: Comedi2DAC1_P1_Size
                                        * Referenced by: '<S32>/Comedi2 DAC1'
                                        */
  real_T Comedi2DAC1_P1;               /* Expression: dev
                                        * Referenced by: '<S32>/Comedi2 DAC1'
                                        */
  real_T Comedi2DAC1_P2_Size[2];       /* Computed Parameter: Comedi2DAC1_P2_Size
                                        * Referenced by: '<S32>/Comedi2 DAC1'
                                        */
  real_T Comedi2DAC1_P2;               /* Expression: chan
                                        * Referenced by: '<S32>/Comedi2 DAC1'
                                        */
  real_T Comedi2DAC1_P3_Size[2];       /* Computed Parameter: Comedi2DAC1_P3_Size
                                        * Referenced by: '<S32>/Comedi2 DAC1'
                                        */
  real_T Comedi2DAC1_P3;               /* Expression: range
                                        * Referenced by: '<S32>/Comedi2 DAC1'
                                        */
  real_T Comedi2DAC1_P4_Size[2];       /* Computed Parameter: Comedi2DAC1_P4_Size
                                        * Referenced by: '<S32>/Comedi2 DAC1'
                                        */
  real_T Comedi2DAC1_P4;               /* Expression: aref
                                        * Referenced by: '<S32>/Comedi2 DAC1'
                                        */
  real_T Comedi2DAC2_P1_Size[2];       /* Computed Parameter: Comedi2DAC2_P1_Size
                                        * Referenced by: '<S32>/Comedi2 DAC2'
                                        */
  real_T Comedi2DAC2_P1;               /* Expression: dev
                                        * Referenced by: '<S32>/Comedi2 DAC2'
                                        */
  real_T Comedi2DAC2_P2_Size[2];       /* Computed Parameter: Comedi2DAC2_P2_Size
                                        * Referenced by: '<S32>/Comedi2 DAC2'
                                        */
  real_T Comedi2DAC2_P2;               /* Expression: chan
                                        * Referenced by: '<S32>/Comedi2 DAC2'
                                        */
  real_T Comedi2DAC2_P3_Size[2];       /* Computed Parameter: Comedi2DAC2_P3_Size
                                        * Referenced by: '<S32>/Comedi2 DAC2'
                                        */
  real_T Comedi2DAC2_P3;               /* Expression: range
                                        * Referenced by: '<S32>/Comedi2 DAC2'
                                        */
  real_T Comedi2DAC2_P4_Size[2];       /* Computed Parameter: Comedi2DAC2_P4_Size
                                        * Referenced by: '<S32>/Comedi2 DAC2'
                                        */
  real_T Comedi2DAC2_P4;               /* Expression: aref
                                        * Referenced by: '<S32>/Comedi2 DAC2'
                                        */
  real_T Comedi2DAC3_P1_Size[2];       /* Computed Parameter: Comedi2DAC3_P1_Size
                                        * Referenced by: '<S32>/Comedi2 DAC3'
                                        */
  real_T Comedi2DAC3_P1;               /* Expression: dev
                                        * Referenced by: '<S32>/Comedi2 DAC3'
                                        */
  real_T Comedi2DAC3_P2_Size[2];       /* Computed Parameter: Comedi2DAC3_P2_Size
                                        * Referenced by: '<S32>/Comedi2 DAC3'
                                        */
  real_T Comedi2DAC3_P2;               /* Expression: chan
                                        * Referenced by: '<S32>/Comedi2 DAC3'
                                        */
  real_T Comedi2DAC3_P3_Size[2];       /* Computed Parameter: Comedi2DAC3_P3_Size
                                        * Referenced by: '<S32>/Comedi2 DAC3'
                                        */
  real_T Comedi2DAC3_P3;               /* Expression: range
                                        * Referenced by: '<S32>/Comedi2 DAC3'
                                        */
  real_T Comedi2DAC3_P4_Size[2];       /* Computed Parameter: Comedi2DAC3_P4_Size
                                        * Referenced by: '<S32>/Comedi2 DAC3'
                                        */
  real_T Comedi2DAC3_P4;               /* Expression: aref
                                        * Referenced by: '<S32>/Comedi2 DAC3'
                                        */
  real_T Comedi0DAC4_P1_Size[2];       /* Computed Parameter: Comedi0DAC4_P1_Size
                                        * Referenced by: '<S32>/Comedi0 DAC4'
                                        */
  real_T Comedi0DAC4_P1;               /* Expression: dev
                                        * Referenced by: '<S32>/Comedi0 DAC4'
                                        */
  real_T Comedi0DAC4_P2_Size[2];       /* Computed Parameter: Comedi0DAC4_P2_Size
                                        * Referenced by: '<S32>/Comedi0 DAC4'
                                        */
  real_T Comedi0DAC4_P2;               /* Expression: chan
                                        * Referenced by: '<S32>/Comedi0 DAC4'
                                        */
  real_T Comedi0DAC4_P3_Size[2];       /* Computed Parameter: Comedi0DAC4_P3_Size
                                        * Referenced by: '<S32>/Comedi0 DAC4'
                                        */
  real_T Comedi0DAC4_P3;               /* Expression: range
                                        * Referenced by: '<S32>/Comedi0 DAC4'
                                        */
  real_T Comedi0DAC4_P4_Size[2];       /* Computed Parameter: Comedi0DAC4_P4_Size
                                        * Referenced by: '<S32>/Comedi0 DAC4'
                                        */
  real_T Comedi0DAC4_P4;               /* Expression: aref
                                        * Referenced by: '<S32>/Comedi0 DAC4'
                                        */
  real_T Comedi0DAC5_P1_Size[2];       /* Computed Parameter: Comedi0DAC5_P1_Size
                                        * Referenced by: '<S32>/Comedi0 DAC5'
                                        */
  real_T Comedi0DAC5_P1;               /* Expression: dev
                                        * Referenced by: '<S32>/Comedi0 DAC5'
                                        */
  real_T Comedi0DAC5_P2_Size[2];       /* Computed Parameter: Comedi0DAC5_P2_Size
                                        * Referenced by: '<S32>/Comedi0 DAC5'
                                        */
  real_T Comedi0DAC5_P2;               /* Expression: chan
                                        * Referenced by: '<S32>/Comedi0 DAC5'
                                        */
  real_T Comedi0DAC5_P3_Size[2];       /* Computed Parameter: Comedi0DAC5_P3_Size
                                        * Referenced by: '<S32>/Comedi0 DAC5'
                                        */
  real_T Comedi0DAC5_P3;               /* Expression: range
                                        * Referenced by: '<S32>/Comedi0 DAC5'
                                        */
  real_T Comedi0DAC5_P4_Size[2];       /* Computed Parameter: Comedi0DAC5_P4_Size
                                        * Referenced by: '<S32>/Comedi0 DAC5'
                                        */
  real_T Comedi0DAC5_P4;               /* Expression: aref
                                        * Referenced by: '<S32>/Comedi0 DAC5'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 5
                                        * Referenced by: '<S33>/Gain'
                                        */
  real_T Comedi0DAC2_P1_Size[2];       /* Computed Parameter: Comedi0DAC2_P1_Size
                                        * Referenced by: '<S33>/Comedi0 DAC2'
                                        */
  real_T Comedi0DAC2_P1;               /* Expression: dev
                                        * Referenced by: '<S33>/Comedi0 DAC2'
                                        */
  real_T Comedi0DAC2_P2_Size[2];       /* Computed Parameter: Comedi0DAC2_P2_Size
                                        * Referenced by: '<S33>/Comedi0 DAC2'
                                        */
  real_T Comedi0DAC2_P2;               /* Expression: chan
                                        * Referenced by: '<S33>/Comedi0 DAC2'
                                        */
  real_T Comedi0DAC2_P3_Size[2];       /* Computed Parameter: Comedi0DAC2_P3_Size
                                        * Referenced by: '<S33>/Comedi0 DAC2'
                                        */
  real_T Comedi0DAC2_P3;               /* Expression: range
                                        * Referenced by: '<S33>/Comedi0 DAC2'
                                        */
  real_T Comedi0DAC2_P4_Size[2];       /* Computed Parameter: Comedi0DAC2_P4_Size
                                        * Referenced by: '<S33>/Comedi0 DAC2'
                                        */
  real_T Comedi0DAC2_P4;               /* Expression: aref
                                        * Referenced by: '<S33>/Comedi0 DAC2'
                                        */
  real_T Gain1_Gain_j;                 /* Expression: 5
                                        * Referenced by: '<S33>/Gain1'
                                        */
  real_T Comedi0DAC1_P1_Size[2];       /* Computed Parameter: Comedi0DAC1_P1_Size
                                        * Referenced by: '<S33>/Comedi0 DAC1'
                                        */
  real_T Comedi0DAC1_P1;               /* Expression: dev
                                        * Referenced by: '<S33>/Comedi0 DAC1'
                                        */
  real_T Comedi0DAC1_P2_Size[2];       /* Computed Parameter: Comedi0DAC1_P2_Size
                                        * Referenced by: '<S33>/Comedi0 DAC1'
                                        */
  real_T Comedi0DAC1_P2;               /* Expression: chan
                                        * Referenced by: '<S33>/Comedi0 DAC1'
                                        */
  real_T Comedi0DAC1_P3_Size[2];       /* Computed Parameter: Comedi0DAC1_P3_Size
                                        * Referenced by: '<S33>/Comedi0 DAC1'
                                        */
  real_T Comedi0DAC1_P3;               /* Expression: range
                                        * Referenced by: '<S33>/Comedi0 DAC1'
                                        */
  real_T Comedi0DAC1_P4_Size[2];       /* Computed Parameter: Comedi0DAC1_P4_Size
                                        * Referenced by: '<S33>/Comedi0 DAC1'
                                        */
  real_T Comedi0DAC1_P4;               /* Expression: aref
                                        * Referenced by: '<S33>/Comedi0 DAC1'
                                        */
  real_T Gain2_Gain_ou;                /* Expression: 5
                                        * Referenced by: '<S33>/Gain2'
                                        */
  real_T Comedi2DAC4_P1_Size[2];       /* Computed Parameter: Comedi2DAC4_P1_Size
                                        * Referenced by: '<S33>/Comedi2 DAC4'
                                        */
  real_T Comedi2DAC4_P1;               /* Expression: dev
                                        * Referenced by: '<S33>/Comedi2 DAC4'
                                        */
  real_T Comedi2DAC4_P2_Size[2];       /* Computed Parameter: Comedi2DAC4_P2_Size
                                        * Referenced by: '<S33>/Comedi2 DAC4'
                                        */
  real_T Comedi2DAC4_P2;               /* Expression: chan
                                        * Referenced by: '<S33>/Comedi2 DAC4'
                                        */
  real_T Comedi2DAC4_P3_Size[2];       /* Computed Parameter: Comedi2DAC4_P3_Size
                                        * Referenced by: '<S33>/Comedi2 DAC4'
                                        */
  real_T Comedi2DAC4_P3;               /* Expression: range
                                        * Referenced by: '<S33>/Comedi2 DAC4'
                                        */
  real_T Comedi2DAC4_P4_Size[2];       /* Computed Parameter: Comedi2DAC4_P4_Size
                                        * Referenced by: '<S33>/Comedi2 DAC4'
                                        */
  real_T Comedi2DAC4_P4;               /* Expression: aref
                                        * Referenced by: '<S33>/Comedi2 DAC4'
                                        */
  real_T Gain3_Gain_e;                 /* Expression: 5
                                        * Referenced by: '<S33>/Gain3'
                                        */
  real_T Comedi2DAC5_P1_Size[2];       /* Computed Parameter: Comedi2DAC5_P1_Size
                                        * Referenced by: '<S33>/Comedi2 DAC5'
                                        */
  real_T Comedi2DAC5_P1;               /* Expression: dev
                                        * Referenced by: '<S33>/Comedi2 DAC5'
                                        */
  real_T Comedi2DAC5_P2_Size[2];       /* Computed Parameter: Comedi2DAC5_P2_Size
                                        * Referenced by: '<S33>/Comedi2 DAC5'
                                        */
  real_T Comedi2DAC5_P2;               /* Expression: chan
                                        * Referenced by: '<S33>/Comedi2 DAC5'
                                        */
  real_T Comedi2DAC5_P3_Size[2];       /* Computed Parameter: Comedi2DAC5_P3_Size
                                        * Referenced by: '<S33>/Comedi2 DAC5'
                                        */
  real_T Comedi2DAC5_P3;               /* Expression: range
                                        * Referenced by: '<S33>/Comedi2 DAC5'
                                        */
  real_T Comedi2DAC5_P4_Size[2];       /* Computed Parameter: Comedi2DAC5_P4_Size
                                        * Referenced by: '<S33>/Comedi2 DAC5'
                                        */
  real_T Comedi2DAC5_P4;               /* Expression: aref
                                        * Referenced by: '<S33>/Comedi2 DAC5'
                                        */
  real_T Gain4_Gain_a;                 /* Expression: 5
                                        * Referenced by: '<S33>/Gain4'
                                        */
  real_T Comedi0DAC0_P1_Size[2];       /* Computed Parameter: Comedi0DAC0_P1_Size
                                        * Referenced by: '<S33>/Comedi0 DAC0'
                                        */
  real_T Comedi0DAC0_P1;               /* Expression: dev
                                        * Referenced by: '<S33>/Comedi0 DAC0'
                                        */
  real_T Comedi0DAC0_P2_Size[2];       /* Computed Parameter: Comedi0DAC0_P2_Size
                                        * Referenced by: '<S33>/Comedi0 DAC0'
                                        */
  real_T Comedi0DAC0_P2;               /* Expression: chan
                                        * Referenced by: '<S33>/Comedi0 DAC0'
                                        */
  real_T Comedi0DAC0_P3_Size[2];       /* Computed Parameter: Comedi0DAC0_P3_Size
                                        * Referenced by: '<S33>/Comedi0 DAC0'
                                        */
  real_T Comedi0DAC0_P3;               /* Expression: range
                                        * Referenced by: '<S33>/Comedi0 DAC0'
                                        */
  real_T Comedi0DAC0_P4_Size[2];       /* Computed Parameter: Comedi0DAC0_P4_Size
                                        * Referenced by: '<S33>/Comedi0 DAC0'
                                        */
  real_T Comedi0DAC0_P4;               /* Expression: aref
                                        * Referenced by: '<S33>/Comedi0 DAC0'
                                        */
  real_T Gain5_Gain;                   /* Expression: 5
                                        * Referenced by: '<S33>/Gain5'
                                        */
  real_T Comedi2DAC6_P1_Size[2];       /* Computed Parameter: Comedi2DAC6_P1_Size
                                        * Referenced by: '<S33>/Comedi2  DAC6'
                                        */
  real_T Comedi2DAC6_P1;               /* Expression: dev
                                        * Referenced by: '<S33>/Comedi2  DAC6'
                                        */
  real_T Comedi2DAC6_P2_Size[2];       /* Computed Parameter: Comedi2DAC6_P2_Size
                                        * Referenced by: '<S33>/Comedi2  DAC6'
                                        */
  real_T Comedi2DAC6_P2;               /* Expression: chan
                                        * Referenced by: '<S33>/Comedi2  DAC6'
                                        */
  real_T Comedi2DAC6_P3_Size[2];       /* Computed Parameter: Comedi2DAC6_P3_Size
                                        * Referenced by: '<S33>/Comedi2  DAC6'
                                        */
  real_T Comedi2DAC6_P3;               /* Expression: range
                                        * Referenced by: '<S33>/Comedi2  DAC6'
                                        */
  real_T Comedi2DAC6_P4_Size[2];       /* Computed Parameter: Comedi2DAC6_P4_Size
                                        * Referenced by: '<S33>/Comedi2  DAC6'
                                        */
  real_T Comedi2DAC6_P4;               /* Expression: aref
                                        * Referenced by: '<S33>/Comedi2  DAC6'
                                        */
  real_T Comedi0DO0_P1_Size[2];        /* Computed Parameter: Comedi0DO0_P1_Size
                                        * Referenced by: '<S28>/Comedi0 DO0'
                                        */
  real_T Comedi0DO0_P1;                /* Expression: dev
                                        * Referenced by: '<S28>/Comedi0 DO0'
                                        */
  real_T Comedi0DO0_P2_Size[2];        /* Computed Parameter: Comedi0DO0_P2_Size
                                        * Referenced by: '<S28>/Comedi0 DO0'
                                        */
  real_T Comedi0DO0_P2;                /* Expression: chan
                                        * Referenced by: '<S28>/Comedi0 DO0'
                                        */
  real_T Comedi0DO0_P3_Size[2];        /* Computed Parameter: Comedi0DO0_P3_Size
                                        * Referenced by: '<S28>/Comedi0 DO0'
                                        */
  real_T Comedi0DO0_P3;                /* Expression: threshold
                                        * Referenced by: '<S28>/Comedi0 DO0'
                                        */
  real_T Comedi0DO1_P1_Size[2];        /* Computed Parameter: Comedi0DO1_P1_Size
                                        * Referenced by: '<S28>/Comedi0 DO1'
                                        */
  real_T Comedi0DO1_P1;                /* Expression: dev
                                        * Referenced by: '<S28>/Comedi0 DO1'
                                        */
  real_T Comedi0DO1_P2_Size[2];        /* Computed Parameter: Comedi0DO1_P2_Size
                                        * Referenced by: '<S28>/Comedi0 DO1'
                                        */
  real_T Comedi0DO1_P2;                /* Expression: chan
                                        * Referenced by: '<S28>/Comedi0 DO1'
                                        */
  real_T Comedi0DO1_P3_Size[2];        /* Computed Parameter: Comedi0DO1_P3_Size
                                        * Referenced by: '<S28>/Comedi0 DO1'
                                        */
  real_T Comedi0DO1_P3;                /* Expression: threshold
                                        * Referenced by: '<S28>/Comedi0 DO1'
                                        */
  real_T Comedi0DO2_P1_Size[2];        /* Computed Parameter: Comedi0DO2_P1_Size
                                        * Referenced by: '<S28>/Comedi0 DO2'
                                        */
  real_T Comedi0DO2_P1;                /* Expression: dev
                                        * Referenced by: '<S28>/Comedi0 DO2'
                                        */
  real_T Comedi0DO2_P2_Size[2];        /* Computed Parameter: Comedi0DO2_P2_Size
                                        * Referenced by: '<S28>/Comedi0 DO2'
                                        */
  real_T Comedi0DO2_P2;                /* Expression: chan
                                        * Referenced by: '<S28>/Comedi0 DO2'
                                        */
  real_T Comedi0DO2_P3_Size[2];        /* Computed Parameter: Comedi0DO2_P3_Size
                                        * Referenced by: '<S28>/Comedi0 DO2'
                                        */
  real_T Comedi0DO2_P3;                /* Expression: threshold
                                        * Referenced by: '<S28>/Comedi0 DO2'
                                        */
  real_T Comedi0DO3_P1_Size[2];        /* Computed Parameter: Comedi0DO3_P1_Size
                                        * Referenced by: '<S28>/Comedi0 DO3'
                                        */
  real_T Comedi0DO3_P1;                /* Expression: dev
                                        * Referenced by: '<S28>/Comedi0 DO3'
                                        */
  real_T Comedi0DO3_P2_Size[2];        /* Computed Parameter: Comedi0DO3_P2_Size
                                        * Referenced by: '<S28>/Comedi0 DO3'
                                        */
  real_T Comedi0DO3_P2;                /* Expression: chan
                                        * Referenced by: '<S28>/Comedi0 DO3'
                                        */
  real_T Comedi0DO3_P3_Size[2];        /* Computed Parameter: Comedi0DO3_P3_Size
                                        * Referenced by: '<S28>/Comedi0 DO3'
                                        */
  real_T Comedi0DO3_P3;                /* Expression: threshold
                                        * Referenced by: '<S28>/Comedi0 DO3'
                                        */
  real_T LookUpTable_XData_p[23];      /* Expression: tv
                                        * Referenced by: '<S6>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_k[23];      /* Expression: opv
                                        * Referenced by: '<S6>/Look-Up Table'
                                        */
  real_T HitCrossing_Offset_f;         /* Expression: 0
                                        * Referenced by: '<S6>/Hit  Crossing'
                                        */
  real_T LookUpTable_XData_i[39];      /* Expression: tv
                                        * Referenced by: '<S7>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_b[39];      /* Expression: opv
                                        * Referenced by: '<S7>/Look-Up Table'
                                        */
  real_T HitCrossing_Offset_i;         /* Expression: 0
                                        * Referenced by: '<S7>/Hit  Crossing'
                                        */
  real_T LookUpTable_XData_is[39];     /* Expression: tv
                                        * Referenced by: '<S8>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_g[39];      /* Expression: opv
                                        * Referenced by: '<S8>/Look-Up Table'
                                        */
  real_T HitCrossing_Offset_o;         /* Expression: 0
                                        * Referenced by: '<S8>/Hit  Crossing'
                                        */
  real_T LookUpTable_XData_d[39];      /* Expression: tv
                                        * Referenced by: '<S9>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_p[39];      /* Expression: opv
                                        * Referenced by: '<S9>/Look-Up Table'
                                        */
  real_T HitCrossing_Offset_fi;        /* Expression: 0
                                        * Referenced by: '<S9>/Hit  Crossing'
                                        */
  real_T LookUpTable_XData_f[7];       /* Expression: tv
                                        * Referenced by: '<S10>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_d[7];       /* Expression: opv
                                        * Referenced by: '<S10>/Look-Up Table'
                                        */
  real_T HitCrossing_Offset_l;         /* Expression: 0
                                        * Referenced by: '<S10>/Hit  Crossing'
                                        */
  real_T LookUpTable_XData_n[7];       /* Expression: tv
                                        * Referenced by: '<S11>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_ko[7];      /* Expression: opv
                                        * Referenced by: '<S11>/Look-Up Table'
                                        */
  real_T HitCrossing_Offset_la;        /* Expression: 0
                                        * Referenced by: '<S11>/Hit  Crossing'
                                        */
};

/* Real-time Model Data Structure */
struct RT_MODEL_wss_system_ {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[38];
    SimStruct *childSFunctionPtrs[38];
    struct _ssBlkInfo2 blkInfo2[38];
    struct _ssSFcnModelMethods2 methods2[38];
    struct _ssSFcnModelMethods3 methods3[38];
    struct _ssStatesInfo2 statesInfo2[38];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn22;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn23;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn24;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn25;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn26;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn27;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn28;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn29;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn30;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn31;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn32;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn33;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn34;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn35;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn36;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn37;
  } NonInlinedSFcns;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    void *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    real_T *derivs;
    void *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;

  /*
   * Work:
   * The following substructure contains information regarding
   * the work vectors in the model.
   */
  struct {
    void *dwork;
  } Work;
};

/* Block parameters (auto storage) */
extern Parameters_wss_system_ wss_system__P;

/* Block signals (auto storage) */
extern BlockIO_wss_system_ wss_system__B;

/* Block states (auto storage) */
extern D_Work_wss_system_ wss_system__DWork;

/* Model entry point functions */
extern void wss_system__initialize(void);
extern void wss_system__output(void);
extern void wss_system__update(void);
extern void wss_system__terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_wss_system_ *const wss_system__M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'wss_system_'
 * '<S1>'   : 'wss_system_/Ctrl PRZ1'
 * '<S2>'   : 'wss_system_/Ctrl PRZ2'
 * '<S3>'   : 'wss_system_/Ctrl PRZ3'
 * '<S4>'   : 'wss_system_/Ctrl PRZ4'
 * '<S5>'   : 'wss_system_/PMA_press'
 * '<S6>'   : 'wss_system_/Timer'
 * '<S7>'   : 'wss_system_/Timer1'
 * '<S8>'   : 'wss_system_/Timer2'
 * '<S9>'   : 'wss_system_/Timer3'
 * '<S10>'  : 'wss_system_/Timer4'
 * '<S11>'  : 'wss_system_/Timer6'
 * '<S12>'  : 'wss_system_/Timer7'
 * '<S13>'  : 'wss_system_/WT_press'
 * '<S14>'  : 'wss_system_/Water Supply System'
 * '<S15>'  : 'wss_system_/pump_diff'
 * '<S16>'  : 'wss_system_/ring_press'
 * '<S17>'  : 'wss_system_/PMA_press/Discrete  Mean value4'
 * '<S18>'  : 'wss_system_/PMA_press/Discrete  Mean value5'
 * '<S19>'  : 'wss_system_/PMA_press/Discrete  Mean value6'
 * '<S20>'  : 'wss_system_/PMA_press/Discrete  Mean value8'
 * '<S21>'  : 'wss_system_/PMA_press/Discrete  Mean value4/Discrete Variable Transport Delay'
 * '<S22>'  : 'wss_system_/PMA_press/Discrete  Mean value5/Discrete Variable Transport Delay'
 * '<S23>'  : 'wss_system_/PMA_press/Discrete  Mean value6/Discrete Variable Transport Delay'
 * '<S24>'  : 'wss_system_/PMA_press/Discrete  Mean value8/Discrete Variable Transport Delay'
 * '<S25>'  : 'wss_system_/WT_press/Discrete  Mean value4'
 * '<S26>'  : 'wss_system_/WT_press/Discrete  Mean value4/Discrete Variable Transport Delay'
 * '<S27>'  : 'wss_system_/Water Supply System/End-user pres.'
 * '<S28>'  : 'wss_system_/Water Supply System/Mag Valves'
 * '<S29>'  : 'wss_system_/Water Supply System/Pump Power'
 * '<S30>'  : 'wss_system_/Water Supply System/Pump diff. pres.'
 * '<S31>'  : 'wss_system_/Water Supply System/Pump rel. pres.'
 * '<S32>'  : 'wss_system_/Water Supply System/Pumps'
 * '<S33>'  : 'wss_system_/Water Supply System/Valves'
 * '<S34>'  : 'wss_system_/pump_diff/Discrete  Mean value1'
 * '<S35>'  : 'wss_system_/pump_diff/Discrete  Mean value2'
 * '<S36>'  : 'wss_system_/pump_diff/Discrete  Mean value3'
 * '<S37>'  : 'wss_system_/pump_diff/Discrete  Mean value4'
 * '<S38>'  : 'wss_system_/pump_diff/Discrete  Mean value1/Discrete Variable Transport Delay'
 * '<S39>'  : 'wss_system_/pump_diff/Discrete  Mean value2/Discrete Variable Transport Delay'
 * '<S40>'  : 'wss_system_/pump_diff/Discrete  Mean value3/Discrete Variable Transport Delay'
 * '<S41>'  : 'wss_system_/pump_diff/Discrete  Mean value4/Discrete Variable Transport Delay'
 * '<S42>'  : 'wss_system_/ring_press/Discrete  Mean value1'
 * '<S43>'  : 'wss_system_/ring_press/Discrete  Mean value2'
 * '<S44>'  : 'wss_system_/ring_press/Discrete  Mean value3'
 * '<S45>'  : 'wss_system_/ring_press/Discrete  Mean value4'
 * '<S46>'  : 'wss_system_/ring_press/Discrete  Mean value1/Discrete Variable Transport Delay'
 * '<S47>'  : 'wss_system_/ring_press/Discrete  Mean value2/Discrete Variable Transport Delay'
 * '<S48>'  : 'wss_system_/ring_press/Discrete  Mean value3/Discrete Variable Transport Delay'
 * '<S49>'  : 'wss_system_/ring_press/Discrete  Mean value4/Discrete Variable Transport Delay'
 */
#endif                                 /* RTW_HEADER_wss_system__h_ */
