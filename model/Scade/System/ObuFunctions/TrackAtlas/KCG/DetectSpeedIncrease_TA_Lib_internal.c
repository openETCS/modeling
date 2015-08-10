/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetectSpeedIncrease_TA_Lib_internal.h"

/* TA_Lib_internal::DetectSpeedIncrease */
kcg_bool DetectSpeedIncrease_TA_Lib_internal(
  /* TA_Lib_internal::DetectSpeedIncrease::v_static_section1 */V_internal_Type_Obu_BasicTypes_Pkg v_static_section1,
  /* TA_Lib_internal::DetectSpeedIncrease::SectionIn */P027V1_OBU_sectionlist_enum_T_TM_baseline2 *SectionIn,
  /* TA_Lib_internal::DetectSpeedIncrease::i */kcg_int i)
{
  V_internal_Type_Obu_BasicTypes_Pkg tmp1;
  P027V1_section_enum_T_TM_baseline2 tmp;
  /* TA_Lib_internal::DetectSpeedIncrease::q_speed_increase */ kcg_bool q_speed_increase;
  
  if (i == 0) {
    tmp1 = v_static_section1;
  }
  else {
    if ((0 <= i - 1) & (i - 1 < 33)) {
      kcg_copy_P027V1_section_enum_T_TM_baseline2(&tmp, &(*SectionIn)[i - 1]);
    }
    else {
      kcg_copy_P027V1_section_enum_T_TM_baseline2(
        &tmp,
        (P027V1_section_enum_T_TM_baseline2 *)
          &DEFAULT_P027V1_section_enum_TM_baseline2);
    }
    tmp1 = tmp.v_static;
  }
  if ((0 <= i) & (i < 33)) {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(&tmp, &(*SectionIn)[i]);
  }
  else {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &tmp,
      (P027V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P027V1_section_enum_TM_baseline2);
  }
  q_speed_increase = tmp1 < tmp.v_static;
  return q_speed_increase;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DetectSpeedIncrease_TA_Lib_internal.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

