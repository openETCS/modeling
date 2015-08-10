/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_LRBG_only_TA_Gradient.h"

/* TA_Gradient::Update_LRBG_only */
void Update_LRBG_only_TA_Gradient(
  /* TA_Gradient::Update_LRBG_only::SP_in */GradientProfile_t_TrackAtlasTypes *SP_in,
  /* TA_Gradient::Update_LRBG_only::TrainPosition_in */trainPosition_T_TrainPosition_Types_Pck *TrainPosition_in,
  /* TA_Gradient::Update_LRBG_only::new_profile_out */GradientProfile_t_TrackAtlasTypes *new_profile_out)
{
  /* 1 */
  MoveGPSectionsToNewLRBGafter_TA_Lib_internal(
    SP_in,
    (*TrainPosition_in).LRBG.location.nominal -
    (*TrainPosition_in).prvLRBG.location.nominal,
    new_profile_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_LRBG_only_TA_Gradient.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

