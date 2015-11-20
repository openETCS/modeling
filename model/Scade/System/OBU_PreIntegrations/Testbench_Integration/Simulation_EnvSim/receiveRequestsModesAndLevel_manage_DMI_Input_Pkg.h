/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:55
*************************************************************$ */
#ifndef _receiveRequestsModesAndLevel_manage_DMI_Input_Pkg_H_
#define _receiveRequestsModesAndLevel_manage_DMI_Input_Pkg_H_

#include "kcg_types.h"
#include "receiveTextMessageAck_manage_TextMessages_Pkg.h"
#include "doDriverRequests_manage_DMI_Input_Pkg.h"

/* =====================  no input structure  ====================== */


/* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel */
extern void receiveRequestsModesAndLevel_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::fromDMI_driverRequest */DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_driverRequest,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::fromDMI_Icon_Ack */DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_Icon_Ack,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::fromDMI_TextMsg_Ack */DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_TextMsg_Ack,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::inStatusList */DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::forModesAndLevel */DMI_To_Modes_T_DMI_Types_Pkg *forModesAndLevel,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::outStatusList */DMI_TXT_MSGList_status_T_DMI_Types_Pkg *outStatusList,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::outDriverRequestToLevels */kcg_bool *outDriverRequestToLevels);

#endif /* _receiveRequestsModesAndLevel_manage_DMI_Input_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** receiveRequestsModesAndLevel_manage_DMI_Input_Pkg.h
** Generation date: 2015-11-20T19:46:55
*************************************************************$ */

