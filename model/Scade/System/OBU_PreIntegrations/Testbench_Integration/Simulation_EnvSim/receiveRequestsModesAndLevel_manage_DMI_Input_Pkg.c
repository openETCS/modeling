/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "receiveRequestsModesAndLevel_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel */
void receiveRequestsModesAndLevel_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::fromDMI_driverRequest */DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_driverRequest,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::fromDMI_Icon_Ack */DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_Icon_Ack,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::fromDMI_TextMsg_Ack */DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_TextMsg_Ack,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::inStatusList */DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::forModesAndLevel */DMI_To_Modes_T_DMI_Types_Pkg *forModesAndLevel,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::outStatusList */DMI_TXT_MSGList_status_T_DMI_Types_Pkg *outStatusList,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::outDriverRequestToLevels */kcg_bool *outDriverRequestToLevels)
{
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L5 */
  static DMI_To_Modes_T_DMI_Types_Pkg _L5;
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L9 */
  static DMI_DriverRequest_T_DMI_Types_Pkg _L9;
  
  /* 1 */
  receiveTextMessageAck_manage_TextMessages_Pkg(
    inSystemTime,
    inStatusList,
    fromDMI_TextMsg_Ack,
    outStatusList,
    &_L5);
  /* 1 */
  doDriverRequests_manage_DMI_Input_Pkg(
    fromDMI_driverRequest,
    &_L9,
    outDriverRequestToLevels);
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(forModesAndLevel, &_L5);
  kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(
    &(*forModesAndLevel).DriverRequest,
    &_L9);
  (*forModesAndLevel).valid = _L5.valid | _L9.valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** receiveRequestsModesAndLevel_manage_DMI_Input_Pkg.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

