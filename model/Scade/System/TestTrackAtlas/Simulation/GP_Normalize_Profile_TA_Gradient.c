/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Normalize_Profile_TA_Gradient.h"

void GP_Normalize_Profile_reset_TA_Gradient(
  outC_GP_Normalize_Profile_TA_Gradient *outC)
{
  kcg_int i;
  
  for (i = 0; i < 50; i++) {
    /* 1 */ GP_Normalize_Profile_loop_reset_TA_Gradient(&outC->Context_1[i]);
  }
}

/* TA_Gradient::GP_Normalize_Profile */
void GP_Normalize_Profile_TA_Gradient(
  /* TA_Gradient::GP_Normalize_Profile::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient::GP_Normalize_Profile::pos_BG */L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  outC_GP_Normalize_Profile_TA_Gradient *outC)
{
  kcg_int i1;
  GradientProfile_t_TrackAtlasTypes tmp;
  kcg_int i;
  
  outC->_L2 = pos_BG;
  for (i1 = 0; i1 < 50; i1++) {
    outC->_L4[i1] = outC->_L2;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L1, ProfileIn);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L3, &outC->_L1);
  for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&tmp, &outC->_L3);
    /* 1 */
    GP_Normalize_Profile_loop_TA_Gradient(
      i,
      &tmp,
      outC->_L4[i],
      &outC->Context_1[i]);
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &outC->_L3,
      &outC->Context_1[i].ProfileNormalized_LRBG);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->ProfileNormalized_LRBG,
    &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Normalize_Profile_TA_Gradient.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

