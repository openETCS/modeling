#include "C_P027V1_tracksim_compr_body_TM_conversions_mapping.h"
#include "C_P027V1_tracksim_compr_body_TM_conversions_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_C_P027V1_tracksim_compr_body_TM_conversions();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** TM_conversions::C_P027V1_tracksim_compr_body/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P027V1_tracksim_compr_body_TM_conversions() {
	pSimulator->m_pfnSetRoot(pSimulator, "TM_conversions::C_P027V1_tracksim_compr_body/", &outputs_ctx, _SCSIM_Get_C_P027V1_tracksim_compr_body_TM_conversions_Handle);
	/*<< Inlined TM_conversions::CAST_Int_to_Q_DIR*/
	pSimulator->m_pfnPushInstance(pSimulator, "TM_conversions::CAST_Int_to_Q_DIR", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_dir", &_SCSIM_Q_DIR_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "q_dir_int", &_SCSIM_kcg_int_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_3_Utils, 3);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_4_Utils, 4);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_5_Utils, 5);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 6, valid, 5, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 7, valid, 5, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_8_Utils, 8);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 9, valid, 8, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 10, valid, 8, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_11_Utils, 11);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_DIR_Utils, 12, valid, 11, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 13, valid, 11, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_14_Utils, 14);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_DIR_Utils, 15, valid, 14, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 16, valid, 14, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_dir_in", &_SCSIM_kcg_int_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_T_Build_Metadata_Packet_ID_TM_lib_internal("TM_lib_internal::T_Build_Metadata_Packet_ID", "1", 21, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "n_iter_k", &_SCSIM_kcg_int_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P027V1_trackside_int_T_TM_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L204", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L206", &_SCSIM_kcg_int_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L209", &_SCSIM_array_int_494_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L212", &_SCSIM_kcg_int_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L213", &_SCSIM_kcg_int_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L336", &_SCSIM_kcg_int_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L219", &_SCSIM_kcg_int_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L218", &_SCSIM_kcg_int_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L217", &_SCSIM_kcg_int_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L216", &_SCSIM_kcg_int_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L215", &_SCSIM_kcg_int_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L214", &_SCSIM_kcg_bool_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L356", &_SCSIM_Q_DIR_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L371", &_SCSIM_kcg_int_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L370", &_SCSIM_kcg_int_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L369", &_SCSIM_P027V1_trackide_qdifflist_T_TM_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L368", &_SCSIM_kcg_int_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L367", &_SCSIM_P027V1_trackide_sectionlist_T_TM_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L373", &_SCSIM_array_int_6_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L383", &_SCSIM_array_int_500_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L386", &_SCSIM_array__467_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L385", &_SCSIM_array__429_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L387", &_SCSIM_kcg_int_Utils, 46, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L391", &_SCSIM_kcg_int_Utils, 47, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L394", &_SCSIM_P027V1_section_int_T_TM_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L396", &_SCSIM_kcg_int_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L397", &_SCSIM_nid_packet_meta_TM_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L400", &_SCSIM_kcg_int_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L401", &_SCSIM_kcg_int_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Header", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "P027V1_body_compressed", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "P027V1_sections", &_SCSIM_P027V1_OBU_sectionlist_int_T_TM_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "n_iter_k_out", &_SCSIM_kcg_int_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "P027V1_from_track", &_SCSIM_P027V1_trackside_int_T_TM_Utils, 57, valid, 0, 0);
}

