#include "BG_passed_mapping.h"
#include "BG_passed_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_BG_passed();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** BG_passed/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_BG_passed() {
	pSimulator->m_pfnSetRoot(pSimulator, "BG_passed/", &outputs_ctx, _SCSIM_Get_BG_passed_Handle);
	pSimulator->m_pfnAddSignal(pSimulator, "passed", &_SCSIM_BoolEntity_Control_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnPushStateMachine(pSimulator, "SM1");
	pSimulator->m_pfnPushState(pSimulator, "State1", &_SCSIM_SSM_st_State1_SM1_Utils, 3);
	pSimulator->m_pfnPushStateMachine(pSimulator, "SM2");
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", 0, 4, valid, 3, &_SCSIM_ClockActive_SSM_st_State1_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", 0, 5, valid, 3, &_SCSIM_ClockActive_SSM_st_State1_SM1);
	pSimulator->m_pfnPushState(pSimulator, "B1", &_SCSIM_SSM_st_B1_SM1_State1_SM2_Utils, 6);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_B1_1_SM2_SM1_State1_Utils, 7);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "B1_passed", &_SCSIM_SSM_st_B1_passed_SM1_State1_SM2_Utils, 6);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnPushStateMachine(pSimulator, "SM3");
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", 0, 8, valid, 3, &_SCSIM_ClockActive_SSM_st_State1_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", 0, 9, valid, 3, &_SCSIM_ClockActive_SSM_st_State1_SM1);
	pSimulator->m_pfnPushState(pSimulator, "B2", &_SCSIM_SSM_st_B2_SM1_State1_SM3_Utils, 10);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_B2_1_SM3_SM1_State1_Utils, 11);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "B2_passed", &_SCSIM_SSM_st_B2_passed_SM1_State1_SM3_Utils, 10);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 12, valid, 3, &_SCSIM_ClockActive_SSM_st_State1_SM1);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "1", &_SCSIM_SSM_TR_State1_1_SM1_Utils, 13);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "BG_passed", &_SCSIM_SSM_st_BG_passed_SM1_Utils, 3);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_BG_passed_1_SM1_Utils, 14);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_BaliseGroupData_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_passed", &_SCSIM_kcg_bool_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LRBG", &_SCSIM_kcg_int_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "BG", &_SCSIM_BaliseGroupData_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B1passed", &_SCSIM_kcg_bool_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B2passed", &_SCSIM_kcg_bool_Utils, 22, valid, 0, 0);
}

void* _SCSIM_Get_BG_passed_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.passed);
		case 3:
			return &(outputs_ctx.SM1_state_act);
		case 4:
			return &(outputs_ctx._3_SM2_clock_SM1_State1);
		case 5:
			return &(outputs_ctx.SM2_clock_SM1_State1);
		case 6:
			return &(outputs_ctx.SM2_state_act_SM1_State1);
		case 7:
			return &(outputs_ctx.SM2_fired_strong_SM1_State1);
		case 8:
			return &(outputs_ctx._2_SM3_clock_SM1_State1);
		case 9:
			return &(outputs_ctx.SM3_clock_SM1_State1);
		case 10:
			return &(outputs_ctx.SM3_state_act_SM1_State1);
		case 11:
			return &(outputs_ctx.SM3_fired_strong_SM1_State1);
		case 12:
			return &(outputs_ctx.State1_weakb_clock_SM1);
		case 13:
			return &(outputs_ctx.SM1_fired);
		case 14:
			return &(outputs_ctx.SM1_fired_strong);
		case 15:
			return &(outputs_ctx._L1);
		case 16:
			return &(outputs_ctx._L4);
		case 17:
			return &(outputs_ctx._L19);
		case 18:
			return &(outputs_ctx.BG_passed);
		case 19:
			return &(outputs_ctx.LRBG);
		case 20:
			return &(inputs_ctx.BG);
		case 21:
			return &(inputs_ctx.B1passed);
		case 22:
			return &(inputs_ctx.B2passed);
		default:
			break;
	}
	return 0;
}

static int IsSSM_TR_B1_1_SM2_SM1_State1Active(void * pHandle) {
	return *((SSM_TR_SM2_SM1_State1*)pHandle) == SSM_TR_B1_1_SM2_SM1_State1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_B1_1_SM2_SM1_State1_Utils = {IsSSM_TR_B1_1_SM2_SM1_State1Active};

static int IsSSM_st_B1_SM1_State1_SM2Active(void * pHandle) {
	return *((SSM_ST_SM2_SM1_State1*)pHandle) == SSM_st_B1_SM1_State1_SM2 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_B1_SM1_State1_SM2_Utils = {IsSSM_st_B1_SM1_State1_SM2Active};

static int IsSSM_st_B1_passed_SM1_State1_SM2Active(void * pHandle) {
	return *((SSM_ST_SM2_SM1_State1*)pHandle) == SSM_st_B1_passed_SM1_State1_SM2 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_B1_passed_SM1_State1_SM2_Utils = {IsSSM_st_B1_passed_SM1_State1_SM2Active};

static int IsSSM_TR_B2_1_SM3_SM1_State1Active(void * pHandle) {
	return *((SSM_TR_SM3_SM1_State1*)pHandle) == SSM_TR_B2_1_SM3_SM1_State1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_B2_1_SM3_SM1_State1_Utils = {IsSSM_TR_B2_1_SM3_SM1_State1Active};

static int IsSSM_st_B2_SM1_State1_SM3Active(void * pHandle) {
	return *((SSM_ST_SM3_SM1_State1*)pHandle) == SSM_st_B2_SM1_State1_SM3 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_B2_SM1_State1_SM3_Utils = {IsSSM_st_B2_SM1_State1_SM3Active};

static int IsSSM_st_B2_passed_SM1_State1_SM3Active(void * pHandle) {
	return *((SSM_ST_SM3_SM1_State1*)pHandle) == SSM_st_B2_passed_SM1_State1_SM3 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_B2_passed_SM1_State1_SM3_Utils = {IsSSM_st_B2_passed_SM1_State1_SM3Active};

static int IsSSM_TR_State1_1_SM1Active(void * pHandle) {
	return *((SSM_TR_SM1*)pHandle) == SSM_TR_State1_1_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_State1_1_SM1_Utils = {IsSSM_TR_State1_1_SM1Active};

static int IsSSM_st_State1_SM1Active(void * pHandle) {
	return *((SSM_ST_SM1*)pHandle) == SSM_st_State1_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_State1_SM1_Utils = {IsSSM_st_State1_SM1Active};

static int IsSSM_TR_BG_passed_1_SM1Active(void * pHandle) {
	return *((SSM_TR_SM1*)pHandle) == SSM_TR_BG_passed_1_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_BG_passed_1_SM1_Utils = {IsSSM_TR_BG_passed_1_SM1Active};

static int IsSSM_st_BG_passed_SM1Active(void * pHandle) {
	return *((SSM_ST_SM1*)pHandle) == SSM_st_BG_passed_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_BG_passed_SM1_Utils = {IsSSM_st_BG_passed_SM1Active};

static int _SCSIM_ClockActive_SSM_st_State1_SM1(void* clock) {
return *(kcg_bool*)clock == SSM_st_State1_SM1 ? 1 : 0;
}
