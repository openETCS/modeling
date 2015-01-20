#include "Test_DMI_mapping.h"
#include "Test_DMI_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Test_DMI();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Test_DMI/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Test_DMI() {
	pSimulator->m_pfnSetRoot(pSimulator, "Test_DMI/", &outputs_ctx, _SCSIM_Get_Test_DMI_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "isKey1", &_SCSIM_kcg_bool_Utils, 1, valid, 0, 0);
	_SCSIM_Mapping_Train("Train", "1", 2, 0, 0);
	_SCSIM_Mapping_SpeedToDigit("SpeedToDigit", "1", 3, 0, 0);
	_SCSIM_Mapping_CalculateDistanceToTarget("CalculateDistanceToTarget", "2", 4, 0, 0);
	pSimulator->m_pfnPushActivateIf(pSimulator, "PointerColor");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_5_Utils, 5);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_6_Utils, 6);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 7, valid, 6, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_8_Utils, 8);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 9, valid, 8, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_10_Utils, 10);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 11, valid, 10, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_12_Utils, 12);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_13_Utils, 13);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_array_int_1_Utils, 14, valid, 13, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnPushStateMachine(pSimulator, "ShowDistanceToTarget");
	pSimulator->m_pfnPushState(pSimulator, "VisibleState", &_SCSIM_SSM_st_VisibleState_ShowDistanceToTarget_Utils, 15);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 16, valid, 15, &_SCSIM_ClockActive_SSM_st_VisibleState_ShowDistanceToTarget);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_VisibleState_1_ShowDistanceToTarget_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "InvisibleState", &_SCSIM_SSM_st_InvisibleState_ShowDistanceToTarget_Utils, 15);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 18, valid, 15, &_SCSIM_ClockActive_SSM_st_InvisibleState_ShowDistanceToTarget);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_InvisibleState_1_ShowDistanceToTarget_Utils, 17);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnPushStateMachine(pSimulator, "SM1");
	pSimulator->m_pfnPushState(pSimulator, "VisibleState", &_SCSIM_SSM_st_VisibleState_SM1_Utils, 19);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 20, valid, 19, &_SCSIM_ClockActive_SSM_st_VisibleState_SM1);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_VisibleState_1_SM1_Utils, 21);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "InvisibleState", &_SCSIM_SSM_st_InvisibleState_SM1_Utils, 19);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 22, valid, 19, &_SCSIM_ClockActive_SSM_st_InvisibleState_SM1);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_InvisibleState_1_SM1_Utils, 21);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "localTrainPosition", &_SCSIM_kcg_real_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_real_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_real_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_real_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_real_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_real_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_array_real_12_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_array_real_12_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_array_real_12_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_real_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_real_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_real_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_real_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_array_bool_12_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_real_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_bool_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_real_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_bool_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_kcg_bool_Utils, 46, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_array_bool_12_Utils, 47, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_kcg_bool_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TrainPosition", &_SCSIM_kcg_real_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TrainSpeed", &_SCSIM_kcg_real_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SpeedDigitOne", &_SCSIM_kcg_real_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SpeedDigitTwo", &_SCSIM_kcg_real_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SpeedDigitThree", &_SCSIM_kcg_real_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SpeedTarget", &_SCSIM_kcg_real_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SpeedPermitted", &_SCSIM_kcg_real_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SpeedRelease", &_SCSIM_kcg_real_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "GradientsStart", &_SCSIM_array_real_12_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "GradientsEnd", &_SCSIM_array_real_12_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "GradientsValue", &_SCSIM_array_real_12_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "DistanceToTarget", &_SCSIM_kcg_real_Utils, 60, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "DistanceToTargetVisible", &_SCSIM_kcg_bool_Utils, 61, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "InterpolatedDistanceToTarget", &_SCSIM_kcg_real_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "StatusSymbolBrake", &_SCSIM_kcg_bool_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PointerColor", &_SCSIM_kcg_int_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "showlala", &_SCSIM_kcg_bool_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "digit1_view", &_SCSIM_array_int_1_Utils, 66, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "RP_SpeedTarget", &_SCSIM_kcg_real_Utils, 67, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "RP_SpeedPermitted", &_SCSIM_kcg_real_Utils, 68, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "RP_SpeedRelease", &_SCSIM_kcg_real_Utils, 69, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "OverA", &_SCSIM_kcg_bool_Utils, 70, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "MousePressed", &_SCSIM_kcg_bool_Utils, 71, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "VisibleGradients", &_SCSIM_array_bool_12_Utils, 72, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Brake", &_SCSIM_kcg_real_Utils, 73, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "lala", &_SCSIM_kcg_bool_Utils, 74, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "insideButton", &_SCSIM_kcg_bool_Utils, 75, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "arraykey", &_SCSIM_array_bool_12_Utils, 76, valid, 0, 0);
}

