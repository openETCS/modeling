/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_MA_Request_MA_Request.h"

void Manage_MA_Request_reset_MA_Request(outC_Manage_MA_Request_MA_Request *outC)
{
  outC->init = kcg_true;
  /* 1 */ MA_Request_Supervision_reset_MA_Request(&outC->Context_1);
  /* 1 */ Receive_MA_RequestParameters_reset_MA_Request(&outC->_1_Context_1);
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
  kcg_bool tmp;
  
  /* 1 */
  Receive_MA_RequestParameters_MA_Request(message_in, &outC->_1_Context_1);
  if (outC->init) {
    tmp = kcg_false;
  }
  else {
    tmp = outC->triggerMA;
  }
  /* 1 */
  MA_Request_Supervision_MA_Request(
    &outC->_1_Context_1.MA_RequestParams,
    outC->_1_Context_1.ma_received,
    tmp,
    trainPosition,
    systemTime,
    preindicationLocation,
    odometry,
    MAs,
    fromDriver,
    trackDescrDeleted,
    &outC->Context_1);
  outC->triggerMA = outC->Context_1.triggerMA;
  if (outC->triggerMA) {
    /* 1 */
    Build_MA_request_MA_Request(
      trackDescrDeleted,
      trainProps,
      packet0,
      packet1,
      t_train,
      &outC->_L9);
  }
  else if (outC->init) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->_L9,
      (Radio_TrainTrack_Message_T_Radio_Types_Pkg *) &cPacket132_MA_Request);
  }
  /* 1 */ Send_MA_MA_Request(&outC->_L9, &outC->message_out);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_MA_Request_MA_Request.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

