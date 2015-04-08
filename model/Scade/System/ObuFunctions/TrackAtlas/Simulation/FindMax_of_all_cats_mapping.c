#include "FindMax_of_all_cats_mapping.h"
#include "FindMax_of_all_cats_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_FindMax_of_all_cats();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** FindMax_of_all_cats/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_FindMax_of_all_cats() {
	pSimulator->m_pfnSetRoot(pSimulator, "FindMax_of_all_cats/", &outputs_ctx, _SCSIM_Get_FindMax_of_all_cats_Handle);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 11, 11);
	_SCSIM_Mapping_FindMax_of_all_cats_LOOP("FindMax_of_all_cats_LOOP", "1", 1, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 11, 11);
	_SCSIM_Mapping_ConvertIndexedElements("ConvertIndexedElements", "1", 2, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_indexed_targets_list_t_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_SSP_indexed_matrix_element_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_SSP_indexed_matrix_element_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L61", &_SCSIM_array__195_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_largest_target", &_SCSIM_SSP_indexed_matrix_element_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_indexed_targets_per_cat", &_SCSIM_SSP_indexed_targets_list_t_Utils, 10, valid, 0, 0);
}

void* _SCSIM_Get_FindMax_of_all_cats_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			if (nSize != 1)
				break;
			return &(outputs_ctx._1_Context_1[pIteratorFilter[0]]);
		case 2:
			if (nSize != 1)
				break;
			return &(outputs_ctx.Context_1[pIteratorFilter[0]]);
		case 3:
			return &(outputs_ctx._L1);
		case 4:
			return &(outputs_ctx._L25);
		case 5:
			return &(outputs_ctx._L27);
		case 6:
			return &(outputs_ctx._L26);
		case 7:
			return &(outputs_ctx._L24);
		case 8:
			return &(outputs_ctx._L61);
		case 9:
			return &(outputs_ctx.SSP_largest_target);
		case 10:
			return &(inputs_ctx.SSP_indexed_targets_per_cat);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FindMax_of_all_cats_LOOP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_FindMax_of_all_cats_LOOP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_FindMax_of_all_cats_LOOP_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_SSP_indexed_matrix_element_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_SSP_indexed_matrix_element_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_SSP_target_t_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_SSP_target_t_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_bool_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_SSP_indexed_matrix_element_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_SSP_indexed_matrix_element_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_SSP_indexed_matrix_element_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_bool_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_bool_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_bool_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_SSP_indexed_matrix_element_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Max", &_SCSIM_SSP_indexed_matrix_element_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_FindMax_of_all_cats_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_FindMax_of_all_cats_LOOP* pContext = (outC_FindMax_of_all_cats_LOOP*)pInstance;
	switch (nHandleIdent) {
		case 11:
			return &((*pContext)._L13);
		case 12:
			return &((*pContext)._L14);
		case 13:
			return &((*pContext)._L15);
		case 14:
			return &((*pContext)._L20);
		case 15:
			return &((*pContext)._L21);
		case 16:
			return &((*pContext)._L24);
		case 17:
			return &((*pContext)._L23);
		case 18:
			return &((*pContext)._L25);
		case 19:
			return &((*pContext)._L26);
		case 20:
			return &((*pContext)._L27);
		case 21:
			return &((*pContext)._L28);
		case 22:
			return &((*pContext)._L29);
		case 23:
			return &((*pContext)._L30);
		case 24:
			return &((*pContext)._L32);
		case 25:
			return &((*pContext).cont);
		case 26:
			return &((*pContext).Max);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** ConvertIndexedElements/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ConvertIndexedElements(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ConvertIndexedElements_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_indexed_trgt_t_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_SSP_target_t_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_SSP_indexed_matrix_element_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_indexed_matrix_element_list", &_SCSIM_SSP_indexed_matrix_element_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ConvertIndexedElements_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ConvertIndexedElements* pContext = (outC_ConvertIndexedElements*)pInstance;
	switch (nHandleIdent) {
		case 27:
			return &((*pContext)._L1);
		case 28:
			return &((*pContext)._L4);
		case 29:
			return &((*pContext)._L3);
		case 30:
			return &((*pContext)._L7);
		case 31:
			return &((*pContext)._L8);
		case 32:
			return &((*pContext).SSP_indexed_matrix_element_list);
		default:
			break;
	}
	return 0;
}

