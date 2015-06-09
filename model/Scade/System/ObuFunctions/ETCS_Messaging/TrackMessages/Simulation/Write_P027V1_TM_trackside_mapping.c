#include "Write_P027V1_TM_trackside_mapping.h"
#include "Write_P027V1_TM_trackside_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Write_P027V1_TM_trackside();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** TM_trackside::Write_P027V1/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Write_P027V1_TM_trackside() {
	pSimulator->m_pfnSetRoot(pSimulator, "TM_trackside::Write_P027V1/", &outputs_ctx, _SCSIM_Get_Write_P027V1_TM_trackside_Handle);
	pSimulator->m_pfnPushIterator(pSimulator, "foldwi", 33, 33);
	_SCSIM_Mapping_C_P027V1_tracksim_merge_s_TM_conversions("TM_conversions::C_P027V1_tracksim_merge_sections", "1", 1, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	_SCSIM_Mapping_SEND_WriteMessageHeader_TM_lib_internal("TM_lib_internal::SEND_WriteMessageHeader", "1", 2, 0, 0);
	_SCSIM_Mapping_SEND_MessageData_TM_lib_internal("TM_lib_internal::SEND_MessageData", "1", 3, 0, 0);
	_SCSIM_Mapping_C_P027V1_tracksim_compr_body_TM_conversions("TM_conversions::C_P027V1_tracksim_compr_body", "1", 4, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P027V1_trackside_int_T_TM_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM__2_P027V1_OBU_sectionlist_int_T_TM_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_kcg_int_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_kcg_int_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L51", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L52", &_SCSIM_kcg_bool_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L54", &_SCSIM_array_int_33_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Error", &_SCSIM_kcg_bool_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PacketsOut", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Packet27V1", &_SCSIM_P027V1_trackside_int_T_TM_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Packets", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 26, valid, 0, 0);
}

void* _SCSIM_Get_Write_P027V1_TM_trackside_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			if (nSize != 1)
				break;
			return &(outputs_ctx._3_Context_1[pIteratorFilter[0]]);
		case 2:
			return &(outputs_ctx._1_Context_1);
		case 3:
			return &(outputs_ctx._2_Context_1);
		case 4:
			return &(outputs_ctx.Context_1);
		case 5:
			return &(outputs_ctx._L1);
		case 6:
			return &(outputs_ctx._L4);
		case 7:
			return &(outputs_ctx._L10);
		case 8:
			return &(outputs_ctx._L18);
		case 9:
			return &(outputs_ctx._L21);
		case 10:
			return &(outputs_ctx._L22);
		case 11:
			return &(outputs_ctx._L39);
		case 12:
			return &(outputs_ctx._L40);
		case 13:
			return &(outputs_ctx._L42);
		case 14:
			return &(outputs_ctx._L41);
		case 15:
			return &(outputs_ctx._L44);
		case 16:
			return &(outputs_ctx._L43);
		case 17:
			return &(outputs_ctx._L45);
		case 18:
			return &(outputs_ctx._L46);
		case 19:
			return &(outputs_ctx._L50);
		case 20:
			return &(outputs_ctx._L51);
		case 21:
			return &(outputs_ctx._L52);
		case 22:
			return &(outputs_ctx._L54);
		case 23:
			return &(outputs_ctx.Error);
		case 24:
			return &(outputs_ctx.PacketsOut);
		case 25:
			return &(inputs_ctx.Packet27V1);
		case 26:
			return &(inputs_ctx.Packets);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::C_P027V1_tracksim_merge_sections/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P027V1_tracksim_merge_s_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P027V1_tracksim_merge_s_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_C_P027V1_tracksim_compr_o_TM_conversions("TM_conversions::C_P027V1_tracksim_compr_one_section", "2", 27, 0, 0);
	_SCSIM_Mapping_SEND_MessageData_TM_lib_internal("TM_lib_internal::SEND_MessageData", "1", 28, 0, 0);
	_SCSIM_Mapping_SEND_WriteMessageHeader_TM_lib_internal("TM_lib_internal::SEND_WriteMessageHeader", "1", 29, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L432", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L431", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L435", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L436", &_SCSIM_kcg_int_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L437", &_SCSIM_kcg_int_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L434", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L433", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L438", &_SCSIM_kcg_int_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L439", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L440", &_SCSIM_P027V1_section_int_T_TM_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L441", &_SCSIM_kcg_int_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L443", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L442", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L446", &_SCSIM_kcg_int_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L447", &_SCSIM_kcg_bool_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Packets_Out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 46, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P027V1_tracksim_merge_s_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P027V1_tracksim_merge_s_TM_conversions* pContext = (outC_C_P027V1_tracksim_merge_s_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 27:
			return &((*pContext).Context_2);
		case 28:
			return &((*pContext)._1_Context_1);
		case 29:
			return &((*pContext).Context_1);
		case 30:
			return &((*pContext)._L432);
		case 31:
			return &((*pContext)._L431);
		case 32:
			return &((*pContext)._L435);
		case 33:
			return &((*pContext)._L436);
		case 34:
			return &((*pContext)._L437);
		case 35:
			return &((*pContext)._L434);
		case 36:
			return &((*pContext)._L433);
		case 37:
			return &((*pContext)._L438);
		case 38:
			return &((*pContext)._L439);
		case 39:
			return &((*pContext)._L440);
		case 40:
			return &((*pContext)._L441);
		case 41:
			return &((*pContext)._L443);
		case 42:
			return &((*pContext)._L442);
		case 43:
			return &((*pContext)._L446);
		case 44:
			return &((*pContext)._L447);
		case 45:
			return &((*pContext).cont);
		case 46:
			return &((*pContext).Packets_Out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::SEND_WriteMessageHeader/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SEND_WriteMessageHeader_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SEND_WriteMessageHeader_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldw", 30, 30);
	_SCSIM_Mapping_SEND_FindSlot_TM_lib_internal("TM_lib_internal::SEND_FindSlot", "1", 47, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 60, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_int_Utils, 61, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_int_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_int_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_int_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_kcg_int_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 66, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 67, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 68, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 69, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "HeadersOut", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 70, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NewStartAddr", &_SCSIM_kcg_int_Utils, 71, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NewEndAddr", &_SCSIM_kcg_int_Utils, 72, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_WriteMessageHeader_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_WriteMessageHeader_TM_lib_internal* pContext = (outC_SEND_WriteMessageHeader_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 47:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 48:
			return &((*pContext)._L1);
		case 49:
			return &((*pContext)._L4);
		case 50:
			return &((*pContext)._L5);
		case 51:
			return &((*pContext)._L8);
		case 52:
			return &((*pContext)._L9);
		case 53:
			return &((*pContext)._L16);
		case 54:
			return &((*pContext)._L17);
		case 55:
			return &((*pContext)._L18);
		case 56:
			return &((*pContext)._L22);
		case 57:
			return &((*pContext)._L23);
		case 58:
			return &((*pContext)._L24);
		case 59:
			return &((*pContext)._L31);
		case 60:
			return &((*pContext)._L32);
		case 61:
			return &((*pContext)._L33);
		case 62:
			return &((*pContext)._L34);
		case 63:
			return &((*pContext)._L35);
		case 64:
			return &((*pContext)._L36);
		case 65:
			return &((*pContext)._L37);
		case 66:
			return &((*pContext)._L43);
		case 67:
			return &((*pContext)._L44);
		case 68:
			return &((*pContext)._L7);
		case 69:
			return &((*pContext)._L3);
		case 70:
			return &((*pContext).HeadersOut);
		case 71:
			return &((*pContext).NewStartAddr);
		case 72:
			return &((*pContext).NewEndAddr);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::SEND_MessageData/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SEND_MessageData_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SEND_MessageData_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "mapwi", 500, 500);
	_SCSIM_Mapping_SEND_WriteBaliseDataElement_TM_lib_internal("TM_lib_internal::SEND_WriteBaliseDataElement", "1", 73, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 74, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L402", &_SCSIM_kcg_int_Utils, 75, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L403", &_SCSIM_kcg_bool_Utils, 76, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L404", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 77, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L406", &_SCSIM_array_int_500_Utils, 78, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L407", &_SCSIM_kcg_int_Utils, 79, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L408", &_SCSIM_kcg_int_Utils, 80, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L413", &_SCSIM_array_int_500_500_Utils, 81, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L414", &_SCSIM_array_int_500_Utils, 82, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L415", &_SCSIM_array_int_500_Utils, 83, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "DataOut", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 84, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_MessageData_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_MessageData_TM_lib_internal* pContext = (outC_SEND_MessageData_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 73:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 74:
			return &((*pContext)._L1);
		case 75:
			return &((*pContext)._L402);
		case 76:
			return &((*pContext)._L403);
		case 77:
			return &((*pContext)._L404);
		case 78:
			return &((*pContext)._L406);
		case 79:
			return &((*pContext)._L407);
		case 80:
			return &((*pContext)._L408);
		case 81:
			return &((*pContext)._L413);
		case 82:
			return &((*pContext)._L414);
		case 83:
			return &((*pContext)._L415);
		case 84:
			return &((*pContext).DataOut);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::C_P027V1_tracksim_compr_body/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P027V1_tracksim_compr_body_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P027V1_tracksim_compr_body_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined TM_conversions::CAST_Int_to_Q_DIR*/
	pSimulator->m_pfnPushInstance(pSimulator, "TM_conversions::CAST_Int_to_Q_DIR", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_dir", &_SCSIM_Q_DIR_Utils, 85, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "q_dir_int", &_SCSIM_kcg_int_Utils, 86, valid, 0, 0);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_87_Utils, 87);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_88_Utils, 88);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_89_Utils, 89);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 90, valid, 89, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 91, valid, 89, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_92_Utils, 92);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 93, valid, 92, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 94, valid, 92, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_95_Utils, 95);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_DIR_Utils, 96, valid, 95, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 97, valid, 95, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_98_Utils, 98);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_DIR_Utils, 99, valid, 98, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 100, valid, 98, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 101, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_dir_in", &_SCSIM_kcg_int_Utils, 102, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 103, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 104, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_T_Build_Metadata_Packet_ID_TM_lib_internal("TM_lib_internal::T_Build_Metadata_Packet_ID", "1", 105, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "n_iter_k", &_SCSIM_kcg_int_Utils, 106, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P027V1_trackside_int_T_TM_Utils, 107, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L204", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 108, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L206", &_SCSIM_kcg_int_Utils, 109, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L209", &_SCSIM_array_int_494_Utils, 110, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L212", &_SCSIM_kcg_int_Utils, 111, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L213", &_SCSIM_kcg_int_Utils, 112, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L336", &_SCSIM_kcg_int_Utils, 113, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L219", &_SCSIM_kcg_int_Utils, 114, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L218", &_SCSIM_kcg_int_Utils, 115, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L217", &_SCSIM_kcg_int_Utils, 116, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L216", &_SCSIM_kcg_int_Utils, 117, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L215", &_SCSIM_kcg_int_Utils, 118, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L214", &_SCSIM_kcg_bool_Utils, 119, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L356", &_SCSIM_Q_DIR_Utils, 120, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L371", &_SCSIM_kcg_int_Utils, 121, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L370", &_SCSIM_kcg_int_Utils, 122, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L369", &_SCSIM_P027V1_trackide_qdifflist_T_TM_Utils, 123, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L368", &_SCSIM_kcg_int_Utils, 124, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L367", &_SCSIM_P027V1_trackide_sectionlist_T_TM_Utils, 125, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L373", &_SCSIM_array_int_6_Utils, 126, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L383", &_SCSIM_array_int_500_Utils, 127, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L386", &_SCSIM_array__933_Utils, 128, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L385", &_SCSIM_array__903_Utils, 129, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L387", &_SCSIM_kcg_int_Utils, 130, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L391", &_SCSIM_kcg_int_Utils, 131, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L394", &_SCSIM_P027V1_section_int_T_TM_Utils, 132, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L396", &_SCSIM_kcg_int_Utils, 133, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L397", &_SCSIM_nid_packet_meta_TM_Utils, 134, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L400", &_SCSIM_kcg_int_Utils, 135, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L401", &_SCSIM_kcg_int_Utils, 136, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Header", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 137, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "P027V1_body_compressed", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 138, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "P027V1_sections", &_SCSIM__2_P027V1_OBU_sectionlist_int_T_TM_Utils, 139, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "n_iter_k_out", &_SCSIM_kcg_int_Utils, 140, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P027V1_tracksim_compr_body_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P027V1_tracksim_compr_body_TM_conversions* pContext = (outC_C_P027V1_tracksim_compr_body_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 85:
			return &((*pContext).q_dir_1);
		case 86:
			return &((*pContext).q_dir_int_1);
		case 87:
			return &((*pContext).IfBlock1_clock_1);
		case 88:
			return &((*pContext)._2_else_clock_1_IfBlock1);
		case 89:
			return &((*pContext).else_clock_1_IfBlock1);
		case 90:
			return &((*pContext)._L2_1_IfBlock1);
		case 91:
			return &((*pContext)._L1_1_IfBlock1);
		case 92:
			return &((*pContext).else_clock_1_IfBlock1);
		case 93:
			return &((*pContext)._L2_11_IfBlock1);
		case 94:
			return &((*pContext)._L4_1_IfBlock1);
		case 95:
			return &((*pContext)._2_else_clock_1_IfBlock1);
		case 96:
			return &((*pContext)._L3_1_IfBlock1);
		case 97:
			return &((*pContext)._L5_1_IfBlock1);
		case 98:
			return &((*pContext).IfBlock1_clock_1);
		case 99:
			return &((*pContext)._L4_13_IfBlock1);
		case 100:
			return &((*pContext)._L5_14_IfBlock1);
		case 101:
			return &((*pContext).error_1);
		case 102:
			return &((*pContext).q_dir_in_1);
		case 103:
			return &((*pContext)._L13_1);
		case 104:
			return &((*pContext)._L12_1);
		case 105:
			return &((*pContext).Context_1);
		case 106:
			return &((*pContext).n_iter_k);
		case 107:
			return &((*pContext)._L1);
		case 108:
			return &((*pContext)._L204);
		case 109:
			return &((*pContext)._L206);
		case 110:
			return &((*pContext)._L209);
		case 111:
			return &((*pContext)._L212);
		case 112:
			return &((*pContext)._L213);
		case 113:
			return &((*pContext)._L336);
		case 114:
			return &((*pContext)._L219);
		case 115:
			return &((*pContext)._L218);
		case 116:
			return &((*pContext)._L217);
		case 117:
			return &((*pContext)._L216);
		case 118:
			return &((*pContext)._L215);
		case 119:
			return &((*pContext)._L214);
		case 120:
			return &((*pContext)._L356);
		case 121:
			return &((*pContext)._L371);
		case 122:
			return &((*pContext)._L370);
		case 123:
			return &((*pContext)._L369);
		case 124:
			return &((*pContext)._L368);
		case 125:
			return &((*pContext)._L367);
		case 126:
			return &((*pContext)._L373);
		case 127:
			return &((*pContext)._L383);
		case 128:
			return &((*pContext)._L386);
		case 129:
			return &((*pContext)._L385);
		case 130:
			return &((*pContext)._L387);
		case 131:
			return &((*pContext)._L391);
		case 132:
			return &((*pContext)._L394);
		case 133:
			return &((*pContext)._L396);
		case 134:
			return &((*pContext)._L397);
		case 135:
			return &((*pContext)._L400);
		case 136:
			return &((*pContext)._L401);
		case 137:
			return &((*pContext).Header);
		case 138:
			return &((*pContext).P027V1_body_compressed);
		case 139:
			return &((*pContext).P027V1_sections);
		case 140:
			return &((*pContext).n_iter_k_out);
		default:
			break;
	}
	return 0;
}

static int Is89Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_89_Utils = {Is89Active};

static int Is92Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_92_Utils = {Is92Active};

static int Is88Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_88_Utils = {Is88Active};

static int Is95Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_95_Utils = {Is95Active};

static int Is87Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_87_Utils = {Is87Active};

static int Is98Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_98_Utils = {Is98Active};

/****************************************************************
 ** TM_conversions::C_P027V1_tracksim_compr_one_section/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P027V1_tracksim_compr_o_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P027V1_tracksim_compr_o_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_C_P027_flatten_sections_qdiff_TM_lib_internal("TM_lib_internal::C_P027_flatten_sections_qdiff", "1", 141, 0, 0);
	_SCSIM_Mapping_T_DeterminePacketSizeInt_TM_lib_internal("TM_lib_internal::T_DeterminePacketSizeInt", "1", 142, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "p_size", &_SCSIM_kcg_int_Utils, 143, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P027V1_section_int_T_TM_Utils, 144, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L204", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 145, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L206", &_SCSIM_kcg_int_Utils, 146, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L209", &_SCSIM_array_int_432_Utils, 147, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L212", &_SCSIM_kcg_int_Utils, 148, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L213", &_SCSIM_kcg_int_Utils, 149, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L336", &_SCSIM_kcg_int_Utils, 150, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L217", &_SCSIM_P027V1_trackide_qdifflist_T_TM_Utils, 151, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L216", &_SCSIM_kcg_int_Utils, 152, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L215", &_SCSIM_kcg_int_Utils, 153, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L214", &_SCSIM_kcg_int_Utils, 154, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L373", &_SCSIM_array_int_4_Utils, 155, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L383", &_SCSIM_array_int_500_Utils, 156, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L385", &_SCSIM_array_int_68_Utils, 157, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L387", &_SCSIM_kcg_int_Utils, 158, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L422", &_SCSIM_Q_DIR_Utils, 159, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L423", &_SCSIM_kcg_bool_Utils, 160, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L424", &_SCSIM_kcg_int_Utils, 161, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L425", &_SCSIM_P027V1_sections_array_flat_qdiff_T_TM_Utils, 162, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L426", &_SCSIM_kcg_int_Utils, 163, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L427", &_SCSIM_kcg_int_Utils, 164, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L429", &_SCSIM_kcg_int_Utils, 165, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L430", &_SCSIM_kcg_int_Utils, 166, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Header", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 167, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "P027V1_sections_compressed", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 168, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P027V1_tracksim_compr_o_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P027V1_tracksim_compr_o_TM_conversions* pContext = (outC_C_P027V1_tracksim_compr_o_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 141:
			return &((*pContext)._1_Context_1);
		case 142:
			return &((*pContext).Context_1);
		case 143:
			return &((*pContext).p_size);
		case 144:
			return &((*pContext)._L1);
		case 145:
			return &((*pContext)._L204);
		case 146:
			return &((*pContext)._L206);
		case 147:
			return &((*pContext)._L209);
		case 148:
			return &((*pContext)._L212);
		case 149:
			return &((*pContext)._L213);
		case 150:
			return &((*pContext)._L336);
		case 151:
			return &((*pContext)._L217);
		case 152:
			return &((*pContext)._L216);
		case 153:
			return &((*pContext)._L215);
		case 154:
			return &((*pContext)._L214);
		case 155:
			return &((*pContext)._L373);
		case 156:
			return &((*pContext)._L383);
		case 157:
			return &((*pContext)._L385);
		case 158:
			return &((*pContext)._L387);
		case 159:
			return &((*pContext)._L422);
		case 160:
			return &((*pContext)._L423);
		case 161:
			return &((*pContext)._L424);
		case 162:
			return &((*pContext)._L425);
		case 163:
			return &((*pContext)._L426);
		case 164:
			return &((*pContext)._L427);
		case 165:
			return &((*pContext)._L429);
		case 166:
			return &((*pContext)._L430);
		case 167:
			return &((*pContext).Header);
		case 168:
			return &((*pContext).P027V1_sections_compressed);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::SEND_FindSlot/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SEND_FindSlot_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SEND_FindSlot_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 169, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 170, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 171, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 172, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_int_Utils, 173, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_NID_PACKET_Utils, 174, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 175, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_NID_PACKET_Utils, 176, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 177, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Acc", &_SCSIM_kcg_int_Utils, 178, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_FindSlot_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_FindSlot_TM_lib_internal* pContext = (outC_SEND_FindSlot_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 169:
			return &((*pContext)._L1);
		case 170:
			return &((*pContext)._L2);
		case 171:
			return &((*pContext)._L3);
		case 172:
			return &((*pContext)._L17);
		case 173:
			return &((*pContext)._L19);
		case 174:
			return &((*pContext)._L27);
		case 175:
			return &((*pContext)._L28);
		case 176:
			return &((*pContext)._L29);
		case 177:
			return &((*pContext).Cont);
		case 178:
			return &((*pContext).Acc);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::SEND_WriteBaliseDataElement/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SEND_WriteBaliseDataElement_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SEND_WriteBaliseDataElement_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 179, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 180, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 181, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 182, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 183, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 184, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 185, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 186, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 187, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 188, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 189, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 190, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 191, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 192, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "DataOut", &_SCSIM_kcg_int_Utils, 193, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_WriteBaliseDataElement_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_WriteBaliseDataElement_TM_lib_internal* pContext = (outC_SEND_WriteBaliseDataElement_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 179:
			return &((*pContext)._L1);
		case 180:
			return &((*pContext)._L2);
		case 181:
			return &((*pContext)._L3);
		case 182:
			return &((*pContext)._L4);
		case 183:
			return &((*pContext)._L5);
		case 184:
			return &((*pContext)._L6);
		case 185:
			return &((*pContext)._L7);
		case 186:
			return &((*pContext)._L8);
		case 187:
			return &((*pContext)._L9);
		case 188:
			return &((*pContext)._L10);
		case 189:
			return &((*pContext)._L14);
		case 190:
			return &((*pContext)._L16);
		case 191:
			return &((*pContext)._L17);
		case 192:
			return &((*pContext).Cont);
		case 193:
			return &((*pContext).DataOut);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::T_Build_Metadata_Packet_ID/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_T_Build_Metadata_Packet_ID_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_T_Build_Metadata_Packet_ID_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 194, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 195, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_NID_PACKET_Utils, 196, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 197, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 198, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 199, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 200, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 201, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 202, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 203, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_packet_meta", &_SCSIM_nid_packet_meta_TM_Utils, 204, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_T_Build_Metadata_Packet_ID_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_T_Build_Metadata_Packet_ID_TM_lib_internal* pContext = (outC_T_Build_Metadata_Packet_ID_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 194:
			return &((*pContext)._L1);
		case 195:
			return &((*pContext)._L2);
		case 196:
			return &((*pContext)._L3);
		case 197:
			return &((*pContext)._L4);
		case 198:
			return &((*pContext)._L6);
		case 199:
			return &((*pContext)._L8);
		case 200:
			return &((*pContext)._L9);
		case 201:
			return &((*pContext)._L10);
		case 202:
			return &((*pContext)._L11);
		case 203:
			return &((*pContext)._L12);
		case 204:
			return &((*pContext).nid_packet_meta);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::C_P027_flatten_sections_qdiff/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P027_flatten_sections_qdiff_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P027_flatten_sections_qdiff_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldi", 32, 32);
	_SCSIM_Mapping_C_P027V1_fs_flatten_array_TM_lib_internal("TM_lib_internal::C_P027V1_fs_flatten_array_qdiff", "1", 205, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 32, 32);
	_SCSIM_Mapping_C_P027V1_fs_struct_to_arr_TM_lib_internal("TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff", "1", 206, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L76", &_SCSIM_P027V1_sections_array_flat_qdiff_T_TM_Utils, 207, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L75", &_SCSIM_P027V1_OBU_sectionlist_int_qdiff_T_TM_Utils, 208, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L74", &_SCSIM_array_int_2_32_Utils, 209, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L83", &_SCSIM_P027V1_sections_array_flat_qdiff_T_TM_Utils, 210, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L84", &_SCSIM_array_int_2_32_32_Utils, 211, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Flattened", &_SCSIM_P027V1_sections_array_flat_qdiff_T_TM_Utils, 212, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P027_flatten_sections_qdiff_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P027_flatten_sections_qdiff_TM_lib_internal* pContext = (outC_C_P027_flatten_sections_qdiff_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 205:
			if (nSize != 1)
				break;
			return &((*pContext)._1_Context_1[pIteratorFilter[0]]);
		case 206:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 207:
			return &((*pContext)._L76);
		case 208:
			return &((*pContext)._L75);
		case 209:
			return &((*pContext)._L74);
		case 210:
			return &((*pContext)._L83);
		case 211:
			return &((*pContext)._L84);
		case 212:
			return &((*pContext).Flattened);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::T_DeterminePacketSizeInt/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_T_DeterminePacketSizeInt_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_T_DeterminePacketSizeInt_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 213, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 214, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 215, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 216, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 217, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "p_size", &_SCSIM_kcg_int_Utils, 218, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_T_DeterminePacketSizeInt_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_T_DeterminePacketSizeInt_TM_lib_internal* pContext = (outC_T_DeterminePacketSizeInt_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 213:
			return &((*pContext)._L1);
		case 214:
			return &((*pContext)._L2);
		case 215:
			return &((*pContext)._L3);
		case 216:
			return &((*pContext)._L6);
		case 217:
			return &((*pContext)._L7);
		case 218:
			return &((*pContext).p_size);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::C_P027V1_fs_flatten_array_qdiff/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P027V1_fs_flatten_array_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P027V1_fs_flatten_array_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P027V1_sections_array_flat_qdiff_T_TM_Utils, 219, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 220, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 221, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 222, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_P027V1_sections_array_flat_qdiff_T_TM_Utils, 223, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 224, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_Utils, 225, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 226, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L154", &_SCSIM_kcg_int_Utils, 227, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "flat", &_SCSIM_P027V1_sections_array_flat_qdiff_T_TM_Utils, 228, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P027V1_fs_flatten_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P027V1_fs_flatten_array_TM_lib_internal* pContext = (outC_C_P027V1_fs_flatten_array_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 219:
			return &((*pContext)._L1);
		case 220:
			return &((*pContext)._L3);
		case 221:
			return &((*pContext)._L5);
		case 222:
			return &((*pContext)._L6);
		case 223:
			return &((*pContext)._L7);
		case 224:
			return &((*pContext)._L8);
		case 225:
			return &((*pContext)._L2);
		case 226:
			return &((*pContext)._L10);
		case 227:
			return &((*pContext)._L154);
		case 228:
			return &((*pContext).flat);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P027V1_fs_struct_to_arr_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P027V1_fs_struct_to_arr_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P027V1_section_int_qdiff_T_TM_Utils, 229, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array_int_2_Utils, 230, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 231, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 232, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "section_arrays", &_SCSIM_P027V1_section_array_qdiff_T_TM_Utils, 233, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P027V1_fs_struct_to_arr_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P027V1_fs_struct_to_arr_TM_lib_internal* pContext = (outC_C_P027V1_fs_struct_to_arr_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 229:
			return &((*pContext)._L1);
		case 230:
			return &((*pContext)._L2);
		case 231:
			return &((*pContext)._L4);
		case 232:
			return &((*pContext)._L3);
		case 233:
			return &((*pContext).section_arrays);
		default:
			break;
	}
	return 0;
}

static int _SCSIM_ClockActive_kcg_true(void* clock) {
return *(kcg_bool*)clock == kcg_true ? 1 : 0;
}
static int _SCSIM_ClockActive_kcg_false(void* clock) {
return *(kcg_bool*)clock == kcg_false ? 1 : 0;
}
