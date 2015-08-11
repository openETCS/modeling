/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_LRBG_then_SSP_TA_SSP.h"

/* TA_SSP::Update_LRBG_then_SSP */
void Update_LRBG_then_SSP_TA_SSP(
  /* TA_SSP::Update_LRBG_then_SSP::SP_in */SSP_cat_t_TA_MRSP *SP_in,
  /* TA_SSP::Update_LRBG_then_SSP::P27V1_in */P027V1_OBU_T_TM_baseline2 *P27V1_in,
  /* TA_SSP::Update_LRBG_then_SSP::train_length_in */L_internal_Type_Obu_BasicTypes_Pkg train_length_in,
  /* TA_SSP::Update_LRBG_then_SSP::TrainPosition_in */trainPosition_T_TrainPosition_Types_Pck *TrainPosition_in,
  /* TA_SSP::Update_LRBG_then_SSP::new_profile_out */SSP_cat_t_TA_MRSP *new_profile_out)
{
  SSP_cat_t_TA_MRSP tmp;
  /* TA_SSP::Update_LRBG_then_SSP::_L9 */ SSP_cat_t_TA_MRSP _L9;
  /* TA_SSP::Update_LRBG_then_SSP::_L10 */ V_internal_Type_Obu_BasicTypes_Pkg _L10;
  /* TA_SSP::Update_LRBG_then_SSP::_L11 */ SSP_section_t_TA_MRSP _L11;
  /* TA_SSP::Update_LRBG_then_SSP::_L12 */ SSP_section_t_TA_MRSP _L12;
  
  /* 1 */
  Convert_P27_to_DistanceProfile_TA_SSP(
    P27V1_in,
    train_length_in,
    &_L9,
    &_L10,
    &_L11,
    &_L12);
  /* 1 */
  MoveSPSectionsToNewLRBGafter_TA_Lib_internal(
    SP_in,
    (*TrainPosition_in).LRBG.location.nominal -
    (*TrainPosition_in).prvLRBG.location.nominal,
    &tmp);
  /* 1 */
  Update_SP_per_LRBG_TA_Lib_internal(
    &_L9,
    _L10,
    &_L11,
    &_L12,
    &tmp,
    new_profile_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_LRBG_then_SSP_TA_SSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

