/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MRSP_TA_MRSP.h"

void Build_MRSP_reset_TA_MRSP(outC_Build_MRSP_TA_MRSP *outC)
{
  outC->init = kcg_true;
  /* 2 */ Build_StaticSpeedProfile_reset_TA_SSP(&outC->Context_2);
}

/* TA_MRSP::Build_MRSP */
void Build_MRSP_TA_MRSP(
  /* TA_MRSP::Build_MRSP::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MRSP::Build_MRSP::TrainDataIn */FromTIU_t_TrackAtlasTypes TrainDataIn,
  /* TA_MRSP::Build_MRSP::ModeAndLevel_in */T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* TA_MRSP::Build_MRSP::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_MRSP::Build_MRSP::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_Build_MRSP_TA_MRSP *outC)
{
  static SSP_cat_t_TA_MRSP tmp9;
  static SSP_cat_t_TA_MRSP tmp8;
  static SSP_cat_t_TA_MRSP tmp7;
  static SSP_cat_t_TA_MRSP tmp6;
  static SSP_cat_t_TA_MRSP tmp5;
  static SSP_cat_t_TA_MRSP tmp4;
  static SSP_cat_t_TA_MRSP tmp3;
  static SSP_cat_t_TA_MRSP tmp2;
  static SSP_cat_t_TA_MRSP tmp1;
  static SSP_cat_t_TA_MRSP tmp;
  /* TA_MRSP::Build_MRSP::_L2 */
  static SSP_matrix_t_TA_MRSP _L2;
  /* TA_MRSP::Build_MRSP::_L21 */
  static kcg_bool _L21;
  
  /* 2 */
  Build_StaticSpeedProfile_TA_SSP(
    kcg_false,
    MessageIn,
    train_position,
    train_length,
    &outC->Context_2);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->SSP,
    &outC->Context_2.SSP);
  _L21 = outC->Context_2.updated;
  outC->SSP_available = outC->Context_2.available;
  /* 1 */ SP_ASP_TA_SpeedProfiles(kcg_false, MessageIn, &tmp9);
  /* 1 */ SP_LX_SR_TA_SpeedProfiles(kcg_false, MessageIn, &tmp8);
  /* 1 */ SP_MaxTrainSpeed_TA_SpeedProfiles(kcg_false, 0, &tmp7);
  /* 1 */
  SP_ModeRelated_TA_SpeedProfiles(
    kcg_false,
    kcg_false,
    MessageIn,
    ModeAndLevel_in,
    &tmp6);
  /* 1 */ SP_OverrideRelated_TA_SpeedProfiles(kcg_false, MessageIn, &tmp5);
  /* 1 */ SP_PBD_SR_TA_SpeedProfiles(kcg_false, MessageIn, &tmp4);
  /* 1 */ SP_SignalingRelated_TA_SpeedProfiles(kcg_false, MessageIn, &tmp3);
  /* 1 */ SP_STM_MaxSpeed_TA_SpeedProfiles(kcg_false, MessageIn, &tmp2);
  /* 1 */ SP_STM_SystemSpeed_TA_SpeedProfiles(kcg_false, MessageIn, &tmp1);
  /* 1 */ SP_TSR_TA_SpeedProfiles(kcg_false, MessageIn, &tmp);
  /* 1 */
  Build_SSP_Matrix_TA_SpeedProfiles(
    &tmp9,
    &tmp8,
    &tmp7,
    &tmp6,
    &tmp5,
    &tmp4,
    &tmp3,
    (SSP_cat_t_TA_MRSP *) &XSSPold_TA_MRSP,
    _L21,
    &tmp2,
    &tmp1,
    &tmp,
    &outC->newMRSP,
    &_L2);
  if (outC->newMRSP) {
    /* 1 */ Calculate_MRSP1_TA_MRSP(&_L2, &outC->MRSP);
  }
  else if (outC->init) {
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
      &outC->MRSP,
      (MRSP_Profile_t_TrackAtlasTypes *) &DEFAULT_MRSP_Profile_TA_MRSP);
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MRSP_TA_MRSP.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

