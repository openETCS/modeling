#include "RECV_ReadPacket005_ForCal_TM_mapping.h"
#include "RECV_ReadPacket005_ForCal_TM_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_RECV_ReadPacket005_ForCal_TM();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** TM::RECV_ReadPacket005_ForCalcTrainPos/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_ReadPacket005_ForCal_TM() {
	pSimulator->m_pfnSetRoot(pSimulator, "TM::RECV_ReadPacket005_ForCalcTrainPos/", &outputs_ctx, _SCSIM_Get_RECV_ReadPacket005_ForCal_TM_Handle);
	_SCSIM_Mapping_RECV_ReadPackets_TM_lib_internal("TM_lib_internal::RECV_ReadPackets", "1", 1, 0, 0);
	_SCSIM_Mapping__2_RECV_ConvertP005afterRead_TM_conversions("TM_conversions::RECV_ConvertP005afterRead_CT", "1", 2, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_int_500_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_array_int_39_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L165", &_SCSIM_NID_LRBG_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L166", &_SCSIM_LinkedBGs_T_BG_Types_Pkg_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LinkedBGsOUT", &_SCSIM_LinkedBGs_T_BG_Types_Pkg_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "RadioMessage_IN", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "LRBG", &_SCSIM_NID_LRBG_Utils, 11, valid, 0, 0);
}

