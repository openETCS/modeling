/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MRSP_TA_MRSP.h"

void Build_MRSP_reset_TA_MRSP(outC_Build_MRSP_TA_MRSP *outC)
{
  outC->init = kcg_true;
  /* 1 */ Calculate_MRSP_reset_TA_MRSP(&outC->_12_Context_1);
  /* 1 */ Build_SSP_Matrix_reset_TA_SpeedProfiles(&outC->_11_Context_1);
  /* 1 */ SP_TSR_reset_TA_SpeedProfiles(&outC->_10_Context_1);
  /* 1 */ SP_STM_SystemSpeed_reset_TA_SpeedProfiles(&outC->_9_Context_1);
  /* 1 */ SP_STM_MaxSpeed_reset_TA_SpeedProfiles(&outC->_8_Context_1);
  /* 1 */ SP_SignalingRelated_reset_TA_SpeedProfiles(&outC->_7_Context_1);
  /* 1 */ SP_PBD_SR_reset_TA_SpeedProfiles(&outC->_6_Context_1);
  /* 1 */ SP_OverrideRelated_reset_TA_SpeedProfiles(&outC->_5_Context_1);
  /* 1 */ SP_ModeRelated_reset_TA_SpeedProfiles(&outC->_4_Context_1);
  /* 1 */ SP_MaxTrainSpeed_reset_TA_SpeedProfiles(&outC->_3_Context_1);
  /* 1 */ SP_LX_SR_reset_TA_SpeedProfiles(&outC->_2_Context_1);
  /* 1 */ SP_ASP_reset_TA_SpeedProfiles(&outC->_1_Context_1);
  /* 1 */ Build_StaticSpeedProfile_reset_TA_SSP(&outC->Context_1);
}

/* TA_MRSP::Build_MRSP */
void Build_MRSP_TA_MRSP(
  /* TA_MRSP::Build_MRSP::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MRSP::Build_MRSP::TrainDataIn */kcg_int TrainDataIn,
  /* TA_MRSP::Build_MRSP::ModeAndLevel_in */T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* TA_MRSP::Build_MRSP::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_MRSP::Build_MRSP::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_Build_MRSP_TA_MRSP *outC)
{
  MRSP_Profile_t_TrackAtlasTypes tmp;
  MRSP_Profile_t_TrackAtlasTypes tmp1;
  
  outC->_L24 = kcg_false;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L16, MessageIn);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L23, train_position);
  outC->_L22 = train_length;
  /* 1 */
  Build_StaticSpeedProfile_TA_SSP(
    outC->_L24,
    &outC->_L16,
    &outC->_L23,
    outC->_L22,
    &outC->Context_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L26,
    &outC->Context_1.SSP);
  outC->_L21 = outC->Context_1.updated;
  outC->_L20 = outC->Context_1.available;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SSP, &outC->_L26);
  outC->SSP_available = outC->_L20;
  outC->_L32 = kcg_false;
  kcg_copy_SSP_cat_t_TA_MRSP(
    &outC->_L29,
    (SSP_cat_t_TA_MRSP *) &XSSPold_TA_MRSP);
  outC->_L27 = kcg_false;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L25, ModeAndLevel_in);
  /* 1 */ SP_ASP_TA_SpeedProfiles(outC->_L24, &outC->_L16, &outC->_1_Context_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L3, &outC->_1_Context_1.ASP);
  /* 1 */
  SP_LX_SR_TA_SpeedProfiles(outC->_L24, &outC->_L16, &outC->_2_Context_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L4, &outC->_2_Context_1.LX_SR);
  outC->_L17 = TrainDataIn;
  /* 1 */
  SP_MaxTrainSpeed_TA_SpeedProfiles(
    outC->_L24,
    outC->_L17,
    &outC->_3_Context_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L5, &outC->_3_Context_1.MaxTrainSpeed);
  /* 1 */
  SP_ModeRelated_TA_SpeedProfiles(
    outC->_L24,
    outC->_L27,
    &outC->_L16,
    &outC->_L25,
    &outC->_4_Context_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L7, &outC->_4_Context_1.ModeRelated);
  /* 1 */
  SP_OverrideRelated_TA_SpeedProfiles(
    outC->_L24,
    &outC->_L16,
    &outC->_5_Context_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L8, &outC->_5_Context_1.OverrideRelated);
  /* 1 */
  SP_PBD_SR_TA_SpeedProfiles(outC->_L24, &outC->_L16, &outC->_6_Context_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L9, &outC->_6_Context_1.PBD_SR);
  /* 1 */
  SP_SignalingRelated_TA_SpeedProfiles(
    outC->_L24,
    &outC->_L16,
    &outC->_7_Context_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L11, &outC->_7_Context_1.SignalingRelated);
  /* 1 */
  SP_STM_MaxSpeed_TA_SpeedProfiles(
    outC->_L24,
    &outC->_L16,
    &outC->_8_Context_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L13, &outC->_8_Context_1.STM_MaxSpeed);
  /* 1 */
  SP_STM_SystemSpeed_TA_SpeedProfiles(
    outC->_L24,
    &outC->_L16,
    &outC->_9_Context_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L14, &outC->_9_Context_1.STM_SystemSpeed);
  /* 1 */
  SP_TSR_TA_SpeedProfiles(outC->_L24, &outC->_L16, &outC->_10_Context_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L15, &outC->_10_Context_1.TSR);
  /* 1 */
  Build_SSP_Matrix_TA_SpeedProfiles(
    &outC->_L3,
    &outC->_L4,
    &outC->_L5,
    &outC->_L7,
    &outC->_L8,
    &outC->_L9,
    &outC->_L11,
    &outC->_L29,
    outC->_L21,
    &outC->_L13,
    &outC->_L14,
    &outC->_L15,
    &outC->_11_Context_1);
  outC->_L19 = outC->_11_Context_1.SSP_matrix_updated;
  kcg_copy_SSP_matrix_t_TA_MRSP(
    &outC->_L2,
    &outC->_11_Context_1.SSP_matrix_out);
  outC->newMRSP = outC->_L19;
  outC->tmp = outC->_L32;
  if (outC->tmp) {
    /* 1 */ Calculate_MRSP_TA_MRSP(&outC->_L2, &outC->_12_Context_1);
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&tmp1, &outC->_12_Context_1.MRSP);
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L1, &tmp1);
  }
  else {
    if (outC->init) {
      kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
        &tmp,
        (MRSP_Profile_t_TrackAtlasTypes *) &DEFAULT_MRSP_Profile_TA_MRSP);
    }
    else {
      kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&tmp, &outC->_L1);
    }
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L1, &tmp);
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP, &outC->_L1);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MRSP_TA_MRSP.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

