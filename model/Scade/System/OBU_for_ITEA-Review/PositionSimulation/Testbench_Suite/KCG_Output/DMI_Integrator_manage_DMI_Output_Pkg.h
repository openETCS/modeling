/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _DMI_Integrator_manage_DMI_Output_Pkg_H_
#define _DMI_Integrator_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"
#include "doEntryRequest_manage_DMI_Output_Pkg.h"
#include "sendTrainData_manage_DMI_Output_Pkg.h"
#include "doTextMessages_manage_DMI_Output_Pkg.h"
#include "sendBrakesToDMI_manage_DMI_Output_Pkg.h"
#include "cyclicReportToDMI_manage_DMI_Output_Pkg.h"
#include "manageDMI_Output_manage_DMI_Output_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  EVC_to_DMI_Message_T_API_DMI_Pkg /* manage_DMI_Output_Pkg::DMI_Integrator::to_DMI */ to_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_manageDMI_Output_manage_DMI_Output_Pkg /* 1 */ _1_Context_1;
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_DMI_Integrator_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::DMI_Integrator */
extern void DMI_Integrator_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::DMI_Integrator::incurrentDMIStatus */ DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::DMI_Integrator::TIU_TrainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inOdometry */ odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inTrainPosition */ trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inBrakeCommand */ Brake_command_T_TIU_Types_Pkg *inBrakeCommand,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inSpeedSupervision */ speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inModeAndLevel */ ModeAndLevelStatus_T_BG_Types_Pkg *inModeAndLevel,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inNationalValues */ nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inMovementAuthority */ movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inMorePositions */ morePositions_T_DMI_Types_Pkg *inMorePositions,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inRadioConnectionStatus */ safeRadioConnectionStatus_Type_MoRC_Pck inRadioConnectionStatus,
  /* manage_DMI_Output_Pkg::DMI_Integrator::trainDataFromEVC */ trainData_T_TIU_Types_Pkg *trainDataFromEVC,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_entryRequest */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_evc_coded_train_data */ DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_coded_train_data,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_text_message */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_text_message,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_trackDescription */ DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_trackDescription,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_identifierRequest */ DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_identifierRequest,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_systemVersion */ DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_systemVersion,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_displayControl */ DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_displayControl,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_EVC_levelData */ DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_EVC_levelData,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_EVC_radioNet */ DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_EVC_radioNet,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_driverIdentifier */ DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driverIdentifier,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_trainRunningNumber */ DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *dmi_trainRunningNumber,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_adhesionFactor */ DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *dmi_adhesionFactor,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_fromBG */ kcg_bool dmi_fromBG,
  /* manage_DMI_Output_Pkg::DMI_Integrator::toModesAndLevel */ DMI_To_Modes_T_DMI_Types_Pkg *toModesAndLevel,
  outC_DMI_Integrator_manage_DMI_Output_Pkg *outC);

extern void DMI_Integrator_reset_manage_DMI_Output_Pkg(
  outC_DMI_Integrator_manage_DMI_Output_Pkg *outC);
extern void DMI_Integrator_init_manage_DMI_Output_Pkg(
  outC_DMI_Integrator_manage_DMI_Output_Pkg *outC);

#endif /* _DMI_Integrator_manage_DMI_Output_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** DMI_Integrator_manage_DMI_Output_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

