/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewSpeedProfile_TA_Lib_internal.h"

/* TA_Lib_internal::FindStartOfNewSpeedProfile */
kcg_int FindStartOfNewSpeedProfile_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewSpeedProfile::Profile_in */SSP_cat_t_TA_MRSP *Profile_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfile::New_Profile */SSP_cat_t_TA_MRSP *New_Profile)
{
  kcg_int tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* TA_Lib_internal::FindStartOfNewSpeedProfile::relevant_section */ kcg_int relevant_section;
  
  relevant_section = 0;
  for (i = 0; i < 33; i++) {
    tmp1 = relevant_section;
    /* 1 */
    FindStartOfNewSpeedProfile_LOOP_TA_Lib_internal(
      i,
      tmp1,
      (*New_Profile)[0].target,
      Profile_in,
      &tmp,
      &relevant_section);
    if (!tmp) {
      break;
    }
  }
  return relevant_section;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindStartOfNewSpeedProfile_TA_Lib_internal.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

