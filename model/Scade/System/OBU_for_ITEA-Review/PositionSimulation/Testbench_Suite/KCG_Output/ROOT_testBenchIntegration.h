/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _ROOT_testBenchIntegration_H_
#define _ROOT_testBenchIntegration_H_

#include "kcg_types.h"
#include "TIU_OutputIntegration_output_to_TIU_API_Pkg.h"
#include "collectRadioMessages_radioOutput_Pkg.h"
#include "TestEnvironmentSimulation.h"
#include "brl_BRL_Pkg.h"
#include "FlipFlopJK_digital.h"
#include "manageTIU_input_input_from_TIU_API_Pkg.h"
#include "DMI_Integrator_manage_DMI_Output_Pkg.h"
#include "DMI_Controller_DMI_Control_Pkg.h"
#include "Master_Procedure_ManageProcedure_Pkg.h"
#include "manageDMI_Input_manage_DMI_Input_Pkg.h"
#include "SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  struct_60012 /* ROOT_testBenchIntegration::_L714 */ fby__L714;
  SSM_ST_ModeAndLevelManagement /* ROOT_testBenchIntegration::ModeAndLevelManagement */ ModeAndLevelManagement_state_nxt;
  T_internal_Type_Obu_BasicTypes_Pkg /* ROOT_testBenchIntegration::API_currentTimestamp */ API_currentTimestamp;
  M_MODE /* ROOT_testBenchIntegration::EVC_currentMode */ EVC_currentMode;
  radioManagementMessage_T_Common_Types_Pkg /* ROOT_testBenchIntegration::PROC_radioCmdFromProcedures */ PROC_radioCmdFromProcedures;
  kcg_bool /* ROOT_testBenchIntegration::PROC_powerUp_to_MoRC */ PROC_powerUp_to_MoRC;
  kcg_bool /* ROOT_testBenchIntegration::PROC_statusstartofmissionongoing_to_MoRC */ PROC_statusstartofmissionongoing_to_MoRC;
  kcg_bool /* ROOT_testBenchIntegration::PROC_powerOff_to_MoRC */ PROC_powerOff_to_MoRC;
  DMI_EVC_status_T_DMI_Types_Pkg /* ROOT_testBenchIntegration::DMI_currentDMIStatus */ DMI_currentDMIStatus;
  API_EuroRadioOutput_T_API_RadioCommunication_Pkg /* ROOT_testBenchIntegration::API_radioOutputEVCToRTM */ API_radioOutputEVCToRTM;
  Type_I_train_commands_T_TIU_Types_Pkg /* ROOT_testBenchIntegration::EVC_cutOffCommand */ EVC_cutOffCommand;
  Brake_command_T_TIU_Types_Pkg /* ROOT_testBenchIntegration::SDM_speedSupervisionBrakeCommand */ SDM_speedSupervisionBrakeCommand;
  kcg_bool /* ROOT_testBenchIntegration::_L477 */ _L477;
  kcg_real /* ROOT_testBenchIntegration::_L663 */ _L663;
  kcg_real /* ROOT_testBenchIntegration::_L662 */ _L662;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FlipFlopJK_digital /* 1 */ _7_Context_1;
  outC_manageDMI_Input_manage_DMI_Input_Pkg /* 1 */ _6_Context_1;
  outC_DMI_Controller_DMI_Control_Pkg /* 2 */ _5_Context_2;
  outC_DMI_Integrator_manage_DMI_Output_Pkg /* 1 */ _4_Context_1;
  outC_Master_Procedure_ManageProcedure_Pkg /* 1 */ _3_Context_1;
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg /* 1 */ _2_Context_1;
  outC_manageTIU_input_input_from_TIU_API_Pkg /* 2 */ Context_2;
  outC_brl_BRL_Pkg /* 1 */ _1_Context_1;
  outC_TestEnvironmentSimulation /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ROOT_testBenchIntegration;

/* ===========  node initialization and cycle functions  =========== */
/* ROOT_testBenchIntegration */
extern void ROOT_testBenchIntegration(void);

extern void ROOT_testBenchIntegration_reset(void);
extern void ROOT_testBenchIntegration_init(void);

extern outC_ROOT_testBenchIntegration Ctxt_ROOT_testBenchIntegration;

