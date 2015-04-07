#include "Determine_MRS_mapping.h"
#include "Determine_MRS_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Determine_MRS();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Determine_MRS/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Determine_MRS() {
	pSimulator->m_pfnSetRoot(pSimulator, "Determine_MRS/", &outputs_ctx, _SCSIM_Get_Determine_MRS_Handle);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 11, 11);
	_SCSIM_Mapping_DetermineRelevantSpeedperCat("DetermineRelevantSpeedperCat", "1", 1, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "foldi", 11, 11);
	_SCSIM_Mapping_Determine_Lowest_Speed("Determine_Lowest_Speed", "1", 2, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_t_section_t_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_SSP_matrix_t_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_int_11_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_SSP_s_section_t_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_array_int_11_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "MRS", &_SCSIM_SSP_s_section_t_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "CurrentTarget", &_SCSIM_SSP_t_section_t_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_matrix", &_SCSIM_SSP_matrix_t_Utils, 11, valid, 0, 0);
}

void* _SCSIM_Get_Determine_MRS_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			if (nSize != 1)
				break;
			return &(outputs_ctx.Context_1[pIteratorFilter[0]]);
		case 2:
			if (nSize != 1)
				break;
			return &(outputs_ctx._1_Context_1[pIteratorFilter[0]]);
		case 3:
			return &(outputs_ctx._L3);
		case 4:
			return &(outputs_ctx._L4);
		case 5:
			return &(outputs_ctx._L5);
		case 6:
			return &(outputs_ctx._L8);
		case 7:
			return &(outputs_ctx._L9);
		case 8:
			return &(outputs_ctx._L10);
		case 9:
			return &(outputs_ctx.MRS);
		case 10:
			return &(inputs_ctx.CurrentTarget);
		case 11:
			return &(inputs_ctx.SSP_matrix);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** DetermineRelevantSpeedperCat/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_DetermineRelevantSpeedperCat(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_DetermineRelevantSpeedperCat_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 8, 8);
	_SCSIM_Mapping_DetermineRelevantSpeedper("DetermineRelevantSpeedperCat_LOOP", "1", 12, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	_SCSIM_Mapping_FindLastSSPSection("FindLastSSPSection", "2", 13, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_cat_t_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_SSP_t_section_t_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_SSP_valid_section_t_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_array_int_8_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_array__521_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_SSP_relevant_target_t_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L52", &_SCSIM_SSP_section_t_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L53", &_SCSIM_SSP_s_section_t_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L63", &_SCSIM_SSP_relevant_target_t_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L64", &_SCSIM_kcg_int_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ValidSpeed", &_SCSIM_SSP_s_section_t_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_DetermineRelevantSpeedperCat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_DetermineRelevantSpeedperCat* pContext = (outC_DetermineRelevantSpeedperCat*)pInstance;
	switch (nHandleIdent) {
		case 12:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 13:
			return &((*pContext).Context_2);
		case 14:
			return &((*pContext)._L2);
		case 15:
			return &((*pContext)._L3);
		case 16:
			return &((*pContext)._L4);
		case 17:
			return &((*pContext)._L8);
		case 18:
			return &((*pContext)._L11);
		case 19:
			return &((*pContext)._L12);
		case 20:
			return &((*pContext)._L29);
		case 21:
			return &((*pContext)._L30);
		case 22:
			return &((*pContext)._L52);
		case 23:
			return &((*pContext)._L53);
		case 24:
			return &((*pContext)._L63);
		case 25:
			return &((*pContext)._L64);
		case 26:
			return &((*pContext).ValidSpeed);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Determine_Lowest_Speed/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Determine_Lowest_Speed(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Determine_Lowest_Speed_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined math::Min*/
	pSimulator->m_pfnPushInstance(pSimulator, "math::Min", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Mi_Output", &_SCSIM_kcg_int_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "I1", &_SCSIM_kcg_int_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "I2", &_SCSIM_kcg_int_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_s_section_t_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_s_section_t_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_s_section_t_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_SSP_s_section_t_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "MRSpeed", &_SCSIM_SSP_s_section_t_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Determine_Lowest_Speed_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Determine_Lowest_Speed* pContext = (outC_Determine_Lowest_Speed*)pInstance;
	switch (nHandleIdent) {
		case 27:
			return &((*pContext).Mi_Output_1);
		case 28:
			return &((*pContext).I1_1);
		case 29:
			return &((*pContext).I2_1);
		case 30:
			return &((*pContext)._L21_1);
		case 31:
			return &((*pContext)._L22_1);
		case 32:
			return &((*pContext)._L24_1);
		case 33:
			return &((*pContext)._L25_1);
		case 34:
			return &((*pContext)._L1);
		case 35:
			return &((*pContext)._L2);
		case 36:
			return &((*pContext)._L3);
		case 37:
			return &((*pContext)._L4);
		case 38:
			return &((*pContext)._L5);
		case 39:
			return &((*pContext)._L6);
		case 40:
			return &((*pContext)._L7);
		case 41:
			return &((*pContext).MRSpeed);
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L120", &_SCSIM_kcg_int_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L124", &_SCSIM_SSP_t_section_t_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L140", &_SCSIM_kcg_bool_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L141", &_SCSIM_SSP_valid_section_t_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L142", &_SCSIM_SSP_t_section_t_Utils, 46, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L143", &_SCSIM_kcg_int_Utils, 47, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L144", &_SCSIM_kcg_int_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L145", &_SCSIM_kcg_bool_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L146", &_SCSIM_SSP_t_section_t_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L147", &_SCSIM_kcg_bool_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L148", &_SCSIM_SSP_section_t_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L149", &_SCSIM_SSP_t_section_t_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L150", &_SCSIM_SSP_relevant_target_t_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L151", &_SCSIM_kcg_bool_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L152", &_SCSIM_kcg_int_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L153", &_SCSIM_kcg_int_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L154", &_SCSIM_kcg_bool_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L157", &_SCSIM_kcg_int_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L158", &_SCSIM_kcg_int_Utils, 60, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L159", &_SCSIM_SSP_relevant_target_t_Utils, 61, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L160", &_SCSIM_SSP_t_section_t_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L162", &_SCSIM_SSP_t_section_t_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L161", &_SCSIM_kcg_bool_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L163", &_SCSIM_kcg_bool_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L165", &_SCSIM_SSP_relevant_target_t_Utils, 66, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L166", &_SCSIM_SSP_relevant_target_t_Utils, 67, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L167", &_SCSIM_SSP_section_t_Utils, 68, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L168", &_SCSIM_SSP_t_section_t_Utils, 69, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L169", &_SCSIM_kcg_bool_Utils, 70, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 71, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TargetCurrentCycle", &_SCSIM_SSP_relevant_target_t_Utils, 72, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_DetermineRelevantSpeedper_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_DetermineRelevantSpeedper* pContext = (outC_DetermineRelevantSpeedper*)pInstance;
	switch (nHandleIdent) {
		case 42:
			return &((*pContext)._L120);
		case 43:
			return &((*pContext)._L124);
		case 44:
			return &((*pContext)._L140);
		case 45:
			return &((*pContext)._L141);
		case 46:
			return &((*pContext)._L142);
		case 47:
			return &((*pContext)._L143);
		case 48:
			return &((*pContext)._L144);
		case 49:
			return &((*pContext)._L145);
		case 50:
			return &((*pContext)._L146);
		case 51:
			return &((*pContext)._L147);
		case 52:
			return &((*pContext)._L148);
		case 53:
			return &((*pContext)._L149);
		case 54:
			return &((*pContext)._L150);
		case 55:
			return &((*pContext)._L151);
		case 56:
			return &((*pContext)._L152);
		case 57:
			return &((*pContext)._L153);
		case 58:
			return &((*pContext)._L154);
		case 59:
			return &((*pContext)._L157);
		case 60:
			return &((*pContext)._L158);
		case 61:
			return &((*pContext)._L159);
		case 62:
			return &((*pContext)._L160);
		case 63:
			return &((*pContext)._L162);
		case 64:
			return &((*pContext)._L161);
		case 65:
			return &((*pContext)._L163);
		case 66:
			return &((*pContext)._L165);
		case 67:
			return &((*pContext)._L166);
		case 68:
			return &((*pContext)._L167);
		case 69:
			return &((*pContext)._L168);
		case 70:
			return &((*pContext)._L169);
		case 71:
			return &((*pContext).cont);
		case 72:
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
	_SCSIM_Mapping_FindLastSSPSection_LOOP("FindLastSSPSection_LOOP", "1", 73, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_cat_t_Utils, 74, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 75, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_SSP_Mark_ValidSSPsection_Utils, 76, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 77, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_SSP_Mark_ValidSSPsection_Utils, 78, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_SSP_section_t_Utils, 79, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_SSP_t_section_t_Utils, 80, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_bool_Utils, 81, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 82, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_SSP_valid_section_t_Utils, 83, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Index_Last", &_SCSIM_SSP_valid_section_t_Utils, 84, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_FindLastSSPSection_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_FindLastSSPSection* pContext = (outC_FindLastSSPSection*)pInstance;
	switch (nHandleIdent) {
		case 73:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 74:
			return &((*pContext)._L1);
		case 75:
			return &((*pContext)._L13);
		case 76:
			return &((*pContext)._L14);
		case 77:
			return &((*pContext)._L16);
		case 78:
			return &((*pContext)._L18);
		case 79:
			return &((*pContext)._L19);
		case 80:
			return &((*pContext)._L21);
		case 81:
			return &((*pContext)._L29);
		case 82:
			return &((*pContext)._L28);
		case 83:
			return &((*pContext)._L30);
		case 84:
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
	pSimulator->m_pfnAddOutput(pSimulator, "valid", &_SCSIM_kcg_bool_Utils, 85, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "i", &_SCSIM_kcg_int_Utils, 86, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_section_In", &_SCSIM_SSP_section_t_Utils, 87, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_section_t_Utils, 88, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 89, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 90, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 91, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 92, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 93, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_SSP_t_section_t_Utils, 94, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_SSP_s_section_t_Utils, 95, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_SSP_section_t_Utils, 96, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 97, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 98, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_bool_Utils, 99, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 100, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_bool_Utils, 101, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 102, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 103, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 104, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_section_t_Utils, 105, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 106, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 107, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 108, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_SSP_Mark_ValidSSPsection_Utils, 109, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_bool_Utils, 110, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_SSP_Mark_ValidSSPsection_Utils, 111, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 112, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "i_out", &_SCSIM_SSP_Mark_ValidSSPsection_Utils, 113, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_FindLastSSPSection_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_FindLastSSPSection_LOOP* pContext = (outC_FindLastSSPSection_LOOP*)pInstance;
	switch (nHandleIdent) {
		case 85:
			return &((*pContext).valid_1);
		case 86:
			return &((*pContext).i_1);
		case 87:
			return &((*pContext).SSP_section_In_1);
		case 88:
			return &((*pContext)._L1_1);
		case 89:
			return &((*pContext)._L6_1);
		case 90:
			return &((*pContext)._L8_1);
		case 91:
			return &((*pContext)._L9_1);
		case 92:
			return &((*pContext)._L10_1);
		case 93:
			return &((*pContext)._L11_1);
		case 94:
			return &((*pContext)._L12_1);
		case 95:
			return &((*pContext)._L13_1);
		case 96:
			return &((*pContext)._L14_1);
		case 97:
			return &((*pContext)._L19_1);
		case 98:
			return &((*pContext)._L20_1);
		case 99:
			return &((*pContext)._L21_1);
		case 100:
			return &((*pContext)._L22_1);
		case 101:
			return &((*pContext)._L23_1);
		case 102:
			return &((*pContext)._L24_1);
		case 103:
			return &((*pContext)._L25_1);
		case 104:
			return &((*pContext)._L26_1);
		case 105:
			return &((*pContext)._L1);
		case 106:
			return &((*pContext)._L16);
		case 107:
			return &((*pContext)._L17);
		case 108:
			return &((*pContext)._L18);
		case 109:
			return &((*pContext)._L19);
		case 110:
			return &((*pContext)._L20);
		case 111:
			return &((*pContext)._L22);
		case 112:
			return &((*pContext).cont);
		case 113:
			return &((*pContext).i_out);
		default:
			break;
	}
	return 0;
}

