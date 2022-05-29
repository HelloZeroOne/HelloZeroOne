#ifndef RTW_HEADER_Key_signal_process_cal_h_
#define RTW_HEADER_Key_signal_process_cal_h_
#include "rtwtypes.h"
#include "Key_signal_process_types.h"

/* Storage class 'PageSwitching', for model 'Key_signal_process' */
struct Key_signal_process_cal_type {
  Validation EnumeratedConstant_Value;
                                     /* Mask Parameter: EnumeratedConstant_Value
                                      * Referenced by: '<S7>/Constant'
                                      */
  Validation EnumeratedConstant_Value_b;
                                   /* Mask Parameter: EnumeratedConstant_Value_b
                                    * Referenced by: '<S10>/Constant'
                                    */
  Validation EnumeratedConstant1_Value;
                                    /* Mask Parameter: EnumeratedConstant1_Value
                                     * Referenced by: '<S11>/Constant'
                                     */
};

/* Storage class 'PageSwitching' */
extern Key_signal_process_cal_type Key_signal_process_cal_impl;
extern Key_signal_process_cal_type *Key_signal_process_cal;

#endif                                /* RTW_HEADER_Key_signal_process_cal_h_ */
