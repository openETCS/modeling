/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Normalize_Profile_TA_SSP.h"

void SSP_Normalize_Profile_reset_TA_SSP(outC_SSP_Normalize_Profile_TA_SSP *outC)
{
  kcg_int i;
  
  for (i = 0; i < 50; i++) {
    /* 1 */ SSP_Normalize_Profile_loop_reset_TA_SSP(&outC->Context_1[i]);
  }
}

/* TA_SSP::SSP_Normalize_Profile */
void SSP_Normalize_Profile_TA_SSP(
  /* TA_SSP::SSP_Normalize_Profile::ProfileIn */StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_SSP::SSP_Normalize_Profile::pos_BG */L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  outC_SSP_Normalize_Profile_TA_SSP *outC)
{
  kcg_int i1;
  StaticSpeedProfile_t_TrackAtlasTypes tmp;
  kcg_int i;
  
  outC->_L2 = pos_BG;
  for (i1 = 0; i1 < 50; i1++) {
    outC->_L4[i1] = outC->_L2;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L1, ProfileIn);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L3, &outC->_L1);
  for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&tmp, &outC->_L3);
    /* 1 */
    SSP_Normalize_Profile_loop_TA_SSP(
      i,
      &tmp,
      outC->_L4[i],
      &outC->Context_1[i]);
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &outC->_L3,
      &outC->Context_1[i].ProfileNormalized_LRBG);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->ProfileNormalized_LRBG,
    &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Normalize_Profile_TA_SSP.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

