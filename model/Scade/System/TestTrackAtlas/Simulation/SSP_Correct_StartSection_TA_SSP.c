/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Correct_StartSection_TA_SSP.h"

void SSP_Correct_StartSection_reset_TA_SSP(
  outC_SSP_Correct_StartSection_TA_SSP *outC)
{
}

/* TA_SSP::SSP_Correct_StartSection */
void SSP_Correct_StartSection_TA_SSP(
  /* TA_SSP::SSP_Correct_StartSection::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  outC_SSP_Correct_StartSection_TA_SSP *outC)
{
  outC->_L8 = 0;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L1, Profile_in);
  kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&outC->_L3, &outC->_L1[0]);
  kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&outC->_L7, &outC->_L3);
  if (kcg_true) {
    outC->_L7.d_static_LRBG = outC->_L8;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L5, &outC->_L1);
  if ((0 <= 0) & (0 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&outC->_L5[0], &outC->_L7);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->Profile_out, &outC->_L5);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Correct_StartSection_TA_SSP.c
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

