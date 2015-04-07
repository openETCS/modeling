#include "Split_And_Reverse_SSP_matrix_mapping.h"
#include "Split_And_Reverse_SSP_matrix_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Split_And_Reverse_SSP_matrix();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Split_And_Reverse_SSP_matrix/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Split_And_Reverse_SSP_matrix() {
	pSimulator->m_pfnSetRoot(pSimulator, "Split_And_Reverse_SSP_matrix/", &outputs_ctx, _SCSIM_Get_Split_And_Reverse_SSP_matrix_Handle);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 11, 11);
	_SCSIM_Mapping_SplitAndReverseSSP_LOOP1("SplitAndReverseSSP_LOOP1", "1", 1, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_matrix_t_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_array_int_8_11_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L51", &_SCSIM_array__150_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_reverse_t_matrix_out", &_SCSIM_SSP_t_matrix_t_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_reverse_matrix_out", &_SCSIM_SSP_matrix_t_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_matrix_in", &_SCSIM_SSP_matrix_t_Utils, 7, valid, 0, 0);
}

void* _SCSIM_Get_Split_And_Reverse_SSP_matrix_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			if (nSize != 1)
				break;
			return &(outputs_ctx.Context_1[pIteratorFilter[0]]);
		case 2:
			return &(outputs_ctx._L1);
		case 3:
			return &(outputs_ctx._L27);
		case 4:
			return &(outputs_ctx._L51);
		case 5:
			return &(outputs_ctx.SSP_reverse_t_matrix_out);
		case 6:
			return &(outputs_ctx.SSP_reverse_matrix_out);
		case 7:
			return &(inputs_ctx.SSP_matrix_in);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** SplitAndReverseSSP_LOOP1/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SplitAndReverseSSP_LOOP1(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SplitAndReverseSSP_LOOP1_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 8, 8);
	_SCSIM_Mapping_SplitAndReverseSSP_LOOP2("SplitAndReverseSSP_LOOP2", "1", 8, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_cat_t_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_SSP_cat_t_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_array_int_8_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_reverse_t_cat_out", &_SCSIM_SSP_t_cat_t_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_reverse_cat_out", &_SCSIM_SSP_cat_t_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SplitAndReverseSSP_LOOP1_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SplitAndReverseSSP_LOOP1* pContext = (outC_SplitAndReverseSSP_LOOP1*)pInstance;
	switch (nHandleIdent) {
		case 8:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 9:
			return &((*pContext)._L1);
		case 10:
			return &((*pContext)._L18);
		case 11:
			return &((*pContext)._L35);
		case 12:
			return &((*pContext).SSP_reverse_t_cat_out);
		case 13:
			return &((*pContext).SSP_reverse_cat_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** SplitAndReverseSSP_LOOP2/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SplitAndReverseSSP_LOOP2(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SplitAndReverseSSP_LOOP2_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_SSP_section_t_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_SSP_t_section_t_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SSP_t_section_out", &_SCSIM_SSP_t_section_t_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SplitAndReverseSSP_LOOP2_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SplitAndReverseSSP_LOOP2* pContext = (outC_SplitAndReverseSSP_LOOP2*)pInstance;
	switch (nHandleIdent) {
		case 14:
			return &((*pContext)._L1);
		case 15:
			return &((*pContext)._L6);
		case 16:
			return &((*pContext).SSP_t_section_out);
		default:
			break;
	}
	return 0;
}

