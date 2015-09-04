/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _Manage_MA_Request_MA_Request_H_
#define _Manage_MA_Request_MA_Request_H_

#include "kcg_types.h"
#include "Receive_MA_RequestParameters_MA_Request.h"
#include "Build_MA_request_MA_Request.h"
#include "MA_Request_Supervision_MA_Request.h"
#include "Send_MA_MA_Request.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* MA_Request::Manage_MA_Request::message_out */ message_out;
  /* -----------------------   local probes  ------------------------- */
  kcg_bool /* MA_Request::Manage_MA_Request::exception */ exception;
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* MA_Request::Manage_MA_Request::triggerMA */ triggerMA;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* MA_Request::Manage_MA_Request::_L9 */ _L9;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_MA_MA_Request /* 1 */ _3_Context_1;
  outC_Build_MA_request_MA_Request /* 1 */ _2_Context_1;
  outC_MA_Request_Supervision_MA_Request /* 1 */ _1_Context_1;
  outC_Receive_MA_RequestParameters_MA_Request /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* MA_Request::Manage_MA_Request::_L2 */ _L2;
  T_internal_Type_Obu_BasicTypes_Pkg /* MA_Request::Manage_MA_Request::_L3 */ _L3;
  ReceivedMessage_T_Common_Types_Pkg /* MA_Request::Manage_MA_Request::_L5 */ _L5;
  kcg_bool /* MA_Request::Manage_MA_Request::_L6 */ _L6;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* MA_Request::Manage_MA_Request::_L7 */ _L7;
  kcg_bool /* MA_Request::Manage_MA_Request::_L11 */ _L11;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* MA_Request::Manage_MA_Request::_L12 */ _L12;
  kcg_bool /* MA_Request::Manage_MA_Request::_L15 */ _L15;
  L_internal_Type_Obu_BasicTypes_Pkg /* MA_Request::Manage_MA_Request::_L16 */ _L16;
  odometry_T_Obu_BasicTypes_Pkg /* MA_Request::Manage_MA_Request::_L17 */ _L17;
  kcg_bool /* MA_Request::Manage_MA_Request::_L21 */ _L21;
  trainProperties_T_TrainPosition_Types_Pck /* MA_Request::Manage_MA_Request::_L24 */ _L24;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* MA_Request::Manage_MA_Request::_L25 */ _L25;
  kcg_bool /* MA_Request::Manage_MA_Request::_L26 */ _L26;
  MovementAuthority_t_TrackAtlasTypes /* MA_Request::Manage_MA_Request::_L18 */ _L18;
  Driver2MAR_T_MA_Request /* MA_Request::Manage_MA_Request::_L27 */ _L27;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* MA_Request::Manage_MA_Request::_L28 */ _L28;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* MA_Request::Manage_MA_Request::_L29 */ _L29;
  T_TRAIN /* MA_Request::Manage_MA_Request::_L30 */ _L30;
  kcg_bool /* MA_Request::Manage_MA_Request::_L31 */ _L31;
} outC_Manage_MA_Request_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* MA_Request::Manage_MA_Request */
extern void Manage_MA_Request_MA_Request(
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
  outC_Manage_MA_Request_MA_Request *outC);

extern void Manage_MA_Request_reset_MA_Request(
  outC_Manage_MA_Request_MA_Request *outC);

#endif /* _Manage_MA_Request_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_MA_Request_MA_Request.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