void* _SCSIM_Get_Test_DMI_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.isKey1);
		case 2:
			return &(outputs_ctx.Context_1);
		case 3:
			return &(outputs_ctx._1_Context_1);
		case 4:
			return &(outputs_ctx.Context_2);
		case 5:
			return &(outputs_ctx.PointerColor_clock);
		case 6:
			return &(outputs_ctx.else_clock_PointerColor);
		case 7:
			return &(outputs_ctx._L13_PointerColor);
		case 8:
			return &(outputs_ctx.else_clock_PointerColor);
		case 9:
			return &(outputs_ctx._L12_PointerColor);
		case 10:
			return &(outputs_ctx.PointerColor_clock);
		case 11:
			return &(outputs_ctx._L1_PointerColor);
		case 12:
			return &(outputs_ctx.IfBlock1_clock);
		case 13:
			return &(outputs_ctx.IfBlock1_clock);
		case 14:
			return &(outputs_ctx._L1_IfBlock1);
		case 15:
			return &(outputs_ctx.ShowDistanceToTarget_state_act);
		case 16:
			return &(outputs_ctx._L1_ShowDistanceToTarget_VisibleState);
		case 17:
			return &(outputs_ctx.ShowDistanceToTarget_fired_strong);
		case 18:
			return &(outputs_ctx._L1_ShowDistanceToTarget_InvisibleState);
		case 19:
			return &(outputs_ctx.SM1_state_act);
		case 20:
			return &(outputs_ctx._L1_SM1_VisibleState);
		case 21:
			return &(outputs_ctx.SM1_fired_strong);
		case 22:
			return &(outputs_ctx._L1_SM1_InvisibleState);
		case 23:
			return &(outputs_ctx.localTrainPosition);
		case 24:
			return &(outputs_ctx._L2);
		case 25:
			return &(outputs_ctx._L3);
		case 26:
			return &(outputs_ctx._L4);
		case 27:
			return &(outputs_ctx._L6);
		case 28:
			return &(outputs_ctx._L9);
		case 29:
			return &(outputs_ctx._L8);
		case 30:
			return &(outputs_ctx._L7);
		case 31:
			return &(outputs_ctx._L10);
		case 32:
			return &(outputs_ctx._L12);
		case 33:
			return &(outputs_ctx._L17);
		case 34:
			return &(outputs_ctx._L18);
		case 35:
			return &(outputs_ctx._L19);
		case 36:
			return &(outputs_ctx._L22);
		case 37:
			return &(outputs_ctx._L23);
		case 38:
			return &(outputs_ctx._L25);
		case 39:
			return &(outputs_ctx._L21);
		case 40:
			return &(outputs_ctx._L32);
		case 41:
			return &(outputs_ctx._L26);
		case 42:
			return &(outputs_ctx._L33);
		case 43:
			return &(outputs_ctx._L34);
		case 44:
			return &(outputs_ctx._L35);
		case 45:
			return &(outputs_ctx._L36);
		case 46:
			return &(outputs_ctx._L37);
		case 47:
			return &(outputs_ctx._L39);
		case 48:
			return &(outputs_ctx._L44);
		case 49:
			return &(outputs_ctx.TrainPosition);
		case 50:
			return &(outputs_ctx.TrainSpeed);
		case 51:
			return &(outputs_ctx.SpeedDigitOne);
		case 52:
			return &(outputs_ctx.SpeedDigitTwo);
		case 53:
			return &(outputs_ctx.SpeedDigitThree);
		case 54:
			return &(outputs_ctx.SpeedTarget);
		case 55:
			return &(outputs_ctx.SpeedPermitted);
		case 56:
			return &(outputs_ctx.SpeedRelease);
		case 57:
			return &(outputs_ctx.GradientsStart);
		case 58:
			return &(outputs_ctx.GradientsEnd);
		case 59:
			return &(outputs_ctx.GradientsValue);
		case 60:
			return &(outputs_ctx.DistanceToTarget);
		case 61:
			return &(outputs_ctx.DistanceToTargetVisible);
		case 62:
			return &(outputs_ctx.InterpolatedDistanceToTarget);
		case 63:
			return &(outputs_ctx.StatusSymbolBrake);
		case 64:
			return &(outputs_ctx.PointerColor);
		case 65:
			return &(outputs_ctx.showlala);
		case 66:
			return &(outputs_ctx.digit1_view);
		case 67:
			return &(inputs_ctx.RP_SpeedTarget);
		case 68:
			return &(inputs_ctx.RP_SpeedPermitted);
		case 69:
			return &(inputs_ctx.RP_SpeedRelease);
		case 70:
			return &(inputs_ctx.OverA);
		case 71:
			return &(inputs_ctx.MousePressed);
		case 72:
			return &(inputs_ctx.VisibleGradients);
		case 73:
			return &(inputs_ctx.Brake);
		case 74:
			return &(inputs_ctx.lala);
		case 75:
			return &(inputs_ctx.insideButton);
		case 76:
			return &(inputs_ctx.arraykey);
		default:
			break;
	}
	return 0;
}

