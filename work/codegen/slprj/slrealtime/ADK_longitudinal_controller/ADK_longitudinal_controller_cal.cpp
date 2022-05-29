#include "ADK_longitudinal_controller.h"

/* Storage class 'PageSwitching' */
ADK_longitudinal_controller_cal_type ADK_longitudinal_controller_cal_impl = {
  /* Mask Parameter: DiscretePIDController_D
   * Referenced by: '<S31>/Derivative Gain'
   */
  3.065,

  /* Mask Parameter: DiscretePIDController_DifferentiatorICPrevScaledInput
   * Referenced by: '<S32>/UD'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_I
   * Referenced by: '<S36>/Integral Gain'
   */
  0.3,

  /* Mask Parameter: DiscretePIDController_InitialConditionForIntegrator
   * Referenced by: '<S39>/Integrator'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_P
   * Referenced by: '<S44>/Proportional Gain'
   */
  20.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S39>/Integrator'
   */
  0.05,

  /* Computed Parameter: Tsamp_WtEt
   * Referenced by: '<S34>/Tsamp'
   */
  20.0,

  /* Expression: -10
   * Referenced by: '<Root>/Dead Zone'
   */
  -10.0,

  /* Expression: 1
   * Referenced by: '<Root>/Dead Zone'
   */
  1.0,

  /* Expression: -10/1.5
   * Referenced by: '<Root>/Gain11'
   */
  -6.666666666666667,

  /* Expression: 100
   * Referenced by: '<Root>/Limiter_brake'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<Root>/Limiter_brake'
   */
  0.0,

  /* Expression: 100
   * Referenced by: '<Root>/Limiter_throttle'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<Root>/Limiter_throttle'
   */
  0.0,

  /* Mask Parameter: EnumeratedConstant_Value
   * Referenced by: '<S3>/Constant'
   */
  D,

  /* Mask Parameter: EnumeratedConstant1_Value
   * Referenced by: '<S4>/Constant'
   */
  Autopilot
};

ADK_longitudinal_controller_cal_type *ADK_longitudinal_controller_cal =
  &ADK_longitudinal_controller_cal_impl;
