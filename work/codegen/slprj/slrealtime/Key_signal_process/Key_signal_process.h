/*
 * Code generation for system model 'Key_signal_process'
 * For more details, see corresponding source file Key_signal_process.c
 *
 */

#ifndef RTW_HEADER_Key_signal_process_h_
#define RTW_HEADER_Key_signal_process_h_
#include <cstring>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "Key_signal_process_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "Key_signal_process_cal.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'Key_signal_process' */
struct B_Key_signal_process_c_T {
  real_T Switch;                       /* '<S9>/Switch' */
  real_T Switch_f;                     /* '<S13>/Switch' */
  real_T Switch2;                      /* '<S13>/Switch2' */
  real_T Add1;                         /* '<S15>/Add1' */
  real_T Add3;                         /* '<S15>/Add3' */
  real_T Min;                          /* '<S15>/Min' */
  real_T Plus;                         /* '<S9>/Plus' */
  real_T Divide;                       /* '<S6>/Divide' */
  boolean_T Equal;                     /* '<S6>/Equal' */
  boolean_T Equal_f;                   /* '<S9>/Equal' */
  boolean_T Equal1;                    /* '<S9>/Equal1' */
  boolean_T LowerRelop1;               /* '<S13>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S13>/UpperRelop' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Key_signal_process_T {
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

struct MdlrefDW_Key_signal_process_T {
  B_Key_signal_process_c_T rtb;
  RT_MODEL_Key_signal_process_T rtm;
};

/* Model reference registration function */
extern void Key_signal_process_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Key_signal_process_T *const Key_signal_process_M,
  B_Key_signal_process_c_T *localB);
extern void Key_signal_process(const real_T *rtu_original_signal_input_value,
  const Validation *rtu_original_signal_input_value_lock, const real_T
  *rtu_original_signal_original_value_current, const real_T
  rtu_original_signal_original_value_queue[10], const real_T
  *rtu_original_signal_refitted_value_current, const real_T
  rtu_original_signal_refitted_value_queue[10], const Validation
  *rtu_original_signal_processed_value_lock, const real_T
  *rtu_original_signal_processed_value_current, const real_T
  *rtu_original_signal_unit_converter_factor, const SignalProcessingMode
  *rtu_original_signal_processing_mode, const real_T
  *rtu_original_signal_increment_limit, const real_T
  *rtu_original_signal_value_offset, const Validation
  *rtu_original_signal_absolute_amplitude_limit_mode, const real_T
  *rtu_original_signal_max_value, const real_T *rtu_original_signal_min_value,
  const real_T *rtu_original_signal_jump_abnormal_tolerance, const uint32_T
  *rtu_original_signal_recovery_check_times, const Validation
  *rtu_original_signal_jump_abnormal_fault, real_T
  *rty_processed_signal_input_value, Validation
  *rty_processed_signal_input_value_lock, real_T
  *rty_processed_signal_original_value_current, real_T
  *rty_processed_signal_original_value_previous, real_T
  rty_processed_signal_original_value_queue[10], real_T
  *rty_processed_signal_refitted_value_current, real_T
  *rty_processed_signal_refitted_value_previous, real_T
  rty_processed_signal_refitted_value_queue[10], Validation
  *rty_processed_signal_processed_value_lock, real_T
  *rty_processed_signal_processed_value_current, real_T
  *rty_processed_signal_processed_value_previous, real_T
  rty_processed_signal_processed_value_queue[10], real_T
  *rty_processed_signal_unit_converter_factor, SignalProcessingMode
  *rty_processed_signal_processing_mode, real_T
  *rty_processed_signal_increment_limit, real_T
  *rty_processed_signal_value_offset, Validation
  *rty_processed_signal_absolute_amplitude_limit_mode, real_T
  *rty_processed_signal_max_value, real_T *rty_processed_signal_min_value,
  real_T *rty_processed_signal_jump_abnormal_tolerance, uint32_T
  *rty_processed_signal_recovery_check_times, Validation
  *rty_processed_signal_jump_abnormal_fault, B_Key_signal_process_c_T *localB);

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
 * '<Root>' : 'Key_signal_process'
 * '<S1>'   : 'Key_signal_process/Cycle_Update'
 * '<S2>'   : 'Key_signal_process/DocBlock'
 * '<S3>'   : 'Key_signal_process/Original_Value_Update'
 * '<S4>'   : 'Key_signal_process/Processed_Value_Update'
 * '<S5>'   : 'Key_signal_process/Refitted_Value_Update'
 * '<S6>'   : 'Key_signal_process/Original_Value_Update/ValueUpdate'
 * '<S7>'   : 'Key_signal_process/Original_Value_Update/ValueUpdate/Enumerated Constant'
 * '<S8>'   : 'Key_signal_process/Original_Value_Update/ValueUpdate/Queue_Update'
 * '<S9>'   : 'Key_signal_process/Processed_Value_Update/ValueUpdate'
 * '<S10>'  : 'Key_signal_process/Processed_Value_Update/ValueUpdate/Enumerated Constant'
 * '<S11>'  : 'Key_signal_process/Processed_Value_Update/ValueUpdate/Enumerated Constant1'
 * '<S12>'  : 'Key_signal_process/Processed_Value_Update/ValueUpdate/Queue_Update'
 * '<S13>'  : 'Key_signal_process/Processed_Value_Update/ValueUpdate/Saturation Dynamic'
 * '<S14>'  : 'Key_signal_process/Refitted_Value_Update/ValueUpdate'
 * '<S15>'  : 'Key_signal_process/Refitted_Value_Update/ValueUpdate/Increment_Limit_Filter'
 * '<S16>'  : 'Key_signal_process/Refitted_Value_Update/ValueUpdate/Queue_Update'
 * '<S17>'  : 'Key_signal_process/Refitted_Value_Update/ValueUpdate/Switch Case Action Subsystem'
 */
#endif                                 /* RTW_HEADER_Key_signal_process_h_ */
