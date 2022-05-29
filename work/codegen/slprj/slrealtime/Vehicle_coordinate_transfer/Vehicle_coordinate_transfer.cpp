/*
 * Code generation for system model 'Vehicle_coordinate_transfer'
 *
 * Model                      : Vehicle_coordinate_transfer
 * Model version              : 4.45
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:47:40 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "Vehicle_coordinate_transfer.h"
#include "Vehicle_coordinate_transfer_private.h"

/* Output and update for referenced model: 'Vehicle_coordinate_transfer' */
void Vehicle_coordinate_transfer(const real_T *rtu_earth_x0, const real_T
  *rtu_earth_y0, const real_T *rtu_earth_x1, const real_T *rtu_earth_y1, const
  real_T *rtu_earth_yaw_angle, real_T *rty_vehicle_x1, real_T *rty_vehicle_y1,
  B_Vehicle_coordinate_transfer_c_T *localB)
{
  /* Trigonometry: '<Root>/Cos' */
  localB->cos_theta = std::cos(*rtu_earth_yaw_angle);

  /* Sum: '<Root>/Minus2' */
  localB->delta_y_P0Pe = *rtu_earth_y1 - *rtu_earth_y0;

  /* Product: '<Root>/Product2' */
  localB->Product2 = localB->delta_y_P0Pe * localB->cos_theta;

  /* Sum: '<Root>/Minus1' */
  localB->delta_x_P0Pe = *rtu_earth_x1 - *rtu_earth_x0;

  /* Trigonometry: '<Root>/Sin' */
  localB->sin_theta = std::sin(*rtu_earth_yaw_angle);

  /* Product: '<Root>/Product3' */
  localB->Product3 = localB->delta_x_P0Pe * localB->sin_theta;

  /* Sum: '<Root>/Minus' */
  *rty_vehicle_y1 = localB->Product2 - localB->Product3;

  /* Product: '<Root>/Product' */
  localB->Product = localB->delta_y_P0Pe * localB->sin_theta;

  /* Product: '<Root>/Product1' */
  localB->Product1 = localB->delta_x_P0Pe * localB->cos_theta;

  /* Sum: '<Root>/Plus' */
  *rty_vehicle_x1 = localB->Product + localB->Product1;
}

/* Model initialize function */
void Vehicle_coordinate_transfer_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Vehicle_coordinate_transfer_T *const Vehicle_coordinate_transfer_M,
  B_Vehicle_coordinate_transfer_c_T *localB)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(Vehicle_coordinate_transfer_M, rt_errorStatus);

  /* block I/O */
  {
    localB->cos_theta = 0.0;
    localB->delta_y_P0Pe = 0.0;
    localB->Product2 = 0.0;
    localB->delta_x_P0Pe = 0.0;
    localB->sin_theta = 0.0;
    localB->Product3 = 0.0;
    localB->Product = 0.0;
    localB->Product1 = 0.0;
  }
}
