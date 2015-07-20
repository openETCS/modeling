/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */
#ifndef __2_SendRadioMessage_TrainToT_TM_radio_messages_H_
#define __2_SendRadioMessage_TrainToT_TM_radio_messages_H_

#include "kcg_types.h"
#include "_1_SendRadioMessage_TrainToT_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::MessageBus_out */ MessageBus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::_L10 */ _L10;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__1_SendRadioMessage_TrainToT_TM_radio_messages /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::_L4 */ _L4;
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::_L5 */ _L5;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::_L6 */ _L6;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::_L7 */ _L7;
  kcg_bool /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::_L9 */ _L9;
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::_L11 */ _L11;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::_L12 */ _L12;
  kcg_bool /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::_L13 */ _L13;
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::_L14 */ _L14;
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::_L15 */ _L15;
} outC__2_SendRadioMessage_TrainToT_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO */
extern void _2_SendRadioMessage_TrainToT_TM_radio_messages(
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::i */kcg_int i,
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::Acc */M_TrainTrack_Radio_TM_radio_messages *Acc,
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::New_Message */M_TrainTrack_Radio_TM_radio_messages *New_Message,
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::ReadPointer */kcg_int ReadPointer,
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::WritePointer */kcg_int WritePointer,
  outC__2_SendRadioMessage_TrainToT_TM_radio_messages *outC);

extern void _2_SendRadioMessage_TrainToT_reset_TM_radio_messages(
  outC__2_SendRadioMessage_TrainToT_TM_radio_messages *outC);

#endif /* __2_SendRadioMessage_TrainToT_TM_radio_messages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** _2_SendRadioMessage_TrainToT_TM_radio_messages.h
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */

