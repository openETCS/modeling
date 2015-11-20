/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Merge_New_P27V1_to_Profile_TA_SSP.h"

/* TA_SSP::SSP_Merge_New_P27V1_to_Profile */
void SSP_Merge_New_P27V1_to_Profile_TA_SSP(
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::new_GP */StaticSpeedProfile_t_TrackAtlasTypes *new_GP,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::Last_SpeedProfile_in */StaticSpeedProfile_t_TrackAtlasTypes *Last_SpeedProfile_in,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::SpeedProfile_out */StaticSpeedProfile_t_TrackAtlasTypes *SpeedProfile_out)
{
  static StaticSpeedProfile_t_TrackAtlasTypes tmp;
  static kcg_int i;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::_L1 */
  static kcg_int _L1;
  
  if ((*Last_SpeedProfile_in)[0].valid) {
    _L1 = /* 1 */
      FindStartOfNewSpeedProfileAbs_TA_Lib_internal(
        Last_SpeedProfile_in,
        new_GP);
  }
  else {
    _L1 = 0;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    SpeedProfile_out,
    Last_SpeedProfile_in);
  for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&tmp, SpeedProfile_out);
    /* 1 */
    SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP(
      i,
      &tmp,
      _L1,
      new_GP,
      SpeedProfile_out);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Merge_New_P27V1_to_Profile_TA_SSP.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