void* _SCSIM_Get_RECV_ReadPacket005_ForCal_TM_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.Context_1);
		case 2:
			return &(outputs_ctx._1_Context_1);
		case 3:
			return &(outputs_ctx._L5);
		case 4:
			return &(outputs_ctx._L6);
		case 5:
			return &(outputs_ctx._L11);
		case 6:
			return &(outputs_ctx._L30);
		case 7:
			return &(outputs_ctx._L165);
		case 8:
			return &(outputs_ctx._L166);
		case 9:
			return &(outputs_ctx.LinkedBGsOUT);
		case 10:
			return &(inputs_ctx.RadioMessage_IN);
		case 11:
			return &(inputs_ctx.LRBG);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::RECV_ReadPackets/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_ReadPackets_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_RECV_ReadPackets_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_RECV_LookupPacket_TM_lib_internal("TM_lib_internal::RECV_LookupPacket", "1", 12, 0, 0);
	_SCSIM_Mapping_RECV_ReadPacketKernel_TM_lib_internal("TM_lib_internal::RECV_ReadPacketKernel", "1", 13, 14, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_array_int_500_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_kcg_int_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Data", &_SCSIM_array_int_500_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Metadata", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ReadPackets_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ReadPackets_TM_lib_internal* pContext = (outC_RECV_ReadPackets_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 12:
			return &((*pContext).Context_1);
		case 13:
			return &((*pContext)._1_Context_1);
		case 15:
			return &((*pContext)._L3);
		case 16:
			return &((*pContext)._L2);
		case 17:
			return &((*pContext)._L1);
		case 18:
			return &((*pContext)._L4);
		case 19:
			return &((*pContext)._L44);
		case 20:
			return &((*pContext)._L45);
		case 21:
			return &((*pContext)._L46);
		case 22:
			return &((*pContext)._L48);
		case 23:
			return &((*pContext)._L47);
		case 14:
			return &((*pContext).tmp);
		case 24:
			return &((*pContext).Data);
		case 25:
			return &((*pContext).Metadata);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::RECV_ConvertP005afterRead_CT/ mapping function
 ****************************************************************/
void _SCSIM_Mapping__2_RECV_ConvertP005afterRead_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get__2_RECV_ConvertP005afterRead_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_RECV_ConvertP005afterRead_TM_conversions("TM_conversions::RECV_ConvertP005afterRead_Element_CT", "1", 26, 0, 0);
	_SCSIM_Mapping_RECV_ConvertP005afterRead_TM_conversions("TM_conversions::RECV_ConvertP005afterRead_Element_CT", "2", 27, 0, 0);
	_SCSIM_Mapping_RECV_ConvertP005afterRead_TM_conversions("TM_conversions::RECV_ConvertP005afterRead_Element_CT", "3", 28, 0, 0);
	_SCSIM_Mapping_RECV_ConvertP005afterRead_TM_conversions("TM_conversions::RECV_ConvertP005afterRead_Element_CT", "4", 29, 0, 0);
	_SCSIM_Mapping_RECV_ConvertP005afterRead_TM_conversions("TM_conversions::RECV_ConvertP005afterRead_Element_CT", "5", 30, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_array_T_TM_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L71", &_SCSIM_kcg_int_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L70", &_SCSIM_kcg_int_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L69", &_SCSIM_kcg_int_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L68", &_SCSIM_kcg_int_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L67", &_SCSIM_kcg_int_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L66", &_SCSIM_kcg_int_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L65", &_SCSIM_kcg_int_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L64", &_SCSIM_kcg_int_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L63", &_SCSIM_kcg_int_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L62", &_SCSIM_kcg_int_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L61", &_SCSIM_kcg_int_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L60", &_SCSIM_kcg_int_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L59", &_SCSIM_kcg_int_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L58", &_SCSIM_kcg_int_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L57", &_SCSIM_kcg_int_Utils, 46, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L56", &_SCSIM_kcg_int_Utils, 47, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L55", &_SCSIM_kcg_int_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L54", &_SCSIM_kcg_int_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L53", &_SCSIM_kcg_int_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L52", &_SCSIM_kcg_int_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L51", &_SCSIM_kcg_int_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_kcg_int_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L49", &_SCSIM_kcg_int_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_kcg_int_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_kcg_int_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_kcg_int_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_kcg_int_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_kcg_int_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_kcg_int_Utils, 60, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_kcg_int_Utils, 61, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_kcg_int_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_kcg_int_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_kcg_int_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_kcg_int_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L107", &_SCSIM_array__967_Utils, 66, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L115", &_SCSIM_LinkedBG_T_BG_Types_Pkg_Utils, 67, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L118", &_SCSIM_LinkedBG_T_BG_Types_Pkg_Utils, 68, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L119", &_SCSIM_LinkedBG_T_BG_Types_Pkg_Utils, 69, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L120", &_SCSIM_LinkedBG_T_BG_Types_Pkg_Utils, 70, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L122", &_SCSIM_array_int_4_Utils, 71, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L123", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 72, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L124", &_SCSIM_kcg_bool_Utils, 73, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L126", &_SCSIM_NID_LRBG_Utils, 74, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L133", &_SCSIM_kcg_int_Utils, 75, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L132", &_SCSIM_kcg_int_Utils, 76, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L131", &_SCSIM_kcg_int_Utils, 77, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L130", &_SCSIM_kcg_int_Utils, 78, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L129", &_SCSIM_kcg_int_Utils, 79, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L134", &_SCSIM_array_int_7_Utils, 80, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L135", &_SCSIM_array_int_7_Utils, 81, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L136", &_SCSIM_array_int_7_Utils, 82, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L137", &_SCSIM_array_int_7_Utils, 83, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L138", &_SCSIM_LinkedBG_T_BG_Types_Pkg_Utils, 84, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L139", &_SCSIM_array_int_7_Utils, 85, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Packet005_OLD", &_SCSIM_LinkedBGs_T_BG_Types_Pkg_Utils, 86, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get__2_RECV_ConvertP005afterRead_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC__2_RECV_ConvertP005afterRead_TM_conversions* pContext = (outC__2_RECV_ConvertP005afterRead_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 26:
			return &((*pContext).Context_1);
		case 27:
			return &((*pContext).Context_2);
		case 28:
			return &((*pContext).Context_3);
		case 29:
			return &((*pContext).Context_4);
		case 30:
			return &((*pContext).Context_5);
		case 31:
			return &((*pContext)._L1);
		case 32:
			return &((*pContext)._L71);
		case 33:
			return &((*pContext)._L70);
		case 34:
			return &((*pContext)._L69);
		case 35:
			return &((*pContext)._L68);
		case 36:
			return &((*pContext)._L67);
		case 37:
			return &((*pContext)._L66);
		case 38:
			return &((*pContext)._L65);
		case 39:
			return &((*pContext)._L64);
		case 40:
			return &((*pContext)._L63);
		case 41:
			return &((*pContext)._L62);
		case 42:
			return &((*pContext)._L61);
		case 43:
			return &((*pContext)._L60);
		case 44:
			return &((*pContext)._L59);
		case 45:
			return &((*pContext)._L58);
		case 46:
			return &((*pContext)._L57);
		case 47:
			return &((*pContext)._L56);
		case 48:
			return &((*pContext)._L55);
		case 49:
			return &((*pContext)._L54);
		case 50:
			return &((*pContext)._L53);
		case 51:
			return &((*pContext)._L52);
		case 52:
			return &((*pContext)._L51);
		case 53:
			return &((*pContext)._L50);
		case 54:
			return &((*pContext)._L49);
		case 55:
			return &((*pContext)._L48);
		case 56:
			return &((*pContext)._L47);
		case 57:
			return &((*pContext)._L46);
		case 58:
			return &((*pContext)._L45);
		case 59:
			return &((*pContext)._L44);
		case 60:
			return &((*pContext)._L43);
		case 61:
			return &((*pContext)._L42);
		case 62:
			return &((*pContext)._L41);
		case 63:
			return &((*pContext)._L40);
		case 64:
			return &((*pContext)._L39);
		case 65:
			return &((*pContext)._L38);
		case 66:
			return &((*pContext)._L107);
		case 67:
			return &((*pContext)._L115);
		case 68:
			return &((*pContext)._L118);
		case 69:
			return &((*pContext)._L119);
		case 70:
			return &((*pContext)._L120);
		case 71:
			return &((*pContext)._L122);
		case 72:
			return &((*pContext)._L123);
		case 73:
			return &((*pContext)._L124);
		case 74:
			return &((*pContext)._L126);
		case 75:
			return &((*pContext)._L133);
		case 76:
			return &((*pContext)._L132);
		case 77:
			return &((*pContext)._L131);
		case 78:
			return &((*pContext)._L130);
		case 79:
			return &((*pContext)._L129);
		case 80:
			return &((*pContext)._L134);
		case 81:
			return &((*pContext)._L135);
		case 82:
			return &((*pContext)._L136);
		case 83:
			return &((*pContext)._L137);
		case 84:
			return &((*pContext)._L138);
		case 85:
			return &((*pContext)._L139);
		case 86:
			return &((*pContext).Packet005_OLD);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::RECV_LookupPacket/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_LookupPacket_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_RECV_LookupPacket_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 30, 30);
	_SCSIM_Mapping_RECV_LookupPacketLoop_TM_lib_internal("TM_lib_internal::RECV_LookupPacketLoop", "1", 87, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 88, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 89, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_array_int_30_Utils, 90, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 91, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 92, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 93, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_NID_PACKET_Utils, 94, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 95, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 96, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 97, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 98, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 99, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_int_Utils, 100, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Found", &_SCSIM_kcg_bool_Utils, 101, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Index", &_SCSIM_kcg_int_Utils, 102, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "HeaderFound", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 103, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_LookupPacket_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_LookupPacket_TM_lib_internal* pContext = (outC_RECV_LookupPacket_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 87:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 88:
			return &((*pContext)._L1);
		case 89:
			return &((*pContext)._L2);
		case 90:
			return &((*pContext)._L3);
		case 91:
			return &((*pContext)._L4);
		case 92:
			return &((*pContext)._L5);
		case 93:
			return &((*pContext)._L23);
		case 94:
			return &((*pContext)._L24);
		case 95:
			return &((*pContext)._L25);
		case 96:
			return &((*pContext)._L26);
		case 97:
			return &((*pContext)._L22);
		case 98:
			return &((*pContext)._L27);
		case 99:
			return &((*pContext)._L28);
		case 100:
			return &((*pContext)._L29);
		case 101:
			return &((*pContext).Found);
		case 102:
			return &((*pContext).Index);
		case 103:
			return &((*pContext).HeaderFound);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::RECV_ReadPacketKernel/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_ReadPacketKernel_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_RECV_ReadPacketKernel_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "mapwi", 500, 500);
	_SCSIM_Mapping_RECV_ReadPacketKernelLoop_TM_lib_internal("TM_lib_internal::RECV_ReadPacketKernelLoop", "1", 104, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 105, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 106, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_int_500_Utils, 107, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_array_int_500_Utils, 108, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 109, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_array_int_500_Utils, 110, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_array_int_500_500_Utils, 111, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 112, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 113, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 114, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PacketOut", &_SCSIM_array_int_500_Utils, 115, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ReadPacketKernel_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ReadPacketKernel_TM_lib_internal* pContext = (outC_RECV_ReadPacketKernel_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 104:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 105:
			return &((*pContext)._L3);
		case 106:
			return &((*pContext)._L4);
		case 107:
			return &((*pContext)._L6);
		case 108:
			return &((*pContext)._L7);
		case 109:
			return &((*pContext)._L8);
		case 110:
			return &((*pContext)._L10);
		case 111:
			return &((*pContext)._L18);
		case 112:
			return &((*pContext)._L22);
		case 113:
			return &((*pContext)._L24);
		case 114:
			return &((*pContext)._L23);
		case 115:
			return &((*pContext).PacketOut);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::RECV_ConvertP005afterRead_Element_CT/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_ConvertP005afterRead_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_RECV_ConvertP005afterRead_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_CAST_Int_to_Q_LINKREACTION_TM_conversions("TM_conversions::CAST_Int_to_Q_LINKREACTION", "1", 116, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_LINKORIENTATION_TM_conversions("TM_conversions::CAST_Int_to_Q_LINKORIENTATION", "1", 117, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions("TM_conversions::CAST_Int_to_Q_NEWCOUNTRY", "2", 118, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_DIR_TM_conversions("TM_conversions::CAST_Int_to_Q_DIR", "1", 119, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_SCALE_TM_conversions("TM_conversions::CAST_Int_to_Q_SCALE", "1", 120, 0, 0);
	_SCSIM_Mapping_TOOLS_evaluate_N_ITER_TM_conversions("TM_conversions::TOOLS_evaluate_N_ITER", "1", 121, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Array4_TM_Utils, 122, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_P005E_array_T_TM_Utils, 123, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 124, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 125, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 126, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 127, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 128, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 129, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 130, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 131, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 132, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 133, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_Q_LINKREACTION_Utils, 134, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_Q_LINKORIENTATION_Utils, 135, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_Q_NEWCOUNTRY_Utils, 136, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_Q_DIR_Utils, 137, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_kcg_bool_Utils, 138, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_NID_LRBG_Utils, 139, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_LinkedBG_T_BG_Types_Pkg_Utils, 140, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_Q_SCALE_Utils, 141, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_kcg_int_Utils, 142, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_kcg_bool_Utils, 143, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_kcg_int_Utils, 144, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L49", &_SCSIM_kcg_bool_Utils, 145, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Linked_BG", &_SCSIM_LinkedBG_T_BG_Types_Pkg_Utils, 146, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ConvertP005afterRead_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ConvertP005afterRead_TM_conversions* pContext = (outC_RECV_ConvertP005afterRead_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 116:
			return &((*pContext)._4_Context_1);
		case 117:
			return &((*pContext)._3_Context_1);
		case 118:
			return &((*pContext).Context_2);
		case 119:
			return &((*pContext)._2_Context_1);
		case 120:
			return &((*pContext)._1_Context_1);
		case 121:
			return &((*pContext).Context_1);
		case 122:
			return &((*pContext)._L1);
		case 123:
			return &((*pContext)._L2);
		case 124:
			return &((*pContext)._L6);
		case 125:
			return &((*pContext)._L5);
		case 126:
			return &((*pContext)._L4);
		case 127:
			return &((*pContext)._L3);
		case 128:
			return &((*pContext)._L28);
		case 129:
			return &((*pContext)._L27);
		case 130:
			return &((*pContext)._L26);
		case 131:
			return &((*pContext)._L25);
		case 132:
			return &((*pContext)._L24);
		case 133:
			return &((*pContext)._L23);
		case 134:
			return &((*pContext)._L36);
		case 135:
			return &((*pContext)._L37);
		case 136:
			return &((*pContext)._L39);
		case 137:
			return &((*pContext)._L40);
		case 138:
			return &((*pContext)._L41);
		case 139:
			return &((*pContext)._L42);
		case 140:
			return &((*pContext)._L44);
		case 141:
			return &((*pContext)._L45);
		case 142:
			return &((*pContext)._L46);
		case 143:
			return &((*pContext)._L47);
		case 144:
			return &((*pContext)._L48);
		case 145:
			return &((*pContext)._L49);
		case 146:
			return &((*pContext).Linked_BG);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::RECV_LookupPacketLoop/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_LookupPacketLoop_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_RECV_LookupPacketLoop_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 147, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 148, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_NID_PACKET_Utils, 149, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_bool_Utils, 150, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_bool_Utils, 151, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 152, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 153, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 154, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "HeaderFound", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 155, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_LookupPacketLoop_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_LookupPacketLoop_TM_lib_internal* pContext = (outC_RECV_LookupPacketLoop_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 147:
			return &((*pContext)._L3);
		case 148:
			return &((*pContext)._L4);
		case 149:
			return &((*pContext)._L27);
		case 150:
			return &((*pContext)._L28);
		case 151:
			return &((*pContext)._L29);
		case 152:
			return &((*pContext)._L30);
		case 153:
			return &((*pContext)._L31);
		case 154:
			return &((*pContext).Cont);
		case 155:
			return &((*pContext).HeaderFound);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::RECV_ReadPacketKernelLoop/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_ReadPacketKernelLoop_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_RECV_ReadPacketKernelLoop_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 156, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 157, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 158, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 159, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 160, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 161, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_int_Utils, 162, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_int_Utils, 163, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 164, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_int_Utils, 165, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_int_Utils, 166, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_int_Utils, 167, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 168, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PacketOut", &_SCSIM_kcg_int_Utils, 169, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ReadPacketKernelLoop_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ReadPacketKernelLoop_TM_lib_internal* pContext = (outC_RECV_ReadPacketKernelLoop_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 156:
			return &((*pContext)._L1);
		case 157:
			return &((*pContext)._L3);
		case 158:
			return &((*pContext)._L4);
		case 159:
			return &((*pContext)._L9);
		case 160:
			return &((*pContext)._L18);
		case 161:
			return &((*pContext)._L20);
		case 162:
			return &((*pContext)._L29);
		case 163:
			return &((*pContext)._L30);
		case 164:
			return &((*pContext)._L31);
		case 165:
			return &((*pContext)._L32);
		case 166:
			return &((*pContext)._L33);
		case 167:
			return &((*pContext)._L34);
		case 168:
			return &((*pContext).Cont);
		case 169:
			return &((*pContext).PacketOut);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_LINKREACTION/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_LINKREACTION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_LINKREACTION_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_170_Utils, 170);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_171_Utils, 171);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_172_Utils, 172);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 173, valid, 172, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKREACTION_Utils, 174, valid, 172, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_175_Utils, 175);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKREACTION_Utils, 176, valid, 175, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 177, valid, 175, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_178_Utils, 178);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKREACTION_Utils, 179, valid, 178, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 180, valid, 178, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_181_Utils, 181);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_LINKREACTION_Utils, 182, valid, 181, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 183, valid, 181, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "q_linkreaction_in", &_SCSIM_kcg_int_Utils, 184, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 185, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 186, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 187, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_linkreaction", &_SCSIM_Q_LINKREACTION_Utils, 188, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_LINKREACTION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_LINKREACTION_TM_conversions* pContext = (outC_CAST_Int_to_Q_LINKREACTION_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 170:
			return &((*pContext).IfBlock1_clock);
		case 171:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 172:
			return &((*pContext).else_clock_IfBlock1);
		case 173:
			return &((*pContext)._L25_IfBlock1);
		case 174:
			return &((*pContext)._L14_IfBlock1);
		case 175:
			return &((*pContext).else_clock_IfBlock1);
		case 176:
			return &((*pContext)._L13_IfBlock1);
		case 177:
			return &((*pContext)._L4_IfBlock1);
		case 178:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 179:
			return &((*pContext)._L1_IfBlock1);
		case 180:
			return &((*pContext)._L32_IfBlock1);
		case 181:
			return &((*pContext).IfBlock1_clock);
		case 182:
			return &((*pContext)._L2_IfBlock1);
		case 183:
			return &((*pContext)._L3_IfBlock1);
		case 184:
			return &((*pContext).q_linkreaction_in);
		case 185:
			return &((*pContext).error);
		case 186:
			return &((*pContext)._L2);
		case 187:
			return &((*pContext)._L4);
		case 188:
			return &((*pContext).q_linkreaction);
		default:
			break;
	}
	return 0;
}

static int Is172Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_172_Utils = {Is172Active};

static int Is175Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_175_Utils = {Is175Active};

static int Is171Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_171_Utils = {Is171Active};

static int Is178Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_178_Utils = {Is178Active};

static int Is170Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_170_Utils = {Is170Active};

static int Is181Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_181_Utils = {Is181Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_LINKORIENTATION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_LINKORIENTATION_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_189_Utils, 189);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_190_Utils, 190);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 191, valid, 190, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKORIENTATION_Utils, 192, valid, 190, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_193_Utils, 193);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_LINKORIENTATION_Utils, 194, valid, 193, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 195, valid, 193, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_196_Utils, 196);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_LINKORIENTATION_Utils, 197, valid, 196, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 198, valid, 196, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 199, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_linkorientation_in", &_SCSIM_kcg_int_Utils, 200, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 201, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 202, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_linkorientation", &_SCSIM_Q_LINKORIENTATION_Utils, 203, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_LINKORIENTATION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions* pContext = (outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 189:
			return &((*pContext).IfBlock1_clock);
		case 190:
			return &((*pContext).else_clock_IfBlock1);
		case 191:
			return &((*pContext)._L2_IfBlock1);
		case 192:
			return &((*pContext)._L1_IfBlock1);
		case 193:
			return &((*pContext).else_clock_IfBlock1);
		case 194:
			return &((*pContext)._L3_IfBlock1);
		case 195:
			return &((*pContext)._L51_IfBlock1);
		case 196:
			return &((*pContext).IfBlock1_clock);
		case 197:
			return &((*pContext)._L4_IfBlock1);
		case 198:
			return &((*pContext)._L5_IfBlock1);
		case 199:
			return &((*pContext).error);
		case 200:
			return &((*pContext).q_linkorientation_in);
		case 201:
			return &((*pContext)._L13);
		case 202:
			return &((*pContext)._L12);
		case 203:
			return &((*pContext).q_linkorientation);
		default:
			break;
	}
	return 0;
}

