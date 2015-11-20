/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _collectDMIPackets_manage_DMI_Output_Pkg_H_
#define _collectDMIPackets_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"
#include "synchWithDMI_manage_DMI_Output_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  EVC_to_DMI_Message_T_API_DMI_Pkg /* manage_DMI_Output_Pkg::collectDMIPackets::to_DMI */ to_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  dmiOutputs_T_manage_DMI_Output_Pkg /* manage_DMI_Output_Pkg::collectDMIPackets::outputStatus */ rem_outputStatus;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_collectDMIPackets_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::collectDMIPackets */
extern void collectDMIPackets_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::collectDMIPackets::TIU_TrainStatus */TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_dynamic */DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_dynamic,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_menuRequest */DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_menuRequest,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_entryRequest */DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_evc_coded_train_data */DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_coded_train_data,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_text_message */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_text_message,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_trackDescription */DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_trackDescription,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_identifierRequest */DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_identifierRequest,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_systemVersion */DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_systemVersion,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_displayControl */DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_displayControl,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_EVC_levelData */DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_EVC_levelData,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_EVC_radioNet */DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_EVC_radioNet,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_driverIdentifier */DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driverIdentifier,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_trainRunningNumber */DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *dmi_trainRunningNumber,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_trainData */DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *dmi_trainData,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_adhesionFactor */DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *dmi_adhesionFactor,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_iconRequest */DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_iconRequest,
  /* manage_DMI_Output_Pkg::collectDMIPackets::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_collectDMIPackets_manage_DMI_Output_Pkg *outC);

extern void collectDMIPackets_reset_manage_DMI_Output_Pkg(
  outC_collectDMIPackets_manage_DMI_Output_Pkg *outC);

#endif /* _collectDMIPackets_manage_DMI_Output_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** collectDMIPackets_manage_DMI_Output_Pkg.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

