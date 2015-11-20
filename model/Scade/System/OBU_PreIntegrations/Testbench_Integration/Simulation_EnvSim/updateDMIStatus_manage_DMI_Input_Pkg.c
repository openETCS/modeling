/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "updateDMIStatus_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::updateDMIStatus */
void updateDMIStatus_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::updateDMIStatus::oldStatus */DMI_EVC_status_T_DMI_Types_Pkg *oldStatus,
  /* manage_DMI_Input_Pkg::updateDMIStatus::fromDMI */DMI_to_EVC_Message_T_API_DMI_Pkg *fromDMI,
  /* manage_DMI_Input_Pkg::updateDMIStatus::sndValidationRequested */kcg_bool sndValidationRequested,
  /* manage_DMI_Input_Pkg::updateDMIStatus::newStatus */DMI_EVC_status_T_DMI_Types_Pkg *newStatus)
{
  (*newStatus).DMI_Active = (*fromDMI).present | (*oldStatus).DMI_Active;
  (*newStatus).DMI_Error = kcg_false;
  (*newStatus).DMI_DriverIdValidated = (*oldStatus).DMI_DriverIdValidated |
    (*fromDMI).driverIdentifier.valid;
  (*newStatus).DMI_LevelSelectedByDirver =
    (*oldStatus).DMI_LevelSelectedByDirver | (*fromDMI).selectedLevel.valid;
  (*newStatus).DMI_TrainRunningNumberFirstValidation =
    (*oldStatus).DMI_TrainRunningNumberFirstValidation |
    (!sndValidationRequested & (*fromDMI).trainRunningNumber.valid);
  (*newStatus).DMI_TrainRunningNumberValidated =
    ((*fromDMI).trainRunningNumber.valid & sndValidationRequested) |
    (*oldStatus).DMI_TrainRunningNumberValidated;
  (*newStatus).DMI_StartReceived = (*oldStatus).DMI_StartReceived |
    ((*fromDMI).driverRequest.valid & ((*fromDMI).driverRequest.m_request ==
        Start_of_mission_DMI_Types_Pkg));
  if ((*fromDMI).trainDataAck.valid) {
    (*newStatus).DMI_TrainDataValidated = (*fromDMI).trainDataAck.acknowledged;
  }
  else {
    (*newStatus).DMI_TrainDataValidated = (*oldStatus).DMI_TrainDataValidated;
  }
  if ((*fromDMI).identifier.valid) {
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &(*newStatus).DMI_Identifier,
      &(*fromDMI).identifier);
  }
  else {
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &(*newStatus).DMI_Identifier,
      &(*oldStatus).DMI_Identifier);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** updateDMIStatus_manage_DMI_Input_Pkg.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

