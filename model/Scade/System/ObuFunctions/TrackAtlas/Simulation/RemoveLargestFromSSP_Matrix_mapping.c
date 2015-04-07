#include "RemoveLargestFromSSP_Matrix_mapping.h"
#include "RemoveLargestFromSSP_Matrix_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_RemoveLargestFromSSP_Matrix();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** RemoveLargestFromSSP_Matrix/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RemoveLargestFromSSP_Matrix() {
	pSimulator->m_pfnSetRoot(pSimulator, "RemoveLargestFromSSP_Matrix/", &outputs_ctx, _SCSIM_Get_RemoveLargestFromSSP_Matrix_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_matrix_t_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_indexed_matrix_element_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_matrix_t_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_matrix_out", &_SCSIM_SSP_matrix_t_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_matrix_in", &_SCSIM_SSP_matrix_t_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Largest_Target", &_SCSIM_SSP_indexed_matrix_element_Utils, 9, valid, 0, 0);
}

void* _SCSIM_Get_RemoveLargestFromSSP_Matrix_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L1);
		case 2:
			return &(outputs_ctx._L2);
		case 3:
			return &(outputs_ctx._L3);
		case 4:
			return &(outputs_ctx._L10);
		case 5:
			return &(outputs_ctx._L17);
		case 6:
			return &(outputs_ctx._L18);
		case 7:
			return &(outputs_ctx.SSP_matrix_out);
		case 8:
			return &(inputs_ctx.SSP_matrix_in);
		case 9:
			return &(inputs_ctx.Largest_Target);
		default:
			break;
	}
	return 0;
}

