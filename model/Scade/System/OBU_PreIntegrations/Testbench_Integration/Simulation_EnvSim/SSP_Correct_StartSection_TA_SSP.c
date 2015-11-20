/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Correct_StartSection_TA_SSP.h"

/* TA_SSP::SSP_Correct_StartSection */
void SSP_Correct_StartSection_TA_SSP(
  /* TA_SSP::SSP_Correct_StartSection::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_SSP::SSP_Correct_StartSection::Profile_out */StaticSpeedProfile_t_TrackAtlasTypes *Profile_out)
{
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(Profile_out, Profile_in);
  kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
    &(*Profile_out)[0],
    &(*Profile_in)[0]);
  (*Profile_out)[0].d_static_LRBG = 0;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Correct_StartSection_TA_SSP.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

