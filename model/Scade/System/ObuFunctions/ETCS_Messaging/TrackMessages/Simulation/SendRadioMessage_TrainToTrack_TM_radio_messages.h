/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */
#ifndef _SendRadioMessage_TrainToTrack_TM_radio_messages_H_
#define _SendRadioMessage_TrainToTrack_TM_radio_messages_H_

#include "kcg_types.h"
#include "_3_SendRadioMessage_TrainToT_TM_radio_messages.h"

/* ========================  input structure  ====================== */
typedef struct {
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack::New_Message */ New_Message;
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack::MessageBus */ MessageBus;
} inC_SendRadioMessage_TrainToTrack_TM_radio_messages;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack::MessageBus_out */ MessageBus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__3_SendRadioMessage_TrainToT_TM_radio_messages /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack::_L1 */ _L1;
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack::_L2 */ _L2;
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack::_L3 */ _L3;
  kcg_bool /* TM_radio_messages::SendRadioMessage_TrainToTrack::_L20 */ _L20;
  kcg_bool /* TM_radio_messages::SendRadioMessage_TrainToTrack::_L21 */ _L21;
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack::_L22 */ _L22;
  kcg_bool /* TM_radio_messages::SendRadioMessage_TrainToTrack::_L23 */ _L23;
} outC_SendRadioMessage_TrainToTrack_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::SendRadioMessage_TrainToTrack */
extern void SendRadioMessage_TrainToTrack_TM_radio_messages(
  inC_SendRadioMessage_TrainToTrack_TM_radio_messages *inC,
  outC_SendRadioMessage_TrainToTrack_TM_radio_messages *outC);

extern void SendRadioMessage_TrainToTrack_reset_TM_radio_messages(
  outC_SendRadioMessage_TrainToTrack_TM_radio_messages *outC);

#endif /* _SendRadioMessage_TrainToTrack_TM_radio_messages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendRadioMessage_TrainToTrack_TM_radio_messages.h
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */

