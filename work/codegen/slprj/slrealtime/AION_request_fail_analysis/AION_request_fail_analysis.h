/*
 * Code generation for system model 'AION_request_fail_analysis'
 * For more details, see corresponding source file AION_request_fail_analysis.c
 *
 */

#ifndef RTW_HEADER_AION_request_fail_analysis_h_
#define RTW_HEADER_AION_request_fail_analysis_h_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "verify/verifyIntrf.h"
#include "AION_request_fail_analysis_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Block states (default storage) for model 'AION_request_fail_analysis' */
struct DW_AION_request_fail_analysis_f_T {
  real_T request_fail_count;   /* '<Root>/Longitudinal_request_fail_analysis' */
  real_T request_fail_count_b;      /* '<Root>/Lateral_request_fail_analysis' */
};

/* Real-time Model Data Structure */
struct tag_RTM_AION_request_fail_analysis_T {
  const char_T **errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    boolean_T *stopRequestedFlag;
  } Timing;
};

struct MdlrefDW_AION_request_fail_analysis_T {
  DW_AION_request_fail_analysis_f_T rtdw;
  RT_MODEL_AION_request_fail_analysis_T rtm;
};

/* Model reference registration function */
extern void AION_request_fail_analysis_initialize(const char_T **rt_errorStatus,
  RT_MODEL_AION_request_fail_analysis_T *const AION_request_fail_analysis_M,
  DW_AION_request_fail_analysis_f_T *localDW);
extern void AION_request_fail_analysis_Init(DW_AION_request_fail_analysis_f_T
  *localDW);
extern void AION_request_fail_analysis_Reset(DW_AION_request_fail_analysis_f_T
  *localDW);
extern void AION_request_fail_analysis(const Control_request
  *rtu_InBus_set_lateral_control_info_set_LatCtrlReq, const Control_request
  *rtu_InBus_set_longitudinal_control_info_set_LngCtrlReq, const Control_status *
  rtu_InBus_get_SCU_info_get_LatCtrlMode, const Control_status
  *rtu_InBus_get_SCU_info_get_LngCtrlMode, DW_AION_request_fail_analysis_f_T
  *localDW);

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
 * '<Root>' : 'AION_request_fail_analysis'
 * '<S1>'   : 'AION_request_fail_analysis/Lateral_request_fail_analysis'
 * '<S2>'   : 'AION_request_fail_analysis/Longitudinal_request_fail_analysis'
 */
#endif                            /* RTW_HEADER_AION_request_fail_analysis_h_ */
