/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkRadioMessages_trainData_pkg.h"

/* trainData_pkg::checkRadioMessages */
void checkRadioMessages_trainData_pkg(
  /* trainData_pkg::checkRadioMessages::trackMessages */ ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  /* trainData_pkg::checkRadioMessages::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::checkRadioMessages::ackReceived */ kcg_bool *ackReceived,
  /* trainData_pkg::checkRadioMessages::ackRequested */ kcg_bool *ackRequested)
{
  /* trainData_pkg::checkRadioMessages::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* trainData_pkg::checkRadioMessages::_L2 */
  static kcg_bool _L2;
  /* trainData_pkg::checkRadioMessages::_L3 */
  static MsgSource_T_Common_Types_Pkg _L3;
  /* trainData_pkg::checkRadioMessages::_L4 */
  static MsgSource_T_Common_Types_Pkg _L4;
  /* trainData_pkg::checkRadioMessages::_L5 */
  static kcg_bool _L5;
  /* trainData_pkg::checkRadioMessages::_L6 */
  static kcg_bool _L6;
  /* trainData_pkg::checkRadioMessages::_L7 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L7;
  /* trainData_pkg::checkRadioMessages::_L8 */
  static ReceivedMessage_T_Common_Types_Pkg _L8;
  /* trainData_pkg::checkRadioMessages::_L9 */
  static kcg_bool _L9;
  /* trainData_pkg::checkRadioMessages::_L10 */
  static NID_MESSAGE _L10;
  /* trainData_pkg::checkRadioMessages::_L12 */
  static NID_MESSAGE _L12;
  /* trainData_pkg::checkRadioMessages::_L13 */
  static kcg_bool _L13;
  /* trainData_pkg::checkRadioMessages::_L14 */
  static T_TRAIN _L14;
  /* trainData_pkg::checkRadioMessages::_L15 */
  static kcg_bool _L15;
  /* trainData_pkg::checkRadioMessages::_L16 */
  static kcg_bool _L16;
  /* trainData_pkg::checkRadioMessages::_L17 */
  static T_TRAIN _L17;
  /* trainData_pkg::checkRadioMessages::_L18 */
  static trainDataStatus_T_trainData_Types_pkg _L18;
  /* trainData_pkg::checkRadioMessages::_L19 */
  static kcg_bool _L19;
  /* trainData_pkg::checkRadioMessages::_L22 */
  static ReceivedMessage_T_Common_Types_Pkg _L22;
  /* trainData_pkg::checkRadioMessages::_L21 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L21;
  /* trainData_pkg::checkRadioMessages::_L20 */
  static M_ACK _L20;
  /* trainData_pkg::checkRadioMessages::_L23 */
  static M_ACK _L23;
  /* trainData_pkg::checkRadioMessages::_L24 */
  static kcg_bool _L24;
  /* trainData_pkg::checkRadioMessages::_L25 */
  static kcg_bool _L25;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, trackMessages);
  _L2 = _L1.valid;
  _L3 = _L1.source;
  _L4 = msrc_Euroradio_Common_Types_Pkg;
  _L5 = _L3 == _L4;
  _L6 = _L2 & _L5;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L8, trackMessages);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L7,
    &_L8.Radio_Common_Header);
  _L10 = _L7.nid_message;
  _L12 = cm08_Acknowledgement_of_Train_Data_Id_Pkg;
  _L9 = _L10 == _L12;
  _L14 = _L7.t_train_reference;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L18, actualStatus);
  _L17 = _L18.timeStampValidateToRBC;
  _L15 = _L14 == _L17;
  _L13 = _L9 & _L15;
  _L16 = _L6 & _L13;
  *ackReceived = _L16;
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
  *ackRequested = _L19;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkRadioMessages_trainData_pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

