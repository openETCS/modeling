/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkAcknowledgmentGeneral_trainData_pkg.h"

/* trainData_pkg::checkAcknowledgmentGeneral */
void checkAcknowledgmentGeneral_trainData_pkg(
  /* trainData_pkg::checkAcknowledgmentGeneral::trackMessages */ ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  /* trainData_pkg::checkAcknowledgmentGeneral::ackReceived */ kcg_bool *ackReceived,
  /* trainData_pkg::checkAcknowledgmentGeneral::ackRequested */ kcg_bool *ackRequested)
{
  /* trainData_pkg::checkAcknowledgmentGeneral::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L2 */
  static kcg_bool _L2;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L3 */
  static MsgSource_T_Common_Types_Pkg _L3;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L4 */
  static MsgSource_T_Common_Types_Pkg _L4;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L5 */
  static kcg_bool _L5;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L6 */
  static kcg_bool _L6;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L7 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L7;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L8 */
  static ReceivedMessage_T_Common_Types_Pkg _L8;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L9 */
  static kcg_bool _L9;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L10 */
  static NID_MESSAGE _L10;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L12 */
  static NID_MESSAGE _L12;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L16 */
  static kcg_bool _L16;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L22 */
  static ReceivedMessage_T_Common_Types_Pkg _L22;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L21 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L21;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L20 */
  static M_ACK _L20;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L23 */
  static M_ACK _L23;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L24 */
  static kcg_bool _L24;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L27 */
  static NID_MESSAGE _L27;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L25 */
  static kcg_bool _L25;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L28 */
  static NID_MESSAGE _L28;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L29 */
  static kcg_bool _L29;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L32 */
  static NID_MESSAGE _L32;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L31 */
  static NID_MESSAGE _L31;
  /* trainData_pkg::checkAcknowledgmentGeneral::_L30 */
  static kcg_bool _L30;
  
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
  _L12 = cm24_General_Message_Id_Pkg;
  _L9 = _L10 == _L12;
  _L27 = _L7.nid_message;
  _L28 = cm03_Movement_Authority_Id_Pkg;
  _L25 = _L27 == _L28;
  _L32 = _L7.nid_message;
  _L31 = cm15_Conditional_Emergency_Stop_Id_Pkg;
  _L30 = _L32 == _L31;
  _L29 = _L9 | _L25 | _L30;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L22, trackMessages);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L21,
    &_L22.Radio_Common_Header);
  _L20 = _L21.m_ack;
  _L23 = M_ACK_Acknowledgement_required;
  _L24 = _L20 == _L23;
  _L16 = _L6 & _L29 & _L24;
  *ackReceived = _L16;
  *ackRequested = _L16;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkAcknowledgmentGeneral_trainData_pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

