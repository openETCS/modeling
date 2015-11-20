/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "receiveRequestsModesAndLevel_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel */
void receiveRequestsModesAndLevel_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::fromDMI_driverRequest */ DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_driverRequest,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::fromDMI_Icon_Ack */ DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_Icon_Ack,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::fromDMI_TextMsg_Ack */ DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_TextMsg_Ack,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::forModesAndLevel */ DMI_To_Modes_T_DMI_Types_Pkg *forModesAndLevel,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *outStatusList,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::outDriverRequestToLevels */ kcg_bool *outDriverRequestToLevels)
{
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg noname;
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L2 */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L2;
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L5 */
  static DMI_To_Modes_T_DMI_Types_Pkg _L5;
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L4 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L4;
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L6 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L6;
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L7 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L7;
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L8 */
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L8;
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L9 */
  static DMI_DriverRequest_T_DMI_Types_Pkg _L9;
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L10 */
  static kcg_bool _L10;
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L11 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L11;
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L12 */
  static DMI_To_Modes_T_DMI_Types_Pkg _L12;
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L13 */
  static DMI_To_Modes_T_DMI_Types_Pkg _L13;
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L14 */
  static kcg_bool _L14;
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L15 */
  static kcg_bool _L15;
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L16 */
  static kcg_bool _L16;
  
  _L6 = inSystemTime;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(&_L7, inStatusList);
  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L8,
    fromDMI_TextMsg_Ack);
  /* 1 */
  receiveTextMessageAck_manage_TextMessages_Pkg(_L6, &_L7, &_L8, &_L4, &_L5);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L11,
    fromDMI_driverRequest);
  /* 1 */ doDriverRequests_manage_DMI_Input_Pkg(&_L11, &_L9, &_L10);
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&_L12, &_L5);
  if (kcg_true) {
    kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(&_L12.DriverRequest, &_L9);
  }
  _L14 = _L5.valid;
  _L15 = _L9.valid;
  _L16 = _L14 | _L15;
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&_L13, &_L12);
  if (kcg_true) {
    _L13.valid = _L16;
  }
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(forModesAndLevel, &_L13);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(&_L2, fromDMI_Icon_Ack);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(&noname, &_L2);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(outStatusList, &_L4);
  *outDriverRequestToLevels = _L10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** receiveRequestsModesAndLevel_manage_DMI_Input_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

