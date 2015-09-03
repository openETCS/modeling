/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_LRBG_only_TA_Gradient.h"

void Update_LRBG_only_reset_TA_Gradient(outC_Update_LRBG_only_TA_Gradient *outC)
{
  /* 1 */ MoveGPSectionsToNewLRBGafter_reset_TA_Lib_internal(&outC->Context_1);
}

/* TA_Gradient::Update_LRBG_only */
void Update_LRBG_only_TA_Gradient(
  /* TA_Gradient::Update_LRBG_only::SP_in */GradientProfile_t_TrackAtlasTypes *SP_in,
  /* TA_Gradient::Update_LRBG_only::TrainPosition_in */trainPosition_T_TrainPosition_Types_Pck *TrainPosition_in,
  outC_Update_LRBG_only_TA_Gradient *outC)
{
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L2,
    TrainPosition_in);
  outC->_L34 = outC->_L2.LRBG.location.nominal;
  outC->_L35 = outC->_L2.prvLRBG.location.nominal;
  outC->_L36 = outC->_L34 - outC->_L35;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L1, SP_in);
  /* 1 */
  MoveGPSectionsToNewLRBGafter_TA_Lib_internal(
    &outC->_L1,
    outC->_L36,
    &outC->Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L3,
    &outC->Context_1.ProfileOut);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->new_profile_out,
    &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_LRBG_only_TA_Gradient.c
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

