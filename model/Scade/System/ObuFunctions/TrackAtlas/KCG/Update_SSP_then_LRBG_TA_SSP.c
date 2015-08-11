/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_SSP_then_LRBG_TA_SSP.h"

/* TA_SSP::Update_SSP_then_LRBG */
void Update_SSP_then_LRBG_TA_SSP(
  /* TA_SSP::Update_SSP_then_LRBG::SP_in */SSP_cat_t_TA_MRSP *SP_in,
  /* TA_SSP::Update_SSP_then_LRBG::P27V1_in */P027V1_OBU_T_TM_baseline2 *P27V1_in,
  /* TA_SSP::Update_SSP_then_LRBG::train_length_in */L_internal_Type_Obu_BasicTypes_Pkg train_length_in,
  /* TA_SSP::Update_SSP_then_LRBG::TrainPosition_in */trainPosition_T_TrainPosition_Types_Pck *TrainPosition_in,
  /* TA_SSP::Update_SSP_then_LRBG::new_profile_out */SSP_cat_t_TA_MRSP *new_profile_out)
{
  SSP_cat_t_TA_MRSP tmp;
  /* TA_SSP::Update_SSP_then_LRBG::_L6 */ SSP_cat_t_TA_MRSP _L6;
  /* TA_SSP::Update_SSP_then_LRBG::_L7 */ V_internal_Type_Obu_BasicTypes_Pkg _L7;
  /* TA_SSP::Update_SSP_then_LRBG::_L8 */ SSP_section_t_TA_MRSP _L8;
  /* TA_SSP::Update_SSP_then_LRBG::_L9 */ SSP_section_t_TA_MRSP _L9;
  
  /* 1 */
  Convert_P27_to_DistanceProfile_TA_SSP(
    P27V1_in,
    train_length_in,
    &_L6,
    &_L7,
    &_L8,
    &_L9);
  /* 1 */
  Update_SP_per_LRBG_TA_Lib_internal(&_L6, _L7, &_L8, &_L9, SP_in, &tmp);
  /* 1 */
  MoveSPSectionsToNewLRBGafter_TA_Lib_internal(
    &tmp,
    (*TrainPosition_in).LRBG.location.nominal -
    (*TrainPosition_in).prvLRBG.location.nominal,
    new_profile_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_SSP_then_LRBG_TA_SSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