/* ROOT_testBenchIntegration::GUI_reset */
extern kcg_bool GUI_reset;
/* ROOT_testBenchIntegration::GUI_accelerationPercent */
extern kcg_real GUI_accelerationPercent;
/* ROOT_testBenchIntegration::GUI_mode */
extern kcg_int GUI_mode;
/* ROOT_testBenchIntegration::GUI_level */
extern kcg_int GUI_level;
/* ROOT_testBenchIntegration::GUI_mobileHWStatus */
extern kcg_int GUI_mobileHWStatus;
/* ROOT_testBenchIntegration::GUI_openDesk */
extern kcg_bool GUI_openDesk;
/* ROOT_testBenchIntegration::DMI_arraykey */
extern array_bool_12 DMI_arraykey;
/* ROOT_testBenchIntegration::DMI_MousePressed */
extern kcg_bool DMI_MousePressed;
/* ROOT_testBenchIntegration::DMI_DriverID_Ack */
extern kcg_bool DMI_DriverID_Ack;
/* ROOT_testBenchIntegration::DMI_TrainRN_Ack */
extern kcg_bool DMI_TrainRN_Ack;
/* ROOT_testBenchIntegration::DMI_confirmTrainData */
extern kcg_bool DMI_confirmTrainData;
/* ROOT_testBenchIntegration::DMI_openTrainDataWindow */
extern kcg_bool DMI_openTrainDataWindow;
/* ROOT_testBenchIntegration::DMI_startRequest */
extern kcg_bool DMI_startRequest;
/* ROOT_testBenchIntegration::DMI_traindataAck */
extern kcg_bool DMI_traindataAck;
/* ROOT_testBenchIntegration::DMI_traindataYesAck */
extern kcg_bool DMI_traindataYesAck;
/* ROOT_testBenchIntegration::DMI_traindataNoAck */
extern kcg_bool DMI_traindataNoAck;
/* ROOT_testBenchIntegration::DMI_textMsgAck */
extern kcg_bool DMI_textMsgAck;
/* ROOT_testBenchIntegration::DMI_openDriverID */
extern kcg_bool DMI_openDriverID;
/* ROOT_testBenchIntegration::DMI_openTrainRN */
extern kcg_bool DMI_openTrainRN;
/* ROOT_testBenchIntegration::DMI_closeButton */
extern kcg_bool DMI_closeButton;
/* ROOT_testBenchIntegration::GUI_initialPosition */
extern kcg_real GUI_initialPosition;
/* ROOT_testBenchIntegration::DBG_overrideSDM */
extern kcg_bool DBG_overrideSDM;

