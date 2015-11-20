/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _manageDMI_Output_manage_DMI_Output_Pkg_H_
#define _manageDMI_Output_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"
#include "doEntryRequest_manage_DMI_Output_Pkg.h"
#include "sendTrainData_manage_DMI_Output_Pkg.h"
#include "sendLevelListPkg_manage_DMI_Output_Pkg.h"
#include "copyTrackDescription_manage_DMI_Output_Pkg.h"
#include "manageTextMessages_manage_TextMessages_Pkg.h"
#include "Write_EVC_to_DMI_to_int_Messages.h"
#include "cyclicReportToDMI_manage_DMI_Output_Pkg.h"
#include "collectDMIPackets_manage_DMI_Output_Pkg.h"
#include "sendBrakesToDMI_manage_DMI_Output_Pkg.h"
#include "sendVersion_manage_DMI_Output_Pkg.h"
#include "doIdentifierRequest_manage_DMI_Output_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* manage_DMI_Output_Pkg::manageDMI_Output::to_DMI */ to_DMI;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* manage_DMI_Output_Pkg::manageDMI_Output::outStatusList */ outStatusList;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_collectDMIPackets_manage_DMI_Output_Pkg /* 1 */ _3_Context_1;
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg /* 2 */ Context_2;
  outC_sendVersion_manage_DMI_Output_Pkg /* 1 */ _2_Context_1;
  outC_doIdentifierRequest_manage_DMI_Output_Pkg /* 1 */ _1_Context_1;
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_manageDMI_Output_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::manageDMI_Output */
extern void manageDMI_Output_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::manageDMI_Output::incurrentDMIStatus */ DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::manageDMI_Output::TIU_TrainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inOdometry */ odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inTrainPosition */ trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inBrakeCommand */ Brake_command_T_TIU_Types_Pkg *inBrakeCommand,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inSpeedSupervision */ speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inNationalValues */ nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inMovementAuthority */ movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inMoRC_status */ morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  /* manage_DMI_Output_Pkg::manageDMI_Output::trainDataFromEVC */ trainData_T_TIU_Types_Pkg *trainDataFromEVC,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_entryRequest */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_evc_coded_train_data */ DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_coded_train_data,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_trackDescription */ DataForDMI_t_TrackAtlasTypes *dmi_trackDescription,
  /* manage_DMI_Output_Pkg::manageDMI_Output::evc_systemVersion */ M_VERSION evc_systemVersion,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_displayControl */ DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_displayControl,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_EVC_levelList */ DMI_LevelList_T_DMI_Types_Pkg *dmi_EVC_levelList,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmiUpdateLevelsDMI */ kcg_bool dmiUpdateLevelsDMI,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_EVC_radioNet */ DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_EVC_radioNet,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_driverIdentifier */ DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driverIdentifier,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_trainRunningNumber */ DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *dmi_trainRunningNumber,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_adhesionFactor */ DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *dmi_adhesionFactor,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_fromBG */ kcg_bool dmi_fromBG,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inModeLevel_Ack */ T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* manage_DMI_Output_Pkg::manageDMI_Output::announcedLevel */ T_AnnouncedLevel_Level_And_Mode_Types_Pkg *announcedLevel,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inNTC */ NID_NTC inNTC,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void manageDMI_Output_reset_manage_DMI_Output_Pkg(
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void manageDMI_Output_init_manage_DMI_Output_Pkg(
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _manageDMI_Output_manage_DMI_Output_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** manageDMI_Output_manage_DMI_Output_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

