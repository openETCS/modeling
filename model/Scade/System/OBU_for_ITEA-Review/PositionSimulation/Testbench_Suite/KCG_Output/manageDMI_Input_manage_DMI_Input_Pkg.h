/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _manageDMI_Input_manage_DMI_Input_Pkg_H_
#define _manageDMI_Input_manage_DMI_Input_Pkg_H_

#include "kcg_types.h"
#include "updateDMIStatus_manage_DMI_Input_Pkg.h"
#include "receiveTrainData_manage_DMI_Input_Pkg.h"
#include "setOutputToModesAndLevel_manage_DMI_Input_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_EVC_status_T_DMI_Types_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::currentDMIStatus */ currentDMIStatus;
  kcg_bool /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_MessageReceived */ fromDMI_MessageReceived;
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_Status */ fromDMI_Status;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_Identifier */ fromDMI_Identifier;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_DriverRequest */ fromDMI_DriverRequest;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_DriverIdentifier */ fromDMI_DriverIdentifier;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_TrainRunningNumber */ fromDMI_TrainRunningNumber;
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_RadioNetData */ fromDMI_RadioNetData;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_TextMessage_Ack */ fromDMI_TextMessage_Ack;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_Icon_Ack */ fromDMI_Icon_Ack;
  trainData_T_TIU_Types_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::updatedTrainData */ updatedTrainData;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_AdhesionFactor */ fromDMI_AdhesionFactor;
  DMI_To_Modes_T_DMI_Types_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::forModesAndLevel */ forModesAndLevel;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_manageDMI_Input_manage_DMI_Input_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Input_Pkg::manageDMI_Input */
extern void manageDMI_Input_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI */ DMI_to_EVC_Message_T_API_DMI_Pkg *fromDMI,
  /* manage_DMI_Input_Pkg::manageDMI_Input::dmiStatusReset */ kcg_bool dmiStatusReset,
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC);

extern void manageDMI_Input_reset_manage_DMI_Input_Pkg(
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC);
extern void manageDMI_Input_init_manage_DMI_Input_Pkg(
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC);

#endif /* _manageDMI_Input_manage_DMI_Input_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** manageDMI_Input_manage_DMI_Input_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

