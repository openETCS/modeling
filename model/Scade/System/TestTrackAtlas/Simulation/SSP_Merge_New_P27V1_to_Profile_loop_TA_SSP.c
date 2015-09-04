/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP.h"

void SSP_Merge_New_P27V1_to_Profile_loop_reset_TA_SSP(
  outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP *outC)
{
}

/* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop */
void SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP(
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::i */kcg_int i,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::SP */StaticSpeedProfile_t_TrackAtlasTypes *SP,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::First_Section_To_Replace */kcg_int First_Section_To_Replace,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::new_SP_received */StaticSpeedProfile_t_TrackAtlasTypes *new_SP_received,
  outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP *outC)
{
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L20, SP);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L6, new_SP_received);
  outC->_L11 = i;
  if ((0 <= outC->_L11) & (outC->_L11 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L15,
      &outC->_L6[outC->_L11]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L15,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  outC->_L5 = i;
  outC->_L4 = First_Section_To_Replace;
  outC->_L7 = outC->_L5 + outC->_L4;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L19, &outC->_L20);
  if ((0 <= outC->_L7) & (outC->_L7 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L19[outC->_L7],
      &outC->_L15);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SSP, &outC->_L19);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

