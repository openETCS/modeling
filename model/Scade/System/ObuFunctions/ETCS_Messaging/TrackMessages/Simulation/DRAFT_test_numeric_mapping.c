#include "DRAFT_test_numeric_mapping.h"
#include "DRAFT_test_numeric_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_DRAFT_test_numeric();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** DRAFT_test_numeric/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_DRAFT_test_numeric() {
	pSimulator->m_pfnSetRoot(pSimulator, "DRAFT_test_numeric/", &outputs_ctx, _SCSIM_Get_DRAFT_test_numeric_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "DIV", &_SCSIM_kcg_int_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "MOD", &_SCSIM_kcg_int_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "In", &_SCSIM_kcg_int_Utils, 10, valid, 0, 0);
}

void* _SCSIM_Get_DRAFT_test_numeric_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L1);
		case 2:
			return &(outputs_ctx._L2);
		case 3:
			return &(outputs_ctx._L3);
		case 4:
			return &(outputs_ctx._L4);
		case 5:
			return &(outputs_ctx._L6);
		case 6:
			return &(outputs_ctx._L5);
		case 7:
			return &(outputs_ctx._L7);
		case 8:
			return &(outputs_ctx.DIV);
		case 9:
			return &(outputs_ctx.MOD);
		case 10:
			return &(inputs_ctx.In);
		default:
			break;
	}
	return 0;
}

