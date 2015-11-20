/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MRSP_TA_MRSP.h"

#ifndef KCG_USER_DEFINED_INIT
void Build_MRSP_init_TA_MRSP(outC_Build_MRSP_TA_MRSP *outC)
{
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 110; i++) {
    outC->_L1[i].valid = kcg_true;
    outC->_L1[i].Loc_Abs = 0;
    outC->_L1[i].Loc_LRBG = 0;
    outC->_L1[i].MRS = 0;
  }
  for (i1 = 0; i1 < 50; i1++) {
    outC->SSP[i1].valid = kcg_true;
    outC->SSP[i1].d_static_abs = 0;
    outC->SSP[i1].d_static_LRBG = 0;
    outC->SSP[i1].q_train_length_corr = kcg_true;
    outC->SSP[i1].v_static = 0;
  }
  outC->SSP_available = kcg_true;
  for (i2 = 0; i2 < 110; i2++) {
    outC->MRSP[i2].valid = kcg_true;
    outC->MRSP[i2].Loc_Abs = 0;
    outC->MRSP[i2].Loc_LRBG = 0;
    outC->MRSP[i2].MRS = 0;
  }
  outC->newMRSP = kcg_true;
  /* 1 */ Build_StaticSpeedProfile_init_TA_SSP(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_MRSP_reset_TA_MRSP(outC_Build_MRSP_TA_MRSP *outC)
{
  outC->init = kcg_true;
  /* 1 */ Build_StaticSpeedProfile_reset_TA_SSP(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MRSP::Build_MRSP */
void Build_MRSP_TA_MRSP(
  /* TA_MRSP::Build_MRSP::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MRSP::Build_MRSP::TrainDataIn */ FromTIU_t_TrackAtlasTypes TrainDataIn,
  /* TA_MRSP::Build_MRSP::ModeAndLevel_in */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* TA_MRSP::Build_MRSP::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_MRSP::Build_MRSP::train_position */ trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_Build_MRSP_TA_MRSP *outC)
{
  /* TA_MRSP::Build_MRSP */
  static MRSP_Profile_t_TrackAtlasTypes tmp;
  /* TA_MRSP::Build_MRSP */
  static MRSP_Profile_t_TrackAtlasTypes op_call;
  /* TA_MRSP::Build_MRSP */
  static kcg_bool ck_every;
  static FromTIU_t_TrackAtlasTypes noname;
  /* TA_MRSP::Build_MRSP::_L2 */
  static SSP_matrix_t_TA_MRSP _L2;
  /* TA_MRSP::Build_MRSP::_L3 */
  static SSP_cat_t_TA_MRSP _L3;
  /* TA_MRSP::Build_MRSP::_L4 */
  static SSP_cat_t_TA_MRSP _L4;
  /* TA_MRSP::Build_MRSP::_L5 */
  static SSP_cat_t_TA_MRSP _L5;
  /* TA_MRSP::Build_MRSP::_L7 */
  static SSP_cat_t_TA_MRSP _L7;
  /* TA_MRSP::Build_MRSP::_L8 */
  static SSP_cat_t_TA_MRSP _L8;
  /* TA_MRSP::Build_MRSP::_L9 */
  static SSP_cat_t_TA_MRSP _L9;
  /* TA_MRSP::Build_MRSP::_L11 */
  static SSP_cat_t_TA_MRSP _L11;
  /* TA_MRSP::Build_MRSP::_L13 */
  static SSP_cat_t_TA_MRSP _L13;
  /* TA_MRSP::Build_MRSP::_L14 */
  static SSP_cat_t_TA_MRSP _L14;
  /* TA_MRSP::Build_MRSP::_L15 */
  static SSP_cat_t_TA_MRSP _L15;
  /* TA_MRSP::Build_MRSP::_L16 */
  static ReceivedMessage_T_Common_Types_Pkg _L16;
  /* TA_MRSP::Build_MRSP::_L17 */
  static FromTIU_t_TrackAtlasTypes _L17;
  /* TA_MRSP::Build_MRSP::_L19 */
  static kcg_bool _L19;
  /* TA_MRSP::Build_MRSP::_L20 */
  static kcg_bool _L20;
  /* TA_MRSP::Build_MRSP::_L21 */
  static kcg_bool _L21;
  /* TA_MRSP::Build_MRSP::_L23 */
  static trainPosition_T_TrainPosition_Types_Pck _L23;
  /* TA_MRSP::Build_MRSP::_L24 */
  static kcg_bool _L24;
  /* TA_MRSP::Build_MRSP::_L25 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L25;
  /* TA_MRSP::Build_MRSP::_L26 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L26;
  /* TA_MRSP::Build_MRSP::_L27 */
  static kcg_bool _L27;
  /* TA_MRSP::Build_MRSP::_L29 */
  static SSP_cat_t_TA_MRSP _L29;
  /* TA_MRSP::Build_MRSP::_L34 */
  static kcg_int _L34;
  /* TA_MRSP::Build_MRSP::_L22 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L22;
  
  _L24 = kcg_false;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L16, MessageIn);
  /* 1 */ SP_ASP_TA_SpeedProfiles(_L24, &_L16, &_L3);
  /* 1 */ SP_LX_SR_TA_SpeedProfiles(_L24, &_L16, &_L4);
  _L34 = 0;
  /* 1 */ SP_MaxTrainSpeed_TA_SpeedProfiles(_L24, _L34, &_L5);
  _L27 = kcg_false;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L25, ModeAndLevel_in);
  /* 1 */ SP_ModeRelated_TA_SpeedProfiles(_L24, _L27, &_L16, &_L25, &_L7);
  /* 1 */ SP_OverrideRelated_TA_SpeedProfiles(_L24, &_L16, &_L8);
  /* 1 */ SP_PBD_SR_TA_SpeedProfiles(_L24, &_L16, &_L9);
  /* 1 */ SP_SignalingRelated_TA_SpeedProfiles(_L24, &_L16, &_L11);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L29, (SSP_cat_t_TA_MRSP *) &XSSPold_TA_MRSP);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L23, train_position);
  _L22 = train_length;
  /* 1 */
  Build_StaticSpeedProfile_TA_SSP(_L24, &_L16, &_L23, _L22, &outC->Context_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L26, &outC->Context_1.SSP);
  _L21 = outC->Context_1.updated;
  _L20 = outC->Context_1.available;
  /* 1 */ SP_STM_MaxSpeed_TA_SpeedProfiles(_L24, &_L16, &_L13);
  /* 1 */ SP_STM_SystemSpeed_TA_SpeedProfiles(_L24, &_L16, &_L14);
  /* 1 */ SP_TSR_TA_SpeedProfiles(_L24, &_L16, &_L15);
  /* 1 */
  Build_SSP_Matrix_TA_SpeedProfiles(
    &_L3,
    &_L4,
    &_L5,
    &_L7,
    &_L8,
    &_L9,
    &_L11,
    &_L29,
    _L21,
    &_L13,
    &_L14,
    &_L15,
    &_L19,
    &_L2);
  ck_every = _L19;
  /* ck_Build_MRSP */ if (ck_every) {
    /* 1 */ Calculate_MRSP1_TA_MRSP(&_L2, &op_call);
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L1, &op_call);
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
  _L17 = TrainDataIn;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP, &outC->_L1);
  outC->newMRSP = _L19;
  outC->SSP_available = _L20;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SSP, &_L26);
  noname = _L17;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_MRSP_TA_MRSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

