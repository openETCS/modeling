/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T09:15:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestDistanceConversionSSP.h"

void TestDistanceConversionSSP_reset(outC_TestDistanceConversionSSP *outC)
{
  /* 1 */ _6_Convert_P27_to_DistancePr_reset_TA_SSP(&outC->_1_Context_1);
  /* 1 */ TestP027V1_reset_Internal_Tests(&outC->Context_1);
}

/* TestDistanceConversionSSP */
void TestDistanceConversionSSP(outC_TestDistanceConversionSSP *outC)
{
  V_internal_Type_Obu_BasicTypes_Pkg noname;
  SSP_section_t_TA_MRSP _1_noname;
  SSP_section_t_TA_MRSP _2_noname;
  
  outC->_L6 = 100 * 100;
  /* 1 */ TestP027V1_Internal_Tests(&outC->Context_1);
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L1, &outC->Context_1.PacketOut);
  /* 1 */
  _6_Convert_P27_to_DistancePr_TA_SSP(
    &outC->_L1,
    outC->_L6,
    &outC->_1_Context_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L2, &outC->_1_Context_1.SpeedProfile);
  outC->_L3 = outC->_1_Context_1.v_static_section1;
  kcg_copy_SSP_section_t_TA_MRSP(
    &outC->_L4,
    &outC->_1_Context_1.section1_delay);
  kcg_copy_SSP_section_t_TA_MRSP(&outC->_L5, &outC->_1_Context_1.section1);
  kcg_copy_SSP_section_t_TA_MRSP(&_2_noname, &outC->_L5);
  kcg_copy_SSP_section_t_TA_MRSP(&_1_noname, &outC->_L4);
  noname = outC->_L3;
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->SpeedProfile, &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestDistanceConversionSSP.c
** Generation date: 2015-08-30T09:15:47
*************************************************************$ */

