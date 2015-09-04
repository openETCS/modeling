/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_ReceiveAndControl_TA_EmergencyStop.h"

void ES_ReceiveAndControl_reset_TA_EmergencyStop(
  outC_ES_ReceiveAndControl_TA_EmergencyStop *outC)
{
  /* 1 */ ES_Filter_Messages_reset_TA_EmergencyStop(&outC->Context_1);
}

/* TA_EmergencyStop::ES_ReceiveAndControl */
void ES_ReceiveAndControl_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_ReceiveAndControl::messageIn */ReceivedMessage_T_Common_Types_Pkg *messageIn,
  outC_ES_ReceiveAndControl_TA_EmergencyStop *outC)
{
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L23, messageIn);
  /* 1 */ ES_Filter_Messages_TA_EmergencyStop(&outC->_L23, &outC->Context_1);
  outC->_L28 = outC->Context_1.receivedMsg15;
  outC->_L24 = outC->Context_1.receivedMsg16;
  outC->_L25 = outC->Context_1.receivedMsg18;
  outC->receivedMsg15 = outC->_L28;
  outC->_L26 = outC->_L28 | outC->_L24;
  outC->sendMsg147 = outC->_L26;
  outC->receivedMsg18 = outC->_L25;
  outC->receivedMsg16 = outC->_L24;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_ReceiveAndControl_TA_EmergencyStop.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

