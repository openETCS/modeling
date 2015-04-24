/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_Controller_DMI_Control_Pkg.h"

void DMI_Controller_init_DMI_Control_Pkg(
  outC_DMI_Controller_DMI_Control_Pkg *outC)
{
  int i;
  
  outC->init = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->init4 = kcg_true;
  outC->init5 = kcg_true;
  outC->init6 = kcg_true;
  outC->CabinSM_state_nxt = SSM_st_DeskIsOpen_CabinSM;
  outC->_L369_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0;
  outC->_L368_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = kcg_true;
  outC->_L381_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0.0;
  outC->_L380_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0.0;
  outC->_L379_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0.0;
  outC->_L378_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0.0;
  outC->_L389_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = kcg_true;
  outC->_L388_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = kcg_true;
  outC->_L387_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0.0;
  outC->_L386_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0.0;
  outC->_L394_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = kcg_true;
  outC->_L393_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0;
  outC->_L398_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = kcg_true;
  outC->_L397_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0;
  for (i = 0; i < 30; i++) {
    outC->_L184_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[i] = 0;
  }
  outC->_L162_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = kcg_true;
  outC->_L161_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = kcg_true;
  for (i = 0; i < 15; i++) {
    outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[i] =
      kcg_true;
  }
  outC->_L159_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = kcg_true;
  outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0;
  outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0;
  outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
    kcg_true;
  outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
    A_DMI_Types_Pkg;
  outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
    kcg_true;
  outC->flashingVariable_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
    kcg_true;
  outC->InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->HideMainmenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
    kcg_true;
  outC->SpeedSupervisionSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
    SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
  outC->SM11_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
    SSM_st_TextMsgToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11;
  outC->HourGlassSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
    SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
  outC->SM17_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
    SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
  outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
    SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
  outC->IconSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
    SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
  outC->YesNoTrainDataValidationSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
    SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
  outC->TrainDataSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
    SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
    SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM;
  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
    SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
  outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.m_airTight =
    M_AIRTIGHT_Not_fitted;
  outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.m_axleLoad =
    M_AXLELOADCAT_A;
  outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.v_maxTrain =
    0;
  outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.m_brakeperct =
    0;
  outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.l_train =
    0;
  outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.systemTime =
    0;
  outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.valid =
    kcg_true;
  outC->_L35_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1 =
    kcg_true;
  outC->HandshakeSM_state_nxt_CabinSM_DeskIsOpen =
    SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM;
  outC->Vinterv_Color_toDisplay = 0;
  outC->vtarget_permColor_toDisplay = 0;
  outC->Vinterv_Visibility_toDisplay = kcg_true;
  outC->Vtarget_permVisibility_toDisplay = kcg_true;
  outC->VtargetColor_toDisplay = 0;
  outC->VreleaseColor_toDisplay = 0;
  outC->VpermColor_toDisplay = 0;
  outC->hourGlassVisibility_toDisplay = kcg_true;
  outC->hourGlassCounter_toDisplay = 0.0;
  outC->modeSymbolAnnouncementIndex_toDisplay = 0;
  outC->levelSymbolAnnouncementIndex_toDisplay = 0;
  outC->iconGroupIndex_toDisplay = 0;
  outC->yellowBorderC1Area_toDisplay = kcg_true;
  outC->DMI_icons_ack.DMI_nid_icon_identifier = 0;
  outC->DMI_icons_ack.systemTime = 0;
  outC->DMI_icons_ack.valid = kcg_true;
  outC->yellowBorderBrakeSymbol_toDisplay = kcg_true;
  outC->openDesk_toDisplay = kcg_true;
  outC->closeButtonIndex_toDisplay = 0;
  outC->yellowBorderMsg_toDisplay = kcg_true;
  outC->textMsgEnable_toDisplay = kcg_true;
  outC->DMI_text_message_ack.acknowledged = kcg_true;
  outC->DMI_text_message_ack.messageIdentifier = 0;
  outC->DMI_text_message_ack.systemTime = 0;
  outC->DMI_text_message_ack.valid = kcg_true;
  outC->DMI_status_report.nAlive = 0;
  outC->DMI_status_report.statusSet = Running_state_DMI_Types_Pkg;
  outC->DMI_status_report.systemTime = 0;
  outC->DMI_status_report.valid = kcg_true;
  outC->DMI_train_data_ack.acknowledged = kcg_true;
  outC->DMI_train_data_ack.systemTime = 0;
  outC->DMI_train_data_ack.valid = kcg_true;
  outC->traindataYesNoIndex_toDisplay = 0;
  outC->traindataValidWinVisibility_toDisplay = kcg_true;
  outC->trainMaxspeed_toDisplay = 0.0;
  outC->trainBrakePerc_toDisplay = 0.0;
  outC->trainLenght_toDisplay = 0.0;
  outC->trainLoadingGougeIndex_toDisplay = 0;
  outC->trainAirtightIndex_toDisplay = 0;
  outC->trainAxleloadIndex_toDisplay = 0;
  outC->trainCategoryIndex_toDisplay = 0;
  for (i = 0; i < 5; i++) {
    outC->ArrayOfMsgIndex_toDisplay[i] = 0;
  }
  outC->DMI_driver_request.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->DMI_driver_request.systemTime = 0;
  outC->DMI_driver_request.valid = kcg_true;
  outC->ModeSymbolVisibility_toDisplay = kcg_true;
  outC->ModeSymbol_toDisplay = 0;
  outC->DistanceToTargetBarVisibility_toDisplay = kcg_true;
  outC->RBC_status_symbol_toDisplay = 0;
  outC->StatusSymbolVisibility_toDisplay = kcg_true;
  outC->CloseButtonEnabler_toDisplay = 0;
  outC->DMI_train_running_number_id.trainRunningNumber = 0;
  outC->DMI_train_running_number_id.systemTime = 0;
  outC->DMI_train_running_number_id.valid = kcg_true;
  for (i = 0; i < 9; i++) {
    outC->DMI_driver_identifier.driverIdentifier[i] = ' ';
  }
  outC->DMI_driver_identifier.systemTime = 0;
  outC->DMI_driver_identifier.valid = kcg_true;
  outC->DMI_identifier.M_VERSION =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 255; i++) {
    outC->DMI_identifier.DMI_name[i] = ' ';
  }
  outC->DMI_identifier.l_name = 0;
  outC->DMI_identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->DMI_identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->DMI_identifier.systemTime = 0;
  outC->DMI_identifier.valid = kcg_true;
  for (i = 0; i < 30; i++) {
    outC->ArrayButtonsEnabler_toDisplay[i] = 0;
  }
  for (i = 0; i < 15; i++) {
    outC->window_mask_visibility__toDisplay[i] = kcg_true;
  }
  for (i = 0; i < 9; i++) {
    outC->TrainRN_Display_toDisplay[i] = 0;
  }
  for (i = 0; i < 9; i++) {
    outC->DriverID_Display_toDisplay[i] = 0;
  }
  outC->PointerColor_toDisplay = 0;
  outC->StatusSymbolBrake_toDisplay = kcg_true;
  outC->InterpolatedDistanceToTarget_toDisplay = 0.0;
  outC->DistanceToTargetVisibilityDigital_toDisplay = kcg_true;
  outC->DistanceToTarget_toDisplay = 0.0;
  for (i = 0; i < 12; i++) {
    outC->GradientsValue_toDisplay[i] = 0.0;
  }
  for (i = 0; i < 12; i++) {
    outC->GradientsEnd_toDisplay[i] = 0.0;
  }
  for (i = 0; i < 12; i++) {
    outC->GradientsStart_toDisplay[i] = 0.0;
  }
  outC->SpeedIntervention_toDisplay = 0.0;
  outC->SpeedRelease_toDisplay = 0.0;
  outC->SpeedPermitted_toDisplay = 0.0;
  outC->SpeedTarget_toDisplay = 0.0;
  outC->SpeedDigitThree_toDisplay = 0.0;
  outC->SpeedDigitTwo_toDisplay = 0.0;
  outC->SpeedDigitOne_toDisplay = 0.0;
  outC->TrainDataWindowVisibility_toDisplay = kcg_true;
  outC->TrainSpeed_toDisplay = 0.0;
  outC->LevelSymbolVisibility_toDisplay = kcg_true;
  outC->ETCS_LevelSymbol_toDisplay = 0;
  outC->TrainPosition_toDisplay = 0.0;
  Counter_init_pwlinear_int(&outC->Context_1);
  DMI_status_init_DMI_Control_Pkg_Sub_func(&outC->Context_5);
  DistanceToTargetManager_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->_1_Context_5);
  FIFO_Integer_init_DMI_Control_Pkg_Utils_5(&outC->Context_3);
  FlashingOperator_init_DMI_Control_Pkg_Utils(&outC->Context_10);
  FIFO_Integer_init_DMI_Control_Pkg_Utils_5(&outC->Context_4);
  FlashingOperator_init_DMI_Control_Pkg_Utils(&outC->Context_9);
  HourGlassAnimation_init_DMI_Control_Pkg_Sub_func(
    &outC->Context_HourGlassAnimation);
}


void DMI_Controller_reset_DMI_Control_Pkg(
  outC_DMI_Controller_DMI_Control_Pkg *outC)
{
  outC->init6 = kcg_true;
  outC->init5 = kcg_true;
  outC->init4 = kcg_true;
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init = kcg_true;
  /* HourGlassAnimation */
  HourGlassAnimation_reset_DMI_Control_Pkg_Sub_func(
    &outC->Context_HourGlassAnimation);
  /* 9 */ FlashingOperator_reset_DMI_Control_Pkg_Utils(&outC->Context_9);
  /* 4 */ FIFO_Integer_reset_DMI_Control_Pkg_Utils_5(&outC->Context_4);
  /* 10 */ FlashingOperator_reset_DMI_Control_Pkg_Utils(&outC->Context_10);
  /* 3 */ FIFO_Integer_reset_DMI_Control_Pkg_Utils_5(&outC->Context_3);
  /* 5 */
  DistanceToTargetManager_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->_1_Context_5);
  /* 5 */ DMI_status_reset_DMI_Control_Pkg_Sub_func(&outC->Context_5);
  /* 1 */ Counter_reset_pwlinear_int(&outC->Context_1);
}

