/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Truncate_at_BG_TA_SSP.h"

void SSP_Truncate_at_BG_reset_TA_SSP(outC_SSP_Truncate_at_BG_TA_SSP *outC)
{
  kcg_int i;
  
  for (i = 0; i < 50; i++) {
    /* 1 */ SSP_Truncate_at_BG_loop_reset_TA_SSP(&outC->_1_Context_1[i]);
  }
  for (i = 0; i < 50; i++) {
    /* 1 */
    SSP_Find_First_Speed_Section_After_BG_loop_reset_TA_SSP(
      &outC->Context_1[i]);
  }
}

/* TA_SSP::SSP_Truncate_at_BG */
void SSP_Truncate_at_BG_TA_SSP(
  /* TA_SSP::SSP_Truncate_at_BG::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  outC_SSP_Truncate_at_BG_TA_SSP *outC)
{
  kcg_int i4;
  kcg_int tmp3;
  kcg_int i2;
  kcg_int i1;
  StaticSpeedProfile_t_TrackAtlasTypes tmp;
  kcg_int i;
  kcg_int noname;
  kcg_int _5_noname;
  
  outC->_L8 = 0;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L1, Profile_in);
  for (i4 = 0; i4 < 50; i4++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L6[i4], &outC->_L1);
  }
  outC->_L14 = kcg_true;
  outC->_L5 = outC->_L8;
  if (outC->_L14) {
    for (i2 = 0; i2 < 50; i2++) {
      tmp3 = outC->_L5;
      /* 1 */
      SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP(
        i2,
        tmp3,
        &outC->_L6[i2],
        &outC->Context_1[i2]);
      outC->_L5 = outC->Context_1[i2].Pointer;
      outC->_L4 = i2 + 1;
      if (!outC->Context_1[i2].cont) {
        break;
      }
    }
  }
  else {
    outC->_L4 = 0;
  }
  for (i1 = 0; i1 < 50; i1++) {
    outC->_L17[i1] = outC->_L5;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L13,
    (StaticSpeedProfile_t_TrackAtlasTypes *)
      &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  outC->_L11 = kcg_true;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L12, &outC->_L13);
  if (outC->_L11) {
    for (i = 0; i < 50; i++) {
      kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&tmp, &outC->_L12);
      /* 1 */
      SSP_Truncate_at_BG_loop_TA_SSP(
        i,
        &tmp,
        &outC->_L6[i],
        outC->_L17[i],
        &outC->_1_Context_1[i]);
      kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
        &outC->_L12,
        &outC->_1_Context_1[i].Profile_out);
      outC->_L10 = i + 1;
      if (!outC->_1_Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L10 = 0;
  }
  _5_noname = outC->_L10;
  noname = outC->_L4;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->Profile_out,
    &outC->_L12);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Truncate_at_BG_TA_SSP.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

