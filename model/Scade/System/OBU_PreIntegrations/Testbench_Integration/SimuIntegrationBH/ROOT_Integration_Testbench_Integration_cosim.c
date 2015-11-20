
/* Code generated for Graphical Panels Co-simulation */

#include "SDY1_MainScreen.h"
#include "SDY2_DMI.h"
#include "Testbench_Integration_newinterface.h"



void AfterSimInit(void){
	SDY1_MainScreen__init();
	SDY1_MainScreen__draw();
	SDY2_DMI__init();
	SDY2_DMI__draw();
}


void BeforeSimStep(void){
	SDY1_MainScreen__lockio();
	SDY2_DMI__lockio();
	/* GUI_reset <= reset */
	{	SGLbool v; 
	v = SDY1_MainScreen_control_panel_G_reset(SDY1_MainScreen_L_control_panel());
		_ctx_GUI_reset_buffer = v;
	}
	/* GUI_targetSpeed <= targetSpeed */
	{	SGLfloat v; 
	v = SDY1_MainScreen_control_panel_G_targetSpeed(SDY1_MainScreen_L_control_panel());
		_ctx_GUI_targetSpeed_buffer = v;
	}
	/* GUI_traction <= traction */
	{	SGLfloat v; 
	v = SDY1_MainScreen_control_panel_G_traction(SDY1_MainScreen_L_control_panel());
		_ctx_GUI_traction_buffer = v;
	}
	/* GUI_brake <= brake */
	{	SGLfloat v; 
	v = SDY1_MainScreen_control_panel_G_brake(SDY1_MainScreen_L_control_panel());
		_ctx_GUI_brake_buffer = v;
	}
	/* GUI_initialPosition <= initialPosition */
	{	SGLfloat v; 
	v = SDY1_MainScreen_control_panel_G_initialPosition(SDY1_MainScreen_L_control_panel());
		_ctx_GUI_initialPosition_buffer = v;
	}
	/* GUI_openDesk <= openDesk */
	{	SGLbool v; 
	v = SDY1_MainScreen_control_panel_G_openDesk(SDY1_MainScreen_L_control_panel());
		_ctx_GUI_openDesk_buffer = v;
	}
	/* DMI_MousePressed <= MousePressed */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_MousePressed(SDY2_DMI_L_DMI());
		_ctx_DMI_MousePressed_buffer = v;
	}
	/* DMI_startRequest <= startRequest */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_startRequest(SDY2_DMI_L_DMI());
		_ctx_DMI_startRequest_buffer = v;
	}
	/* DMI_openTrainRN <= openTrainRN */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_openTrainRN(SDY2_DMI_L_DMI());
		_ctx_DMI_openTrainRN_buffer = v;
	}
	/* DMI_traindataYesAck <= traindataYesAck */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_traindataYesAck(SDY2_DMI_L_DMI());
		_ctx_DMI_traindataYesAck_buffer = v;
	}
	/* DMI_keypad <= keyarray */
	{	SGLbool v[12]; 
		kcg_assign(v, (SDY2_DMI_DMI_G_keyarray(SDY2_DMI_L_DMI())), sizeof(v));
		{	int i2;
			for (i2 = 0; i2<12; i2++) {
				_ctx_DMI_keypad_buffer[i2] = v[i2];
			}
		}
	}
	/* DMI_openTrainDataWindow <= openTrainData */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_openTrainData(SDY2_DMI_L_DMI());
		_ctx_DMI_openTrainDataWindow_buffer = v;
	}
	/* DMI_openDriverID <= openDriverID */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_openDriverID(SDY2_DMI_L_DMI());
		_ctx_DMI_openDriverID_buffer = v;
	}
	/* DMI_traindataNoAck <= traindataNoAck */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_traindataNoAck(SDY2_DMI_L_DMI());
		_ctx_DMI_traindataNoAck_buffer = v;
	}
	/* DMI_traindataAck <= traindataAck */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_traindataAck(SDY2_DMI_L_DMI());
		_ctx_DMI_traindataAck_buffer = v;
	}
	/* DMI_OverD9_fromDisplay <= OverD9 */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_OverD9(SDY2_DMI_L_DMI());
		_ctx_DMI_OverD9_fromDisplay_buffer = v;
	}
	/* DMI_closeButton <= closeButton */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_closeButton(SDY2_DMI_L_DMI());
		_ctx_DMI_closeButton_buffer = v;
	}
	/* DMI_confirmTrainData <= confirmTrainData */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_confirmTrainData(SDY2_DMI_L_DMI());
		_ctx_DMI_confirmTrainData_buffer = v;
	}
	/* DMI_textMsgAck <= textMsgAck */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_textMsgAck(SDY2_DMI_L_DMI());
		_ctx_DMI_textMsgAck_buffer = v;
	}
	/* DMI_openLevelMenu <= openLevelMenu */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_openLevelMenu(SDY2_DMI_L_DMI());
		_ctx_DMI_openLevelMenu_buffer = v;
	}
	/* DMI_InputFieldAck <= InputFieldAck */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_InputFieldAck(SDY2_DMI_L_DMI());
		_ctx_DMI_InputFieldAck_buffer = v;
	}
	/* DMI_openMainMenu_fromDisplay <= OpenMainMenu */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_OpenMainMenu(SDY2_DMI_L_DMI());
		_ctx_DMI_openMainMenu_fromDisplay_buffer = v;
	}
	/* DMI_OverD12_frpmDisplay <= OverD12 */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_OverD12(SDY2_DMI_L_DMI());
		_ctx_DMI_OverD12_frpmDisplay_buffer = v;
	}
	/* DMI_HidePlanningArea_fromDisplay <= hidePlanningArea */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_hidePlanningArea(SDY2_DMI_L_DMI());
		_ctx_DMI_HidePlanningArea_fromDisplay_buffer = v;
	}
	/* DMI_ShowPlanningArea_fromDisplay <= ShowPlanningArea */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_ShowPlanningArea(SDY2_DMI_L_DMI());
		_ctx_DMI_ShowPlanningArea_fromDisplay_buffer = v;
	}
	/* DMI_closeButtonMain <= closeMainMenu */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_closeMainMenu(SDY2_DMI_L_DMI());
		_ctx_DMI_closeButtonMain_buffer = v;
	}
	/* DMI_C1AreaAck <= C1AreaAck */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_C1AreaAck(SDY2_DMI_L_DMI());
		_ctx_DMI_C1AreaAck_buffer = v;
	}
	/* DMI_ScrollUp <= scrollUp */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_scrollUp(SDY2_DMI_L_DMI());
		_ctx_DMI_ScrollUp_buffer = v;
	}
	/* DMI_ScrollDown <= scrollDown */
	{	SGLbool v; 
	v = SDY2_DMI_DMI_G_scrollDown(SDY2_DMI_L_DMI());
		_ctx_DMI_ScrollDown_buffer = v;
	}
	SDY1_MainScreen__unlockio();
	SDY2_DMI__unlockio();
}