static int Is190Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_190_Utils = {Is190Active};

static int Is193Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_193_Utils = {Is193Active};

static int Is189Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_189_Utils = {Is189Active};

static int Is196Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_196_Utils = {Is196Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_204_Utils, 204);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_205_Utils, 205);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 206, valid, 205, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_NEWCOUNTRY_Utils, 207, valid, 205, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_208_Utils, 208);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_NEWCOUNTRY_Utils, 209, valid, 208, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 210, valid, 208, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_211_Utils, 211);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_NEWCOUNTRY_Utils, 212, valid, 211, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 213, valid, 211, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 214, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_newcountry_in", &_SCSIM_kcg_int_Utils, 215, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 216, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 217, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_newcountry", &_SCSIM_Q_NEWCOUNTRY_Utils, 218, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions* pContext = (outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 204:
			return &((*pContext).IfBlock1_clock);
		case 205:
			return &((*pContext).else_clock_IfBlock1);
		case 206:
			return &((*pContext)._L2_IfBlock1);
		case 207:
			return &((*pContext)._L1_IfBlock1);
		case 208:
			return &((*pContext).else_clock_IfBlock1);
		case 209:
			return &((*pContext)._L3_IfBlock1);
		case 210:
			return &((*pContext)._L51_IfBlock1);
		case 211:
			return &((*pContext).IfBlock1_clock);
		case 212:
			return &((*pContext)._L4_IfBlock1);
		case 213:
			return &((*pContext)._L5_IfBlock1);
		case 214:
			return &((*pContext).error);
		case 215:
			return &((*pContext).q_newcountry_in);
		case 216:
			return &((*pContext)._L13);
		case 217:
			return &((*pContext)._L12);
		case 218:
			return &((*pContext).q_newcountry);
		default:
			break;
	}
	return 0;
}

static int Is205Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_205_Utils = {Is205Active};

static int Is208Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_208_Utils = {Is208Active};

static int Is204Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_204_Utils = {Is204Active};

static int Is211Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_211_Utils = {Is211Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_DIR/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_DIR_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_DIR_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_219_Utils, 219);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_220_Utils, 220);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_221_Utils, 221);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 222, valid, 221, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 223, valid, 221, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_224_Utils, 224);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 225, valid, 224, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 226, valid, 224, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_227_Utils, 227);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_DIR_Utils, 228, valid, 227, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 229, valid, 227, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_230_Utils, 230);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_DIR_Utils, 231, valid, 230, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 232, valid, 230, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 233, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_dir_in", &_SCSIM_kcg_int_Utils, 234, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 235, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 236, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_dir", &_SCSIM_Q_DIR_Utils, 237, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_DIR_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_DIR_TM_conversions* pContext = (outC_CAST_Int_to_Q_DIR_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 219:
			return &((*pContext).IfBlock1_clock);
		case 220:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 221:
			return &((*pContext).else_clock_IfBlock1);
		case 222:
			return &((*pContext)._L24_IfBlock1);
		case 223:
			return &((*pContext)._L1_IfBlock1);
		case 224:
			return &((*pContext).else_clock_IfBlock1);
		case 225:
			return &((*pContext)._L2_IfBlock1);
		case 226:
			return &((*pContext)._L43_IfBlock1);
		case 227:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 228:
			return &((*pContext)._L3_IfBlock1);
		case 229:
			return &((*pContext)._L52_IfBlock1);
		case 230:
			return &((*pContext).IfBlock1_clock);
		case 231:
			return &((*pContext)._L4_IfBlock1);
		case 232:
			return &((*pContext)._L5_IfBlock1);
		case 233:
			return &((*pContext).error);
		case 234:
			return &((*pContext).q_dir_in);
		case 235:
			return &((*pContext)._L13);
		case 236:
			return &((*pContext)._L12);
		case 237:
			return &((*pContext).q_dir);
		default:
			break;
	}
	return 0;
}

static int Is221Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_221_Utils = {Is221Active};

static int Is224Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_224_Utils = {Is224Active};

static int Is220Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_220_Utils = {Is220Active};

static int Is227Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_227_Utils = {Is227Active};

static int Is219Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_219_Utils = {Is219Active};

static int Is230Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_230_Utils = {Is230Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_SCALE/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_SCALE_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_SCALE_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_238_Utils, 238);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_239_Utils, 239);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_240_Utils, 240);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 241, valid, 240, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_SCALE_Utils, 242, valid, 240, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_243_Utils, 243);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_SCALE_Utils, 244, valid, 243, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 245, valid, 243, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_246_Utils, 246);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_SCALE_Utils, 247, valid, 246, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 248, valid, 246, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_249_Utils, 249);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_SCALE_Utils, 250, valid, 249, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 251, valid, 249, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "q_scale_in", &_SCSIM_kcg_int_Utils, 252, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 253, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 254, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 255, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_scale", &_SCSIM_Q_SCALE_Utils, 256, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_SCALE_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_SCALE_TM_conversions* pContext = (outC_CAST_Int_to_Q_SCALE_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 238:
			return &((*pContext).IfBlock1_clock);
		case 239:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 240:
			return &((*pContext).else_clock_IfBlock1);
		case 241:
			return &((*pContext)._L25_IfBlock1);
		case 242:
			return &((*pContext)._L14_IfBlock1);
		case 243:
			return &((*pContext).else_clock_IfBlock1);
		case 244:
			return &((*pContext)._L13_IfBlock1);
		case 245:
			return &((*pContext)._L4_IfBlock1);
		case 246:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 247:
			return &((*pContext)._L1_IfBlock1);
		case 248:
			return &((*pContext)._L32_IfBlock1);
		case 249:
			return &((*pContext).IfBlock1_clock);
		case 250:
			return &((*pContext)._L2_IfBlock1);
		case 251:
			return &((*pContext)._L3_IfBlock1);
		case 252:
			return &((*pContext).q_scale_in);
		case 253:
			return &((*pContext).error);
		case 254:
			return &((*pContext)._L2);
		case 255:
			return &((*pContext)._L4);
		case 256:
			return &((*pContext).q_scale);
		default:
			break;
	}
	return 0;
}

