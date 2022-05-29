#include "AION_auto_unexpected_quit_analysis_calintf.h"
#include "AION_auto_unexpected_quit_analysis.h"
#include "AION_auto_unexpected_quit_analysis_cal.h"

extern AION_auto_unexpected_quit_analysis_cal_type
  AION_auto_unexpected_quit_analysis_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&AION_auto_unexpected_quit_analysis_cal_impl, (void**)
      &AION_auto_unexpected_quit_analysis_cal, sizeof
      (AION_auto_unexpected_quit_analysis_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
