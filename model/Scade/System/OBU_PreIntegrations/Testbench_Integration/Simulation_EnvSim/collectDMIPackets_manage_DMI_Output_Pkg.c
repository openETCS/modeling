/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "collectDMIPackets_manage_DMI_Output_Pkg.h"

void collectDMIPackets_reset_manage_DMI_Output_Pkg(
  outC_collectDMIPackets_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
}

/* manage_DMI_Output_Pkg::collectDMIPackets */
void collectDMIPackets_manage_DMI_Output_Pkg(
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
  outC_collectDMIPackets_manage_DMI_Output_Pkg *outC)
{
  static dmiOutputs_T_manage_DMI_Output_Pkg tmp;
  
  outC->to_DMI.present = (*dmi_dynamic).valid | (*dmi_menuRequest).valid |
    (*dmi_entryRequest).valid | (*dmi_evc_coded_train_data).valid |
    (*dmi_text_message).valid | (*dmi_trackDescription).valid |
    (*dmi_identifierRequest).valid | (*dmi_systemVersion).valid |
    ((*dmi_displayControl).valid | (*dmi_EVC_levelData).valid |
      (*dmi_EVC_radioNet).valid | (*dmi_driverIdentifier).valid |
      (*dmi_trainRunningNumber).valid | (*dmi_trainData).valid |
      (*dmi_adhesionFactor).valid | (*dmi_iconRequest).valid);
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->to_DMI.dynamic,
    dmi_dynamic);
  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->to_DMI.menu_request,
    dmi_menuRequest);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->to_DMI.entry_request,
    dmi_entryRequest);
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->to_DMI.evc_coded_train_data,
    dmi_evc_coded_train_data);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->to_DMI.textMessage,
    dmi_text_message);
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->to_DMI.trackDescription,
    dmi_trackDescription);
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->to_DMI.systemVersion,
    dmi_systemVersion);
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->to_DMI.displayControl,
    dmi_displayControl);
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->to_DMI.EVC_levelData,
    dmi_EVC_levelData);
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->to_DMI.EVC_radioNetData,
    dmi_EVC_radioNet);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->to_DMI.driverIdentifier,
    dmi_driverIdentifier);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->to_DMI.trainRunningNumber,
    dmi_trainRunningNumber);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->to_DMI.trainData,
    dmi_trainData);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->to_DMI.adhesionFactor,
    dmi_adhesionFactor);
  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->to_DMI.iconRequest,
    dmi_iconRequest);
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(
      &tmp,
      (dmiOutputs_T_manage_DMI_Output_Pkg *)
        &cOutputStatus_manage_DMI_Output_Pkg);
  }
  else {
    kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(&tmp, &outC->rem_outputStatus);
  }
  /* 1 */
  synchWithDMI_manage_DMI_Output_Pkg(
    dmi_identifierRequest,
    TIU_TrainStatus,
    &tmp,
    systemTime,
    &outC->to_DMI.identifierRequest,
    &outC->rem_outputStatus);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** collectDMIPackets_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

