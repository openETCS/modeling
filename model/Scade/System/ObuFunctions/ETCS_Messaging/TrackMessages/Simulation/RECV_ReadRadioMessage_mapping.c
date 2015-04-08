#include "RECV_ReadRadioMessage_mapping.h"
#include "RECV_ReadRadioMessage_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_RECV_ReadRadioMessage();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** RECV_ReadRadioMessage/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_ReadRadioMessage() {
	pSimulator->m_pfnSetRoot(pSimulator, "RECV_ReadRadioMessage/", &outputs_ctx, _SCSIM_Get_RECV_ReadRadioMessage_Handle);
	_SCSIM_Mapping_RECV_LookupRadioPacket("RECV_LookupRadioPacket", "1", 1, 0, 0);
	_SCSIM_Mapping_RECV_ReadRadioPacket("RECV_ReadRadioPacket", "1", 2, 3, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_array_int_500_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_CompressedRadioPackets_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_CompressedRadioData_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_CompressedRadioHeaders_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_CompressedRadioData_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_kcg_int_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Data", &_SCSIM_array_int_500_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Packets", &_SCSIM_CompressedRadioPackets_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PacketID", &_SCSIM_kcg_int_Utils, 15, valid, 0, 0);
}

void* _SCSIM_Get_RECV_ReadRadioMessage_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.Context_1);
		case 2:
			return &(outputs_ctx._1_Context_1);
		case 4:
			return &(outputs_ctx._L3);
		case 5:
			return &(outputs_ctx._L2);
		case 6:
			return &(outputs_ctx._L1);
		case 7:
			return &(outputs_ctx._L4);
		case 8:
			return &(outputs_ctx._L5);
		case 9:
			return &(outputs_ctx._L41);
		case 10:
			return &(outputs_ctx._L40);
		case 11:
			return &(outputs_ctx._L44);
		case 12:
			return &(outputs_ctx._L45);
		case 3:
			return &(outputs_ctx.tmp);
		case 13:
			return &(outputs_ctx.Data);
		case 14:
			return &(inputs_ctx.Packets);
		case 15:
			return &(inputs_ctx.PacketID);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** RECV_LookupRadioPacket/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_LookupRadioPacket(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_RECV_LookupRadioPacket_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 30, 30);
	_SCSIM_Mapping_RECV_LookupRadioPacketLoop("RECV_LookupRadioPacketLoop", "1", 16, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedRadioHeaders_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_array_int_30_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_NID_PACKET_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_int_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Found", &_SCSIM_kcg_bool_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Index", &_SCSIM_kcg_int_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "HeaderFound", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_LookupRadioPacket_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_LookupRadioPacket* pContext = (outC_RECV_LookupRadioPacket*)pInstance;
	switch (nHandleIdent) {
		case 16:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 17:
			return &((*pContext)._L1);
		case 18:
			return &((*pContext)._L2);
		case 19:
			return &((*pContext)._L3);
		case 20:
			return &((*pContext)._L4);
		case 21:
			return &((*pContext)._L5);
		case 22:
			return &((*pContext)._L23);
		case 23:
			return &((*pContext)._L24);
		case 24:
			return &((*pContext)._L25);
		case 25:
			return &((*pContext)._L26);
		case 26:
			return &((*pContext)._L22);
		case 27:
			return &((*pContext)._L27);
		case 28:
			return &((*pContext)._L28);
		case 29:
			return &((*pContext)._L29);
		case 30:
			return &((*pContext).Found);
		case 31:
			return &((*pContext).Index);
		case 32:
			return &((*pContext).HeaderFound);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** RECV_ReadRadioPacket/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_ReadRadioPacket(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_RECV_ReadRadioPacket_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "mapwi", 500, 500);
	_SCSIM_Mapping_RECV_ReadRadioPacketLoop("RECV_ReadRadioPacketLoop", "1", 33, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedRadioData_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_int_500_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_array_int_500_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_array_int_500_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_array_int_500_500_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PacketOut", &_SCSIM_array_int_500_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ReadRadioPacket_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ReadRadioPacket* pContext = (outC_RECV_ReadRadioPacket*)pInstance;
	switch (nHandleIdent) {
		case 33:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 34:
			return &((*pContext)._L3);
		case 35:
			return &((*pContext)._L4);
		case 36:
			return &((*pContext)._L6);
		case 37:
			return &((*pContext)._L7);
		case 38:
			return &((*pContext)._L8);
		case 39:
			return &((*pContext)._L10);
		case 40:
			return &((*pContext)._L18);
		case 41:
			return &((*pContext)._L22);
		case 42:
			return &((*pContext)._L24);
		case 43:
			return &((*pContext)._L23);
		case 44:
			return &((*pContext).PacketOut);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** RECV_LookupRadioPacketLoop/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_LookupRadioPacketLoop(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_RECV_LookupRadioPacketLoop_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 46, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_NID_PACKET_Utils, 47, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_bool_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_bool_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "HeaderFound", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_LookupRadioPacketLoop_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_LookupRadioPacketLoop* pContext = (outC_RECV_LookupRadioPacketLoop*)pInstance;
	switch (nHandleIdent) {
		case 45:
			return &((*pContext)._L3);
		case 46:
			return &((*pContext)._L4);
		case 47:
			return &((*pContext)._L27);
		case 48:
			return &((*pContext)._L28);
		case 49:
			return &((*pContext)._L29);
		case 50:
			return &((*pContext)._L30);
		case 51:
			return &((*pContext)._L31);
		case 52:
			return &((*pContext).Cont);
		case 53:
			return &((*pContext).HeaderFound);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** RECV_ReadRadioPacketLoop/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_ReadRadioPacketLoop(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_RECV_ReadRadioPacketLoop_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_CompressedRadioData_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_int_Utils, 60, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_int_Utils, 61, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_int_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_int_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_int_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 66, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PacketOut", &_SCSIM_kcg_int_Utils, 67, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ReadRadioPacketLoop_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ReadRadioPacketLoop* pContext = (outC_RECV_ReadRadioPacketLoop*)pInstance;
	switch (nHandleIdent) {
		case 54:
			return &((*pContext)._L1);
		case 55:
			return &((*pContext)._L3);
		case 56:
			return &((*pContext)._L4);
		case 57:
			return &((*pContext)._L9);
		case 58:
			return &((*pContext)._L18);
		case 59:
			return &((*pContext)._L20);
		case 60:
			return &((*pContext)._L29);
		case 61:
			return &((*pContext)._L30);
		case 62:
			return &((*pContext)._L31);
		case 63:
			return &((*pContext)._L32);
		case 64:
			return &((*pContext)._L33);
		case 65:
			return &((*pContext)._L34);
		case 66:
			return &((*pContext).Cont);
		case 67:
			return &((*pContext).PacketOut);
		default:
			break;
	}
	return 0;
}

static int _SCSIM_ClockActive_kcg_true(void* clock) {
return *(kcg_bool*)clock == kcg_true ? 1 : 0;
}
