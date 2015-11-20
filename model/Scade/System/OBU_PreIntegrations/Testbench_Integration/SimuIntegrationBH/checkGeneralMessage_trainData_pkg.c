/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkGeneralMessage_trainData_pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void checkGeneralMessage_init_trainData_pkg(
  outC_checkGeneralMessage_trainData_pkg *outC)
{
  outC->init = kcg_true;
  outC->GeneralMsgReceived = kcg_true;
  outC->ackRequested = kcg_true;
  outC->genMessageReceived = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkGeneralMessage_reset_trainData_pkg(
  outC_checkGeneralMessage_trainData_pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* trainData_pkg::checkGeneralMessage */
void checkGeneralMessage_trainData_pkg(
  /* trainData_pkg::checkGeneralMessage::trackMessages */ ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  outC_checkGeneralMessage_trainData_pkg *outC)
{
  /* trainData_pkg::checkGeneralMessage::GeneralMsgReceived */
  static kcg_bool last_GeneralMsgReceived;
  /* trainData_pkg::checkGeneralMessage::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* trainData_pkg::checkGeneralMessage::_L2 */
  static kcg_bool _L2;
  /* trainData_pkg::checkGeneralMessage::_L3 */
  static MsgSource_T_Common_Types_Pkg _L3;
  /* trainData_pkg::checkGeneralMessage::_L4 */
  static MsgSource_T_Common_Types_Pkg _L4;
  /* trainData_pkg::checkGeneralMessage::_L5 */
  static kcg_bool _L5;
  /* trainData_pkg::checkGeneralMessage::_L6 */
  static kcg_bool _L6;
  /* trainData_pkg::checkGeneralMessage::_L7 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L7;
  /* trainData_pkg::checkGeneralMessage::_L8 */
  static ReceivedMessage_T_Common_Types_Pkg _L8;
  /* trainData_pkg::checkGeneralMessage::_L9 */
  static kcg_bool _L9;
  /* trainData_pkg::checkGeneralMessage::_L10 */
  static NID_MESSAGE _L10;
  /* trainData_pkg::checkGeneralMessage::_L16 */
  static kcg_bool _L16;
  /* trainData_pkg::checkGeneralMessage::_L19 */
  static kcg_bool _L19;
  /* trainData_pkg::checkGeneralMessage::_L21 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L21;
  /* trainData_pkg::checkGeneralMessage::_L20 */
  static M_ACK _L20;
  /* trainData_pkg::checkGeneralMessage::_L23 */
  static M_ACK _L23;
  /* trainData_pkg::checkGeneralMessage::_L24 */
  static kcg_bool _L24;
  /* trainData_pkg::checkGeneralMessage::_L25 */
  static kcg_bool _L25;
  /* trainData_pkg::checkGeneralMessage::_L26 */
  static NID_MESSAGE _L26;
  /* trainData_pkg::checkGeneralMessage::_L22 */
  static ReceivedMessage_T_Common_Types_Pkg _L22;
  /* trainData_pkg::checkGeneralMessage::_L27 */
  static kcg_bool _L27;
  /* trainData_pkg::checkGeneralMessage::_L28 */
  static kcg_bool _L28;
  /* trainData_pkg::checkGeneralMessage::_L30 */
  static kcg_bool _L30;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, trackMessages);
  _L2 = _L1.valid;
  _L3 = _L1.source;
  _L4 = msrc_Euroradio_Common_Types_Pkg;
  _L5 = _L3 == _L4;
  _L6 = _L2 & _L5;
  /* last_init_ck_GeneralMsgReceived */ if (outC->init) {
    last_GeneralMsgReceived = kcg_false;
  }
  else {
    last_GeneralMsgReceived = outC->GeneralMsgReceived;
  }
  _L28 = last_GeneralMsgReceived;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L8, trackMessages);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L7,
    &_L8.Radio_Common_Header);
  _L10 = _L7.nid_message;
  _L26 = cm24_General_Message_Id_Pkg;
  _L9 = _L10 == _L26;
  _L16 = _L6 & _L9;
  _L27 = _L28 | _L16;
  outC->GeneralMsgReceived = _L27;
  _L30 = outC->GeneralMsgReceived;
  outC->genMessageReceived = _L30;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L22, trackMessages);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L21,
    &_L22.Radio_Common_Header);
  _L20 = _L21.m_ack;
  _L23 = M_ACK_Acknowledgement_required;
  _L24 = _L20 == _L23;
  _L25 = kcg_false;
  /* 1 */ if (_L16) {
    _L19 = _L24;
  }
  else {
    _L19 = _L25;
  }
  outC->ackRequested = _L19;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkGeneralMessage_trainData_pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

