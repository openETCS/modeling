/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_LRBG_then_GP_TA_Gradient.h"

void Update_LRBG_then_GP_reset_TA_Gradient(
  outC_Update_LRBG_then_GP_TA_Gradient *outC)
{
  /* 1 */ Update_GP_per_LRBG_reset_TA_Lib_internal(&outC->_2_Context_1);
  /* 1 */
  MoveGPSectionsToNewLRBGafter_reset_TA_Lib_internal(&outC->_1_Context_1);
  /* 1 */ _21_Convert_P21_to_DistancePr_reset_TA_Gradient(&outC->Context_1);
}

/* TA_Gradient::Update_LRBG_then_GP */
void Update_LRBG_then_GP_TA_Gradient(
  /* TA_Gradient::Update_LRBG_then_GP::GP_in */GradientProfile_t_TrackAtlasTypes *GP_in,
  /* TA_Gradient::Update_LRBG_then_GP::P21_in */P021_OBU_T_TM *P21_in,
  /* TA_Gradient::Update_LRBG_then_GP::TrainPosition_in */trainPosition_T_TrainPosition_Types_Pck *TrainPosition_in,
  outC_Update_LRBG_then_GP_TA_Gradient *outC)
{
  kcg_copy_P021_OBU_T_TM(&outC->_L2, P21_in);
  /* 1 */
  _21_Convert_P21_to_DistancePr_TA_Gradient(&outC->_L2, &outC->Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L9,
    &outC->Context_1.GradientProfile);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L1, GP_in);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L4,
    TrainPosition_in);
  outC->_L7 = outC->_L4.LRBG.location.nominal;
  outC->_L6 = outC->_L4.prvLRBG.location.nominal;
  outC->_L5 = outC->_L7 - outC->_L6;
  /* 1 */
  MoveGPSectionsToNewLRBGafter_TA_Lib_internal(
    &outC->_L1,
    outC->_L5,
    &outC->_1_Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L8,
    &outC->_1_Context_1.ProfileOut);
  /* 1 */
  Update_GP_per_LRBG_TA_Lib_internal(
    &outC->_L9,
    &outC->_L8,
    &outC->_2_Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L13,
    &outC->_2_Context_1.GradientdProfile_out);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->new_profile_out,
    &outC->_L13);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_LRBG_then_GP_TA_Gradient.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

