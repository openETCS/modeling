#include "Operator7_DetermineBGOrientation_LRBG_mapping.h"
#include "Operator7_DetermineBGOrientation_LRBG_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Operator7_DetermineBGOrientation_LRBG();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** DetermineBGOrientation_LRBG::Operator7/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Operator7_DetermineBGOrientation_LRBG() {
	pSimulator->m_pfnSetRoot(pSimulator, "DetermineBGOrientation_LRBG::Operator7/", &outputs_ctx, _SCSIM_Get_Operator7_DetermineBGOrientation_LRBG_Handle);
	pSimulator->m_pfnPushStateMachine(pSimulator, "SM1");
	pSimulator->m_pfnPushState(pSimulator, "Off", &_SCSIM_SSM_st_Off_SM1_Utils, 1);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_Off_1_SM1_Utils, 2);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "On", &_SCSIM_SSM_st_On_SM1_Utils, 1);
	pSimulator->m_pfnAddSignal(pSimulator, "Signal1", &_SCSIM_BoolEntity_Control_Utils, 3, valid, 1, &_SCSIM_ClockActive_SSM_st_On_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 5, valid, 1, &_SCSIM_ClockActive_SSM_st_On_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 6, valid, 1, &_SCSIM_ClockActive_SSM_st_On_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 7, valid, 1, &_SCSIM_ClockActive_SSM_st_On_SM1);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_On_1_SM1_Utils, 2);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddOutput(pSimulator, "Output1", &_SCSIM_kcg_int_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Input1", &_SCSIM_kcg_int_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "in", &_SCSIM_kcg_bool_Utils, 10, valid, 0, 0);
}

void* _SCSIM_Get_Operator7_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.SM1_state_act);
		case 2:
			return &(outputs_ctx.SM1_fired_strong);
		case 3:
			return &(outputs_ctx.Signal1_SM1_On);
		case 5:
			return &(outputs_ctx._L2_SM1_On);
		case 6:
			return &(outputs_ctx._L3_SM1_On);
		case 7:
			return &(outputs_ctx._L4_SM1_On);
		case 8:
			return &(outputs_ctx.Output1);
		case 9:
			return &(inputs_ctx.Input1);
		case 10:
			return &(inputs_ctx.in);
		default:
			break;
	}
	return 0;
}

static int IsSSM_TR_Off_1_SM1Active(void * pHandle) {
	return *((SSM_TR_SM1*)pHandle) == SSM_TR_Off_1_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Off_1_SM1_Utils = {IsSSM_TR_Off_1_SM1Active};

static int IsSSM_st_Off_SM1Active(void * pHandle) {
	return *((SSM_ST_SM1*)pHandle) == SSM_st_Off_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_Off_SM1_Utils = {IsSSM_st_Off_SM1Active};

static int IsSSM_TR_On_1_SM1Active(void * pHandle) {
	return *((SSM_TR_SM1*)pHandle) == SSM_TR_On_1_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_On_1_SM1_Utils = {IsSSM_TR_On_1_SM1Active};

static int IsSSM_st_On_SM1Active(void * pHandle) {
	return *((SSM_ST_SM1*)pHandle) == SSM_st_On_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_On_SM1_Utils = {IsSSM_st_On_SM1Active};

static int _SCSIM_ClockActive_SSM_st_On_SM1(void* clock) {
return *(kcg_bool*)clock == SSM_st_On_SM1 ? 1 : 0;
}
