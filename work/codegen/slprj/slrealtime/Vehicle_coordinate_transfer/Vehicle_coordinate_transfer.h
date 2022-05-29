/*
 * Code generation for system model 'Vehicle_coordinate_transfer'
 * For more details, see corresponding source file Vehicle_coordinate_transfer.c
 *
 */

#ifndef RTW_HEADER_Vehicle_coordinate_transfer_h_
#define RTW_HEADER_Vehicle_coordinate_transfer_h_
#include <cmath>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "Vehicle_coordinate_transfer_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Block signals for model 'Vehicle_coordinate_transfer' */
struct B_Vehicle_coordinate_transfer_c_T {
  real_T cos_theta;                    /* '<Root>/Cos' */
  real_T delta_y_P0Pe;                 /* '<Root>/Minus2' */
  real_T Product2;                     /* '<Root>/Product2' */
  real_T delta_x_P0Pe;                 /* '<Root>/Minus1' */
  real_T sin_theta;                    /* '<Root>/Sin' */
  real_T Product3;                     /* '<Root>/Product3' */
  real_T Product;                      /* '<Root>/Product' */
  real_T Product1;                     /* '<Root>/Product1' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Vehicle_coordinate_transfer_T {
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

struct MdlrefDW_Vehicle_coordinate_transfer_T {
  B_Vehicle_coordinate_transfer_c_T rtb;
  RT_MODEL_Vehicle_coordinate_transfer_T rtm;
};

/* Model reference registration function */
extern void Vehicle_coordinate_transfer_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Vehicle_coordinate_transfer_T *const Vehicle_coordinate_transfer_M,
  B_Vehicle_coordinate_transfer_c_T *localB);
extern void Vehicle_coordinate_transfer(const real_T *rtu_earth_x0, const real_T
  *rtu_earth_y0, const real_T *rtu_earth_x1, const real_T *rtu_earth_y1, const
  real_T *rtu_earth_yaw_angle, real_T *rty_vehicle_x1, real_T *rty_vehicle_y1,
  B_Vehicle_coordinate_transfer_c_T *localB);

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
 * '<Root>' : 'Vehicle_coordinate_transfer'
 * '<S1>'   : 'Vehicle_coordinate_transfer/DocBlock'
 */
#endif                           /* RTW_HEADER_Vehicle_coordinate_transfer_h_ */
