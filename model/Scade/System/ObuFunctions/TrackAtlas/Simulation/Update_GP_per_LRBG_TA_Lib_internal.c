/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_GP_per_LRBG_TA_Lib_internal.h"

void Update_GP_per_LRBG_reset_TA_Lib_internal(
  outC_Update_GP_per_LRBG_TA_Lib_internal *outC)
{
  kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 1 */
    Update_GP_per_LRBG_loop_reset_TA_Lib_internal(&outC->_1_Context_1[i]);
  }
  /* 1 */ FindStartOfNewGradientProfile_reset_TA_Lib_internal(&outC->Context_1);
}

/* TA_Lib_internal::Update_GP_per_LRBG */
void Update_GP_per_LRBG_TA_Lib_internal(
  /* TA_Lib_internal::Update_GP_per_LRBG::new_GP */GradientProfile_t_TrackAtlasTypes *new_GP,
  /* TA_Lib_internal::Update_GP_per_LRBG::Last_GradientProfile_in */GradientProfile_t_TrackAtlasTypes *Last_GradientProfile_in,
  outC_Update_GP_per_LRBG_TA_Lib_internal *outC)
{
  kcg_int i2;
  kcg_int i1;
  GradientProfile_t_TrackAtlasTypes tmp;
  kcg_int i;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L5, new_GP);
  for (i2 = 0; i2 < 33; i2++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L47[i2], &outC->_L5);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L45,
    Last_GradientProfile_in);
  /* 1 */
  FindStartOfNewGradientProfile_TA_Lib_internal(
    &outC->_L45,
    &outC->_L5,
    &outC->Context_1);
  outC->_L1 = outC->Context_1.relevant_section;
  for (i1 = 0; i1 < 33; i1++) {
    outC->_L9[i1] = outC->_L1;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L14, &outC->_L45);
  for (i = 0; i < 33; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&tmp, &outC->_L14);
    /* 1 */
    Update_GP_per_LRBG_loop_TA_Lib_internal(
      i,
      &tmp,
      outC->_L9[i],
      &outC->_L47[i],
      &outC->_1_Context_1[i]);
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &outC->_L14,
      &outC->_1_Context_1[i].GradientProfile_out);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->GradientdProfile_out,
    &outC->_L14);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_GP_per_LRBG_TA_Lib_internal.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

