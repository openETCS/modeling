/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_1_Convert_P21_to_DistancePr_TA_Gradient.h"

void _1_Convert_P21_to_DistancePr_reset_TA_Gradient(
  outC__1_Convert_P21_to_DistancePr_TA_Gradient *outC)
{
  kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 1 */ Convert_P21_to_DistancePr_reset_TA_Gradient(&outC->Context_1[i]);
  }
}

/* TA_Gradient::Convert_P21_to_DistanceProfile */
void _1_Convert_P21_to_DistancePr_TA_Gradient(
  /* TA_Gradient::Convert_P21_to_DistanceProfile::Packet21_in */P021_OBU_T_TM *Packet21_in,
  outC__1_Convert_P21_to_DistancePr_TA_Gradient *outC)
{
  kcg_int i2;
  kcg_int i1;
  GradientProfile_t_TrackAtlasTypes tmp;
  kcg_int i;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L83,
    (GradientProfile_t_TrackAtlasTypes *)
      &DEFAULT_GradientProfile_TrackAtlasTypes);
  kcg_copy_P021_OBU_T_TM(&outC->_L73, Packet21_in);
  kcg_copy_P021_OBU_sectionlist_enum_T_TM(&outC->_L71, &outC->_L73.sections);
  for (i2 = 0; i2 < 33; i2++) {
    kcg_copy_P021_OBU_sectionlist_enum_T_TM(&outC->_L74[i2], &outC->_L71);
  }
  kcg_copy_P021_OBU_T_TM(&outC->_L63, Packet21_in);
  outC->_L65 = outC->_L63.q_scale;
  for (i1 = 0; i1 < 33; i1++) {
    outC->_L76[i1] = outC->_L65;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L77, &outC->_L83);
  for (i = 0; i < 33; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&tmp, &outC->_L77);
    /* 1 */
    Convert_P21_to_DistancePr_TA_Gradient(
      i,
      &tmp,
      &outC->_L74[i],
      outC->_L76[i],
      &outC->Context_1[i]);
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &outC->_L77,
      &outC->Context_1[i].GradientProfile);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->GradientProfile,
    &outC->_L77);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** _1_Convert_P21_to_DistancePr_TA_Gradient.c
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */

