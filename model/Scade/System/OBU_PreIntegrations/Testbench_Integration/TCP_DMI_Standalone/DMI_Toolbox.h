/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */
#ifndef _DMI_Toolbox_H_
#define _DMI_Toolbox_H_

#include "kcg_types.h"
#include "manageTIU_input_input_from_TIU_API_Pkg.h"
#include "DMI_Controller_DMI_Control_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* Toolbox::DMI::EVC_fromDMI */ EVC_fromDMI;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* Toolbox::DMI::DMI_icons_ack */ DMI_icons_ack;
  kcg_bool /* Toolbox::DMI::DMI_openDesk_toDisplay */ DMI_openDesk_toDisplay;
  array_bool_15 /* Toolbox::DMI::DMI_window_mask_visibility__toDisplay */ DMI_window_mask_visibility__toDisplay;
  kcg_real /* Toolbox::DMI::DMI_SpeedTarget_toDisplay */ DMI_SpeedTarget_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_VpermColor_toDisplay */ DMI_VpermColor_toDisplay;
  kcg_real /* Toolbox::DMI::DMI_trainLenght_toDisplay */ DMI_trainLenght_toDisplay;
  array_real_12 /* Toolbox::DMI::DMI_GradientsValue_toDisplay */ DMI_GradientsValue_toDisplay;
  kcg_real /* Toolbox::DMI::DMI_TrainPosition_toDisplay */ DMI_TrainPosition_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_Vinterv_Visibility_toDisplay */ DMI_Vinterv_Visibility_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_DistanceToTargetBarVisibility_toDisplay */ DMI_DistanceToTargetBarVisibility_toDisplay;
  kcg_real /* Toolbox::DMI::DMI_SpeedDigitOne_toDisplay */ DMI_SpeedDigitOne_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_hourGlassVisibility_toDisplay */ DMI_hourGlassVisibility_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_trainAxleloadIndex_toDisplay */ DMI_trainAxleloadIndex_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_PointerColor_toDisplay */ DMI_PointerColor_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_CloseButtonEnabler_toDisplay */ DMI_CloseButtonEnabler_toDisplay;
  kcg_real /* Toolbox::DMI::DMI_SpeedRelease_toDisplay */ DMI_SpeedRelease_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_VtargetColor_toDisplay */ DMI_VtargetColor_toDisplay;
  kcg_real /* Toolbox::DMI::DMI_trainMaxspeed_toDisplay */ DMI_trainMaxspeed_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_DistanceToTargetVisible_toDisplay */ DMI_DistanceToTargetVisible_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_LevelSymbolVisibility_toDisplay */ DMI_LevelSymbolVisibility_toDisplay;
  kcg_real /* Toolbox::DMI::DMI_SpeedIntervention_toDisplay */ DMI_SpeedIntervention_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_yellowBorderBrakeSymbol_toDisplay */ DMI_yellowBorderBrakeSymbol_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_closeButtonIndex_toDisplay */ DMI_closeButtonIndex_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_ModeSymbolVisibility_toDisplay */ DMI_ModeSymbolVisibility_toDisplay;
  kcg_real /* Toolbox::DMI::DMI_SpeedDigitThree_toDisplay */ DMI_SpeedDigitThree_toDisplay;
  kcg_real /* Toolbox::DMI::DMI_hourGlassCounter_toDisplay */ DMI_hourGlassCounter_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_trainLoadingGougeIndex_toDisplay */ DMI_trainLoadingGougeIndex_toDisplay;
  array_int_9 /* Toolbox::DMI::DMI_TrainRN_Display_toDisplay */ DMI_TrainRN_Display_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_RBC_status_symbol_toDisplay */ DMI_RBC_status_symbol_toDisplay;
  array_real_12 /* Toolbox::DMI::DMI_GradientsEnd_toDisplay */ DMI_GradientsEnd_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_vtarget_permColor_toDisplay */ DMI_vtarget_permColor_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_traindataYesNoIndex_toDisplay */ DMI_traindataYesNoIndex_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_StatusSymbolBrake_toDisplay */ DMI_StatusSymbolBrake_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_TrainDataWindowVisibility_toDisplay */ DMI_TrainDataWindowVisibility_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_levelSymbolAnnouncementIndex_toDisplay */ DMI_levelSymbolAnnouncementIndex_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_trainCategoryIndex_toDisplay */ DMI_trainCategoryIndex_toDisplay;
  kcg_real /* Toolbox::DMI::DMI_SpeedPermitted_toDisplay */ DMI_SpeedPermitted_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_VreleaseColor_toDisplay */ DMI_VreleaseColor_toDisplay;
  kcg_real /* Toolbox::DMI::DMI_trainBrakePerc_toDisplay */ DMI_trainBrakePerc_toDisplay;
  array_int_30 /* Toolbox::DMI::DMI_ArrayButtonsEnabler_toDisplay */ DMI_ArrayButtonsEnabler_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_ETCS_LevelSymbol_toDisplay */ DMI_ETCS_LevelSymbol_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_modeSymbolAnnouncementIndex_toDisplay */ DMI_modeSymbolAnnouncementIndex_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_ModeSymbol_toDisplay */ DMI_ModeSymbol_toDisplay;
  kcg_real /* Toolbox::DMI::DMI_DistanceToTarget_toDisplay */ DMI_DistanceToTarget_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_Vinterv_Color_toDisplay */ DMI_Vinterv_Color_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_yellowBorderMsg_toDisplay */ DMI_yellowBorderMsg_toDisplay;
  array_int_9 /* Toolbox::DMI::DMI_DriverID_Display_toDisplay */ DMI_DriverID_Display_toDisplay;
  kcg_real /* Toolbox::DMI::DMI_SpeedDigitTwo_toDisplay */ DMI_SpeedDigitTwo_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_yellowBorderC1Area_toDisplay */ DMI_yellowBorderC1Area_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_trainAirtightIndex_toDisplay */ DMI_trainAirtightIndex_toDisplay;
  array_real_12 /* Toolbox::DMI::DMI_GradientsStart_toDisplay */ DMI_GradientsStart_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_Vtarget_permVisibility_toDisplay */ DMI_Vtarget_permVisibility_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_traindataValidWinVisibility_toDisplay */ DMI_traindataValidWinVisibility_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_StatusSymbolVisibility_toDisplay */ DMI_StatusSymbolVisibility_toDisplay;
  kcg_real /* Toolbox::DMI::DMI_TrainSpeed_toDisplay */ DMI_TrainSpeed_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_iconGroupIndex_toDisplay */ DMI_iconGroupIndex_toDisplay;
  array_int_5 /* Toolbox::DMI::DMI_ArrayOfMsgIndex_toDisplay */ DMI_ArrayOfMsgIndex_toDisplay;
  kcg_real /* Toolbox::DMI::DMI_InterpolatedDistanceToTarget_toDisplay */ DMI_InterpolatedDistanceToTarget_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_SingleMsgAckRequiredVisibility_toDysplay */ DMI_SingleMsgAckRequiredVisibility_toDysplay;
  array_int_5 /* Toolbox::DMI::DMI_IndexFixedMsg_toDisplay */ DMI_IndexFixedMsg_toDisplay;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* Toolbox::DMI::DMI_level_data */ DMI_level_data;
  kcg_int /* Toolbox::DMI::DMI_IndexLevel_toDisplay */ DMI_IndexLevel_toDisplay;
  array_int_12 /* Toolbox::DMI::DMI_ArrayLevelIndex_toDisplay */ DMI_ArrayLevelIndex_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_levelMenuVisibility_toDisplay */ DMI_levelMenuVisibility_toDisplay;
  array_char_30_5 /* Toolbox::DMI::DMI_PlainText_toDisplay */ DMI_PlainText_toDisplay;
  array_real_5 /* Toolbox::DMI::DMI_Array_hh_toDisplay */ DMI_Array_hh_toDisplay;
  array_real_5 /* Toolbox::DMI::DMI_Array_mm_toDisplay */ DMI_Array_mm_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_isAuxiliarMsg_toDisplay */ DMI_isAuxiliarMsg_toDisplay;
  array_bool_10 /* Toolbox::DMI::DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay */ DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay;
  array_int_10 /* Toolbox::DMI::DMI_D_SPDI_SpeedChangeIndex_toDisplay */ DMI_D_SPDI_SpeedChangeIndex_toDisplay;
  array_real_10 /* Toolbox::DMI::DMI_D_SPDI_SpeedChangePosition_toDisplay */ DMI_D_SPDI_SpeedChangePosition_toDisplay;
  array_real_4 /* Toolbox::DMI::DMI_D_PASP_Speeds_toDisplay */ DMI_D_PASP_Speeds_toDisplay;
  array_real_4 /* Toolbox::DMI::DMI_D_PASP_Distances_toDisplay */ DMI_D_PASP_Distances_toDisplay;
  array_real_1 /* Toolbox::DMI::DMI_D_PASP_IndicationMarker_toDisplay */ DMI_D_PASP_IndicationMarker_toDisplay;
  array_bool_12 /* Toolbox::DMI::DMI_D_GradientVisible_toDisplay */ DMI_D_GradientVisible_toDisplay;
  tScale /* Toolbox::DMI::DMI_D_Scale_toDisplay */ DMI_D_Scale_toDisplay;
  kcg_bool /* Toolbox::DMI::DMI_PlanningAreaVisibility_toDisplay */ DMI_PlanningAreaVisibility_toDisplay;
  kcg_int /* Toolbox::DMI::DMI_ScrollDownEnableIndex */ DMI_ScrollDownEnableIndex;
  kcg_int /* Toolbox::DMI::DMI_ScrollUpEnableIndex */ DMI_ScrollUpEnableIndex;
  array_real_4 /* Toolbox::DMI::DMI_TimeArray */ DMI_TimeArray;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_manageTIU_input_input_from_TIU_API_Pkg /* 1 */ Context_1;
  outC_DMI_Controller_DMI_Control_Pkg /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_DMI_Toolbox;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::DMI */
extern void DMI_Toolbox(
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
  outC_DMI_Toolbox *outC);

extern void DMI_reset_Toolbox(outC_DMI_Toolbox *outC);

#endif /* _DMI_Toolbox_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DMI_Toolbox.h
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

