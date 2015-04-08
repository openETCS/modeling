#include "Reverse_SSP_cat_mapping.h"
#include "Reverse_SSP_cat_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Reverse_SSP_cat();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Reverse_SSP_cat/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Reverse_SSP_cat() {
	pSimulator->m_pfnSetRoot(pSimulator, "Reverse_SSP_cat/", &outputs_ctx, _SCSIM_Get_Reverse_SSP_cat_Handle);
	_SCSIM_Mapping_FillUP_SSP_cat("FillUP_SSP_cat", "2", 1, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_cat_t_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_cat_t_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_SSP_cat_t_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_cat_out", &_SCSIM_SSP_cat_t_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_cat_in", &_SCSIM_SSP_cat_t_Utils, 6, valid, 0, 0);
}

void* _SCSIM_Get_Reverse_SSP_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.Context_2);
		case 2:
			return &(outputs_ctx._L1);
		case 3:
			return &(outputs_ctx._L2);
		case 4:
			return &(outputs_ctx._L4);
		case 5:
			return &(outputs_ctx.SSP_cat_out);
		case 6:
			return &(inputs_ctx.SSP_cat_in);
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
	_SCSIM_Mapping_FillUP_SSP_cat_LOOP("FillUP_SSP_cat_LOOP", "1", 7, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_cat_t_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_SSP_cat_t_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_SSP_cat_t_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_cat_out", &_SCSIM_SSP_cat_t_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_FillUP_SSP_cat_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_FillUP_SSP_cat* pContext = (outC_FillUP_SSP_cat*)pInstance;
	switch (nHandleIdent) {
		case 7:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 8:
			return &((*pContext)._L1);
		case 9:
			return &((*pContext)._L4);
		case 10:
			return &((*pContext)._L9);
		case 11:
			return &((*pContext)._L10);
		case 12:
			return &((*pContext)._L11);
		case 13:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_SSP_cat_t_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_SSP_section_t_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_SSP_s_section_t_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_SSP_t_section_t_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_kcg_int_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_kcg_bool_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_kcg_int_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_SSP_section_t_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_SSP_section_t_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_SSP_section_t_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_SSP_cat_t_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_SSP_cat_t_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_kcg_bool_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_kcg_int_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_kcg_int_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_cat_out", &_SCSIM_SSP_cat_t_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_FillUP_SSP_cat_LOOP_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_FillUP_SSP_cat_LOOP* pContext = (outC_FillUP_SSP_cat_LOOP*)pInstance;
	switch (nHandleIdent) {
		case 14:
			return &((*pContext)._L24);
		case 15:
			return &((*pContext)._L25);
		case 16:
			return &((*pContext)._L26);
		case 17:
			return &((*pContext)._L34);
		case 18:
			return &((*pContext)._L33);
		case 19:
			return &((*pContext)._L38);
		case 20:
			return &((*pContext)._L39);
		case 21:
			return &((*pContext)._L40);
		case 22:
			return &((*pContext)._L41);
		case 23:
			return &((*pContext)._L42);
		case 24:
			return &((*pContext)._L43);
		case 25:
			return &((*pContext)._L44);
		case 26:
			return &((*pContext)._L45);
		case 27:
			return &((*pContext)._L46);
		case 28:
			return &((*pContext)._L47);
		case 29:
			return &((*pContext)._L48);
		case 30:
			return &((*pContext).cont);
		case 31:
			return &((*pContext).SSP_cat_out);
		default:
			break;
	}
	return 0;
}

