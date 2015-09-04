/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.h"

void SSP_Convert_P27V1_to_DistanceProfile_reset_TA_SSP(
  outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP *outC)
{
  kcg_int i;
  
  for (i = 0; i < 50; i++) {
    /* 1 */
    SSP_Convert_P27V1_to_DistanceProfile_loop_reset_TA_SSP(&outC->Context_1[i]);
  }
}

/* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile */
void SSP_Convert_P27V1_to_DistanceProfile_TA_SSP(
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::Packet27V1_in */P027V1_OBU_T_TM_baseline2 *Packet27V1_in,
  outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP *outC)
{
  kcg_int i2;
  kcg_int i1;
  StaticSpeedProfile_t_TrackAtlasTypes tmp;
  kcg_int i;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L83,
    (StaticSpeedProfile_t_TrackAtlasTypes *)
      &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L73, Packet27V1_in);
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
    &outC->_L71,
    &outC->_L73.sections);
  for (i2 = 0; i2 < 50; i2++) {
    kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
      &outC->_L74[i2],
      &outC->_L71);
  }
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L63, Packet27V1_in);
  outC->_L65 = outC->_L63.q_scale;
  for (i1 = 0; i1 < 50; i1++) {
    outC->_L76[i1] = outC->_L65;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L77, &outC->_L83);
  for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&tmp, &outC->_L77);
    /* 1 */
    SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP(
      i,
      &tmp,
      &outC->_L74[i],
      outC->_L76[i],
      &outC->Context_1[i]);
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &outC->_L77,
      &outC->Context_1[i].SpeedtProfile);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->SpeedProfile,
    &outC->_L77);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.c
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

