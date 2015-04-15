#include "BuildTargetList_mapping.h"
#include "BuildTargetList_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_BuildTargetList();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** BuildTargetList/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_BuildTargetList() {
	pSimulator->m_pfnSetRoot(pSimulator, "BuildTargetList/", &outputs_ctx, _SCSIM_Get_BuildTargetList_Handle);
	pSimulator->m_pfnPushIterator(pSimulator, "mapfold", 33, 33);
	_SCSIM_Mapping_BuildTargetList_LOOP("BuildTargetList_LOOP", "1", 1, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	_SCSIM_Mapping_Reverse_SSP_t_matrix("Reverse_SSP_t_matrix", "1", 2, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_array__360_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_t_list_t_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_t_matrix_t_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_SSP_t_matrix_t_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_SSP_t_matrix_t_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_list_out", &_SCSIM_SSP_t_list_t_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_Matrix_In", &_SCSIM_SSP_t_matrix_t_Utils, 9, valid, 0, 0);
}

void* _SCSIM_Get_BuildTargetList_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			if (nSize != 1)
				break;
			return &(outputs_ctx._1_Context_1[pIteratorFilter[0]]);
		case 2:
			return &(outputs_ctx.Context_1);
		case 3:
			return &(outputs_ctx._L1);
		case 4:
			return &(outputs_ctx._L2);
		case 5:
			return &(outputs_ctx._L3);
		case 6:
			return &(outputs_ctx._L4);
		case 7:
			return &(outputs_ctx._L5);
		case 8:
			return &(outputs_ctx.SSP_list_out);
		case 9:
			return &(inputs_ctx.SSP_Matrix_In);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** BuildTargetList_LOOP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_BuildTargetList_LOOP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_BuildTargetList_LOOP_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Find_First_in_each_t_SSP_cat("Find_First_in_each_t_SSP_cat", "1", 10, 0, 0);
	_SCSIM_Mapping_FindMax_of_all_t_cats("FindMax_of_all_t_cats", "1", 11, 0, 0);
	_SCSIM_Mapping_RemoveLargestFromSSP_t_matrix("RemoveLargestFromSSP_t_matrix", "1", 12, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_t_matrix_t_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_t_indexed_targets_list_t_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_SSP_t_matrix_t_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_Matrix_out", &_SCSIM_SSP_t_matrix_t_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_list_out", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_BuildTargetList_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_BuildTargetList_LOOP* pContext = (outC_BuildTargetList_LOOP*)pInstance;
	switch (nHandleIdent) {
		case 10:
			return &((*pContext).Context_1);
		case 11:
			return &((*pContext)._1_Context_1);
		case 12:
			return &((*pContext)._2_Context_1);
		case 13:
			return &((*pContext)._L1);
		case 14:
			return &((*pContext)._L2);
		case 15:
			return &((*pContext)._L3);
		case 16:
			return &((*pContext)._L4);
		case 17:
			return &((*pContext)._L5);
		case 18:
			return &((*pContext).SSP_Matrix_out);
		case 19:
			return &((*pContext).SSP_list_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Reverse_SSP_t_matrix/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Reverse_SSP_t_matrix(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Reverse_SSP_t_matrix_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 11, 11);
	_SCSIM_Mapping_Reverse_SSP_t_cat("Reverse_SSP_t_cat", "1", 20, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_t_matrix_t_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_array_int_8_11_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Reverse_SSP_matrix_out", &_SCSIM_SSP_t_matrix_t_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Reverse_SSP_t_matrix_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Reverse_SSP_t_matrix* pContext = (outC_Reverse_SSP_t_matrix*)pInstance;
	switch (nHandleIdent) {
		case 20:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 21:
			return &((*pContext)._L1);
		case 22:
			return &((*pContext)._L3);
		case 23:
			return &((*pContext).Reverse_SSP_matrix_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Find_First_in_each_t_SSP_cat/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Find_First_in_each_t_SSP_cat(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Find_First_in_each_t_SSP_cat_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 11, 11);
	_SCSIM_Mapping_Find_First_in_SSP_t_cat("Find_First_in_SSP_t_cat", "1", 24, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_array__357_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_t_matrix_t_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_indexed_targets_per_cat_out", &_SCSIM_SSP_t_indexed_targets_list_t_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Find_First_in_each_t_SSP_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Find_First_in_each_t_SSP_cat* pContext = (outC_Find_First_in_each_t_SSP_cat*)pInstance;
	switch (nHandleIdent) {
		case 24:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 25:
			return &((*pContext)._L1);
		case 26:
			return &((*pContext)._L3);
		case 27:
			return &((*pContext).SSP_indexed_targets_per_cat_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FindMax_of_all_t_cats/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_FindMax_of_all_t_cats(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_FindMax_of_all_t_cats_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 11, 11);
	_SCSIM_Mapping_FindMax_of_all_t_cats_LOOP("FindMax_of_all_t_cats_LOOP", "1", 28, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 11, 11);
	_SCSIM_Mapping_ConvertIndexedElements("ConvertIndexedElements", "1", 29, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_t_indexed_targets_list_t_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L61", &_SCSIM_array__363_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_largest_target", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_FindMax_of_all_t_cats_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_FindMax_of_all_t_cats* pContext = (outC_FindMax_of_all_t_cats*)pInstance;
	switch (nHandleIdent) {
		case 28:
			if (nSize != 1)
				break;
			return &((*pContext)._1_Context_1[pIteratorFilter[0]]);
		case 29:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 30:
			return &((*pContext)._L1);
		case 31:
			return &((*pContext)._L25);
		case 32:
			return &((*pContext)._L27);
		case 33:
			return &((*pContext)._L26);
		case 34:
			return &((*pContext)._L24);
		case 35:
			return &((*pContext)._L61);
		case 36:
			return &((*pContext).SSP_largest_target);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** RemoveLargestFromSSP_t_matrix/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RemoveLargestFromSSP_t_matrix(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_RemoveLargestFromSSP_t_matrix_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_t_matrix_t_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_t_matrix_t_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_matrix_out", &_SCSIM_SSP_t_matrix_t_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RemoveLargestFromSSP_t_matrix_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RemoveLargestFromSSP_t_matrix* pContext = (outC_RemoveLargestFromSSP_t_matrix*)pInstance;
	switch (nHandleIdent) {
		case 37:
			return &((*pContext)._L1);
		case 38:
			return &((*pContext)._L2);
		case 39:
			return &((*pContext)._L3);
		case 40:
			return &((*pContext)._L10);
		case 41:
			return &((*pContext)._L17);
		case 42:
			return &((*pContext)._L18);
		case 43:
			return &((*pContext).SSP_matrix_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Reverse_SSP_t_cat/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Reverse_SSP_t_cat(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Reverse_SSP_t_cat_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_t_cat_t_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_t_cat_t_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_cat_out", &_SCSIM_SSP_t_cat_t_Utils, 46, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Reverse_SSP_t_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Reverse_SSP_t_cat* pContext = (outC_Reverse_SSP_t_cat*)pInstance;
	switch (nHandleIdent) {
		case 44:
			return &((*pContext)._L1);
		case 45:
			return &((*pContext)._L2);
		case 46:
			return &((*pContext).SSP_cat_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Find_First_in_SSP_t_cat/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Find_First_in_SSP_t_cat(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Find_First_in_SSP_t_cat_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 8, 8);
	_SCSIM_Mapping_Find_First_in_SSP_t_cat_LOOP("Find_First_in_SSP_t_cat_LOOP", "1", 47, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_t_cat_t_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_SSP_target_t_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_SSP_t_indexed_trgt_t_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_indexed_loc", &_SCSIM_SSP_t_indexed_trgt_t_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Find_First_in_SSP_t_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Find_First_in_SSP_t_cat* pContext = (outC_Find_First_in_SSP_t_cat*)pInstance;
	switch (nHandleIdent) {
		case 47:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 48:
			return &((*pContext)._L1);
		case 49:
			return &((*pContext)._L2);
		case 50:
			return &((*pContext)._L3);
		case 51:
			return &((*pContext)._L4);
		case 52:
			return &((*pContext)._L5);
		case 53:
			return &((*pContext)._L6);
		case 54:
			return &((*pContext)._L7);
		case 55:
			return &((*pContext)._L8);
		case 56:
			return &((*pContext).SSP_indexed_loc);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FindMax_of_all_t_cats_LOOP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_FindMax_of_all_t_cats_LOOP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_FindMax_of_all_t_cats_LOOP_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_SSP_target_t_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_SSP_target_t_Utils, 60, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_bool_Utils, 61, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_bool_Utils, 66, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 67, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_bool_Utils, 68, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_bool_Utils, 69, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 70, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 71, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Max", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 72, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_FindMax_of_all_t_cats_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_FindMax_of_all_t_cats_LOOP* pContext = (outC_FindMax_of_all_t_cats_LOOP*)pInstance;
	switch (nHandleIdent) {
		case 57:
			return &((*pContext)._L13);
		case 58:
			return &((*pContext)._L14);
		case 59:
			return &((*pContext)._L15);
		case 60:
			return &((*pContext)._L20);
		case 61:
			return &((*pContext)._L21);
		case 62:
			return &((*pContext)._L24);
		case 63:
			return &((*pContext)._L23);
		case 64:
			return &((*pContext)._L25);
		case 65:
			return &((*pContext)._L26);
		case 66:
			return &((*pContext)._L27);
		case 67:
			return &((*pContext)._L28);
		case 68:
			return &((*pContext)._L29);
		case 69:
			return &((*pContext)._L30);
		case 70:
			return &((*pContext)._L32);
		case 71:
			return &((*pContext).cont);
		case 72:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_t_indexed_trgt_t_Utils, 73, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_SSP_target_t_Utils, 74, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 75, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 76, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 77, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_indexed_matrix_element_list", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 78, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ConvertIndexedElements_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ConvertIndexedElements* pContext = (outC_ConvertIndexedElements*)pInstance;
	switch (nHandleIdent) {
		case 73:
			return &((*pContext)._L1);
		case 74:
			return &((*pContext)._L4);
		case 75:
			return &((*pContext)._L3);
		case 76:
			return &((*pContext)._L7);
		case 77:
			return &((*pContext)._L8);
		case 78:
			return &((*pContext).SSP_indexed_matrix_element_list);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Find_First_in_SSP_t_cat_LOOP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Find_First_in_SSP_t_cat_LOOP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Find_First_in_SSP_t_cat_LOOP_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 79, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_target_t_Utils, 80, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_t_section_t_Utils, 81, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 82, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 83, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 84, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 85, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Last_Loc", &_SCSIM_SSP_target_t_Utils, 86, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Find_First_in_SSP_t_cat_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Find_First_in_SSP_t_cat_LOOP* pContext = (outC_Find_First_in_SSP_t_cat_LOOP*)pInstance;
	switch (nHandleIdent) {
		case 79:
			return &((*pContext)._L1);
		case 80:
			return &((*pContext)._L2);
		case 81:
			return &((*pContext)._L3);
		case 82:
			return &((*pContext)._L4);
		case 83:
			return &((*pContext)._L5);
		case 84:
			return &((*pContext)._L6);
		case 85:
			return &((*pContext).cont);
		case 86:
			return &((*pContext).Last_Loc);
		default:
			break;
	}
	return 0;
}

