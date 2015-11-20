/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Filter_Messages_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_Filter_Messages */
void ES_Filter_Messages_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Filter_Messages::messageIn */ ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* TA_EmergencyStop::ES_Filter_Messages::receivedMsg15 */ kcg_bool *receivedMsg15,
  /* TA_EmergencyStop::ES_Filter_Messages::receivedMsg16 */ kcg_bool *receivedMsg16,
  /* TA_EmergencyStop::ES_Filter_Messages::receivedMsg18 */ kcg_bool *receivedMsg18)
{
  /* TA_EmergencyStop::ES_Filter_Messages::isValidRadioMsg */
  static kcg_bool isValidRadioMsg;
  /* TA_EmergencyStop::ES_Filter_Messages::_L12 */
  static MsgSource_T_Common_Types_Pkg _L12;
  /* TA_EmergencyStop::ES_Filter_Messages::_L11 */
  static kcg_bool _L11;
  /* TA_EmergencyStop::ES_Filter_Messages::_L10 */
  static kcg_bool _L10;
  /* TA_EmergencyStop::ES_Filter_Messages::_L9 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L9;
  /* TA_EmergencyStop::ES_Filter_Messages::_L8 */
  static MsgSource_T_Common_Types_Pkg _L8;
  /* TA_EmergencyStop::ES_Filter_Messages::_L7 */
  static ReceivedMessage_T_Common_Types_Pkg _L7;
  /* TA_EmergencyStop::ES_Filter_Messages::_L6 */
  static kcg_bool _L6;
  /* TA_EmergencyStop::ES_Filter_Messages::_L5 */
  static ReceivedMessage_T_Common_Types_Pkg _L5;
  /* TA_EmergencyStop::ES_Filter_Messages::_L4 */
  static kcg_bool _L4;
  /* TA_EmergencyStop::ES_Filter_Messages::_L3 */
  static kcg_bool _L3;
  /* TA_EmergencyStop::ES_Filter_Messages::_L2 */
  static NID_MESSAGE _L2;
  /* TA_EmergencyStop::ES_Filter_Messages::_L1 */
  static NID_MESSAGE _L1;
  /* TA_EmergencyStop::ES_Filter_Messages::_L14 */
  static kcg_bool _L14;
  /* TA_EmergencyStop::ES_Filter_Messages::_L21 */
  static NID_MESSAGE _L21;
  /* TA_EmergencyStop::ES_Filter_Messages::_L20 */
  static kcg_bool _L20;
  /* TA_EmergencyStop::ES_Filter_Messages::_L19 */
  static kcg_bool _L19;
  /* TA_EmergencyStop::ES_Filter_Messages::_L17 */
  static kcg_bool _L17;
  /* TA_EmergencyStop::ES_Filter_Messages::_L25 */
  static NID_MESSAGE _L25;
  /* TA_EmergencyStop::ES_Filter_Messages::_L24 */
  static kcg_bool _L24;
  /* TA_EmergencyStop::ES_Filter_Messages::_L23 */
  static kcg_bool _L23;
  /* TA_EmergencyStop::ES_Filter_Messages::_L22 */
  static kcg_bool _L22;
  
  _L1 = cm16_Unconditional_Emergency_Stop_Id_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L5, messageIn);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L9,
    &_L5.Radio_Common_Header);
  _L2 = _L9.nid_message;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L7, messageIn);
  _L8 = _L7.source;
  _L12 = msrc_Euroradio_Common_Types_Pkg;
  _L3 = _L8 == _L12;
  _L11 = _L7.valid;
  _L4 = _L11 & _L3;
  isValidRadioMsg = _L4;
  _L14 = isValidRadioMsg;
  _L10 = _L2 == _L1;
  _L6 = _L14 & _L10;
  *receivedMsg16 = _L6;
  _L21 = cm18_Revocation_of_Emergency_Stop_Id_Pkg;
  _L17 = _L2 == _L21;
  _L20 = isValidRadioMsg;
  _L19 = _L20 & _L17;
  *receivedMsg18 = _L19;
  _L24 = isValidRadioMsg;
  _L25 = cm15_Conditional_Emergency_Stop_Id_Pkg;
  _L23 = _L2 == _L25;
  _L22 = _L24 & _L23;
  *receivedMsg15 = _L22;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Filter_Messages_TA_EmergencyStop.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

