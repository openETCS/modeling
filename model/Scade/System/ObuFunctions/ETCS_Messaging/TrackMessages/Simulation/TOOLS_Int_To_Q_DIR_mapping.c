#include "TOOLS_Int_To_Q_DIR_mapping.h"
#include "TOOLS_Int_To_Q_DIR_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_TOOLS_Int_To_Q_DIR();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** TOOLS_Int_To_Q_DIR/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_TOOLS_Int_To_Q_DIR() {
	pSimulator->m_pfnSetRoot(pSimulator, "TOOLS_Int_To_Q_DIR/", &outputs_ctx, _SCSIM_Get_TOOLS_Int_To_Q_DIR_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_DIR_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_Q_DIR_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_Q_DIR_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_Q_DIR_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_Q_DIR_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "QDIR", &_SCSIM_Q_DIR_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Q_DIR_as_sInt", &_SCSIM_kcg_int_Utils, 12, valid, 0, 0);
}

void* _SCSIM_Get_TOOLS_Int_To_Q_DIR_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L2);
		case 2:
			return &(outputs_ctx._L3);
		case 3:
			return &(outputs_ctx._L4);
		case 4:
			return &(outputs_ctx._L5);
		case 5:
			return &(outputs_ctx._L6);
		case 6:
			return &(outputs_ctx._L7);
		case 7:
			return &(outputs_ctx._L8);
		case 8:
			return &(outputs_ctx._L9);
		case 9:
			return &(outputs_ctx._L10);
		case 10:
			return &(outputs_ctx._L11);
		case 11:
			return &(outputs_ctx.QDIR);
		case 12:
			return &(inputs_ctx.Q_DIR_as_sInt);
		default:
			break;
	}
	return 0;
}