/* ROOT_testBenchIntegration::resetOut */
extern kcg_bool resetOut;
/* ROOT_testBenchIntegration::GUI_position */
extern kcg_real GUI_position;
/* ROOT_testBenchIntegration::GUI_velocity */
extern kcg_real GUI_velocity;
/* ROOT_testBenchIntegration::GUI_timestamp */
extern T_internal_Type_Obu_BasicTypes_Pkg GUI_timestamp;
/* ROOT_testBenchIntegration::GUI_debugTrainPositionNominal */
extern L_internal_Type_Obu_BasicTypes_Pkg GUI_debugTrainPositionNominal;
/* ROOT_testBenchIntegration::GUI_debugTrainPositionDeltaMax */
extern L_internal_Type_Obu_BasicTypes_Pkg GUI_debugTrainPositionDeltaMax;
/* ROOT_testBenchIntegration::GUI_debugTrainPositionDeltaMin */
extern L_internal_Type_Obu_BasicTypes_Pkg GUI_debugTrainPositionDeltaMin;
/* ROOT_testBenchIntegration::DMI_TrainPosition_toDisplay */
extern kcg_real DMI_TrainPosition_toDisplay;
/* ROOT_testBenchIntegration::DMI_ETCS_LevelSymbol_toDisplay */
extern kcg_int DMI_ETCS_LevelSymbol_toDisplay;
/* ROOT_testBenchIntegration::DMI_LevelSymbolVisibility_toDisplay */
extern kcg_bool DMI_LevelSymbolVisibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_TrainSpeed_toDisplay */
extern kcg_real DMI_TrainSpeed_toDisplay;
/* ROOT_testBenchIntegration::DMI_TrainDataWindowVisibility_toDisplay */
extern kcg_bool DMI_TrainDataWindowVisibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_SpeedDigitOne_toDisplay */
extern kcg_real DMI_SpeedDigitOne_toDisplay;
/* ROOT_testBenchIntegration::DMI_SpeedDigitTwo_toDisplay */
extern kcg_real DMI_SpeedDigitTwo_toDisplay;
/* ROOT_testBenchIntegration::DMI_SpeedDigitThree_toDisplay */
extern kcg_real DMI_SpeedDigitThree_toDisplay;
/* ROOT_testBenchIntegration::DMI_SpeedTarget_toDisplay */
extern kcg_real DMI_SpeedTarget_toDisplay;
/* ROOT_testBenchIntegration::DMI_SpeedPermitted_toDisplay */
extern kcg_real DMI_SpeedPermitted_toDisplay;
/* ROOT_testBenchIntegration::DMI_SpeedRelease_toDisplay */
extern kcg_real DMI_SpeedRelease_toDisplay;
/* ROOT_testBenchIntegration::DMI_SpeedIntervention_toDisplay */
extern kcg_real DMI_SpeedIntervention_toDisplay;
/* ROOT_testBenchIntegration::DMI_GradientsStart_toDisplay */
extern array_real_12 DMI_GradientsStart_toDisplay;
/* ROOT_testBenchIntegration::DMI_GradientsEnd_toDisplay */
extern array_real_12 DMI_GradientsEnd_toDisplay;
/* ROOT_testBenchIntegration::DMI_GradientsValue_toDisplay */
extern array_real_12 DMI_GradientsValue_toDisplay;
/* ROOT_testBenchIntegration::DMI_DistanceToTarget_toDisplay */
extern kcg_real DMI_DistanceToTarget_toDisplay;
/* ROOT_testBenchIntegration::DMI_DistanceToTargetVisible_toDisplay */
extern kcg_bool DMI_DistanceToTargetVisible_toDisplay;
/* ROOT_testBenchIntegration::DMI_InterpolatedDistanceToTarget_toDisplay */
extern kcg_real DMI_InterpolatedDistanceToTarget_toDisplay;
/* ROOT_testBenchIntegration::DMI_StatusSymbolBrake_toDisplay */
extern kcg_bool DMI_StatusSymbolBrake_toDisplay;
/* ROOT_testBenchIntegration::DMI_PointerColor_toDisplay */
extern kcg_int DMI_PointerColor_toDisplay;
/* ROOT_testBenchIntegration::DMI_DriverID_Display_toDisplay */
extern array_int_9 DMI_DriverID_Display_toDisplay;
/* ROOT_testBenchIntegration::DMI_TrainRN_Display_toDisplay */
extern array_int_9 DMI_TrainRN_Display_toDisplay;
/* ROOT_testBenchIntegration::DMI_window_mask_visibility__toDisplay */
extern array_bool_15 DMI_window_mask_visibility__toDisplay;
/* ROOT_testBenchIntegration::DMI_ArrayButtonsEnabler_toDisplay */
extern array_int_30 DMI_ArrayButtonsEnabler_toDisplay;
/* ROOT_testBenchIntegration::DMI_CloseButtonEnabler_toDisplay */
extern kcg_int DMI_CloseButtonEnabler_toDisplay;
/* ROOT_testBenchIntegration::DMI_StatusSymbolVisibility_toDisplay */
extern kcg_bool DMI_StatusSymbolVisibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_RBC_status_symbol_toDisplay */
extern kcg_int DMI_RBC_status_symbol_toDisplay;
/* ROOT_testBenchIntegration::DMI_DistanceToTargetBarVisibility_toDisplay */
extern kcg_bool DMI_DistanceToTargetBarVisibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_ModeSymbol_toDisplay */
extern kcg_int DMI_ModeSymbol_toDisplay;
/* ROOT_testBenchIntegration::DMI_ModeSymbolVisibility_toDisplay */
extern kcg_bool DMI_ModeSymbolVisibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_ArrayOfMsgIndex_toDisplay */
extern array_int_5 DMI_ArrayOfMsgIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_trainCategoryIndex_toDisplay */
extern kcg_int DMI_trainCategoryIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_trainAxleloadIndex_toDisplay */
extern kcg_int DMI_trainAxleloadIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_trainAirtightIndex_toDisplay */
extern kcg_int DMI_trainAirtightIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_trainLoadingGougeIndex_toDisplay */
extern kcg_int DMI_trainLoadingGougeIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_trainLenght_toDisplay */
extern kcg_real DMI_trainLenght_toDisplay;
/* ROOT_testBenchIntegration::DMI_trainBrakePerc_toDisplay */
extern kcg_real DMI_trainBrakePerc_toDisplay;
/* ROOT_testBenchIntegration::DMI_trainMaxspeed_toDisplay */
extern kcg_real DMI_trainMaxspeed_toDisplay;
/* ROOT_testBenchIntegration::DMI_traindataValidWinVisibility_toDisplay */
extern kcg_bool DMI_traindataValidWinVisibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_traindataYesNoIndex_toDisplay */
extern kcg_int DMI_traindataYesNoIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_textMsgEnable_toDisplay */
extern kcg_bool DMI_textMsgEnable_toDisplay;
/* ROOT_testBenchIntegration::DMI_yellowBorderMsg_toDisplay */
extern kcg_bool DMI_yellowBorderMsg_toDisplay;
/* ROOT_testBenchIntegration::DMI_closeButtonIndex_toDisplay */
extern kcg_int DMI_closeButtonIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_openDesk_toDisplay */
extern kcg_bool DMI_openDesk_toDisplay;
/* ROOT_testBenchIntegration::DMI_yellowBorderBrakeSymbol_toDisplay */
extern kcg_bool DMI_yellowBorderBrakeSymbol_toDisplay;
/* ROOT_testBenchIntegration::DMI_icons_ack */
extern DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg DMI_icons_ack;
/* ROOT_testBenchIntegration::DMI_yellowBorderC1Area_toDisplay */
extern kcg_bool DMI_yellowBorderC1Area_toDisplay;
/* ROOT_testBenchIntegration::DMI_iconGroupIndex_toDisplay */
extern kcg_int DMI_iconGroupIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_levelSymbolAnnouncementIndex_toDisplay */
extern kcg_int DMI_levelSymbolAnnouncementIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_modeSymbolAnnouncementIndex_toDisplay */
extern kcg_int DMI_modeSymbolAnnouncementIndex_toDisplay;
/* ROOT_testBenchIntegration::DMI_hourGlassCounter_toDisplay */
extern kcg_real DMI_hourGlassCounter_toDisplay;
/* ROOT_testBenchIntegration::DMI_hourGlassVisibility_toDisplay */
extern kcg_bool DMI_hourGlassVisibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_Vinterv_Visibility_toDisplay */
extern kcg_bool DMI_Vinterv_Visibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_Vinterv_Color_toDisplay */
extern kcg_int DMI_Vinterv_Color_toDisplay;
/* ROOT_testBenchIntegration::GUI_MA */
extern kcg_bool GUI_MA;
/* ROOT_testBenchIntegration::GUI_emergencyBrake */
extern kcg_bool GUI_emergencyBrake;
/* ROOT_testBenchIntegration::GUI_serviceBrake */
extern kcg_bool GUI_serviceBrake;
/* ROOT_testBenchIntegration::DMI_VpermColor_toDisplay */
extern kcg_int DMI_VpermColor_toDisplay;
/* ROOT_testBenchIntegration::DMI_VreleaseColor_toDisplay */
extern kcg_int DMI_VreleaseColor_toDisplay;
/* ROOT_testBenchIntegration::DMI_VtargetColor_toDisplay */
extern kcg_int DMI_VtargetColor_toDisplay;
/* ROOT_testBenchIntegration::DMI_Vtarget_permVisibility_toDisplay */
extern kcg_bool DMI_Vtarget_permVisibility_toDisplay;
/* ROOT_testBenchIntegration::DMI_vtarget_permColor_toDisplay */
extern kcg_int DMI_vtarget_permColor_toDisplay;
/* ROOT_testBenchIntegration::GUI_permittedSpeed */
extern kcg_real GUI_permittedSpeed;
/* ROOT_testBenchIntegration::GUI_interventionSpeed */
extern kcg_real GUI_interventionSpeed;
/* ROOT_testBenchIntegration::GUI_enableGUIModeSelect */
extern kcg_bool GUI_enableGUIModeSelect;
/* ROOT_testBenchIntegration::GUI_TractionCutOff */
extern kcg_bool GUI_TractionCutOff;

#endif /* _ROOT_testBenchIntegration_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** ROOT_testBenchIntegration.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

