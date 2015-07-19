/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */
#ifndef __3_SendRadioMessage_TrainToT_TM_radio_messages_H_
#define __3_SendRadioMessage_TrainToT_TM_radio_messages_H_

#include "kcg_types.h"
#include "_2_SendRadioMessage_TrainToT_TM_radio_messages.h"
#include "SendRadioMessage_TrainToT_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer::MessageBus_out */ MessageBus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__2_SendRadioMessage_TrainToT_TM_radio_messages /* 1 */ _1_Context_1[20];
  outC_SendRadioMessage_TrainToT_TM_radio_messages /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer::_L1 */ _L1;
  kcg_bool /* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer::_L3 */ _L3;
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer::_L4 */ _L4;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer::_L5 */ _L5;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer::_L6 */ _L6;
  array_int_20 /* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer::_L8 */ _L8;
  array_int_20 /* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer::_L9 */ _L9;
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer::_L10 */ _L10;
  array__258 /* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer::_L11 */ _L11;
} outC__3_SendRadioMessage_TrainToT_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer */
extern void _3_SendRadioMessage_TrainToT_TM_radio_messages(
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer::New_Message */M_TrainTrack_Radio_TM_radio_messages *New_Message,
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer::Wait */kcg_bool Wait,
  outC__3_SendRadioMessage_TrainToT_TM_radio_messages *outC);

extern void _3_SendRadioMessage_TrainToT_reset_TM_radio_messages(
  outC__3_SendRadioMessage_TrainToT_TM_radio_messages *outC);

#endif /* __3_SendRadioMessage_TrainToT_TM_radio_messages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** _3_SendRadioMessage_TrainToT_TM_radio_messages.h
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */

