/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */
#ifndef _SendRadioMessage_TrainToT_TM_radio_messages_H_
#define _SendRadioMessage_TrainToT_TM_radio_messages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::ReadPointer */ ReadPointer;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::WritePointer */ WritePointer;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::_L1 */ _L1;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::_L2 */ _L2;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::_L3 */ _L3;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::_L4 */ _L4;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::_L5 */ _L5;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::_L7 */ _L7;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::_L6 */ _L6;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::_L8 */ _L8;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::_L9 */ _L9;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::_L10 */ _L10;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::_L11 */ _L11;
  kcg_int /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::_L12 */ _L12;
} outC_SendRadioMessage_TrainToT_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer */
extern void SendRadioMessage_TrainToT_TM_radio_messages(
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::wait */kcg_bool wait,
  outC_SendRadioMessage_TrainToT_TM_radio_messages *outC);

extern void SendRadioMessage_TrainToT_reset_TM_radio_messages(
  outC_SendRadioMessage_TrainToT_TM_radio_messages *outC);

#endif /* _SendRadioMessage_TrainToT_TM_radio_messages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendRadioMessage_TrainToT_TM_radio_messages.h
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */

