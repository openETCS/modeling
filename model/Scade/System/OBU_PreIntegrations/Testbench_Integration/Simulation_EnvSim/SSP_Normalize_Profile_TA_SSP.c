/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Normalize_Profile_TA_SSP.h"

/* TA_SSP::SSP_Normalize_Profile */
void SSP_Normalize_Profile_TA_SSP(
  /* TA_SSP::SSP_Normalize_Profile::ProfileIn */StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_SSP::SSP_Normalize_Profile::pos_BG */L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_SSP::SSP_Normalize_Profile::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_SSP::SSP_Normalize_Profile::ProfileNormalized_LRBG */StaticSpeedProfile_t_TrackAtlasTypes *ProfileNormalized_LRBG)
{
  static StaticSpeedProfile_t_TrackAtlasTypes tmp;
  static kcg_int i;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    ProfileNormalized_LRBG,
    ProfileIn);
  for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&tmp, ProfileNormalized_LRBG);
    /* 1 */
    SSP_Normalize_Profile_loop_TA_SSP(
      i,
      &tmp,
      pos_BG,
      train_length,
      ProfileNormalized_LRBG);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Normalize_Profile_TA_SSP.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

