/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#include "ROOT_testBenchIntegration.h"

/* ROOT_testBenchIntegration::resetOut */
kcg_bool resetOut;
/* ROOT_testBenchIntegration::GUI_position */
kcg_real GUI_position;
/* ROOT_testBenchIntegration::GUI_velocity */
kcg_real GUI_velocity;
/* ROOT_testBenchIntegration::GUI_timestamp */
T_internal_Type_Obu_BasicTypes_Pkg GUI_timestamp;
/* ROOT_testBenchIntegration::GUI_debugTrainPositionNominal */
L_internal_Type_Obu_BasicTypes_Pkg GUI_debugTrainPositionNominal;
/* ROOT_testBenchIntegration::GUI_debugTrainPositionDeltaMax */
L_internal_Type_Obu_BasicTypes_Pkg GUI_debugTrainPositionDeltaMax;
/* ROOT_testBenchIntegration::GUI_debugTrainPositionDeltaMin */
L_internal_Type_Obu_BasicTypes_Pkg GUI_debugTrainPositionDeltaMin;
/* ROOT_testBenchIntegration::DMI_TrainPosition_toDisplay */
kcg_real DMI_TrainPosition_toDisplay;
/* ROOT_testBenchIntegration::DMI_ETCS_LevelSymbol_toDisplay */
kcg_int DMI_ETCS_LevelSymbol_toDisplay;
/* ROOT_testBenchIntegration::DMI_LevelSymbolVisibility_toDisplay */
kcg_bool DMI_LevelSymbolVisibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_TrainSpeed_toDisplay */
kcg_real DMI_TrainSpeed_toDisplay;
/* ROOT_testBenchIntegration::DMI_TrainDataWindowVisibility_toDisplay */
kcg_bool DMI_TrainDataWindowVisibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_SpeedDigitOne_toDisplay */
kcg_real DMI_SpeedDigitOne_toDisplay;
/* ROOT_testBenchIntegration::DMI_SpeedDigitTwo_toDisplay */
kcg_real DMI_SpeedDigitTwo_toDisplay;
/* ROOT_testBenchIntegration::DMI_SpeedDigitThree_toDisplay */
kcg_real DMI_SpeedDigitThree_toDisplay;
/* ROOT_testBenchIntegration::DMI_SpeedTarget_toDisplay */
kcg_real DMI_SpeedTarget_toDisplay;
/* ROOT_testBenchIntegration::DMI_SpeedPermitted_toDisplay */
kcg_real DMI_SpeedPermitted_toDisplay;
/* ROOT_testBenchIntegration::DMI_SpeedRelease_toDisplay */
kcg_real DMI_SpeedRelease_toDisplay;
/* ROOT_testBenchIntegration::DMI_SpeedIntervention_toDisplay */
kcg_real DMI_SpeedIntervention_toDisplay;
/* ROOT_testBenchIntegration::DMI_GradientsStart_toDisplay */
array_real_12 DMI_GradientsStart_toDisplay;
/* ROOT_testBenchIntegration::DMI_GradientsEnd_toDisplay */
array_real_12 DMI_GradientsEnd_toDisplay;
/* ROOT_testBenchIntegration::DMI_GradientsValue_toDisplay */
array_real_12 DMI_GradientsValue_toDisplay;
/* ROOT_testBenchIntegration::DMI_DistanceToTarget_toDisplay */
kcg_real DMI_DistanceToTarget_toDisplay;
/* ROOT_testBenchIntegration::DMI_DistanceToTargetVisible_toDisplay */
kcg_bool DMI_DistanceToTargetVisible_toDisplay;
/* ROOT_testBenchIntegration::DMI_InterpolatedDistanceToTarget_toDisplay */
kcg_real DMI_InterpolatedDistanceToTarget_toDisplay;
/* ROOT_testBenchIntegration::DMI_StatusSymbolBrake_toDisplay */
kcg_bool DMI_StatusSymbolBrake_toDisplay;
/* ROOT_testBenchIntegration::DMI_PointerColor_toDisplay */
kcg_int DMI_PointerColor_toDisplay;
/* ROOT_testBenchIntegration::DMI_DriverID_Display_toDisplay */
array_int_9 DMI_DriverID_Display_toDisplay;
/* ROOT_testBenchIntegration::DMI_TrainRN_Display_toDisplay */
array_int_9 DMI_TrainRN_Display_toDisplay;
/* ROOT_testBenchIntegration::DMI_window_mask_visibility__toDisplay */
array_bool_15 DMI_window_mask_visibility__toDisplay;
/* ROOT_testBenchIntegration::DMI_ArrayButtonsEnabler_toDisplay */
array_int_30 DMI_ArrayButtonsEnabler_toDisplay;
/* ROOT_testBenchIntegration::DMI_CloseButtonEnabler_toDisplay */
kcg_int DMI_CloseButtonEnabler_toDisplay;
/* ROOT_testBenchIntegration::DMI_StatusSymbolVisibility_toDisplay */
kcg_bool DMI_StatusSymbolVisibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_RBC_status_symbol_toDisplay */
kcg_int DMI_RBC_status_symbol_toDisplay;
/* ROOT_testBenchIntegration::DMI_DistanceToTargetBarVisibility_toDisplay */
kcg_bool DMI_DistanceToTargetBarVisibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_ModeSymbol_toDisplay */
kcg_int DMI_ModeSymbol_toDisplay;
/* ROOT_testBenchIntegration::DMI_ModeSymbolVisibility_toDisplay */
kcg_bool DMI_ModeSymbolVisibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_ArrayOfMsgIndex_toDisplay */
array_int_5 DMI_ArrayOfMsgIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_trainCategoryIndex_toDisplay */
kcg_int DMI_trainCategoryIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_trainAxleloadIndex_toDisplay */
kcg_int DMI_trainAxleloadIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_trainAirtightIndex_toDisplay */
kcg_int DMI_trainAirtightIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_trainLoadingGougeIndex_toDisplay */
kcg_int DMI_trainLoadingGougeIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_trainLenght_toDisplay */
kcg_real DMI_trainLenght_toDisplay;
/* ROOT_testBenchIntegration::DMI_trainBrakePerc_toDisplay */
kcg_real DMI_trainBrakePerc_toDisplay;
/* ROOT_testBenchIntegration::DMI_trainMaxspeed_toDisplay */
kcg_real DMI_trainMaxspeed_toDisplay;
/* ROOT_testBenchIntegration::DMI_traindataValidWinVisibility_toDisplay */
kcg_bool DMI_traindataValidWinVisibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_traindataYesNoIndex_toDisplay */
kcg_int DMI_traindataYesNoIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_textMsgEnable_toDisplay */
kcg_bool DMI_textMsgEnable_toDisplay;
/* ROOT_testBenchIntegration::DMI_yellowBorderMsg_toDisplay */
kcg_bool DMI_yellowBorderMsg_toDisplay;
/* ROOT_testBenchIntegration::DMI_closeButtonIndex_toDisplay */
kcg_int DMI_closeButtonIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_openDesk_toDisplay */
kcg_bool DMI_openDesk_toDisplay;
/* ROOT_testBenchIntegration::DMI_yellowBorderBrakeSymbol_toDisplay */
kcg_bool DMI_yellowBorderBrakeSymbol_toDisplay;
/* ROOT_testBenchIntegration::DMI_icons_ack */
DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg DMI_icons_ack;
/* ROOT_testBenchIntegration::DMI_yellowBorderC1Area_toDisplay */
kcg_bool DMI_yellowBorderC1Area_toDisplay;
/* ROOT_testBenchIntegration::DMI_iconGroupIndex_toDisplay */
kcg_int DMI_iconGroupIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_levelSymbolAnnouncementIndex_toDisplay */
kcg_int DMI_levelSymbolAnnouncementIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_modeSymbolAnnouncementIndex_toDisplay */
kcg_int DMI_modeSymbolAnnouncementIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_hourGlassCounter_toDisplay */
kcg_real DMI_hourGlassCounter_toDisplay;
/* ROOT_testBenchIntegration::DMI_hourGlassVisibility_toDisplay */
kcg_bool DMI_hourGlassVisibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_Vinterv_Visibility_toDisplay */
kcg_bool DMI_Vinterv_Visibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_Vinterv_Color_toDisplay */
kcg_int DMI_Vinterv_Color_toDisplay;
/* ROOT_testBenchIntegration::GUI_MA */
kcg_bool GUI_MA;
/* ROOT_testBenchIntegration::GUI_emergencyBrake */
kcg_bool GUI_emergencyBrake;
/* ROOT_testBenchIntegration::GUI_serviceBrake */
kcg_bool GUI_serviceBrake;
/* ROOT_testBenchIntegration::DMI_VpermColor_toDisplay */
kcg_int DMI_VpermColor_toDisplay;
/* ROOT_testBenchIntegration::DMI_VreleaseColor_toDisplay */
kcg_int DMI_VreleaseColor_toDisplay;
/* ROOT_testBenchIntegration::DMI_VtargetColor_toDisplay */
kcg_int DMI_VtargetColor_toDisplay;
/* ROOT_testBenchIntegration::DMI_Vtarget_permVisibility_toDisplay */
kcg_bool DMI_Vtarget_permVisibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_vtarget_permColor_toDisplay */
kcg_int DMI_vtarget_permColor_toDisplay;
/* ROOT_testBenchIntegration::GUI_permittedSpeed */
kcg_real GUI_permittedSpeed;
/* ROOT_testBenchIntegration::GUI_interventionSpeed */
kcg_real GUI_interventionSpeed;
/* ROOT_testBenchIntegration::GUI_enableGUIModeSelect */
kcg_bool GUI_enableGUIModeSelect;
/* ROOT_testBenchIntegration::GUI_TractionCutOff */
kcg_bool GUI_TractionCutOff;

/* $************* KCG Version 6.4 beta5 (build i13) *************
** ROOT_testBenchIntegration_outputs.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

