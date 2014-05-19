#include "ciao_mapping.h"
#include "ciao_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_ciao();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** ciao/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ciao() {
	pSimulator->m_pfnSetRoot(pSimulator, "ciao/", &outputs_ctx, _SCSIM_Get_ciao_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Output1", &_SCSIM_kcg_int_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Input1", &_SCSIM_kcg_int_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Input2", &_SCSIM_kcg_int_Utils, 7, valid, 0, 0);
}

void* _SCSIM_Get_ciao_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L1);
		case 2:
			return &(outputs_ctx._L2);
		case 3:
			return &(outputs_ctx._L3);
		case 4:
			return &(outputs_ctx._L5);
		case 5:
			return &(outputs_ctx.Output1);
		case 6:
			return &(inputs_ctx.Input1);
		case 7:
			return &(inputs_ctx.Input2);
		default:
			break;
	}
	return 0;
}