void* _SCSIM_Get_C_P027V1_tracksim_compr_body_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.q_dir_1);
		case 2:
			return &(outputs_ctx.q_dir_int_1);
		case 3:
			return &(outputs_ctx.IfBlock1_clock_1);
		case 4:
			return &(outputs_ctx._2_else_clock_1_IfBlock1);
		case 5:
			return &(outputs_ctx.else_clock_1_IfBlock1);
		case 6:
			return &(outputs_ctx._L2_1_IfBlock1);
		case 7:
			return &(outputs_ctx._L1_1_IfBlock1);
		case 8:
			return &(outputs_ctx.else_clock_1_IfBlock1);
		case 9:
			return &(outputs_ctx._L2_11_IfBlock1);
		case 10:
			return &(outputs_ctx._L4_1_IfBlock1);
		case 11:
			return &(outputs_ctx._2_else_clock_1_IfBlock1);
		case 12:
			return &(outputs_ctx._L3_1_IfBlock1);
		case 13:
			return &(outputs_ctx._L5_1_IfBlock1);
		case 14:
			return &(outputs_ctx.IfBlock1_clock_1);
		case 15:
			return &(outputs_ctx._L4_13_IfBlock1);
		case 16:
			return &(outputs_ctx._L5_14_IfBlock1);
		case 17:
			return &(outputs_ctx.error_1);
		case 18:
			return &(outputs_ctx.q_dir_in_1);
		case 19:
			return &(outputs_ctx._L13_1);
		case 20:
			return &(outputs_ctx._L12_1);
		case 21:
			return &(outputs_ctx.Context_1);
		case 22:
			return &(outputs_ctx.n_iter_k);
		case 23:
			return &(outputs_ctx._L1);
		case 24:
			return &(outputs_ctx._L204);
		case 25:
			return &(outputs_ctx._L206);
		case 26:
			return &(outputs_ctx._L209);
		case 27:
			return &(outputs_ctx._L212);
		case 28:
			return &(outputs_ctx._L213);
		case 29:
			return &(outputs_ctx._L336);
		case 30:
			return &(outputs_ctx._L219);
		case 31:
			return &(outputs_ctx._L218);
		case 32:
			return &(outputs_ctx._L217);
		case 33:
			return &(outputs_ctx._L216);
		case 34:
			return &(outputs_ctx._L215);
		case 35:
			return &(outputs_ctx._L214);
		case 36:
			return &(outputs_ctx._L356);
		case 37:
			return &(outputs_ctx._L371);
		case 38:
			return &(outputs_ctx._L370);
		case 39:
			return &(outputs_ctx._L369);
		case 40:
			return &(outputs_ctx._L368);
		case 41:
			return &(outputs_ctx._L367);
		case 42:
			return &(outputs_ctx._L373);
		case 43:
			return &(outputs_ctx._L383);
		case 44:
			return &(outputs_ctx._L386);
		case 45:
			return &(outputs_ctx._L385);
		case 46:
			return &(outputs_ctx._L387);
		case 47:
			return &(outputs_ctx._L391);
		case 48:
			return &(outputs_ctx._L394);
		case 49:
			return &(outputs_ctx._L396);
		case 50:
			return &(outputs_ctx._L397);
		case 51:
			return &(outputs_ctx._L400);
		case 52:
			return &(outputs_ctx._L401);
		case 53:
			return &(outputs_ctx.Header);
		case 54:
			return &(outputs_ctx.P027V1_body_compressed);
		case 55:
			return &(outputs_ctx.P027V1_sections);
		case 56:
			return &(outputs_ctx.n_iter_k_out);
		case 57:
			return &(inputs_ctx.P027V1_from_track);
		default:
			break;
	}
	return 0;
}

static int Is5Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_5_Utils = {Is5Active};

static int Is8Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_8_Utils = {Is8Active};

static int Is4Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_4_Utils = {Is4Active};

static int Is11Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_11_Utils = {Is11Active};

static int Is3Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_3_Utils = {Is3Active};

static int Is14Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_14_Utils = {Is14Active};

/****************************************************************
 ** TM_lib_internal::T_Build_Metadata_Packet_ID/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_T_Build_Metadata_Packet_ID_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_T_Build_Metadata_Packet_ID_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_NID_PACKET_Utils, 60, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 61, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 66, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 67, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_packet_meta", &_SCSIM_nid_packet_meta_TM_Utils, 68, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_T_Build_Metadata_Packet_ID_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_T_Build_Metadata_Packet_ID_TM_lib_internal* pContext = (outC_T_Build_Metadata_Packet_ID_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 58:
			return &((*pContext)._L1);
		case 59:
			return &((*pContext)._L2);
		case 60:
			return &((*pContext)._L3);
		case 61:
			return &((*pContext)._L4);
		case 62:
			return &((*pContext)._L6);
		case 63:
			return &((*pContext)._L8);
		case 64:
			return &((*pContext)._L9);
		case 65:
			return &((*pContext)._L10);
		case 66:
			return &((*pContext)._L11);
		case 67:
			return &((*pContext)._L12);
		case 68:
			return &((*pContext).nid_packet_meta);
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
