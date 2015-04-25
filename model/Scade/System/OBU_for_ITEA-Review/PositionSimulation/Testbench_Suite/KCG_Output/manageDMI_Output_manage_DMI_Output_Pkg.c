/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageDMI_Output_manage_DMI_Output_Pkg.h"

void manageDMI_Output_init_manage_DMI_Output_Pkg(
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC)
{
  int i;
  
  outC->init = kcg_true;
  outC->rem_outputStatus.secondValidationRequested = kcg_true;
  outC->rem_outputStatus.NO_initrequestSent = kcg_true;
  outC->to_DMI.iconRequest.DMI_nid_icon_identifier = 0;
  outC->to_DMI.iconRequest.DMI_nid_area_rank = 0;
  outC->to_DMI.iconRequest.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->to_DMI.iconRequest.DMI_nid_icon_rank = 0;
  outC->to_DMI.iconRequest.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->to_DMI.iconRequest.DMI_m_icon_flashing_freq = 0.0;
  outC->to_DMI.iconRequest.DMI_m_icon_control_flag =
    show_icon_in_area_DMI_Types_Pkg;
  outC->to_DMI.iconRequest.system_clock = 0;
  outC->to_DMI.iconRequest.valid = kcg_true;
  outC->to_DMI.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->to_DMI.adhesionFactor.systemTime = 0;
  outC->to_DMI.adhesionFactor.valid = kcg_true;
  outC->to_DMI.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->to_DMI.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->to_DMI.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->to_DMI.trainData.v_maxTrain = 0;
  outC->to_DMI.trainData.m_brakeperct = 0;
  outC->to_DMI.trainData.l_train = 0;
  outC->to_DMI.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->to_DMI.trainData.systemTime = 0;
  outC->to_DMI.trainData.valid = kcg_true;
  outC->to_DMI.trainRunningNumber.trainRunningNumber = 0;
  outC->to_DMI.trainRunningNumber.systemTime = 0;
  outC->to_DMI.trainRunningNumber.valid = kcg_true;
  for (i = 0; i < 9; i++) {
    outC->to_DMI.driverIdentifier.driverIdentifier[i] = ' ';
  }
  outC->to_DMI.driverIdentifier.systemTime = 0;
  outC->to_DMI.driverIdentifier.valid = kcg_true;
  outC->to_DMI.EVC_radioNetData.nid_mn = 0;
  outC->to_DMI.EVC_radioNetData.system_clock = 0;
  outC->to_DMI.EVC_radioNetData.valid = kcg_true;
  for (i = 0; i < 4; i++) {
    outC->to_DMI.EVC_levelData.levelList.levelList[i].nid_stm = 0;
    outC->to_DMI.EVC_levelData.levelList.levelList[i].level = M_LEVEL_Level_0;
  }
  outC->to_DMI.EVC_levelData.system_clock = 0;
  outC->to_DMI.EVC_levelData.valid = kcg_true;
  outC->to_DMI.displayControl.system_clock = 0;
  outC->to_DMI.displayControl.cab_is_active = kcg_true;
  outC->to_DMI.displayControl.valid = kcg_true;
  outC->to_DMI.systemVersion.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->to_DMI.systemVersion.system_clock = 0;
  outC->to_DMI.systemVersion.valid = kcg_true;
  outC->to_DMI.identifierRequest.l_extra = 0;
  for (i = 0; i < 255; i++) {
    outC->to_DMI.identifierRequest.x_name[i] = ' ';
  }
  outC->to_DMI.identifierRequest.l_name = 0;
  outC->to_DMI.identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->to_DMI.identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->to_DMI.identifierRequest.system_clock = 0;
  outC->to_DMI.identifierRequest.valid = kcg_true;
  for (i = 0; i < 4; i++) {
    outC->to_DMI.trackDescription.trackConditions.speedProfiles[i].v_static = 0;
    outC->to_DMI.trackDescription.trackConditions.speedProfiles[i].d_static = 0;
  }
  outC->to_DMI.trackDescription.trackConditions.nIter = 0;
  for (i = 0; i < 4; i++) {
    outC->to_DMI.trackDescription.gradientProfiles.gradientProfiles[i].v_static =
      0;
    outC->to_DMI.trackDescription.gradientProfiles.gradientProfiles[i].d_static =
      0;
  }
  outC->to_DMI.trackDescription.gradientProfiles.nIter = 0;
  for (i = 0; i < 4; i++) {
    outC->to_DMI.trackDescription.speedProfiles.speedProfiles[i].v_static = 0;
    outC->to_DMI.trackDescription.speedProfiles.speedProfiles[i].d_static = 0;
  }
  outC->to_DMI.trackDescription.speedProfiles.nIter = 0;
  outC->to_DMI.trackDescription.system_clock = 0;
  outC->to_DMI.trackDescription.valid = kcg_true;
  outC->to_DMI.textMessage.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->to_DMI.textMessage.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  for (i = 0; i < 255; i++) {
    outC->to_DMI.textMessage.x_text[i] = ' ';
  }
  outC->to_DMI.textMessage.l_text = 0;
  outC->to_DMI.textMessage.q_text = balise_read_error_DMI_Types_Pkg;
  outC->to_DMI.textMessage.nid_message = 0;
  outC->to_DMI.textMessage.system_clock = 0;
  outC->to_DMI.textMessage.valid = kcg_true;
  outC->to_DMI.evc_coded_train_data.mLoadingGauge.dig3 = 0;
  outC->to_DMI.evc_coded_train_data.mLoadingGauge.dig2 = 0;
  outC->to_DMI.evc_coded_train_data.mLoadingGauge.dig1 = 0;
  outC->to_DMI.evc_coded_train_data.mLoadingGauge.number = 0;
  outC->to_DMI.evc_coded_train_data.airTightSystem.dig3 = 0;
  outC->to_DMI.evc_coded_train_data.airTightSystem.dig2 = 0;
  outC->to_DMI.evc_coded_train_data.airTightSystem.dig1 = 0;
  outC->to_DMI.evc_coded_train_data.airTightSystem.number = 0;
  outC->to_DMI.evc_coded_train_data.mAxleLoad = M_AXLELOADCAT_A;
  outC->to_DMI.evc_coded_train_data.vmax.dig3 = 0;
  outC->to_DMI.evc_coded_train_data.vmax.dig2 = 0;
  outC->to_DMI.evc_coded_train_data.vmax.dig1 = 0;
  outC->to_DMI.evc_coded_train_data.vmax.number = 0;
  outC->to_DMI.evc_coded_train_data.brakeModel.dig3 = 0;
  outC->to_DMI.evc_coded_train_data.brakeModel.dig2 = 0;
  outC->to_DMI.evc_coded_train_data.brakeModel.dig1 = 0;
  outC->to_DMI.evc_coded_train_data.brakeModel.number = 0;
  outC->to_DMI.evc_coded_train_data.trainLength.dig4 = 0;
  outC->to_DMI.evc_coded_train_data.trainLength.dig3 = 0;
  outC->to_DMI.evc_coded_train_data.trainLength.dig2 = 0;
  outC->to_DMI.evc_coded_train_data.trainLength.dig1 = 0;
  outC->to_DMI.evc_coded_train_data.trainLength.number = 0;
  outC->to_DMI.evc_coded_train_data.trainID.dig5 = 0;
  outC->to_DMI.evc_coded_train_data.trainID.dig4 = 0;
  outC->to_DMI.evc_coded_train_data.trainID.dig3 = 0;
  outC->to_DMI.evc_coded_train_data.trainID.dig2 = 0;
  outC->to_DMI.evc_coded_train_data.trainID.dig1 = 0;
  outC->to_DMI.evc_coded_train_data.trainID.number = 0;
  outC->to_DMI.evc_coded_train_data.system_clock = 0;
  outC->to_DMI.evc_coded_train_data.valid = kcg_true;
  outC->to_DMI.entry_request.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->to_DMI.entry_request.system_clock = 0;
  outC->to_DMI.entry_request.valid = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->to_DMI.menu_request.available_menu.Fix_train_data_entry = kcg_true;
  outC->to_DMI.menu_request.available_menu.Button_switch_for_train_data =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_contact_last_RBC =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_radio_network_ID =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_enter_RBC_data =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_use_short_number =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Show_hourglass = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_isolation = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_train_integrity =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_luminance = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_volume = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_system_version =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_adhesion_factor =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_override_EOA = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_language_selection =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_train_data_view =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_driver_ID = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_maintain_shunting =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_exit_non_leading =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_non_leading = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_shunting = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_start_of_mission =
    kcg_true;
  outC->to_DMI.menu_request.system_clock = 0;
  outC->to_DMI.menu_request.valid = kcg_true;
  outC->to_DMI.dynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->to_DMI.dynamic.distance_to_TSA = 0;
  outC->to_DMI.dynamic.distance_KP_Balise = 0;
  outC->to_DMI.dynamic.location_KP_Balise_Track = 0;
  outC->to_DMI.dynamic.v_LOA = 0;
  outC->to_DMI.dynamic.location_LOA = 0;
  outC->to_DMI.dynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->to_DMI.dynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->to_DMI.dynamic.nid_c_valid = kcg_true;
  outC->to_DMI.dynamic.nid_c = 0;
  outC->to_DMI.dynamic.level.nid_stm = 0;
  outC->to_DMI.dynamic.level.level = M_LEVEL_Level_0;
  outC->to_DMI.dynamic.mode = M_MODE_Full_Supervision;
  outC->to_DMI.dynamic.v_intervention = 0;
  outC->to_DMI.dynamic.location_brake_curve_starting_point = 0;
  outC->to_DMI.dynamic.v_release = 0;
  outC->to_DMI.dynamic.v_permitted = 0;
  outC->to_DMI.dynamic.v_target = 0;
  outC->to_DMI.dynamic.location_brake_target = 0;
  outC->to_DMI.dynamic.location_front_train = 0;
  outC->to_DMI.dynamic.v_train = 0;
  outC->to_DMI.dynamic.system_clock = 0;
  outC->to_DMI.dynamic.valid = kcg_true;
  outC->to_DMI.present = kcg_true;
}


void manageDMI_Output_reset_manage_DMI_Output_Pkg(
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
}

/* manage_DMI_Output_Pkg::manageDMI_Output */
void manageDMI_Output_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::manageDMI_Output::TIU_TrainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_dynamic */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_dynamic,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_menuRequest */ DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_menuRequest,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_entryRequest */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_evc_coded_train_data */ DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_coded_train_data,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_text_message */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_text_message,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_trackDescription */ DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_trackDescription,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_identifierRequest */ DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_identifierRequest,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_systemVersion */ DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_systemVersion,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_displayControl */ DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_displayControl,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_EVC_levelData */ DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_EVC_levelData,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_EVC_radioNet */ DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_EVC_radioNet,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_driverIdentifier */ DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driverIdentifier,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_trainRunningNumber */ DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *dmi_trainRunningNumber,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_trainData */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *dmi_trainData,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_adhesionFactor */ DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *dmi_adhesionFactor,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_iconRequest */ DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_iconRequest,
  /* manage_DMI_Output_Pkg::manageDMI_Output::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC)
{
  dmiOutputs_T_manage_DMI_Output_Pkg tmp;
  
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** manageDMI_Output_manage_DMI_Output_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

