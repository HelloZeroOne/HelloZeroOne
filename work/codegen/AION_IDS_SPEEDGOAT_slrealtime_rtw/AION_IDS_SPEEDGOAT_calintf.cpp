#include "AION_IDS_SPEEDGOAT_calintf.h"
#include "AION_IDS_SPEEDGOAT.h"
#include "AION_IDS_SPEEDGOAT_cal.h"

extern AION_IDS_SPEEDGOAT_cal_type AION_IDS_SPEEDGOAT_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&AION_IDS_SPEEDGOAT_cal_impl, (void**)&AION_IDS_SPEEDGOAT_cal,
      sizeof(AION_IDS_SPEEDGOAT_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
