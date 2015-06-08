#include "C_P005_unflatten_sections_TM_lib_internal_mapping.h"
#include "C_P005_unflatten_sections_TM_lib_internal_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_C_P005_unflatten_sections_TM_lib_internal();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** TM_lib_internal::C_P005_unflatten_sections/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_unflatten_sections_TM_lib_internal() {
	pSimulator->m_pfnSetRoot(pSimulator, "TM_lib_internal::C_P005_unflatten_sections/", &outputs_ctx, _SCSIM_Get_C_P005_unflatten_sections_TM_lib_internal_Handle);
	pSimulator->m_pfnPushIterator(pSimulator, "mapwi", 32, 32);
	_SCSIM_Mapping_C_P005_us_array_TM_lib_internal("TM_lib_internal::C_P005_us_array", "1", 1, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_sections_array_flat_TM_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_int_32_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_int_224_32_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_array__543_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "sections", &_SCSIM_P005_OBU_sectionlist_TM_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "n_iter", &_SCSIM_kcg_int_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "flat", &_SCSIM_P005_sections_array_flat_TM_Utils, 11, valid, 0, 0);
}

void* _SCSIM_Get_C_P005_unflatten_sections_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
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
			return &(outputs_ctx._L5);
		case 5:
			return &(outputs_ctx._L6);
		case 6:
			return &(outputs_ctx._L7);
		case 7:
			return &(outputs_ctx._L9);
		case 8:
			return &(outputs_ctx._L10);
		case 9:
			return &(outputs_ctx.sections);
		case 10:
			return &(inputs_ctx.n_iter);
		case 11:
			return &(inputs_ctx.flat);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::C_P005_us_array/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_us_array_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P005_us_array_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "1", 12, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "2", 13, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "3", 14, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "4", 15, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "5", 16, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "6", 17, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "7", 18, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_D_LINK_TM_conversions("TM_conversions::CAST_Int_to_D_LINK", "1", 19, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_NID_C_TM_conversions("TM_conversions::CAST_Int_to_NID_C", "1", 20, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_NID_BG_TM_conversions("TM_conversions::CAST_Int_to_NID_BG", "1", 21, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions("TM_conversions::CAST_Int_to_Q_NEWCOUNTRY", "1", 22, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_LINKORIENTATION_TM_conversions("TM_conversions::CAST_Int_to_Q_LINKORIENTATION", "1", 23, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_LINKREACTION_TM_conversions("TM_conversions::CAST_Int_to_Q_LINKREACTION", "1", 24, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_LOCACC_TM_conversions("TM_conversions::CAST_Int_to_Q_LOCACC", "1", 25, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_sections_array_flat_TM_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_P005_OBU_section_TM_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_int_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_D_LINK_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_NID_C_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_NID_BG_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_Q_NEWCOUNTRY_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_Q_LINKORIENTATION_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_Q_LINKREACTION_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_Q_LOCACC_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 46, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_bool_Utils, 47, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "sections", &_SCSIM_P005_OBU_section_TM_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_us_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_us_array_TM_lib_internal* pContext = (outC_C_P005_us_array_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 12:
			return &((*pContext)._6_Context_1);
		case 13:
			return &((*pContext).Context_2);
		case 14:
			return &((*pContext).Context_3);
		case 15:
			return &((*pContext).Context_4);
		case 16:
			return &((*pContext).Context_5);
		case 17:
			return &((*pContext).Context_6);
		case 18:
			return &((*pContext).Context_7);
		case 19:
			return &((*pContext)._7_Context_1);
		case 20:
			return &((*pContext)._5_Context_1);
		case 21:
			return &((*pContext)._4_Context_1);
		case 22:
			return &((*pContext)._3_Context_1);
		case 23:
			return &((*pContext)._2_Context_1);
		case 24:
			return &((*pContext)._1_Context_1);
		case 25:
			return &((*pContext).Context_1);
		case 26:
			return &((*pContext)._L1);
		case 27:
			return &((*pContext)._L3);
		case 28:
			return &((*pContext)._L4);
		case 29:
			return &((*pContext)._L5);
		case 30:
			return &((*pContext)._L15);
		case 31:
			return &((*pContext)._L16);
		case 32:
			return &((*pContext)._L18);
		case 33:
			return &((*pContext)._L19);
		case 34:
			return &((*pContext)._L20);
		case 35:
			return &((*pContext)._L21);
		case 36:
			return &((*pContext)._L22);
		case 37:
			return &((*pContext)._L23);
		case 38:
			return &((*pContext)._L24);
		case 39:
			return &((*pContext)._L25);
		case 40:
			return &((*pContext)._L26);
		case 41:
			return &((*pContext)._L27);
		case 42:
			return &((*pContext)._L28);
		case 43:
			return &((*pContext)._L29);
		case 44:
			return &((*pContext)._L30);
		case 45:
			return &((*pContext)._L31);
		case 46:
			return &((*pContext)._L32);
		case 47:
			return &((*pContext)._L33);
		case 48:
			return &((*pContext).cont);
		case 49:
			return &((*pContext).sections);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::C_P005_extract_el_section/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P005_extract_el_section_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_P005_sections_array_flat_TM_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "element", &_SCSIM_kcg_int_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_extract_el_section_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_extract_el_section_TM_lib_internal* pContext = (outC_C_P005_extract_el_section_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 50:
			return &((*pContext)._L1);
		case 51:
			return &((*pContext)._L2);
		case 52:
			return &((*pContext)._L3);
		case 53:
			return &((*pContext)._L5);
		case 54:
			return &((*pContext)._L6);
		case 55:
			return &((*pContext).element);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::CAST_Int_to_D_LINK/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_D_LINK_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_D_LINK_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 60, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "d_link", &_SCSIM_D_LINK_Utils, 61, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_D_LINK_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_D_LINK_TM_conversions* pContext = (outC_CAST_Int_to_D_LINK_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 56:
			return &((*pContext)._L1);
		case 57:
			return &((*pContext)._L9);
		case 58:
			return &((*pContext)._L8);
		case 59:
			return &((*pContext)._L7);
		case 60:
			return &((*pContext)._L6);
		case 61:
			return &((*pContext).d_link);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::CAST_Int_to_NID_C/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_NID_C_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_NID_C_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 66, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_c", &_SCSIM_NID_C_Utils, 67, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_NID_C_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_NID_C_TM_conversions* pContext = (outC_CAST_Int_to_NID_C_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 62:
			return &((*pContext)._L1);
		case 63:
			return &((*pContext)._L9);
		case 64:
			return &((*pContext)._L8);
		case 65:
			return &((*pContext)._L10);
		case 66:
			return &((*pContext)._L11);
		case 67:
			return &((*pContext).nid_c);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::CAST_Int_to_NID_BG/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_NID_BG_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_NID_BG_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 68, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 69, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 70, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 71, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 72, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_bg", &_SCSIM_NID_BG_Utils, 73, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_NID_BG_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_NID_BG_TM_conversions* pContext = (outC_CAST_Int_to_NID_BG_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 68:
			return &((*pContext)._L1);
		case 69:
			return &((*pContext)._L9);
		case 70:
			return &((*pContext)._L8);
		case 71:
			return &((*pContext)._L10);
		case 72:
			return &((*pContext)._L11);
		case 73:
			return &((*pContext).nid_bg);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_74_Utils, 74);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_75_Utils, 75);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 76, valid, 75, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_NEWCOUNTRY_Utils, 77, valid, 75, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_78_Utils, 78);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_NEWCOUNTRY_Utils, 79, valid, 78, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 80, valid, 78, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_81_Utils, 81);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_NEWCOUNTRY_Utils, 82, valid, 81, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 83, valid, 81, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 84, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_newcountry_in", &_SCSIM_kcg_int_Utils, 85, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 86, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 87, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_newcountry", &_SCSIM_Q_NEWCOUNTRY_Utils, 88, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions* pContext = (outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 74:
			return &((*pContext).IfBlock1_clock);
		case 75:
			return &((*pContext).else_clock_IfBlock1);
		case 76:
			return &((*pContext)._L2_IfBlock1);
		case 77:
			return &((*pContext)._L1_IfBlock1);
		case 78:
			return &((*pContext).else_clock_IfBlock1);
		case 79:
			return &((*pContext)._L3_IfBlock1);
		case 80:
			return &((*pContext)._L51_IfBlock1);
		case 81:
			return &((*pContext).IfBlock1_clock);
		case 82:
			return &((*pContext)._L4_IfBlock1);
		case 83:
			return &((*pContext)._L5_IfBlock1);
		case 84:
			return &((*pContext).error);
		case 85:
			return &((*pContext).q_newcountry_in);
		case 86:
			return &((*pContext)._L13);
		case 87:
			return &((*pContext)._L12);
		case 88:
			return &((*pContext).q_newcountry);
		default:
			break;
	}
	return 0;
}

static int Is75Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_75_Utils = {Is75Active};

static int Is78Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_78_Utils = {Is78Active};

static int Is74Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_74_Utils = {Is74Active};

static int Is81Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_81_Utils = {Is81Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_LINKORIENTATION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_LINKORIENTATION_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_89_Utils, 89);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_90_Utils, 90);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 91, valid, 90, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKORIENTATION_Utils, 92, valid, 90, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_93_Utils, 93);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_LINKORIENTATION_Utils, 94, valid, 93, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 95, valid, 93, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_96_Utils, 96);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_LINKORIENTATION_Utils, 97, valid, 96, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 98, valid, 96, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 99, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_linkorientation_in", &_SCSIM_kcg_int_Utils, 100, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 101, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 102, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_linkorientation", &_SCSIM_Q_LINKORIENTATION_Utils, 103, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_LINKORIENTATION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions* pContext = (outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 89:
			return &((*pContext).IfBlock1_clock);
		case 90:
			return &((*pContext).else_clock_IfBlock1);
		case 91:
			return &((*pContext)._L2_IfBlock1);
		case 92:
			return &((*pContext)._L1_IfBlock1);
		case 93:
			return &((*pContext).else_clock_IfBlock1);
		case 94:
			return &((*pContext)._L3_IfBlock1);
		case 95:
			return &((*pContext)._L51_IfBlock1);
		case 96:
			return &((*pContext).IfBlock1_clock);
		case 97:
			return &((*pContext)._L4_IfBlock1);
		case 98:
			return &((*pContext)._L5_IfBlock1);
		case 99:
			return &((*pContext).error);
		case 100:
			return &((*pContext).q_linkorientation_in);
		case 101:
			return &((*pContext)._L13);
		case 102:
			return &((*pContext)._L12);
		case 103:
			return &((*pContext).q_linkorientation);
		default:
			break;
	}
	return 0;
}

static int Is90Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_90_Utils = {Is90Active};

static int Is93Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_93_Utils = {Is93Active};

static int Is89Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_89_Utils = {Is89Active};

static int Is96Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_96_Utils = {Is96Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_LINKREACTION/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_LINKREACTION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_LINKREACTION_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_104_Utils, 104);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_105_Utils, 105);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_106_Utils, 106);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 107, valid, 106, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKREACTION_Utils, 108, valid, 106, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_109_Utils, 109);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKREACTION_Utils, 110, valid, 109, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 111, valid, 109, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_112_Utils, 112);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKREACTION_Utils, 113, valid, 112, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 114, valid, 112, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_115_Utils, 115);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_LINKREACTION_Utils, 116, valid, 115, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 117, valid, 115, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "q_linkreaction_in", &_SCSIM_kcg_int_Utils, 118, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 119, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 120, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 121, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_linkreaction", &_SCSIM_Q_LINKREACTION_Utils, 122, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_LINKREACTION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_LINKREACTION_TM_conversions* pContext = (outC_CAST_Int_to_Q_LINKREACTION_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 104:
			return &((*pContext).IfBlock1_clock);
		case 105:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 106:
			return &((*pContext).else_clock_IfBlock1);
		case 107:
			return &((*pContext)._L25_IfBlock1);
		case 108:
			return &((*pContext)._L14_IfBlock1);
		case 109:
			return &((*pContext).else_clock_IfBlock1);
		case 110:
			return &((*pContext)._L13_IfBlock1);
		case 111:
			return &((*pContext)._L4_IfBlock1);
		case 112:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 113:
			return &((*pContext)._L1_IfBlock1);
		case 114:
			return &((*pContext)._L32_IfBlock1);
		case 115:
			return &((*pContext).IfBlock1_clock);
		case 116:
			return &((*pContext)._L2_IfBlock1);
		case 117:
			return &((*pContext)._L3_IfBlock1);
		case 118:
			return &((*pContext).q_linkreaction_in);
		case 119:
			return &((*pContext).error);
		case 120:
			return &((*pContext)._L2);
		case 121:
			return &((*pContext)._L4);
		case 122:
			return &((*pContext).q_linkreaction);
		default:
			break;
	}
	return 0;
}

static int Is106Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_106_Utils = {Is106Active};

static int Is109Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_109_Utils = {Is109Active};

static int Is105Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_105_Utils = {Is105Active};

static int Is112Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_112_Utils = {Is112Active};

static int Is104Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_104_Utils = {Is104Active};

static int Is115Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_115_Utils = {Is115Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_LOCACC/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_LOCACC_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_LOCACC_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 123, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 124, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 125, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 126, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 127, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_locacc", &_SCSIM_Q_LOCACC_Utils, 128, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_LOCACC_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_LOCACC_TM_conversions* pContext = (outC_CAST_Int_to_Q_LOCACC_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 123:
			return &((*pContext)._L1);
		case 124:
			return &((*pContext)._L9);
		case 125:
			return &((*pContext)._L8);
		case 126:
			return &((*pContext)._L10);
		case 127:
			return &((*pContext)._L11);
		case 128:
			return &((*pContext).q_locacc);
		default:
			break;
	}
	return 0;
}

static int _SCSIM_ClockActive_kcg_true(void* clock) {
return *(kcg_bool*)clock == kcg_true ? 1 : 0;
}
static int _SCSIM_ClockActive_kcg_false(void* clock) {
return *(kcg_bool*)clock == kcg_false ? 1 : 0;
}
