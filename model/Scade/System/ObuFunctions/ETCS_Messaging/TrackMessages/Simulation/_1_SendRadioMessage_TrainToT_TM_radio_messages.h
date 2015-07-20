/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */
#ifndef __1_SendRadioMessage_TrainToT_TM_radio_messages_H_
#define __1_SendRadioMessage_TrainToT_TM_radio_messages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack_Storage::Message_out */ Message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrack_Radio_TM_radio_messages /* TM_radio_messages::SendRadioMessage_TrainToTrack_Storage::_L1 */ _L1;
} outC__1_SendRadioMessage_TrainToT_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::SendRadioMessage_TrainToTrack_Storage */
extern void _1_SendRadioMessage_TrainToT_TM_radio_messages(
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_Storage::New_Message */M_TrainTrack_Radio_TM_radio_messages *New_Message,
  outC__1_SendRadioMessage_TrainToT_TM_radio_messages *outC);

extern void _1_SendRadioMessage_TrainToT_reset_TM_radio_messages(
  outC__1_SendRadioMessage_TrainToT_TM_radio_messages *outC);

#endif /* __1_SendRadioMessage_TrainToT_TM_radio_messages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** _1_SendRadioMessage_TrainToT_TM_radio_messages.h
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */

