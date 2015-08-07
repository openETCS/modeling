/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackAtlas_TrackAtlas.h"

void TrackAtlas_reset_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC)
{
  /* 1 */ Build_MRSP_reset_TA_MRSP(&outC->Context_1);
  /* 1 */ Build_GradientProfile_reset_TA_Gradient(&outC->_1_Context_1);
  /* 1 */ Manage_MA_Request_reset_MA_Request(&outC->_2_Context_1);
  /* 1 */ Build_MA_reset_TA_MA(&outC->_3_Context_1);
  /* 1 */ StoreRaw_NV_reset_TA_Storage(&outC->_4_Context_1);
}

/* TrackAtlas::TrackAtlas */
void TrackAtlas_TrackAtlas(
  inC_TrackAtlas_TrackAtlas *inC,
  outC_TrackAtlas_TrackAtlas *outC)
{
  /* TrackAtlas::TrackAtlas::_L21 */ P003V1_OBU_T_TM_baseline2 _L21;
  
  /* 1 */ StoreRaw_NV_TA_Storage(&inC->MessageIn, &outC->_4_Context_1);
  kcg_copy_P003V1_OBU_T_TM_baseline2(&_L21, &outC->_4_Context_1.NV_onboard_out);
  /* 1 */ Build_MA_TA_MA(&inC->MessageIn, &_L21, &outC->_3_Context_1);
  outC->to_Supervision.freshMA = outC->_3_Context_1.new_MA;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_onboard_out,
    &outC->_3_Context_1.MA_onboard_out);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->to_Supervision.MA,
    &outC->MA_onboard_out);
  /* 1 */
  Manage_MA_Request_MA_Request(
    &inC->TrainPositionIn,
    inC->SystemTime,
    &inC->MessageIn,
    inC->preindicationLocation,
    &inC->odometry,
    &outC->MA_onboard_out,
    &inC->fromDriverToMA_R,
    kcg_false,
    &inC->trainProps,
    &inC->packet0,
    &inC->packet1,
    inC->t_train,
    &outC->_2_Context_1);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->MA_request_out,
    &outC->_2_Context_1.message_out);
  /* 1 */ TA_to_ML_TA_Export(&outC->To_ModeAndLevel);
  /* 1 */
  C_P003V1_OBU_P003_OBU_TM_conversions_baseline2(
    &_L21,
    &inC->P203V1_onboard,
    &inC->PermanentDataP003,
    &outC->NV_raw_out);
  /* 1 */
  Build_GradientProfile_TA_Gradient(
    &inC->MessageIn,
    &inC->TrainPositionIn,
    &outC->_1_Context_1);
  outC->to_Supervision.freshGradientProfile = outC->_1_Context_1.updated;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->to_Supervision.GradientProfile,
    &outC->_1_Context_1.GP);
  outC->to_DMI.Gradient_profile_updated = outC->_1_Context_1.updated;
  /* 1 */
  Build_MRSP_TA_MRSP(
    &inC->MessageIn,
    0,
    kcg_false,
    inC->train_length_TOBEREPLACED,
    &inC->TrainPositionIn,
    &outC->Context_1);
  outC->to_Supervision.freshMRSP = outC->Context_1.newMRSP;
  outC->to_DMI.MRSP_updated = outC->Context_1.newMRSP;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP, &outC->Context_1.MRSP);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &outC->to_Supervision.MRSP,
    &outC->MRSP);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->to_DMI.MRSP, &outC->MRSP);
  /* 1 */
  GradientProfile_to_DMI_TA_Export(
    &outC->_1_Context_1.GP,
    &outC->to_DMI.GradientProfile);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackAtlas_TrackAtlas.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

