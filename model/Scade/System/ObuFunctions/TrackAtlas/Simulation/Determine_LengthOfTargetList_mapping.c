#include "Determine_LengthOfTargetList_mapping.h"
#include "Determine_LengthOfTargetList_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Determine_LengthOfTargetList();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Determine_LengthOfTargetList/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Determine_LengthOfTargetList() {
	pSimulator->m_pfnSetRoot(pSimulator, "Determine_LengthOfTargetList/", &outputs_ctx, _SCSIM_Get_Determine_LengthOfTargetList_Handle);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 88, 88);
	_SCSIM_Mapping_Determine_LengthOfTargetL("Determine_LengthOfTargetList_LOOP", "1", 1, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_SSP_t_list_t_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L179", &_SCSIM_SSP_t_list_t_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L180", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L181", &_SCSIM_kcg_bool_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L182", &_SCSIM_kcg_int_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L183", &_SCSIM_kcg_int_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "length", &_SCSIM_kcg_int_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SSP_t_list_in", &_SCSIM_SSP_t_list_t_Utils, 9, valid, 0, 0);
}

void* _SCSIM_Get_Determine_LengthOfTargetList_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			if (nSize != 1)
				break;
			return &(outputs_ctx.Context_1[pIteratorFilter[0]]);
		case 2:
			return &(outputs_ctx._L2);
		case 3:
			return &(outputs_ctx._L179);
		case 4:
			return &(outputs_ctx._L180);
		case 5:
			return &(outputs_ctx._L181);
		case 6:
			return &(outputs_ctx._L182);
		case 7:
			return &(outputs_ctx._L183);
		case 8:
			return &(outputs_ctx.length);
		case 9:
			return &(inputs_ctx.SSP_t_list_in);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** Determine_LengthOfTargetList_LOOP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Determine_LengthOfTargetL(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Determine_LengthOfTargetL_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_SSP_t_indexed_matrix_element_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_SSP_target_t_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "length", &_SCSIM_kcg_int_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Determine_LengthOfTargetL_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Determine_LengthOfTargetL* pContext = (outC_Determine_LengthOfTargetL*)pInstance;
	switch (nHandleIdent) {
		case 10:
			return &((*pContext)._L1);
		case 11:
			return &((*pContext)._L2);
		case 12:
			return &((*pContext)._L3);
		case 13:
			return &((*pContext)._L10);
		case 14:
			return &((*pContext)._L11);
		case 15:
			return &((*pContext)._L12);
		case 16:
			return &((*pContext)._L13);
		case 17:
			return &((*pContext)._L14);
		case 18:
			return &((*pContext).cont);
		case 19:
			return &((*pContext).length);
		default:
			break;
	}
	return 0;
}

