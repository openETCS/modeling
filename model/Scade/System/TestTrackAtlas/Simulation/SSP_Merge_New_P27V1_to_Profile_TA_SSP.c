/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Merge_New_P27V1_to_Profile_TA_SSP.h"

void SSP_Merge_New_P27V1_to_Profile_reset_TA_SSP(
  outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP *outC)
{
  kcg_int i;
  
  for (i = 0; i < 50; i++) {
    /* 1 */
    SSP_Merge_New_P27V1_to_Profile_loop_reset_TA_SSP(&outC->_1_Context_1[i]);
  }
  /* 1 */ FindStartOfNewSpeedProfileAbs_reset_TA_Lib_internal(&outC->Context_1);
}

/* TA_SSP::SSP_Merge_New_P27V1_to_Profile */
void SSP_Merge_New_P27V1_to_Profile_TA_SSP(
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::new_GP */StaticSpeedProfile_t_TrackAtlasTypes *new_GP,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::Last_SpeedProfile_in */StaticSpeedProfile_t_TrackAtlasTypes *Last_SpeedProfile_in,
  outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP *outC)
{
  kcg_int i2;
  kcg_int i1;
  StaticSpeedProfile_t_TrackAtlasTypes tmp;
  kcg_int i;
  kcg_int tmp3;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L45,
    Last_SpeedProfile_in);
  outC->_L148 = outC->_L45[0].valid;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L5, new_GP);
  for (i2 = 0; i2 < 50; i2++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L47[i2], &outC->_L5);
  }
  outC->tmp = outC->_L148;
  if (outC->tmp) {
    /* 1 */
    FindStartOfNewSpeedProfileAbs_TA_Lib_internal(
      &outC->_L45,
      &outC->_L5,
      &outC->Context_1);
    tmp3 = outC->Context_1.relevant_section;
    outC->_L1 = tmp3;
  }
  else {
    outC->_L1 = 0;
  }
  for (i1 = 0; i1 < 50; i1++) {
    outC->_L9[i1] = outC->_L1;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L14, &outC->_L45);
  for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&tmp, &outC->_L14);
    /* 1 */
    SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP(
      i,
      &tmp,
      outC->_L9[i],
      &outC->_L47[i],
      &outC->_1_Context_1[i]);
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &outC->_L14,
      &outC->_1_Context_1[i].SSP);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->SpeedProfile_out,
    &outC->_L14);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Merge_New_P27V1_to_Profile_TA_SSP.c
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

