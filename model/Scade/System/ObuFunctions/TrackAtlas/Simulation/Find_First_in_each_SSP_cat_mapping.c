#include "Find_First_in_each_SSP_cat_mapping.h"
#include "Find_First_in_each_SSP_cat_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Find_First_in_each_SSP_cat();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Find_First_in_each_SSP_cat/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Find_First_in_each_SSP_cat() {
	pSimulator->m_pfnSetRoot(pSimulator, "Find_First_in_each_SSP_cat/", &outputs_ctx, _SCSIM_Get_Find_First_in_each_SSP_cat_Handle);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 11, 11);
	_SCSIM_Mapping_Find_First_in_SSP_cat("Find_First_in_SSP_cat", "1", 1, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_array__164_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_matrix_t_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_indexed_targets_per_cat_out", &_SCSIM_SSP_indexed_targets_list_t_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_matrix_in", &_SCSIM_SSP_matrix_t_Utils, 5, valid, 0, 0);
}

void* _SCSIM_Get_Find_First_in_each_SSP_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
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
			return &(outputs_ctx.SSP_indexed_targets_per_cat_out);
		case 5:
			return &(inputs_ctx.SSP_matrix_in);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Find_First_in_SSP_cat/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Find_First_in_SSP_cat(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Find_First_in_SSP_cat_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 3, 3);
	_SCSIM_Mapping_Find_First_in_SSP_cat_LOOP("Find_First_in_SSP_cat_LOOP", "1", 6, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_cat_t_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_SSP_target_t_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_SSP_indexed_trgt_t_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_indexed_loc", &_SCSIM_SSP_indexed_trgt_t_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Find_First_in_SSP_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Find_First_in_SSP_cat* pContext = (outC_Find_First_in_SSP_cat*)pInstance;
	switch (nHandleIdent) {
		case 6:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 7:
			return &((*pContext)._L1);
		case 8:
			return &((*pContext)._L2);
		case 9:
			return &((*pContext)._L3);
		case 10:
			return &((*pContext)._L4);
		case 11:
			return &((*pContext)._L5);
		case 12:
			return &((*pContext)._L6);
		case 13:
			return &((*pContext).SSP_indexed_loc);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Find_First_in_SSP_cat_LOOP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Find_First_in_SSP_cat_LOOP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Find_First_in_SSP_cat_LOOP_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_target_t_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_section_t_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Last_Loc", &_SCSIM_SSP_target_t_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Find_First_in_SSP_cat_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Find_First_in_SSP_cat_LOOP* pContext = (outC_Find_First_in_SSP_cat_LOOP*)pInstance;
	switch (nHandleIdent) {
		case 14:
			return &((*pContext)._L1);
		case 15:
			return &((*pContext)._L2);
		case 16:
			return &((*pContext)._L3);
		case 17:
			return &((*pContext)._L4);
		case 18:
			return &((*pContext)._L5);
		case 19:
			return &((*pContext)._L6);
		case 20:
			return &((*pContext).cont);
		case 21:
			return &((*pContext).Last_Loc);
		default:
			break;
	}
	return 0;
}

