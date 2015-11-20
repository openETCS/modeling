#ifndef _REMOTEDMI_MACRO_H_
#define _REMOTEDMI_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file RemoteDMI_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "RemoteDMI_Testbench_Integration.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    inC_RemoteDMI_Testbench_Integration SAO_CTX_inC_RemoteDMI_Testbench_Integration;
    outC_RemoteDMI_Testbench_Integration SAO_CTX_outC_RemoteDMI_Testbench_Integration;
} WU_RemoteDMI_Testbench_Integration;
#define WU_CTX_TYPE_RemoteDMI WU_RemoteDMI_Testbench_Integration
#define WU_CTX_TYPE_RemoteDMI_SIZE sizeof(WU_RemoteDMI_Testbench_Integration)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_RemoteDMI() 

#define DECLARE_EXT_SENSORS_RemoteDMI(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/

#define VARC_RemoteDMI_DMI_C1AreaAck(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_C1AreaAck  /* Testbench_Integration::RemoteDMI/DMI_C1AreaAck */
#define VAR_RemoteDMI_DMI_C1AreaAck VARC_RemoteDMI_DMI_C1AreaAck(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_closeButtonMain(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_closeButtonMain  /* Testbench_Integration::RemoteDMI/DMI_closeButtonMain */
#define VAR_RemoteDMI_DMI_closeButtonMain VARC_RemoteDMI_DMI_closeButtonMain(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_ShowPlanningArea_fromDisplay(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_ShowPlanningArea_fromDisplay  /* Testbench_Integration::RemoteDMI/DMI_ShowPlanningArea_fromDisplay */
#define VAR_RemoteDMI_DMI_ShowPlanningArea_fromDisplay VARC_RemoteDMI_DMI_ShowPlanningArea_fromDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_HidePlanningArea_fromDisplay(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_HidePlanningArea_fromDisplay  /* Testbench_Integration::RemoteDMI/DMI_HidePlanningArea_fromDisplay */
#define VAR_RemoteDMI_DMI_HidePlanningArea_fromDisplay VARC_RemoteDMI_DMI_HidePlanningArea_fromDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_OverD12_frpmDisplay(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_OverD12_frpmDisplay  /* Testbench_Integration::RemoteDMI/DMI_OverD12_frpmDisplay */
#define VAR_RemoteDMI_DMI_OverD12_frpmDisplay VARC_RemoteDMI_DMI_OverD12_frpmDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_OverD9_fromDisplay(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_OverD9_fromDisplay  /* Testbench_Integration::RemoteDMI/DMI_OverD9_fromDisplay */
#define VAR_RemoteDMI_DMI_OverD9_fromDisplay VARC_RemoteDMI_DMI_OverD9_fromDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_openMainMenu_fromDisplay(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_openMainMenu_fromDisplay  /* Testbench_Integration::RemoteDMI/DMI_openMainMenu_fromDisplay */
#define VAR_RemoteDMI_DMI_openMainMenu_fromDisplay VARC_RemoteDMI_DMI_openMainMenu_fromDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_openLevelMenu(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_openLevelMenu  /* Testbench_Integration::RemoteDMI/DMI_openLevelMenu */
#define VAR_RemoteDMI_DMI_openLevelMenu VARC_RemoteDMI_DMI_openLevelMenu(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_InputFieldAck(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_InputFieldAck  /* Testbench_Integration::RemoteDMI/DMI_InputFieldAck */
#define VAR_RemoteDMI_DMI_InputFieldAck VARC_RemoteDMI_DMI_InputFieldAck(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_textMsgAck(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_textMsgAck  /* Testbench_Integration::RemoteDMI/DMI_textMsgAck */
#define VAR_RemoteDMI_DMI_textMsgAck VARC_RemoteDMI_DMI_textMsgAck(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_confirmTrainData(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_confirmTrainData  /* Testbench_Integration::RemoteDMI/DMI_confirmTrainData */
#define VAR_RemoteDMI_DMI_confirmTrainData VARC_RemoteDMI_DMI_confirmTrainData(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_closeButton(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_closeButton  /* Testbench_Integration::RemoteDMI/DMI_closeButton */
#define VAR_RemoteDMI_DMI_closeButton VARC_RemoteDMI_DMI_closeButton(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_traindataAck(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_traindataAck  /* Testbench_Integration::RemoteDMI/DMI_traindataAck */
#define VAR_RemoteDMI_DMI_traindataAck VARC_RemoteDMI_DMI_traindataAck(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_traindataNoAck(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_traindataNoAck  /* Testbench_Integration::RemoteDMI/DMI_traindataNoAck */
#define VAR_RemoteDMI_DMI_traindataNoAck VARC_RemoteDMI_DMI_traindataNoAck(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_openDriverID(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_openDriverID  /* Testbench_Integration::RemoteDMI/DMI_openDriverID */
#define VAR_RemoteDMI_DMI_openDriverID VARC_RemoteDMI_DMI_openDriverID(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_openTrainDataWindow(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_openTrainDataWindow  /* Testbench_Integration::RemoteDMI/DMI_openTrainDataWindow */
#define VAR_RemoteDMI_DMI_openTrainDataWindow VARC_RemoteDMI_DMI_openTrainDataWindow(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_keypad(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_keypad  /* Testbench_Integration::RemoteDMI/DMI_keypad */
#define VAR_RemoteDMI_DMI_keypad VARC_RemoteDMI_DMI_keypad(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_traindataYesAck(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_traindataYesAck  /* Testbench_Integration::RemoteDMI/DMI_traindataYesAck */
#define VAR_RemoteDMI_DMI_traindataYesAck VARC_RemoteDMI_DMI_traindataYesAck(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_openTrainRN(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_openTrainRN  /* Testbench_Integration::RemoteDMI/DMI_openTrainRN */
#define VAR_RemoteDMI_DMI_openTrainRN VARC_RemoteDMI_DMI_openTrainRN(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_startRequest(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_startRequest  /* Testbench_Integration::RemoteDMI/DMI_startRequest */
#define VAR_RemoteDMI_DMI_startRequest VARC_RemoteDMI_DMI_startRequest(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_MousePressed(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_MousePressed  /* Testbench_Integration::RemoteDMI/DMI_MousePressed */
#define VAR_RemoteDMI_DMI_MousePressed VARC_RemoteDMI_DMI_MousePressed(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_ScrollDown(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_ScrollDown  /* Testbench_Integration::RemoteDMI/DMI_ScrollDown */
#define VAR_RemoteDMI_DMI_ScrollDown VARC_RemoteDMI_DMI_ScrollDown(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_ScrollUp(context) context.SAO_CTX_inC_RemoteDMI_Testbench_Integration.DMI_ScrollUp  /* Testbench_Integration::RemoteDMI/DMI_ScrollUp */
#define VAR_RemoteDMI_DMI_ScrollUp VARC_RemoteDMI_DMI_ScrollUp(CTX_RemoteDMI_Testbench_Integration)


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_RemoteDMI_DMI_PlanningAreaVisibility_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_PlanningAreaVisibility_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_PlanningAreaVisibility_toDisplay */
#define VAR_RemoteDMI_DMI_PlanningAreaVisibility_toDisplay VARC_RemoteDMI_DMI_PlanningAreaVisibility_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_D_Scale_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_D_Scale_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_D_Scale_toDisplay */
#define VAR_RemoteDMI_DMI_D_Scale_toDisplay VARC_RemoteDMI_DMI_D_Scale_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_D_GradientVisible_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_D_GradientVisible_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_D_GradientVisible_toDisplay */
#define VAR_RemoteDMI_DMI_D_GradientVisible_toDisplay VARC_RemoteDMI_DMI_D_GradientVisible_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_D_PASP_Distances_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_D_PASP_Distances_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_D_PASP_Distances_toDisplay */
#define VAR_RemoteDMI_DMI_D_PASP_Distances_toDisplay VARC_RemoteDMI_DMI_D_PASP_Distances_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_D_PASP_Speeds_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_D_PASP_Speeds_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_D_PASP_Speeds_toDisplay */
#define VAR_RemoteDMI_DMI_D_PASP_Speeds_toDisplay VARC_RemoteDMI_DMI_D_PASP_Speeds_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_D_SPDI_SpeedChangePosition_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_D_SPDI_SpeedChangePosition_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_D_SPDI_SpeedChangePosition_toDisplay */
#define VAR_RemoteDMI_DMI_D_SPDI_SpeedChangePosition_toDisplay VARC_RemoteDMI_DMI_D_SPDI_SpeedChangePosition_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_D_SPDI_SpeedChangeIndex_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_D_SPDI_SpeedChangeIndex_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_D_SPDI_SpeedChangeIndex_toDisplay */
#define VAR_RemoteDMI_DMI_D_SPDI_SpeedChangeIndex_toDisplay VARC_RemoteDMI_DMI_D_SPDI_SpeedChangeIndex_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay */
#define VAR_RemoteDMI_DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay VARC_RemoteDMI_DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_isAuxiliarMsg_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_isAuxiliarMsg_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_isAuxiliarMsg_toDisplay */
#define VAR_RemoteDMI_DMI_isAuxiliarMsg_toDisplay VARC_RemoteDMI_DMI_isAuxiliarMsg_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_Array_mm_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_Array_mm_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_Array_mm_toDisplay */
#define VAR_RemoteDMI_DMI_Array_mm_toDisplay VARC_RemoteDMI_DMI_Array_mm_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_Array_hh_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_Array_hh_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_Array_hh_toDisplay */
#define VAR_RemoteDMI_DMI_Array_hh_toDisplay VARC_RemoteDMI_DMI_Array_hh_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_PlainText_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_PlainText_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_PlainText_toDisplay */
#define VAR_RemoteDMI_DMI_PlainText_toDisplay VARC_RemoteDMI_DMI_PlainText_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_levelMenuVisibility_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_levelMenuVisibility_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_levelMenuVisibility_toDisplay */
#define VAR_RemoteDMI_DMI_levelMenuVisibility_toDisplay VARC_RemoteDMI_DMI_levelMenuVisibility_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_ArrayLevelIndex_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_ArrayLevelIndex_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_ArrayLevelIndex_toDisplay */
#define VAR_RemoteDMI_DMI_ArrayLevelIndex_toDisplay VARC_RemoteDMI_DMI_ArrayLevelIndex_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_IndexLevel_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_IndexLevel_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_IndexLevel_toDisplay */
#define VAR_RemoteDMI_DMI_IndexLevel_toDisplay VARC_RemoteDMI_DMI_IndexLevel_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_level_data(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_level_data  /* Testbench_Integration::RemoteDMI/DMI_level_data */
#define VAR_RemoteDMI_DMI_level_data VARC_RemoteDMI_DMI_level_data(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_IndexFixedMsg_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_IndexFixedMsg_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_IndexFixedMsg_toDisplay */
#define VAR_RemoteDMI_DMI_IndexFixedMsg_toDisplay VARC_RemoteDMI_DMI_IndexFixedMsg_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_SingleMsgAckRequiredVisibility_toDysplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_SingleMsgAckRequiredVisibility_toDysplay  /* Testbench_Integration::RemoteDMI/DMI_SingleMsgAckRequiredVisibility_toDysplay */
#define VAR_RemoteDMI_DMI_SingleMsgAckRequiredVisibility_toDysplay VARC_RemoteDMI_DMI_SingleMsgAckRequiredVisibility_toDysplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_InterpolatedDistanceToTarget_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_InterpolatedDistanceToTarget_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_InterpolatedDistanceToTarget_toDisplay */
#define VAR_RemoteDMI_DMI_InterpolatedDistanceToTarget_toDisplay VARC_RemoteDMI_DMI_InterpolatedDistanceToTarget_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_ArrayOfMsgIndex_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_ArrayOfMsgIndex_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_ArrayOfMsgIndex_toDisplay */
#define VAR_RemoteDMI_DMI_ArrayOfMsgIndex_toDisplay VARC_RemoteDMI_DMI_ArrayOfMsgIndex_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_iconGroupIndex_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_iconGroupIndex_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_iconGroupIndex_toDisplay */
#define VAR_RemoteDMI_DMI_iconGroupIndex_toDisplay VARC_RemoteDMI_DMI_iconGroupIndex_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_TrainSpeed_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_TrainSpeed_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_TrainSpeed_toDisplay */
#define VAR_RemoteDMI_DMI_TrainSpeed_toDisplay VARC_RemoteDMI_DMI_TrainSpeed_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_StatusSymbolVisibility_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_StatusSymbolVisibility_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_StatusSymbolVisibility_toDisplay */
#define VAR_RemoteDMI_DMI_StatusSymbolVisibility_toDisplay VARC_RemoteDMI_DMI_StatusSymbolVisibility_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_traindataValidWinVisibility_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_traindataValidWinVisibility_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_traindataValidWinVisibility_toDisplay */
#define VAR_RemoteDMI_DMI_traindataValidWinVisibility_toDisplay VARC_RemoteDMI_DMI_traindataValidWinVisibility_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_Vtarget_permVisibility_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_Vtarget_permVisibility_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_Vtarget_permVisibility_toDisplay */
#define VAR_RemoteDMI_DMI_Vtarget_permVisibility_toDisplay VARC_RemoteDMI_DMI_Vtarget_permVisibility_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_GradientsStart_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_GradientsStart_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_GradientsStart_toDisplay */
#define VAR_RemoteDMI_DMI_GradientsStart_toDisplay VARC_RemoteDMI_DMI_GradientsStart_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_trainAirtightIndex_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_trainAirtightIndex_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_trainAirtightIndex_toDisplay */
#define VAR_RemoteDMI_DMI_trainAirtightIndex_toDisplay VARC_RemoteDMI_DMI_trainAirtightIndex_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_yellowBorderC1Area_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_yellowBorderC1Area_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_yellowBorderC1Area_toDisplay */
#define VAR_RemoteDMI_DMI_yellowBorderC1Area_toDisplay VARC_RemoteDMI_DMI_yellowBorderC1Area_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_SpeedDigitTwo_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_SpeedDigitTwo_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_SpeedDigitTwo_toDisplay */
#define VAR_RemoteDMI_DMI_SpeedDigitTwo_toDisplay VARC_RemoteDMI_DMI_SpeedDigitTwo_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_DriverID_Display_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_DriverID_Display_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_DriverID_Display_toDisplay */
#define VAR_RemoteDMI_DMI_DriverID_Display_toDisplay VARC_RemoteDMI_DMI_DriverID_Display_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_yellowBorderMsg_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_yellowBorderMsg_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_yellowBorderMsg_toDisplay */
#define VAR_RemoteDMI_DMI_yellowBorderMsg_toDisplay VARC_RemoteDMI_DMI_yellowBorderMsg_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_Vinterv_Color_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_Vinterv_Color_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_Vinterv_Color_toDisplay */
#define VAR_RemoteDMI_DMI_Vinterv_Color_toDisplay VARC_RemoteDMI_DMI_Vinterv_Color_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_DistanceToTarget_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_DistanceToTarget_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_DistanceToTarget_toDisplay */
#define VAR_RemoteDMI_DMI_DistanceToTarget_toDisplay VARC_RemoteDMI_DMI_DistanceToTarget_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_ModeSymbol_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_ModeSymbol_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_ModeSymbol_toDisplay */
#define VAR_RemoteDMI_DMI_ModeSymbol_toDisplay VARC_RemoteDMI_DMI_ModeSymbol_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_modeSymbolAnnouncementIndex_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_modeSymbolAnnouncementIndex_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_modeSymbolAnnouncementIndex_toDisplay */
#define VAR_RemoteDMI_DMI_modeSymbolAnnouncementIndex_toDisplay VARC_RemoteDMI_DMI_modeSymbolAnnouncementIndex_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_ETCS_LevelSymbol_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_ETCS_LevelSymbol_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_ETCS_LevelSymbol_toDisplay */
#define VAR_RemoteDMI_DMI_ETCS_LevelSymbol_toDisplay VARC_RemoteDMI_DMI_ETCS_LevelSymbol_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_ArrayButtonsEnabler_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_ArrayButtonsEnabler_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_ArrayButtonsEnabler_toDisplay */
#define VAR_RemoteDMI_DMI_ArrayButtonsEnabler_toDisplay VARC_RemoteDMI_DMI_ArrayButtonsEnabler_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_trainBrakePerc_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_trainBrakePerc_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_trainBrakePerc_toDisplay */
#define VAR_RemoteDMI_DMI_trainBrakePerc_toDisplay VARC_RemoteDMI_DMI_trainBrakePerc_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_VreleaseColor_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_VreleaseColor_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_VreleaseColor_toDisplay */
#define VAR_RemoteDMI_DMI_VreleaseColor_toDisplay VARC_RemoteDMI_DMI_VreleaseColor_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_SpeedPermitted_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_SpeedPermitted_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_SpeedPermitted_toDisplay */
#define VAR_RemoteDMI_DMI_SpeedPermitted_toDisplay VARC_RemoteDMI_DMI_SpeedPermitted_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_trainCategoryIndex_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_trainCategoryIndex_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_trainCategoryIndex_toDisplay */
#define VAR_RemoteDMI_DMI_trainCategoryIndex_toDisplay VARC_RemoteDMI_DMI_trainCategoryIndex_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_levelSymbolAnnouncementIndex_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_levelSymbolAnnouncementIndex_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_levelSymbolAnnouncementIndex_toDisplay */
#define VAR_RemoteDMI_DMI_levelSymbolAnnouncementIndex_toDisplay VARC_RemoteDMI_DMI_levelSymbolAnnouncementIndex_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_TrainDataWindowVisibility_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_TrainDataWindowVisibility_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_TrainDataWindowVisibility_toDisplay */
#define VAR_RemoteDMI_DMI_TrainDataWindowVisibility_toDisplay VARC_RemoteDMI_DMI_TrainDataWindowVisibility_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_StatusSymbolBrake_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_StatusSymbolBrake_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_StatusSymbolBrake_toDisplay */
#define VAR_RemoteDMI_DMI_StatusSymbolBrake_toDisplay VARC_RemoteDMI_DMI_StatusSymbolBrake_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_traindataYesNoIndex_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_traindataYesNoIndex_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_traindataYesNoIndex_toDisplay */
#define VAR_RemoteDMI_DMI_traindataYesNoIndex_toDisplay VARC_RemoteDMI_DMI_traindataYesNoIndex_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_vtarget_permColor_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_vtarget_permColor_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_vtarget_permColor_toDisplay */
#define VAR_RemoteDMI_DMI_vtarget_permColor_toDisplay VARC_RemoteDMI_DMI_vtarget_permColor_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_GradientsEnd_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_GradientsEnd_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_GradientsEnd_toDisplay */
#define VAR_RemoteDMI_DMI_GradientsEnd_toDisplay VARC_RemoteDMI_DMI_GradientsEnd_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_RBC_status_symbol_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_RBC_status_symbol_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_RBC_status_symbol_toDisplay */
#define VAR_RemoteDMI_DMI_RBC_status_symbol_toDisplay VARC_RemoteDMI_DMI_RBC_status_symbol_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_TrainRN_Display_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_TrainRN_Display_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_TrainRN_Display_toDisplay */
#define VAR_RemoteDMI_DMI_TrainRN_Display_toDisplay VARC_RemoteDMI_DMI_TrainRN_Display_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_trainLoadingGougeIndex_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_trainLoadingGougeIndex_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_trainLoadingGougeIndex_toDisplay */
#define VAR_RemoteDMI_DMI_trainLoadingGougeIndex_toDisplay VARC_RemoteDMI_DMI_trainLoadingGougeIndex_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_hourGlassCounter_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_hourGlassCounter_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_hourGlassCounter_toDisplay */
#define VAR_RemoteDMI_DMI_hourGlassCounter_toDisplay VARC_RemoteDMI_DMI_hourGlassCounter_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_SpeedDigitThree_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_SpeedDigitThree_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_SpeedDigitThree_toDisplay */
#define VAR_RemoteDMI_DMI_SpeedDigitThree_toDisplay VARC_RemoteDMI_DMI_SpeedDigitThree_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_ModeSymbolVisibility_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_ModeSymbolVisibility_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_ModeSymbolVisibility_toDisplay */
#define VAR_RemoteDMI_DMI_ModeSymbolVisibility_toDisplay VARC_RemoteDMI_DMI_ModeSymbolVisibility_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_closeButtonIndex_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_closeButtonIndex_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_closeButtonIndex_toDisplay */
#define VAR_RemoteDMI_DMI_closeButtonIndex_toDisplay VARC_RemoteDMI_DMI_closeButtonIndex_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_yellowBorderBrakeSymbol_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_yellowBorderBrakeSymbol_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_yellowBorderBrakeSymbol_toDisplay */
#define VAR_RemoteDMI_DMI_yellowBorderBrakeSymbol_toDisplay VARC_RemoteDMI_DMI_yellowBorderBrakeSymbol_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_SpeedIntervention_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_SpeedIntervention_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_SpeedIntervention_toDisplay */
#define VAR_RemoteDMI_DMI_SpeedIntervention_toDisplay VARC_RemoteDMI_DMI_SpeedIntervention_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_LevelSymbolVisibility_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_LevelSymbolVisibility_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_LevelSymbolVisibility_toDisplay */
#define VAR_RemoteDMI_DMI_LevelSymbolVisibility_toDisplay VARC_RemoteDMI_DMI_LevelSymbolVisibility_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_DistanceToTargetVisible_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_DistanceToTargetVisible_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_DistanceToTargetVisible_toDisplay */
#define VAR_RemoteDMI_DMI_DistanceToTargetVisible_toDisplay VARC_RemoteDMI_DMI_DistanceToTargetVisible_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_trainMaxspeed_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_trainMaxspeed_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_trainMaxspeed_toDisplay */
#define VAR_RemoteDMI_DMI_trainMaxspeed_toDisplay VARC_RemoteDMI_DMI_trainMaxspeed_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_VtargetColor_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_VtargetColor_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_VtargetColor_toDisplay */
#define VAR_RemoteDMI_DMI_VtargetColor_toDisplay VARC_RemoteDMI_DMI_VtargetColor_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_SpeedRelease_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_SpeedRelease_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_SpeedRelease_toDisplay */
#define VAR_RemoteDMI_DMI_SpeedRelease_toDisplay VARC_RemoteDMI_DMI_SpeedRelease_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_CloseButtonEnabler_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_CloseButtonEnabler_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_CloseButtonEnabler_toDisplay */
#define VAR_RemoteDMI_DMI_CloseButtonEnabler_toDisplay VARC_RemoteDMI_DMI_CloseButtonEnabler_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_PointerColor_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_PointerColor_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_PointerColor_toDisplay */
#define VAR_RemoteDMI_DMI_PointerColor_toDisplay VARC_RemoteDMI_DMI_PointerColor_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_trainAxleloadIndex_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_trainAxleloadIndex_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_trainAxleloadIndex_toDisplay */
#define VAR_RemoteDMI_DMI_trainAxleloadIndex_toDisplay VARC_RemoteDMI_DMI_trainAxleloadIndex_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_hourGlassVisibility_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_hourGlassVisibility_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_hourGlassVisibility_toDisplay */
#define VAR_RemoteDMI_DMI_hourGlassVisibility_toDisplay VARC_RemoteDMI_DMI_hourGlassVisibility_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_SpeedDigitOne_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_SpeedDigitOne_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_SpeedDigitOne_toDisplay */
#define VAR_RemoteDMI_DMI_SpeedDigitOne_toDisplay VARC_RemoteDMI_DMI_SpeedDigitOne_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_DistanceToTargetBarVisibility_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_DistanceToTargetBarVisibility_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_DistanceToTargetBarVisibility_toDisplay */
#define VAR_RemoteDMI_DMI_DistanceToTargetBarVisibility_toDisplay VARC_RemoteDMI_DMI_DistanceToTargetBarVisibility_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_Vinterv_Visibility_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_Vinterv_Visibility_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_Vinterv_Visibility_toDisplay */
#define VAR_RemoteDMI_DMI_Vinterv_Visibility_toDisplay VARC_RemoteDMI_DMI_Vinterv_Visibility_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_TrainPosition_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_TrainPosition_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_TrainPosition_toDisplay */
#define VAR_RemoteDMI_DMI_TrainPosition_toDisplay VARC_RemoteDMI_DMI_TrainPosition_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_GradientsValue_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_GradientsValue_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_GradientsValue_toDisplay */
#define VAR_RemoteDMI_DMI_GradientsValue_toDisplay VARC_RemoteDMI_DMI_GradientsValue_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_trainLenght_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_trainLenght_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_trainLenght_toDisplay */
#define VAR_RemoteDMI_DMI_trainLenght_toDisplay VARC_RemoteDMI_DMI_trainLenght_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_VpermColor_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_VpermColor_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_VpermColor_toDisplay */
#define VAR_RemoteDMI_DMI_VpermColor_toDisplay VARC_RemoteDMI_DMI_VpermColor_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_SpeedTarget_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_SpeedTarget_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_SpeedTarget_toDisplay */
#define VAR_RemoteDMI_DMI_SpeedTarget_toDisplay VARC_RemoteDMI_DMI_SpeedTarget_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_window_mask_visibility__toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_window_mask_visibility__toDisplay  /* Testbench_Integration::RemoteDMI/DMI_window_mask_visibility__toDisplay */
#define VAR_RemoteDMI_DMI_window_mask_visibility__toDisplay VARC_RemoteDMI_DMI_window_mask_visibility__toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_openDesk_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_openDesk_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_openDesk_toDisplay */
#define VAR_RemoteDMI_DMI_openDesk_toDisplay VARC_RemoteDMI_DMI_openDesk_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_icons_ack(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_icons_ack  /* Testbench_Integration::RemoteDMI/DMI_icons_ack */
#define VAR_RemoteDMI_DMI_icons_ack VARC_RemoteDMI_DMI_icons_ack(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_D_PASP_IndicationMarker_toDisplay(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_D_PASP_IndicationMarker_toDisplay  /* Testbench_Integration::RemoteDMI/DMI_D_PASP_IndicationMarker_toDisplay */
#define VAR_RemoteDMI_DMI_D_PASP_IndicationMarker_toDisplay VARC_RemoteDMI_DMI_D_PASP_IndicationMarker_toDisplay(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_ScrollDownEnableIndex(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_ScrollDownEnableIndex  /* Testbench_Integration::RemoteDMI/DMI_ScrollDownEnableIndex */
#define VAR_RemoteDMI_DMI_ScrollDownEnableIndex VARC_RemoteDMI_DMI_ScrollDownEnableIndex(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_ScrollUpEnableIndex(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_ScrollUpEnableIndex  /* Testbench_Integration::RemoteDMI/DMI_ScrollUpEnableIndex */
#define VAR_RemoteDMI_DMI_ScrollUpEnableIndex VARC_RemoteDMI_DMI_ScrollUpEnableIndex(CTX_RemoteDMI_Testbench_Integration)

