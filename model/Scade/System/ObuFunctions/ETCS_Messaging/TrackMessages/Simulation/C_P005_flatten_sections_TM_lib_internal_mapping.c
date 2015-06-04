#include "C_P005_flatten_sections_TM_lib_internal_mapping.h"
#include "C_P005_flatten_sections_TM_lib_internal_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_C_P005_flatten_sections_TM_lib_internal();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** TM_lib_internal::C_P005_flatten_sections/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_flatten_sections_TM_lib_internal() {
	pSimulator->m_pfnSetRoot(pSimulator, "TM_lib_internal::C_P005_flatten_sections/", &outputs_ctx, _SCSIM_Get_C_P005_flatten_sections_TM_lib_internal_Handle);
	pSimulator->m_pfnPushIterator(pSimulator, "foldi", 224, 224);
	_SCSIM_Mapping_C_P005_fs_flatten_array_TM_lib_internal("TM_lib_internal::C_P005_fs_flatten_array", "2", 1, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 32, 32);
	_SCSIM_Mapping_C_P005_fs_struct_to_array_TM_lib_internal("TM_lib_internal::C_P005_fs_struct_to_array", "2", 2, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L76", &_SCSIM_P005_sections_array_flat_TM_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L75", &_SCSIM_P005_OBU_sectionlist_T_TM_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L74", &_SCSIM_array_int_7_32_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L78", &_SCSIM_P005_sections_array_flat_TM_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L80", &_SCSIM_array_int_7_32_224_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Flattened", &_SCSIM_P005_sections_array_flat_TM_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "MergedSections", &_SCSIM_P005_OBU_sectionlist_T_TM_Utils, 9, valid, 0, 0);
}

void* _SCSIM_Get_C_P005_flatten_sections_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			if (nSize != 1)
				break;
			return &(outputs_ctx._1_Context_2[pIteratorFilter[0]]);
		case 2:
			if (nSize != 1)
				break;
			return &(outputs_ctx.Context_2[pIteratorFilter[0]]);
		case 3:
			return &(outputs_ctx._L76);
		case 4:
			return &(outputs_ctx._L75);
		case 5:
			return &(outputs_ctx._L74);
		case 6:
			return &(outputs_ctx._L78);
		case 7:
			return &(outputs_ctx._L80);
		case 8:
			return &(outputs_ctx.Flattened);
		case 9:
			return &(inputs_ctx.MergedSections);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::C_P005_fs_flatten_array/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_fs_flatten_array_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P005_fs_flatten_array_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_sections_array_flat_TM_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_P005_sections_array_flat_TM_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_P005_OBU_sectionlist_array_T_TM_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L154", &_SCSIM_kcg_int_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "flat", &_SCSIM_P005_sections_array_flat_TM_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_fs_flatten_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_fs_flatten_array_TM_lib_internal* pContext = (outC_C_P005_fs_flatten_array_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 10:
			return &((*pContext)._L1);
		case 11:
			return &((*pContext)._L3);
		case 12:
			return &((*pContext)._L5);
		case 13:
			return &((*pContext)._L6);
		case 14:
			return &((*pContext)._L7);
		case 15:
			return &((*pContext)._L8);
		case 16:
			return &((*pContext)._L2);
		case 17:
			return &((*pContext)._L10);
		case 18:
			return &((*pContext)._L154);
		case 19:
			return &((*pContext).flat);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::C_P005_fs_struct_to_array/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_fs_struct_to_array_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P005_fs_struct_to_array_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_trackside_section_TM_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array_int_7_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "section_arrays", &_SCSIM__1_P005_trackside_section_array_TM_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_fs_struct_to_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_fs_struct_to_array_TM_lib_internal* pContext = (outC_C_P005_fs_struct_to_array_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 20:
			return &((*pContext)._L1);
		case 21:
			return &((*pContext)._L2);
		case 22:
			return &((*pContext)._L9);
		case 23:
			return &((*pContext)._L8);
		case 24:
			return &((*pContext)._L7);
		case 25:
			return &((*pContext)._L6);
		case 26:
			return &((*pContext)._L5);
		case 27:
			return &((*pContext)._L4);
		case 28:
			return &((*pContext)._L3);
		case 29:
			return &((*pContext).section_arrays);
		default:
			break;
	}
	return 0;
}

