/*
 * Code generation for system model 'Key_signal_process'
 *
 * Model                      : Key_signal_process
 * Model version              : 4.12
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:48:15 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "Key_signal_process.h"
#include "Key_signal_process_private.h"

/* Output and update for referenced model: 'Key_signal_process' */
void Key_signal_process(const real_T *rtu_original_signal_input_value, const
  Validation *rtu_original_signal_input_value_lock, const real_T
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
  *rty_processed_signal_jump_abnormal_fault, B_Key_signal_process_c_T *localB)
{
  real_T u0;
  real_T u1;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  *rty_processed_signal_input_value = *rtu_original_signal_input_value;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  *rty_processed_signal_processed_value_previous =
    *rtu_original_signal_processed_value_current;

  /* RelationalOperator: '<S6>/Equal' incorporates:
   *  Constant: '<S7>/Constant'
   */
  localB->Equal = (*rtu_original_signal_input_value_lock ==
                   Key_signal_process_cal->EnumeratedConstant_Value);

  /* Switch: '<S6>/Switch' */
  if (localB->Equal) {
    /* Product: '<S6>/Divide' */
    localB->Divide = *rtu_original_signal_input_value *
      *rtu_original_signal_unit_converter_factor;
    *rty_processed_signal_original_value_current = localB->Divide;
  } else {
    *rty_processed_signal_original_value_current =
      *rtu_original_signal_original_value_current;
  }

  /* End of Switch: '<S6>/Switch' */

  /* SwitchCase: '<S14>/Switch Case' */
  if (*rtu_original_signal_processing_mode == IncrementLimitFilter) {
    /* Outputs for IfAction SubSystem: '<S14>/Increment_Limit_Filter' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    /* Sum: '<S15>/Add1' */
    localB->Add1 = *rtu_original_signal_refitted_value_current +
      *rtu_original_signal_increment_limit;

    /* Sum: '<S15>/Add3' */
    localB->Add3 = *rtu_original_signal_refitted_value_current -
      *rtu_original_signal_increment_limit;

    /* MinMax: '<S15>/Min' */
    u0 = *rty_processed_signal_original_value_current;
    u1 = localB->Add1;
    if ((u0 < u1) || rtIsNaN(u1)) {
      u1 = u0;
    }

    /* MinMax: '<S15>/Min' */
    localB->Min = u1;

    /* MinMax: '<S15>/Min1' */
    u0 = localB->Min;
    u1 = localB->Add3;
    if ((u0 > u1) || rtIsNaN(u1)) {
      u1 = u0;
    }

    *rty_processed_signal_refitted_value_current = u1;

    /* End of MinMax: '<S15>/Min1' */
    /* End of Outputs for SubSystem: '<S14>/Increment_Limit_Filter' */
  } else {
    /* Outputs for IfAction SubSystem: '<S14>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S17>/Action Port'
     */
    /* SignalConversion: '<S17>/Signal Copy' */
    *rty_processed_signal_refitted_value_current =
      *rty_processed_signal_original_value_current;

    /* End of Outputs for SubSystem: '<S14>/Switch Case Action Subsystem' */
  }

  /* End of SwitchCase: '<S14>/Switch Case' */

  /* RelationalOperator: '<S9>/Equal' incorporates:
   *  Constant: '<S10>/Constant'
   */
  localB->Equal_f = (*rtu_original_signal_processed_value_lock ==
                     Key_signal_process_cal->EnumeratedConstant_Value_b);

  /* Switch: '<S9>/Switch' */
  if (localB->Equal_f) {
    /* Sum: '<S9>/Plus' */
    localB->Plus = *rty_processed_signal_refitted_value_current -
      *rtu_original_signal_value_offset;

    /* Switch: '<S9>/Switch' */
    localB->Switch = localB->Plus;
  } else {
    /* Switch: '<S9>/Switch' */
    localB->Switch = *rtu_original_signal_processed_value_current;
  }

  /* End of Switch: '<S9>/Switch' */

  /* RelationalOperator: '<S9>/Equal1' incorporates:
   *  Constant: '<S11>/Constant'
   */
  localB->Equal1 = (*rtu_original_signal_absolute_amplitude_limit_mode ==
                    Key_signal_process_cal->EnumeratedConstant1_Value);

  /* RelationalOperator: '<S13>/LowerRelop1' */
  localB->LowerRelop1 = (localB->Switch > *rtu_original_signal_max_value);

  /* RelationalOperator: '<S13>/UpperRelop' */
  localB->UpperRelop = (localB->Switch < *rtu_original_signal_min_value);

  /* Switch: '<S13>/Switch' */
  if (localB->UpperRelop) {
    /* Switch: '<S13>/Switch' */
    localB->Switch_f = *rtu_original_signal_min_value;
  } else {
    /* Switch: '<S13>/Switch' */
    localB->Switch_f = localB->Switch;
  }

  /* End of Switch: '<S13>/Switch' */

  /* Switch: '<S13>/Switch2' */
  if (localB->LowerRelop1) {
    /* Switch: '<S13>/Switch2' */
    localB->Switch2 = *rtu_original_signal_max_value;
  } else {
    /* Switch: '<S13>/Switch2' */
    localB->Switch2 = localB->Switch_f;
  }

  /* End of Switch: '<S13>/Switch2' */

  /* Switch: '<S9>/Switch1' */
  if (localB->Equal1) {
    *rty_processed_signal_processed_value_current = localB->Switch;
  } else {
    *rty_processed_signal_processed_value_current = localB->Switch2;
  }

  /* End of Switch: '<S9>/Switch1' */

  /* SignalConversion generated from: '<Root>/processed_signal' */
  std::memcpy(&rty_processed_signal_processed_value_queue[0],
              &rtu_original_signal_original_value_queue[2], sizeof(real_T) << 3U);
  rty_processed_signal_processed_value_queue[8] =
    *rty_processed_signal_original_value_current;
  rty_processed_signal_processed_value_queue[9] =
    *rty_processed_signal_processed_value_current;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  *rty_processed_signal_unit_converter_factor =
    *rtu_original_signal_unit_converter_factor;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  *rty_processed_signal_processing_mode = *rtu_original_signal_processing_mode;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  *rty_processed_signal_increment_limit = *rtu_original_signal_increment_limit;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  *rty_processed_signal_value_offset = *rtu_original_signal_value_offset;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  *rty_processed_signal_absolute_amplitude_limit_mode =
    *rtu_original_signal_absolute_amplitude_limit_mode;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  *rty_processed_signal_max_value = *rtu_original_signal_max_value;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  *rty_processed_signal_min_value = *rtu_original_signal_min_value;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  *rty_processed_signal_input_value_lock = *rtu_original_signal_input_value_lock;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  *rty_processed_signal_jump_abnormal_tolerance =
    *rtu_original_signal_jump_abnormal_tolerance;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  *rty_processed_signal_recovery_check_times =
    *rtu_original_signal_recovery_check_times;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  *rty_processed_signal_jump_abnormal_fault =
    *rtu_original_signal_jump_abnormal_fault;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  *rty_processed_signal_original_value_previous =
    *rtu_original_signal_original_value_current;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  rty_processed_signal_original_value_queue[9] =
    *rty_processed_signal_original_value_current;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  *rty_processed_signal_refitted_value_previous =
    *rtu_original_signal_refitted_value_current;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  std::memcpy(&rty_processed_signal_original_value_queue[0],
              &rtu_original_signal_original_value_queue[1], 9U * sizeof(real_T));

  /* SignalConversion generated from: '<Root>/processed_signal' */
  std::memcpy(&rty_processed_signal_refitted_value_queue[0],
              &rtu_original_signal_refitted_value_queue[1], 9U * sizeof(real_T));
  rty_processed_signal_refitted_value_queue[9] =
    *rty_processed_signal_refitted_value_current;

  /* SignalConversion generated from: '<Root>/processed_signal' */
  *rty_processed_signal_processed_value_lock =
    *rtu_original_signal_processed_value_lock;
}

/* Model initialize function */
void Key_signal_process_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Key_signal_process_T *const Key_signal_process_M,
  B_Key_signal_process_c_T *localB)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(Key_signal_process_M, rt_errorStatus);

  /* block I/O */
  (void) std::memset((static_cast<void *>(localB)), 0,
                     sizeof(B_Key_signal_process_c_T));

  {
    localB->Switch = 0.0;
    localB->Switch_f = 0.0;
    localB->Switch2 = 0.0;
    localB->Add1 = 0.0;
    localB->Add3 = 0.0;
    localB->Min = 0.0;
    localB->Plus = 0.0;
    localB->Divide = 0.0;
  }
}
