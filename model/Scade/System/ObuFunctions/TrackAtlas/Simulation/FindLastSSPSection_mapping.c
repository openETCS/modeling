#include "FindLastSSPSection_mapping.h"
#include "FindLastSSPSection_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_FindLastSSPSection();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** FindLastSSPSection/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_FindLastSSPSection() {
	pSimulator->m_pfnSetRoot(pSimulator, "FindLastSSPSection/", &outputs_ctx, _SCSIM_Get_FindLastSSPSection_Handle);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 8, 8);
	_SCSIM_Mapping_FindLastSSPSection_LOOP("FindLastSSPSection_LOOP", "1", 1, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_cat_t_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_SSP_Mark_ValidSSPsection_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_SSP_Mark_ValidSSPsection_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_SSP_section_t_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_SSP_t_section_t_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_bool_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_SSP_valid_section_t_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Index_Last", &_SCSIM_SSP_valid_section_t_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_Reverse_In", &_SCSIM_SSP_cat_t_Utils, 13, valid, 0, 0);
}

void* _SCSIM_Get_FindLastSSPSection_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			if (nSize != 1)
				break;
			return &(outputs_ctx.Context_1[pIteratorFilter[0]]);
		case 2:
			return &(outputs_ctx._L1);
		case 3:
			return &(outputs_ctx._L13);
		case 4:
			return &(outputs_ctx._L14);
		case 5:
			return &(outputs_ctx._L16);
		case 6:
			return &(outputs_ctx._L18);
		case 7:
			return &(outputs_ctx._L19);
		case 8:
			return &(outputs_ctx._L21);
		case 9:
			return &(outputs_ctx._L29);
		case 10:
			return &(outputs_ctx._L28);
		case 11:
			return &(outputs_ctx._L30);
		case 12:
			return &(outputs_ctx.Index_Last);
		case 13:
			return &(inputs_ctx.SSP_Reverse_In);
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
	pSimulator->m_pfnAddOutput(pSimulator, "valid", &_SCSIM_kcg_bool_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "i", &_SCSIM_kcg_int_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_section_In", &_SCSIM_SSP_section_t_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_section_t_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_SSP_t_section_t_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_SSP_s_section_t_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_SSP_section_t_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_bool_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_bool_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_section_t_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_SSP_Mark_ValidSSPsection_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_bool_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_SSP_Mark_ValidSSPsection_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "i_out", &_SCSIM_SSP_Mark_ValidSSPsection_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_FindLastSSPSection_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_FindLastSSPSection_LOOP* pContext = (outC_FindLastSSPSection_LOOP*)pInstance;
	switch (nHandleIdent) {
		case 14:
			return &((*pContext).valid_1);
		case 15:
			return &((*pContext).i_1);
		case 16:
			return &((*pContext).SSP_section_In_1);
		case 17:
			return &((*pContext)._L1_1);
		case 18:
			return &((*pContext)._L6_1);
		case 19:
			return &((*pContext)._L8_1);
		case 20:
			return &((*pContext)._L9_1);
		case 21:
			return &((*pContext)._L10_1);
		case 22:
			return &((*pContext)._L11_1);
		case 23:
			return &((*pContext)._L12_1);
		case 24:
			return &((*pContext)._L13_1);
		case 25:
			return &((*pContext)._L14_1);
		case 26:
			return &((*pContext)._L19_1);
		case 27:
			return &((*pContext)._L20_1);
		case 28:
			return &((*pContext)._L21_1);
		case 29:
			return &((*pContext)._L22_1);
		case 30:
			return &((*pContext)._L23_1);
		case 31:
			return &((*pContext)._L24_1);
		case 32:
			return &((*pContext)._L25_1);
		case 33:
			return &((*pContext)._L26_1);
		case 34:
			return &((*pContext)._L1);
		case 35:
			return &((*pContext)._L16);
		case 36:
			return &((*pContext)._L17);
		case 37:
			return &((*pContext)._L18);
		case 38:
			return &((*pContext)._L19);
		case 39:
			return &((*pContext)._L20);
		case 40:
			return &((*pContext)._L22);
		case 41:
			return &((*pContext).cont);
		case 42:
			return &((*pContext).i_out);
		default:
			break;
	}
	return 0;
}

