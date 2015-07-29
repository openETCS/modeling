/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_MA_Request_MA_Request.h"

void Manage_MA_Request_reset_MA_Request(outC_Manage_MA_Request_MA_Request *outC)
{
  outC->init = kcg_true;
  /* 1 */ Send_MA_reset_MA_Request(&outC->_3_Context_1);
  /* 1 */ Build_MA_request_reset_MA_Request(&outC->_2_Context_1);
  /* 1 */ MA_Request_Supervision_reset_MA_Request(&outC->_1_Context_1);
  /* 1 */ Receive_MA_RequestParameters_reset_MA_Request(&outC->Context_1);
}

/* MA_Request::Manage_MA_Request */
void Manage_MA_Request_MA_Request(
  /* MA_Request::Manage_MA_Request::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* MA_Request::Manage_MA_Request::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* MA_Request::Manage_MA_Request::message_in */ReceivedMessage_T_Common_Types_Pkg *message_in,
  /* MA_Request::Manage_MA_Request::preindicationLocation */L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* MA_Request::Manage_MA_Request::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* MA_Request::Manage_MA_Request::MAs */MovementAuthority_t_TrackAtlasTypes *MAs,
  /* MA_Request::Manage_MA_Request::fromDriver */Driver2MAR_T_MA_Request *fromDriver,
  /* MA_Request::Manage_MA_Request::trackDescrDeleted */kcg_bool trackDescrDeleted,
  /* MA_Request::Manage_MA_Request::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* MA_Request::Manage_MA_Request::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* MA_Request::Manage_MA_Request::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* MA_Request::Manage_MA_Request::t_train */T_TRAIN t_train,
  outC_Manage_MA_Request_MA_Request *outC)
{
  Radio_TrainTrack_Message_T_Radio_Types_Pkg tmp;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg tmp1;
  kcg_bool noname;
  /* MA_Request::Manage_MA_Request::triggerMA */ kcg_bool last_triggerMA;
  
  if (outC->init) {
    last_triggerMA = kcg_false;
  }
  else {
    last_triggerMA = outC->triggerMA;
  }
  outC->_L30 = t_train;
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L29, packet1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L28, packet0);
  kcg_copy_Driver2MAR_T_MA_Request(&outC->_L27, fromDriver);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L18, MAs);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L5, message_in);
  /* 1 */ Receive_MA_RequestParameters_MA_Request(&outC->_L5, &outC->Context_1);
  outC->_L6 = outC->Context_1.IsNew;
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->_L7,
    &outC->Context_1.MA_RequestParams);
  outC->_L26 = outC->Context_1.ma_received;
  noname = outC->_L6;
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L25,
    (Radio_TrainTrack_Message_T_Radio_Types_Pkg *) &cPacket132_MA_Request);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L24, trainProps);
  outC->_L21 = trackDescrDeleted;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L17, odometry);
  outC->_L16 = preindicationLocation;
  outC->_L15 = last_triggerMA;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L2, trainPosition);
  outC->_L3 = systemTime;
  /* 1 */
  MA_Request_Supervision_MA_Request(
    &outC->_L7,
    outC->_L26,
    outC->_L15,
    &outC->_L2,
    outC->_L3,
    outC->_L16,
    &outC->_L17,
    &outC->_L18,
    &outC->_L27,
    outC->_L21,
    &outC->_1_Context_1);
  outC->_L11 = outC->_1_Context_1.triggerMA;
  outC->triggerMA = outC->_L11;
  outC->tmp = outC->_L11;
  if (outC->tmp) {
    /* 1 */
    Build_MA_request_MA_Request(
      outC->_L21,
      &outC->_L24,
      &outC->_L28,
      &outC->_L29,
      outC->_L30,
      &outC->_2_Context_1);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &tmp1,
      &outC->_2_Context_1.message132);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&outC->_L9, &tmp1);
  }
  else {
    if (outC->init) {
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&tmp, &outC->_L25);
    }
    else {
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&tmp, &outC->_L9);
    }
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&outC->_L9, &tmp);
  }
  /* 1 */ Send_MA_MA_Request(&outC->_L9, &outC->_3_Context_1);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L12,
    &outC->_3_Context_1.message_out);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->message_out,
    &outC->_L12);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_MA_Request_MA_Request.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

