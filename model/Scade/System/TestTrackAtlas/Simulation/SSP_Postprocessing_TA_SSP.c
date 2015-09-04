/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Postprocessing_TA_SSP.h"

void SSP_Postprocessing_reset_TA_SSP(outC_SSP_Postprocessing_TA_SSP *outC)
{
  outC->init = kcg_true;
  /* 1 */ SSP_Position_SSP_with_BGs_reset_TA_SSP(&outC->Context_1);
}

/* TA_SSP::SSP_Postprocessing */
void SSP_Postprocessing_TA_SSP(
  /* TA_SSP::SSP_Postprocessing::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_SSP::SSP_Postprocessing::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_SSP::SSP_Postprocessing::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_SSP::SSP_Postprocessing::there_is_prvLRBG */kcg_bool there_is_prvLRBG,
  outC_SSP_Postprocessing_TA_SSP *outC)
{
  outC->_L9 = there_is_prvLRBG;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L8, Profile_in);
  if (outC->init) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &outC->_L1,
      (StaticSpeedProfile_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  }
  else {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L1, &outC->_L4);
  }
  outC->_L7 = pos_LRBG;
  outC->_L6 = pos_prvLRBG;
  /* 1 */
  SSP_Position_SSP_with_BGs_TA_SSP(
    &outC->_L8,
    outC->_L7,
    outC->_L6,
    outC->_L9,
    &outC->_L1,
    &outC->Context_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L2,
    &outC->Context_1.ProfileOut);
  outC->_L3 = outC->Context_1.available;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L4,
    &outC->Context_1.ProfileLoopOut);
  outC->available = outC->_L3;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SSP, &outC->_L2);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Postprocessing_TA_SSP.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

