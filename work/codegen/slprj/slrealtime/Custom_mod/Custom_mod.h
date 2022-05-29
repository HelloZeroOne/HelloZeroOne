/*
 * Code generation for system model 'Custom_mod'
 * For more details, see corresponding source file Custom_mod.c
 *
 */

#ifndef RTW_HEADER_Custom_mod_h_
#define RTW_HEADER_Custom_mod_h_
#include <cmath>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "Custom_mod_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "Custom_mod_cal.h"

/* Block signals for model 'Custom_mod' */
struct B_Custom_mod_c_T {
  real_T Plus1;                        /* '<S1>/Plus1' */
  real_T Plus1_i;                      /* '<S2>/Plus1' */
  real_T Divide;                       /* '<S2>/Divide' */
  real_T RoundingFunction;             /* '<S2>/Rounding Function' */
  real_T Product;                      /* '<S2>/Product' */
  real_T Subtract;                     /* '<S2>/Subtract' */
  real_T Abs;                          /* '<S2>/Abs' */
  real_T temp_value;                   /* '<S2>/Switch' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Custom_mod_T {
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

struct MdlrefDW_Custom_mod_T {
  B_Custom_mod_c_T rtb;
  RT_MODEL_Custom_mod_T rtm;
};

/* Model block global parameters (default storage) */
extern real_T rtP_EPSILON;             /* Variable: EPSILON
                                        * Referenced by: '<S2>/Switch'
                                        */

/* Model reference registration function */
extern void Custom_mod_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Custom_mod_T *const Custom_mod_M, B_Custom_mod_c_T *localB);
extern void Custom_mod(const real_T *rtu_dividend, const real_T
  *rtu_compensation1, const real_T *rtu_divisor, const real_T *rtu_compensation2,
  real_T *rty_remainder, B_Custom_mod_c_T *localB);

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
 * '<Root>' : 'Custom_mod'
 * '<S1>'   : 'Custom_mod/Divisor_Equal_To_Zero'
 * '<S2>'   : 'Custom_mod/Divisor_Not_Equal_To_Zero'
 * '<S3>'   : 'Custom_mod/DocBlock'
 */
#endif                                 /* RTW_HEADER_Custom_mod_h_ */