static int Is240Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_240_Utils = {Is240Active};

static int Is243Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_243_Utils = {Is243Active};

static int Is239Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_239_Utils = {Is239Active};

static int Is246Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_246_Utils = {Is246Active};

static int Is238Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_238_Utils = {Is238Active};

static int Is249Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_249_Utils = {Is249Active};

/****************************************************************
 ** TM_conversions::TOOLS_evaluate_N_ITER/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_TOOLS_evaluate_N_ITER_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_TOOLS_evaluate_N_ITER_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 257, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 258, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 259, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 260, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 261, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "valid", &_SCSIM_kcg_bool_Utils, 262, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_TOOLS_evaluate_N_ITER_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_TOOLS_evaluate_N_ITER_TM_conversions* pContext = (outC_TOOLS_evaluate_N_ITER_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 257:
			return &((*pContext)._L1);
		case 258:
			return &((*pContext)._L2);
		case 259:
			return &((*pContext)._L3);
		case 260:
			return &((*pContext)._L4);
		case 261:
			return &((*pContext)._L5);
		case 262:
			return &((*pContext).valid);
		default:
			break;
	}
	return 0;
}

static int _SCSIM_ClockActive_kcg_false(void* clock) {
return *(kcg_bool*)clock == kcg_false ? 1 : 0;
}
static int _SCSIM_ClockActive_kcg_true(void* clock) {
return *(kcg_bool*)clock == kcg_true ? 1 : 0;
}