#define VARC_RemoteDMI_DMI_localTime(context) context.SAO_CTX_outC_RemoteDMI_Testbench_Integration.DMI_localTime  /* Testbench_Integration::RemoteDMI/DMI_localTime */
#define VAR_RemoteDMI_DMI_localTime VARC_RemoteDMI_DMI_localTime(CTX_RemoteDMI_Testbench_Integration)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_DMI_C1AreaAck kcg_bool
#define CPY_DMI_C1AreaAck(DST, SRC) DST = SRC
#define T_DMI_closeButtonMain kcg_bool
#define CPY_DMI_closeButtonMain(DST, SRC) DST = SRC
#define T_DMI_ShowPlanningArea_fromDisplay kcg_bool
#define CPY_DMI_ShowPlanningArea_fromDisplay(DST, SRC) DST = SRC
#define T_DMI_HidePlanningArea_fromDisplay kcg_bool
#define CPY_DMI_HidePlanningArea_fromDisplay(DST, SRC) DST = SRC
#define T_DMI_OverD12_frpmDisplay kcg_bool
#define CPY_DMI_OverD12_frpmDisplay(DST, SRC) DST = SRC
#define T_DMI_OverD9_fromDisplay kcg_bool
#define CPY_DMI_OverD9_fromDisplay(DST, SRC) DST = SRC
#define T_DMI_openMainMenu_fromDisplay kcg_bool
#define CPY_DMI_openMainMenu_fromDisplay(DST, SRC) DST = SRC
#define T_DMI_openLevelMenu kcg_bool
#define CPY_DMI_openLevelMenu(DST, SRC) DST = SRC
#define T_DMI_InputFieldAck kcg_bool
#define CPY_DMI_InputFieldAck(DST, SRC) DST = SRC
#define T_DMI_textMsgAck kcg_bool
#define CPY_DMI_textMsgAck(DST, SRC) DST = SRC
#define T_DMI_confirmTrainData kcg_bool
#define CPY_DMI_confirmTrainData(DST, SRC) DST = SRC
#define T_DMI_closeButton kcg_bool
#define CPY_DMI_closeButton(DST, SRC) DST = SRC
#define T_DMI_traindataAck kcg_bool
#define CPY_DMI_traindataAck(DST, SRC) DST = SRC
#define T_DMI_traindataNoAck kcg_bool
#define CPY_DMI_traindataNoAck(DST, SRC) DST = SRC
#define T_DMI_openDriverID kcg_bool
#define CPY_DMI_openDriverID(DST, SRC) DST = SRC
#define T_DMI_openTrainDataWindow kcg_bool
#define CPY_DMI_openTrainDataWindow(DST, SRC) DST = SRC
#define T_DMI_keypad array_bool_12
#define CPY_DMI_keypad(DST, SRC) kcg_copy_array_bool_12(DST, SRC)
#define T_DMI_traindataYesAck kcg_bool
#define CPY_DMI_traindataYesAck(DST, SRC) DST = SRC
#define T_DMI_openTrainRN kcg_bool
#define CPY_DMI_openTrainRN(DST, SRC) DST = SRC
#define T_DMI_startRequest kcg_bool
#define CPY_DMI_startRequest(DST, SRC) DST = SRC
#define T_DMI_MousePressed kcg_bool
#define CPY_DMI_MousePressed(DST, SRC) DST = SRC
#define T_DMI_ScrollDown kcg_bool
#define CPY_DMI_ScrollDown(DST, SRC) DST = SRC
#define T_DMI_ScrollUp kcg_bool
#define CPY_DMI_ScrollUp(DST, SRC) DST = SRC
#define T_DMI_PlanningAreaVisibility_toDisplay kcg_bool
#define CPY_DMI_PlanningAreaVisibility_toDisplay(DST, SRC) DST = SRC
#define T_DMI_D_Scale_toDisplay tScale
#define CPY_DMI_D_Scale_toDisplay(DST, SRC) kcg_copy_tScale(DST, SRC)
#define T_DMI_D_GradientVisible_toDisplay array_bool_12
#define CPY_DMI_D_GradientVisible_toDisplay(DST, SRC) kcg_copy_array_bool_12(DST, SRC)
#define T_DMI_D_PASP_Distances_toDisplay array_real_4
#define CPY_DMI_D_PASP_Distances_toDisplay(DST, SRC) kcg_copy_array_real_4(DST, SRC)
#define T_DMI_D_PASP_Speeds_toDisplay array_real_4
#define CPY_DMI_D_PASP_Speeds_toDisplay(DST, SRC) kcg_copy_array_real_4(DST, SRC)
#define T_DMI_D_SPDI_SpeedChangePosition_toDisplay array_real_10
#define CPY_DMI_D_SPDI_SpeedChangePosition_toDisplay(DST, SRC) kcg_copy_array_real_10(DST, SRC)
#define T_DMI_D_SPDI_SpeedChangeIndex_toDisplay array_int_10
#define CPY_DMI_D_SPDI_SpeedChangeIndex_toDisplay(DST, SRC) kcg_copy_array_int_10(DST, SRC)
#define T_DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay array_bool_10
#define CPY_DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay(DST, SRC) kcg_copy_array_bool_10(DST, SRC)
#define T_DMI_isAuxiliarMsg_toDisplay kcg_bool
#define CPY_DMI_isAuxiliarMsg_toDisplay(DST, SRC) DST = SRC
#define T_DMI_Array_mm_toDisplay array_real_5
#define CPY_DMI_Array_mm_toDisplay(DST, SRC) kcg_copy_array_real_5(DST, SRC)
#define T_DMI_Array_hh_toDisplay array_real_5
#define CPY_DMI_Array_hh_toDisplay(DST, SRC) kcg_copy_array_real_5(DST, SRC)
#define T_DMI_PlainText_toDisplay array_char_30_5
#define CPY_DMI_PlainText_toDisplay(DST, SRC) kcg_copy_array_char_30_5(DST, SRC)
#define T_DMI_levelMenuVisibility_toDisplay kcg_bool
#define CPY_DMI_levelMenuVisibility_toDisplay(DST, SRC) DST = SRC
#define T_DMI_ArrayLevelIndex_toDisplay array_int_12
#define CPY_DMI_ArrayLevelIndex_toDisplay(DST, SRC) kcg_copy_array_int_12(DST, SRC)
#define T_DMI_IndexLevel_toDisplay kcg_int
#define CPY_DMI_IndexLevel_toDisplay(DST, SRC) DST = SRC
#define T_DMI_level_data DMI_Level_Data_T_DMI_Messages_Bothways_Pkg
#define CPY_DMI_level_data(DST, SRC) kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(DST, SRC)
#define T_DMI_IndexFixedMsg_toDisplay array_int_5
#define CPY_DMI_IndexFixedMsg_toDisplay(DST, SRC) kcg_copy_array_int_5(DST, SRC)
#define T_DMI_SingleMsgAckRequiredVisibility_toDysplay kcg_bool
#define CPY_DMI_SingleMsgAckRequiredVisibility_toDysplay(DST, SRC) DST = SRC
#define T_DMI_InterpolatedDistanceToTarget_toDisplay kcg_real
#define CPY_DMI_InterpolatedDistanceToTarget_toDisplay(DST, SRC) DST = SRC
#define T_DMI_ArrayOfMsgIndex_toDisplay array_int_5
#define CPY_DMI_ArrayOfMsgIndex_toDisplay(DST, SRC) kcg_copy_array_int_5(DST, SRC)
#define T_DMI_iconGroupIndex_toDisplay kcg_int
#define CPY_DMI_iconGroupIndex_toDisplay(DST, SRC) DST = SRC
#define T_DMI_TrainSpeed_toDisplay kcg_real
#define CPY_DMI_TrainSpeed_toDisplay(DST, SRC) DST = SRC
#define T_DMI_StatusSymbolVisibility_toDisplay kcg_bool
#define CPY_DMI_StatusSymbolVisibility_toDisplay(DST, SRC) DST = SRC
#define T_DMI_traindataValidWinVisibility_toDisplay kcg_bool
#define CPY_DMI_traindataValidWinVisibility_toDisplay(DST, SRC) DST = SRC
#define T_DMI_Vtarget_permVisibility_toDisplay kcg_bool
#define CPY_DMI_Vtarget_permVisibility_toDisplay(DST, SRC) DST = SRC
#define T_DMI_GradientsStart_toDisplay array_real_12
#define CPY_DMI_GradientsStart_toDisplay(DST, SRC) kcg_copy_array_real_12(DST, SRC)
#define T_DMI_trainAirtightIndex_toDisplay kcg_int
#define CPY_DMI_trainAirtightIndex_toDisplay(DST, SRC) DST = SRC
#define T_DMI_yellowBorderC1Area_toDisplay kcg_bool
#define CPY_DMI_yellowBorderC1Area_toDisplay(DST, SRC) DST = SRC
#define T_DMI_SpeedDigitTwo_toDisplay kcg_real
#define CPY_DMI_SpeedDigitTwo_toDisplay(DST, SRC) DST = SRC
#define T_DMI_DriverID_Display_toDisplay array_int_9
#define CPY_DMI_DriverID_Display_toDisplay(DST, SRC) kcg_copy_array_int_9(DST, SRC)
#define T_DMI_yellowBorderMsg_toDisplay kcg_bool
#define CPY_DMI_yellowBorderMsg_toDisplay(DST, SRC) DST = SRC
#define T_DMI_Vinterv_Color_toDisplay kcg_int
#define CPY_DMI_Vinterv_Color_toDisplay(DST, SRC) DST = SRC
#define T_DMI_DistanceToTarget_toDisplay kcg_real
#define CPY_DMI_DistanceToTarget_toDisplay(DST, SRC) DST = SRC
#define T_DMI_ModeSymbol_toDisplay kcg_int
#define CPY_DMI_ModeSymbol_toDisplay(DST, SRC) DST = SRC
#define T_DMI_modeSymbolAnnouncementIndex_toDisplay kcg_int
#define CPY_DMI_modeSymbolAnnouncementIndex_toDisplay(DST, SRC) DST = SRC
#define T_DMI_ETCS_LevelSymbol_toDisplay kcg_int
#define CPY_DMI_ETCS_LevelSymbol_toDisplay(DST, SRC) DST = SRC
#define T_DMI_ArrayButtonsEnabler_toDisplay array_int_30
#define CPY_DMI_ArrayButtonsEnabler_toDisplay(DST, SRC) kcg_copy_array_int_30(DST, SRC)
#define T_DMI_trainBrakePerc_toDisplay kcg_real
#define CPY_DMI_trainBrakePerc_toDisplay(DST, SRC) DST = SRC
#define T_DMI_VreleaseColor_toDisplay kcg_int
#define CPY_DMI_VreleaseColor_toDisplay(DST, SRC) DST = SRC
#define T_DMI_SpeedPermitted_toDisplay kcg_real
#define CPY_DMI_SpeedPermitted_toDisplay(DST, SRC) DST = SRC
#define T_DMI_trainCategoryIndex_toDisplay kcg_int
#define CPY_DMI_trainCategoryIndex_toDisplay(DST, SRC) DST = SRC
#define T_DMI_levelSymbolAnnouncementIndex_toDisplay kcg_int
#define CPY_DMI_levelSymbolAnnouncementIndex_toDisplay(DST, SRC) DST = SRC
#define T_DMI_TrainDataWindowVisibility_toDisplay kcg_bool
#define CPY_DMI_TrainDataWindowVisibility_toDisplay(DST, SRC) DST = SRC
#define T_DMI_StatusSymbolBrake_toDisplay kcg_bool
#define CPY_DMI_StatusSymbolBrake_toDisplay(DST, SRC) DST = SRC
#define T_DMI_traindataYesNoIndex_toDisplay kcg_int
#define CPY_DMI_traindataYesNoIndex_toDisplay(DST, SRC) DST = SRC
#define T_DMI_vtarget_permColor_toDisplay kcg_int
#define CPY_DMI_vtarget_permColor_toDisplay(DST, SRC) DST = SRC
#define T_DMI_GradientsEnd_toDisplay array_real_12
#define CPY_DMI_GradientsEnd_toDisplay(DST, SRC) kcg_copy_array_real_12(DST, SRC)
#define T_DMI_RBC_status_symbol_toDisplay kcg_int
#define CPY_DMI_RBC_status_symbol_toDisplay(DST, SRC) DST = SRC
#define T_DMI_TrainRN_Display_toDisplay array_int_9
#define CPY_DMI_TrainRN_Display_toDisplay(DST, SRC) kcg_copy_array_int_9(DST, SRC)
#define T_DMI_trainLoadingGougeIndex_toDisplay kcg_int
#define CPY_DMI_trainLoadingGougeIndex_toDisplay(DST, SRC) DST = SRC
#define T_DMI_hourGlassCounter_toDisplay kcg_real
#define CPY_DMI_hourGlassCounter_toDisplay(DST, SRC) DST = SRC
#define T_DMI_SpeedDigitThree_toDisplay kcg_real
#define CPY_DMI_SpeedDigitThree_toDisplay(DST, SRC) DST = SRC
#define T_DMI_ModeSymbolVisibility_toDisplay kcg_bool
#define CPY_DMI_ModeSymbolVisibility_toDisplay(DST, SRC) DST = SRC
#define T_DMI_closeButtonIndex_toDisplay kcg_int
#define CPY_DMI_closeButtonIndex_toDisplay(DST, SRC) DST = SRC
#define T_DMI_yellowBorderBrakeSymbol_toDisplay kcg_bool
#define CPY_DMI_yellowBorderBrakeSymbol_toDisplay(DST, SRC) DST = SRC
#define T_DMI_SpeedIntervention_toDisplay kcg_real
#define CPY_DMI_SpeedIntervention_toDisplay(DST, SRC) DST = SRC
#define T_DMI_LevelSymbolVisibility_toDisplay kcg_bool
#define CPY_DMI_LevelSymbolVisibility_toDisplay(DST, SRC) DST = SRC
#define T_DMI_DistanceToTargetVisible_toDisplay kcg_bool
#define CPY_DMI_DistanceToTargetVisible_toDisplay(DST, SRC) DST = SRC
#define T_DMI_trainMaxspeed_toDisplay kcg_real
#define CPY_DMI_trainMaxspeed_toDisplay(DST, SRC) DST = SRC
#define T_DMI_VtargetColor_toDisplay kcg_int
#define CPY_DMI_VtargetColor_toDisplay(DST, SRC) DST = SRC
#define T_DMI_SpeedRelease_toDisplay kcg_real
#define CPY_DMI_SpeedRelease_toDisplay(DST, SRC) DST = SRC
#define T_DMI_CloseButtonEnabler_toDisplay kcg_int
#define CPY_DMI_CloseButtonEnabler_toDisplay(DST, SRC) DST = SRC
#define T_DMI_PointerColor_toDisplay kcg_int
#define CPY_DMI_PointerColor_toDisplay(DST, SRC) DST = SRC
#define T_DMI_trainAxleloadIndex_toDisplay kcg_int
#define CPY_DMI_trainAxleloadIndex_toDisplay(DST, SRC) DST = SRC
#define T_DMI_hourGlassVisibility_toDisplay kcg_bool
#define CPY_DMI_hourGlassVisibility_toDisplay(DST, SRC) DST = SRC
#define T_DMI_SpeedDigitOne_toDisplay kcg_real
#define CPY_DMI_SpeedDigitOne_toDisplay(DST, SRC) DST = SRC
#define T_DMI_DistanceToTargetBarVisibility_toDisplay kcg_bool
#define CPY_DMI_DistanceToTargetBarVisibility_toDisplay(DST, SRC) DST = SRC
#define T_DMI_Vinterv_Visibility_toDisplay kcg_bool
#define CPY_DMI_Vinterv_Visibility_toDisplay(DST, SRC) DST = SRC
#define T_DMI_TrainPosition_toDisplay kcg_real
#define CPY_DMI_TrainPosition_toDisplay(DST, SRC) DST = SRC
#define T_DMI_GradientsValue_toDisplay array_real_12
#define CPY_DMI_GradientsValue_toDisplay(DST, SRC) kcg_copy_array_real_12(DST, SRC)
#define T_DMI_trainLenght_toDisplay kcg_real
#define CPY_DMI_trainLenght_toDisplay(DST, SRC) DST = SRC
#define T_DMI_VpermColor_toDisplay kcg_int
#define CPY_DMI_VpermColor_toDisplay(DST, SRC) DST = SRC
#define T_DMI_SpeedTarget_toDisplay kcg_real
#define CPY_DMI_SpeedTarget_toDisplay(DST, SRC) DST = SRC
#define T_DMI_window_mask_visibility__toDisplay array_bool_15
#define CPY_DMI_window_mask_visibility__toDisplay(DST, SRC) kcg_copy_array_bool_15(DST, SRC)
#define T_DMI_openDesk_toDisplay kcg_bool
#define CPY_DMI_openDesk_toDisplay(DST, SRC) DST = SRC
#define T_DMI_icons_ack DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#define CPY_DMI_icons_ack(DST, SRC) kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(DST, SRC)
#define T_DMI_D_PASP_IndicationMarker_toDisplay array_real_1
#define CPY_DMI_D_PASP_IndicationMarker_toDisplay(DST, SRC) kcg_copy_array_real_1(DST, SRC)
#define T_DMI_ScrollDownEnableIndex kcg_int
#define CPY_DMI_ScrollDownEnableIndex(DST, SRC) DST = SRC
#define T_DMI_ScrollUpEnableIndex kcg_int
#define CPY_DMI_ScrollUpEnableIndex(DST, SRC) DST = SRC
#define T_DMI_localTime array_real_4
#define CPY_DMI_localTime(DST, SRC) kcg_copy_array_real_4(DST, SRC)


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_RemoteDMI(context)  WU_RemoteDMI_Testbench_Integration context;

