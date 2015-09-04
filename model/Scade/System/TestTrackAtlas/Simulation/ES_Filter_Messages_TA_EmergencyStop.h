/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _ES_Filter_Messages_TA_EmergencyStop_H_
#define _ES_Filter_Messages_TA_EmergencyStop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_EmergencyStop::ES_Filter_Messages::receivedMsg15 */ receivedMsg15;
  kcg_bool /* TA_EmergencyStop::ES_Filter_Messages::receivedMsg16 */ receivedMsg16;
  kcg_bool /* TA_EmergencyStop::ES_Filter_Messages::receivedMsg18 */ receivedMsg18;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TA_EmergencyStop::ES_Filter_Messages::isValidRadioMsg */ isValidRadioMsg;
  MsgSource_T_Common_Types_Pkg /* TA_EmergencyStop::ES_Filter_Messages::_L12 */ _L12;
  kcg_bool /* TA_EmergencyStop::ES_Filter_Messages::_L11 */ _L11;
  kcg_bool /* TA_EmergencyStop::ES_Filter_Messages::_L10 */ _L10;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TA_EmergencyStop::ES_Filter_Messages::_L9 */ _L9;
  MsgSource_T_Common_Types_Pkg /* TA_EmergencyStop::ES_Filter_Messages::_L8 */ _L8;
  ReceivedMessage_T_Common_Types_Pkg /* TA_EmergencyStop::ES_Filter_Messages::_L7 */ _L7;
  kcg_bool /* TA_EmergencyStop::ES_Filter_Messages::_L6 */ _L6;
  ReceivedMessage_T_Common_Types_Pkg /* TA_EmergencyStop::ES_Filter_Messages::_L5 */ _L5;
  kcg_bool /* TA_EmergencyStop::ES_Filter_Messages::_L4 */ _L4;
  kcg_bool /* TA_EmergencyStop::ES_Filter_Messages::_L3 */ _L3;
  NID_MESSAGE /* TA_EmergencyStop::ES_Filter_Messages::_L2 */ _L2;
  NID_MESSAGE /* TA_EmergencyStop::ES_Filter_Messages::_L1 */ _L1;
  kcg_bool /* TA_EmergencyStop::ES_Filter_Messages::_L14 */ _L14;
  NID_MESSAGE /* TA_EmergencyStop::ES_Filter_Messages::_L21 */ _L21;
  kcg_bool /* TA_EmergencyStop::ES_Filter_Messages::_L20 */ _L20;
  kcg_bool /* TA_EmergencyStop::ES_Filter_Messages::_L19 */ _L19;
  kcg_bool /* TA_EmergencyStop::ES_Filter_Messages::_L17 */ _L17;
  NID_MESSAGE /* TA_EmergencyStop::ES_Filter_Messages::_L25 */ _L25;
  kcg_bool /* TA_EmergencyStop::ES_Filter_Messages::_L24 */ _L24;
  kcg_bool /* TA_EmergencyStop::ES_Filter_Messages::_L23 */ _L23;
  kcg_bool /* TA_EmergencyStop::ES_Filter_Messages::_L22 */ _L22;
} outC_ES_Filter_Messages_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_Filter_Messages */
extern void ES_Filter_Messages_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Filter_Messages::messageIn */ReceivedMessage_T_Common_Types_Pkg *messageIn,
  outC_ES_Filter_Messages_TA_EmergencyStop *outC);

extern void ES_Filter_Messages_reset_TA_EmergencyStop(
  outC_ES_Filter_Messages_TA_EmergencyStop *outC);

#endif /* _ES_Filter_Messages_TA_EmergencyStop_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Filter_Messages_TA_EmergencyStop.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

