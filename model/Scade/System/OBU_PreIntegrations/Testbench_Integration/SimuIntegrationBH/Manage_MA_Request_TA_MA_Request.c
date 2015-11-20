/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_MA_Request_TA_MA_Request.h"

#ifndef KCG_USER_DEFINED_INIT
void Manage_MA_Request_init_TA_MA_Request(
  outC_Manage_MA_Request_TA_MA_Request *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->exception = kcg_true;
  outC->init = kcg_true;
  outC->triggerMA = kcg_true;
  for (i1 = 0; i1 < 5; i1++) {
    outC->bus_out[i1].Message.valid = kcg_true;
    outC->bus_out[i1].Message.nid_message = 0;
    outC->bus_out[i1].Message.l_message = 0;
    outC->bus_out[i1].Message.t_train = 0;
    outC->bus_out[i1].Message.nid_engine = 0;
    outC->bus_out[i1].Message.field1 = 0;
    outC->bus_out[i1].Message.field2 = 0;
    outC->bus_out[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->bus_out[i1].OptionalPackets[i] = 0;
    }
  }
  /* 1 */ Build_MA_request_init_TA_MA_Request(&outC->_2_Context_1);
  /* 1 */ MA_Request_Supervision_init_TA_MA_Request(&outC->_1_Context_1);
  /* 1 */ Receive_MA_RequestParameters_init_TA_MA_Request(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Manage_MA_Request_reset_TA_MA_Request(
  outC_Manage_MA_Request_TA_MA_Request *outC)
{
  outC->init = kcg_true;
  /* 1 */ Build_MA_request_reset_TA_MA_Request(&outC->_2_Context_1);
  /* 1 */ MA_Request_Supervision_reset_TA_MA_Request(&outC->_1_Context_1);
  /* 1 */ Receive_MA_RequestParameters_reset_TA_MA_Request(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_Request::Manage_MA_Request */
void Manage_MA_Request_TA_MA_Request(
  /* TA_MA_Request::Manage_MA_Request::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* TA_MA_Request::Manage_MA_Request::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* TA_MA_Request::Manage_MA_Request::message_in */ ReceivedMessage_T_Common_Types_Pkg *message_in,
  /* TA_MA_Request::Manage_MA_Request::preindicationLocation */ L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* TA_MA_Request::Manage_MA_Request::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TA_MA_Request::Manage_MA_Request::MAs */ MovementAuthority_t_TrackAtlasTypes *MAs,
  /* TA_MA_Request::Manage_MA_Request::fromDriver */ Driver2MAR_T_TA_MA_Request *fromDriver,
  /* TA_MA_Request::Manage_MA_Request::trackDescrDeleted */ kcg_bool trackDescrDeleted,
  /* TA_MA_Request::Manage_MA_Request::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_MA_Request::Manage_MA_Request::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_MA_Request::Manage_MA_Request::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_MA_Request::Manage_MA_Request::t_train */ T_TRAIN t_train,
  /* TA_MA_Request::Manage_MA_Request::bus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  /* TA_MA_Request::Manage_MA_Request::modeLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *modeLevel,
  outC_Manage_MA_Request_TA_MA_Request *outC)
{
  /* TA_MA_Request::Manage_MA_Request */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus op_call;
  /* TA_MA_Request::Manage_MA_Request */
  static kcg_bool ck_every;
  static kcg_bool noname;
  /* TA_MA_Request::Manage_MA_Request::triggerMA */
  static kcg_bool last_triggerMA;
  /* TA_MA_Request::Manage_MA_Request::_L2 */
  static trainPosition_T_TrainPosition_Types_Pck _L2;
  /* TA_MA_Request::Manage_MA_Request::_L3 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* TA_MA_Request::Manage_MA_Request::_L5 */
  static ReceivedMessage_T_Common_Types_Pkg _L5;
  /* TA_MA_Request::Manage_MA_Request::_L6 */
  static kcg_bool _L6;
  /* TA_MA_Request::Manage_MA_Request::_L7 */
  static P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg _L7;
  /* TA_MA_Request::Manage_MA_Request::_L11 */
  static kcg_bool _L11;
  /* TA_MA_Request::Manage_MA_Request::_L15 */
  static kcg_bool _L15;
  /* TA_MA_Request::Manage_MA_Request::_L16 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L16;
  /* TA_MA_Request::Manage_MA_Request::_L17 */
  static odometry_T_Obu_BasicTypes_Pkg _L17;
  /* TA_MA_Request::Manage_MA_Request::_L21 */
  static kcg_bool _L21;
  /* TA_MA_Request::Manage_MA_Request::_L24 */
  static trainProperties_T_TrainPosition_Types_Pck _L24;
  /* TA_MA_Request::Manage_MA_Request::_L26 */
  static kcg_bool _L26;
  /* TA_MA_Request::Manage_MA_Request::_L18 */
  static MovementAuthority_t_TrackAtlasTypes _L18;
  /* TA_MA_Request::Manage_MA_Request::_L27 */
  static Driver2MAR_T_TA_MA_Request _L27;
  /* TA_MA_Request::Manage_MA_Request::_L28 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L28;
  /* TA_MA_Request::Manage_MA_Request::_L29 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L29;
  /* TA_MA_Request::Manage_MA_Request::_L30 */
  static T_TRAIN _L30;
  /* TA_MA_Request::Manage_MA_Request::_L31 */
  static kcg_bool _L31;
  /* TA_MA_Request::Manage_MA_Request::_L32 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L32;
  /* TA_MA_Request::Manage_MA_Request::_L33 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L33;
  /* TA_MA_Request::Manage_MA_Request::_L34 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L34;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L5, message_in);
  /* 1 */ Receive_MA_RequestParameters_TA_MA_Request(&_L5, &outC->Context_1);
  _L6 = outC->Context_1.IsNew;
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &_L7,
    &outC->Context_1.MA_RequestParams);
  _L26 = outC->Context_1.ma_received;
  /* last_init_ck_triggerMA */ if (outC->init) {
    last_triggerMA = kcg_false;
  }
  else {
    last_triggerMA = outC->triggerMA;
  }
  _L15 = last_triggerMA;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L2, trainPosition);
  _L3 = systemTime;
  _L16 = preindicationLocation;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L17, odometry);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L18, MAs);
  kcg_copy_Driver2MAR_T_TA_MA_Request(&_L27, fromDriver);
  _L21 = trackDescrDeleted;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L34, modeLevel);
  /* 1 */
  MA_Request_Supervision_TA_MA_Request(
    &_L7,
    _L26,
    _L15,
    &_L2,
    _L3,
    _L16,
    &_L17,
    &_L18,
    &_L27,
    _L21,
    &_L34,
    &outC->_1_Context_1);
  _L11 = outC->_1_Context_1.triggerMA;
  _L31 = outC->_1_Context_1.exception;
  ck_every = _L11;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L24, trainProps);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L28, packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L29, packet1);
  _L30 = t_train;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L33, bus_in);
  /* ck_Manage_MA_Request */ if (ck_every) {
    /* 1 */
    Build_MA_request_TA_MA_Request(
      _L21,
      &_L24,
      &_L28,
      &_L29,
      _L30,
      &_L33,
      &outC->_2_Context_1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &op_call,
      &outC->_2_Context_1.bus_out);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L32, &op_call);
  }
  else {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L32, &_L33);
  }
  outC->triggerMA = _L11;
  noname = _L6;
  outC->exception = _L31;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->bus_out, &_L32);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Manage_MA_Request_TA_MA_Request.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

