/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
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
  (*newStatus).DMI_Active = (*fromDMI).present | (*oldStatus).DMI_Active;
  (*newStatus).DMI_Error = kcg_false;
  (*newStatus).DMI_DriverIdValidated = (*oldStatus).DMI_DriverIdValidated |
    (*fromDMI).driverIdentifier.valid;
  (*newStatus).DMI_TrainRunningNumberFirstValidation =
    (*oldStatus).DMI_TrainRunningNumberFirstValidation |
    (!sndValidationRequested & (*fromDMI).trainRunningNumber.valid);
  (*newStatus).DMI_TrainRunningNumberValidated =
    ((*fromDMI).trainRunningNumber.valid & sndValidationRequested) |
    (*oldStatus).DMI_TrainRunningNumberValidated;
  (*newStatus).DMI_StartReceived = (*oldStatus).DMI_StartReceived |
    (*fromDMI).driverRequest.valid;
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** updateDMIStatus_manage_DMI_Input_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

