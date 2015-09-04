/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Truncate_at_BG_loop_TA_SSP.h"

void SSP_Truncate_at_BG_loop_reset_TA_SSP(
  outC_SSP_Truncate_at_BG_loop_TA_SSP *outC)
{
}

/* TA_SSP::SSP_Truncate_at_BG_loop */
void SSP_Truncate_at_BG_loop_TA_SSP(
  /* TA_SSP::SSP_Truncate_at_BG_loop::i */kcg_int i,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Acc */StaticSpeedProfile_t_TrackAtlasTypes *Acc,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Pointer */kcg_int Pointer,
  outC_SSP_Truncate_at_BG_loop_TA_SSP *outC)
{
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L3, Profile_in);
  outC->_L6 = i;
  outC->_L4 = Pointer;
  outC->_L7 = outC->_L6 + outC->_L4;
  if ((0 <= outC->_L7) & (outC->_L7 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L8,
      &outC->_L3[outC->_L7]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L8,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  outC->_L9 = outC->_L8.valid;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L2, Acc);
  outC->_L1 = i;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L5, &outC->_L2);
  if ((0 <= outC->_L1) & (outC->_L1 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L5[outC->_L1],
      &outC->_L8);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->Profile_out, &outC->_L5);
  outC->cont = outC->_L9;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Truncate_at_BG_loop_TA_SSP.c
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

