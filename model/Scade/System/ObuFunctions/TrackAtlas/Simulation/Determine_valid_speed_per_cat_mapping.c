#include "Determine_valid_speed_per_cat_mapping.h"
#include "Determine_valid_speed_per_cat_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Determine_valid_speed_per_cat();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Determine_valid_speed_per_cat/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Determine_valid_speed_per_cat() {
	pSimulator->m_pfnSetRoot(pSimulator, "Determine_valid_speed_per_cat/", &outputs_ctx, _SCSIM_Get_Determine_valid_speed_per_cat_Handle);
	pSimulator->m_pfnPushIterator(pSimulator, "foldw", 3, 3);
	_SCSIM_Mapping_Determine_valid_speed_per("Determine_valid_speed_per_cat_LOOP", "1", 1, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	_SCSIM_Mapping_Reverse_SSP_cat("Reverse_SSP_cat", "1", 2, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_cat_t_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_SSP_t_section_t_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_bool_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_array_int_3_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_SSP_section_t_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_SSP_section_t_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_SSP_s_section_t_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_SSP_cat_t_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ValidSpeed", &_SCSIM_SSP_s_section_t_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_cat", &_SCSIM_SSP_cat_t_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "CurrentTarget", &_SCSIM_SSP_t_section_t_Utils, 14, valid, 0, 0);
}

void* _SCSIM_Get_Determine_valid_speed_per_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
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
			return &(outputs_ctx._L13);
		case 5:
			return &(outputs_ctx._L14);
		case 6:
			return &(outputs_ctx._L15);
		case 7:
			return &(outputs_ctx._L17);
		case 8:
			return &(outputs_ctx._L18);
		case 9:
			return &(outputs_ctx._L21);
		case 10:
			return &(outputs_ctx._L26);
		case 11:
			return &(outputs_ctx._L27);
		case 12:
			return &(outputs_ctx.ValidSpeed);
		case 13:
			return &(inputs_ctx.SSP_cat);
		case 14:
			return &(inputs_ctx.CurrentTarget);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Determine_valid_speed_per_cat_LOOP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Determine_valid_speed_per(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Determine_valid_speed_per_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_SSP_section_t_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_SSP_t_section_t_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_SSP_section_t_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_SSP_t_section_t_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_SSP_t_section_t_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_kcg_bool_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L49", &_SCSIM_kcg_bool_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_kcg_bool_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L55", &_SCSIM_kcg_bool_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L56", &_SCSIM_SSP_section_t_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L57", &_SCSIM_SSP_section_t_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L58", &_SCSIM_SSP_section_t_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ValidSection", &_SCSIM_SSP_section_t_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Determine_valid_speed_per_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Determine_valid_speed_per* pContext = (outC_Determine_valid_speed_per*)pInstance;
	switch (nHandleIdent) {
		case 15:
			return &((*pContext)._L39);
		case 16:
			return &((*pContext)._L40);
		case 17:
			return &((*pContext)._L41);
		case 18:
			return &((*pContext)._L42);
		case 19:
			return &((*pContext)._L47);
		case 20:
			return &((*pContext)._L48);
		case 21:
			return &((*pContext)._L49);
		case 22:
			return &((*pContext)._L50);
		case 23:
			return &((*pContext)._L55);
		case 24:
			return &((*pContext)._L56);
		case 25:
			return &((*pContext)._L57);
		case 26:
			return &((*pContext)._L58);
		case 27:
			return &((*pContext).cont);
		case 28:
			return &((*pContext).ValidSection);
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
	_SCSIM_Mapping_FillUP_SSP_cat("FillUP_SSP_cat", "2", 29, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_cat_t_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_cat_t_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_SSP_cat_t_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_cat_out", &_SCSIM_SSP_cat_t_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Reverse_SSP_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Reverse_SSP_cat* pContext = (outC_Reverse_SSP_cat*)pInstance;
	switch (nHandleIdent) {
		case 29:
			return &((*pContext).Context_2);
		case 30:
			return &((*pContext)._L1);
		case 31:
			return &((*pContext)._L2);
		case 32:
			return &((*pContext)._L4);
		case 33:
			return &((*pContext).SSP_cat_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FillUP_SSP_cat/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_FillUP_SSP_cat(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_FillUP_SSP_cat_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 3, 3);
	_SCSIM_Mapping_FillUP_SSP_cat_LOOP("FillUP_SSP_cat_LOOP", "1", 34, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_cat_t_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_SSP_cat_t_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_SSP_cat_t_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_cat_out", &_SCSIM_SSP_cat_t_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_FillUP_SSP_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_FillUP_SSP_cat* pContext = (outC_FillUP_SSP_cat*)pInstance;
	switch (nHandleIdent) {
		case 34:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 35:
			return &((*pContext)._L1);
		case 36:
			return &((*pContext)._L4);
		case 37:
			return &((*pContext)._L9);
		case 38:
			return &((*pContext)._L10);
		case 39:
			return &((*pContext)._L11);
		case 40:
			return &((*pContext).SSP_cat_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FillUP_SSP_cat_LOOP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_FillUP_SSP_cat_LOOP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_FillUP_SSP_cat_LOOP_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_SSP_cat_t_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_SSP_section_t_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_SSP_s_section_t_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_SSP_t_section_t_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_kcg_int_Utils, 46, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_kcg_bool_Utils, 47, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_kcg_int_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_SSP_section_t_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_SSP_section_t_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_SSP_section_t_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_SSP_cat_t_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_SSP_cat_t_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_kcg_bool_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_kcg_int_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_kcg_int_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_cat_out", &_SCSIM_SSP_cat_t_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_FillUP_SSP_cat_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_FillUP_SSP_cat_LOOP* pContext = (outC_FillUP_SSP_cat_LOOP*)pInstance;
	switch (nHandleIdent) {
		case 41:
			return &((*pContext)._L24);
		case 42:
			return &((*pContext)._L25);
		case 43:
			return &((*pContext)._L26);
		case 44:
			return &((*pContext)._L34);
		case 45:
			return &((*pContext)._L33);
		case 46:
			return &((*pContext)._L38);
		case 47:
			return &((*pContext)._L39);
		case 48:
			return &((*pContext)._L40);
		case 49:
			return &((*pContext)._L41);
		case 50:
			return &((*pContext)._L42);
		case 51:
			return &((*pContext)._L43);
		case 52:
			return &((*pContext)._L44);
		case 53:
			return &((*pContext)._L45);
		case 54:
			return &((*pContext)._L46);
		case 55:
			return &((*pContext)._L47);
		case 56:
			return &((*pContext)._L48);
		case 57:
			return &((*pContext).cont);
		case 58:
			return &((*pContext).SSP_cat_out);
		default:
			break;
	}
	return 0;
}