/* DMI_Control_Pkg::DMI_Controller */
void DMI_Controller_DMI_Control_Pkg(
  /* DMI_Control_Pkg::DMI_Controller::MousePressed */ kcg_bool MousePressed,
  /* DMI_Control_Pkg::DMI_Controller::VisibleGradients */ array_bool_12 *VisibleGradients,
  /* DMI_Control_Pkg::DMI_Controller::Brake */ kcg_real Brake,
  /* DMI_Control_Pkg::DMI_Controller::keypad_fromDisplay */ array_bool_12 *keypad_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::DriverID_Ack_fromDisplay */ kcg_bool DriverID_Ack_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::DMI_entry_request */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_entry_request,
  /* DMI_Control_Pkg::DMI_Controller::TrainRN_Ack_fromDisplay */ kcg_bool TrainRN_Ack_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::DMI_identifier_request */ DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_identifier_request,
  /* DMI_Control_Pkg::DMI_Controller::DMI_menu_request */ DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_menu_request,
  /* DMI_Control_Pkg::DMI_Controller::confirmTrainData_fromDisplay */ kcg_bool confirmTrainData_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::openTrainDataWindow_fromDisplay */ kcg_bool openTrainDataWindow_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::DMI_dynamic */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  /* DMI_Control_Pkg::DMI_Controller::startRequest_fromDisplay */ kcg_bool startRequest_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::DMI_text_message */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_text_message,
  /* DMI_Control_Pkg::DMI_Controller::DMI_train_data */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *DMI_train_data,
  /* DMI_Control_Pkg::DMI_Controller::traindataAck_fromDisplay */ kcg_bool traindataAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::traindataYesAck_fromDisplay */ kcg_bool traindataYesAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::traindataNoAck_fromDisplay */ kcg_bool traindataNoAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::SystemTime */ T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* DMI_Control_Pkg::DMI_Controller::textMsgAck_fromDisplay */ kcg_bool textMsgAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::openDriverID_fromDisplay */ kcg_bool openDriverID_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::openTrainRN_fromDisplay */ kcg_bool openTrainRN_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::closeButton_fromDisplay */ kcg_bool closeButton_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::TIU_trainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_trainStatus,
  /* DMI_Control_Pkg::DMI_Controller::DMI_icons */ DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_icons,
  /* DMI_Control_Pkg::DMI_Controller::brakeStatusSymbolAck_fromDisplay */ kcg_bool brakeStatusSymbolAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::C1AreaAck_fromDisplay */ kcg_bool C1AreaAck_fromDisplay,
  outC_DMI_Controller_DMI_Control_Pkg *outC)
{
  kcg_bool tmp16;
  kcg_bool tmp15;
  kcg_bool tmp14;
  kcg_bool tmp13;
  kcg_bool tmp12;
  kcg_bool tmp11;
  kcg_bool tmp10;
  kcg_bool tmp9;
  kcg_bool tmp8;
  Icon_group_T_DMI_Types_Pkg tmp7;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg tmp6;
  kcg_int i;
  kcg_bool tmp5;
  kcg_bool tmp4;
  kcg_bool tmp3;
  kcg_bool tmp2;
  kcg_bool tmp1;
  kcg_bool tmp;
  kcg_bool tmp28;
  kcg_bool tmp27;
  kcg_bool tmp24;
  kcg_bool tmp25;
  kcg_real tmp26;
  kcg_real tmp21;
  kcg_real tmp22;
  kcg_real tmp23;
  kcg_int tmp20;
  kcg_bool tmp17;
  kcg_bool tmp18;
  array_bool_15 tmp19;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM */ kcg_bool HandshakeSM_reset_act_CabinSM_DeskIsOpen;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM */ SSM_ST_HandshakeSM_CabinSM_DeskIsOpen HandshakeSM_state_act_CabinSM_DeskIsOpen;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM */ SSM_ST_HandshakeSM_CabinSM_DeskIsOpen HandshakeSM_state_sel_CabinSM_DeskIsOpen;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock */ kcg_bool ModeCheckIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2 */ kcg_bool IfBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1 */ M_SUPERVISION_STATUS_DMI_Types_Pkg _35_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::TSM::PointerColor::else */ kcg_bool _32_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::TSM::PointerColor::else::else::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::TSM::PointerColor::else::else */ kcg_bool _31_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::TSM::vPermitted */ kcg_real _47_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::TSM::isOrange */ kcg_bool _46_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::TSM::_L37 */ kcg_bool _L3745_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::TSM::_L5 */ kcg_bool _L544_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::PIM::PointerColor::else */ kcg_bool _33_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM_PointerColor;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::PIM::PointerColor::else::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM_PointerColor;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::PIM::isOrange */ kcg_bool _49_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::PIM::vPermitted */ kcg_real _48_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::PIM::_L13 */ kcg_bool _L13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::CSM::PointerColor::else */ kcg_bool _34_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM_PointerColor;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::CSM::isOrange */ kcg_bool _50_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::then::WhenBlock1::CSM::_L2 */ kcg_bool _L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else */ kcg_bool _30_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else::else::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else::else::else::then::isRed */ kcg_bool isRed_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else::else */ kcg_bool _29_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else::then::WhenBlock1::CSM::_L2 */ kcg_bool _L251_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else::then::WhenBlock1::CSM::isOrange */ kcg_bool _52_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else::then::WhenBlock1::CSM::PointerColor::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM_PointerColor;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else::else::then::WhenBlock1 */ M_SUPERVISION_STATUS_DMI_Types_Pkg WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::else */ kcg_bool _36_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::CSM::_L31 */ kcg_bool _L31_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::CSM::isOrange */ kcg_bool isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::CSM::PointerColor::else */ kcg_bool _42_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM_PointerColor;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::PIM::_L55 */ kcg_bool _L55_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::PIM::vPermitted */ kcg_real vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::PIM::isOrange */ kcg_bool isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::PIM::PointerColor::else::else */ kcg_bool _40_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM_PointerColor;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::PIM::PointerColor::else */ kcg_bool _41_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM_PointerColor;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::TSM::_L5 */ kcg_bool _L5_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::TSM::_L37 */ kcg_bool _L37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::TSM::isOrange */ kcg_bool isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::TSM::vPermitted */ kcg_real vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::TSM::PointerColor::else::else */ kcg_bool _38_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::TSM::PointerColor::else::else::else */ kcg_bool _37_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::TSM::PointerColor::else */ kcg_bool _39_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::RSM::vRelease */ kcg_real vRelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_RSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::RSM::isYellow */ kcg_bool isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_RSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1::RSM::PointerColor::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_RSM_PointerColor;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::ModeCheckIfBlock::then::WhenBlock1 */ M_SUPERVISION_STATUS_DMI_Types_Pkg _43_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::CSM::_L36 */ kcg_bool _L36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::CSM::isOrange */ kcg_bool isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::CSM::vIntervention */ kcg_real vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::CSM::isDarkGrey */ kcg_bool isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::CSM::vPermitted */ kcg_real vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::CSM::IfBlock1::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM_IfBlock1;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::_L75 */ kcg_bool _L75_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::_L45 */ kcg_bool _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::vIntervention */ kcg_real vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::isOrange */ kcg_bool isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::isWhite */ kcg_bool isWhite_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::Vperm */ kcg_real Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::isDarkGrey */ kcg_bool isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::Vtarget */ kcg_real Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::Vrelease */ kcg_real Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::isMediumGrey */ kcg_bool isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::PIM::IfBlock4::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM_IfBlock4;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::_L92 */ kcg_bool _L92_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::_L54 */ kcg_bool _L54_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::vIntervention */ kcg_real vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::isOrange */ kcg_bool isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::isYellow */ kcg_bool isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::Vperm */ kcg_real Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::isMediumGrey */ kcg_bool isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::Vrelease */ kcg_real Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::Vtarget */ kcg_real Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::isDarkGrey */ kcg_bool isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::IfBlock4::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM_IfBlock4;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::TSM::IfBlock3::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM_IfBlock3;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::RSM::_L22 */ kcg_bool _L22_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::RSM::isYellow */ kcg_bool isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::RSM::Vperm */ kcg_real Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::RSM::isMediumGrey */ kcg_bool isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1::RSM::Vrelease */ kcg_real Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM::ReadSpeedSupervisionInfo::IfBlock2::then::WhenBlock1 */ M_SUPERVISION_STATUS_DMI_Types_Pkg WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM11::TextMsgToBeAck */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11_TextMsgToBeAck;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock1::then::_L50 */ kcg_bool _L50_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock1::then::_L44 */ array_int_5 _L44_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock1::then::_L31 */ kcg_bool _L31_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock1::then::_L6 */ kcg_bool _L6_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock1::then::_L7 */ array_int_5 _L7_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock1::then::_L10 */ kcg_int _L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock1::then::_L11 */ kcg_bool _L11_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SymbolsAcknowledgmentSM::radyToBeAck */ kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SymbolsAcknowledgmentSM::radyToBeAck */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SymbolsAcknowledgmentSM::radyToBeAck */ kcg_bool br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock */ Icon_control_flag_T_DMI_Types_Pkg IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_in_area::WhenBlock2::C::IfBlock1 */ kcg_bool IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area_WhenBlock2_C;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_in_area::WhenBlock2 */ Area_group_T_DMI_Types_Pkg WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::clear_area::WhenBlock2::C::IfBlock1 */ kcg_bool IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area_WhenBlock2_C;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::clear_area::WhenBlock2::C::IfBlock1::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area_WhenBlock2_C_IfBlock1;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::clear_area::WhenBlock2 */ Area_group_T_DMI_Types_Pkg WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_with_yellow_flashing_frame_in_area::AreaGroupWhenBlock::C::AreaRankIfBlock */ kcg_bool AreaRankIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_with_yellow_flashing_frame_in_area::AreaGroupWhenBlock::C::AreaRankIfBlock::else::then::_L14 */ kcg_bool _L14_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_with_yellow_flashing_frame_in_area::AreaGroupWhenBlock::C::AreaRankIfBlock::else::then::_L10 */ kcg_bool _L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_with_yellow_flashing_frame_in_area::AreaGroupWhenBlock::C::AreaRankIfBlock::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM::IconPacketValid::IconControlFlagWhenBlock::show_icon_with_yellow_flashing_frame_in_area::AreaGroupWhenBlock */ Area_group_T_DMI_Types_Pkg AreaGroupWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::Insert_DriverID::_L60 */ kcg_bool _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::Insert_DriverID::_L56 */ kcg_int _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::Insert_DriverID::_L53 */ kcg_bool _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::Insert_DriverID::DriverIDKeyboardController::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID_DriverIDKeyboardController;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::Insert_TrainRN::_L60 */ kcg_bool _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::Insert_TrainRN::_L56 */ kcg_int _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::Insert_TrainRN::_L53 */ kcg_bool _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::Insert_TrainRN::TrainRNKeyboardController::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN_TrainRNKeyboardController;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM */ SSM_ST_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM */ SSM_ST_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::Insert_TrainRN */ kcg_bool br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::Insert_TrainRN */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::Insert_TrainRN */ kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::TrainDataValidationWindow */ kcg_bool br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::TrainDataValidationWindow */ kcg_bool br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::TrainDataValidationWindow */ kcg_bool br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::TrainDataValidationWindow */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::TrainDataValidationWindow */ kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::TrainDataValidationWindow */ kcg_bool br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::TrainDataValidationWindow */ kcg_bool br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::TrainDataWindow */ kcg_bool br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::TrainDataWindow */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::TrainDataWindow */ kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataWindow;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::DriverID_DMI_controlled */ kcg_bool br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::DriverID_DMI_controlled */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::DriverID_DMI_controlled */ kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::MainMenu */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::Insert_TrainRN::TrainRNKeyboardController::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN_TrainRNKeyboardController;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::Insert_TrainRN::_L53 */ kcg_bool _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::Insert_TrainRN::_L56 */ kcg_int _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::Insert_TrainRN::_L60 */ kcg_bool _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::DriverID_DMI_controlled::DriverIDKeyboardController::else */ kcg_bool else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled_DriverIDKeyboardController;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::DriverID_DMI_controlled::_L53 */ kcg_bool _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::DriverID_DMI_controlled::_L56 */ kcg_int _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM::DriverID_DMI_controlled::_L60 */ kcg_bool _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::Insert_DriverID */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::WaitingForReq */ kcg_bool br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_WaitingForReq;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::WaitingForReq */ kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_WaitingForReq;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::WaitingForReq */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_WaitingForReq;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::Insert_TrainRN */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu */ kcg_bool br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu */ kcg_bool br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu */ kcg_bool br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::NID_c9 */ kcg_int last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::NID_C1 */ kcg_int last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YellowBorder_C1 */ kcg_bool last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::dmiCommand_NID_AreaGroup */ Area_group_T_DMI_Types_Pkg last_dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YellowBorder_C9 */ kcg_bool last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::InternalWindowReq */ DMI_List_Entry_Request_T_DMI_Types_Pkg last_InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM */ SSM_ST_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM */ SSM_ST_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM */ kcg_bool WindowsSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainDataSM */ SSM_ST_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive TrainDataSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainDataSM */ SSM_ST_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainDataSM */ kcg_bool TrainDataSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YesNoTrainDataValidationSM */ SSM_ST_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive YesNoTrainDataValidationSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YesNoTrainDataValidationSM */ SSM_ST_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM */ SSM_ST_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive IconSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM */ SSM_ST_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SymbolsAcknowledgmentSM */ SSM_ST_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM17 */ SSM_ST_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SM17_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM17 */ SSM_ST_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::HourGlassSM */ SSM_ST_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive HourGlassSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::HourGlassSM */ SSM_ST_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM11 */ SSM_ST_SM11_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SM11_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM11 */ SSM_ST_SM11_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SM11_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM */ SSM_ST_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SpeedSupervisionSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM */ SSM_ST_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::EntryRequestIsValid */ kcg_bool EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::NoValid */ kcg_bool NoValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YesValid */ kcg_bool YesValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconGroupIndex */ kcg_int IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::NID_AreaGroup */ Area_group_T_DMI_Types_Pkg NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::NID_AreaRank */ kcg_int NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::NID_Icon_Rank */ kcg_int NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::ShowSingleMsg */ kcg_bool ShowSingleMsg_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::DMI_DynamicIsValid */ kcg_bool DMI_DynamicIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L221 */ kcg_int _L221_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L222 */ kcg_int _L222_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L223 */ kcg_real _L223_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L224 */ kcg_real _L224_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L225 */ kcg_int _L225_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L226 */ kcg_int _L226_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L227 */ kcg_real _L227_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L303 */ kcg_bool _L303_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L325 */ kcg_bool _L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L349 */ kcg_bool _L349_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L354 */ kcg_bool _L354_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L404 */ DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg _L404_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  /* DMI_Control_Pkg::DMI_Controller::traindataYesNoIndex_toDisplay */ kcg_int traindataYesNoIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::msgAckSign */ kcg_bool msgAckSign;
  /* DMI_Control_Pkg::DMI_Controller::Vinterv_Color_toDisplay */ kcg_int last_Vinterv_Color_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::vtarget_permColor_toDisplay */ kcg_int last_vtarget_permColor_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::Vinterv_Visibility_toDisplay */ kcg_bool last_Vinterv_Visibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::Vtarget_permVisibility_toDisplay */ kcg_bool last_Vtarget_permVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::VtargetColor_toDisplay */ kcg_int last_VtargetColor_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::VreleaseColor_toDisplay */ kcg_int last_VreleaseColor_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::VpermColor_toDisplay */ kcg_int last_VpermColor_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::modeSymbolAnnouncementIndex_toDisplay */ kcg_int last_modeSymbolAnnouncementIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::levelSymbolAnnouncementIndex_toDisplay */ kcg_int last_levelSymbolAnnouncementIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::iconGroupIndex_toDisplay */ kcg_int last_iconGroupIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::traindataYesNoIndex_toDisplay */ kcg_int last_traindataYesNoIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::traindataValidWinVisibility_toDisplay */ kcg_bool last_traindataValidWinVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::trainMaxspeed_toDisplay */ kcg_real last_trainMaxspeed_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::trainBrakePerc_toDisplay */ kcg_real last_trainBrakePerc_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::trainLenght_toDisplay */ kcg_real last_trainLenght_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::trainLoadingGougeIndex_toDisplay */ kcg_int last_trainLoadingGougeIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::trainAirtightIndex_toDisplay */ kcg_int last_trainAirtightIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::trainAxleloadIndex_toDisplay */ kcg_int last_trainAxleloadIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::trainCategoryIndex_toDisplay */ kcg_int last_trainCategoryIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::ArrayOfMsgIndex_toDisplay */ array_int_5 last_ArrayOfMsgIndex_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::ModeSymbolVisibility_toDisplay */ kcg_bool last_ModeSymbolVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::ModeSymbol_toDisplay */ kcg_int last_ModeSymbol_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::DistanceToTargetBarVisibility_toDisplay */ kcg_bool last_DistanceToTargetBarVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::CloseButtonEnabler_toDisplay */ kcg_int last_CloseButtonEnabler_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::ArrayButtonsEnabler_toDisplay */ array_int_30 last_ArrayButtonsEnabler_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::window_mask_visibility__toDisplay */ array_bool_15 last_window_mask_visibility__toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::TrainRN_Display_toDisplay */ array_int_9 last_TrainRN_Display_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::DriverID_Display_toDisplay */ array_int_9 last_DriverID_Display_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::PointerColor_toDisplay */ kcg_int last_PointerColor_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::StatusSymbolBrake_toDisplay */ kcg_bool last_StatusSymbolBrake_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::InterpolatedDistanceToTarget_toDisplay */ kcg_real last_InterpolatedDistanceToTarget_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::DistanceToTargetVisibilityDigital_toDisplay */ kcg_bool last_DistanceToTargetVisibilityDigital_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::DistanceToTarget_toDisplay */ kcg_real last_DistanceToTarget_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::GradientsValue_toDisplay */ array_real_12 last_GradientsValue_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::GradientsEnd_toDisplay */ array_real_12 last_GradientsEnd_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::GradientsStart_toDisplay */ array_real_12 last_GradientsStart_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedIntervention_toDisplay */ kcg_real last_SpeedIntervention_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedRelease_toDisplay */ kcg_real last_SpeedRelease_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedPermitted_toDisplay */ kcg_real last_SpeedPermitted_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedTarget_toDisplay */ kcg_real last_SpeedTarget_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedDigitThree_toDisplay */ kcg_real last_SpeedDigitThree_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedDigitTwo_toDisplay */ kcg_real last_SpeedDigitTwo_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::SpeedDigitOne_toDisplay */ kcg_real last_SpeedDigitOne_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::TrainDataWindowVisibility_toDisplay */ kcg_bool last_TrainDataWindowVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::TrainSpeed_toDisplay */ kcg_real last_TrainSpeed_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::LevelSymbolVisibility_toDisplay */ kcg_bool last_LevelSymbolVisibility_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::ETCS_LevelSymbol_toDisplay */ kcg_int last_ETCS_LevelSymbol_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::TrainPosition_toDisplay */ kcg_real last_TrainPosition_toDisplay;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM */ SSM_ST_CabinSM CabinSM_state_sel;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM */ SSM_ST_CabinSM CabinSM_state_act;
  /* DMI_Control_Pkg::DMI_Controller::CabinSM */ kcg_bool CabinSM_reset_act;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg default_DMI_driver_identifier;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg default_DMI_train_running_number_id;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg default_DMI_driver_request;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg default_DMI_train_data_ack;
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg default_DMI_status_report;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg default_DMI_text_message_ack;
  
  default_DMI_driver_identifier.valid = kcg_false;
  default_DMI_driver_identifier.systemTime = 0;
  default_DMI_driver_identifier.driverIdentifier[0] = '1';
  default_DMI_driver_identifier.driverIdentifier[1] = '2';
  default_DMI_driver_identifier.driverIdentifier[2] = '3';
  default_DMI_driver_identifier.driverIdentifier[3] = '4';
  default_DMI_driver_identifier.driverIdentifier[4] = '0';
  default_DMI_driver_identifier.driverIdentifier[5] = '0';
  default_DMI_driver_identifier.driverIdentifier[6] = '0';
  default_DMI_driver_identifier.driverIdentifier[7] = '0';
  default_DMI_driver_identifier.driverIdentifier[8] = '0';
  default_DMI_train_running_number_id.valid = kcg_false;
  default_DMI_train_running_number_id.systemTime = 0;
  default_DMI_train_running_number_id.trainRunningNumber = 1234;
  default_DMI_driver_request.valid = kcg_false;
  default_DMI_driver_request.systemTime = 0;
  default_DMI_driver_request.m_request = Start_of_mission_DMI_Types_Pkg;
  default_DMI_train_data_ack.valid = kcg_false;
  default_DMI_train_data_ack.systemTime = 0;
  default_DMI_train_data_ack.acknowledged = kcg_false;
  default_DMI_status_report.valid = kcg_false;
  default_DMI_status_report.systemTime = 0;
  default_DMI_status_report.statusSet = Running_state_DMI_Types_Pkg;
  default_DMI_status_report.nAlive = 0;
  default_DMI_text_message_ack.valid = kcg_false;
  default_DMI_text_message_ack.systemTime = 0;
  default_DMI_text_message_ack.messageIdentifier = 0;
  default_DMI_text_message_ack.acknowledged = kcg_false;
  tmp = (*TIU_trainStatus).valid & !(*TIU_trainStatus).deskOpen;
  tmp1 = (*TIU_trainStatus).valid & (*TIU_trainStatus).deskOpen;
  if (outC->init6) {
    last_LevelSymbolVisibility_toDisplay = kcg_false;
    last_TrainDataWindowVisibility_toDisplay = kcg_false;
    last_DistanceToTargetVisibilityDigital_toDisplay = kcg_false;
    last_StatusSymbolBrake_toDisplay = kcg_false;
    last_DistanceToTargetBarVisibility_toDisplay = kcg_false;
    last_ModeSymbolVisibility_toDisplay = kcg_false;
    last_traindataValidWinVisibility_toDisplay = kcg_false;
    last_Vtarget_permVisibility_toDisplay = kcg_false;
    last_Vinterv_Visibility_toDisplay = kcg_false;
    last_window_mask_visibility__toDisplay[0] = kcg_false;
    last_window_mask_visibility__toDisplay[1] = kcg_false;
    last_window_mask_visibility__toDisplay[2] = kcg_false;
    last_window_mask_visibility__toDisplay[3] = kcg_false;
    last_window_mask_visibility__toDisplay[4] = kcg_false;
    last_window_mask_visibility__toDisplay[5] = kcg_false;
    last_window_mask_visibility__toDisplay[6] = kcg_false;
    last_window_mask_visibility__toDisplay[7] = kcg_false;
    last_window_mask_visibility__toDisplay[8] = kcg_false;
    last_window_mask_visibility__toDisplay[9] = kcg_false;
    last_window_mask_visibility__toDisplay[10] = kcg_false;
    last_window_mask_visibility__toDisplay[11] = kcg_false;
    last_window_mask_visibility__toDisplay[12] = kcg_false;
    last_window_mask_visibility__toDisplay[13] = kcg_false;
    last_window_mask_visibility__toDisplay[14] = kcg_false;
    last_ArrayButtonsEnabler_toDisplay[0] = 2;
    last_ArrayButtonsEnabler_toDisplay[1] = 2;
    last_ArrayButtonsEnabler_toDisplay[2] = 2;
    last_ArrayButtonsEnabler_toDisplay[3] = 2;
    last_ArrayButtonsEnabler_toDisplay[4] = 2;
    last_ArrayButtonsEnabler_toDisplay[5] = 2;
    last_ArrayButtonsEnabler_toDisplay[6] = 2;
    last_ArrayButtonsEnabler_toDisplay[7] = 2;
    last_ArrayButtonsEnabler_toDisplay[8] = 2;
    last_ArrayButtonsEnabler_toDisplay[9] = 2;
    last_ArrayButtonsEnabler_toDisplay[10] = 0;
    last_ArrayButtonsEnabler_toDisplay[11] = 0;
    last_ArrayButtonsEnabler_toDisplay[12] = 0;
    last_ArrayButtonsEnabler_toDisplay[13] = 0;
    last_ArrayButtonsEnabler_toDisplay[14] = 0;
    last_ArrayButtonsEnabler_toDisplay[15] = 0;
    last_ArrayButtonsEnabler_toDisplay[16] = 0;
    last_ArrayButtonsEnabler_toDisplay[17] = 0;
    last_ArrayButtonsEnabler_toDisplay[18] = 0;
    last_ArrayButtonsEnabler_toDisplay[19] = 0;
    last_ArrayButtonsEnabler_toDisplay[20] = 0;
    last_ArrayButtonsEnabler_toDisplay[21] = 0;
    last_ArrayButtonsEnabler_toDisplay[22] = 0;
    last_ArrayButtonsEnabler_toDisplay[23] = 0;
    last_ArrayButtonsEnabler_toDisplay[24] = 0;
    last_ArrayButtonsEnabler_toDisplay[25] = 0;
    last_ArrayButtonsEnabler_toDisplay[26] = 0;
    last_ArrayButtonsEnabler_toDisplay[27] = 0;
    last_ArrayButtonsEnabler_toDisplay[28] = 0;
    last_ArrayButtonsEnabler_toDisplay[29] = 0;
    last_ArrayOfMsgIndex_toDisplay[0] = 0;
    last_ArrayOfMsgIndex_toDisplay[1] = 0;
    last_ArrayOfMsgIndex_toDisplay[2] = 0;
    last_ArrayOfMsgIndex_toDisplay[3] = 0;
    last_ArrayOfMsgIndex_toDisplay[4] = 0;
    last_Vinterv_Color_toDisplay = 1;
    last_vtarget_permColor_toDisplay = 1;
    last_VtargetColor_toDisplay = 0;
    last_VreleaseColor_toDisplay = 0;
    last_VpermColor_toDisplay = 0;
    last_modeSymbolAnnouncementIndex_toDisplay = 0;
    last_levelSymbolAnnouncementIndex_toDisplay = 0;
    last_iconGroupIndex_toDisplay = 0;
    last_traindataYesNoIndex_toDisplay = 1;
    last_trainMaxspeed_toDisplay = 0.0;
    last_trainBrakePerc_toDisplay = 0.0;
    last_trainLenght_toDisplay = 0.0;
    last_trainLoadingGougeIndex_toDisplay = 1;
    last_trainAirtightIndex_toDisplay = 1;
    last_trainAxleloadIndex_toDisplay = 1;
    last_trainCategoryIndex_toDisplay = 1;
    last_ModeSymbol_toDisplay = 13;
    last_CloseButtonEnabler_toDisplay = 26;
    kcg_copy_array_int_9(
      &last_TrainRN_Display_toDisplay,
      (array_int_9 *) &InitText1_DMI_Control_Pkg);
    kcg_copy_array_int_9(
      &last_DriverID_Display_toDisplay,
      (array_int_9 *) &InitText1_DMI_Control_Pkg);
    last_PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
    last_InterpolatedDistanceToTarget_toDisplay = 0.0;
    last_DistanceToTarget_toDisplay = 0.0;
    kcg_copy_array_real_12(
      &last_GradientsValue_toDisplay,
      (array_real_12 *) &GRADIENTSVALUE1_DMI_Control_Pkg);
    kcg_copy_array_real_12(
      &last_GradientsEnd_toDisplay,
      (array_real_12 *) &GRADIENTSEND1_DMI_Control_Pkg);
    kcg_copy_array_real_12(
      &last_GradientsStart_toDisplay,
      (array_real_12 *) &GRADIENTSSTART1_DMI_Control_Pkg);
    last_SpeedIntervention_toDisplay = 0.0;
    last_SpeedRelease_toDisplay = 0.0;
    last_SpeedPermitted_toDisplay = 0.0;
    last_SpeedTarget_toDisplay = 0.0;
    last_SpeedDigitThree_toDisplay = 0.0;
    last_SpeedDigitTwo_toDisplay = 0.0;
    last_SpeedDigitOne_toDisplay = 0.0;
    last_TrainSpeed_toDisplay = 0.0;
    last_ETCS_LevelSymbol_toDisplay = 4;
    last_TrainPosition_toDisplay = 0.0;
    outC->init6 = kcg_false;
    CabinSM_state_sel = SSM_st_DeskIsClose_CabinSM;
  }
  else {
    last_Vinterv_Color_toDisplay = outC->Vinterv_Color_toDisplay;
    last_vtarget_permColor_toDisplay = outC->vtarget_permColor_toDisplay;
    last_Vinterv_Visibility_toDisplay = outC->Vinterv_Visibility_toDisplay;
    last_Vtarget_permVisibility_toDisplay =
      outC->Vtarget_permVisibility_toDisplay;
    last_VtargetColor_toDisplay = outC->VtargetColor_toDisplay;
    last_VreleaseColor_toDisplay = outC->VreleaseColor_toDisplay;
    last_VpermColor_toDisplay = outC->VpermColor_toDisplay;
    last_modeSymbolAnnouncementIndex_toDisplay =
      outC->modeSymbolAnnouncementIndex_toDisplay;
    last_levelSymbolAnnouncementIndex_toDisplay =
      outC->levelSymbolAnnouncementIndex_toDisplay;
    last_iconGroupIndex_toDisplay = outC->iconGroupIndex_toDisplay;
    last_traindataYesNoIndex_toDisplay = outC->traindataYesNoIndex_toDisplay;
    last_traindataValidWinVisibility_toDisplay =
      outC->traindataValidWinVisibility_toDisplay;
    last_trainMaxspeed_toDisplay = outC->trainMaxspeed_toDisplay;
    last_trainBrakePerc_toDisplay = outC->trainBrakePerc_toDisplay;
    last_trainLenght_toDisplay = outC->trainLenght_toDisplay;
    last_trainLoadingGougeIndex_toDisplay =
      outC->trainLoadingGougeIndex_toDisplay;
    last_trainAirtightIndex_toDisplay = outC->trainAirtightIndex_toDisplay;
    last_trainAxleloadIndex_toDisplay = outC->trainAxleloadIndex_toDisplay;
    last_trainCategoryIndex_toDisplay = outC->trainCategoryIndex_toDisplay;
    kcg_copy_array_int_5(
      &last_ArrayOfMsgIndex_toDisplay,
      &outC->ArrayOfMsgIndex_toDisplay);
    last_ModeSymbolVisibility_toDisplay = outC->ModeSymbolVisibility_toDisplay;
    last_ModeSymbol_toDisplay = outC->ModeSymbol_toDisplay;
    last_DistanceToTargetBarVisibility_toDisplay =
      outC->DistanceToTargetBarVisibility_toDisplay;
    last_CloseButtonEnabler_toDisplay = outC->CloseButtonEnabler_toDisplay;
    kcg_copy_array_int_30(
      &last_ArrayButtonsEnabler_toDisplay,
      &outC->ArrayButtonsEnabler_toDisplay);
    kcg_copy_array_bool_15(
      &last_window_mask_visibility__toDisplay,
      &outC->window_mask_visibility__toDisplay);
    kcg_copy_array_int_9(
      &last_TrainRN_Display_toDisplay,
      &outC->TrainRN_Display_toDisplay);
    kcg_copy_array_int_9(
      &last_DriverID_Display_toDisplay,
      &outC->DriverID_Display_toDisplay);
    last_PointerColor_toDisplay = outC->PointerColor_toDisplay;
    last_StatusSymbolBrake_toDisplay = outC->StatusSymbolBrake_toDisplay;
    last_InterpolatedDistanceToTarget_toDisplay =
      outC->InterpolatedDistanceToTarget_toDisplay;
    last_DistanceToTargetVisibilityDigital_toDisplay =
      outC->DistanceToTargetVisibilityDigital_toDisplay;
    last_DistanceToTarget_toDisplay = outC->DistanceToTarget_toDisplay;
    kcg_copy_array_real_12(
      &last_GradientsValue_toDisplay,
      &outC->GradientsValue_toDisplay);
    kcg_copy_array_real_12(
      &last_GradientsEnd_toDisplay,
      &outC->GradientsEnd_toDisplay);
    kcg_copy_array_real_12(
      &last_GradientsStart_toDisplay,
      &outC->GradientsStart_toDisplay);
    last_SpeedIntervention_toDisplay = outC->SpeedIntervention_toDisplay;
    last_SpeedRelease_toDisplay = outC->SpeedRelease_toDisplay;
    last_SpeedPermitted_toDisplay = outC->SpeedPermitted_toDisplay;
    last_SpeedTarget_toDisplay = outC->SpeedTarget_toDisplay;
    last_SpeedDigitThree_toDisplay = outC->SpeedDigitThree_toDisplay;
    last_SpeedDigitTwo_toDisplay = outC->SpeedDigitTwo_toDisplay;
    last_SpeedDigitOne_toDisplay = outC->SpeedDigitOne_toDisplay;
    last_TrainDataWindowVisibility_toDisplay =
      outC->TrainDataWindowVisibility_toDisplay;
    last_TrainSpeed_toDisplay = outC->TrainSpeed_toDisplay;
    last_LevelSymbolVisibility_toDisplay =
      outC->LevelSymbolVisibility_toDisplay;
    last_ETCS_LevelSymbol_toDisplay = outC->ETCS_LevelSymbol_toDisplay;
    last_TrainPosition_toDisplay = outC->TrainPosition_toDisplay;
    CabinSM_state_sel = outC->CabinSM_state_nxt;
  }
  switch (CabinSM_state_sel) {
    case SSM_st_DeskIsOpen_CabinSM :
      if (tmp) {
        CabinSM_state_act = SSM_st_DeskIsClose_CabinSM;
      }
      else {
        CabinSM_state_act = SSM_st_DeskIsOpen_CabinSM;
      }
      CabinSM_reset_act = tmp;
      break;
    case SSM_st_DeskIsClose_CabinSM :
      if (tmp1) {
        CabinSM_state_act = SSM_st_DeskIsOpen_CabinSM;
      }
      else {
        CabinSM_state_act = SSM_st_DeskIsClose_CabinSM;
      }
      CabinSM_reset_act = tmp1;
      break;
    
  }
  switch (CabinSM_state_act) {
    case SSM_st_DeskIsClose_CabinSM :
      outC->StatusSymbolVisibility_toDisplay = kcg_false;
      outC->textMsgEnable_toDisplay = kcg_false;
      outC->yellowBorderMsg_toDisplay = kcg_false;
      outC->openDesk_toDisplay = kcg_true;
      outC->yellowBorderBrakeSymbol_toDisplay = kcg_false;
      outC->yellowBorderC1Area_toDisplay = kcg_false;
      outC->hourGlassVisibility_toDisplay = kcg_false;
      outC->CabinSM_state_nxt = SSM_st_DeskIsClose_CabinSM;
      outC->Vinterv_Color_toDisplay = last_Vinterv_Color_toDisplay;
      outC->vtarget_permColor_toDisplay = last_vtarget_permColor_toDisplay;
      outC->Vinterv_Visibility_toDisplay = last_Vinterv_Visibility_toDisplay;
      outC->Vtarget_permVisibility_toDisplay =
        last_Vtarget_permVisibility_toDisplay;
      outC->VtargetColor_toDisplay = last_VtargetColor_toDisplay;
      outC->VreleaseColor_toDisplay = last_VreleaseColor_toDisplay;
      outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
      outC->hourGlassCounter_toDisplay = 0.0;
      outC->modeSymbolAnnouncementIndex_toDisplay =
        last_modeSymbolAnnouncementIndex_toDisplay;
      outC->levelSymbolAnnouncementIndex_toDisplay =
        last_levelSymbolAnnouncementIndex_toDisplay;
      outC->iconGroupIndex_toDisplay = last_iconGroupIndex_toDisplay;
      kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->DMI_icons_ack,
        (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMI_Icons_Ack_DMI_Control_Pkg);
      outC->closeButtonIndex_toDisplay = 26;
      kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->DMI_text_message_ack,
        &default_DMI_text_message_ack);
      kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->DMI_status_report,
        &default_DMI_status_report);
      kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->DMI_train_data_ack,
        &default_DMI_train_data_ack);
      outC->traindataYesNoIndex_toDisplay = last_traindataYesNoIndex_toDisplay;
      outC->traindataValidWinVisibility_toDisplay =
        last_traindataValidWinVisibility_toDisplay;
      outC->trainMaxspeed_toDisplay = last_trainMaxspeed_toDisplay;
      outC->trainBrakePerc_toDisplay = last_trainBrakePerc_toDisplay;
      outC->trainLenght_toDisplay = last_trainLenght_toDisplay;
      outC->trainLoadingGougeIndex_toDisplay =
        last_trainLoadingGougeIndex_toDisplay;
      outC->trainAirtightIndex_toDisplay = last_trainAirtightIndex_toDisplay;
      outC->trainAxleloadIndex_toDisplay = last_trainAxleloadIndex_toDisplay;
      outC->trainCategoryIndex_toDisplay = last_trainCategoryIndex_toDisplay;
      kcg_copy_array_int_5(
        &outC->ArrayOfMsgIndex_toDisplay,
        &last_ArrayOfMsgIndex_toDisplay);
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->DMI_driver_request,
        &default_DMI_driver_request);
      outC->ModeSymbolVisibility_toDisplay =
        last_ModeSymbolVisibility_toDisplay;
      outC->ModeSymbol_toDisplay = last_ModeSymbol_toDisplay;
      outC->DistanceToTargetBarVisibility_toDisplay =
        last_DistanceToTargetBarVisibility_toDisplay;
      outC->RBC_status_symbol_toDisplay = 4;
      outC->CloseButtonEnabler_toDisplay = last_CloseButtonEnabler_toDisplay;
      kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
        &outC->DMI_train_running_number_id,
        &default_DMI_train_running_number_id);
      outC->DMI_identifier.valid = kcg_false;
      outC->DMI_identifier.systemTime = 0;
      outC->DMI_identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
      outC->DMI_identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
      outC->DMI_identifier.l_name = 0;
      outC->DMI_identifier.DMI_name[0] = ' ';
      outC->DMI_identifier.DMI_name[1] = ' ';
      outC->DMI_identifier.DMI_name[2] = ' ';
      outC->DMI_identifier.DMI_name[3] = ' ';
      outC->DMI_identifier.DMI_name[4] = ' ';
      outC->DMI_identifier.DMI_name[5] = ' ';
      outC->DMI_identifier.DMI_name[6] = ' ';
      outC->DMI_identifier.DMI_name[7] = ' ';
      outC->DMI_identifier.DMI_name[8] = ' ';
      outC->DMI_identifier.DMI_name[9] = ' ';
      outC->DMI_identifier.DMI_name[10] = ' ';
      outC->DMI_identifier.DMI_name[11] = ' ';
      outC->DMI_identifier.DMI_name[12] = ' ';
      outC->DMI_identifier.DMI_name[13] = ' ';
      outC->DMI_identifier.DMI_name[14] = ' ';
      outC->DMI_identifier.DMI_name[15] = ' ';
      outC->DMI_identifier.DMI_name[16] = ' ';
      outC->DMI_identifier.DMI_name[17] = ' ';
      outC->DMI_identifier.DMI_name[18] = ' ';
      outC->DMI_identifier.DMI_name[19] = ' ';
      outC->DMI_identifier.DMI_name[20] = ' ';
      outC->DMI_identifier.DMI_name[21] = ' ';
      outC->DMI_identifier.DMI_name[22] = ' ';
      outC->DMI_identifier.DMI_name[23] = ' ';
      outC->DMI_identifier.DMI_name[24] = ' ';
      outC->DMI_identifier.DMI_name[25] = ' ';
      outC->DMI_identifier.DMI_name[26] = ' ';
      outC->DMI_identifier.DMI_name[27] = ' ';
      outC->DMI_identifier.DMI_name[28] = ' ';
      outC->DMI_identifier.DMI_name[29] = ' ';
      outC->DMI_identifier.DMI_name[30] = ' ';
      outC->DMI_identifier.DMI_name[31] = ' ';
      outC->DMI_identifier.DMI_name[32] = ' ';
      outC->DMI_identifier.DMI_name[33] = ' ';
      outC->DMI_identifier.DMI_name[34] = ' ';
      outC->DMI_identifier.DMI_name[35] = ' ';
      outC->DMI_identifier.DMI_name[36] = ' ';
      outC->DMI_identifier.DMI_name[37] = ' ';
      outC->DMI_identifier.DMI_name[38] = ' ';
      outC->DMI_identifier.DMI_name[39] = ' ';
      outC->DMI_identifier.DMI_name[40] = ' ';
      outC->DMI_identifier.DMI_name[41] = ' ';
      outC->DMI_identifier.DMI_name[42] = ' ';
      outC->DMI_identifier.DMI_name[43] = ' ';
      outC->DMI_identifier.DMI_name[44] = ' ';
      outC->DMI_identifier.DMI_name[45] = ' ';
      outC->DMI_identifier.DMI_name[46] = ' ';
      outC->DMI_identifier.DMI_name[47] = ' ';
      outC->DMI_identifier.DMI_name[48] = ' ';
      outC->DMI_identifier.DMI_name[49] = ' ';
      outC->DMI_identifier.DMI_name[50] = ' ';
      outC->DMI_identifier.DMI_name[51] = ' ';
      outC->DMI_identifier.DMI_name[52] = ' ';
      outC->DMI_identifier.DMI_name[53] = ' ';
      outC->DMI_identifier.DMI_name[54] = ' ';
      outC->DMI_identifier.DMI_name[55] = ' ';
      outC->DMI_identifier.DMI_name[56] = ' ';
      outC->DMI_identifier.DMI_name[57] = ' ';
      outC->DMI_identifier.DMI_name[58] = ' ';
      outC->DMI_identifier.DMI_name[59] = ' ';
      outC->DMI_identifier.DMI_name[60] = ' ';
      outC->DMI_identifier.DMI_name[61] = ' ';
      outC->DMI_identifier.DMI_name[62] = ' ';
      outC->DMI_identifier.DMI_name[63] = ' ';
      outC->DMI_identifier.DMI_name[64] = ' ';
      outC->DMI_identifier.DMI_name[65] = ' ';
      outC->DMI_identifier.DMI_name[66] = ' ';
      outC->DMI_identifier.DMI_name[67] = ' ';
      outC->DMI_identifier.DMI_name[68] = ' ';
      outC->DMI_identifier.DMI_name[69] = ' ';
      outC->DMI_identifier.DMI_name[70] = ' ';
      outC->DMI_identifier.DMI_name[71] = ' ';
      outC->DMI_identifier.DMI_name[72] = ' ';
      outC->DMI_identifier.DMI_name[73] = ' ';
      outC->DMI_identifier.DMI_name[74] = ' ';
      outC->DMI_identifier.DMI_name[75] = ' ';
      outC->DMI_identifier.DMI_name[76] = ' ';
      outC->DMI_identifier.DMI_name[77] = ' ';
      outC->DMI_identifier.DMI_name[78] = ' ';
      outC->DMI_identifier.DMI_name[79] = ' ';
      outC->DMI_identifier.DMI_name[80] = ' ';
      outC->DMI_identifier.DMI_name[81] = ' ';
      outC->DMI_identifier.DMI_name[82] = ' ';
      outC->DMI_identifier.DMI_name[83] = ' ';
      outC->DMI_identifier.DMI_name[84] = ' ';
      outC->DMI_identifier.DMI_name[85] = ' ';
      outC->DMI_identifier.DMI_name[86] = ' ';
      outC->DMI_identifier.DMI_name[87] = ' ';
      outC->DMI_identifier.DMI_name[88] = ' ';
      outC->DMI_identifier.DMI_name[89] = ' ';
      outC->DMI_identifier.DMI_name[90] = ' ';
      outC->DMI_identifier.DMI_name[91] = ' ';
      outC->DMI_identifier.DMI_name[92] = ' ';
      outC->DMI_identifier.DMI_name[93] = ' ';
      outC->DMI_identifier.DMI_name[94] = ' ';
      outC->DMI_identifier.DMI_name[95] = ' ';
      outC->DMI_identifier.DMI_name[96] = ' ';
      outC->DMI_identifier.DMI_name[97] = ' ';
      outC->DMI_identifier.DMI_name[98] = ' ';
      outC->DMI_identifier.DMI_name[99] = ' ';
      outC->DMI_identifier.DMI_name[100] = ' ';
      outC->DMI_identifier.DMI_name[101] = ' ';
      outC->DMI_identifier.DMI_name[102] = ' ';
      outC->DMI_identifier.DMI_name[103] = ' ';
      outC->DMI_identifier.DMI_name[104] = ' ';
      outC->DMI_identifier.DMI_name[105] = ' ';
      outC->DMI_identifier.DMI_name[106] = ' ';
      outC->DMI_identifier.DMI_name[107] = ' ';
      outC->DMI_identifier.DMI_name[108] = ' ';
      outC->DMI_identifier.DMI_name[109] = ' ';
      outC->DMI_identifier.DMI_name[110] = ' ';
      outC->DMI_identifier.DMI_name[111] = ' ';
      outC->DMI_identifier.DMI_name[112] = ' ';
      outC->DMI_identifier.DMI_name[113] = ' ';
      outC->DMI_identifier.DMI_name[114] = ' ';
      outC->DMI_identifier.DMI_name[115] = ' ';
      outC->DMI_identifier.DMI_name[116] = ' ';
      outC->DMI_identifier.DMI_name[117] = ' ';
      outC->DMI_identifier.DMI_name[118] = ' ';
      outC->DMI_identifier.DMI_name[119] = ' ';
      outC->DMI_identifier.DMI_name[120] = ' ';
      outC->DMI_identifier.DMI_name[121] = ' ';
      outC->DMI_identifier.DMI_name[122] = ' ';
      outC->DMI_identifier.DMI_name[123] = ' ';
      outC->DMI_identifier.DMI_name[124] = ' ';
      outC->DMI_identifier.DMI_name[125] = ' ';
      outC->DMI_identifier.DMI_name[126] = ' ';
      outC->DMI_identifier.DMI_name[127] = ' ';
      outC->DMI_identifier.DMI_name[128] = ' ';
      outC->DMI_identifier.DMI_name[129] = ' ';
      outC->DMI_identifier.DMI_name[130] = ' ';
      outC->DMI_identifier.DMI_name[131] = ' ';
      outC->DMI_identifier.DMI_name[132] = ' ';
      outC->DMI_identifier.DMI_name[133] = ' ';
      outC->DMI_identifier.DMI_name[134] = ' ';
      outC->DMI_identifier.DMI_name[135] = ' ';
      outC->DMI_identifier.DMI_name[136] = ' ';
      outC->DMI_identifier.DMI_name[137] = ' ';
      outC->DMI_identifier.DMI_name[138] = ' ';
      outC->DMI_identifier.DMI_name[139] = ' ';
      outC->DMI_identifier.DMI_name[140] = ' ';
      outC->DMI_identifier.DMI_name[141] = ' ';
      outC->DMI_identifier.DMI_name[142] = ' ';
      outC->DMI_identifier.DMI_name[143] = ' ';
      outC->DMI_identifier.DMI_name[144] = ' ';
      outC->DMI_identifier.DMI_name[145] = ' ';
      outC->DMI_identifier.DMI_name[146] = ' ';
      outC->DMI_identifier.DMI_name[147] = ' ';
      outC->DMI_identifier.DMI_name[148] = ' ';
      outC->DMI_identifier.DMI_name[149] = ' ';
      outC->DMI_identifier.DMI_name[150] = ' ';
      outC->DMI_identifier.DMI_name[151] = ' ';
      outC->DMI_identifier.DMI_name[152] = ' ';
      outC->DMI_identifier.DMI_name[153] = ' ';
      outC->DMI_identifier.DMI_name[154] = ' ';
      outC->DMI_identifier.DMI_name[155] = ' ';
      outC->DMI_identifier.DMI_name[156] = ' ';
      outC->DMI_identifier.DMI_name[157] = ' ';
      outC->DMI_identifier.DMI_name[158] = ' ';
      outC->DMI_identifier.DMI_name[159] = ' ';
      outC->DMI_identifier.DMI_name[160] = ' ';
      outC->DMI_identifier.DMI_name[161] = ' ';
      outC->DMI_identifier.DMI_name[162] = ' ';
      outC->DMI_identifier.DMI_name[163] = ' ';
      outC->DMI_identifier.DMI_name[164] = ' ';
      outC->DMI_identifier.DMI_name[165] = ' ';
      outC->DMI_identifier.DMI_name[166] = ' ';
      outC->DMI_identifier.DMI_name[167] = ' ';
      outC->DMI_identifier.DMI_name[168] = ' ';
      outC->DMI_identifier.DMI_name[169] = ' ';
      outC->DMI_identifier.DMI_name[170] = ' ';
      outC->DMI_identifier.DMI_name[171] = ' ';
      outC->DMI_identifier.DMI_name[172] = ' ';
      outC->DMI_identifier.DMI_name[173] = ' ';
      outC->DMI_identifier.DMI_name[174] = ' ';
      outC->DMI_identifier.DMI_name[175] = ' ';
      outC->DMI_identifier.DMI_name[176] = ' ';
      outC->DMI_identifier.DMI_name[177] = ' ';
      outC->DMI_identifier.DMI_name[178] = ' ';
      outC->DMI_identifier.DMI_name[179] = ' ';
      outC->DMI_identifier.DMI_name[180] = ' ';
      outC->DMI_identifier.DMI_name[181] = ' ';
      outC->DMI_identifier.DMI_name[182] = ' ';
      outC->DMI_identifier.DMI_name[183] = ' ';
      outC->DMI_identifier.DMI_name[184] = ' ';
      outC->DMI_identifier.DMI_name[185] = ' ';
      outC->DMI_identifier.DMI_name[186] = ' ';
      outC->DMI_identifier.DMI_name[187] = ' ';
      outC->DMI_identifier.DMI_name[188] = ' ';
      outC->DMI_identifier.DMI_name[189] = ' ';
      outC->DMI_identifier.DMI_name[190] = ' ';
      outC->DMI_identifier.DMI_name[191] = ' ';
      outC->DMI_identifier.DMI_name[192] = ' ';
      outC->DMI_identifier.DMI_name[193] = ' ';
      outC->DMI_identifier.DMI_name[194] = ' ';
      outC->DMI_identifier.DMI_name[195] = ' ';
      outC->DMI_identifier.DMI_name[196] = ' ';
      outC->DMI_identifier.DMI_name[197] = ' ';
      outC->DMI_identifier.DMI_name[198] = ' ';
      outC->DMI_identifier.DMI_name[199] = ' ';
      outC->DMI_identifier.DMI_name[200] = ' ';
      outC->DMI_identifier.DMI_name[201] = ' ';
      outC->DMI_identifier.DMI_name[202] = ' ';
      outC->DMI_identifier.DMI_name[203] = ' ';
      outC->DMI_identifier.DMI_name[204] = ' ';
      outC->DMI_identifier.DMI_name[205] = ' ';
      outC->DMI_identifier.DMI_name[206] = ' ';
      outC->DMI_identifier.DMI_name[207] = ' ';
      outC->DMI_identifier.DMI_name[208] = ' ';
      outC->DMI_identifier.DMI_name[209] = ' ';
      outC->DMI_identifier.DMI_name[210] = ' ';
      outC->DMI_identifier.DMI_name[211] = ' ';
      outC->DMI_identifier.DMI_name[212] = ' ';
      outC->DMI_identifier.DMI_name[213] = ' ';
      outC->DMI_identifier.DMI_name[214] = ' ';
      outC->DMI_identifier.DMI_name[215] = ' ';
      outC->DMI_identifier.DMI_name[216] = ' ';
      outC->DMI_identifier.DMI_name[217] = ' ';
      outC->DMI_identifier.DMI_name[218] = ' ';
      outC->DMI_identifier.DMI_name[219] = ' ';
      outC->DMI_identifier.DMI_name[220] = ' ';
      outC->DMI_identifier.DMI_name[221] = ' ';
      outC->DMI_identifier.DMI_name[222] = ' ';
      outC->DMI_identifier.DMI_name[223] = ' ';
      outC->DMI_identifier.DMI_name[224] = ' ';
      outC->DMI_identifier.DMI_name[225] = ' ';
      outC->DMI_identifier.DMI_name[226] = ' ';
      outC->DMI_identifier.DMI_name[227] = ' ';
      outC->DMI_identifier.DMI_name[228] = ' ';
      outC->DMI_identifier.DMI_name[229] = ' ';
      outC->DMI_identifier.DMI_name[230] = ' ';
      outC->DMI_identifier.DMI_name[231] = ' ';
      outC->DMI_identifier.DMI_name[232] = ' ';
      outC->DMI_identifier.DMI_name[233] = ' ';
      outC->DMI_identifier.DMI_name[234] = ' ';
      outC->DMI_identifier.DMI_name[235] = ' ';
      outC->DMI_identifier.DMI_name[236] = ' ';
      outC->DMI_identifier.DMI_name[237] = ' ';
      outC->DMI_identifier.DMI_name[238] = ' ';
      outC->DMI_identifier.DMI_name[239] = ' ';
      outC->DMI_identifier.DMI_name[240] = ' ';
      outC->DMI_identifier.DMI_name[241] = ' ';
      outC->DMI_identifier.DMI_name[242] = ' ';
      outC->DMI_identifier.DMI_name[243] = ' ';
      outC->DMI_identifier.DMI_name[244] = ' ';
      outC->DMI_identifier.DMI_name[245] = ' ';
      outC->DMI_identifier.DMI_name[246] = ' ';
      outC->DMI_identifier.DMI_name[247] = ' ';
      outC->DMI_identifier.DMI_name[248] = ' ';
      outC->DMI_identifier.DMI_name[249] = ' ';
      outC->DMI_identifier.DMI_name[250] = ' ';
      outC->DMI_identifier.DMI_name[251] = ' ';
      outC->DMI_identifier.DMI_name[252] = ' ';
      outC->DMI_identifier.DMI_name[253] = ' ';
      outC->DMI_identifier.DMI_name[254] = ' ';
      outC->DMI_identifier.M_VERSION =
        M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
      kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
        &outC->DMI_driver_identifier,
        &default_DMI_driver_identifier);
      kcg_copy_array_int_30(
        &outC->ArrayButtonsEnabler_toDisplay,
        &last_ArrayButtonsEnabler_toDisplay);
      kcg_copy_array_bool_15(
        &outC->window_mask_visibility__toDisplay,
        &last_window_mask_visibility__toDisplay);
      kcg_copy_array_int_9(
        &outC->TrainRN_Display_toDisplay,
        &last_TrainRN_Display_toDisplay);
      kcg_copy_array_int_9(
        &outC->DriverID_Display_toDisplay,
        &last_DriverID_Display_toDisplay);
      outC->PointerColor_toDisplay = last_PointerColor_toDisplay;
      outC->StatusSymbolBrake_toDisplay = last_StatusSymbolBrake_toDisplay;
      outC->InterpolatedDistanceToTarget_toDisplay =
        last_InterpolatedDistanceToTarget_toDisplay;
      outC->DistanceToTargetVisibilityDigital_toDisplay =
        last_DistanceToTargetVisibilityDigital_toDisplay;
      outC->DistanceToTarget_toDisplay = last_DistanceToTarget_toDisplay;
      kcg_copy_array_real_12(
        &outC->GradientsValue_toDisplay,
        &last_GradientsValue_toDisplay);
      kcg_copy_array_real_12(
        &outC->GradientsEnd_toDisplay,
        &last_GradientsEnd_toDisplay);
      kcg_copy_array_real_12(
        &outC->GradientsStart_toDisplay,
        &last_GradientsStart_toDisplay);
      outC->SpeedIntervention_toDisplay = last_SpeedIntervention_toDisplay;
      outC->SpeedRelease_toDisplay = last_SpeedRelease_toDisplay;
      outC->SpeedPermitted_toDisplay = last_SpeedPermitted_toDisplay;
      outC->SpeedTarget_toDisplay = last_SpeedTarget_toDisplay;
      outC->SpeedDigitThree_toDisplay = last_SpeedDigitThree_toDisplay;
      outC->SpeedDigitTwo_toDisplay = last_SpeedDigitTwo_toDisplay;
      outC->SpeedDigitOne_toDisplay = last_SpeedDigitOne_toDisplay;
      outC->TrainDataWindowVisibility_toDisplay =
        last_TrainDataWindowVisibility_toDisplay;
      outC->TrainSpeed_toDisplay = last_TrainSpeed_toDisplay;
      outC->LevelSymbolVisibility_toDisplay =
        last_LevelSymbolVisibility_toDisplay;
      outC->ETCS_LevelSymbol_toDisplay = last_ETCS_LevelSymbol_toDisplay;
      outC->TrainPosition_toDisplay = last_TrainPosition_toDisplay;
      break;
    case SSM_st_DeskIsOpen_CabinSM :
      outC->openDesk_toDisplay = kcg_false;
      if (CabinSM_reset_act) {
        outC->init = kcg_true;
      }
      if (outC->init) {
        outC->init = kcg_false;
        HandshakeSM_state_sel_CabinSM_DeskIsOpen =
          SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM;
      }
      else {
        HandshakeSM_state_sel_CabinSM_DeskIsOpen =
          outC->HandshakeSM_state_nxt_CabinSM_DeskIsOpen;
      }
      switch (HandshakeSM_state_sel_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          HandshakeSM_reset_act_CabinSM_DeskIsOpen =
            (*DMI_identifier_request).valid;
          if ((*DMI_identifier_request).valid) {
            HandshakeSM_state_act_CabinSM_DeskIsOpen =
              SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM;
            tmp1 = kcg_true;
          }
          else {
            HandshakeSM_state_act_CabinSM_DeskIsOpen =
              SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM;
            tmp1 = kcg_false;
          }
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          HandshakeSM_reset_act_CabinSM_DeskIsOpen = kcg_false;
          HandshakeSM_state_act_CabinSM_DeskIsOpen =
            SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM;
          tmp1 = kcg_false;
          break;
        
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            outC->init5 = kcg_true;
          }
          break;
        
      }
      if (CabinSM_reset_act) {
        outC->init5 = kcg_true;
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (outC->init5) {
            last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0;
            last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0;
            last_dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              C_DMI_Types_Pkg;
            last_InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              Enter_revalidate_driver_identifier_DMI_Types_Pkg;
          }
          else {
            last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            last_dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            last_InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            /* 1 */ Counter_reset_pwlinear_int(&outC->Context_1);
            /* 5 */ DMI_status_reset_DMI_Control_Pkg_Sub_func(&outC->Context_5);
          }
          break;
        
      }
      if (CabinSM_reset_act) {
        /* 1 */ Counter_reset_pwlinear_int(&outC->Context_1);
        /* 5 */ DMI_status_reset_DMI_Control_Pkg_Sub_func(&outC->Context_5);
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          /* 1 */ Counter_pwlinear_int(1, kcg_false, &outC->Context_1);
          /* 5 */
          DMI_status_DMI_Control_Pkg_Sub_func(
            outC->Context_1.Count,
            &outC->Context_5);
          kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
            &_L404_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &outC->Context_5.StatusOutput);
          if (outC->init5) {
            SpeedSupervisionSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
          }
          else {
            SpeedSupervisionSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->SpeedSupervisionSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          DMI_DynamicIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            (*DMI_dynamic).valid;
          switch (SpeedSupervisionSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              if (DMI_DynamicIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
              }
              else {
                SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
              }
              break;
            case SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              if (DMI_DynamicIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
              }
              else {
                SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
              }
              break;
            
          }
          switch (SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              IfBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo =
                (*DMI_dynamic).mode == M_MODE_Full_Supervision;
              if (IfBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo) {
                WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2 =
                  (*DMI_dynamic).sup_status;
                switch (WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2) {
                  case CSM_DMI_Types_Pkg :
                    vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM =
                      (kcg_real) (*DMI_dynamic).v_intervention;
                    vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM =
                      (kcg_real) (*DMI_dynamic).v_permitted;
                    _L36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM =
                      vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM >
                      vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM;
                    isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM =
                      _L36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM &
                      (((*DMI_dynamic).m_warning ==
                          supDis_overspeed_DMI_Types_Pkg) |
                        ((*DMI_dynamic).m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM) {
                    }
                    else {
                      else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM_IfBlock1 =
                        _L36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM &
                        ((*DMI_dynamic).m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                    }
                    isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM =
                      (vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM >=
                        0.0) & ((*DMI_dynamic).m_warning !=
                        supDis_indication_DMI_Types_Pkg);
                    break;
                  case PIM_DMI_Types_Pkg :
                    vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
                      (kcg_real) (*DMI_dynamic).v_intervention;
                    Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
                      (kcg_real) (*DMI_dynamic).v_permitted;
                    _L75_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
                      vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM >
                      Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
                    isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
                      _L75_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM &
                      (((*DMI_dynamic).m_warning ==
                          supDis_overspeed_DMI_Types_Pkg) |
                        ((*DMI_dynamic).m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                    }
                    else {
                      else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM_IfBlock4 =
                        _L75_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM &
                        ((*DMI_dynamic).m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                    }
                    _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
                      (*DMI_dynamic).m_warning !=
                      supDis_indication_DMI_Types_Pkg;
                    Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
                      (kcg_real) (*DMI_dynamic).v_target;
                    isWhite_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
                      _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM &
                      (Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM >=
                        Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM);
                    isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
                      (Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM >=
                        0.0) &
                      _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
                    Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
                      (kcg_real) (*DMI_dynamic).v_release;
                    isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM =
                      (Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM >=
                        0.0) &
                      _L45_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
                    break;
                  case TSM_DMI_Types_Pkg :
                    vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      (kcg_real) (*DMI_dynamic).v_intervention;
                    Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      (kcg_real) (*DMI_dynamic).v_permitted;
                    _L92_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM >
                      Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
                    isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      _L92_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM &
                      (((*DMI_dynamic).m_warning ==
                          supDis_overspeed_DMI_Types_Pkg) |
                        ((*DMI_dynamic).m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                    }
                    else {
                      else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM_IfBlock3 =
                        _L92_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM &
                        ((*DMI_dynamic).m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                    }
                    Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      (kcg_real) (*DMI_dynamic).v_target;
                    _L54_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM >=
                      Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
                    isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      _L54_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM &
                      ((*DMI_dynamic).m_warning != supDis_normal_DMI_Types_Pkg);
                    if (isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                    }
                    else {
                      else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM_IfBlock4 =
                        ((*DMI_dynamic).m_warning ==
                          supDis_normal_DMI_Types_Pkg) &
                        _L54_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
                    }
                    isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM >=
                      0.0;
                    Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      (kcg_real) (*DMI_dynamic).v_release;
                    isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM =
                      Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM >=
                      0.0;
                    break;
                  case RSM_DMI_Types_Pkg :
                    Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM =
                      (kcg_real) (*DMI_dynamic).v_permitted;
                    _L22_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM =
                      (supDis_intervention_DMI_Types_Pkg ==
                        (*DMI_dynamic).m_warning) | ((*DMI_dynamic).m_warning ==
                        supDis_indication_DMI_Types_Pkg);
                    isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM =
                      _L22_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM &
                      (Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM >=
                        (kcg_real) (*DMI_dynamic).v_target);
                    Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM =
                      (kcg_real) (*DMI_dynamic).v_release;
                    isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM =
                      (Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM >=
                        0.0) &
                      _L22_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM;
                    break;
                  
                }
              }
              ModeCheckIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo =
                ((*DMI_dynamic).mode == M_MODE_Full_Supervision) |
                ((*DMI_dynamic).mode == M_MODE_Limited_Supervision) |
                ((*DMI_dynamic).mode == M_MODE_On_Sight);
              if (ModeCheckIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo) {
                _43_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                  (*DMI_dynamic).sup_status;
                switch (_43_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                  case CSM_DMI_Types_Pkg :
                    _L31_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM =
                      last_TrainSpeed_toDisplay > (kcg_real)
                        (*DMI_dynamic).v_permitted;
                    isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM =
                      _L31_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM &
                      ((supDis_overspeed_DMI_Types_Pkg ==
                          (*DMI_dynamic).m_warning) |
                        ((*DMI_dynamic).m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM) {
                    }
                    else {
                      _42_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM_PointerColor =
                        _L31_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM &
                        ((*DMI_dynamic).m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                    }
                    break;
                  case PIM_DMI_Types_Pkg :
                    vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM =
                      (kcg_real) (*DMI_dynamic).v_permitted;
                    _L55_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM =
                      last_TrainSpeed_toDisplay >
                      vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM;
                    isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM =
                      _L55_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM &
                      ((supDis_overspeed_DMI_Types_Pkg ==
                          (*DMI_dynamic).m_warning) |
                        ((*DMI_dynamic).m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM) {
                    }
                    else {
                      _41_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM_PointerColor =
                        _L55_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM &
                        ((*DMI_dynamic).m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                      if (_41_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM_PointerColor) {
                      }
                      else {
                        _40_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM_PointerColor =
                          (last_TrainSpeed_toDisplay >= (kcg_real)
                              (*DMI_dynamic).v_target) &
                          (last_TrainSpeed_toDisplay <=
                            vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM) &
                          ((supDis_normal_DMI_Types_Pkg ==
                              (*DMI_dynamic).m_warning) |
                            ((*DMI_dynamic).m_warning ==
                              supDis_intervention_DMI_Types_Pkg));
                      }
                    }
                    break;
                  case TSM_DMI_Types_Pkg :
                    vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM =
                      (kcg_real) (*DMI_dynamic).v_permitted;
                    _L5_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM =
                      last_TrainSpeed_toDisplay >
                      vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
                    isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM =
                      _L5_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM &
                      ((supDis_overspeed_DMI_Types_Pkg ==
                          (*DMI_dynamic).m_warning) |
                        ((*DMI_dynamic).m_warning ==
                          supDis_warning_DMI_Types_Pkg));
                    _L37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM =
                      (last_TrainSpeed_toDisplay >= (kcg_real)
                          (*DMI_dynamic).v_target) &
                      (last_TrainSpeed_toDisplay <=
                        vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM);
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM) {
                    }
                    else {
                      _39_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor =
                        _L5_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM &
                        ((*DMI_dynamic).m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                      if (_39_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor) {
                      }
                      else {
                        _38_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor =
                          _L37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM &
                          (supDis_normal_DMI_Types_Pkg ==
                            (*DMI_dynamic).m_warning);
                        if (_38_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor) {
                        }
                        else {
                          _37_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor =
                            _L37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM &
                            (((*DMI_dynamic).m_warning ==
                                supDis_indication_DMI_Types_Pkg) |
                              ((*DMI_dynamic).m_warning ==
                                supDis_intervention_DMI_Types_Pkg));
                        }
                      }
                    }
                    break;
                  case RSM_DMI_Types_Pkg :
                    vRelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_RSM =
                      (kcg_real) (*DMI_dynamic).v_release;
                    if (vRelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_RSM !=
                      - 1.0) {
                      isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_RSM =
                        (last_TrainSpeed_toDisplay >= 0.0) &
                        (last_TrainSpeed_toDisplay <=
                          vRelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_RSM) &
                        (((*DMI_dynamic).m_warning ==
                            supDis_indication_DMI_Types_Pkg) |
                          ((*DMI_dynamic).m_warning ==
                            supDis_intervention_DMI_Types_Pkg));
                    }
                    else {
                      isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_RSM =
                        kcg_false;
                    }
                    if (isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_RSM) {
                    }
                    else {
                      else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_RSM_PointerColor =
                        (last_TrainSpeed_toDisplay > (kcg_real)
                            (*DMI_dynamic).v_permitted) &
                        ((*DMI_dynamic).m_warning ==
                          supDis_intervention_DMI_Types_Pkg);
                    }
                    break;
                  
                }
              }
              else {
                _36_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                  ((*DMI_dynamic).mode == M_MODE_Staff_Responsible) |
                  ((*DMI_dynamic).mode == M_MODE_Unfitted);
                if (_36_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                  _35_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                    (*DMI_dynamic).sup_status;
                  switch (_35_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                    case CSM_DMI_Types_Pkg :
                      _L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM =
                        last_TrainSpeed_toDisplay > (kcg_real)
                          (*DMI_dynamic).v_permitted;
                      _50_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM =
                        _L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM &
                        ((supDis_overspeed_DMI_Types_Pkg ==
                            (*DMI_dynamic).m_warning) |
                          ((*DMI_dynamic).m_warning ==
                            supDis_warning_DMI_Types_Pkg));
                      if (_50_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM) {
                      }
                      else {
                        _34_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM_PointerColor =
                          _L2_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM &
                          ((*DMI_dynamic).m_warning ==
                            supDis_intervention_DMI_Types_Pkg);
                      }
                      break;
                    case PIM_DMI_Types_Pkg :
                      _48_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM =
                        (kcg_real) (*DMI_dynamic).v_permitted;
                      _L13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM =
                        last_TrainSpeed_toDisplay >=
                        _48_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM;
                      _49_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM =
                        _L13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM &
                        ((supDis_overspeed_DMI_Types_Pkg ==
                            (*DMI_dynamic).m_warning) |
                          ((*DMI_dynamic).m_warning ==
                            supDis_warning_DMI_Types_Pkg));
                      if (_49_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM) {
                      }
                      else {
                        _33_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM_PointerColor =
                          _L13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM &
                          ((*DMI_dynamic).m_warning ==
                            supDis_intervention_DMI_Types_Pkg);
                        if (_33_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM_PointerColor) {
                        }
                        else {
                          else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM_PointerColor =
                            (last_TrainSpeed_toDisplay >= (kcg_real)
                                (*DMI_dynamic).v_target) &
                            (last_TrainSpeed_toDisplay <=
                              _48_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM) &
                            ((supDis_normal_DMI_Types_Pkg ==
                                (*DMI_dynamic).m_warning) |
                              ((*DMI_dynamic).m_warning ==
                                supDis_intervention_DMI_Types_Pkg));
                        }
                      }
                      break;
                    case TSM_DMI_Types_Pkg :
                      _47_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM =
                        (kcg_real) (*DMI_dynamic).v_permitted;
                      _L544_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM =
                        last_TrainSpeed_toDisplay >=
                        _47_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM;
                      _46_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM =
                        _L544_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM &
                        ((supDis_overspeed_DMI_Types_Pkg ==
                            (*DMI_dynamic).m_warning) |
                          ((*DMI_dynamic).m_warning ==
                            supDis_warning_DMI_Types_Pkg));
                      _L3745_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM =
                        (last_TrainSpeed_toDisplay >= (kcg_real)
                            (*DMI_dynamic).v_target) &
                        (last_TrainSpeed_toDisplay <=
                          _47_vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM);
                      if (_46_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM) {
                      }
                      else {
                        _32_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor =
                          _L544_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM &
                          ((*DMI_dynamic).m_warning ==
                            supDis_intervention_DMI_Types_Pkg);
                        if (_32_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor) {
                        }
                        else {
                          _31_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor =
                            _L3745_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM &
                            (supDis_normal_DMI_Types_Pkg ==
                              (*DMI_dynamic).m_warning);
                          if (_31_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor) {
                          }
                          else {
                            else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor =
                              _L3745_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM &
                              (((*DMI_dynamic).m_warning ==
                                  supDis_indication_DMI_Types_Pkg) |
                                ((*DMI_dynamic).m_warning ==
                                  supDis_intervention_DMI_Types_Pkg));
                          }
                        }
                      }
                      break;
                    
                  }
                }
                else {
                  _30_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                    ((*DMI_dynamic).mode == M_MODE_Shunting) |
                    ((*DMI_dynamic).mode == M_MODE_Reversing);
                  if (_30_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                    WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                      (*DMI_dynamic).sup_status;
                    switch (WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                      case CSM_DMI_Types_Pkg :
                        _L251_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM =
                          last_TrainSpeed_toDisplay > (kcg_real)
                            (*DMI_dynamic).v_permitted;
                        _52_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM =
                          _L251_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM &
                          ((supDis_overspeed_DMI_Types_Pkg ==
                              (*DMI_dynamic).m_warning) |
                            ((*DMI_dynamic).m_warning ==
                              supDis_warning_DMI_Types_Pkg));
                        if (_52_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM) {
                        }
                        else {
                          else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM_PointerColor =
                            _L251_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM &
                            ((*DMI_dynamic).m_warning ==
                              supDis_intervention_DMI_Types_Pkg);
                        }
                        break;
                      
                    }
                  }
                  else {
                    _29_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                      ((*DMI_dynamic).mode == M_MODE_Non_Leading) |
                      ((*DMI_dynamic).mode == M_MODE_Stand_By) |
                      ((*DMI_dynamic).mode == M_MODE_Post_Trip);
                    if (_29_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                    }
                    else {
                      else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                        ((*DMI_dynamic).mode == M_MODE_Trip) &
                        DMI_DynamicIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                        isRed_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock =
                          ((last_TrainSpeed_toDisplay > (kcg_real)
                                (*DMI_dynamic).v_permitted) &
                            (((*DMI_dynamic).sup_status == CSM_DMI_Types_Pkg) |
                              ((*DMI_dynamic).sup_status == TSM_DMI_Types_Pkg) |
                              ((*DMI_dynamic).sup_status ==
                                PIM_DMI_Types_Pkg))) |
                          (((*DMI_dynamic).sup_status == RSM_DMI_Types_Pkg) &
                            (last_TrainSpeed_toDisplay > (kcg_real)
                                (*DMI_dynamic).v_release));
                      }
                    }
                  }
                }
              }
              outC->SpeedSupervisionSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
              break;
            case SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              outC->SpeedSupervisionSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM;
              break;
            
          }
          if (DMI_DynamicIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            /* 4 */
            ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func(
              DMI_dynamic,
              &outC->_L397_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &tmp28);
            /* 5 */
            RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func(
              (*DMI_dynamic).radioConnectionStatus,
              &outC->_L393_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &tmp27);
          }
          else if (outC->init5) {
            outC->_L397_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 13;
            outC->_L393_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 0;
          }
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            /* 5 */
            DistanceToTargetManager_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
              &outC->_1_Context_5);
          }
          break;
        
      }
      if (CabinSM_reset_act) {
        /* 5 */
        DistanceToTargetManager_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
          &outC->_1_Context_5);
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          msgAckSign = kcg_false;
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (DMI_DynamicIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            /* 5 */
            DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget(
              DMI_dynamic,
              &outC->_1_Context_5);
            tmp26 = outC->_1_Context_5.InterpolatedDistanceToTarget_toDisplay;
            tmp25 = outC->_1_Context_5.DistanceToTargetBarVisibility_toDisplay;
            tmp24 =
              outC->_1_Context_5.DistanceToTargetVisibilityDigital_toDisplay;
            outC->_L386_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->_1_Context_5.DistanceToTarget_toDisplay;
            /* 3 */
            DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed(
              DMI_dynamic,
              &outC->_L378_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &tmp23,
              &tmp22,
              &tmp21);
            /* 7 */
            LevelSymbolToIndex_DMI_Control_Pkg_Sub_func(
              (*DMI_dynamic).level.level,
              &outC->_L368_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &tmp20);
          }
          else if (outC->init5) {
            outC->_L368_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L386_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
            outC->_L378_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
          }
          if (outC->init5) {
            SM11_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_TextMsgToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11;
          }
          else {
            SM11_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->SM11_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          switch (SM11_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_TextMsgAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11 :
              SM11_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_TextMsgToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11;
              msgAckSign = kcg_false;
              break;
            case SSM_st_TextMsgToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11 :
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11_TextMsgToBeAck =
                textMsgAck_fromDisplay & MousePressed;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11_TextMsgToBeAck) {
                SM11_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_TextMsgAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11;
                msgAckSign = kcg_true;
              }
              else {
                SM11_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_TextMsgToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11;
                msgAckSign = kcg_false;
              }
              break;
            
          }
          switch (SM11_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_TextMsgToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11 :
              outC->SM11_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_TextMsgToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11;
              break;
            case SSM_st_TextMsgAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11 :
              outC->SM11_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_TextMsgAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11;
              break;
            
          }
          ShowSingleMsg_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            ((*DMI_text_message).l_text == 0) &
            ((*DMI_text_message).q_textConfirm ==
              Q_TEXTCONFIRM_Confirmation_required);
          if (ShowSingleMsg_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            _L11_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1 =
              kcg_false;
            for (i = 0; i < 27; i++) {
              tmp16 =
                _L11_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1;
              /* 2 */
              Find_Q_Text_iterator_DMI_Control_Pkg_Utils(
                i,
                tmp16,
                ArrayEnum_Q_text_DMI_Control_Pkg[i],
                (*DMI_text_message).q_text,
                &tmp15,
                &_L11_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1);
              _L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1 =
                i + 1;
              if (!tmp15) {
                break;
              }
            }
          }
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            outC->init4 = kcg_true;
            /* 3 */
            FIFO_Integer_reset_DMI_Control_Pkg_Utils_5(&outC->Context_3);
          }
          break;
        
      }
      if (CabinSM_reset_act) {
        outC->init4 = kcg_true;
        /* 3 */ FIFO_Integer_reset_DMI_Control_Pkg_Utils_5(&outC->Context_3);
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (ShowSingleMsg_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            if (outC->init4) {
              tmp14 = kcg_false;
            }
            else {
              tmp14 =
                outC->_L35_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1;
            }
            /* 3 */
            FIFO_Integer_DMI_Control_Pkg_Utils_5(
              _L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1,
              tmp14,
              msgAckSign,
              &outC->Context_3);
            _L6_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1 =
              outC->Context_3.isEmpty;
            kcg_copy_array_int_5(
              &_L7_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1,
              &outC->Context_3.FIFO_Queue);
          }
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            /* 10 */
            FlashingOperator_reset_DMI_Control_Pkg_Utils(&outC->Context_10);
          }
          break;
        
      }
      if (CabinSM_reset_act) {
        /* 10 */
        FlashingOperator_reset_DMI_Control_Pkg_Utils(&outC->Context_10);
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (ShowSingleMsg_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            /* 10 */
            FlashingOperator_DMI_Control_Pkg_Utils(
              (kcg_bool)
                !_L6_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1,
              SystemTime,
              cIntervalFlashingTimeMsg_DMI_Control_Pkg,
              &outC->Context_10);
            _L50_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1 =
              outC->Context_10.flashigOut;
            outC->_L35_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1 =
              (*DMI_text_message).valid;
          }
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            /* 4 */
            FIFO_Integer_reset_DMI_Control_Pkg_Utils_5(&outC->Context_4);
          }
          break;
        
      }
      if (CabinSM_reset_act) {
        /* 4 */ FIFO_Integer_reset_DMI_Control_Pkg_Utils_5(&outC->Context_4);
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (ShowSingleMsg_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            /* 4 */
            FIFO_Integer_DMI_Control_Pkg_Utils_5(
              (*DMI_text_message).nid_message,
              outC->_L35_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1,
              msgAckSign,
              &outC->Context_4);
            kcg_copy_array_int_5(
              &_L44_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1,
              &outC->Context_4.FIFO_Queue);
            if (msgAckSign) {
              _L31_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1 =
                kcg_true;
            }
            else {
              _L31_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1 =
                kcg_false;
            }
          }
          EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            (*DMI_entry_request).valid;
          if (EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            /* 4 */
            DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest(
              DMI_entry_request,
              &outC->_L159_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &tmp19,
              &outC->_L161_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &tmp18,
              &tmp17);
          }
          else if (outC->init5) {
            outC->_L161_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L159_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
          }
          if (outC->init5) {
            HourGlassSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
            WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM;
            SM17_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
            SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
            IconSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
          }
          else {
            HourGlassSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->HourGlassSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            SM17_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->SM17_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            IconSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->IconSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              _L349_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_false;
              _L354_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_false;
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              _L354_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_false;
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN =
                TrainRN_Ack_fromDisplay & MousePressed;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN) {
                _L349_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  kcg_true;
              }
              else {
                _L349_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  kcg_false;
              }
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_WaitingForReq =
                outC->_L161_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              _L349_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_false;
              br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_WaitingForReq =
                outC->_L159_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_WaitingForReq) {
                _L354_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  kcg_true;
              }
              else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_WaitingForReq) {
                _L354_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  kcg_true;
              }
              else {
                _L354_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  kcg_false;
              }
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              _L354_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_false;
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID =
                DriverID_Ack_fromDisplay & MousePressed;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID) {
                _L349_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  kcg_true;
              }
              else {
                _L349_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  kcg_false;
              }
              break;
            
          }
          switch (HourGlassSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              if (_L349_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              }
              else {
                HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              }
              break;
            case SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              if (_L354_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive |
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              }
              else {
                HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              }
              break;
            
          }
          switch (HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              outC->HourGlassSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              break;
            case SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              outC->HourGlassSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM;
              break;
            
          }
          switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              _L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_true;
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                cClearC1AreaSymbol_DMI_Control_Pkg.DMI_nid_area_group;
              break;
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              _L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_false;
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              break;
            case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              _L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_true;
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                cClearBrakeStatusSymbol_DMI_Control_Pkg.DMI_nid_area_group;
              break;
            case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck =
                C1AreaAck_fromDisplay & MousePressed;
              br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck =
                brakeStatusSymbolAck_fromDisplay & MousePressed;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck) {
              }
              else {
                br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck =
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck;
              }
              _L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_false;
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              break;
            
          }
          switch (SM17_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck) {
                    tmp13 = kcg_false;
                  }
                  else if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck) {
                    tmp13 = kcg_true;
                  }
                  else {
                    tmp13 = kcg_false;
                  }
                  break;
                case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                  tmp13 = kcg_false;
                  break;
                case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                  tmp13 = kcg_false;
                  break;
                case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                  tmp13 = kcg_false;
                  break;
                
              }
              if (tmp13) {
                SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              }
              else {
                switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                  case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck) {
                      tmp12 = kcg_true;
                    }
                    else {
                      tmp12 = kcg_false;
                    }
                    break;
                  case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    tmp12 = kcg_false;
                    break;
                  case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    tmp12 = kcg_false;
                    break;
                  case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    tmp12 = kcg_false;
                    break;
                  
                }
                if (tmp12) {
                  SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
                }
                else {
                  SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
                }
              }
              break;
            case SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              break;
            case SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              break;
            
          }
          switch (SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              outC->SM17_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              break;
            case SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              outC->SM17_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              break;
            case SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              outC->SM17_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17;
              break;
            
          }
          if (_L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
              case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  cClearC1AreaSymbol_DMI_Control_Pkg.DMI_nid_area_rank;
                NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  cClearC1AreaSymbol_DMI_Control_Pkg.DMI_nid_icon_rank;
                break;
              case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  0;
                NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  0;
                break;
              case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  cClearBrakeStatusSymbol_DMI_Control_Pkg.DMI_nid_area_rank;
                NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  cClearBrakeStatusSymbol_DMI_Control_Pkg.DMI_nid_icon_rank;
                break;
              case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  0;
                NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  0;
                break;
              
            }
          }
          else {
            NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              (*DMI_icons).DMI_nid_area_rank;
            NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              (*DMI_icons).DMI_nid_area_group;
            NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              (*DMI_icons).DMI_nid_icon_rank;
          }
          switch (IconSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              if (!(*DMI_icons).valid |
                !_L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              }
              else {
                IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              }
              break;
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              if ((*DMI_icons).valid |
                _L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              }
              else {
                IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              }
              break;
            
          }
          switch (IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              if (_L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                  case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid =
                      clear_area_DMI_Types_Pkg;
                    break;
                  case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid =
                      cClearBrakeStatusSymbol_DMI_Control_Pkg.DMI_m_icon_control_flag;
                    break;
                  case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid =
                      clear_area_DMI_Types_Pkg;
                    break;
                  case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                    IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid =
                      cClearC1AreaSymbol_DMI_Control_Pkg.DMI_m_icon_control_flag;
                    break;
                  
                }
              }
              else {
                IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid =
                  (*DMI_icons).DMI_m_icon_control_flag;
              }
              switch (IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid) {
                case show_icon_in_area_DMI_Types_Pkg :
                  outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case clear_area_DMI_Types_Pkg :
                  WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area =
                    NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  switch (WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area) {
                    case A_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case B_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case C_DMI_Types_Pkg :
                      IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area_WhenBlock2_C =
                        NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                        9;
                      if (IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area_WhenBlock2_C) {
                        outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          kcg_false;
                        outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      }
                      else {
                        else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area_WhenBlock2_C_IfBlock1 =
                          NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                          1;
                        if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area_WhenBlock2_C_IfBlock1) {
                          outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            kcg_false;
                        }
                        else {
                          outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                        }
                        outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      }
                      break;
                    case D_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case H_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    
                  }
                  break;
                case show_icon_flashing_in_area_DMI_Types_Pkg :
                  outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case show_icon_with_yellow_flashing_frame_in_area_DMI_Types_Pkg :
                  AreaGroupWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area =
                    NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  switch (AreaGroupWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area) {
                    case A_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case B_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case C_DMI_Types_Pkg :
                      AreaRankIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C =
                        NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                        9;
                      if (AreaRankIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C) {
                        outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          kcg_true;
                        outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      }
                      else {
                        else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock =
                          NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                          1;
                        if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock) {
                          _L14_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock =
                            kcg_false;
                          _L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock =
                            kcg_false;
                          for (i = 0; i < 5; i++) {
                            tmp11 =
                              _L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock;
                            /* 1 */
                            CheckElem_iterator_DMI_Control_Pkg(
                              tmp11,
                              ArrayOfIndex_YellowLevelSymbols_DMI_Control_Pkg[i],
                              NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                              &tmp10,
                              &_L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock);
                            if (!tmp10) {
                              break;
                            }
                          }
                          for (i = 0; i < 8; i++) {
                            tmp9 =
                              _L14_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock;
                            /* 2 */
                            CheckElem_iterator_DMI_Control_Pkg(
                              tmp9,
                              ArrayOfIndex_YellowModeSymbols_DMI_Control_Pkg[i],
                              NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                              &tmp8,
                              &_L14_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock);
                            if (!tmp8) {
                              break;
                            }
                          }
                          outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            _L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock |
                            _L14_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock;
                        }
                        else {
                          outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                        }
                        outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      }
                      break;
                    case D_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case H_DMI_Types_Pkg :
                      outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    
                  }
                  break;
                
              }
              break;
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              break;
            
          }
          switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck) {
                outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              }
              else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM_radyToBeAck) {
                outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              }
              else {
                outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              }
              break;
            case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              break;
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              if (outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive |
                outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              }
              else {
                outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              }
              break;
            case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
              outC->SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM;
              break;
            
          }
          _L303_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            (*DMI_icons).DMI_m_icon_flashing_freq != 0.0;
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            /* 9 */
            FlashingOperator_reset_DMI_Control_Pkg_Utils(&outC->Context_9);
          }
          break;
        
      }
      if (CabinSM_reset_act) {
        /* 9 */ FlashingOperator_reset_DMI_Control_Pkg_Utils(&outC->Context_9);
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          if (_L303_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            /* 9 */
            FlashingOperator_DMI_Control_Pkg_Utils(
              _L303_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              SystemTime,
              (kcg_int) (*DMI_icons).DMI_m_icon_flashing_freq,
              &outC->Context_9);
            outC->flashingVariable_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->Context_9.flashigOut;
          }
          else if (outC->init5) {
            outC->flashingVariable_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
          }
          switch (IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              outC->IconSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              switch (IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid) {
                case show_icon_with_yellow_flashing_frame_in_area_DMI_Types_Pkg :
                  switch (AreaGroupWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area) {
                    case A_DMI_Types_Pkg :
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case B_DMI_Types_Pkg :
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case C_DMI_Types_Pkg :
                      if (AreaRankIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C) {
                        outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          (*DMI_icons).DMI_nid_icon_identifier;
                        outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      }
                      else {
                        outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                          last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                        if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock) {
                          outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            (*DMI_icons).DMI_nid_icon_identifier;
                        }
                        else {
                          outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                            last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                        }
                      }
                      break;
                    case D_DMI_Types_Pkg :
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    case H_DMI_Types_Pkg :
                      outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                        last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                      break;
                    
                  }
                  break;
                case show_icon_flashing_in_area_DMI_Types_Pkg :
                  outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case clear_area_DMI_Types_Pkg :
                  outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case show_icon_in_area_DMI_Types_Pkg :
                  WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area =
                    NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  switch (WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area) {
                    case C_DMI_Types_Pkg :
                      IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area_WhenBlock2_C =
                        NID_AreaRank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                        9;
                      break;
                    
                  }
                  outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                
              }
              break;
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              outC->IconSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM;
              outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              break;
            
          }
          if (_L325_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            switch (SymbolsAcknowledgmentSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
              case SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                tmp7 = status_symbols_DMI_Types_Pkg;
                break;
              case SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                tmp7 =
                  cClearBrakeStatusSymbol_DMI_Control_Pkg.DMI_nid_icon_group;
                break;
              case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                tmp7 = status_symbols_DMI_Types_Pkg;
                break;
              case SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM :
                tmp7 = cClearC1AreaSymbol_DMI_Control_Pkg.DMI_nid_icon_group;
                break;
              
            }
          }
          else {
            tmp7 = (*DMI_icons).DMI_nid_icon_group;
          }
          switch (tmp7) {
            case level_symbol_DMI_Types_Pkg :
              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                cLevelSymbol_IconGroup_DMI_Control_Pkg;
              break;
            case mode_symbols_DMI_Types_Pkg :
              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                cModeSymbol_IconGroup_DMI_Control_Pkg;
              break;
            case status_symbols_DMI_Types_Pkg :
              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                cStatusSymbol_IconGroup_DMI_Control_Pkg;
              break;
            case order_an_announcements_symbols_DMI_Types_Pkg :
              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                0;
              break;
            case planning_information_symbols_DMI_Types_Pkg :
              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                0;
              break;
            case navigation_symbols_DMI_Types_Pkg :
              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                0;
              break;
            
            default :
              IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                0;
          }
          NoValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            MousePressed & traindataNoAck_fromDisplay;
          YesValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
            traindataYesAck_fromDisplay & MousePressed;
          if (outC->init5) {
            YesNoTrainDataValidationSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
            TrainDataSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
          }
          else {
            YesNoTrainDataValidationSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->YesNoTrainDataValidationSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
            TrainDataSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              outC->TrainDataSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          }
          switch (YesNoTrainDataValidationSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM :
              if (YesValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                !NoValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              }
              else {
                YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              }
              break;
            case SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM :
              if (NoValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                !YesValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              }
              else {
                YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              }
              break;
            
          }
          switch (YesNoTrainDataValidationSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM :
              outC->YesNoTrainDataValidationSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              traindataYesNoIndex_toDisplay = 2;
              break;
            case SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM :
              outC->YesNoTrainDataValidationSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM;
              traindataYesNoIndex_toDisplay = 1;
              break;
            
          }
          switch (TrainDataSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              if ((*DMI_train_data).valid) {
                TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
              }
              else {
                TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
              }
              TrainDataSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                (*DMI_train_data).valid;
              break;
            case SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              TrainDataSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                kcg_false;
              TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
              break;
            
          }
          switch (TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              if (TrainDataSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                outC->init3 = kcg_true;
              }
              break;
            
          }
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            outC->init3 = kcg_true;
          }
          break;
        
      }
      if (CabinSM_reset_act) {
        outC->init3 = kcg_true;
      }
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          switch (TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              outC->TrainDataSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
              kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
                &tmp6,
                (DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *)
                  &DMI_train_data_constant_DMI_Control_Pkg);
              break;
            case SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              if ((*DMI_train_data).valid) {
                kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
                  &outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues,
                  DMI_train_data);
              }
              else if (outC->init3) {
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.valid =
                  kcg_false;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.systemTime =
                  0;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.trainCategory =
                  NC_TRAIN_Passenger_train;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.l_train =
                  0;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.m_brakeperct =
                  0;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.v_maxTrain =
                  0;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.m_axleLoad =
                  M_AXLELOADCAT_E5;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.m_airTight =
                  M_AIRTIGHT_Not_fitted;
                outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues.m_loadingGauge =
                  M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
              }
              outC->TrainDataSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM;
              kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
                &tmp6,
                &outC->_L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues);
              break;
            
          }
          /* 1 */
          TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData(
            &tmp6,
            &_L221_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L222_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L223_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L224_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L225_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L226_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            &_L227_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          if ((*DMI_menu_request).valid) {
            /* 7 */
            DMI_menu_req_To_ButtonEnabler_DMI_Control_Pkg_Sub_func_MenuRequest(
              DMI_menu_request,
              &outC->_L184_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          }
          else if (outC->init5) {
            kcg_copy_array_int_30(
              &outC->_L184_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              (array_int_30 *) &AllMenuButtonsDisabled_DMI_Control_Pkg);
          }
          if (EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            outC->HideMainmenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp17;
            outC->_L162_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp18;
          }
          else if (outC->init5) {
            outC->HideMainmenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L162_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
          }
          switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                outC->HideMainmenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                MousePressed & startRequest_fromDisplay;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu) {
                WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM;
                WindowsSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  kcg_true;
              }
              else {
                WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM;
                WindowsSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu;
              }
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN) {
                WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM;
              }
              else {
                WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM;
              }
              WindowsSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_WaitingForReq =
                outC->_L162_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_WaitingForReq) {
                WindowsSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  kcg_true;
                WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM;
              }
              else if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_WaitingForReq) {
                WindowsSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  kcg_true;
                WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM;
              }
              else {
                if (br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_WaitingForReq) {
                  WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM;
                }
                else {
                  WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM;
                }
                WindowsSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_WaitingForReq;
              }
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID) {
                WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM;
              }
              else {
                WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                  SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM;
              }
              WindowsSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID;
              break;
            
          }
          switch (WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              if (WindowsSM_reset_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
                outC->init2 = kcg_true;
              }
              break;
            
          }
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            outC->init2 = kcg_true;
          }
          break;
        
      }
      if (CabinSM_reset_act) {
        outC->init2 = kcg_true;
      }
      outC->CabinSM_state_nxt = SSM_st_DeskIsOpen_CabinSM;
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->HandshakeSM_state_nxt_CabinSM_DeskIsOpen =
            SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM;
          outC->hourGlassVisibility_toDisplay = kcg_false;
          outC->Vinterv_Color_toDisplay = last_Vinterv_Color_toDisplay;
          outC->vtarget_permColor_toDisplay = last_vtarget_permColor_toDisplay;
          outC->Vinterv_Visibility_toDisplay =
            last_Vinterv_Visibility_toDisplay;
          outC->Vtarget_permVisibility_toDisplay =
            last_Vtarget_permVisibility_toDisplay;
          outC->VtargetColor_toDisplay = last_VtargetColor_toDisplay;
          outC->VreleaseColor_toDisplay = last_VreleaseColor_toDisplay;
          outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          switch (WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID =
                kcg_false;
              for (i = 0; i < 12; i++) {
                _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID =
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID |
                  (*keypad_fromDisplay)[i];
              }
              _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID =
                /* 7 */
                CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID,
                  keypad_fromDisplay);
              _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID =
                (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID ==
                  ASCII_Backsp_DMI_Control_Pkg) & MousePressed &
                _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID;
              if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID) {
              }
              else {
                else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID_DriverIDKeyboardController =
                  (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID !=
                    ASCII_Backsp_DMI_Control_Pkg) & MousePressed &
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID;
              }
              outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM;
              outC->InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM;
              outC->InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN =
                kcg_false;
              for (i = 0; i < 12; i++) {
                _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN =
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN |
                  (*keypad_fromDisplay)[i];
              }
              _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN =
                /* 8 */
                CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN,
                  keypad_fromDisplay);
              _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN =
                (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN ==
                  ASCII_Backsp_DMI_Control_Pkg) & MousePressed &
                _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN;
              if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN) {
              }
              else {
                else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN_TrainRNKeyboardController =
                  (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN !=
                    ASCII_Backsp_DMI_Control_Pkg) & MousePressed &
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN;
              }
              outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM;
              outC->InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                last_InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
              break;
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              if (outC->init2) {
                WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                  SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
              }
              else {
                WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu;
              }
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu) {
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN =
                    closeButton_fromDisplay & MousePressed;
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN =
                    TrainRN_Ack_fromDisplay & MousePressed;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                  }
                  else {
                    if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN) {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                        SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                    }
                    else {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                        SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                    }
                    br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN =
                      br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN;
                  }
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                    closeButton_fromDisplay & MousePressed;
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                    outC->_L162_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
                    EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                    (traindataYesNoIndex_toDisplay == 1) &
                    traindataAck_fromDisplay & MousePressed;
                  br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                    (traindataYesNoIndex_toDisplay == 2) &
                    traindataAck_fromDisplay & MousePressed;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                      SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                  }
                  else {
                    if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                        SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                    }
                    else if (br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                        SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                    }
                    else if (br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                        SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                    }
                    else {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                        SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                    }
                    br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                      br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow;
                    if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                    }
                    else {
                      br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                        br_3_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow;
                      if (br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                      }
                      else {
                        br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow =
                          br_4_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow;
                      }
                    }
                  }
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataWindow =
                    closeButton_fromDisplay & MousePressed;
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataWindow =
                    confirmTrainData_fromDisplay & MousePressed;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataWindow) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                  }
                  else {
                    if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataWindow) {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                        SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                    }
                    else {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                        SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                    }
                    br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataWindow =
                      br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataWindow;
                  }
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                    closeButton_fromDisplay & MousePressed;
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                    DriverID_Ack_fromDisplay & MousePressed;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                  }
                  else {
                    if (br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                        SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                    }
                    else {
                      WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                        SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                    }
                    br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                      br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                  }
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_MainMenu =
                    openTrainDataWindow_fromDisplay & MousePressed;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_MainMenu) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                      SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                  }
                  else if (openDriverID_fromDisplay & MousePressed) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                      SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                  }
                  else if (openTrainRN_fromDisplay & MousePressed) {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                      SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                  }
                  else {
                    WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                      SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                  }
                  break;
                
              }
              outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM;
              switch (WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu) {
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN =
                    kcg_false;
                  for (i = 0; i < 12; i++) {
                    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN =
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN |
                      (*keypad_fromDisplay)[i];
                  }
                  _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN =
                    /* 13 */
                    CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN,
                      keypad_fromDisplay);
                  _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN =
                    (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN ==
                      ASCII_Backsp_DMI_Control_Pkg) & MousePressed &
                    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN;
                  if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN) {
                  }
                  else {
                    else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN_TrainRNKeyboardController =
                      (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN !=
                        ASCII_Backsp_DMI_Control_Pkg) & MousePressed &
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN;
                  }
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                    SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                  outC->InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    Enter_revalidate_train_running_number_DMI_Types_Pkg;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                    SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                  outC->InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                    SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                  outC->InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    last_InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                    kcg_false;
                  for (i = 0; i < 12; i++) {
                    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled |
                      (*keypad_fromDisplay)[i];
                  }
                  _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                    /* 12 */
                    CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled,
                      keypad_fromDisplay);
                  _L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled =
                    (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled ==
                      ASCII_Backsp_DMI_Control_Pkg) & MousePressed &
                    _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                  if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                  }
                  else {
                    else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled_DriverIDKeyboardController =
                      (_L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled !=
                        ASCII_Backsp_DMI_Control_Pkg) & MousePressed &
                      _L53_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled;
                  }
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                    SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                  outC->InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  outC->WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                    SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM;
                  outC->InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
                    Show_main_window_DMI_Types_Pkg;
                  break;
                
              }
              break;
            
          }
          switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu) {
              }
              else {
                br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu =
                  br_2_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu;
              }
              break;
            
          }
          outC->HandshakeSM_state_nxt_CabinSM_DeskIsOpen =
            SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM;
          switch (SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              if (IfBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo) {
                switch (WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2) {
                  case CSM_DMI_Types_Pkg :
                    outC->vtarget_permColor_toDisplay =
                      last_vtarget_permColor_toDisplay;
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM) {
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                    }
                    else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM_IfBlock1) {
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_RED_DMI_Control_Pkg;
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                    }
                    else {
                      outC->Vinterv_Color_toDisplay =
                        last_Vinterv_Color_toDisplay;
                      outC->Vinterv_Visibility_toDisplay = kcg_false;
                    }
                    outC->VtargetColor_toDisplay = last_VtargetColor_toDisplay;
                    outC->VreleaseColor_toDisplay =
                      last_VreleaseColor_toDisplay;
                    if (isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM) {
                      outC->Vtarget_permVisibility_toDisplay = kcg_false;
                      outC->VpermColor_toDisplay =
                        cCOLOR_DARK_GREY_DMI_Control_Pkg;
                    }
                    else {
                      outC->Vtarget_permVisibility_toDisplay =
                        last_Vtarget_permVisibility_toDisplay;
                      outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
                    }
                    break;
                  case PIM_DMI_Types_Pkg :
                    outC->vtarget_permColor_toDisplay =
                      last_vtarget_permColor_toDisplay;
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                    }
                    else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM_IfBlock4) {
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_RED_DMI_Control_Pkg;
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                    }
                    else {
                      outC->Vinterv_Color_toDisplay =
                        last_Vinterv_Color_toDisplay;
                      outC->Vinterv_Visibility_toDisplay = kcg_false;
                    }
                    if (isWhite_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->Vtarget_permVisibility_toDisplay = kcg_true;
                    }
                    else {
                      outC->Vtarget_permVisibility_toDisplay = kcg_false;
                    }
                    if (isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->VtargetColor_toDisplay =
                        cCOLOR_DARK_GREY_DMI_Control_Pkg;
                    }
                    else {
                      outC->VtargetColor_toDisplay =
                        last_VtargetColor_toDisplay;
                    }
                    if (isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->VreleaseColor_toDisplay =
                        cCOLOR_MEDIUM_GREY_DMI_Control_Pkg;
                    }
                    else {
                      outC->VreleaseColor_toDisplay =
                        last_VreleaseColor_toDisplay;
                    }
                    outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
                    break;
                  case TSM_DMI_Types_Pkg :
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                    }
                    else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM_IfBlock3) {
                      outC->Vinterv_Color_toDisplay =
                        cCOLOR_RED_DMI_Control_Pkg;
                      outC->Vinterv_Visibility_toDisplay = kcg_true;
                    }
                    else {
                      outC->Vinterv_Color_toDisplay =
                        last_Vinterv_Color_toDisplay;
                      outC->Vinterv_Visibility_toDisplay = kcg_false;
                    }
                    if (isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                      outC->vtarget_permColor_toDisplay =
                        cCOLOR_YELLOW_DMI_Control_Pkg;
                      outC->Vtarget_permVisibility_toDisplay = kcg_true;
                    }
                    else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM_IfBlock4) {
                      outC->vtarget_permColor_toDisplay =
                        ccOLOR_WHITE_DMI_Control_Pkg;
                      outC->Vtarget_permVisibility_toDisplay = kcg_true;
                    }
                    else {
                      outC->vtarget_permColor_toDisplay =
                        last_vtarget_permColor_toDisplay;
                      outC->Vtarget_permVisibility_toDisplay = kcg_false;
                    }
                    if (isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                      outC->VtargetColor_toDisplay =
                        cCOLOR_DARK_GREY_DMI_Control_Pkg;
                    }
                    else {
                      outC->VtargetColor_toDisplay =
                        last_VtargetColor_toDisplay;
                    }
                    if (isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                      outC->VreleaseColor_toDisplay =
                        cCOLOR_MEDIUM_GREY_DMI_Control_Pkg;
                    }
                    else {
                      outC->VreleaseColor_toDisplay =
                        last_VreleaseColor_toDisplay;
                    }
                    outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
                    break;
                  case RSM_DMI_Types_Pkg :
                    outC->Vinterv_Visibility_toDisplay = kcg_false;
                    outC->Vinterv_Color_toDisplay =
                      last_Vinterv_Color_toDisplay;
                    if (isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM) {
                      outC->vtarget_permColor_toDisplay =
                        cCOLOR_YELLOW_DMI_Control_Pkg;
                      outC->Vtarget_permVisibility_toDisplay = kcg_true;
                    }
                    else {
                      outC->vtarget_permColor_toDisplay =
                        last_vtarget_permColor_toDisplay;
                      outC->Vtarget_permVisibility_toDisplay = kcg_false;
                    }
                    outC->VtargetColor_toDisplay = last_VtargetColor_toDisplay;
                    if (isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM) {
                      outC->VreleaseColor_toDisplay =
                        cCOLOR_MEDIUM_GREY_DMI_Control_Pkg;
                    }
                    else {
                      outC->VreleaseColor_toDisplay =
                        last_VreleaseColor_toDisplay;
                    }
                    outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
                    break;
                  case supervision_status_unknown_DMI_Types_Pkg :
                    outC->Vinterv_Color_toDisplay =
                      last_Vinterv_Color_toDisplay;
                    outC->vtarget_permColor_toDisplay =
                      last_vtarget_permColor_toDisplay;
                    outC->Vinterv_Visibility_toDisplay =
                      last_Vinterv_Visibility_toDisplay;
                    outC->Vtarget_permVisibility_toDisplay =
                      last_Vtarget_permVisibility_toDisplay;
                    outC->VtargetColor_toDisplay = last_VtargetColor_toDisplay;
                    outC->VreleaseColor_toDisplay =
                      last_VreleaseColor_toDisplay;
                    outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
                    break;
                  
                }
              }
              else {
                outC->Vtarget_permVisibility_toDisplay = kcg_false;
                outC->Vinterv_Visibility_toDisplay = kcg_false;
                outC->Vinterv_Color_toDisplay = last_Vinterv_Color_toDisplay;
                outC->vtarget_permColor_toDisplay =
                  last_vtarget_permColor_toDisplay;
                outC->VtargetColor_toDisplay = 0;
                outC->VreleaseColor_toDisplay = 0;
                outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
              }
              break;
            case SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              outC->Vinterv_Color_toDisplay = last_Vinterv_Color_toDisplay;
              outC->vtarget_permColor_toDisplay =
                last_vtarget_permColor_toDisplay;
              outC->Vinterv_Visibility_toDisplay =
                last_Vinterv_Visibility_toDisplay;
              outC->Vtarget_permVisibility_toDisplay =
                last_Vtarget_permVisibility_toDisplay;
              outC->VtargetColor_toDisplay = last_VtargetColor_toDisplay;
              outC->VreleaseColor_toDisplay = last_VreleaseColor_toDisplay;
              outC->VpermColor_toDisplay = last_VpermColor_toDisplay;
              break;
            
          }
          switch (HourGlassSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              outC->hourGlassVisibility_toDisplay = kcg_false;
              break;
            case SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM :
              outC->hourGlassVisibility_toDisplay = kcg_true;
              break;
            
          }
          if (HandshakeSM_reset_act_CabinSM_DeskIsOpen) {
            /* HourGlassAnimation */
            HourGlassAnimation_reset_DMI_Control_Pkg_Sub_func(
              &outC->Context_HourGlassAnimation);
          }
          break;
        
      }
      if (CabinSM_reset_act) {
        /* HourGlassAnimation */
        HourGlassAnimation_reset_DMI_Control_Pkg_Sub_func(
          &outC->Context_HourGlassAnimation);
      }
      /* 4 */
      Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func(
        (array_char_12 *) &DMI_name_DMI_Control_Pkg,
        SystemTime,
        tmp1,
        &outC->DMI_identifier);
      switch (HandshakeSM_state_act_CabinSM_DeskIsOpen) {
        case SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM :
          outC->yellowBorderBrakeSymbol_toDisplay = kcg_false;
          outC->yellowBorderC1Area_toDisplay = kcg_false;
          outC->hourGlassCounter_toDisplay = 0.0;
          outC->modeSymbolAnnouncementIndex_toDisplay =
            last_modeSymbolAnnouncementIndex_toDisplay;
          outC->levelSymbolAnnouncementIndex_toDisplay =
            last_levelSymbolAnnouncementIndex_toDisplay;
          outC->iconGroupIndex_toDisplay = last_iconGroupIndex_toDisplay;
          kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
            &outC->DMI_icons_ack,
            (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
              &cDMI_Icons_Ack_DMI_Control_Pkg);
          outC->StatusSymbolVisibility_toDisplay = kcg_false;
          outC->textMsgEnable_toDisplay = kcg_false;
          outC->yellowBorderMsg_toDisplay = kcg_false;
          outC->closeButtonIndex_toDisplay = 26;
          kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
            &outC->DMI_text_message_ack,
            &default_DMI_text_message_ack);
          kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
            &outC->DMI_status_report,
            &default_DMI_status_report);
          kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
            &outC->DMI_train_data_ack,
            &default_DMI_train_data_ack);
          outC->traindataYesNoIndex_toDisplay =
            last_traindataYesNoIndex_toDisplay;
          outC->traindataValidWinVisibility_toDisplay =
            last_traindataValidWinVisibility_toDisplay;
          outC->trainMaxspeed_toDisplay = last_trainMaxspeed_toDisplay;
          outC->trainBrakePerc_toDisplay = last_trainBrakePerc_toDisplay;
          outC->trainLenght_toDisplay = last_trainLenght_toDisplay;
          outC->trainLoadingGougeIndex_toDisplay =
            last_trainLoadingGougeIndex_toDisplay;
          outC->trainAirtightIndex_toDisplay =
            last_trainAirtightIndex_toDisplay;
          outC->trainAxleloadIndex_toDisplay =
            last_trainAxleloadIndex_toDisplay;
          outC->trainCategoryIndex_toDisplay =
            last_trainCategoryIndex_toDisplay;
          kcg_copy_array_int_5(
            &outC->ArrayOfMsgIndex_toDisplay,
            &last_ArrayOfMsgIndex_toDisplay);
          kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
            &outC->DMI_driver_request,
            &default_DMI_driver_request);
          outC->ModeSymbolVisibility_toDisplay =
            last_ModeSymbolVisibility_toDisplay;
          outC->ModeSymbol_toDisplay = last_ModeSymbol_toDisplay;
          outC->DistanceToTargetBarVisibility_toDisplay =
            last_DistanceToTargetBarVisibility_toDisplay;
          outC->RBC_status_symbol_toDisplay = 4;
          outC->CloseButtonEnabler_toDisplay =
            last_CloseButtonEnabler_toDisplay;
          kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
            &outC->DMI_train_running_number_id,
            &default_DMI_train_running_number_id);
          kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
            &outC->DMI_driver_identifier,
            &default_DMI_driver_identifier);
          kcg_copy_array_int_30(
            &outC->ArrayButtonsEnabler_toDisplay,
            &last_ArrayButtonsEnabler_toDisplay);
          kcg_copy_array_bool_15(
            &outC->window_mask_visibility__toDisplay,
            &last_window_mask_visibility__toDisplay);
          kcg_copy_array_int_9(
            &outC->TrainRN_Display_toDisplay,
            &last_TrainRN_Display_toDisplay);
          kcg_copy_array_int_9(
            &outC->DriverID_Display_toDisplay,
            &last_DriverID_Display_toDisplay);
          outC->PointerColor_toDisplay = last_PointerColor_toDisplay;
          outC->StatusSymbolBrake_toDisplay = last_StatusSymbolBrake_toDisplay;
          outC->InterpolatedDistanceToTarget_toDisplay =
            last_InterpolatedDistanceToTarget_toDisplay;
          outC->DistanceToTargetVisibilityDigital_toDisplay =
            last_DistanceToTargetVisibilityDigital_toDisplay;
          outC->DistanceToTarget_toDisplay = last_DistanceToTarget_toDisplay;
          kcg_copy_array_real_12(
            &outC->GradientsValue_toDisplay,
            &last_GradientsValue_toDisplay);
          kcg_copy_array_real_12(
            &outC->GradientsEnd_toDisplay,
            &last_GradientsEnd_toDisplay);
          kcg_copy_array_real_12(
            &outC->GradientsStart_toDisplay,
            &last_GradientsStart_toDisplay);
          outC->SpeedIntervention_toDisplay = last_SpeedIntervention_toDisplay;
          outC->SpeedRelease_toDisplay = last_SpeedRelease_toDisplay;
          outC->SpeedPermitted_toDisplay = last_SpeedPermitted_toDisplay;
          outC->SpeedTarget_toDisplay = last_SpeedTarget_toDisplay;
          outC->SpeedDigitThree_toDisplay = last_SpeedDigitThree_toDisplay;
          outC->SpeedDigitTwo_toDisplay = last_SpeedDigitTwo_toDisplay;
          outC->SpeedDigitOne_toDisplay = last_SpeedDigitOne_toDisplay;
          outC->TrainDataWindowVisibility_toDisplay =
            last_TrainDataWindowVisibility_toDisplay;
          outC->TrainSpeed_toDisplay = last_TrainSpeed_toDisplay;
          outC->LevelSymbolVisibility_toDisplay =
            last_LevelSymbolVisibility_toDisplay;
          outC->ETCS_LevelSymbol_toDisplay = last_ETCS_LevelSymbol_toDisplay;
          outC->TrainPosition_toDisplay = last_TrainPosition_toDisplay;
          break;
        case SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM :
          /* HourGlassAnimation */
          HourGlassAnimation_DMI_Control_Pkg_Sub_func(
            _L349_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            _L354_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
            SystemTime,
            &outC->Context_HourGlassAnimation);
          outC->hourGlassCounter_toDisplay = (kcg_real)
              outC->Context_HourGlassAnimation.Output1;
          outC->yellowBorderC1Area_toDisplay =
            outC->flashingVariable_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
            outC->YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          switch (SM17_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_icons_ack,
                (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
                  &cDMI_Icons_Ack_DMI_Control_Pkg);
              break;
            case SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              /* 1 */
              Set_IconAck_DMI_Control_Pkg_Sub_func(
                kcg_true,
                SystemTime,
                outC->NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                &outC->DMI_icons_ack);
              break;
            case SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17 :
              /* 2 */
              Set_IconAck_DMI_Control_Pkg_Sub_func(
                kcg_true,
                SystemTime,
                outC->NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
                &outC->DMI_icons_ack);
              break;
            
          }
          outC->yellowBorderBrakeSymbol_toDisplay =
            outC->flashingVariable_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive &
            outC->YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
            &outC->DMI_status_report,
            &_L404_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          outC->traindataYesNoIndex_toDisplay = traindataYesNoIndex_toDisplay;
          outC->trainMaxspeed_toDisplay =
            _L224_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->trainBrakePerc_toDisplay =
            _L227_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->trainLenght_toDisplay =
            _L223_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive / 100.0;
          outC->trainLoadingGougeIndex_toDisplay =
            _L225_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->trainAirtightIndex_toDisplay =
            _L226_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->trainAxleloadIndex_toDisplay =
            _L222_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->trainCategoryIndex_toDisplay =
            _L221_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          if (DMI_DynamicIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            outC->_L398_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp28;
            outC->_L388_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp25;
            outC->_L394_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp27;
            outC->_L387_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp26;
            outC->_L389_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp24;
            outC->_L380_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp22;
            outC->_L379_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp23;
            outC->_L381_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp21;
            outC->_L369_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              tmp20;
          }
          else if (outC->init5) {
            outC->_L398_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L388_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L394_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L387_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
            outC->_L389_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              kcg_false;
            outC->_L380_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
            outC->_L379_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
            outC->_L381_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive =
              0.0;
            outC->_L369_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive = 4;
          }
          outC->ModeSymbolVisibility_toDisplay =
            outC->_L398_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->ModeSymbol_toDisplay =
            outC->_L397_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->DistanceToTargetBarVisibility_toDisplay =
            outC->_L388_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->RBC_status_symbol_toDisplay =
            outC->_L393_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->StatusSymbolVisibility_toDisplay =
            outC->_L394_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->CloseButtonEnabler_toDisplay = CloseButtonIndex_DMI_Control_Pkg;
          switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu) {
                kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
                  &outC->DMI_driver_request,
                  &default_DMI_driver_request);
              }
              else if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu) {
                kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
                  &outC->DMI_driver_request,
                  (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *)
                    &DMI_SoM_req_DMI_Control_Pkg);
              }
              else {
                kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
                  &outC->DMI_driver_request,
                  &default_DMI_driver_request);
              }
              tmp5 = kcg_false;
              tmp3 = kcg_false;
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_driver_request,
                &default_DMI_driver_request);
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN) {
                tmp5 = kcg_true;
              }
              else {
                tmp5 = kcg_false;
              }
              tmp3 = kcg_false;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_driver_request,
                &default_DMI_driver_request);
              tmp5 = kcg_false;
              tmp3 = kcg_false;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_driver_request,
                &default_DMI_driver_request);
              tmp5 = kcg_false;
              if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID) {
                tmp3 = kcg_true;
              }
              else {
                tmp3 = kcg_false;
              }
              break;
            
          }
          switch (WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              switch (WindowsSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu) {
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  outC->closeButtonIndex_toDisplay =
                    closeButtonActiveSymbol_DMI_Control_Pkg;
                  tmp = kcg_true;
                  if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN) {
                    /* 19 */
                    RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                      &last_TrainRN_Display_toDisplay,
                      &outC->TrainRN_Display_toDisplay);
                  }
                  else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN_TrainRNKeyboardController) {
                    /* 18 */
                    AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                      &last_TrainRN_Display_toDisplay,
                      _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN,
                      &outC->TrainRN_Display_toDisplay);
                  }
                  else {
                    kcg_copy_array_int_9(
                      &outC->TrainRN_Display_toDisplay,
                      &last_TrainRN_Display_toDisplay);
                  }
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  outC->closeButtonIndex_toDisplay = 26;
                  tmp = kcg_false;
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  outC->closeButtonIndex_toDisplay = 26;
                  tmp = kcg_false;
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  outC->closeButtonIndex_toDisplay =
                    closeButtonActiveSymbol_DMI_Control_Pkg;
                  tmp = kcg_true;
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                  if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                    /* 18 */
                    RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                      &last_DriverID_Display_toDisplay,
                      &outC->DriverID_Display_toDisplay);
                  }
                  else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled_DriverIDKeyboardController) {
                    /* 17 */
                    AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                      &last_DriverID_Display_toDisplay,
                      _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled,
                      &outC->DriverID_Display_toDisplay);
                  }
                  else {
                    kcg_copy_array_int_9(
                      &outC->DriverID_Display_toDisplay,
                      &last_DriverID_Display_toDisplay);
                  }
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  outC->closeButtonIndex_toDisplay = 26;
                  tmp = kcg_false;
                  kcg_copy_array_int_9(
                    &outC->TrainRN_Display_toDisplay,
                    &last_TrainRN_Display_toDisplay);
                  kcg_copy_array_int_9(
                    &outC->DriverID_Display_toDisplay,
                    &last_DriverID_Display_toDisplay);
                  break;
                
              }
              switch (WindowsSM_state_sel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu) {
                case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                    &outC->DMI_train_data_ack,
                    &default_DMI_train_data_ack);
                  outC->traindataValidWinVisibility_toDisplay =
                    last_traindataValidWinVisibility_toDisplay;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN) {
                    tmp4 = kcg_false;
                  }
                  else if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_Insert_TrainRN) {
                    tmp4 = kcg_true;
                  }
                  else {
                    tmp4 = kcg_false;
                  }
                  tmp2 = kcg_false;
                  outC->TrainDataWindowVisibility_toDisplay =
                    last_TrainDataWindowVisibility_toDisplay;
                  break;
                case SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  tmp4 = kcg_false;
                  tmp2 = kcg_false;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                      &outC->DMI_train_data_ack,
                      &default_DMI_train_data_ack);
                    outC->traindataValidWinVisibility_toDisplay = kcg_false;
                    outC->TrainDataWindowVisibility_toDisplay = kcg_true;
                  }
                  else if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                      &outC->DMI_train_data_ack,
                      &default_DMI_train_data_ack);
                    outC->traindataValidWinVisibility_toDisplay = kcg_false;
                    outC->TrainDataWindowVisibility_toDisplay = kcg_false;
                  }
                  else if (br_3_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                      &outC->DMI_train_data_ack,
                      (DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
                        &DMI_train_data_ack_positive_DMI_Control_Pkg);
                    outC->traindataValidWinVisibility_toDisplay = kcg_false;
                    outC->TrainDataWindowVisibility_toDisplay = kcg_false;
                  }
                  else if (br_4_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataValidationWindow) {
                    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                      &outC->DMI_train_data_ack,
                      (DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
                        &DMI_train_data_ack_negative_DMI_Control_Pkg);
                    outC->traindataValidWinVisibility_toDisplay = kcg_false;
                    outC->TrainDataWindowVisibility_toDisplay = kcg_false;
                  }
                  else {
                    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                      &outC->DMI_train_data_ack,
                      &default_DMI_train_data_ack);
                    outC->traindataValidWinVisibility_toDisplay =
                      last_traindataValidWinVisibility_toDisplay;
                    outC->TrainDataWindowVisibility_toDisplay =
                      last_TrainDataWindowVisibility_toDisplay;
                  }
                  break;
                case SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                    &outC->DMI_train_data_ack,
                    &default_DMI_train_data_ack);
                  tmp4 = kcg_false;
                  tmp2 = kcg_false;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataWindow) {
                    outC->traindataValidWinVisibility_toDisplay =
                      last_traindataValidWinVisibility_toDisplay;
                    outC->TrainDataWindowVisibility_toDisplay = kcg_false;
                  }
                  else if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_TrainDataWindow) {
                    outC->traindataValidWinVisibility_toDisplay = kcg_true;
                    outC->TrainDataWindowVisibility_toDisplay = kcg_false;
                  }
                  else {
                    outC->traindataValidWinVisibility_toDisplay =
                      last_traindataValidWinVisibility_toDisplay;
                    outC->TrainDataWindowVisibility_toDisplay =
                      last_TrainDataWindowVisibility_toDisplay;
                  }
                  break;
                case SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                    &outC->DMI_train_data_ack,
                    &default_DMI_train_data_ack);
                  outC->traindataValidWinVisibility_toDisplay =
                    last_traindataValidWinVisibility_toDisplay;
                  tmp4 = kcg_false;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                    tmp2 = kcg_false;
                  }
                  else if (br_2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_DriverID_DMI_controlled) {
                    tmp2 = kcg_true;
                  }
                  else {
                    tmp2 = kcg_false;
                  }
                  outC->TrainDataWindowVisibility_toDisplay =
                    last_TrainDataWindowVisibility_toDisplay;
                  break;
                case SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM :
                  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                    &outC->DMI_train_data_ack,
                    &default_DMI_train_data_ack);
                  outC->traindataValidWinVisibility_toDisplay =
                    last_traindataValidWinVisibility_toDisplay;
                  tmp4 = kcg_false;
                  tmp2 = kcg_false;
                  if (br_1_guard_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu_WindowsSM_MainMenu) {
                    outC->TrainDataWindowVisibility_toDisplay = kcg_true;
                  }
                  else {
                    outC->TrainDataWindowVisibility_toDisplay =
                      last_TrainDataWindowVisibility_toDisplay;
                  }
                  break;
                
              }
              outC->init2 = kcg_false;
              break;
            case SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              outC->closeButtonIndex_toDisplay = 26;
              kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_train_data_ack,
                &default_DMI_train_data_ack);
              outC->traindataValidWinVisibility_toDisplay =
                last_traindataValidWinVisibility_toDisplay;
              tmp4 = kcg_false;
              tmp2 = kcg_false;
              tmp = kcg_false;
              if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN) {
                /* 16 */
                RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                  &last_TrainRN_Display_toDisplay,
                  &outC->TrainRN_Display_toDisplay);
              }
              else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN_TrainRNKeyboardController) {
                /* 15 */
                AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                  &last_TrainRN_Display_toDisplay,
                  _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_TrainRN,
                  &outC->TrainRN_Display_toDisplay);
              }
              else {
                kcg_copy_array_int_9(
                  &outC->TrainRN_Display_toDisplay,
                  &last_TrainRN_Display_toDisplay);
              }
              kcg_copy_array_int_9(
                &outC->DriverID_Display_toDisplay,
                &last_DriverID_Display_toDisplay);
              outC->TrainDataWindowVisibility_toDisplay =
                last_TrainDataWindowVisibility_toDisplay;
              break;
            case SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              outC->closeButtonIndex_toDisplay = 26;
              kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_train_data_ack,
                &default_DMI_train_data_ack);
              outC->traindataValidWinVisibility_toDisplay = kcg_false;
              tmp4 = kcg_false;
              tmp2 = kcg_false;
              tmp = kcg_false;
              kcg_copy_array_int_9(
                &outC->TrainRN_Display_toDisplay,
                &last_TrainRN_Display_toDisplay);
              kcg_copy_array_int_9(
                &outC->DriverID_Display_toDisplay,
                &last_DriverID_Display_toDisplay);
              outC->TrainDataWindowVisibility_toDisplay = kcg_false;
              break;
            case SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM :
              outC->closeButtonIndex_toDisplay = 26;
              kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
                &outC->DMI_train_data_ack,
                &default_DMI_train_data_ack);
              outC->traindataValidWinVisibility_toDisplay =
                last_traindataValidWinVisibility_toDisplay;
              tmp4 = kcg_false;
              tmp2 = kcg_false;
              tmp = kcg_false;
              kcg_copy_array_int_9(
                &outC->TrainRN_Display_toDisplay,
                &last_TrainRN_Display_toDisplay);
              if (_L60_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID) {
                /* 15 */
                RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                  &last_DriverID_Display_toDisplay,
                  &outC->DriverID_Display_toDisplay);
              }
              else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID_DriverIDKeyboardController) {
                /* 14 */
                AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
                  &last_DriverID_Display_toDisplay,
                  _L56_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_Insert_DriverID,
                  &outC->DriverID_Display_toDisplay);
              }
              else {
                kcg_copy_array_int_9(
                  &outC->DriverID_Display_toDisplay,
                  &last_DriverID_Display_toDisplay);
              }
              outC->TrainDataWindowVisibility_toDisplay =
                last_TrainDataWindowVisibility_toDisplay;
              break;
            
          }
          /* Set_TrainRN_packet */
          Set_TrainRN_packet_DMI_Control_Pkg_Sub_func(
            (kcg_bool) (tmp5 | tmp4),
            &last_TrainRN_Display_toDisplay,
            SystemTime,
            &outC->DMI_train_running_number_id);
          /* Set_DriverID_packet */
          Set_DriverID_packet_DMI_Control_Pkg_Sub_func(
            &last_DriverID_Display_toDisplay,
            (kcg_bool) (tmp3 | tmp2),
            SystemTime,
            &outC->DMI_driver_identifier);
          kcg_copy_array_int_30(
            &outC->ArrayButtonsEnabler_toDisplay,
            &outC->_L184_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          if (EntryRequestIsValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            kcg_copy_array_bool_15(
              &outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &tmp19);
          }
          else if (outC->init5) {
            outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[0] =
              kcg_false;
            outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[1] =
              kcg_false;
            outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[2] =
              kcg_false;
            outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[3] =
              kcg_false;
            outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[4] =
              kcg_false;
            outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[5] =
              kcg_false;
            outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[6] =
              kcg_false;
            outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[7] =
              kcg_false;
            outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[8] =
              kcg_false;
            outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[9] =
              kcg_false;
            outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[10] =
              kcg_false;
            outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[11] =
              kcg_false;
            outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[12] =
              kcg_false;
            outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[13] =
              kcg_false;
            outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive[14] =
              kcg_false;
          }
          if (tmp) {
            /* 1 */
            WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest(
              outC->InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
              &outC->window_mask_visibility__toDisplay);
          }
          else {
            kcg_copy_array_bool_15(
              &outC->window_mask_visibility__toDisplay,
              &outC->_L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive);
          }
          switch (IconSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              outC->modeSymbolAnnouncementIndex_toDisplay =
                last_modeSymbolAnnouncementIndex_toDisplay;
              outC->levelSymbolAnnouncementIndex_toDisplay =
                last_levelSymbolAnnouncementIndex_toDisplay;
              outC->iconGroupIndex_toDisplay = last_iconGroupIndex_toDisplay;
              outC->StatusSymbolBrake_toDisplay =
                last_StatusSymbolBrake_toDisplay;
              break;
            case SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM :
              switch (IconControlFlagWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid) {
                case show_icon_with_yellow_flashing_frame_in_area_DMI_Types_Pkg :
                  switch (AreaGroupWhenBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area) {
                    case H_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case D_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case C_DMI_Types_Pkg :
                      if (AreaRankIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C) {
                        outC->modeSymbolAnnouncementIndex_toDisplay =
                          last_modeSymbolAnnouncementIndex_toDisplay;
                        outC->levelSymbolAnnouncementIndex_toDisplay =
                          last_levelSymbolAnnouncementIndex_toDisplay;
                        outC->iconGroupIndex_toDisplay =
                          last_iconGroupIndex_toDisplay;
                        outC->StatusSymbolBrake_toDisplay =
                          (IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                            cStatusSymbol_IconGroup_DMI_Control_Pkg) &
                          (NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                            cSTATUS_Emergency_brake_DMI_Control_Pkg);
                      }
                      else {
                        if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock) {
                          if (_L14_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock) {
                            outC->modeSymbolAnnouncementIndex_toDisplay =
                              NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                          }
                          else {
                            outC->modeSymbolAnnouncementIndex_toDisplay = 0;
                          }
                          if (_L10_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_with_yellow_flashing_frame_in_area_AreaGroupWhenBlock_C_AreaRankIfBlock) {
                            outC->levelSymbolAnnouncementIndex_toDisplay =
                              NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                          }
                          else {
                            outC->levelSymbolAnnouncementIndex_toDisplay = 0;
                          }
                          outC->iconGroupIndex_toDisplay =
                            IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
                        }
                        else {
                          outC->modeSymbolAnnouncementIndex_toDisplay =
                            last_modeSymbolAnnouncementIndex_toDisplay;
                          outC->levelSymbolAnnouncementIndex_toDisplay =
                            last_levelSymbolAnnouncementIndex_toDisplay;
                          outC->iconGroupIndex_toDisplay =
                            last_iconGroupIndex_toDisplay;
                        }
                        outC->StatusSymbolBrake_toDisplay =
                          last_StatusSymbolBrake_toDisplay;
                      }
                      break;
                    case B_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case A_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    
                  }
                  break;
                case show_icon_flashing_in_area_DMI_Types_Pkg :
                  outC->modeSymbolAnnouncementIndex_toDisplay =
                    last_modeSymbolAnnouncementIndex_toDisplay;
                  outC->levelSymbolAnnouncementIndex_toDisplay =
                    last_levelSymbolAnnouncementIndex_toDisplay;
                  outC->iconGroupIndex_toDisplay =
                    last_iconGroupIndex_toDisplay;
                  outC->StatusSymbolBrake_toDisplay =
                    last_StatusSymbolBrake_toDisplay;
                  break;
                case clear_area_DMI_Types_Pkg :
                  switch (WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area) {
                    case H_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case D_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case C_DMI_Types_Pkg :
                      if (IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area_WhenBlock2_C) {
                        outC->modeSymbolAnnouncementIndex_toDisplay =
                          last_modeSymbolAnnouncementIndex_toDisplay;
                        outC->levelSymbolAnnouncementIndex_toDisplay =
                          last_levelSymbolAnnouncementIndex_toDisplay;
                        outC->iconGroupIndex_toDisplay =
                          last_iconGroupIndex_toDisplay;
                        outC->StatusSymbolBrake_toDisplay =
                          !((IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                              3) &
                            (NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                              cSTATUS_Emergency_brake_DMI_Control_Pkg));
                      }
                      else {
                        if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_clear_area_WhenBlock2_C_IfBlock1) {
                          outC->modeSymbolAnnouncementIndex_toDisplay = 0;
                          outC->levelSymbolAnnouncementIndex_toDisplay = 0;
                          outC->iconGroupIndex_toDisplay = 0;
                        }
                        else {
                          outC->modeSymbolAnnouncementIndex_toDisplay =
                            last_modeSymbolAnnouncementIndex_toDisplay;
                          outC->levelSymbolAnnouncementIndex_toDisplay =
                            last_levelSymbolAnnouncementIndex_toDisplay;
                          outC->iconGroupIndex_toDisplay =
                            last_iconGroupIndex_toDisplay;
                        }
                        outC->StatusSymbolBrake_toDisplay =
                          last_StatusSymbolBrake_toDisplay;
                      }
                      break;
                    case B_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case A_DMI_Types_Pkg :
                      outC->modeSymbolAnnouncementIndex_toDisplay =
                        last_modeSymbolAnnouncementIndex_toDisplay;
                      outC->levelSymbolAnnouncementIndex_toDisplay =
                        last_levelSymbolAnnouncementIndex_toDisplay;
                      outC->iconGroupIndex_toDisplay =
                        last_iconGroupIndex_toDisplay;
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    
                  }
                  break;
                case show_icon_in_area_DMI_Types_Pkg :
                  outC->modeSymbolAnnouncementIndex_toDisplay =
                    last_modeSymbolAnnouncementIndex_toDisplay;
                  outC->levelSymbolAnnouncementIndex_toDisplay =
                    last_levelSymbolAnnouncementIndex_toDisplay;
                  outC->iconGroupIndex_toDisplay =
                    last_iconGroupIndex_toDisplay;
                  switch (WhenBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area) {
                    case A_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case B_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case C_DMI_Types_Pkg :
                      if (IfBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM_IconPacketValid_IconControlFlagWhenBlock_show_icon_in_area_WhenBlock2_C) {
                        outC->StatusSymbolBrake_toDisplay =
                          (IconGroupIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                            3) &
                          (NID_Icon_Rank_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive ==
                            cSTATUS_Emergency_brake_DMI_Control_Pkg);
                      }
                      else {
                        outC->StatusSymbolBrake_toDisplay =
                          last_StatusSymbolBrake_toDisplay;
                      }
                      break;
                    case D_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case E_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case F_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case G_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    case H_DMI_Types_Pkg :
                      outC->StatusSymbolBrake_toDisplay =
                        last_StatusSymbolBrake_toDisplay;
                      break;
                    
                  }
                  break;
                
              }
              break;
            
          }
          outC->InterpolatedDistanceToTarget_toDisplay =
            outC->_L387_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->DistanceToTargetVisibilityDigital_toDisplay =
            outC->_L389_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->DistanceToTarget_toDisplay =
            outC->_L386_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          kcg_copy_array_real_12(
            &outC->GradientsValue_toDisplay,
            (array_real_12 *) &GRADIENTSVALUE1_DMI_Control_Pkg);
          kcg_copy_array_real_12(
            &outC->GradientsEnd_toDisplay,
            (array_real_12 *) &GRADIENTSEND1_DMI_Control_Pkg);
          kcg_copy_array_real_12(
            &outC->GradientsStart_toDisplay,
            (array_real_12 *) &GRADIENTSSTART1_DMI_Control_Pkg);
          switch (SpeedSupervisionSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              outC->PointerColor_toDisplay = last_PointerColor_toDisplay;
              outC->SpeedIntervention_toDisplay =
                last_SpeedIntervention_toDisplay;
              outC->SpeedRelease_toDisplay = last_SpeedRelease_toDisplay;
              outC->SpeedPermitted_toDisplay = last_SpeedPermitted_toDisplay;
              outC->SpeedTarget_toDisplay = last_SpeedTarget_toDisplay;
              break;
            case SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM :
              if (ModeCheckIfBlock_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo) {
                switch (_43_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                  case CSM_DMI_Types_Pkg :
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (_42_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM_PointerColor) {
                      outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    break;
                  case PIM_DMI_Types_Pkg :
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (_41_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM_PointerColor) {
                      outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else if (_40_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM_PointerColor) {
                      outC->PointerColor_toDisplay =
                        ccOLOR_WHITE_DMI_Control_Pkg;
                    }
                    else {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    break;
                  case TSM_DMI_Types_Pkg :
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (_39_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor) {
                      outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else if (_38_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor) {
                      outC->PointerColor_toDisplay =
                        ccOLOR_WHITE_DMI_Control_Pkg;
                    }
                    else if (_37_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_YELLOW_DMI_Control_Pkg;
                    }
                    else {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    break;
                  case RSM_DMI_Types_Pkg :
                    if (isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_RSM) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_YELLOW_DMI_Control_Pkg;
                    }
                    else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_RSM_PointerColor) {
                      outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    break;
                  case supervision_status_unknown_DMI_Types_Pkg :
                    outC->PointerColor_toDisplay = last_PointerColor_toDisplay;
                    break;
                  
                }
              }
              else if (_36_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                switch (_35_WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                  case CSM_DMI_Types_Pkg :
                    if (_50_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (_34_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM_PointerColor) {
                      outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    break;
                  case PIM_DMI_Types_Pkg :
                    if (_49_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (_33_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM_PointerColor) {
                      outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_PIM_PointerColor) {
                      outC->PointerColor_toDisplay =
                        ccOLOR_WHITE_DMI_Control_Pkg;
                    }
                    else {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    break;
                  case TSM_DMI_Types_Pkg :
                    if (_46_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (_32_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor) {
                      outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else if (_31_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor) {
                      outC->PointerColor_toDisplay =
                        ccOLOR_WHITE_DMI_Control_Pkg;
                    }
                    else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_TSM_PointerColor) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_YELLOW_DMI_Control_Pkg;
                    }
                    else {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    break;
                  case RSM_DMI_Types_Pkg :
                    outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
                    break;
                  case supervision_status_unknown_DMI_Types_Pkg :
                    outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
                    break;
                  
                }
              }
              else if (_30_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                switch (WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                  case CSM_DMI_Types_Pkg :
                    if (_52_isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM) {
                      outC->PointerColor_toDisplay =
                        cCOLOR_ORANGE_DMI_Control_Pkg;
                    }
                    else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock_WhenBlock1_CSM_PointerColor) {
                      outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                    }
                    else {
                      outC->PointerColor_toDisplay =
                        cCOLOR_GREY_DMI_Control_Pkg;
                    }
                    break;
                  case PIM_DMI_Types_Pkg :
                    outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
                    break;
                  case TSM_DMI_Types_Pkg :
                    outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
                    break;
                  case RSM_DMI_Types_Pkg :
                    outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
                    break;
                  case supervision_status_unknown_DMI_Types_Pkg :
                    outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
                    break;
                  
                }
              }
              else if (_29_else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
              }
              else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                if (isRed_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_ModeCheckIfBlock) {
                  outC->PointerColor_toDisplay = cCOLOR_RED_DMI_Control_Pkg;
                }
                else {
                  outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
                }
              }
              else {
                outC->PointerColor_toDisplay = cCOLOR_GREY_DMI_Control_Pkg;
              }
              if (IfBlock2_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo) {
                switch (WhenBlock1_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2) {
                  case CSM_DMI_Types_Pkg :
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM) {
                      outC->SpeedIntervention_toDisplay =
                        vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM;
                    }
                    else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM_IfBlock1) {
                      outC->SpeedIntervention_toDisplay =
                        vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM;
                    }
                    else {
                      outC->SpeedIntervention_toDisplay = 0.0;
                    }
                    outC->SpeedRelease_toDisplay = 0.0;
                    if (isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM) {
                      outC->SpeedPermitted_toDisplay =
                        vPermitted_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_CSM;
                    }
                    else {
                      outC->SpeedPermitted_toDisplay = 0.0;
                    }
                    outC->SpeedTarget_toDisplay = 0.0;
                    break;
                  case PIM_DMI_Types_Pkg :
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->SpeedIntervention_toDisplay =
                        vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
                    }
                    else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM_IfBlock4) {
                      outC->SpeedIntervention_toDisplay =
                        vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
                    }
                    else {
                      outC->SpeedIntervention_toDisplay = 0.0;
                    }
                    if (isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->SpeedRelease_toDisplay =
                        Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
                    }
                    else {
                      outC->SpeedRelease_toDisplay = 0.0;
                    }
                    if (isWhite_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->SpeedPermitted_toDisplay =
                        Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
                    }
                    else {
                      outC->SpeedPermitted_toDisplay =
                        last_SpeedPermitted_toDisplay;
                    }
                    if (isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM) {
                      outC->SpeedTarget_toDisplay =
                        Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_PIM;
                    }
                    else {
                      outC->SpeedTarget_toDisplay = 0.0;
                    }
                    break;
                  case TSM_DMI_Types_Pkg :
                    if (isOrange_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                      outC->SpeedIntervention_toDisplay =
                        vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
                    }
                    else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM_IfBlock3) {
                      outC->SpeedIntervention_toDisplay =
                        vIntervention_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
                    }
                    else {
                      outC->SpeedIntervention_toDisplay = 0.0;
                    }
                    if (isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                      outC->SpeedRelease_toDisplay =
                        Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
                    }
                    else {
                      outC->SpeedRelease_toDisplay = 0.0;
                    }
                    if (isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                      outC->SpeedPermitted_toDisplay =
                        Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
                    }
                    else if (else_clock_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM_IfBlock4) {
                      outC->SpeedPermitted_toDisplay =
                        Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
                    }
                    else {
                      outC->SpeedPermitted_toDisplay = 0.0;
                    }
                    if (isDarkGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM) {
                      outC->SpeedTarget_toDisplay =
                        Vtarget_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_TSM;
                    }
                    else {
                      outC->SpeedTarget_toDisplay = 0.0;
                    }
                    break;
                  case RSM_DMI_Types_Pkg :
                    outC->SpeedIntervention_toDisplay = 0.0;
                    if (isMediumGrey_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM) {
                      outC->SpeedRelease_toDisplay =
                        Vrelease_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM;
                    }
                    else {
                      outC->SpeedRelease_toDisplay = 0.0;
                    }
                    if (isYellow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM) {
                      outC->SpeedPermitted_toDisplay =
                        Vperm_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM_ReadSpeedSupervisionInfo_IfBlock2_WhenBlock1_RSM;
                    }
                    else {
                      outC->SpeedPermitted_toDisplay = 0.0;
                    }
                    outC->SpeedTarget_toDisplay = last_SpeedTarget_toDisplay;
                    break;
                  case supervision_status_unknown_DMI_Types_Pkg :
                    outC->SpeedIntervention_toDisplay =
                      last_SpeedIntervention_toDisplay;
                    outC->SpeedRelease_toDisplay = last_SpeedRelease_toDisplay;
                    outC->SpeedPermitted_toDisplay =
                      last_SpeedPermitted_toDisplay;
                    outC->SpeedTarget_toDisplay = last_SpeedTarget_toDisplay;
                    break;
                  
                }
              }
              else {
                outC->SpeedIntervention_toDisplay = 0.0;
                outC->SpeedRelease_toDisplay = 0.0;
                outC->SpeedPermitted_toDisplay = 0.0;
                outC->SpeedTarget_toDisplay = 0.0;
              }
              break;
            
          }
          outC->SpeedDigitThree_toDisplay =
            outC->_L380_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->SpeedDigitTwo_toDisplay =
            outC->_L379_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->SpeedDigitOne_toDisplay =
            outC->_L378_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->TrainSpeed_toDisplay =
            outC->_L381_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->LevelSymbolVisibility_toDisplay =
            outC->_L368_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->ETCS_LevelSymbol_toDisplay =
            outC->_L369_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
          outC->TrainPosition_toDisplay = 0.0;
          outC->init5 = kcg_false;
          switch (TrainDataSM_state_act_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            case SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM :
              outC->init3 = kcg_false;
              break;
            
          }
          if (ShowSingleMsg_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive) {
            outC->yellowBorderMsg_toDisplay =
              _L50_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1;
            outC->textMsgEnable_toDisplay = 0 !=
              _L7_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1[0];
            outC->DMI_text_message_ack.valid =
              _L31_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1;
            outC->DMI_text_message_ack.systemTime = SystemTime;
            outC->DMI_text_message_ack.messageIdentifier =
              _L44_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1[0];
            outC->DMI_text_message_ack.acknowledged =
              outC->DMI_text_message_ack.valid;
            outC->ArrayOfMsgIndex_toDisplay[0] =
              _L7_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1[0];
            outC->ArrayOfMsgIndex_toDisplay[1] = 0;
            outC->ArrayOfMsgIndex_toDisplay[2] = 0;
            outC->ArrayOfMsgIndex_toDisplay[3] = 0;
            outC->ArrayOfMsgIndex_toDisplay[4] = 0;
            outC->init4 = kcg_false;
          }
          else {
            outC->textMsgEnable_toDisplay = kcg_false;
            outC->yellowBorderMsg_toDisplay = kcg_false;
            kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
              &outC->DMI_text_message_ack,
              &default_DMI_text_message_ack);
            kcg_copy_array_int_5(
              &outC->ArrayOfMsgIndex_toDisplay,
              &last_ArrayOfMsgIndex_toDisplay);
          }
          break;
        
      }
      break;
    
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** DMI_Controller_DMI_Control_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

