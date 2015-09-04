/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_ExtractMsgParams_TA_EmergencyStop.h"

void ES_ExtractMsgParams_reset_TA_EmergencyStop(
  outC_ES_ExtractMsgParams_TA_EmergencyStop *outC)
{
}

/* TA_EmergencyStop::ES_ExtractMsgParams */
void ES_ExtractMsgParams_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_ExtractMsgParams::messageIn */ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* TA_EmergencyStop::ES_ExtractMsgParams::receivedESMsg */kcg_bool receivedESMsg,
  outC_ES_ExtractMsgParams_TA_EmergencyStop *outC)
{
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, messageIn);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L2,
    &outC->_L1.Radio_Common_Header);
  outC->_L12 = outC->_L2.d_emergencystop;
  outC->_L11 = outC->_L2.q_dir;
  outC->_L10 = outC->_L2.d_ref;
  outC->d_emergencystop = outC->_L12;
  outC->q_dir = outC->_L11;
  outC->d_ref = outC->_L10;
  outC->_L7 = outC->_L2.q_scale;
  outC->q_scale = outC->_L7;
  outC->_L6 = receivedESMsg;
  outC->_L5 = cNID_EM_NONE_TA_EmergencyStop;
  outC->_L3 = outC->_L2.nid_em;
  if (outC->_L6) {
    outC->_L4 = outC->_L3;
  }
  else {
    outC->_L4 = outC->_L5;
  }
  outC->nid_em = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_ExtractMsgParams_TA_EmergencyStop.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

