#include "Write_P005_TM_trackside_mapping.h"
#include "Write_P005_TM_trackside_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Write_P005_TM_trackside();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** TM_trackside::Write_P005/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Write_P005_TM_trackside() {
	pSimulator->m_pfnSetRoot(pSimulator, "TM_trackside::Write_P005/", &outputs_ctx, _SCSIM_Get_Write_P005_TM_trackside_Handle);
	_SCSIM_Mapping_SIM_SEND_WriteBaliseMessa_DRAFTS("DRAFTS::SIM_SEND_WriteBaliseMessageHeader", "1", 1, 0, 0);
	_SCSIM_Mapping_SEND_MessageData_TM_lib_internal("TM_lib_internal::SEND_MessageData", "1", 2, 0, 0);
	_SCSIM_Mapping_C_P005_tracksim_compr_TM_conversions("TM_conversions::C_P005_tracksim_compr", "1", 3, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_trackside_int_T_TM_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Error", &_SCSIM_kcg_bool_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "RadioPacketsOut", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Packet05", &_SCSIM_P005_trackside_int_T_TM_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Packets", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 19, valid, 0, 0);
}

void* _SCSIM_Get_Write_P005_TM_trackside_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._1_Context_1);
		case 2:
			return &(outputs_ctx._2_Context_1);
		case 3:
			return &(outputs_ctx.Context_1);
		case 4:
			return &(outputs_ctx._L1);
		case 5:
			return &(outputs_ctx._L4);
		case 6:
			return &(outputs_ctx._L10);
		case 7:
			return &(outputs_ctx._L18);
		case 8:
			return &(outputs_ctx._L21);
		case 9:
			return &(outputs_ctx._L22);
		case 10:
			return &(outputs_ctx._L39);
		case 11:
			return &(outputs_ctx._L40);
		case 12:
			return &(outputs_ctx._L42);
		case 13:
			return &(outputs_ctx._L41);
		case 14:
			return &(outputs_ctx._L44);
		case 15:
			return &(outputs_ctx._L43);
		case 16:
			return &(outputs_ctx.Error);
		case 17:
			return &(outputs_ctx.RadioPacketsOut);
		case 18:
			return &(inputs_ctx.Packet05);
		case 19:
			return &(inputs_ctx.Packets);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** DRAFTS::SIM_SEND_WriteBaliseMessageHeader/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SIM_SEND_WriteBaliseMessa_DRAFTS(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SIM_SEND_WriteBaliseMessa_DRAFTS_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldw", 30, 30);
	_SCSIM_Mapping_SEND_FindSlot_DRAFTS("DRAFTS::SEND_FindSlot", "1", 20, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_int_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_int_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_int_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_int_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_kcg_int_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "HeadersOut", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NewStartAddr", &_SCSIM_kcg_int_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NewEndAddr", &_SCSIM_kcg_int_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SIM_SEND_WriteBaliseMessa_DRAFTS_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SIM_SEND_WriteBaliseMessa_DRAFTS* pContext = (outC_SIM_SEND_WriteBaliseMessa_DRAFTS*)pInstance;
	switch (nHandleIdent) {
		case 20:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 21:
			return &((*pContext)._L1);
		case 22:
			return &((*pContext)._L4);
		case 23:
			return &((*pContext)._L5);
		case 24:
			return &((*pContext)._L8);
		case 25:
			return &((*pContext)._L9);
		case 26:
			return &((*pContext)._L16);
		case 27:
			return &((*pContext)._L17);
		case 28:
			return &((*pContext)._L18);
		case 29:
			return &((*pContext)._L22);
		case 30:
			return &((*pContext)._L23);
		case 31:
			return &((*pContext)._L24);
		case 32:
			return &((*pContext)._L31);
		case 33:
			return &((*pContext)._L32);
		case 34:
			return &((*pContext)._L33);
		case 35:
			return &((*pContext)._L34);
		case 36:
			return &((*pContext)._L35);
		case 37:
			return &((*pContext)._L36);
		case 38:
			return &((*pContext)._L37);
		case 39:
			return &((*pContext)._L43);
		case 40:
			return &((*pContext)._L44);
		case 41:
			return &((*pContext)._L7);
		case 42:
			return &((*pContext)._L3);
		case 43:
			return &((*pContext).HeadersOut);
		case 44:
			return &((*pContext).NewStartAddr);
		case 45:
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
	_SCSIM_Mapping_SEND_WriteBaliseDataElement_TM_lib_internal("TM_lib_internal::SEND_WriteBaliseDataElement", "1", 46, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 47, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L402", &_SCSIM_kcg_int_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L403", &_SCSIM_kcg_bool_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L404", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L406", &_SCSIM_array_int_500_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L407", &_SCSIM_kcg_int_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L408", &_SCSIM_kcg_int_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L413", &_SCSIM_array_int_500_500_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L414", &_SCSIM_array_int_500_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L415", &_SCSIM_array_int_500_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "DataOut", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_MessageData_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_MessageData_TM_lib_internal* pContext = (outC_SEND_MessageData_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 46:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 47:
			return &((*pContext)._L1);
		case 48:
			return &((*pContext)._L402);
		case 49:
			return &((*pContext)._L403);
		case 50:
			return &((*pContext)._L404);
		case 51:
			return &((*pContext)._L406);
		case 52:
			return &((*pContext)._L407);
		case 53:
			return &((*pContext)._L408);
		case 54:
			return &((*pContext)._L413);
		case 55:
			return &((*pContext)._L414);
		case 56:
			return &((*pContext)._L415);
		case 57:
			return &((*pContext).DataOut);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::C_P005_tracksim_compr/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_tracksim_compr_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P005_tracksim_compr_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined TM_conversions::CAST_Int_to_Q_DIR*/
	pSimulator->m_pfnPushInstance(pSimulator, "TM_conversions::CAST_Int_to_Q_DIR", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_dir", &_SCSIM_Q_DIR_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "q_dir_int", &_SCSIM_kcg_int_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_60_Utils, 60);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_61_Utils, 61);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_62_Utils, 62);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 63, valid, 62, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 64, valid, 62, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_65_Utils, 65);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 66, valid, 65, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 67, valid, 65, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_68_Utils, 68);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_DIR_Utils, 69, valid, 68, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 70, valid, 68, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_71_Utils, 71);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_DIR_Utils, 72, valid, 71, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 73, valid, 71, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 74, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_dir_in", &_SCSIM_kcg_int_Utils, 75, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 76, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 77, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_DeterminePacketSizeInt_TM_lib_internal("TM_lib_internal::DeterminePacketSizeInt", "1", 78, 0, 0);
	_SCSIM_Mapping_C_P005_flatten_sections_TM_lib_internal("TM_lib_internal::C_P005_flatten_sections", "1", 79, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "p_size", &_SCSIM_kcg_int_Utils, 80, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_trackside_int_T_TM_Utils, 81, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L204", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 82, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L206", &_SCSIM_kcg_int_Utils, 83, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L209", &_SCSIM_array_int_271_Utils, 84, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L212", &_SCSIM_kcg_int_Utils, 85, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L213", &_SCSIM_kcg_int_Utils, 86, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L336", &_SCSIM_kcg_int_Utils, 87, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L219", &_SCSIM_kcg_int_Utils, 88, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L218", &_SCSIM_kcg_int_Utils, 89, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L217", &_SCSIM_kcg_int_Utils, 90, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L216", &_SCSIM_kcg_int_Utils, 91, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L215", &_SCSIM_kcg_int_Utils, 92, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L214", &_SCSIM_kcg_bool_Utils, 93, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L356", &_SCSIM_Q_DIR_Utils, 94, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L371", &_SCSIM_kcg_int_Utils, 95, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L370", &_SCSIM_kcg_int_Utils, 96, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L369", &_SCSIM_kcg_int_Utils, 97, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L368", &_SCSIM_kcg_int_Utils, 98, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L367", &_SCSIM_kcg_int_Utils, 99, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L366", &_SCSIM_kcg_int_Utils, 100, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L365", &_SCSIM_P005_trackide_sectionlist_T_TM_Utils, 101, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L373", &_SCSIM_array_int_4_Utils, 102, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L375", &_SCSIM_P005_section_int_T_TM_Utils, 103, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L376", &_SCSIM_array_int_1_Utils, 104, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L378", &_SCSIM_kcg_int_Utils, 105, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L379", &_SCSIM_kcg_int_Utils, 106, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L380", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 107, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L381", &_SCSIM_array_int_5_Utils, 108, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L383", &_SCSIM_array_int_500_Utils, 109, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L384", &_SCSIM_array_int_229_Utils, 110, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L386", &_SCSIM_array__793_Utils, 111, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L385", &_SCSIM_array__730_Utils, 112, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L387", &_SCSIM_kcg_int_Utils, 113, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Header", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 114, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "P005_compressed", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 115, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_tracksim_compr_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_tracksim_compr_TM_conversions* pContext = (outC_C_P005_tracksim_compr_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 58:
			return &((*pContext).q_dir_1);
		case 59:
			return &((*pContext).q_dir_int_1);
		case 60:
			return &((*pContext).IfBlock1_clock_1);
		case 61:
			return &((*pContext)._3_else_clock_1_IfBlock1);
		case 62:
			return &((*pContext).else_clock_1_IfBlock1);
		case 63:
			return &((*pContext)._L2_1_IfBlock1);
		case 64:
			return &((*pContext)._L1_1_IfBlock1);
		case 65:
			return &((*pContext).else_clock_1_IfBlock1);
		case 66:
			return &((*pContext)._L2_12_IfBlock1);
		case 67:
			return &((*pContext)._L4_1_IfBlock1);
		case 68:
			return &((*pContext)._3_else_clock_1_IfBlock1);
		case 69:
			return &((*pContext)._L3_1_IfBlock1);
		case 70:
			return &((*pContext)._L5_1_IfBlock1);
		case 71:
			return &((*pContext).IfBlock1_clock_1);
		case 72:
			return &((*pContext)._L4_14_IfBlock1);
		case 73:
			return &((*pContext)._L5_15_IfBlock1);
		case 74:
			return &((*pContext).error_1);
		case 75:
			return &((*pContext).q_dir_in_1);
		case 76:
			return &((*pContext)._L13_1);
		case 77:
			return &((*pContext)._L12_1);
		case 78:
			return &((*pContext)._1_Context_1);
		case 79:
			return &((*pContext).Context_1);
		case 80:
			return &((*pContext).p_size);
		case 81:
			return &((*pContext)._L1);
		case 82:
			return &((*pContext)._L204);
		case 83:
			return &((*pContext)._L206);
		case 84:
			return &((*pContext)._L209);
		case 85:
			return &((*pContext)._L212);
		case 86:
			return &((*pContext)._L213);
		case 87:
			return &((*pContext)._L336);
		case 88:
			return &((*pContext)._L219);
		case 89:
			return &((*pContext)._L218);
		case 90:
			return &((*pContext)._L217);
		case 91:
			return &((*pContext)._L216);
		case 92:
			return &((*pContext)._L215);
		case 93:
			return &((*pContext)._L214);
		case 94:
			return &((*pContext)._L356);
		case 95:
			return &((*pContext)._L371);
		case 96:
			return &((*pContext)._L370);
		case 97:
			return &((*pContext)._L369);
		case 98:
			return &((*pContext)._L368);
		case 99:
			return &((*pContext)._L367);
		case 100:
			return &((*pContext)._L366);
		case 101:
			return &((*pContext)._L365);
		case 102:
			return &((*pContext)._L373);
		case 103:
			return &((*pContext)._L375);
		case 104:
			return &((*pContext)._L376);
		case 105:
			return &((*pContext)._L378);
		case 106:
			return &((*pContext)._L379);
		case 107:
			return &((*pContext)._L380);
		case 108:
			return &((*pContext)._L381);
		case 109:
			return &((*pContext)._L383);
		case 110:
			return &((*pContext)._L384);
		case 111:
			return &((*pContext)._L386);
		case 112:
			return &((*pContext)._L385);
		case 113:
			return &((*pContext)._L387);
		case 114:
			return &((*pContext).Header);
		case 115:
			return &((*pContext).P005_compressed);
		default:
			break;
	}
	return 0;
}

static int Is62Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_62_Utils = {Is62Active};

static int Is65Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_65_Utils = {Is65Active};

static int Is61Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_61_Utils = {Is61Active};

static int Is68Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_68_Utils = {Is68Active};

static int Is60Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_60_Utils = {Is60Active};

static int Is71Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_71_Utils = {Is71Active};

/****************************************************************
 ** DRAFTS::SEND_FindSlot/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SEND_FindSlot_DRAFTS(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SEND_FindSlot_DRAFTS_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 116, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 117, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 118, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 119, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_int_Utils, 120, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_NID_PACKET_Utils, 121, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 122, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_NID_PACKET_Utils, 123, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 124, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Acc", &_SCSIM_kcg_int_Utils, 125, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_FindSlot_DRAFTS_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_FindSlot_DRAFTS* pContext = (outC_SEND_FindSlot_DRAFTS*)pInstance;
	switch (nHandleIdent) {
		case 116:
			return &((*pContext)._L1);
		case 117:
			return &((*pContext)._L2);
		case 118:
			return &((*pContext)._L3);
		case 119:
			return &((*pContext)._L17);
		case 120:
			return &((*pContext)._L19);
		case 121:
			return &((*pContext)._L27);
		case 122:
			return &((*pContext)._L28);
		case 123:
			return &((*pContext)._L29);
		case 124:
			return &((*pContext).Cont);
		case 125:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 126, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 127, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 128, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 129, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 130, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 131, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 132, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 133, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 134, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 135, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 136, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 137, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 138, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 139, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "DataOut", &_SCSIM_kcg_int_Utils, 140, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_WriteBaliseDataElement_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_WriteBaliseDataElement_TM_lib_internal* pContext = (outC_SEND_WriteBaliseDataElement_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 126:
			return &((*pContext)._L1);
		case 127:
			return &((*pContext)._L2);
		case 128:
			return &((*pContext)._L3);
		case 129:
			return &((*pContext)._L4);
		case 130:
			return &((*pContext)._L5);
		case 131:
			return &((*pContext)._L6);
		case 132:
			return &((*pContext)._L7);
		case 133:
			return &((*pContext)._L8);
		case 134:
			return &((*pContext)._L9);
		case 135:
			return &((*pContext)._L10);
		case 136:
			return &((*pContext)._L14);
		case 137:
			return &((*pContext)._L16);
		case 138:
			return &((*pContext)._L17);
		case 139:
			return &((*pContext).Cont);
		case 140:
			return &((*pContext).DataOut);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::DeterminePacketSizeInt/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_DeterminePacketSizeInt_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_DeterminePacketSizeInt_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 141, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 142, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 143, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 144, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 145, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "p_size", &_SCSIM_kcg_int_Utils, 146, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_DeterminePacketSizeInt_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_DeterminePacketSizeInt_TM_lib_internal* pContext = (outC_DeterminePacketSizeInt_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 141:
			return &((*pContext)._L1);
		case 142:
			return &((*pContext)._L2);
		case 143:
			return &((*pContext)._L3);
		case 144:
			return &((*pContext)._L6);
		case 145:
			return &((*pContext)._L7);
		case 146:
			return &((*pContext).p_size);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::C_P005_flatten_sections/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_flatten_sections_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P005_flatten_sections_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldi", 231, 231);
	_SCSIM_Mapping_C_P005_fs_flatten_array_TM_lib_internal("TM_lib_internal::C_P005_fs_flatten_array", "2", 147, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 33, 33);
	_SCSIM_Mapping_C_P005_fs_struct_to_array_TM_lib_internal("TM_lib_internal::C_P005_fs_struct_to_array", "2", 148, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L76", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 149, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L75", &_SCSIM_P005_OBU_sectionlist_int_T_TM_Utils, 150, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L74", &_SCSIM_array_int_7_33_Utils, 151, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L78", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 152, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L80", &_SCSIM_array_int_7_33_231_Utils, 153, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Flattened", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 154, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_flatten_sections_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_flatten_sections_TM_lib_internal* pContext = (outC_C_P005_flatten_sections_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 147:
			if (nSize != 1)
				break;
			return &((*pContext)._1_Context_2[pIteratorFilter[0]]);
		case 148:
			if (nSize != 1)
				break;
			return &((*pContext).Context_2[pIteratorFilter[0]]);
		case 149:
			return &((*pContext)._L76);
		case 150:
			return &((*pContext)._L75);
		case 151:
			return &((*pContext)._L74);
		case 152:
			return &((*pContext)._L78);
		case 153:
			return &((*pContext)._L80);
		case 154:
			return &((*pContext).Flattened);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::C_P005_fs_flatten_array/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_fs_flatten_array_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P005_fs_flatten_array_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 155, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 156, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 157, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 158, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 159, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 160, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_P005_OBU_sectionlist_array_T_TM_Utils, 161, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 162, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L154", &_SCSIM_kcg_int_Utils, 163, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "flat", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 164, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_fs_flatten_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_fs_flatten_array_TM_lib_internal* pContext = (outC_C_P005_fs_flatten_array_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 155:
			return &((*pContext)._L1);
		case 156:
			return &((*pContext)._L3);
		case 157:
			return &((*pContext)._L5);
		case 158:
			return &((*pContext)._L6);
		case 159:
			return &((*pContext)._L7);
		case 160:
			return &((*pContext)._L8);
		case 161:
			return &((*pContext)._L2);
		case 162:
			return &((*pContext)._L10);
		case 163:
			return &((*pContext)._L154);
		case 164:
			return &((*pContext).flat);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::C_P005_fs_struct_to_array/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_fs_struct_to_array_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P005_fs_struct_to_array_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_section_int_T_TM_Utils, 165, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array_int_7_Utils, 166, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 167, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 168, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 169, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 170, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 171, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 172, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 173, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "section_arrays", &_SCSIM_P005_section_array_T_TM_Utils, 174, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_fs_struct_to_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_fs_struct_to_array_TM_lib_internal* pContext = (outC_C_P005_fs_struct_to_array_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 165:
			return &((*pContext)._L1);
		case 166:
			return &((*pContext)._L2);
		case 167:
			return &((*pContext)._L9);
		case 168:
			return &((*pContext)._L8);
		case 169:
			return &((*pContext)._L7);
		case 170:
			return &((*pContext)._L6);
		case 171:
			return &((*pContext)._L5);
		case 172:
			return &((*pContext)._L4);
		case 173:
			return &((*pContext)._L3);
		case 174:
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
