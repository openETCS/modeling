/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Truncate_at_BG_loop_TA_SSP.h"

/* TA_SSP::SSP_Truncate_at_BG_loop */
void SSP_Truncate_at_BG_loop_TA_SSP(
  /* TA_SSP::SSP_Truncate_at_BG_loop::i */kcg_int i,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Acc */StaticSpeedProfile_t_TrackAtlasTypes *Acc,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Pointer */kcg_int Pointer,
  /* TA_SSP::SSP_Truncate_at_BG_loop::cont */kcg_bool *cont,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Profile_out */StaticSpeedProfile_t_TrackAtlasTypes *Profile_out)
{
  /* TA_SSP::SSP_Truncate_at_BG_loop::_L8 */
  static StaticSpeedSection_t_TrackAtlasTypes _L8;
  
  if ((0 <= i + Pointer) & (i + Pointer < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L8,
      &(*Profile_in)[i + Pointer]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L8,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  *cont = _L8.valid;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(Profile_out, Acc);
  if ((0 <= i) & (i < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&(*Profile_out)[i], &_L8);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Truncate_at_BG_loop_TA_SSP.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

