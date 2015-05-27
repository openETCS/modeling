#include "ButtonBehaviour_mapping.h"
#include "ButtonBehaviour_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_ButtonBehaviour();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** ButtonBehaviour/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ButtonBehaviour() {
	pSimulator->m_pfnSetRoot(pSimulator, "ButtonBehaviour/", &outputs_ctx, _SCSIM_Get_ButtonBehaviour_Handle);
	pSimulator->m_pfnPushStateMachine(pSimulator, "SM1");
	pSimulator->m_pfnPushState(pSimulator, "Released", &_SCSIM_SSM_st_Released_SM1_Utils, 1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 2, valid, 1, &_SCSIM_ClockActive_SSM_st_Released_SM1);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_Released_1_SM1_Utils, 3);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "Pressed", &_SCSIM_SSM_st_Pressed_SM1_Utils, 1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 4, valid, 1, &_SCSIM_ClockActive_SSM_st_Pressed_SM1);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_Pressed_1_SM1_Utils, 3);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddOutput(pSimulator, "isPressed", &_SCSIM_kcg_bool_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "pressed", &_SCSIM_kcg_bool_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "released", &_SCSIM_kcg_bool_Utils, 7, valid, 0, 0);
}

void* _SCSIM_Get_ButtonBehaviour_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.SM1_state_act);
		case 2:
			return &(outputs_ctx._L1_SM1_Released);
		case 3:
			return &(outputs_ctx.SM1_fired_strong);
		case 4:
			return &(outputs_ctx._L1_SM1_Pressed);
		case 5:
			return &(outputs_ctx.isPressed);
		case 6:
			return &(inputs_ctx.pressed);
		case 7:
			return &(inputs_ctx.released);
		default:
			break;
	}
	return 0;
}

static int IsSSM_TR_Released_1_SM1Active(void * pHandle) {
	return *((SSM_TR_SM1*)pHandle) == SSM_TR_Released_1_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Released_1_SM1_Utils = {IsSSM_TR_Released_1_SM1Active};

static int IsSSM_st_Released_SM1Active(void * pHandle) {
	return *((SSM_ST_SM1*)pHandle) == SSM_st_Released_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_Released_SM1_Utils = {IsSSM_st_Released_SM1Active};

static int IsSSM_TR_Pressed_1_SM1Active(void * pHandle) {
	return *((SSM_TR_SM1*)pHandle) == SSM_TR_Pressed_1_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Pressed_1_SM1_Utils = {IsSSM_TR_Pressed_1_SM1Active};

static int IsSSM_st_Pressed_SM1Active(void * pHandle) {
	return *((SSM_ST_SM1*)pHandle) == SSM_st_Pressed_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_Pressed_SM1_Utils = {IsSSM_st_Pressed_SM1Active};

static int _SCSIM_ClockActive_SSM_st_Pressed_SM1(void* clock) {
return *(kcg_bool*)clock == SSM_st_Pressed_SM1 ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_Released_SM1(void* clock) {
return *(kcg_bool*)clock == SSM_st_Released_SM1 ? 1 : 0;
}