void AfterSimStep(void){
	SDY1_MainScreen__lockio();
	SDY2_DMI__lockio();
	/* DMI_openDesk_toDisplay => openDesk */
	SDY2_DMI_DMI_S_openDesk(SDY2_DMI_L_DMI(), DMI_openDesk_toDisplay);
	/* DMI_window_mask_visibility__toDisplay => window_mask */
	{	SGLbool v[15]; 
		{	int i2;
			for (i2 = 0; i2<15; i2++) {
				v[i2] = DMI_window_mask_visibility__toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_window_mask(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_SpeedTarget_toDisplay => Vtarget */
	SDY2_DMI_DMI_S_Vtarget(SDY2_DMI_L_DMI(), DMI_SpeedTarget_toDisplay);
	/* DMI_VpermColor_toDisplay => VpermColor */
	SDY2_DMI_DMI_S_VpermColor(SDY2_DMI_L_DMI(), DMI_VpermColor_toDisplay);
	/* DMI_trainLenght_toDisplay => trainLenght */
	SDY2_DMI_DMI_S_trainLenght(SDY2_DMI_L_DMI(), DMI_trainLenght_toDisplay);
	/* DMI_GradientsValue_toDisplay => D_GradientsValue */
	{	SGLfloat v[12]; 
		{	int i2;
			for (i2 = 0; i2<12; i2++) {
				v[i2] = DMI_GradientsValue_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_D_GradientsValue(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_TrainPosition_toDisplay => TrainPosition */
	SDY2_DMI_DMI_S_TrainPosition(SDY2_DMI_L_DMI(), DMI_TrainPosition_toDisplay);
	/* DMI_Vinterv_Visibility_toDisplay => VintervVisible */
	SDY2_DMI_DMI_S_VintervVisible(SDY2_DMI_L_DMI(), DMI_Vinterv_Visibility_toDisplay);
	/* DMI_DistanceToTargetBarVisibility_toDisplay => DistanceToTargetVisibilityDigital */
	SDY2_DMI_DMI_S_DistanceToTargetVisibilityDigital(SDY2_DMI_L_DMI(), DMI_DistanceToTargetBarVisibility_toDisplay);
	/* DMI_SpeedDigitOne_toDisplay => SpeedDigitOne */
	SDY2_DMI_DMI_S_SpeedDigitOne(SDY2_DMI_L_DMI(), DMI_SpeedDigitOne_toDisplay);
	/* DMI_hourGlassVisibility_toDisplay => hourGlassVisibility */
	SDY2_DMI_DMI_S_hourGlassVisibility(SDY2_DMI_L_DMI(), DMI_hourGlassVisibility_toDisplay);
	/* DMI_trainAxleloadIndex_toDisplay => trainAxleLoad */
	SDY2_DMI_DMI_S_trainAxleLoad(SDY2_DMI_L_DMI(), DMI_trainAxleloadIndex_toDisplay);
	/* DMI_PointerColor_toDisplay => PointerColor */
	SDY2_DMI_DMI_S_PointerColor(SDY2_DMI_L_DMI(), DMI_PointerColor_toDisplay);
	/* DMI_CloseButtonEnabler_toDisplay => closeButtonEnabler */
	SDY2_DMI_DMI_S_closeButtonEnabler(SDY2_DMI_L_DMI(), DMI_CloseButtonEnabler_toDisplay);
	/* DMI_SpeedRelease_toDisplay => Vrelease */
	SDY2_DMI_DMI_S_Vrelease(SDY2_DMI_L_DMI(), DMI_SpeedRelease_toDisplay);
	/* DMI_VtargetColor_toDisplay => VtargetColor */
	SDY2_DMI_DMI_S_VtargetColor(SDY2_DMI_L_DMI(), DMI_VtargetColor_toDisplay);
	/* DMI_trainMaxspeed_toDisplay => trainMaxSpeed */
	SDY2_DMI_DMI_S_trainMaxSpeed(SDY2_DMI_L_DMI(), DMI_trainMaxspeed_toDisplay);
	/* DMI_DistanceToTargetVisible_toDisplay => DistanceToTargetBarVisibility */
	SDY2_DMI_DMI_S_DistanceToTargetBarVisibility(SDY2_DMI_L_DMI(), DMI_DistanceToTargetVisible_toDisplay);
	/* DMI_LevelSymbolVisibility_toDisplay => LevelSymbolVisibility */
	SDY2_DMI_DMI_S_LevelSymbolVisibility(SDY2_DMI_L_DMI(), DMI_LevelSymbolVisibility_toDisplay);
	/* DMI_SpeedIntervention_toDisplay => Vinterv */
	SDY2_DMI_DMI_S_Vinterv(SDY2_DMI_L_DMI(), DMI_SpeedIntervention_toDisplay);
	/* DMI_yellowBorderBrakeSymbol_toDisplay => yellowBorderBrakeSymbol */
	SDY2_DMI_DMI_S_yellowBorderBrakeSymbol(SDY2_DMI_L_DMI(), DMI_yellowBorderBrakeSymbol_toDisplay);
	/* DMI_closeButtonIndex_toDisplay => closeButtonIndex */
	SDY2_DMI_DMI_S_closeButtonIndex(SDY2_DMI_L_DMI(), DMI_closeButtonIndex_toDisplay);
	/* DMI_ModeSymbolVisibility_toDisplay => ModeSymbolVisibility */
	SDY2_DMI_DMI_S_ModeSymbolVisibility(SDY2_DMI_L_DMI(), DMI_ModeSymbolVisibility_toDisplay);
	/* DMI_SpeedDigitThree_toDisplay => SpeedDigitThree */
	SDY2_DMI_DMI_S_SpeedDigitThree(SDY2_DMI_L_DMI(), DMI_SpeedDigitThree_toDisplay);
	/* DMI_hourGlassCounter_toDisplay => translateHourGlass */
	SDY2_DMI_DMI_S_translateHourGlass(SDY2_DMI_L_DMI(), DMI_hourGlassCounter_toDisplay);
	/* DMI_trainLoadingGougeIndex_toDisplay => trainLoadingGaugeIndex */
	SDY2_DMI_DMI_S_trainLoadingGaugeIndex(SDY2_DMI_L_DMI(), DMI_trainLoadingGougeIndex_toDisplay);
	/* DMI_TrainRN_Display_toDisplay => TrainRN_Display */
	{	SGLlong v[9]; 
		{	int i2;
			for (i2 = 0; i2<9; i2++) {
				v[i2] = DMI_TrainRN_Display_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_TrainRN_Display(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_RBC_status_symbol_toDisplay => RBC_status_symbol */
	SDY2_DMI_DMI_S_RBC_status_symbol(SDY2_DMI_L_DMI(), DMI_RBC_status_symbol_toDisplay);
	/* DMI_GradientsEnd_toDisplay => D_GradientEndInterpolated */
	{	SGLfloat v[12]; 
		{	int i2;
			for (i2 = 0; i2<12; i2++) {
				v[i2] = DMI_GradientsEnd_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_D_GradientEndInterpolated(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_GradientsEnd_toDisplay => D_GradientsEndInterpolated */
	{	SGLfloat v[12]; 
		{	int i2;
			for (i2 = 0; i2<12; i2++) {
				v[i2] = DMI_GradientsEnd_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_D_GradientsEndInterpolated(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_vtarget_permColor_toDisplay => Vtarget_permColor */
	SDY2_DMI_DMI_S_Vtarget_permColor(SDY2_DMI_L_DMI(), DMI_vtarget_permColor_toDisplay);
	/* DMI_traindataYesNoIndex_toDisplay => traindataYesNoIndex */
	SDY2_DMI_DMI_S_traindataYesNoIndex(SDY2_DMI_L_DMI(), DMI_traindataYesNoIndex_toDisplay);
	/* DMI_StatusSymbolBrake_toDisplay => StatusSymbolBrake */
	SDY2_DMI_DMI_S_StatusSymbolBrake(SDY2_DMI_L_DMI(), DMI_StatusSymbolBrake_toDisplay);
	/* DMI_TrainDataWindowVisibility_toDisplay => TrainDataWindowVisibility */
	SDY2_DMI_DMI_S_TrainDataWindowVisibility(SDY2_DMI_L_DMI(), DMI_TrainDataWindowVisibility_toDisplay);
	/* DMI_levelSymbolAnnouncementIndex_toDisplay => LevelSymbolAnncouncement */
	SDY2_DMI_DMI_S_LevelSymbolAnncouncement(SDY2_DMI_L_DMI(), DMI_levelSymbolAnnouncementIndex_toDisplay);
	/* DMI_trainCategoryIndex_toDisplay => indexTrainCategory */
	SDY2_DMI_DMI_S_indexTrainCategory(SDY2_DMI_L_DMI(), DMI_trainCategoryIndex_toDisplay);
	/* DMI_SpeedPermitted_toDisplay => Vperm */
	SDY2_DMI_DMI_S_Vperm(SDY2_DMI_L_DMI(), DMI_SpeedPermitted_toDisplay);
	/* DMI_VreleaseColor_toDisplay => VreleaseColor */
	SDY2_DMI_DMI_S_VreleaseColor(SDY2_DMI_L_DMI(), DMI_VreleaseColor_toDisplay);
	/* DMI_trainBrakePerc_toDisplay => trainBrakePerc */
	SDY2_DMI_DMI_S_trainBrakePerc(SDY2_DMI_L_DMI(), DMI_trainBrakePerc_toDisplay);
	/* DMI_ArrayButtonsEnabler_toDisplay => buttonEnabler */
	{	SGLlong v[30]; 
		{	int i2;
			for (i2 = 0; i2<30; i2++) {
				v[i2] = DMI_ArrayButtonsEnabler_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_buttonEnabler(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_ETCS_LevelSymbol_toDisplay => LevelSymbol */
	SDY2_DMI_DMI_S_LevelSymbol(SDY2_DMI_L_DMI(), DMI_ETCS_LevelSymbol_toDisplay);
	/* DMI_modeSymbolAnnouncementIndex_toDisplay => ModeSymbolAnnouncement */
	SDY2_DMI_DMI_S_ModeSymbolAnnouncement(SDY2_DMI_L_DMI(), DMI_modeSymbolAnnouncementIndex_toDisplay);
	/* DMI_ModeSymbol_toDisplay => ModeSymbol */
	SDY2_DMI_DMI_S_ModeSymbol(SDY2_DMI_L_DMI(), DMI_ModeSymbol_toDisplay);
	/* DMI_DistanceToTarget_toDisplay => DistanceToTarget */
	SDY2_DMI_DMI_S_DistanceToTarget(SDY2_DMI_L_DMI(), DMI_DistanceToTarget_toDisplay);
	/* DMI_Vinterv_Color_toDisplay => VintervColor */
	SDY2_DMI_DMI_S_VintervColor(SDY2_DMI_L_DMI(), DMI_Vinterv_Color_toDisplay);
	/* DMI_yellowBorderMsg_toDisplay => yellowBorderMsg */
	SDY2_DMI_DMI_S_yellowBorderMsg(SDY2_DMI_L_DMI(), DMI_yellowBorderMsg_toDisplay);
	/* DMI_DriverID_Display_toDisplay => DriverID_Display */
	{	SGLlong v[9]; 
		{	int i2;
			for (i2 = 0; i2<9; i2++) {
				v[i2] = DMI_DriverID_Display_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_DriverID_Display(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_SpeedDigitTwo_toDisplay => SpeedDigitTwo */
	SDY2_DMI_DMI_S_SpeedDigitTwo(SDY2_DMI_L_DMI(), DMI_SpeedDigitTwo_toDisplay);
	/* DMI_yellowBorderC1Area_toDisplay => yellowBorderC1Area */
	SDY2_DMI_DMI_S_yellowBorderC1Area(SDY2_DMI_L_DMI(), DMI_yellowBorderC1Area_toDisplay);
	/* DMI_trainAirtightIndex_toDisplay => trainAirtightIndex */
	SDY2_DMI_DMI_S_trainAirtightIndex(SDY2_DMI_L_DMI(), DMI_trainAirtightIndex_toDisplay);
	/* DMI_GradientsStart_toDisplay => D_GradientsStartInterpolated */
	{	SGLfloat v[12]; 
		{	int i2;
			for (i2 = 0; i2<12; i2++) {
				v[i2] = DMI_GradientsStart_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_D_GradientsStartInterpolated(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_Vtarget_permVisibility_toDisplay => Vtarget_permVisible */
	SDY2_DMI_DMI_S_Vtarget_permVisible(SDY2_DMI_L_DMI(), DMI_Vtarget_permVisibility_toDisplay);
	/* DMI_traindataValidWinVisibility_toDisplay => traindataValidWinVisibility */
	SDY2_DMI_DMI_S_traindataValidWinVisibility(SDY2_DMI_L_DMI(), DMI_traindataValidWinVisibility_toDisplay);
	/* DMI_StatusSymbolVisibility_toDisplay => StatusSymbolVisibility */
	SDY2_DMI_DMI_S_StatusSymbolVisibility(SDY2_DMI_L_DMI(), DMI_StatusSymbolVisibility_toDisplay);
	/* DMI_TrainSpeed_toDisplay => TrainSpeed */
	SDY2_DMI_DMI_S_TrainSpeed(SDY2_DMI_L_DMI(), DMI_TrainSpeed_toDisplay);
	/* DMI_iconGroupIndex_toDisplay => iconGroupIndex */
	SDY2_DMI_DMI_S_iconGroupIndex(SDY2_DMI_L_DMI(), DMI_iconGroupIndex_toDisplay);
	/* DMI_ArrayOfMsgIndex_toDisplay => ArrayOfMsgIndex */
	{	SGLlong v[5]; 
		{	int i2;
			for (i2 = 0; i2<5; i2++) {
				v[i2] = DMI_ArrayOfMsgIndex_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_ArrayOfMsgIndex(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_InterpolatedDistanceToTarget_toDisplay => InterpolatedDistanceToTarget */
	SDY2_DMI_DMI_S_InterpolatedDistanceToTarget(SDY2_DMI_L_DMI(), DMI_InterpolatedDistanceToTarget_toDisplay);
	/* DMI_SingleMsgAckRequiredVisibility_toDysplay => SingleMsgAckRequiredVisibility */
	SDY2_DMI_DMI_S_SingleMsgAckRequiredVisibility(SDY2_DMI_L_DMI(), DMI_SingleMsgAckRequiredVisibility_toDysplay);
	/* DMI_IndexFixedMsg_toDisplay => IndexFixedMsg */
	{	SGLlong v[5]; 
		{	int i2;
			for (i2 = 0; i2<5; i2++) {
				v[i2] = DMI_IndexFixedMsg_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_IndexFixedMsg(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_IndexLevel_toDisplay => LevelIndex */
	SDY2_DMI_DMI_S_LevelIndex(SDY2_DMI_L_DMI(), DMI_IndexLevel_toDisplay);
	/* DMI_ArrayLevelIndex_toDisplay => ArrayLevelIndex */
	{	SGLlong v[12]; 
		{	int i2;
			for (i2 = 0; i2<12; i2++) {
				v[i2] = DMI_ArrayLevelIndex_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_ArrayLevelIndex(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_levelMenuVisibility_toDisplay => levelMenuVisibility */
	SDY2_DMI_DMI_S_levelMenuVisibility(SDY2_DMI_L_DMI(), DMI_levelMenuVisibility_toDisplay);
	/* DMI_PlainText_toDisplay => PlainText */
	{	SGLbyte v[5][30]; 
		{	int i2;
			for (i2 = 0; i2<5; i2++) {
				{	int i4;
					for (i4 = 0; i4<30; i4++) {
						v[i2][i4] = DMI_PlainText_toDisplay[i2][i4];
					}
				}
			}
		}
		SDY2_DMI_DMI_S_PlainText(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_Array_hh_toDisplay => Array_hh */
	{	SGLfloat v[5]; 
		{	int i2;
			for (i2 = 0; i2<5; i2++) {
				v[i2] = DMI_Array_hh_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_Array_hh(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_Array_mm_toDisplay => Array_mm */
	{	SGLfloat v[5]; 
		{	int i2;
			for (i2 = 0; i2<5; i2++) {
				v[i2] = DMI_Array_mm_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_Array_mm(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_isAuxiliarMsg_toDisplay => isAuxiliarMsg */
	SDY2_DMI_DMI_S_isAuxiliarMsg(SDY2_DMI_L_DMI(), DMI_isAuxiliarMsg_toDisplay);
	/* DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay => D_SPDI_SpeedChangeVisible */
	{	SGLbool v[10]; 
		{	int i2;
			for (i2 = 0; i2<10; i2++) {
				v[i2] = DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_D_SPDI_SpeedChangeVisible(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_D_PASP_IndicationMarker_toDisplay => D_PASP_IndicationMarkerPosition */
	{	SGLfloat v[1]; 
		{	int i2;
			for (i2 = 0; i2<1; i2++) {
				v[i2] = DMI_D_PASP_IndicationMarker_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_D_PASP_IndicationMarkerPosition(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_D_SPDI_SpeedChangeIndex_toDisplay => D_SPID_SpeedChangeIndex */
	{	SGLlong v[10]; 
		{	int i2;
			for (i2 = 0; i2<10; i2++) {
				v[i2] = DMI_D_SPDI_SpeedChangeIndex_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_D_SPID_SpeedChangeIndex(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_D_SPDI_SpeedChangePosition_toDisplay => D_SPDI_speedChangePosition */
	{	SGLfloat v[10]; 
		{	int i2;
			for (i2 = 0; i2<10; i2++) {
				v[i2] = DMI_D_SPDI_SpeedChangePosition_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_D_SPDI_speedChangePosition(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_D_PASP_Speeds_toDisplay => D_PASP_FilteredSpeeds */
	{	SGLfloat v[4]; 
		{	int i2;
			for (i2 = 0; i2<4; i2++) {
				v[i2] = DMI_D_PASP_Speeds_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_D_PASP_FilteredSpeeds(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_D_PASP_Distances_toDisplay => D_PASP_BreakPointPositions */
	{	SGLfloat v[4]; 
		{	int i2;
			for (i2 = 0; i2<4; i2++) {
				v[i2] = DMI_D_PASP_Distances_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_D_PASP_BreakPointPositions(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_D_GradientVisible_toDisplay => D_GradientsVisible */
	{	SGLbool v[12]; 
		{	int i2;
			for (i2 = 0; i2<12; i2++) {
				v[i2] = DMI_D_GradientVisible_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_D_GradientsVisible(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_D_Scale_toDisplay => D_Scale */
	{	SGLfloat v[9]; 
		{	int i2;
			for (i2 = 0; i2<9; i2++) {
				v[i2] = DMI_D_Scale_toDisplay[i2];
			}
		}
		SDY2_DMI_DMI_S_D_Scale(SDY2_DMI_L_DMI(), v);
	}
	/* DMI_PlanningAreaVisibility_toDisplay => PlanningAreaVisibility */
	SDY2_DMI_DMI_S_PlanningAreaVisibility(SDY2_DMI_L_DMI(), DMI_PlanningAreaVisibility_toDisplay);
	/* GUI_serviceBrake => serviceBrake */
	SDY1_MainScreen_control_panel_S_serviceBrake(SDY1_MainScreen_L_control_panel(), GUI_serviceBrake);
	/* GUI_TractionCutOff => tractionCutOff */
	SDY1_MainScreen_control_panel_S_tractionCutOff(SDY1_MainScreen_L_control_panel(), GUI_TractionCutOff);
	/* GUI_currentPositionInM => positionCounter */
	SDY1_MainScreen_control_panel_S_positionCounter(SDY1_MainScreen_L_control_panel(), GUI_currentPositionInM);
	/* GUI_currentVelocityInKmH => velocity */
	SDY1_MainScreen_control_panel_S_velocity(SDY1_MainScreen_L_control_panel(), GUI_currentVelocityInKmH);
	/* GUI_currentVelocityInKmH => velocityGraph */
	SDY1_MainScreen_control_panel_S_velocityGraph(SDY1_MainScreen_L_control_panel(), GUI_currentVelocityInKmH);
	/* GUI_TrainPositionDeltaMax => trainPositionMax */
	SDY1_MainScreen_control_panel_S_trainPositionMax(SDY1_MainScreen_L_control_panel(), GUI_TrainPositionDeltaMax);
	/* GUI_TrainPositionDeltaMin => trainPositionMin */
	SDY1_MainScreen_control_panel_S_trainPositionMin(SDY1_MainScreen_L_control_panel(), GUI_TrainPositionDeltaMin);
	/* GUI_timestamp => timestamp */
	SDY1_MainScreen_control_panel_S_timestamp(SDY1_MainScreen_L_control_panel(), GUI_timestamp);
	/* GUI_TrainPositionNominal => trainPositionNominal */
	SDY1_MainScreen_control_panel_S_trainPositionNominal(SDY1_MainScreen_L_control_panel(), GUI_TrainPositionNominal);
	/* GUI_emergencyBrake => emergencyBrake */
	SDY1_MainScreen_control_panel_S_emergencyBrake(SDY1_MainScreen_L_control_panel(), GUI_emergencyBrake);
	/* GUI_AFBActive => afbActive */
	SDY1_MainScreen_control_panel_S_afbActive(SDY1_MainScreen_L_control_panel(), GUI_AFBActive);
	/* DMI_ScrollDownEnableIndex => scrollDownEnableTypeIndex */
	SDY2_DMI_DMI_S_scrollDownEnableTypeIndex(SDY2_DMI_L_DMI(), DMI_ScrollDownEnableIndex);
	/* DMI_ScrollUpEnableIndex => scrollUpEnableTypeIndex */
	SDY2_DMI_DMI_S_scrollUpEnableTypeIndex(SDY2_DMI_L_DMI(), DMI_ScrollUpEnableIndex);
	/* DMI_localTime => localTimeArray */
	{	SGLfloat v[4]; 
		{	int i2;
			for (i2 = 0; i2<4; i2++) {
				v[i2] = DMI_localTime[i2];
			}
		}
		SDY2_DMI_DMI_S_localTimeArray(SDY2_DMI_L_DMI(), v);
	}
	SDY1_MainScreen__draw();
	SDY2_DMI__draw();
}


void RefreshSimValues(void){
	 if (GraphicalInputsConnected) {
		BeforeSimStep();
		UpdateSimulatorValues();
	}
}


void BeforeSimInit(void){
	SDY1_MainScreen__refreshCallback(RefreshSimValues);
	SDY2_DMI__refreshCallback(RefreshSimValues);
}


void ExtendedSimStop(void){
}


int ExtendedGetDumpSize(){
	return 0;
}


void ExtendedGatherDumpData(char * pData){
}


void ExtendedRestoreDumpData(const char * pData){
	AfterSimStep();
}


void UpdateValues(void){
}