#define DECLARE_CTXT_RemoteDMI() DECLAREC_CTXT_RemoteDMI(CTX_RemoteDMI_Testbench_Integration)

#define DECLAREC_EXT_CTXT_RemoteDMI(MODE , context) MODE WU_RemoteDMI_Testbench_Integration context;

#define DECLARE_EXT_CTXT_RemoteDMI(MODE) DECLAREC_EXT_CTXT_RemoteDMI(MODE , CTX_RemoteDMI_Testbench_Integration)

#define INITC_RemoteDMI(context)     RemoteDMI_reset_Testbench_Integration(&context.SAO_CTX_outC_RemoteDMI_Testbench_Integration);
#define INIT_RemoteDMI() INITC_RemoteDMI(CTX_RemoteDMI_Testbench_Integration)

#define PERFORMC_RemoteDMI(context)     RemoteDMI_Testbench_Integration( \
        &context.SAO_CTX_inC_RemoteDMI_Testbench_Integration /* input context */,\
        &context.SAO_CTX_outC_RemoteDMI_Testbench_Integration /* output/memories context */\
    )

#define PERFORM_RemoteDMI() PERFORMC_RemoteDMI(CTX_RemoteDMI_Testbench_Integration)

/*$************** SCADE Macro wrapper *********************
** End of file RemoteDMI_macro.h
***********************************************************$*/

#endif /* _REMOTEDMI_MACRO_H_ */
