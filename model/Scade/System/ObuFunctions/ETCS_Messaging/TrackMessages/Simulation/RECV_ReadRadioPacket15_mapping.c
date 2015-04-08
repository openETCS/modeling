#include "RECV_ReadRadioPacket15_mapping.h"
#include "RECV_ReadRadioPacket15_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_RECV_ReadRadioPacket15();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** RECV_ReadRadioPacket15/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_ReadRadioPacket15() {
	pSimulator->m_pfnSetRoot(pSimulator, "RECV_ReadRadioPacket15/", &outputs_ctx, _SCSIM_Get_RECV_ReadRadioPacket15_Handle);
	pSimulator->m_pfnPushIterator(pSimulator, "mapwi", 200, 200);
	_SCSIM_Mapping_RECV_ExtractDataFromRadio("RECV_ExtractDataFromRadio", "1", 1, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedBaliseData_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_int_200_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_array_int_200_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_array_int_200_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_array_int_200_200_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PacketOut", &_SCSIM_array_int_200_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "StartAddress", &_SCSIM_kcg_int_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "EndAddress", &_SCSIM_kcg_int_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PacketData", &_SCSIM_CompressedBaliseData_Utils, 14, valid, 0, 0);
}

void* _SCSIM_Get_RECV_ReadRadioPacket15_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			if (nSize != 1)
				break;
			return &(outputs_ctx.Context_1[pIteratorFilter[0]]);
		case 2:
			return &(outputs_ctx._L3);
		case 3:
			return &(outputs_ctx._L4);
		case 4:
			return &(outputs_ctx._L5);
		case 5:
			return &(outputs_ctx._L6);
		case 6:
			return &(outputs_ctx._L7);
		case 7:
			return &(outputs_ctx._L8);
		case 8:
			return &(outputs_ctx._L10);
		case 9:
			return &(outputs_ctx._L16);
		case 10:
			return &(outputs_ctx._L18);
		case 11:
			return &(outputs_ctx.PacketOut);
		case 12:
			return &(inputs_ctx.StartAddress);
		case 13:
			return &(inputs_ctx.EndAddress);
		case 14:
			return &(inputs_ctx.PacketData);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** RECV_ExtractDataFromRadio/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_ExtractDataFromRadio(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_RECV_ExtractDataFromRadio_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_CompressedBaliseData_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_int_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_int_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_int_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_int_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_int_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PacketOut", &_SCSIM_kcg_int_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ExtractDataFromRadio_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ExtractDataFromRadio* pContext = (outC_RECV_ExtractDataFromRadio*)pInstance;
	switch (nHandleIdent) {
		case 15:
			return &((*pContext)._L1);
		case 16:
			return &((*pContext)._L3);
		case 17:
			return &((*pContext)._L4);
		case 18:
			return &((*pContext)._L9);
		case 19:
			return &((*pContext)._L18);
		case 20:
			return &((*pContext)._L20);
		case 21:
			return &((*pContext)._L29);
		case 22:
			return &((*pContext)._L30);
		case 23:
			return &((*pContext)._L31);
		case 24:
			return &((*pContext)._L32);
		case 25:
			return &((*pContext)._L33);
		case 26:
			return &((*pContext)._L34);
		case 27:
			return &((*pContext).Cont);
		case 28:
			return &((*pContext).PacketOut);
		default:
			break;
	}
	return 0;
}

