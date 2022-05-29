/*
 * Code generation for system model 'AION_request_fail_analysis'
 *
 * Model                      : AION_request_fail_analysis
 * Model version              : 1.31
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 26 14:57:53 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "AION_request_fail_analysis.h"
#include "AION_request_fail_analysis_private.h"

/* System initialize for referenced model: 'AION_request_fail_analysis' */
void AION_request_fail_analysis_Init(DW_AION_request_fail_analysis_f_T *localDW)
{
  /* SystemInitialize for MATLAB Function: '<Root>/Lateral_request_fail_analysis' */
  localDW->request_fail_count_b = 0.0;

  /* SystemInitialize for MATLAB Function: '<Root>/Longitudinal_request_fail_analysis' */
  localDW->request_fail_count = 0.0;
}

/* System reset for referenced model: 'AION_request_fail_analysis' */
void AION_request_fail_analysis_Reset(DW_AION_request_fail_analysis_f_T *localDW)
{
  /* SystemReset for MATLAB Function: '<Root>/Lateral_request_fail_analysis' */
  localDW->request_fail_count_b = 0.0;

  /* SystemReset for MATLAB Function: '<Root>/Longitudinal_request_fail_analysis' */
  localDW->request_fail_count = 0.0;
}

/* Output and update for referenced model: 'AION_request_fail_analysis' */
void AION_request_fail_analysis(const Control_request
  *rtu_InBus_set_lateral_control_info_set_LatCtrlReq, const Control_request
  *rtu_InBus_set_longitudinal_control_info_set_LngCtrlReq, const Control_status *
  rtu_InBus_get_SCU_info_get_LatCtrlMode, const Control_status
  *rtu_InBus_get_SCU_info_get_LngCtrlMode, DW_AION_request_fail_analysis_f_T
  *localDW)
{
  /* MATLAB Function: '<Root>/Lateral_request_fail_analysis' */
  /* MATLAB Function 'Lateral_request_fail_analysis': '<S1>:1' */
  if ((*rtu_InBus_set_lateral_control_info_set_LatCtrlReq == Auto) &&
      (*rtu_InBus_get_SCU_info_get_LatCtrlMode == ManualStatus)) {
    /* '<S1>:1:17' */
    /* '<S1>:1:18' */
    localDW->request_fail_count_b++;
  } else {
    /* '<S1>:1:20' */
    localDW->request_fail_count_b = 0.0;
  }

  /* End of MATLAB Function: '<Root>/Lateral_request_fail_analysis' */

  /* MATLAB Function: '<Root>/Longitudinal_request_fail_analysis' */
  /* MATLAB Function 'Longitudinal_request_fail_analysis': '<S2>:1' */
  if ((*rtu_InBus_set_longitudinal_control_info_set_LngCtrlReq == Auto) &&
      (*rtu_InBus_get_SCU_info_get_LngCtrlMode == ManualStatus)) {
    /* '<S2>:1:17' */
    /* '<S2>:1:18' */
    localDW->request_fail_count++;
  } else {
    /* '<S2>:1:20' */
    localDW->request_fail_count = 0.0;
  }

  /* End of MATLAB Function: '<Root>/Longitudinal_request_fail_analysis' */
}

/* Model initialize function */
void AION_request_fail_analysis_initialize(const char_T **rt_errorStatus,
  RT_MODEL_AION_request_fail_analysis_T *const AION_request_fail_analysis_M,
  DW_AION_request_fail_analysis_f_T *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(AION_request_fail_analysis_M, rt_errorStatus);

  /* states (dwork) */
  localDW->request_fail_count = 0.0;
  localDW->request_fail_count_b = 0.0;
}
