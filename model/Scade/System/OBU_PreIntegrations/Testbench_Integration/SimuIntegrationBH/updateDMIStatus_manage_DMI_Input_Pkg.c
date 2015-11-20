/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "updateDMIStatus_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::updateDMIStatus */
void updateDMIStatus_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::updateDMIStatus::oldStatus */ DMI_EVC_status_T_DMI_Types_Pkg *oldStatus,
  /* manage_DMI_Input_Pkg::updateDMIStatus::fromDMI */ DMI_to_EVC_Message_T_API_DMI_Pkg *fromDMI,
  /* manage_DMI_Input_Pkg::updateDMIStatus::sndValidationRequested */ kcg_bool sndValidationRequested,
  /* manage_DMI_Input_Pkg::updateDMIStatus::newStatus */ DMI_EVC_status_T_DMI_Types_Pkg *newStatus)
{
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L1 */
  static DMI_to_EVC_Message_T_API_DMI_Pkg _L1;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L2 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L2;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L3 */
  static kcg_bool _L3;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L4 */
  static kcg_bool _L4;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L5 */
  static kcg_bool _L5;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L15 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L15;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L16 */
  static kcg_bool _L16;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L17 */
  static kcg_bool _L17;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L18 */
  static kcg_bool _L18;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L19 */
  static kcg_bool _L19;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L20 */
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg _L20;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L21 */
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg _L21;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L22 */
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg _L22;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L24 */
  static kcg_bool _L24;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L23 */
  static kcg_bool _L23;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L25 */
  static kcg_bool _L25;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L28 */
  static kcg_bool _L28;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L31 */
  static kcg_bool _L31;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L30 */
  static kcg_bool _L30;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L29 */
  static kcg_bool _L29;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L34 */
  static kcg_bool _L34;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L33 */
  static kcg_bool _L33;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L32 */
  static kcg_bool _L32;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L46 */
  static kcg_bool _L46;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L47 */
  static kcg_bool _L47;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L48 */
  static kcg_bool _L48;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L49 */
  static kcg_bool _L49;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L63 */
  static kcg_bool _L63;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L62 */
  static kcg_bool _L62;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L65 */
  static kcg_bool _L65;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L66 */
  static kcg_bool _L66;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L67 */
  static kcg_bool _L67;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L70 */
  static kcg_bool _L70;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L69 */
  static kcg_bool _L69;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L68 */
  static kcg_bool _L68;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L71 */
  static DMI_Request_T_DMI_Types_Pkg _L71;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L72 */
  static kcg_bool _L72;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L73 */
  static DMI_Request_T_DMI_Types_Pkg _L73;
  /* manage_DMI_Input_Pkg::updateDMIStatus::_L74 */
  static kcg_bool _L74;
  
  kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(&_L1, fromDMI);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&_L2, oldStatus);
  _L3 = _L1.present;
  _L4 = _L2.DMI_Active;
  _L5 = _L3 | _L4;
  _L16 = kcg_false;
  _L18 = _L2.DMI_DriverIdValidated;
  _L17 = _L1.driverIdentifier.valid;
  _L19 = _L18 | _L17;
  _L69 = _L2.DMI_LevelSelectedByDirver;
  _L70 = _L1.selectedLevel.valid;
  _L68 = _L69 | _L70;
  _L24 = _L2.DMI_TrainRunningNumberFirstValidation;
  _L46 = sndValidationRequested;
  _L48 = !_L46;
  _L23 = _L1.trainRunningNumber.valid;
  _L47 = _L48 & _L23;
  _L25 = _L24 | _L47;
  _L31 = _L1.trainRunningNumber.valid;
  _L67 = sndValidationRequested;
  _L49 = _L31 & _L67;
  _L29 = _L2.DMI_TrainRunningNumberValidated;
  _L30 = _L49 | _L29;
  _L63 = _L1.trainDataAck.valid;
  _L65 = _L1.trainDataAck.acknowledged;
  _L62 = _L2.DMI_TrainDataValidated;
  /* 2 */ if (_L63) {
    _L66 = _L65;
  }
  else {
    _L66 = _L62;
  }
  _L33 = _L2.DMI_StartReceived;
  _L32 = _L1.driverRequest.valid;
  _L71 = _L1.driverRequest.m_request;
  _L73 = Start_of_mission_DMI_Types_Pkg;
  _L72 = _L71 == _L73;
  _L74 = _L32 & _L72;
  _L34 = _L33 | _L74;
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(&_L21, &_L1.identifier);
  _L28 = _L21.valid;
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L22,
    &_L2.DMI_Identifier);
  /* 1 */ if (_L28) {
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(&_L20, &_L21);
  }
  else {
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(&_L20, &_L22);
  }
  _L15.DMI_Active = _L5;
  _L15.DMI_Error = _L16;
  _L15.DMI_DriverIdValidated = _L19;
  _L15.DMI_LevelSelectedByDirver = _L68;
  _L15.DMI_TrainRunningNumberFirstValidation = _L25;
  _L15.DMI_TrainRunningNumberValidated = _L30;
  _L15.DMI_TrainDataValidated = _L66;
  _L15.DMI_StartReceived = _L34;
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L15.DMI_Identifier,
    &_L20);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(newStatus, &_L15);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** updateDMIStatus_manage_DMI_Input_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

