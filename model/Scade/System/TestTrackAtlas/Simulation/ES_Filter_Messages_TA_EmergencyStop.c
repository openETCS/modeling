/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Filter_Messages_TA_EmergencyStop.h"

void ES_Filter_Messages_reset_TA_EmergencyStop(
  outC_ES_Filter_Messages_TA_EmergencyStop *outC)
{
}

/* TA_EmergencyStop::ES_Filter_Messages */
void ES_Filter_Messages_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Filter_Messages::messageIn */ReceivedMessage_T_Common_Types_Pkg *messageIn,
  outC_ES_Filter_Messages_TA_EmergencyStop *outC)
{
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L7, messageIn);
  outC->_L11 = outC->_L7.valid;
  outC->_L8 = outC->_L7.source;
  outC->_L12 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L3 = outC->_L8 == outC->_L12;
  outC->_L4 = outC->_L11 & outC->_L3;
  outC->isValidRadioMsg = outC->_L4;
  outC->_L24 = outC->isValidRadioMsg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L5, messageIn);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L9,
    &outC->_L5.Radio_Common_Header);
  outC->_L2 = outC->_L9.nid_message;
  outC->_L25 = cm15_Conditional_Emergency_Stop_Id_Pkg;
  outC->_L23 = outC->_L2 == outC->_L25;
  outC->_L22 = outC->_L24 & outC->_L23;
  outC->receivedMsg15 = outC->_L22;
  outC->_L20 = outC->isValidRadioMsg;
  outC->_L21 = cm18_Revocation_of_Emergency_Stop_Id_Pkg;
  outC->_L17 = outC->_L2 == outC->_L21;
  outC->_L19 = outC->_L20 & outC->_L17;
  outC->receivedMsg18 = outC->_L19;
  outC->_L14 = outC->isValidRadioMsg;
  outC->_L1 = cm16_Unconditional_Emergency_Stop_Id_Pkg;
  outC->_L10 = outC->_L2 == outC->_L1;
  outC->_L6 = outC->_L14 & outC->_L10;
  outC->receivedMsg16 = outC->_L6;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Filter_Messages_TA_EmergencyStop.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

