#include "RECV_ReadRadioDataElement_mapping.h"
#include "RECV_ReadRadioDataElement_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_RECV_ReadRadioDataElement();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** RECV_ReadRadioDataElement/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_ReadRadioDataElement() {
	pSimulator->m_pfnSetRoot(pSimulator, "RECV_ReadRadioDataElement/", &outputs_ctx, _SCSIM_Get_RECV_ReadRadioDataElement_Handle);
	pSimulator->m_pfnPushIterator(pSimulator, "mapwi", 100, 100);
	_SCSIM_Mapping_RECV_ReadRadioDataElementLoop("RECV_ReadRadioDataElementLoop", "1", 1, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedRadioData_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array__177_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_int_200_100_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_array_int_100_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PacketOut", &_SCSIM_DataElememtsAsArray_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Found", &_SCSIM_kcg_bool_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "HeaderFound", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "DataIn", &_SCSIM_CompressedRadioData_Utils, 12, valid, 0, 0);
}

void* _SCSIM_Get_RECV_ReadRadioDataElement_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			if (nSize != 1)
				break;
			return &(outputs_ctx.Context_1[pIteratorFilter[0]]);
		case 2:
			return &(outputs_ctx._L1);
		case 3:
			return &(outputs_ctx._L2);
		case 4:
			return &(outputs_ctx._L3);
		case 5:
			return &(outputs_ctx._L4);
		case 6:
			return &(outputs_ctx._L5);
		case 7:
			return &(outputs_ctx._L6);
		case 8:
			return &(outputs_ctx._L7);
		case 9:
			return &(outputs_ctx.PacketOut);
		case 10:
			return &(inputs_ctx.Found);
		case 11:
			return &(inputs_ctx.HeaderFound);
		case 12:
			return &(inputs_ctx.DataIn);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** RECV_ReadRadioDataElementLoop/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_ReadRadioDataElementLoop(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_RECV_ReadRadioDataElementLoop_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedRadioData_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_bool_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PacketOut", &_SCSIM_kcg_int_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ReadRadioDataElementLoop_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ReadRadioDataElementLoop* pContext = (outC_RECV_ReadRadioDataElementLoop*)pInstance;
	switch (nHandleIdent) {
		case 13:
			return &((*pContext)._L1);
		case 14:
			return &((*pContext)._L2);
		case 15:
			return &((*pContext)._L3);
		case 16:
			return &((*pContext)._L20);
		case 17:
			return &((*pContext)._L21);
		case 18:
			return &((*pContext)._L24);
		case 19:
			return &((*pContext)._L23);
		case 20:
			return &((*pContext)._L22);
		case 21:
			return &((*pContext)._L25);
		case 22:
			return &((*pContext)._L26);
		case 23:
			return &((*pContext)._L27);
		case 24:
			return &((*pContext).Cont);
		case 25:
			return &((*pContext).PacketOut);
		default:
			break;
	}
	return 0;
}

