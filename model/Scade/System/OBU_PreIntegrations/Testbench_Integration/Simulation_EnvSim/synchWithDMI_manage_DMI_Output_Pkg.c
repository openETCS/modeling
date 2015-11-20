/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "synchWithDMI_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::synchWithDMI */
void synchWithDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::synchWithDMI::dmi_identifierRequest */DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_identifierRequest,
  /* manage_DMI_Output_Pkg::synchWithDMI::TIU_TrainStatus */TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::synchWithDMI::outputStatus */dmiOutputs_T_manage_DMI_Output_Pkg *outputStatus,
  /* manage_DMI_Output_Pkg::synchWithDMI::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* manage_DMI_Output_Pkg::synchWithDMI::send_dmi_identifierRequest */DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *send_dmi_identifierRequest,
  /* manage_DMI_Output_Pkg::synchWithDMI::updatedOutputStatus */dmiOutputs_T_manage_DMI_Output_Pkg *updatedOutputStatus)
{
  /* manage_DMI_Output_Pkg::synchWithDMI::doSend */
  static kcg_bool doSend;
  
  doSend = !(*dmi_identifierRequest).valid & (*TIU_TrainStatus).valid &
    (*TIU_TrainStatus).deskOpen & (*outputStatus).NO_initrequestSent;
  kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(
    updatedOutputStatus,
    outputStatus);
  (*updatedOutputStatus).NO_initrequestSent = doSend;
  if ((*dmi_identifierRequest).valid) {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      send_dmi_identifierRequest,
      dmi_identifierRequest);
  }
  else if (doSend) {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      send_dmi_identifierRequest,
      (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cSendInitRequest_manage_DMI_Output_Pkg);
  }
  else {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      send_dmi_identifierRequest,
      (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cEmptyInitRequest_manage_DMI_Output_Pkg);
  }
  (*send_dmi_identifierRequest).system_clock = systemTime;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** synchWithDMI_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

