#include "DetermineRelevantSpeedperCat_mapping.h"
#include "DetermineRelevantSpeedperCat_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_DetermineRelevantSpeedperCat();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** DetermineRelevantSpeedperCat/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_DetermineRelevantSpeedperCat() {
	pSimulator->m_pfnSetRoot(pSimulator, "DetermineRelevantSpeedperCat/", &outputs_ctx, _SCSIM_Get_DetermineRelevantSpeedperCat_Handle);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 8, 8);
	_SCSIM_Mapping_DetermineRelevantSpeedper("DetermineRelevantSpeedperCat_LOOP", "1", 1, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	_SCSIM_Mapping_FindLastSSPSection("FindLastSSPSection", "2", 2, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_cat_t_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_SSP_t_section_t_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_SSP_valid_section_t_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_array_int_8_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_array__403_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_SSP_relevant_target_t_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L52", &_SCSIM_SSP_section_t_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L53", &_SCSIM_SSP_s_section_t_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L55", &_SCSIM_SSP_relevant_target_t_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L61", &_SCSIM_kcg_int_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ValidSpeed", &_SCSIM_kcg_int_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_cat", &_SCSIM_SSP_cat_t_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "CurrentTarget", &_SCSIM_SSP_t_section_t_Utils, 17, valid, 0, 0);
}

