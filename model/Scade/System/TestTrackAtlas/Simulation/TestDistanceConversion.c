/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestDistanceConversion.h"

void TestDistanceConversion_reset(outC_TestDistanceConversion *outC)
{
  /* 1 */ _1_Convert_P21_to_DistancePr_reset_TA_Gradient(&outC->_1_Context_1);
  /* 1 */ TestP021_reset_Internal_Tests(&outC->Context_1);
}

/* TestDistanceConversion */
void TestDistanceConversion(outC_TestDistanceConversion *outC)
{
  /* 1 */ TestP021_Internal_Tests(&outC->Context_1);
  kcg_copy_P021_OBU_T_TM(&outC->_L1, &outC->Context_1.PacketOut);
  /* 1 */
  _1_Convert_P21_to_DistancePr_TA_Gradient(&outC->_L1, &outC->_1_Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L2,
    &outC->_1_Context_1.GradientProfile);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->GradientProfile,
    &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestDistanceConversion.c
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */

