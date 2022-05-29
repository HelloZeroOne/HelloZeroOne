#ifndef RTW_HEADER_ADK_longitudinal_controller_cal_h_
#define RTW_HEADER_ADK_longitudinal_controller_cal_h_
#include "rtwtypes.h"
#include "ADK_longitudinal_controller_types.h"

/* Storage class 'PageSwitching', for model 'ADK_longitudinal_controller' */
struct ADK_longitudinal_controller_cal_type {
  real_T DiscretePIDController_D;     /* Mask Parameter: DiscretePIDController_D
                                       * Referenced by: '<S31>/Derivative Gain'
                                       */
  real_T DiscretePIDController_DifferentiatorICPrevScaledInput;
        /* Mask Parameter: DiscretePIDController_DifferentiatorICPrevScaledInput
         * Referenced by: '<S32>/UD'
         */
  real_T DiscretePIDController_I;     /* Mask Parameter: DiscretePIDController_I
                                       * Referenced by: '<S36>/Integral Gain'
                                       */
  real_T DiscretePIDController_InitialConditionForIntegrator;
          /* Mask Parameter: DiscretePIDController_InitialConditionForIntegrator
           * Referenced by: '<S39>/Integrator'
           */
  real_T DiscretePIDController_P;     /* Mask Parameter: DiscretePIDController_P
                                       * Referenced by: '<S44>/Proportional Gain'
                                       */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S39>/Integrator'
                                        */
  real_T Tsamp_WtEt;                   /* Computed Parameter: Tsamp_WtEt
                                        * Referenced by: '<S34>/Tsamp'
                                        */
  real_T DeadZone_Start;               /* Expression: -10
                                        * Referenced by: '<Root>/Dead Zone'
                                        */
  real_T DeadZone_End;                 /* Expression: 1
                                        * Referenced by: '<Root>/Dead Zone'
                                        */
  real_T Gain11_Gain;                  /* Expression: -10/1.5
                                        * Referenced by: '<Root>/Gain11'
                                        */
  real_T Limiter_brake_UpperSat;       /* Expression: 100
                                        * Referenced by: '<Root>/Limiter_brake'
                                        */
  real_T Limiter_brake_LowerSat;       /* Expression: 0
                                        * Referenced by: '<Root>/Limiter_brake'
                                        */
  real_T Limiter_throttle_UpperSat;    /* Expression: 100
                                        * Referenced by: '<Root>/Limiter_throttle'
                                        */
  real_T Limiter_throttle_LowerSat;    /* Expression: 0
                                        * Referenced by: '<Root>/Limiter_throttle'
                                        */
  Gear EnumeratedConstant_Value;     /* Mask Parameter: EnumeratedConstant_Value
                                      * Referenced by: '<S3>/Constant'
                                      */
  DrivingMode EnumeratedConstant1_Value;
                                    /* Mask Parameter: EnumeratedConstant1_Value
                                     * Referenced by: '<S4>/Constant'
                                     */
};

/* Storage class 'PageSwitching' */
extern ADK_longitudinal_controller_cal_type ADK_longitudinal_controller_cal_impl;
extern ADK_longitudinal_controller_cal_type *ADK_longitudinal_controller_cal;

#endif                       /* RTW_HEADER_ADK_longitudinal_controller_cal_h_ */
