#include "Reverse_SSP_matrix_mapping.h"
#include "Reverse_SSP_matrix_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Reverse_SSP_matrix();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Reverse_SSP_matrix/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Reverse_SSP_matrix() {
	pSimulator->m_pfnSetRoot(pSimulator, "Reverse_SSP_matrix/", &outputs_ctx, _SCSIM_Get_Reverse_SSP_matrix_Handle);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 11, 11);
	_SCSIM_Mapping_Reverse_SSP_cat("Reverse_SSP_cat", "1", 1, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_matrix_t_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_array_int_3_11_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Reverse_SSP_matrix_out", &_SCSIM_SSP_matrix_t_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_matrix_in", &_SCSIM_SSP_matrix_t_Utils, 5, valid, 0, 0);
}

void* _SCSIM_Get_Reverse_SSP_matrix_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			if (nSize != 1)
				break;
			return &(outputs_ctx.Context_1[pIteratorFilter[0]]);
		case 2:
			return &(outputs_ctx._L1);
		case 3:
			return &(outputs_ctx._L3);
		case 4:
			return &(outputs_ctx.Reverse_SSP_matrix_out);
		case 5:
			return &(inputs_ctx.SSP_matrix_in);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Reverse_SSP_cat/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Reverse_SSP_cat(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Reverse_SSP_cat_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_cat_t_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_cat_t_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_cat_out", &_SCSIM_SSP_cat_t_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Reverse_SSP_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Reverse_SSP_cat* pContext = (outC_Reverse_SSP_cat*)pInstance;
	switch (nHandleIdent) {
		case 6:
			return &((*pContext)._L1);
		case 7:
			return &((*pContext)._L2);
		case 8:
			return &((*pContext).SSP_cat_out);
		default:
			break;
	}
	return 0;
}

