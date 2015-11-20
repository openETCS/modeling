/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */
#ifndef _DMI_Controller_DMI_Control_Pkg_H_
#define _DMI_Controller_DMI_Control_Pkg_H_

#include "kcg_types.h"
#include "DMI_request_trigger_DMI_Control_Pkg_Sub_func.h"
#include "Set_DriverID_packet_DMI_Control_Pkg_Sub_func.h"
#include "Set_TrainRN_packet_DMI_Control_Pkg_Sub_func.h"
#include "LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func.h"
#include "Set_IconAck_DMI_Control_Pkg_Sub_func.h"
#include "LevelSymbolToIndex_DMI_Control_Pkg_Sub_func.h"
#include "RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func.h"
#include "ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func.h"
#include "Set_level_data_DMI_Control_Pkg_Sub_func.h"
#include "Gradient_from_Track_DMI_Control_Pkg_Sub_func.h"
#include "Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func.h"
#include "DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func.h"
#include "Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func.h"
#include "CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard.h"
#include "CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"
#include "AddDigit_DMI_Control_Pkg_Sub_func_Keyboard.h"
#include "RmDigit_DMI_Control_Pkg_Sub_func_Keyboard.h"
#include "DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest.h"
#include "DMI_menu_req_To_ButtonEnabler_DMI_Control_Pkg_Sub_func_MenuRequest.h"
#include "TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData.h"
#include "DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed.h"
#include "Area_D_DMI_Control_Pkg_Sub_func_PlanningArea.h"
#include "LevelAdapter_DMI_Control_Pkg_Utils.h"
#include "CheckElem_iterator_DMI_Control_Pkg_Utils.h"
#include "LevelListAdapter_DMI_Control_Pkg_Utils.h"
#include "Write_int_to_EVC_to_DMI_Messages.h"
#include "Write_DMI_to_EVC_to_int_Messages.h"
#include "D_behavior.h"
#include "HourGlassAnimation_DMI_Control_Pkg_Sub_func.h"
#include "DMI_status_DMI_Control_Pkg_Sub_func.h"
#include "StatusPlanningArea_DMI_Control_Pkg_Sub_func.h"
#include "CheckDeskStatus_DMI_Control_Pkg_Sub_func.h"
#include "DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"
#include "TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "ModCount_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "FlashingIconsOperator_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* DMI_Control_Pkg::DMI_Controller::TrainPosition_toDisplay */ TrainPosition_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::ETCS_LevelSymbol_toDisplay */ ETCS_LevelSymbol_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::LevelSymbolVisibility_toDisplay */ LevelSymbolVisibility_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::TrainSpeed_toDisplay */ TrainSpeed_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::TrainDataWindowVisibility_toDisplay */ TrainDataWindowVisibility_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::SpeedDigitOne_toDisplay */ SpeedDigitOne_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::SpeedDigitTwo_toDisplay */ SpeedDigitTwo_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::SpeedDigitThree_toDisplay */ SpeedDigitThree_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::SpeedTarget_toDisplay */ SpeedTarget_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::SpeedPermitted_toDisplay */ SpeedPermitted_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::SpeedRelease_toDisplay */ SpeedRelease_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::SpeedIntervention_toDisplay */ SpeedIntervention_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::DistanceToTarget_toDisplay */ DistanceToTarget_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::DistanceToTargetVisibilityDigital_toDisplay */ DistanceToTargetVisibilityDigital_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::InterpolatedDistanceToTarget_toDisplay */ InterpolatedDistanceToTarget_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::StatusSymbolBrake_toDisplay */ StatusSymbolBrake_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::PointerColor_toDisplay */ PointerColor_toDisplay;
  array_int_9 /* DMI_Control_Pkg::DMI_Controller::DriverID_Display_toDisplay */ DriverID_Display_toDisplay;
  array_int_9 /* DMI_Control_Pkg::DMI_Controller::TrainRN_Display_toDisplay */ TrainRN_Display_toDisplay;
  array_bool_15 /* DMI_Control_Pkg::DMI_Controller::window_mask_visibility__toDisplay */ window_mask_visibility__toDisplay;
  array_int_30 /* DMI_Control_Pkg::DMI_Controller::ArrayButtonsEnabler_toDisplay */ ArrayButtonsEnabler_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::CloseButtonEnabler_toDisplay */ CloseButtonEnabler_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::StatusSymbolVisibility_toDisplay */ StatusSymbolVisibility_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::RBC_status_symbol_toDisplay */ RBC_status_symbol_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::DistanceToTargetBarVisibility_toDisplay */ DistanceToTargetBarVisibility_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::ModeSymbol_toDisplay */ ModeSymbol_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::ModeSymbolVisibility_toDisplay */ ModeSymbolVisibility_toDisplay;
  array_int_5 /* DMI_Control_Pkg::DMI_Controller::ArrayOfMsgIndex_toDisplay */ ArrayOfMsgIndex_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::trainCategoryIndex_toDisplay */ trainCategoryIndex_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::trainAxleloadIndex_toDisplay */ trainAxleloadIndex_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::trainAirtightIndex_toDisplay */ trainAirtightIndex_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::trainLoadingGougeIndex_toDisplay */ trainLoadingGougeIndex_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::trainLenght_toDisplay */ trainLenght_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::trainBrakePerc_toDisplay */ trainBrakePerc_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::trainMaxspeed_toDisplay */ trainMaxspeed_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::traindataValidWinVisibility_toDisplay */ traindataValidWinVisibility_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::traindataYesNoIndex_toDisplay */ traindataYesNoIndex_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::yellowBorderMsg_toDisplay */ yellowBorderMsg_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::closeButtonIndex_toDisplay */ closeButtonIndex_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::openDesk_toDisplay */ openDesk_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::yellowBorderBrakeSymbol_toDisplay */ yellowBorderBrakeSymbol_toDisplay;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* DMI_Control_Pkg::DMI_Controller::DMI_icons_ack */ DMI_icons_ack;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::yellowBorderC1Area_toDisplay */ yellowBorderC1Area_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::iconGroupIndex_toDisplay */ iconGroupIndex_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::levelSymbolAnnouncementIndex_toDisplay */ levelSymbolAnnouncementIndex_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::modeSymbolAnnouncementIndex_toDisplay */ modeSymbolAnnouncementIndex_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::hourGlassCounter_toDisplay */ hourGlassCounter_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::hourGlassVisibility_toDisplay */ hourGlassVisibility_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::VpermColor_toDisplay */ VpermColor_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::VreleaseColor_toDisplay */ VreleaseColor_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::VtargetColor_toDisplay */ VtargetColor_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::Vtarget_permVisibility_toDisplay */ Vtarget_permVisibility_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::Vinterv_Visibility_toDisplay */ Vinterv_Visibility_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::vtarget_permColor_toDisplay */ vtarget_permColor_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::Vinterv_Color_toDisplay */ Vinterv_Color_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::levelMenuVisibility_toDisplay */ levelMenuVisibility_toDisplay;
  array_int_12 /* DMI_Control_Pkg::DMI_Controller::ArrayLevelIndex_toDisplay */ ArrayLevelIndex_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::IndexLevel_toDisplay */ IndexLevel_toDisplay;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* DMI_Control_Pkg::DMI_Controller::DMI_level_data */ DMI_level_data;
  array_int_5 /* DMI_Control_Pkg::DMI_Controller::IndexFixedMsg_toDisplay */ IndexFixedMsg_toDisplay;
  array_char_30_5 /* DMI_Control_Pkg::DMI_Controller::PlainText_toDisplay */ PlainText_toDisplay;
  array_real_5 /* DMI_Control_Pkg::DMI_Controller::Array_hh_toDisplay */ Array_hh_toDisplay;
  array_real_5 /* DMI_Control_Pkg::DMI_Controller::Array_mm_toDisplay */ Array_mm_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::isAuxiliarMsg_toDisplay */ isAuxiliarMsg_toDisplay;
  array_bool_10 /* DMI_Control_Pkg::DMI_Controller::D_SPDI_SpeedChangeSymbolsVisible_toDisplay */ D_SPDI_SpeedChangeSymbolsVisible_toDisplay;
  array_int_10 /* DMI_Control_Pkg::DMI_Controller::D_SPDI_SpeedChangeIndex_toDisplay */ D_SPDI_SpeedChangeIndex_toDisplay;
  array_real_10 /* DMI_Control_Pkg::DMI_Controller::D_SPDI_SpeedChangePosition_toDisplay */ D_SPDI_SpeedChangePosition_toDisplay;
  array_real_1 /* DMI_Control_Pkg::DMI_Controller::D_PASP_IndicatorMarker_toDisplay */ D_PASP_IndicatorMarker_toDisplay;
  array_real_4 /* DMI_Control_Pkg::DMI_Controller::D_PASP_Speeds_toDisplay */ D_PASP_Speeds_toDisplay;
  array_real_4 /* DMI_Control_Pkg::DMI_Controller::D_PASP_Distances_toDisplay */ D_PASP_Distances_toDisplay;
  array_bool_12 /* DMI_Control_Pkg::DMI_Controller::D_GradientVisible_toDisplay */ D_GradientVisible_toDisplay;
  array_real_12 /* DMI_Control_Pkg::DMI_Controller::D_GradientEndInterpolated_toDisplay */ D_GradientEndInterpolated_toDisplay;
  array_real_12 /* DMI_Control_Pkg::DMI_Controller::D_GradientStartInterpolated_toDisplay */ D_GradientStartInterpolated_toDisplay;
  tScale /* DMI_Control_Pkg::DMI_Controller::D_Scale_toDisplay */ D_Scale_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::PlanningAreaVisibility_toDisplay */ PlanningAreaVisibility_toDisplay;
  array_real_12 /* DMI_Control_Pkg::DMI_Controller::D_GradientsValue_toDisplay */ D_GradientsValue_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::ScrollDownEnableTypeIndex */ ScrollDownEnableTypeIndex;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::ScrollUpEnableTypeIndex */ ScrollUpEnableTypeIndex;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* DMI_Control_Pkg::DMI_Controller::Output83 */ Output83;
  array_real_4 /* DMI_Control_Pkg::DMI_Controller::TimeArray */ TimeArray;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init9;
  kcg_bool init8;
  kcg_bool init7;
  kcg_bool init6;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_HandshakeSM_CabinSM_DeskIsOpen /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM */ HandshakeSM_state_nxt_CabinSM_DeskIsOpen;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainDataSM::Incoming_TrainDataValues::_L3 */ _L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues;
  SSM_ST_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM */ WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
  SSM_ST_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM */ RequestSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainDataSM */ TrainDataSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YesNoTrainDataValidationSM */ YesNoTrainDataValidationSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM */ IconSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SymbolsAcknowledgmentSM */ SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM17 */ SM17_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::HourGlassSM */ HourGlassSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM */ SpeedSupervisionSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM3 */ SM3_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::HideMainmenu */ HideMainmenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YellowBorder_C9 */ YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  Area_group_T_DMI_Types_Pkg /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::dmiCommand_NID_AreaGroup */ dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YellowBorder_C1 */ YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::NID_C1 */ NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::NID_c9 */ NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  DMI_Request_T_DMI_Types_Pkg /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::DMI_request */ DMI_request_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  DMI_level_T_DMI_Types_Pkg /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SelectedLevel */ SelectedLevel_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::LevelMenu */ LevelMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::LocalModeSymbolIndex */ LocalModeSymbolIndex_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::LocalModeSymbolVisibility */ LocalModeSymbolVisibility_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::PermittedSpeed_CPS */ PermittedSpeed_CPS_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainPosition */ TrainPosition_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::Local_DMI_evc_data */ Local_DMI_evc_data_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  array_real_32 /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::Track_Atlas_Gradient_Value */ Track_Atlas_Gradient_Value_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  array_real_32 /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::Track_Atlas_Gradient_End */ Track_Atlas_Gradient_End_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  array_real_32 /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::Track_Atlas_Gradient_Begin */ Track_Atlas_Gradient_Begin_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  array_real_32 /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::Track_Atlas_Loc_LRBG */ Track_Atlas_Loc_LRBG_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  array_real_32 /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::Track_Atlas_MRSP */ Track_Atlas_MRSP_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  array_bool_32 /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::Gradient_Visible_Flag */ Gradient_Visible_Flag_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L159 */ _L159_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L161 */ _L161_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L162 */ _L162_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  array_int_30 /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L184 */ _L184_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L393 */ _L393_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L394 */ _L394_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L386 */ _L386_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L387 */ _L387_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L388 */ _L388_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L389 */ _L389_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L378 */ _L378_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L379 */ _L379_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L380 */ _L380_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L381 */ _L381_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L368 */ _L368_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L369 */ _L369_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  array_int_12 /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L427 */ _L427_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_CabinSM /* DMI_Control_Pkg::DMI_Controller::CabinSM */ CabinSM_state_nxt;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* DMI_Control_Pkg::DMI_Controller::DMI_Level_Data */ DMI_Level_Data;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::_L156 */ _L156;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::_L170 */ _L170;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func /* CheckDeskStatus */ Context_CheckDeskStatus;
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget /* 7 */ _5_Context_7;
  outC_DMI_status_DMI_Control_Pkg_Sub_func /* 7 */ Context_7;
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages /* 4 */ _4_Context_4;
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ _3_Context_1[4];
  outC_D_behavior /* 4 */ Context_4;
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages /* 2 */ _2_Context_2;
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages /* 1 */ Context_1;
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils /* 2 */ _1_Context_2;
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func /* 3 */ Context_3;
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_DMI_Controller_DMI_Control_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::DMI_Controller */
extern void DMI_Controller_DMI_Control_Pkg(
  /* DMI_Control_Pkg::DMI_Controller::MousePressed */kcg_bool MousePressed,
  /* DMI_Control_Pkg::DMI_Controller::VisibleGradients */array_bool_12 *VisibleGradients,
  /* DMI_Control_Pkg::DMI_Controller::Brake */kcg_real Brake,
  /* DMI_Control_Pkg::DMI_Controller::keypad_fromDisplay */array_bool_12 *keypad_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::confirmTrainData_fromDisplay */kcg_bool confirmTrainData_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::openTrainDataWindow_fromDisplay */kcg_bool openTrainDataWindow_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::startRequest_fromDisplay */kcg_bool startRequest_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::traindataAck_fromDisplay */kcg_bool traindataAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::traindataYesAck_fromDisplay */kcg_bool traindataYesAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::traindataNoAck_fromDisplay */kcg_bool traindataNoAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::textMsgAck_fromDisplay */kcg_bool textMsgAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::openDriverID_fromDisplay */kcg_bool openDriverID_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::openTrainRN_fromDisplay */kcg_bool openTrainRN_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::closeButton_fromDisplay */kcg_bool closeButton_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::closeButtonMain_fromDisplay */kcg_bool closeButtonMain_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::openMainMenu_fromDisplay */kcg_bool openMainMenu_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::TIU_trainStatus */TIU_trainStatus_T_TIU_Types_Pkg *TIU_trainStatus,
  /* DMI_Control_Pkg::DMI_Controller::brakeStatusSymbolAck_fromDisplay */kcg_bool brakeStatusSymbolAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::C1AreaAck_fromDisplay */kcg_bool C1AreaAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::openLevelMenu_fromDisplay */kcg_bool openLevelMenu_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::InputFieldAck_fromDisplay */kcg_bool InputFieldAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::OverD9_fromDisplay */kcg_bool OverD9_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::OverD12_frpmDisplay */kcg_bool OverD12_frpmDisplay,
  /* DMI_Control_Pkg::DMI_Controller::HidePlanningArea_fromDisplay */kcg_bool HidePlanningArea_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::ShowPlanningArea_fromDisplay */kcg_bool ShowPlanningArea_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::EVC_to_DMI */EVC_to_DMI_Message_int_T_API_DMI_Pkg *EVC_to_DMI,
  /* DMI_Control_Pkg::DMI_Controller::ScrollUp_fromDisplay */kcg_bool ScrollUp_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::ScrollDown_fromDisplay */kcg_bool ScrollDown_fromDisplay,
  outC_DMI_Controller_DMI_Control_Pkg *outC);

extern void DMI_Controller_reset_DMI_Control_Pkg(
  outC_DMI_Controller_DMI_Control_Pkg *outC);

#endif /* _DMI_Controller_DMI_Control_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DMI_Controller_DMI_Control_Pkg.h
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

