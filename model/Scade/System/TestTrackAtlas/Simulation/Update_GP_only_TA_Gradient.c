/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_GP_only_TA_Gradient.h"

void Update_GP_only_reset_TA_Gradient(outC_Update_GP_only_TA_Gradient *outC)
{
  /* 1 */ Update_GP_per_LRBG_reset_TA_Lib_internal(&outC->_1_Context_1);
  /* 1 */ _6_Convert_P21_to_DistancePr_reset_TA_Gradient(&outC->Context_1);
}

/* TA_Gradient::Update_GP_only */
void Update_GP_only_TA_Gradient(
  /* TA_Gradient::Update_GP_only::GP_in */GradientProfile_t_TrackAtlasTypes *GP_in,
  /* TA_Gradient::Update_GP_only::P21_in */P021_OBU_T_TM *P21_in,
  outC_Update_GP_only_TA_Gradient *outC)
{
  kcg_copy_P021_OBU_T_TM(&outC->_L2, P21_in);
  /* 1 */
  _6_Convert_P21_to_DistancePr_TA_Gradient(&outC->_L2, &outC->Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L5,
    &outC->Context_1.GradientProfile);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L1, GP_in);
  /* 1 */
  Update_GP_per_LRBG_TA_Lib_internal(
    &outC->_L5,
    &outC->_L1,
    &outC->_1_Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L4,
    &outC->_1_Context_1.GradientdProfile_out);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->new_profile_out,
    &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_GP_only_TA_Gradient.c
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */

