/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Postprocessing_TA_SSP.h"

void SSP_Postprocessing_reset_TA_SSP(outC_SSP_Postprocessing_TA_SSP *outC)
{
  outC->init = kcg_true;
}

/* TA_SSP::SSP_Postprocessing */
void SSP_Postprocessing_TA_SSP(
  /* TA_SSP::SSP_Postprocessing::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_SSP::SSP_Postprocessing::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_SSP::SSP_Postprocessing::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_SSP::SSP_Postprocessing::there_is_prvLRBG */kcg_bool there_is_prvLRBG,
  /* TA_SSP::SSP_Postprocessing::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_SSP_Postprocessing_TA_SSP *outC)
{
  static StaticSpeedProfile_t_TrackAtlasTypes tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &tmp,
      (StaticSpeedProfile_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  }
  else {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&tmp, &outC->rem__L4);
  }
  /* 1 */
  SSP_Position_SSP_with_BGs_TA_SSP(
    Profile_in,
    pos_LRBG,
    pos_prvLRBG,
    there_is_prvLRBG,
    train_length,
    &tmp,
    &outC->SSP,
    &outC->available,
    &outC->rem__L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Postprocessing_TA_SSP.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

