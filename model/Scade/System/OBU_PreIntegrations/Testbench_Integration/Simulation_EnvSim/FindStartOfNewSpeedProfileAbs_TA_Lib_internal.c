/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewSpeedProfileAbs_TA_Lib_internal.h"

/* TA_Lib_internal::FindStartOfNewSpeedProfileAbs */
kcg_int FindStartOfNewSpeedProfileAbs_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::New_Profile */StaticSpeedProfile_t_TrackAtlasTypes *New_Profile)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::relevant_section */
  static kcg_int relevant_section;
  
  relevant_section = 0;
  for (i = 0; i < 50; i++) {
    tmp1 = relevant_section;
    /* 1 */
    FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal(
      i,
      tmp1,
      (*New_Profile)[0].d_static_abs,
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
** FindStartOfNewSpeedProfileAbs_TA_Lib_internal.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

