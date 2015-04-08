#include "Test_SSP_mapping.h"
#include "Test_SSP_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Test_SSP();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Test_SSP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Test_SSP() {
	pSimulator->m_pfnSetRoot(pSimulator, "Test_SSP/", &outputs_ctx, _SCSIM_Get_Test_SSP_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Output1", &_SCSIM_kcg_int_Utils, 3, valid, 0, 0);
}

void* _SCSIM_Get_Test_SSP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L5);
		case 2:
			return &(outputs_ctx._L6);
		case 3:
			return &(outputs_ctx.Output1);
		default:
			break;
	}
	return 0;
}

