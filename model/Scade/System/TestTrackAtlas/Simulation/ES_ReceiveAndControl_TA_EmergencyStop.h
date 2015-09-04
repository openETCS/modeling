/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _ES_ReceiveAndControl_TA_EmergencyStop_H_
#define _ES_ReceiveAndControl_TA_EmergencyStop_H_

#include "kcg_types.h"
#include "ES_Filter_Messages_TA_EmergencyStop.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_EmergencyStop::ES_ReceiveAndControl::receivedMsg15 */ receivedMsg15;
  kcg_bool /* TA_EmergencyStop::ES_ReceiveAndControl::receivedMsg16 */ receivedMsg16;
  kcg_bool /* TA_EmergencyStop::ES_ReceiveAndControl::receivedMsg18 */ receivedMsg18;
  kcg_bool /* TA_EmergencyStop::ES_ReceiveAndControl::sendMsg147 */ sendMsg147;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ES_Filter_Messages_TA_EmergencyStop /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* TA_EmergencyStop::ES_ReceiveAndControl::_L23 */ _L23;
  kcg_bool /* TA_EmergencyStop::ES_ReceiveAndControl::_L25 */ _L25;
  kcg_bool /* TA_EmergencyStop::ES_ReceiveAndControl::_L24 */ _L24;
  kcg_bool /* TA_EmergencyStop::ES_ReceiveAndControl::_L26 */ _L26;
  kcg_bool /* TA_EmergencyStop::ES_ReceiveAndControl::_L28 */ _L28;
} outC_ES_ReceiveAndControl_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_ReceiveAndControl */
extern void ES_ReceiveAndControl_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_ReceiveAndControl::messageIn */ReceivedMessage_T_Common_Types_Pkg *messageIn,
  outC_ES_ReceiveAndControl_TA_EmergencyStop *outC);

extern void ES_ReceiveAndControl_reset_TA_EmergencyStop(
  outC_ES_ReceiveAndControl_TA_EmergencyStop *outC);

#endif /* _ES_ReceiveAndControl_TA_EmergencyStop_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_ReceiveAndControl_TA_EmergencyStop.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

