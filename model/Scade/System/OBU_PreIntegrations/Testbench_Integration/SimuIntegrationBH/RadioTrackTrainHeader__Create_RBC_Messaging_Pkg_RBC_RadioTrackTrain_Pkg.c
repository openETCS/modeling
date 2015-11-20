/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create */
void RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_NID_MESSAGE */ NID_MESSAGE in_NID_MESSAGE,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_T_TRAIN */ T_TRAIN in_T_TRAIN,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_M_ACK */ M_ACK in_M_ACK,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_NID_LRBG */ NID_LRBG in_NID_LRBG,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_T_TRAIN_Ref */ T_TRAIN in_T_TRAIN_Ref,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_NID_EM */ NID_EM in_NID_EM,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_Q_SCALE */ Q_SCALE in_Q_SCALE,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_T_TRAIN_Sh */ T_TRAIN in_T_TRAIN_Sh,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_D_REF */ D_REF in_D_REF,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_Q_DIR */ Q_DIR in_Q_DIR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_D_EMERGENCYSTOP */ D_EMERGENCYSTOP in_D_EMERGENCYSTOP,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_M_VERSION */ M_VERSION in_M_VERSION,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::outRadioTrackTrainHeader */ Radio_TrackTrain_Header_T_TM *outRadioTrackTrainHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L1 */
  static NID_MESSAGE _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L2 */
  static T_TRAIN _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L3 */
  static M_ACK _L3;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L4 */
  static NID_LRBG _L4;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L5 */
  static T_TRAIN _L5;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L6 */
  static NID_EM _L6;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L7 */
  static Q_SCALE _L7;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L8 */
  static T_TRAIN _L8;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L9 */
  static D_REF _L9;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L10 */
  static Q_DIR _L10;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L11 */
  static D_EMERGENCYSTOP _L11;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L12 */
  static M_VERSION _L12;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L14 */
  static Radio_TrackTrain_Header_T_TM _L14;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L15 */
  static Radio_TrackTrain_Header_T_TM _L15;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L16 */
  static Radio_TrackTrain_Header_T_TM _L16;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L17 */
  static Radio_TrackTrain_Header_T_TM _L17;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L18 */
  static Radio_TrackTrain_Header_T_TM _L18;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L19 */
  static Radio_TrackTrain_Header_T_TM _L19;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L21 */
  static Radio_TrackTrain_Header_T_TM _L21;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L22 */
  static Radio_TrackTrain_Header_T_TM _L22;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L23 */
  static Radio_TrackTrain_Header_T_TM _L23;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L26 */
  static Radio_TrackTrain_Header_T_TM _L26;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L29 */
  static Radio_TrackTrain_Header_T_TM _L29;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L30 */
  static Radio_TrackTrain_Header_T_TM _L30;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::_L41 */
  static Radio_TrackTrain_Header_T_TM _L41;
  
  _L1 = in_NID_MESSAGE;
  _L2 = in_T_TRAIN;
  _L3 = in_M_ACK;
  _L4 = in_NID_LRBG;
  _L5 = in_T_TRAIN_Ref;
  _L6 = in_NID_EM;
  _L7 = in_Q_SCALE;
  _L8 = in_T_TRAIN_Sh;
  _L9 = in_D_REF;
  _L10 = in_Q_DIR;
  _L11 = in_D_EMERGENCYSTOP;
  _L12 = in_M_VERSION;
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &_L41,
    (Radio_TrackTrain_Header_T_TM *) &RADIO_TRACK_TRAIN_HEADER_DEFAULT);
  /* 1 */
  RadioTrackTrainHeader__Set_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L41,
    _L1,
    &_L14);
  /* 1 */
  RadioTrackTrainHeader__Set_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L14,
    _L2,
    &_L15);
  /* 1 */
  RadioTrackTrainHeader__Set_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L15,
    _L3,
    &_L16);
  /* 1 */
  RadioTrackTrainHeader__Set_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L16,
    _L4,
    &_L17);
  /* 1 */
  RadioTrackTrainHeader__Set_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L17,
    _L5,
    &_L18);
  /* 1 */
  RadioTrackTrainHeader__Set_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L18,
    _L6,
    &_L19);
  /* 1 */
  RadioTrackTrainHeader__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L19,
    _L7,
    &_L21);
  /* 1 */
  RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L21,
    _L8,
    &_L22);
  /* 1 */
  RadioTrackTrainHeader__Set_D_REF_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L22,
    _L9,
    &_L23);
  /* 1 */
  RadioTrackTrainHeader__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L23,
    _L10,
    &_L26);
  /* 1 */
  RadioTrackTrainHeader__Set_D_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L26,
    _L11,
    &_L29);
  /* 1 */
  RadioTrackTrainHeader__Set_M_VERSION_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L29,
    _L12,
    &_L30);
  kcg_copy_Radio_TrackTrain_Header_T_TM(outRadioTrackTrainHeader, &_L30);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

