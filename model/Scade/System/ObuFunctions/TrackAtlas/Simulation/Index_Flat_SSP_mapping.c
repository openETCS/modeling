#include "Index_Flat_SSP_mapping.h"
#include "Index_Flat_SSP_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Index_Flat_SSP();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Index_Flat_SSP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Index_Flat_SSP() {
	pSimulator->m_pfnSetRoot(pSimulator, "Index_Flat_SSP/", &outputs_ctx, _SCSIM_Get_Index_Flat_SSP_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_SSP_list_t_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_SSP_indexed_list_t_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_index_t_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_flat_indexed", &_SCSIM_SSP_indexed_list_t_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_element", &_SCSIM_SSP_list_t_Utils, 5, valid, 0, 0);
}

void* _SCSIM_Get_Index_Flat_SSP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L5);
		case 2:
			return &(outputs_ctx._L4);
		case 3:
			return &(outputs_ctx._L3);
		case 4:
			return &(outputs_ctx.SSP_flat_indexed);
		case 5:
			return &(inputs_ctx.SSP_element);
		default:
			break;
	}
	return 0;
}