static int Is6Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_6_Utils = {Is6Active};

static int Is8Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_8_Utils = {Is8Active};

static int Is5Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_5_Utils = {Is5Active};

static int Is10Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_10_Utils = {Is10Active};

static int Is12Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_12_Utils = {Is12Active};

static int Is13Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_13_Utils = {Is13Active};

static int IsSSM_TR_VisibleState_1_ShowDistanceToTargetActive(void * pHandle) {
	return *((SSM_TR_ShowDistanceToTarget*)pHandle) == SSM_TR_VisibleState_1_ShowDistanceToTarget ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_VisibleState_1_ShowDistanceToTarget_Utils = {IsSSM_TR_VisibleState_1_ShowDistanceToTargetActive};

static int IsSSM_st_VisibleState_ShowDistanceToTargetActive(void * pHandle) {
	return *((SSM_ST_ShowDistanceToTarget*)pHandle) == SSM_st_VisibleState_ShowDistanceToTarget ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_VisibleState_ShowDistanceToTarget_Utils = {IsSSM_st_VisibleState_ShowDistanceToTargetActive};

static int IsSSM_TR_InvisibleState_1_ShowDistanceToTargetActive(void * pHandle) {
	return *((SSM_TR_ShowDistanceToTarget*)pHandle) == SSM_TR_InvisibleState_1_ShowDistanceToTarget ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_InvisibleState_1_ShowDistanceToTarget_Utils = {IsSSM_TR_InvisibleState_1_ShowDistanceToTargetActive};

static int IsSSM_st_InvisibleState_ShowDistanceToTargetActive(void * pHandle) {
	return *((SSM_ST_ShowDistanceToTarget*)pHandle) == SSM_st_InvisibleState_ShowDistanceToTarget ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_InvisibleState_ShowDistanceToTarget_Utils = {IsSSM_st_InvisibleState_ShowDistanceToTargetActive};

static int IsSSM_TR_VisibleState_1_SM1Active(void * pHandle) {
	return *((SSM_TR_SM1*)pHandle) == SSM_TR_VisibleState_1_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_VisibleState_1_SM1_Utils = {IsSSM_TR_VisibleState_1_SM1Active};

static int IsSSM_st_VisibleState_SM1Active(void * pHandle) {
	return *((SSM_ST_SM1*)pHandle) == SSM_st_VisibleState_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_VisibleState_SM1_Utils = {IsSSM_st_VisibleState_SM1Active};

static int IsSSM_TR_InvisibleState_1_SM1Active(void * pHandle) {
	return *((SSM_TR_SM1*)pHandle) == SSM_TR_InvisibleState_1_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_InvisibleState_1_SM1_Utils = {IsSSM_TR_InvisibleState_1_SM1Active};

static int IsSSM_st_InvisibleState_SM1Active(void * pHandle) {
	return *((SSM_ST_SM1*)pHandle) == SSM_st_InvisibleState_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_InvisibleState_SM1_Utils = {IsSSM_st_InvisibleState_SM1Active};

/****************************************************************
 ** Train/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Train(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Train_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_real_Utils, 77, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_real_Utils, 78, valid, 0, 0);
	/*<< Inlined pwlinear::LimiterUnSymmetrical*/
	pSimulator->m_pfnPushInstance(pSimulator, "pwlinear::LimiterUnSymmetrical", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LUS_Output", &_SCSIM_kcg_real_Utils, 79, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "LUS_Input", &_SCSIM_kcg_real_Utils, 80, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "LowLimit", &_SCSIM_kcg_real_Utils, 81, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "HighLimit", &_SCSIM_kcg_real_Utils, 82, valid, 0, 0);
	pSimulator->m_pfnAddAssume(pSimulator, "A1", &_SCSIM_BoolEntity_Control_Utils, 83, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 85, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_real_Utils, 86, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_real_Utils, 87, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_real_Utils, 88, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 89, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 90, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_real_Utils, 91, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_92_Utils, 92);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_93_Utils, 93);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 94, valid, 93, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_95_Utils, 95);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 96, valid, 95, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_97_Utils, 97);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 98, valid, 97, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "SpeedGap", &_SCSIM_kcg_real_Utils, 99, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "Acceleration", &_SCSIM_kcg_real_Utils, 100, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "localTrainSpeed", &_SCSIM_kcg_real_Utils, 101, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 102, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 103, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_real_Utils, 104, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_real_Utils, 105, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_real_Utils, 106, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_real_Utils, 107, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_real_Utils, 108, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_real_Utils, 109, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_real_Utils, 110, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_real_Utils, 111, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_real_Utils, 112, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_real_Utils, 113, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_real_Utils, 114, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 115, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_real_Utils, 116, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_real_Utils, 117, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_real_Utils, 118, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_real_Utils, 119, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_real_Utils, 120, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_real_Utils, 121, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TrainPosition", &_SCSIM_kcg_real_Utils, 122, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TrainSpeed", &_SCSIM_kcg_real_Utils, 123, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Train_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Train* pContext = (outC_Train*)pInstance;
	switch (nHandleIdent) {
		case 77:
			return &((*pContext)._L8);
		case 78:
			return &((*pContext)._L19);
		case 79:
			return &((*pContext).LUS_Output_2);
		case 80:
			return &((*pContext).LUS_Input_2);
		case 81:
			return &((*pContext).LowLimit_2);
		case 82:
			return &((*pContext).HighLimit_2);
		case 83:
			return &((*pContext).A1_2);
		case 85:
			return &((*pContext)._L1_2);
		case 86:
			return &((*pContext)._L11_2);
		case 87:
			return &((*pContext)._L13_2);
		case 88:
			return &((*pContext)._L15_2);
		case 89:
			return &((*pContext)._L2_2);
		case 90:
			return &((*pContext)._L3_2);
		case 91:
			return &((*pContext)._L9_2);
		case 92:
			return &((*pContext).IfBlock1_clock);
		case 93:
			return &((*pContext).else_clock_IfBlock1);
		case 94:
			return &((*pContext)._L12_IfBlock1);
		case 95:
			return &((*pContext).else_clock_IfBlock1);
		case 96:
			return &((*pContext)._L11_IfBlock1);
		case 97:
			return &((*pContext).IfBlock1_clock);
		case 98:
			return &((*pContext)._L1_IfBlock1);
		case 99:
			return &((*pContext).SpeedGap);
		case 100:
			return &((*pContext).Acceleration);
		case 101:
			return &((*pContext).localTrainSpeed);
		case 102:
			return &((*pContext)._L1);
		case 103:
			return &((*pContext)._L3);
		case 104:
			return &((*pContext)._L6);
		case 105:
			return &((*pContext)._L7);
		case 106:
			return &((*pContext)._L12);
		case 107:
			return &((*pContext)._L13);
		case 108:
			return &((*pContext)._L14);
		case 109:
			return &((*pContext)._L15);
		case 110:
			return &((*pContext)._L16);
		case 111:
			return &((*pContext)._L17);
		case 112:
			return &((*pContext)._L18);
		case 113:
			return &((*pContext)._L20);
		case 114:
			return &((*pContext)._L21);
		case 115:
			return &((*pContext)._L22);
		case 116:
			return &((*pContext)._L23);
		case 117:
			return &((*pContext)._L24);
		case 118:
			return &((*pContext)._L25);
		case 119:
			return &((*pContext)._L26);
		case 120:
			return &((*pContext)._L27);
		case 121:
			return &((*pContext)._L30);
		case 122:
			return &((*pContext).TrainPosition);
		case 123:
			return &((*pContext).TrainSpeed);
		default:
			break;
	}
	return 0;
}

static int Is93Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_93_Utils = {Is93Active};

static int Is95Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_95_Utils = {Is95Active};

static int Is92Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_92_Utils = {Is92Active};

static int Is97Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_97_Utils = {Is97Active};

/****************************************************************
 ** SpeedToDigit/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SpeedToDigit(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SpeedToDigit_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 124, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 125, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 126, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 127, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 128, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_real_Utils, 129, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_real_Utils, 130, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 131, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 132, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 133, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 134, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 135, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 136, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 137, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 138, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SpeedDigitOne", &_SCSIM_kcg_real_Utils, 139, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SpeedDigitTwo", &_SCSIM_kcg_real_Utils, 140, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SpeedDigitThree", &_SCSIM_kcg_real_Utils, 141, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SpeedToDigit_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SpeedToDigit* pContext = (outC_SpeedToDigit*)pInstance;
	switch (nHandleIdent) {
		case 124:
			return &((*pContext)._L1);
		case 125:
			return &((*pContext)._L2);
		case 126:
			return &((*pContext)._L3);
		case 127:
			return &((*pContext)._L4);
		case 128:
			return &((*pContext)._L5);
		case 129:
			return &((*pContext)._L6);
		case 130:
			return &((*pContext)._L7);
		case 131:
			return &((*pContext)._L9);
		case 132:
			return &((*pContext)._L8);
		case 133:
			return &((*pContext)._L12);
		case 134:
			return &((*pContext)._L13);
		case 135:
			return &((*pContext)._L14);
		case 136:
			return &((*pContext)._L15);
		case 137:
			return &((*pContext)._L16);
		case 138:
			return &((*pContext)._L17);
		case 139:
			return &((*pContext).SpeedDigitOne);
		case 140:
			return &((*pContext).SpeedDigitTwo);
		case 141:
			return &((*pContext).SpeedDigitThree);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** CalculateDistanceToTarget/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CalculateDistanceToTarget(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CalculateDistanceToTarget_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_142_Utils, 142);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_143_Utils, 143);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_144_Utils, 144);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_real_Utils, 145, valid, 144, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 146, valid, 144, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 147, valid, 144, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_real_Utils, 148, valid, 144, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_real_Utils, 149, valid, 144, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_real_Utils, 150, valid, 144, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_real_Utils, 151, valid, 144, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_real_Utils, 152, valid, 144, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_153_Utils, 153);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 154, valid, 153, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_155_Utils, 155);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_real_Utils, 156, valid, 155, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 157, valid, 155, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 158, valid, 155, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 159, valid, 155, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 160, valid, 155, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_161_Utils, 161);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_real_Utils, 162, valid, 161, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddOutput(pSimulator, "InterpolatedDistanceToTarget", &_SCSIM_kcg_real_Utils, 163, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CalculateDistanceToTarget_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CalculateDistanceToTarget* pContext = (outC_CalculateDistanceToTarget*)pInstance;
	switch (nHandleIdent) {
		case 142:
			return &((*pContext).IfBlock1_clock);
		case 143:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 144:
			return &((*pContext).else_clock_IfBlock1);
		case 145:
			return &((*pContext)._L56_IfBlock1);
		case 146:
			return &((*pContext)._L35_IfBlock1);
		case 147:
			return &((*pContext)._L24_IfBlock1);
		case 148:
			return &((*pContext)._L6_IfBlock1);
		case 149:
			return &((*pContext)._L7_IfBlock1);
		case 150:
			return &((*pContext)._L83_IfBlock1);
		case 151:
			return &((*pContext)._L9_IfBlock1);
		case 152:
			return &((*pContext)._L10_IfBlock1);
		case 153:
			return &((*pContext).else_clock_IfBlock1);
		case 154:
			return &((*pContext)._L12_IfBlock1);
		case 155:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 156:
			return &((*pContext)._L5_IfBlock1);
		case 157:
			return &((*pContext)._L4_IfBlock1);
		case 158:
			return &((*pContext)._L3_IfBlock1);
		case 159:
			return &((*pContext)._L2_IfBlock1);
		case 160:
			return &((*pContext)._L1_IfBlock1);
		case 161:
			return &((*pContext).IfBlock1_clock);
		case 162:
			return &((*pContext)._L8_IfBlock1);
		case 163:
			return &((*pContext).InterpolatedDistanceToTarget);
		default:
			break;
	}
	return 0;
}

static int Is144Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_144_Utils = {Is144Active};

static int Is153Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_153_Utils = {Is153Active};

static int Is143Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_143_Utils = {Is143Active};

static int Is155Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_155_Utils = {Is155Active};

static int Is142Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_142_Utils = {Is142Active};

static int Is161Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_161_Utils = {Is161Active};

static int _SCSIM_ClockActive_SSM_st_InvisibleState_SM1(void* clock) {
return *(kcg_bool*)clock == SSM_st_InvisibleState_SM1 ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_VisibleState_SM1(void* clock) {
return *(kcg_bool*)clock == SSM_st_VisibleState_SM1 ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_InvisibleState_ShowDistanceToTarget(void* clock) {
return *(kcg_bool*)clock == SSM_st_InvisibleState_ShowDistanceToTarget ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_VisibleState_ShowDistanceToTarget(void* clock) {
return *(kcg_bool*)clock == SSM_st_VisibleState_ShowDistanceToTarget ? 1 : 0;
}
static int _SCSIM_ClockActive_kcg_true(void* clock) {
return *(kcg_bool*)clock == kcg_true ? 1 : 0;
}
static int _SCSIM_ClockActive_kcg_false(void* clock) {
return *(kcg_bool*)clock == kcg_false ? 1 : 0;
}
