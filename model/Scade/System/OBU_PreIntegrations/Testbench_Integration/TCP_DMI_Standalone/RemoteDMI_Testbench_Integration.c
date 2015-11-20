/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:37
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RemoteDMI_Testbench_Integration.h"

void RemoteDMI_reset_Testbench_Integration(
  outC_RemoteDMI_Testbench_Integration *outC)
{
  outC->init = kcg_true;
  /* 1 */ RemoteEVCBus_reset_EnvSim(&outC->Context_1);
  /* 1 */ DMI_reset_Toolbox(&outC->_1_Context_1);
}

/* Testbench_Integration::RemoteDMI */
void RemoteDMI_Testbench_Integration(
  inC_RemoteDMI_Testbench_Integration *inC,
  outC_RemoteDMI_Testbench_Integration *outC)
{
  EVC_to_DMI_Message_int_T_API_DMI_Pkg tmp1;
  TIU_Input_msg_API_TIU_Pkg tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      &tmp1,
      (EVC_to_DMI_Message_int_T_API_DMI_Pkg *)
        &cEmptyEVC2DMIBusMessage_Testbench_Integration);
    kcg_copy_TIU_Input_msg_API_TIU_Pkg(
      &tmp,
      (TIU_Input_msg_API_TIU_Pkg *) &cEMPTY_TIU2DMI_EnvSim_Internal);
  }
  else {
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&tmp1, &outC->evc2DMI);
    kcg_copy_TIU_Input_msg_API_TIU_Pkg(&tmp, &outC->tiuToDMI);
  }
  /* 1 */
  DMI_Toolbox(
    kcg_false,
    &tmp1,
    inC->DMI_MousePressed,
    inC->DMI_startRequest,
    inC->DMI_openTrainRN,
    inC->DMI_traindataYesAck,
    &inC->DMI_keypad,
    inC->DMI_openTrainDataWindow,
    inC->DMI_openDriverID,
    inC->DMI_traindataNoAck,
    inC->DMI_traindataAck,
    inC->DMI_closeButton,
    inC->DMI_confirmTrainData,
    inC->DMI_textMsgAck,
    &tmp,
    inC->DMI_openLevelMenu,
    inC->DMI_InputFieldAck,
    inC->DMI_openMainMenu_fromDisplay,
    inC->DMI_OverD9_fromDisplay,
    inC->DMI_OverD12_frpmDisplay,
    inC->DMI_HidePlanningArea_fromDisplay,
    inC->DMI_ShowPlanningArea_fromDisplay,
    inC->DMI_closeButtonMain,
    inC->DMI_C1AreaAck,
    inC->DMI_ScrollUp,
    inC->DMI_ScrollDown,
    &outC->_1_Context_1);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->DMI_icons_ack,
    &outC->_1_Context_1.DMI_icons_ack);
  outC->DMI_openDesk_toDisplay = outC->_1_Context_1.DMI_openDesk_toDisplay;
  kcg_copy_array_bool_15(
    &outC->DMI_window_mask_visibility__toDisplay,
    &outC->_1_Context_1.DMI_window_mask_visibility__toDisplay);
  outC->DMI_SpeedTarget_toDisplay =
    outC->_1_Context_1.DMI_SpeedTarget_toDisplay;
  outC->DMI_VpermColor_toDisplay = outC->_1_Context_1.DMI_VpermColor_toDisplay;
  outC->DMI_trainLenght_toDisplay =
    outC->_1_Context_1.DMI_trainLenght_toDisplay;
  kcg_copy_array_real_12(
    &outC->DMI_GradientsValue_toDisplay,
    &outC->_1_Context_1.DMI_GradientsValue_toDisplay);
  outC->DMI_TrainPosition_toDisplay =
    outC->_1_Context_1.DMI_TrainPosition_toDisplay;
  outC->DMI_Vinterv_Visibility_toDisplay =
    outC->_1_Context_1.DMI_Vinterv_Visibility_toDisplay;
  outC->DMI_DistanceToTargetBarVisibility_toDisplay =
    outC->_1_Context_1.DMI_DistanceToTargetBarVisibility_toDisplay;
  outC->DMI_SpeedDigitOne_toDisplay =
    outC->_1_Context_1.DMI_SpeedDigitOne_toDisplay;
  outC->DMI_hourGlassVisibility_toDisplay =
    outC->_1_Context_1.DMI_hourGlassVisibility_toDisplay;
  outC->DMI_trainAxleloadIndex_toDisplay =
    outC->_1_Context_1.DMI_trainAxleloadIndex_toDisplay;
  outC->DMI_PointerColor_toDisplay =
    outC->_1_Context_1.DMI_PointerColor_toDisplay;
  outC->DMI_CloseButtonEnabler_toDisplay =
    outC->_1_Context_1.DMI_CloseButtonEnabler_toDisplay;
  outC->DMI_SpeedRelease_toDisplay =
    outC->_1_Context_1.DMI_SpeedRelease_toDisplay;
  outC->DMI_VtargetColor_toDisplay =
    outC->_1_Context_1.DMI_VtargetColor_toDisplay;
  outC->DMI_trainMaxspeed_toDisplay =
    outC->_1_Context_1.DMI_trainMaxspeed_toDisplay;
  outC->DMI_DistanceToTargetVisible_toDisplay =
    outC->_1_Context_1.DMI_DistanceToTargetVisible_toDisplay;
  outC->DMI_LevelSymbolVisibility_toDisplay =
    outC->_1_Context_1.DMI_LevelSymbolVisibility_toDisplay;
  outC->DMI_SpeedIntervention_toDisplay =
    outC->_1_Context_1.DMI_SpeedIntervention_toDisplay;
  outC->DMI_yellowBorderBrakeSymbol_toDisplay =
    outC->_1_Context_1.DMI_yellowBorderBrakeSymbol_toDisplay;
  outC->DMI_closeButtonIndex_toDisplay =
    outC->_1_Context_1.DMI_closeButtonIndex_toDisplay;
  outC->DMI_ModeSymbolVisibility_toDisplay =
    outC->_1_Context_1.DMI_ModeSymbolVisibility_toDisplay;
  outC->DMI_SpeedDigitThree_toDisplay =
    outC->_1_Context_1.DMI_SpeedDigitThree_toDisplay;
  outC->DMI_hourGlassCounter_toDisplay =
    outC->_1_Context_1.DMI_hourGlassCounter_toDisplay;
  outC->DMI_trainLoadingGougeIndex_toDisplay =
    outC->_1_Context_1.DMI_trainLoadingGougeIndex_toDisplay;
  kcg_copy_array_int_9(
    &outC->DMI_TrainRN_Display_toDisplay,
    &outC->_1_Context_1.DMI_TrainRN_Display_toDisplay);
  outC->DMI_RBC_status_symbol_toDisplay =
    outC->_1_Context_1.DMI_RBC_status_symbol_toDisplay;
  kcg_copy_array_real_12(
    &outC->DMI_GradientsEnd_toDisplay,
    &outC->_1_Context_1.DMI_GradientsEnd_toDisplay);
  outC->DMI_vtarget_permColor_toDisplay =
    outC->_1_Context_1.DMI_vtarget_permColor_toDisplay;
  outC->DMI_traindataYesNoIndex_toDisplay =
    outC->_1_Context_1.DMI_traindataYesNoIndex_toDisplay;
  outC->DMI_StatusSymbolBrake_toDisplay =
    outC->_1_Context_1.DMI_StatusSymbolBrake_toDisplay;
  outC->DMI_TrainDataWindowVisibility_toDisplay =
    outC->_1_Context_1.DMI_TrainDataWindowVisibility_toDisplay;
  outC->DMI_levelSymbolAnnouncementIndex_toDisplay =
    outC->_1_Context_1.DMI_levelSymbolAnnouncementIndex_toDisplay;
  outC->DMI_trainCategoryIndex_toDisplay =
    outC->_1_Context_1.DMI_trainCategoryIndex_toDisplay;
  outC->DMI_SpeedPermitted_toDisplay =
    outC->_1_Context_1.DMI_SpeedPermitted_toDisplay;
  outC->DMI_VreleaseColor_toDisplay =
    outC->_1_Context_1.DMI_VreleaseColor_toDisplay;
  outC->DMI_trainBrakePerc_toDisplay =
    outC->_1_Context_1.DMI_trainBrakePerc_toDisplay;
  kcg_copy_array_int_30(
    &outC->DMI_ArrayButtonsEnabler_toDisplay,
    &outC->_1_Context_1.DMI_ArrayButtonsEnabler_toDisplay);
  outC->DMI_ETCS_LevelSymbol_toDisplay =
    outC->_1_Context_1.DMI_ETCS_LevelSymbol_toDisplay;
  outC->DMI_modeSymbolAnnouncementIndex_toDisplay =
    outC->_1_Context_1.DMI_modeSymbolAnnouncementIndex_toDisplay;
  outC->DMI_ModeSymbol_toDisplay = outC->_1_Context_1.DMI_ModeSymbol_toDisplay;
  outC->DMI_DistanceToTarget_toDisplay =
    outC->_1_Context_1.DMI_DistanceToTarget_toDisplay;
  outC->DMI_Vinterv_Color_toDisplay =
    outC->_1_Context_1.DMI_Vinterv_Color_toDisplay;
  outC->DMI_yellowBorderMsg_toDisplay =
    outC->_1_Context_1.DMI_yellowBorderMsg_toDisplay;
  kcg_copy_array_int_9(
    &outC->DMI_DriverID_Display_toDisplay,
    &outC->_1_Context_1.DMI_DriverID_Display_toDisplay);
  outC->DMI_SpeedDigitTwo_toDisplay =
    outC->_1_Context_1.DMI_SpeedDigitTwo_toDisplay;
  outC->DMI_yellowBorderC1Area_toDisplay =
    outC->_1_Context_1.DMI_yellowBorderC1Area_toDisplay;
  outC->DMI_trainAirtightIndex_toDisplay =
    outC->_1_Context_1.DMI_trainAirtightIndex_toDisplay;
  kcg_copy_array_real_12(
    &outC->DMI_GradientsStart_toDisplay,
    &outC->_1_Context_1.DMI_GradientsStart_toDisplay);
  outC->DMI_Vtarget_permVisibility_toDisplay =
    outC->_1_Context_1.DMI_Vtarget_permVisibility_toDisplay;
  outC->DMI_traindataValidWinVisibility_toDisplay =
    outC->_1_Context_1.DMI_traindataValidWinVisibility_toDisplay;
  outC->DMI_StatusSymbolVisibility_toDisplay =
    outC->_1_Context_1.DMI_StatusSymbolVisibility_toDisplay;
  outC->DMI_TrainSpeed_toDisplay = outC->_1_Context_1.DMI_TrainSpeed_toDisplay;
  outC->DMI_iconGroupIndex_toDisplay =
    outC->_1_Context_1.DMI_iconGroupIndex_toDisplay;
  kcg_copy_array_int_5(
    &outC->DMI_ArrayOfMsgIndex_toDisplay,
    &outC->_1_Context_1.DMI_ArrayOfMsgIndex_toDisplay);
  outC->DMI_InterpolatedDistanceToTarget_toDisplay =
    outC->_1_Context_1.DMI_InterpolatedDistanceToTarget_toDisplay;
  outC->DMI_SingleMsgAckRequiredVisibility_toDysplay =
    outC->_1_Context_1.DMI_SingleMsgAckRequiredVisibility_toDysplay;
  kcg_copy_array_int_5(
    &outC->DMI_IndexFixedMsg_toDisplay,
    &outC->_1_Context_1.DMI_IndexFixedMsg_toDisplay);
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->DMI_level_data,
    &outC->_1_Context_1.DMI_level_data);
  outC->DMI_IndexLevel_toDisplay = outC->_1_Context_1.DMI_IndexLevel_toDisplay;
  kcg_copy_array_int_12(
    &outC->DMI_ArrayLevelIndex_toDisplay,
    &outC->_1_Context_1.DMI_ArrayLevelIndex_toDisplay);
  outC->DMI_levelMenuVisibility_toDisplay =
    outC->_1_Context_1.DMI_levelMenuVisibility_toDisplay;
  kcg_copy_array_char_30_5(
    &outC->DMI_PlainText_toDisplay,
    &outC->_1_Context_1.DMI_PlainText_toDisplay);
  kcg_copy_array_real_5(
    &outC->DMI_Array_hh_toDisplay,
    &outC->_1_Context_1.DMI_Array_hh_toDisplay);
  kcg_copy_array_real_5(
    &outC->DMI_Array_mm_toDisplay,
    &outC->_1_Context_1.DMI_Array_mm_toDisplay);
  outC->DMI_isAuxiliarMsg_toDisplay =
    outC->_1_Context_1.DMI_isAuxiliarMsg_toDisplay;
  kcg_copy_array_bool_10(
    &outC->DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay,
    &outC->_1_Context_1.DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay);
  kcg_copy_array_int_10(
    &outC->DMI_D_SPDI_SpeedChangeIndex_toDisplay,
    &outC->_1_Context_1.DMI_D_SPDI_SpeedChangeIndex_toDisplay);
  kcg_copy_array_real_10(
    &outC->DMI_D_SPDI_SpeedChangePosition_toDisplay,
    &outC->_1_Context_1.DMI_D_SPDI_SpeedChangePosition_toDisplay);
  kcg_copy_array_real_4(
    &outC->DMI_D_PASP_Speeds_toDisplay,
    &outC->_1_Context_1.DMI_D_PASP_Speeds_toDisplay);
  kcg_copy_array_real_4(
    &outC->DMI_D_PASP_Distances_toDisplay,
    &outC->_1_Context_1.DMI_D_PASP_Distances_toDisplay);
  kcg_copy_array_real_1(
    &outC->DMI_D_PASP_IndicationMarker_toDisplay,
    &outC->_1_Context_1.DMI_D_PASP_IndicationMarker_toDisplay);
  kcg_copy_array_bool_12(
    &outC->DMI_D_GradientVisible_toDisplay,
    &outC->_1_Context_1.DMI_D_GradientVisible_toDisplay);
  kcg_copy_tScale(
    &outC->DMI_D_Scale_toDisplay,
    &outC->_1_Context_1.DMI_D_Scale_toDisplay);
  outC->DMI_PlanningAreaVisibility_toDisplay =
    outC->_1_Context_1.DMI_PlanningAreaVisibility_toDisplay;
  outC->DMI_ScrollDownEnableIndex =
    outC->_1_Context_1.DMI_ScrollDownEnableIndex;
  outC->DMI_ScrollUpEnableIndex = outC->_1_Context_1.DMI_ScrollUpEnableIndex;
  kcg_copy_array_real_4(
    &outC->DMI_localTime,
    &outC->_1_Context_1.DMI_TimeArray);
  /* 1 */
  RemoteEVCBus_EnvSim(&outC->_1_Context_1.EVC_fromDMI, &outC->Context_1);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &outC->evc2DMI,
    &outC->Context_1.evcToDMI);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &outC->tiuToDMI,
    &outC->Context_1.tiuToDMI);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RemoteDMI_Testbench_Integration.c
** Generation date: 2015-11-20T19:43:37
*************************************************************$ */

