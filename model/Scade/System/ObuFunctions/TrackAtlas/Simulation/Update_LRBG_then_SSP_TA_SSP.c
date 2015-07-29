/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_LRBG_then_SSP_TA_SSP.h"

void Update_LRBG_then_SSP_reset_TA_SSP(outC_Update_LRBG_then_SSP_TA_SSP *outC)
{
  /* 1 */ Update_SP_per_LRBG_reset_TA_Lib_internal(&outC->_2_Context_1);
  /* 1 */
  MoveSPSectionsToNewLRBGafter_reset_TA_Lib_internal(&outC->_1_Context_1);
  /* 1 */ _17_Convert_P27_to_DistancePr_reset_TA_SSP(&outC->Context_1);
}

/* TA_SSP::Update_LRBG_then_SSP */
void Update_LRBG_then_SSP_TA_SSP(
  /* TA_SSP::Update_LRBG_then_SSP::SP_in */SSP_cat_t_TA_MRSP *SP_in,
  /* TA_SSP::Update_LRBG_then_SSP::P27V1_in */P027V1_OBU_T_TM_baseline2 *P27V1_in,
  /* TA_SSP::Update_LRBG_then_SSP::train_length_in */L_internal_Type_Obu_BasicTypes_Pkg train_length_in,
  /* TA_SSP::Update_LRBG_then_SSP::TrainPosition_in */trainPosition_T_TrainPosition_Types_Pck *TrainPosition_in,
  outC_Update_LRBG_then_SSP_TA_SSP *outC)
{
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L2, P27V1_in);
  outC->_L3 = train_length_in;
  /* 1 */
  _17_Convert_P27_to_DistancePr_TA_SSP(&outC->_L2, outC->_L3, &outC->Context_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L9, &outC->Context_1.SpeedProfile);
  outC->_L10 = outC->Context_1.v_static_section1;
  kcg_copy_SSP_section_t_TA_MRSP(&outC->_L11, &outC->Context_1.section1_delay);
  kcg_copy_SSP_section_t_TA_MRSP(&outC->_L12, &outC->Context_1.section1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L1, SP_in);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L4,
    TrainPosition_in);
  outC->_L7 = outC->_L4.LRBG.location.nominal;
  outC->_L6 = outC->_L4.prvLRBG.location.nominal;
  outC->_L5 = outC->_L7 - outC->_L6;
  /* 1 */
  MoveSPSectionsToNewLRBGafter_TA_Lib_internal(
    &outC->_L1,
    outC->_L5,
    &outC->_1_Context_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L8, &outC->_1_Context_1.ProfileOut);
  /* 1 */
  Update_SP_per_LRBG_TA_Lib_internal(
    &outC->_L9,
    outC->_L10,
    &outC->_L11,
    &outC->_L12,
    &outC->_L8,
    &outC->_2_Context_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L13, &outC->_2_Context_1.SpeedProfile_out);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->new_profile_out, &outC->_L13);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_LRBG_then_SSP_TA_SSP.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

