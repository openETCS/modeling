/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP.h"

/* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop */
void SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP(
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::i */kcg_int i,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::SP */StaticSpeedProfile_t_TrackAtlasTypes *SP,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::First_Section_To_Replace */kcg_int First_Section_To_Replace,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::new_SP_received */StaticSpeedProfile_t_TrackAtlasTypes *new_SP_received,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::SSP */StaticSpeedProfile_t_TrackAtlasTypes *SSP)
{
  static StaticSpeedSection_t_TrackAtlasTypes tmp;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(SSP, SP);
  if ((0 <= i) & (i < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&tmp, &(*new_SP_received)[i]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &tmp,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  if ((0 <= i + First_Section_To_Replace) & (i + First_Section_To_Replace <
      50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &(*SSP)[i + First_Section_To_Replace],
      &tmp);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

