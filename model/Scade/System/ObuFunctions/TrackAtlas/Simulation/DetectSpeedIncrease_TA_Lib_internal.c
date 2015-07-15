/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-12T18:20:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetectSpeedIncrease_TA_Lib_internal.h"

void DetectSpeedIncrease_reset_TA_Lib_internal(
  outC_DetectSpeedIncrease_TA_Lib_internal *outC)
{
}

/* TA_Lib_internal::DetectSpeedIncrease */
void DetectSpeedIncrease_TA_Lib_internal(
  /* TA_Lib_internal::DetectSpeedIncrease::v_static_section1 */V_internal_Type_Obu_BasicTypes_Pkg v_static_section1,
  /* TA_Lib_internal::DetectSpeedIncrease::SectionIn */P027V1_OBU_sectionlist_enum_T_TM_baseline2 *SectionIn,
  /* TA_Lib_internal::DetectSpeedIncrease::i */kcg_int i,
  outC_DetectSpeedIncrease_TA_Lib_internal *outC)
{
  outC->_L5 = i;
  outC->_L10 = 0;
  outC->_L12 = outC->_L5 == outC->_L10;
  outC->_L9 = v_static_section1;
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(&outC->_L16, SectionIn);
  outC->_L14 = i;
  outC->_L8 = 1;
  outC->_L7 = outC->_L14 - outC->_L8;
  if ((0 <= outC->_L7) & (outC->_L7 < 33)) {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &outC->_L2,
      &outC->_L16[outC->_L7]);
  }
  else {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &outC->_L2,
      (P027V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P027V1_section_enum_TM_baseline2);
  }
  outC->_L3 = outC->_L2.v_static;
  if (outC->_L12) {
    outC->_L6 = outC->_L9;
  }
  else {
    outC->_L6 = outC->_L3;
  }
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(&outC->_L15, SectionIn);
  outC->_L13 = i;
  if ((0 <= outC->_L13) & (outC->_L13 < 33)) {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &outC->_L1,
      &outC->_L15[outC->_L13]);
  }
  else {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &outC->_L1,
      (P027V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P027V1_section_enum_TM_baseline2);
  }
  outC->_L11 = outC->_L1.v_static;
  outC->_L4 = outC->_L6 < outC->_L11;
  outC->q_speed_increase = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DetectSpeedIncrease_TA_Lib_internal.c
** Generation date: 2015-07-12T18:20:55
*************************************************************$ */