void* _SCSIM_Get_DetermineRelevantSpeedperCat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			if (nSize != 1)
				break;
			return &(outputs_ctx.Context_1[pIteratorFilter[0]]);
		case 2:
			return &(outputs_ctx.Context_2);
		case 3:
			return &(outputs_ctx._L2);
		case 4:
			return &(outputs_ctx._L3);
		case 5:
			return &(outputs_ctx._L4);
		case 6:
			return &(outputs_ctx._L8);
		case 7:
			return &(outputs_ctx._L11);
		case 8:
			return &(outputs_ctx._L12);
		case 9:
			return &(outputs_ctx._L29);
		case 10:
			return &(outputs_ctx._L30);
		case 11:
			return &(outputs_ctx._L52);
		case 12:
			return &(outputs_ctx._L53);
		case 13:
			return &(outputs_ctx._L55);
		case 14:
			return &(outputs_ctx._L61);
		case 15:
			return &(outputs_ctx.ValidSpeed);
		case 16:
			return &(inputs_ctx.SSP_cat);
		case 17:
			return &(inputs_ctx.CurrentTarget);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** DetermineRelevantSpeedperCat_LOOP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_DetermineRelevantSpeedper(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_DetermineRelevantSpeedper_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_valid_section_t_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_kcg_bool_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_kcg_int_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L73", &_SCSIM_kcg_bool_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L72", &_SCSIM_SSP_t_section_t_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_SSP_t_section_t_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_SSP_section_t_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_relevant_target_t_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L78", &_SCSIM_kcg_bool_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L74", &_SCSIM_kcg_bool_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L79", &_SCSIM_kcg_bool_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L84", &_SCSIM_SSP_t_section_t_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L102", &_SCSIM_SSP_t_section_t_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L103", &_SCSIM_SSP_valid_section_t_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L104", &_SCSIM_SSP_t_section_t_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L105", &_SCSIM_kcg_bool_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L109", &_SCSIM_SSP_t_section_t_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L110", &_SCSIM_SSP_relevant_target_t_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L111", &_SCSIM_SSP_relevant_target_t_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L117", &_SCSIM_SSP_relevant_target_t_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L118", &_SCSIM_kcg_bool_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L119", &_SCSIM_kcg_int_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TargetCurrentCycle", &_SCSIM_SSP_relevant_target_t_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_DetermineRelevantSpeedper_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_DetermineRelevantSpeedper* pContext = (outC_DetermineRelevantSpeedper*)pInstance;
	switch (nHandleIdent) {
		case 18:
			return &((*pContext)._L1);
		case 19:
			return &((*pContext)._L3);
		case 20:
			return &((*pContext)._L46);
		case 21:
			return &((*pContext)._L47);
		case 22:
			return &((*pContext)._L73);
		case 23:
			return &((*pContext)._L72);
		case 24:
			return &((*pContext)._L5);
		case 25:
			return &((*pContext)._L4);
		case 26:
			return &((*pContext)._L2);
		case 27:
			return &((*pContext)._L78);
		case 28:
			return &((*pContext)._L74);
		case 29:
			return &((*pContext)._L79);
		case 30:
			return &((*pContext)._L84);
		case 31:
			return &((*pContext)._L102);
		case 32:
			return &((*pContext)._L103);
		case 33:
			return &((*pContext)._L104);
		case 34:
			return &((*pContext)._L105);
		case 35:
			return &((*pContext)._L109);
		case 36:
			return &((*pContext)._L110);
		case 37:
			return &((*pContext)._L111);
		case 38:
			return &((*pContext)._L117);
		case 39:
			return &((*pContext)._L118);
		case 40:
			return &((*pContext)._L119);
		case 41:
			return &((*pContext).cont);
		case 42:
			return &((*pContext).TargetCurrentCycle);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FindLastSSPSection/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_FindLastSSPSection(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_FindLastSSPSection_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 8, 8);
	_SCSIM_Mapping_FindLastSSPSection_LOOP("FindLastSSPSection_LOOP", "1", 43, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_cat_t_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_SSP_Mark_ValidSSPsection_Utils, 46, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 47, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_SSP_Mark_ValidSSPsection_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_SSP_section_t_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_SSP_t_section_t_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_bool_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_SSP_valid_section_t_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Index_Last", &_SCSIM_SSP_valid_section_t_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_FindLastSSPSection_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_FindLastSSPSection* pContext = (outC_FindLastSSPSection*)pInstance;
	switch (nHandleIdent) {
		case 43:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 44:
			return &((*pContext)._L1);
		case 45:
			return &((*pContext)._L13);
		case 46:
			return &((*pContext)._L14);
		case 47:
			return &((*pContext)._L16);
		case 48:
			return &((*pContext)._L18);
		case 49:
			return &((*pContext)._L19);
		case 50:
			return &((*pContext)._L21);
		case 51:
			return &((*pContext)._L29);
		case 52:
			return &((*pContext)._L28);
		case 53:
			return &((*pContext)._L30);
		case 54:
			return &((*pContext).Index_Last);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FindLastSSPSection_LOOP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_FindLastSSPSection_LOOP(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_FindLastSSPSection_LOOP_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined FindValidSSP_section*/
	pSimulator->m_pfnPushInstance(pSimulator, "FindValidSSP_section", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "valid", &_SCSIM_kcg_bool_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "i", &_SCSIM_kcg_int_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_section_In", &_SCSIM_SSP_section_t_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_section_t_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 60, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 61, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_SSP_t_section_t_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_SSP_s_section_t_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_SSP_section_t_Utils, 66, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 67, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 68, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_bool_Utils, 69, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 70, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_bool_Utils, 71, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 72, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 73, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 74, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_section_t_Utils, 75, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 76, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 77, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 78, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_SSP_Mark_ValidSSPsection_Utils, 79, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_bool_Utils, 80, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_SSP_Mark_ValidSSPsection_Utils, 81, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 82, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "i_out", &_SCSIM_SSP_Mark_ValidSSPsection_Utils, 83, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_FindLastSSPSection_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_FindLastSSPSection_LOOP* pContext = (outC_FindLastSSPSection_LOOP*)pInstance;
	switch (nHandleIdent) {
		case 55:
			return &((*pContext).valid_1);
		case 56:
			return &((*pContext).i_1);
		case 57:
			return &((*pContext).SSP_section_In_1);
		case 58:
			return &((*pContext)._L1_1);
		case 59:
			return &((*pContext)._L6_1);
		case 60:
			return &((*pContext)._L8_1);
		case 61:
			return &((*pContext)._L9_1);
		case 62:
			return &((*pContext)._L10_1);
		case 63:
			return &((*pContext)._L11_1);
		case 64:
			return &((*pContext)._L12_1);
		case 65:
			return &((*pContext)._L13_1);
		case 66:
			return &((*pContext)._L14_1);
		case 67:
			return &((*pContext)._L19_1);
		case 68:
			return &((*pContext)._L20_1);
		case 69:
			return &((*pContext)._L21_1);
		case 70:
			return &((*pContext)._L22_1);
		case 71:
			return &((*pContext)._L23_1);
		case 72:
			return &((*pContext)._L24_1);
		case 73:
			return &((*pContext)._L25_1);
		case 74:
			return &((*pContext)._L26_1);
		case 75:
			return &((*pContext)._L1);
		case 76:
			return &((*pContext)._L16);
		case 77:
			return &((*pContext)._L17);
		case 78:
			return &((*pContext)._L18);
		case 79:
			return &((*pContext)._L19);
		case 80:
			return &((*pContext)._L20);
		case 81:
			return &((*pContext)._L22);
		case 82:
			return &((*pContext).cont);
		case 83:
			return &((*pContext).i_out);
		default:
			break;
	}
	return 0;
}

