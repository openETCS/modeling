/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */
#ifndef _RemoteDMI_Testbench_Integration_H_
#define _RemoteDMI_Testbench_Integration_H_

#include "kcg_types.h"
#include "DMI_Toolbox.h"
#include "RemoteEVCBus_EnvSim.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_C1AreaAck */ DMI_C1AreaAck;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_closeButtonMain */ DMI_closeButtonMain;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_ShowPlanningArea_fromDisplay */ DMI_ShowPlanningArea_fromDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_HidePlanningArea_fromDisplay */ DMI_HidePlanningArea_fromDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_OverD12_frpmDisplay */ DMI_OverD12_frpmDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_OverD9_fromDisplay */ DMI_OverD9_fromDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_openMainMenu_fromDisplay */ DMI_openMainMenu_fromDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_openLevelMenu */ DMI_openLevelMenu;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_InputFieldAck */ DMI_InputFieldAck;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_textMsgAck */ DMI_textMsgAck;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_confirmTrainData */ DMI_confirmTrainData;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_closeButton */ DMI_closeButton;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_traindataAck */ DMI_traindataAck;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_traindataNoAck */ DMI_traindataNoAck;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_openDriverID */ DMI_openDriverID;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_openTrainDataWindow */ DMI_openTrainDataWindow;
  array_bool_12 /* Testbench_Integration::RemoteDMI::DMI_keypad */ DMI_keypad;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_traindataYesAck */ DMI_traindataYesAck;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_openTrainRN */ DMI_openTrainRN;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_startRequest */ DMI_startRequest;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_MousePressed */ DMI_MousePressed;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_ScrollDown */ DMI_ScrollDown;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_ScrollUp */ DMI_ScrollUp;
} inC_RemoteDMI_Testbench_Integration;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_PlanningAreaVisibility_toDisplay */ DMI_PlanningAreaVisibility_toDisplay;
  tScale /* Testbench_Integration::RemoteDMI::DMI_D_Scale_toDisplay */ DMI_D_Scale_toDisplay;
  array_bool_12 /* Testbench_Integration::RemoteDMI::DMI_D_GradientVisible_toDisplay */ DMI_D_GradientVisible_toDisplay;
  array_real_4 /* Testbench_Integration::RemoteDMI::DMI_D_PASP_Distances_toDisplay */ DMI_D_PASP_Distances_toDisplay;
  array_real_4 /* Testbench_Integration::RemoteDMI::DMI_D_PASP_Speeds_toDisplay */ DMI_D_PASP_Speeds_toDisplay;
  array_real_10 /* Testbench_Integration::RemoteDMI::DMI_D_SPDI_SpeedChangePosition_toDisplay */ DMI_D_SPDI_SpeedChangePosition_toDisplay;
  array_int_10 /* Testbench_Integration::RemoteDMI::DMI_D_SPDI_SpeedChangeIndex_toDisplay */ DMI_D_SPDI_SpeedChangeIndex_toDisplay;
  array_bool_10 /* Testbench_Integration::RemoteDMI::DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay */ DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_isAuxiliarMsg_toDisplay */ DMI_isAuxiliarMsg_toDisplay;
  array_real_5 /* Testbench_Integration::RemoteDMI::DMI_Array_mm_toDisplay */ DMI_Array_mm_toDisplay;
  array_real_5 /* Testbench_Integration::RemoteDMI::DMI_Array_hh_toDisplay */ DMI_Array_hh_toDisplay;
  array_char_30_5 /* Testbench_Integration::RemoteDMI::DMI_PlainText_toDisplay */ DMI_PlainText_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_levelMenuVisibility_toDisplay */ DMI_levelMenuVisibility_toDisplay;
  array_int_12 /* Testbench_Integration::RemoteDMI::DMI_ArrayLevelIndex_toDisplay */ DMI_ArrayLevelIndex_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_IndexLevel_toDisplay */ DMI_IndexLevel_toDisplay;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* Testbench_Integration::RemoteDMI::DMI_level_data */ DMI_level_data;
  array_int_5 /* Testbench_Integration::RemoteDMI::DMI_IndexFixedMsg_toDisplay */ DMI_IndexFixedMsg_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_SingleMsgAckRequiredVisibility_toDysplay */ DMI_SingleMsgAckRequiredVisibility_toDysplay;
  kcg_real /* Testbench_Integration::RemoteDMI::DMI_InterpolatedDistanceToTarget_toDisplay */ DMI_InterpolatedDistanceToTarget_toDisplay;
  array_int_5 /* Testbench_Integration::RemoteDMI::DMI_ArrayOfMsgIndex_toDisplay */ DMI_ArrayOfMsgIndex_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_iconGroupIndex_toDisplay */ DMI_iconGroupIndex_toDisplay;
  kcg_real /* Testbench_Integration::RemoteDMI::DMI_TrainSpeed_toDisplay */ DMI_TrainSpeed_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_StatusSymbolVisibility_toDisplay */ DMI_StatusSymbolVisibility_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_traindataValidWinVisibility_toDisplay */ DMI_traindataValidWinVisibility_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_Vtarget_permVisibility_toDisplay */ DMI_Vtarget_permVisibility_toDisplay;
  array_real_12 /* Testbench_Integration::RemoteDMI::DMI_GradientsStart_toDisplay */ DMI_GradientsStart_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_trainAirtightIndex_toDisplay */ DMI_trainAirtightIndex_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_yellowBorderC1Area_toDisplay */ DMI_yellowBorderC1Area_toDisplay;
  kcg_real /* Testbench_Integration::RemoteDMI::DMI_SpeedDigitTwo_toDisplay */ DMI_SpeedDigitTwo_toDisplay;
  array_int_9 /* Testbench_Integration::RemoteDMI::DMI_DriverID_Display_toDisplay */ DMI_DriverID_Display_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_yellowBorderMsg_toDisplay */ DMI_yellowBorderMsg_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_Vinterv_Color_toDisplay */ DMI_Vinterv_Color_toDisplay;
  kcg_real /* Testbench_Integration::RemoteDMI::DMI_DistanceToTarget_toDisplay */ DMI_DistanceToTarget_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_ModeSymbol_toDisplay */ DMI_ModeSymbol_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_modeSymbolAnnouncementIndex_toDisplay */ DMI_modeSymbolAnnouncementIndex_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_ETCS_LevelSymbol_toDisplay */ DMI_ETCS_LevelSymbol_toDisplay;
  array_int_30 /* Testbench_Integration::RemoteDMI::DMI_ArrayButtonsEnabler_toDisplay */ DMI_ArrayButtonsEnabler_toDisplay;
  kcg_real /* Testbench_Integration::RemoteDMI::DMI_trainBrakePerc_toDisplay */ DMI_trainBrakePerc_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_VreleaseColor_toDisplay */ DMI_VreleaseColor_toDisplay;
  kcg_real /* Testbench_Integration::RemoteDMI::DMI_SpeedPermitted_toDisplay */ DMI_SpeedPermitted_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_trainCategoryIndex_toDisplay */ DMI_trainCategoryIndex_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_levelSymbolAnnouncementIndex_toDisplay */ DMI_levelSymbolAnnouncementIndex_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_TrainDataWindowVisibility_toDisplay */ DMI_TrainDataWindowVisibility_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_StatusSymbolBrake_toDisplay */ DMI_StatusSymbolBrake_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_traindataYesNoIndex_toDisplay */ DMI_traindataYesNoIndex_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_vtarget_permColor_toDisplay */ DMI_vtarget_permColor_toDisplay;
  array_real_12 /* Testbench_Integration::RemoteDMI::DMI_GradientsEnd_toDisplay */ DMI_GradientsEnd_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_RBC_status_symbol_toDisplay */ DMI_RBC_status_symbol_toDisplay;
  array_int_9 /* Testbench_Integration::RemoteDMI::DMI_TrainRN_Display_toDisplay */ DMI_TrainRN_Display_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_trainLoadingGougeIndex_toDisplay */ DMI_trainLoadingGougeIndex_toDisplay;
  kcg_real /* Testbench_Integration::RemoteDMI::DMI_hourGlassCounter_toDisplay */ DMI_hourGlassCounter_toDisplay;
  kcg_real /* Testbench_Integration::RemoteDMI::DMI_SpeedDigitThree_toDisplay */ DMI_SpeedDigitThree_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_ModeSymbolVisibility_toDisplay */ DMI_ModeSymbolVisibility_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_closeButtonIndex_toDisplay */ DMI_closeButtonIndex_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_yellowBorderBrakeSymbol_toDisplay */ DMI_yellowBorderBrakeSymbol_toDisplay;
  kcg_real /* Testbench_Integration::RemoteDMI::DMI_SpeedIntervention_toDisplay */ DMI_SpeedIntervention_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_LevelSymbolVisibility_toDisplay */ DMI_LevelSymbolVisibility_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_DistanceToTargetVisible_toDisplay */ DMI_DistanceToTargetVisible_toDisplay;
  kcg_real /* Testbench_Integration::RemoteDMI::DMI_trainMaxspeed_toDisplay */ DMI_trainMaxspeed_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_VtargetColor_toDisplay */ DMI_VtargetColor_toDisplay;
  kcg_real /* Testbench_Integration::RemoteDMI::DMI_SpeedRelease_toDisplay */ DMI_SpeedRelease_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_CloseButtonEnabler_toDisplay */ DMI_CloseButtonEnabler_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_PointerColor_toDisplay */ DMI_PointerColor_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_trainAxleloadIndex_toDisplay */ DMI_trainAxleloadIndex_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_hourGlassVisibility_toDisplay */ DMI_hourGlassVisibility_toDisplay;
  kcg_real /* Testbench_Integration::RemoteDMI::DMI_SpeedDigitOne_toDisplay */ DMI_SpeedDigitOne_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_DistanceToTargetBarVisibility_toDisplay */ DMI_DistanceToTargetBarVisibility_toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_Vinterv_Visibility_toDisplay */ DMI_Vinterv_Visibility_toDisplay;
  kcg_real /* Testbench_Integration::RemoteDMI::DMI_TrainPosition_toDisplay */ DMI_TrainPosition_toDisplay;
  array_real_12 /* Testbench_Integration::RemoteDMI::DMI_GradientsValue_toDisplay */ DMI_GradientsValue_toDisplay;
  kcg_real /* Testbench_Integration::RemoteDMI::DMI_trainLenght_toDisplay */ DMI_trainLenght_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_VpermColor_toDisplay */ DMI_VpermColor_toDisplay;
  kcg_real /* Testbench_Integration::RemoteDMI::DMI_SpeedTarget_toDisplay */ DMI_SpeedTarget_toDisplay;
  array_bool_15 /* Testbench_Integration::RemoteDMI::DMI_window_mask_visibility__toDisplay */ DMI_window_mask_visibility__toDisplay;
  kcg_bool /* Testbench_Integration::RemoteDMI::DMI_openDesk_toDisplay */ DMI_openDesk_toDisplay;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* Testbench_Integration::RemoteDMI::DMI_icons_ack */ DMI_icons_ack;
  array_real_1 /* Testbench_Integration::RemoteDMI::DMI_D_PASP_IndicationMarker_toDisplay */ DMI_D_PASP_IndicationMarker_toDisplay;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_ScrollDownEnableIndex */ DMI_ScrollDownEnableIndex;
  kcg_int /* Testbench_Integration::RemoteDMI::DMI_ScrollUpEnableIndex */ DMI_ScrollUpEnableIndex;
  array_real_4 /* Testbench_Integration::RemoteDMI::DMI_localTime */ DMI_localTime;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  TIU_Input_msg_API_TIU_Pkg /* Testbench_Integration::RemoteDMI::tiuToDMI */ tiuToDMI;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* Testbench_Integration::RemoteDMI::evc2DMI */ evc2DMI;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DMI_Toolbox /* 1 */ _1_Context_1;
  outC_RemoteEVCBus_EnvSim /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_RemoteDMI_Testbench_Integration;

/* ===========  node initialization and cycle functions  =========== */
/* Testbench_Integration::RemoteDMI */
extern void RemoteDMI_Testbench_Integration(
  inC_RemoteDMI_Testbench_Integration *inC,
  outC_RemoteDMI_Testbench_Integration *outC);

extern void RemoteDMI_reset_Testbench_Integration(
  outC_RemoteDMI_Testbench_Integration *outC);

#endif /* _RemoteDMI_Testbench_Integration_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RemoteDMI_Testbench_Integration.h
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

