/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:37
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_Toolbox.h"

void DMI_reset_Toolbox(outC_DMI_Toolbox *outC)
{
  /* 2 */ DMI_Controller_reset_DMI_Control_Pkg(&outC->Context_2);
  /* 1 */ manageTIU_input_reset_input_from_TIU_API_Pkg(&outC->Context_1);
}

/* Toolbox::DMI */
void DMI_Toolbox(
  /* Toolbox::DMI::GUI_reset */kcg_bool GUI_reset,
  /* Toolbox::DMI::EVC_toDMI */EVC_to_DMI_Message_int_T_API_DMI_Pkg *EVC_toDMI,
  /* Toolbox::DMI::DMI_MousePressed */kcg_bool DMI_MousePressed,
  /* Toolbox::DMI::DMI_startRequest */kcg_bool DMI_startRequest,
  /* Toolbox::DMI::DMI_openTrainRN */kcg_bool DMI_openTrainRN,
  /* Toolbox::DMI::DMI_traindataYesAck */kcg_bool DMI_traindataYesAck,
  /* Toolbox::DMI::DMI_keypad */array_bool_12 *DMI_keypad,
  /* Toolbox::DMI::DMI_openTrainDataWindow */kcg_bool DMI_openTrainDataWindow,
  /* Toolbox::DMI::DMI_openDriverID */kcg_bool DMI_openDriverID,
  /* Toolbox::DMI::DMI_traindataNoAck */kcg_bool DMI_traindataNoAck,
  /* Toolbox::DMI::DMI_traindataAck */kcg_bool DMI_traindataAck,
  /* Toolbox::DMI::DMI_closeButton */kcg_bool DMI_closeButton,
  /* Toolbox::DMI::DMI_confirmTrainData */kcg_bool DMI_confirmTrainData,
  /* Toolbox::DMI::DMI_textMsgAck */kcg_bool DMI_textMsgAck,
  /* Toolbox::DMI::TIU_Message */TIU_Input_msg_API_TIU_Pkg *TIU_Message,
  /* Toolbox::DMI::DMI_openLevelMenu */kcg_bool DMI_openLevelMenu,
  /* Toolbox::DMI::DMI_InputFieldAck */kcg_bool DMI_InputFieldAck,
  /* Toolbox::DMI::DMI_openMainMenu_fromDisplay */kcg_bool DMI_openMainMenu_fromDisplay,
  /* Toolbox::DMI::DMI_OverD9_fromDisplay */kcg_bool DMI_OverD9_fromDisplay,
  /* Toolbox::DMI::DMI_OverD12_frpmDisplay */kcg_bool DMI_OverD12_frpmDisplay,
  /* Toolbox::DMI::DMI_HidePlanningArea_fromDisplay */kcg_bool DMI_HidePlanningArea_fromDisplay,
  /* Toolbox::DMI::DMI_ShowPlanningArea_fromDisplay */kcg_bool DMI_ShowPlanningArea_fromDisplay,
  /* Toolbox::DMI::DMI_closeButtonMain */kcg_bool DMI_closeButtonMain,
  /* Toolbox::DMI::DMI_C1AreaAck */kcg_bool DMI_C1AreaAck,
  /* Toolbox::DMI::DMI_ScrollUp */kcg_bool DMI_ScrollUp,
  /* Toolbox::DMI::DMI_ScrollDown */kcg_bool DMI_ScrollDown,
  outC_DMI_Toolbox *outC)
{
  kcg_int i;
  /* Toolbox::DMI::_L212 */ array_bool_12 _L212;
  
  outC->DMI_SingleMsgAckRequiredVisibility_toDysplay = kcg_false;
  for (i = 0; i < 12; i++) {
    _L212[i] = kcg_false;
  }
  /* 1 */
  manageTIU_input_input_from_TIU_API_Pkg(
    TIU_Message,
    (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg,
    &outC->Context_1);
  /* 2 */
  DMI_Controller_DMI_Control_Pkg(
    DMI_MousePressed,
    &_L212,
    0.0,
    DMI_keypad,
    DMI_confirmTrainData,
    DMI_openTrainDataWindow,
    DMI_startRequest,
    DMI_traindataAck,
    DMI_traindataYesAck,
    DMI_traindataNoAck,
    DMI_textMsgAck,
    DMI_openDriverID,
    DMI_openTrainRN,
    DMI_closeButton,
    DMI_closeButtonMain,
    DMI_openMainMenu_fromDisplay,
    &outC->Context_1.outTIUStatus,
    kcg_false,
    DMI_C1AreaAck,
    DMI_openLevelMenu,
    DMI_InputFieldAck,
    DMI_OverD9_fromDisplay,
    DMI_OverD12_frpmDisplay,
    DMI_HidePlanningArea_fromDisplay,
    DMI_ShowPlanningArea_fromDisplay,
    EVC_toDMI,
    DMI_ScrollUp,
    DMI_ScrollDown,
    &outC->Context_2);
  outC->DMI_TrainPosition_toDisplay = outC->Context_2.TrainPosition_toDisplay;
  outC->DMI_ETCS_LevelSymbol_toDisplay =
    outC->Context_2.ETCS_LevelSymbol_toDisplay;
  outC->DMI_LevelSymbolVisibility_toDisplay =
    outC->Context_2.LevelSymbolVisibility_toDisplay;
  outC->DMI_TrainSpeed_toDisplay = outC->Context_2.TrainSpeed_toDisplay;
  outC->DMI_TrainDataWindowVisibility_toDisplay =
    outC->Context_2.TrainDataWindowVisibility_toDisplay;
  outC->DMI_SpeedDigitOne_toDisplay = outC->Context_2.SpeedDigitOne_toDisplay;
  outC->DMI_SpeedDigitTwo_toDisplay = outC->Context_2.SpeedDigitTwo_toDisplay;
  outC->DMI_SpeedDigitThree_toDisplay =
    outC->Context_2.SpeedDigitThree_toDisplay;
  outC->DMI_SpeedTarget_toDisplay = outC->Context_2.SpeedTarget_toDisplay;
  outC->DMI_SpeedPermitted_toDisplay = outC->Context_2.SpeedPermitted_toDisplay;
  outC->DMI_SpeedRelease_toDisplay = outC->Context_2.SpeedRelease_toDisplay;
  outC->DMI_SpeedIntervention_toDisplay =
    outC->Context_2.SpeedIntervention_toDisplay;
  outC->DMI_DistanceToTarget_toDisplay =
    outC->Context_2.DistanceToTarget_toDisplay;
  outC->DMI_DistanceToTargetVisible_toDisplay =
    outC->Context_2.DistanceToTargetVisibilityDigital_toDisplay;
  outC->DMI_InterpolatedDistanceToTarget_toDisplay =
    outC->Context_2.InterpolatedDistanceToTarget_toDisplay;
  outC->DMI_StatusSymbolBrake_toDisplay =
    outC->Context_2.StatusSymbolBrake_toDisplay;
  outC->DMI_PointerColor_toDisplay = outC->Context_2.PointerColor_toDisplay;
  kcg_copy_array_int_9(
    &outC->DMI_DriverID_Display_toDisplay,
    &outC->Context_2.DriverID_Display_toDisplay);
  kcg_copy_array_int_9(
    &outC->DMI_TrainRN_Display_toDisplay,
    &outC->Context_2.TrainRN_Display_toDisplay);
  kcg_copy_array_bool_15(
    &outC->DMI_window_mask_visibility__toDisplay,
    &outC->Context_2.window_mask_visibility__toDisplay);
  kcg_copy_array_int_30(
    &outC->DMI_ArrayButtonsEnabler_toDisplay,
    &outC->Context_2.ArrayButtonsEnabler_toDisplay);
  outC->DMI_CloseButtonEnabler_toDisplay =
    outC->Context_2.CloseButtonEnabler_toDisplay;
  outC->DMI_StatusSymbolVisibility_toDisplay =
    outC->Context_2.StatusSymbolVisibility_toDisplay;
  outC->DMI_RBC_status_symbol_toDisplay =
    outC->Context_2.RBC_status_symbol_toDisplay;
  outC->DMI_DistanceToTargetBarVisibility_toDisplay =
    outC->Context_2.DistanceToTargetBarVisibility_toDisplay;
  outC->DMI_ModeSymbol_toDisplay = outC->Context_2.ModeSymbol_toDisplay;
  outC->DMI_ModeSymbolVisibility_toDisplay =
    outC->Context_2.ModeSymbolVisibility_toDisplay;
  kcg_copy_array_int_5(
    &outC->DMI_ArrayOfMsgIndex_toDisplay,
    &outC->Context_2.ArrayOfMsgIndex_toDisplay);
  outC->DMI_trainCategoryIndex_toDisplay =
    outC->Context_2.trainCategoryIndex_toDisplay;
  outC->DMI_trainAxleloadIndex_toDisplay =
    outC->Context_2.trainAxleloadIndex_toDisplay;
  outC->DMI_trainAirtightIndex_toDisplay =
    outC->Context_2.trainAirtightIndex_toDisplay;
  outC->DMI_trainLoadingGougeIndex_toDisplay =
    outC->Context_2.trainLoadingGougeIndex_toDisplay;
  outC->DMI_trainLenght_toDisplay = outC->Context_2.trainLenght_toDisplay;
  outC->DMI_trainBrakePerc_toDisplay = outC->Context_2.trainBrakePerc_toDisplay;
  outC->DMI_trainMaxspeed_toDisplay = outC->Context_2.trainMaxspeed_toDisplay;
  outC->DMI_traindataValidWinVisibility_toDisplay =
    outC->Context_2.traindataValidWinVisibility_toDisplay;
  outC->DMI_traindataYesNoIndex_toDisplay =
    outC->Context_2.traindataYesNoIndex_toDisplay;
  outC->DMI_yellowBorderMsg_toDisplay =
    outC->Context_2.yellowBorderMsg_toDisplay;
  outC->DMI_closeButtonIndex_toDisplay =
    outC->Context_2.closeButtonIndex_toDisplay;
  outC->DMI_openDesk_toDisplay = outC->Context_2.openDesk_toDisplay;
  outC->DMI_yellowBorderBrakeSymbol_toDisplay =
    outC->Context_2.yellowBorderBrakeSymbol_toDisplay;
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->DMI_icons_ack,
    &outC->Context_2.DMI_icons_ack);
  outC->DMI_yellowBorderC1Area_toDisplay =
    outC->Context_2.yellowBorderC1Area_toDisplay;
  outC->DMI_iconGroupIndex_toDisplay = outC->Context_2.iconGroupIndex_toDisplay;
  outC->DMI_levelSymbolAnnouncementIndex_toDisplay =
    outC->Context_2.levelSymbolAnnouncementIndex_toDisplay;
  outC->DMI_modeSymbolAnnouncementIndex_toDisplay =
    outC->Context_2.modeSymbolAnnouncementIndex_toDisplay;
  outC->DMI_hourGlassCounter_toDisplay =
    outC->Context_2.hourGlassCounter_toDisplay;
  outC->DMI_hourGlassVisibility_toDisplay =
    outC->Context_2.hourGlassVisibility_toDisplay;
  outC->DMI_VpermColor_toDisplay = outC->Context_2.VpermColor_toDisplay;
  outC->DMI_VreleaseColor_toDisplay = outC->Context_2.VreleaseColor_toDisplay;
  outC->DMI_VtargetColor_toDisplay = outC->Context_2.VtargetColor_toDisplay;
  outC->DMI_Vtarget_permVisibility_toDisplay =
    outC->Context_2.Vtarget_permVisibility_toDisplay;
  outC->DMI_Vinterv_Visibility_toDisplay =
    outC->Context_2.Vinterv_Visibility_toDisplay;
  outC->DMI_vtarget_permColor_toDisplay =
    outC->Context_2.vtarget_permColor_toDisplay;
  outC->DMI_Vinterv_Color_toDisplay = outC->Context_2.Vinterv_Color_toDisplay;
  outC->DMI_levelMenuVisibility_toDisplay =
    outC->Context_2.levelMenuVisibility_toDisplay;
  kcg_copy_array_int_12(
    &outC->DMI_ArrayLevelIndex_toDisplay,
    &outC->Context_2.ArrayLevelIndex_toDisplay);
  outC->DMI_IndexLevel_toDisplay = outC->Context_2.IndexLevel_toDisplay;
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->DMI_level_data,
    &outC->Context_2.DMI_level_data);
  kcg_copy_array_int_5(
    &outC->DMI_IndexFixedMsg_toDisplay,
    &outC->Context_2.IndexFixedMsg_toDisplay);
  kcg_copy_array_char_30_5(
    &outC->DMI_PlainText_toDisplay,
    &outC->Context_2.PlainText_toDisplay);
  kcg_copy_array_real_5(
    &outC->DMI_Array_hh_toDisplay,
    &outC->Context_2.Array_hh_toDisplay);
  kcg_copy_array_real_5(
    &outC->DMI_Array_mm_toDisplay,
    &outC->Context_2.Array_mm_toDisplay);
  outC->DMI_isAuxiliarMsg_toDisplay = outC->Context_2.isAuxiliarMsg_toDisplay;
  kcg_copy_array_bool_10(
    &outC->DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay,
    &outC->Context_2.D_SPDI_SpeedChangeSymbolsVisible_toDisplay);
  kcg_copy_array_int_10(
    &outC->DMI_D_SPDI_SpeedChangeIndex_toDisplay,
    &outC->Context_2.D_SPDI_SpeedChangeIndex_toDisplay);
  kcg_copy_array_real_10(
    &outC->DMI_D_SPDI_SpeedChangePosition_toDisplay,
    &outC->Context_2.D_SPDI_SpeedChangePosition_toDisplay);
  kcg_copy_array_real_1(
    &outC->DMI_D_PASP_IndicationMarker_toDisplay,
    &outC->Context_2.D_PASP_IndicatorMarker_toDisplay);
  kcg_copy_array_real_4(
    &outC->DMI_D_PASP_Speeds_toDisplay,
    &outC->Context_2.D_PASP_Speeds_toDisplay);
  kcg_copy_array_real_4(
    &outC->DMI_D_PASP_Distances_toDisplay,
    &outC->Context_2.D_PASP_Distances_toDisplay);
  kcg_copy_array_bool_12(
    &outC->DMI_D_GradientVisible_toDisplay,
    &outC->Context_2.D_GradientVisible_toDisplay);
  kcg_copy_array_real_12(
    &outC->DMI_GradientsEnd_toDisplay,
    &outC->Context_2.D_GradientEndInterpolated_toDisplay);
  kcg_copy_array_real_12(
    &outC->DMI_GradientsStart_toDisplay,
    &outC->Context_2.D_GradientStartInterpolated_toDisplay);
  kcg_copy_tScale(
    &outC->DMI_D_Scale_toDisplay,
    &outC->Context_2.D_Scale_toDisplay);
  outC->DMI_PlanningAreaVisibility_toDisplay =
    outC->Context_2.PlanningAreaVisibility_toDisplay;
  kcg_copy_array_real_12(
    &outC->DMI_GradientsValue_toDisplay,
    &outC->Context_2.D_GradientsValue_toDisplay);
  outC->DMI_ScrollDownEnableIndex = outC->Context_2.ScrollDownEnableTypeIndex;
  outC->DMI_ScrollUpEnableIndex = outC->Context_2.ScrollUpEnableTypeIndex;
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &outC->EVC_fromDMI,
    &outC->Context_2.Output83);
  kcg_copy_array_real_4(&outC->DMI_TimeArray, &outC->Context_2.TimeArray);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DMI_Toolbox.c
** Generation date: 2015-11-20T19:43:37
*************************************************************$ */

