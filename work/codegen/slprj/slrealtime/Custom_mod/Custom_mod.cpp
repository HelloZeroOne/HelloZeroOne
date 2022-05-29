/*
 * Code generation for system model 'Custom_mod'
 *
 * Model                      : Custom_mod
 * Model version              : 4.69
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:47:12 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "Custom_mod.h"
#include "Custom_mod_private.h"

/* Output and update for referenced model: 'Custom_mod' */
void Custom_mod(const real_T *rtu_dividend, const real_T *rtu_compensation1,
                const real_T *rtu_divisor, const real_T *rtu_compensation2,
                real_T *rty_remainder, B_Custom_mod_c_T *localB)
{
  /* If: '<Root>/If' */
  if (*rtu_divisor != 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/Divisor_Not_Equal_To_Zero' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Sum: '<S2>/Plus1' */
    localB->Plus1_i = *rtu_dividend + *rtu_compensation1;

    /* Product: '<S2>/Divide' */
    localB->Divide = localB->Plus1_i / *rtu_divisor;

    /* Rounding: '<S2>/Rounding Function' */
    localB->RoundingFunction = std::floor(localB->Divide);

    /* Product: '<S2>/Product' */
    localB->Product = localB->RoundingFunction * *rtu_divisor;

    /* Sum: '<S2>/Subtract' */
    localB->Subtract = localB->Plus1_i - localB->Product;

    /* Abs: '<S2>/Abs' */
    localB->Abs = std::abs(localB->Subtract);

    /* Switch: '<S2>/Switch' */
    if (localB->Abs >= rtP_EPSILON) {
      /* Switch: '<S2>/Switch' */
      localB->temp_value = localB->Subtract;
    } else {
      /* Switch: '<S2>/Switch' incorporates:
       *  Constant: '<S2>/Constant'
       */
      localB->temp_value = Custom_mod_cal->Constant_Value;
    }

    /* End of Switch: '<S2>/Switch' */

    /* Sum: '<S2>/Plus2' */
    *rty_remainder = localB->temp_value + *rtu_compensation2;

    /* End of Outputs for SubSystem: '<Root>/Divisor_Not_Equal_To_Zero' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/Divisor_Equal_To_Zero' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Sum: '<S1>/Plus1' */
    localB->Plus1 = *rtu_dividend + *rtu_compensation1;

    /* Sum: '<S1>/Plus2' */
    *rty_remainder = localB->Plus1 + *rtu_compensation2;

    /* End of Outputs for SubSystem: '<Root>/Divisor_Equal_To_Zero' */
  }

  /* End of If: '<Root>/If' */
}

/* Model initialize function */
void Custom_mod_initialize(const char_T **rt_errorStatus, RT_MODEL_Custom_mod_T *
  const Custom_mod_M, B_Custom_mod_c_T *localB)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(Custom_mod_M, rt_errorStatus);

  /* block I/O */
  {
    localB->Plus1 = 0.0;
    localB->Plus1_i = 0.0;
    localB->Divide = 0.0;
    localB->RoundingFunction = 0.0;
    localB->Product = 0.0;
    localB->Subtract = 0.0;
    localB->Abs = 0.0;
    localB->temp_value = 0.0;
  }
}
