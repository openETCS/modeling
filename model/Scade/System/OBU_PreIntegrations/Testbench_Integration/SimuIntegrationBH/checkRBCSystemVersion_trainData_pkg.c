/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkRBCSystemVersion_trainData_pkg.h"

/* trainData_pkg::checkRBCSystemVersion */
void checkRBCSystemVersion_trainData_pkg(
  /* trainData_pkg::checkRBCSystemVersion::trackMessages */ ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  /* trainData_pkg::checkRBCSystemVersion::lastStatus */ trainDataStatus_T_trainData_Types_pkg *lastStatus,
  /* trainData_pkg::checkRBCSystemVersion::updatedStatus */ trainDataStatus_T_trainData_Types_pkg *updatedStatus)
{
  /* trainData_pkg::checkRBCSystemVersion::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* trainData_pkg::checkRBCSystemVersion::_L2 */
  static kcg_bool _L2;
  /* trainData_pkg::checkRBCSystemVersion::_L3 */
  static MsgSource_T_Common_Types_Pkg _L3;
  /* trainData_pkg::checkRBCSystemVersion::_L4 */
  static MsgSource_T_Common_Types_Pkg _L4;
  /* trainData_pkg::checkRBCSystemVersion::_L5 */
  static kcg_bool _L5;
  /* trainData_pkg::checkRBCSystemVersion::_L6 */
  static kcg_bool _L6;
  /* trainData_pkg::checkRBCSystemVersion::_L7 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L7;
  /* trainData_pkg::checkRBCSystemVersion::_L8 */
  static ReceivedMessage_T_Common_Types_Pkg _L8;
  /* trainData_pkg::checkRBCSystemVersion::_L9 */
  static kcg_bool _L9;
  /* trainData_pkg::checkRBCSystemVersion::_L10 */
  static NID_MESSAGE _L10;
  /* trainData_pkg::checkRBCSystemVersion::_L12 */
  static NID_MESSAGE _L12;
  /* trainData_pkg::checkRBCSystemVersion::_L26 */
  static kcg_bool _L26;
  /* trainData_pkg::checkRBCSystemVersion::_L27 */
  static trainDataStatus_T_trainData_Types_pkg _L27;
  /* trainData_pkg::checkRBCSystemVersion::_L28 */
  static trainDataStatus_T_trainData_Types_pkg _L28;
  /* trainData_pkg::checkRBCSystemVersion::_L29 */
  static kcg_bool _L29;
  /* trainData_pkg::checkRBCSystemVersion::_L30 */
  static trainDataStatus_T_trainData_Types_pkg _L30;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, trackMessages);
  _L2 = _L1.valid;
  _L3 = _L1.source;
  _L4 = msrc_Euroradio_Common_Types_Pkg;
  _L5 = _L3 == _L4;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L8, trackMessages);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L7,
    &_L8.Radio_Common_Header);
  _L10 = _L7.nid_message;
  _L12 = cm32_RBC_RIU_System_Version_Id_Pkg;
  _L9 = _L10 == _L12;
  _L6 = _L2 & _L5 & _L9;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L28, lastStatus);
  _L29 = _L28.RBCsystemVersionOnboard;
  _L26 = _L6 | _L29;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L27, lastStatus);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L30, &_L27);
  if (kcg_true) {
    _L30.RBCsystemVersionOnboard = _L26;
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(updatedStatus, &_L30);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkRBCSystemVersion_trainData_pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

