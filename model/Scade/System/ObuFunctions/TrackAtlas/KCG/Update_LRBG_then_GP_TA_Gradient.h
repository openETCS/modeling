/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */
#ifndef _Update_LRBG_then_GP_TA_Gradient_H_
#define _Update_LRBG_then_GP_TA_Gradient_H_

#include "kcg_types.h"
#include "Convert_P21_to_DistanceProfile_TA_Gradient.h"
#include "MoveGPSectionsToNewLRBGafter_TA_Lib_internal.h"
#include "Update_GP_per_LRBG_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */


/* TA_Gradient::Update_LRBG_then_GP */
extern void Update_LRBG_then_GP_TA_Gradient(
  /* TA_Gradient::Update_LRBG_then_GP::GP_in */GradientProfile_t_TrackAtlasTypes *GP_in,
  /* TA_Gradient::Update_LRBG_then_GP::P21_in */P021_OBU_T_TM *P21_in,
  /* TA_Gradient::Update_LRBG_then_GP::TrainPosition_in */trainPosition_T_TrainPosition_Types_Pck *TrainPosition_in,
  /* TA_Gradient::Update_LRBG_then_GP::new_profile_out */GradientProfile_t_TrackAtlasTypes *new_profile_out);

#endif /* _Update_LRBG_then_GP_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_LRBG_then_GP_TA_Gradient.h
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

