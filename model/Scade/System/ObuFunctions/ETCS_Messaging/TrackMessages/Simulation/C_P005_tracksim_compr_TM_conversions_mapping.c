#include "C_P005_tracksim_compr_TM_conversions_mapping.h"
#include "C_P005_tracksim_compr_TM_conversions_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_C_P005_tracksim_compr_TM_conversions();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** TM_conversions::C_P005_tracksim_compr/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_tracksim_compr_TM_conversions() {
	pSimulator->m_pfnSetRoot(pSimulator, "TM_conversions::C_P005_tracksim_compr/", &outputs_ctx, _SCSIM_Get_C_P005_tracksim_compr_TM_conversions_Handle);
	_SCSIM_Mapping_CAST_Int_to_Q_DIR_TM_conversions("TM_conversions::CAST_Int_to_Q_DIR", "1", 1, 0, 0);
	_SCSIM_Mapping_DeterminePacketSizeInt_TM_lib_internal("TM_lib_internal::DeterminePacketSizeInt", "1", 2, 0, 0);
	_SCSIM_Mapping_C_P005_flatten_sections_TM_lib_internal("TM_lib_internal::C_P005_flatten_sections", "1", 3, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "p_size", &_SCSIM_kcg_int_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_trackside_TM_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L204", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L205", &_SCSIM_kcg_int_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L206", &_SCSIM_kcg_int_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L209", &_SCSIM_array_int_272_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L212", &_SCSIM_kcg_int_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L213", &_SCSIM_kcg_int_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L336", &_SCSIM_kcg_int_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L219", &_SCSIM_kcg_int_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L218", &_SCSIM_kcg_int_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L217", &_SCSIM_kcg_int_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L216", &_SCSIM_kcg_int_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L215", &_SCSIM_kcg_int_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L214", &_SCSIM_kcg_bool_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L356", &_SCSIM_Q_DIR_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L371", &_SCSIM_kcg_int_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L370", &_SCSIM_kcg_int_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L369", &_SCSIM_kcg_int_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L368", &_SCSIM_kcg_int_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L367", &_SCSIM_kcg_int_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L366", &_SCSIM_kcg_int_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L365", &_SCSIM_P005_trackide_sectionlist_T_TM_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L373", &_SCSIM_array_int_3_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L375", &_SCSIM__1_P005_trackside_section_TM_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L376", &_SCSIM_array_int_1_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L378", &_SCSIM_kcg_int_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L379", &_SCSIM_kcg_int_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L380", &_SCSIM_P005_sections_array_flat_TM_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L381", &_SCSIM_array_int_4_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L383", &_SCSIM_array_int_500_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L384", &_SCSIM_array_int_228_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L386", &_SCSIM_array__496_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L385", &_SCSIM_array__445_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Header", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "P005_compressed", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "P005_from_track", &_SCSIM_P005_trackside_TM_Utils, 40, valid, 0, 0);
}

void* _SCSIM_Get_C_P005_tracksim_compr_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._2_Context_1);
		case 2:
			return &(outputs_ctx._1_Context_1);
		case 3:
			return &(outputs_ctx.Context_1);
		case 4:
			return &(outputs_ctx.p_size);
		case 5:
			return &(outputs_ctx._L1);
		case 6:
			return &(outputs_ctx._L204);
		case 7:
			return &(outputs_ctx._L205);
		case 8:
			return &(outputs_ctx._L206);
		case 9:
			return &(outputs_ctx._L209);
		case 10:
			return &(outputs_ctx._L212);
		case 11:
			return &(outputs_ctx._L213);
		case 12:
			return &(outputs_ctx._L336);
		case 13:
			return &(outputs_ctx._L219);
		case 14:
			return &(outputs_ctx._L218);
		case 15:
			return &(outputs_ctx._L217);
		case 16:
			return &(outputs_ctx._L216);
		case 17:
			return &(outputs_ctx._L215);
		case 18:
			return &(outputs_ctx._L214);
		case 19:
			return &(outputs_ctx._L356);
		case 20:
			return &(outputs_ctx._L371);
		case 21:
			return &(outputs_ctx._L370);
		case 22:
			return &(outputs_ctx._L369);
		case 23:
			return &(outputs_ctx._L368);
		case 24:
			return &(outputs_ctx._L367);
		case 25:
			return &(outputs_ctx._L366);
		case 26:
			return &(outputs_ctx._L365);
		case 27:
			return &(outputs_ctx._L373);
		case 28:
			return &(outputs_ctx._L375);
		case 29:
			return &(outputs_ctx._L376);
		case 30:
			return &(outputs_ctx._L378);
		case 31:
			return &(outputs_ctx._L379);
		case 32:
			return &(outputs_ctx._L380);
		case 33:
			return &(outputs_ctx._L381);
		case 34:
			return &(outputs_ctx._L383);
		case 35:
			return &(outputs_ctx._L384);
		case 36:
			return &(outputs_ctx._L386);
		case 37:
			return &(outputs_ctx._L385);
		case 38:
			return &(outputs_ctx.Header);
		case 39:
			return &(outputs_ctx.P005_compressed);
		case 40:
			return &(inputs_ctx.P005_from_track);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_DIR/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_DIR_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_DIR_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_41_Utils, 41);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_42_Utils, 42);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_43_Utils, 43);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 44, valid, 43, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 45, valid, 43, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_46_Utils, 46);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 47, valid, 46, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 48, valid, 46, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_49_Utils, 49);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_DIR_Utils, 50, valid, 49, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 51, valid, 49, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_52_Utils, 52);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_DIR_Utils, 53, valid, 52, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 54, valid, 52, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_dir_in", &_SCSIM_kcg_int_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_dir", &_SCSIM_Q_DIR_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_DIR_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_DIR_TM_conversions* pContext = (outC_CAST_Int_to_Q_DIR_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 41:
			return &((*pContext).IfBlock1_clock);
		case 42:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 43:
			return &((*pContext).else_clock_IfBlock1);
		case 44:
			return &((*pContext)._L24_IfBlock1);
		case 45:
			return &((*pContext)._L1_IfBlock1);
		case 46:
			return &((*pContext).else_clock_IfBlock1);
		case 47:
			return &((*pContext)._L2_IfBlock1);
		case 48:
			return &((*pContext)._L43_IfBlock1);
		case 49:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 50:
			return &((*pContext)._L3_IfBlock1);
		case 51:
			return &((*pContext)._L52_IfBlock1);
		case 52:
			return &((*pContext).IfBlock1_clock);
		case 53:
			return &((*pContext)._L4_IfBlock1);
		case 54:
			return &((*pContext)._L5_IfBlock1);
		case 55:
			return &((*pContext).error);
		case 56:
			return &((*pContext).q_dir_in);
		case 57:
			return &((*pContext)._L13);
		case 58:
			return &((*pContext)._L12);
		case 59:
			return &((*pContext).q_dir);
		default:
			break;
	}
	return 0;
}

static int Is43Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_43_Utils = {Is43Active};

static int Is46Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_46_Utils = {Is46Active};

static int Is42Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_42_Utils = {Is42Active};

static int Is49Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_49_Utils = {Is49Active};

static int Is41Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_41_Utils = {Is41Active};

static int Is52Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_52_Utils = {Is52Active};

/****************************************************************
 ** TM_lib_internal::DeterminePacketSizeInt/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_DeterminePacketSizeInt_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_DeterminePacketSizeInt_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 60, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 61, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "p_size", &_SCSIM_kcg_int_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_DeterminePacketSizeInt_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_DeterminePacketSizeInt_TM_lib_internal* pContext = (outC_DeterminePacketSizeInt_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 60:
			return &((*pContext)._L1);
		case 61:
			return &((*pContext)._L2);
		case 62:
			return &((*pContext)._L3);
		case 63:
			return &((*pContext)._L6);
		case 64:
			return &((*pContext)._L7);
		case 65:
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
	pSimulator->m_pfnPushIterator(pSimulator, "foldi", 224, 224);
	_SCSIM_Mapping_C_P005_fs_flatten_array_TM_lib_internal("TM_lib_internal::C_P005_fs_flatten_array", "2", 66, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 32, 32);
	_SCSIM_Mapping_C_P005_fs_struct_to_array_TM_lib_internal("TM_lib_internal::C_P005_fs_struct_to_array", "2", 67, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L76", &_SCSIM_P005_sections_array_flat_TM_Utils, 68, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L75", &_SCSIM_P005_OBU_sectionlist_T_TM_Utils, 69, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L74", &_SCSIM_array_int_7_32_Utils, 70, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L78", &_SCSIM_P005_sections_array_flat_TM_Utils, 71, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L80", &_SCSIM_array_int_7_32_224_Utils, 72, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Flattened", &_SCSIM_P005_sections_array_flat_TM_Utils, 73, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_flatten_sections_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_flatten_sections_TM_lib_internal* pContext = (outC_C_P005_flatten_sections_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 66:
			if (nSize != 1)
				break;
			return &((*pContext)._1_Context_2[pIteratorFilter[0]]);
		case 67:
			if (nSize != 1)
				break;
			return &((*pContext).Context_2[pIteratorFilter[0]]);
		case 68:
			return &((*pContext)._L76);
		case 69:
			return &((*pContext)._L75);
		case 70:
			return &((*pContext)._L74);
		case 71:
			return &((*pContext)._L78);
		case 72:
			return &((*pContext)._L80);
		case 73:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_sections_array_flat_TM_Utils, 74, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 75, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 76, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 77, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_P005_sections_array_flat_TM_Utils, 78, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 79, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_P005_OBU_sectionlist_array_T_TM_Utils, 80, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 81, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L154", &_SCSIM_kcg_int_Utils, 82, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "flat", &_SCSIM_P005_sections_array_flat_TM_Utils, 83, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_fs_flatten_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_fs_flatten_array_TM_lib_internal* pContext = (outC_C_P005_fs_flatten_array_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 74:
			return &((*pContext)._L1);
		case 75:
			return &((*pContext)._L3);
		case 76:
			return &((*pContext)._L5);
		case 77:
			return &((*pContext)._L6);
		case 78:
			return &((*pContext)._L7);
		case 79:
			return &((*pContext)._L8);
		case 80:
			return &((*pContext)._L2);
		case 81:
			return &((*pContext)._L10);
		case 82:
			return &((*pContext)._L154);
		case 83:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM__1_P005_trackside_section_TM_Utils, 84, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array_int_7_Utils, 85, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 86, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 87, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 88, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 89, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 90, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 91, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 92, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "section_arrays", &_SCSIM_P005_trackside_section_array_TM_Utils, 93, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_fs_struct_to_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_fs_struct_to_array_TM_lib_internal* pContext = (outC_C_P005_fs_struct_to_array_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 84:
			return &((*pContext)._L1);
		case 85:
			return &((*pContext)._L2);
		case 86:
			return &((*pContext)._L9);
		case 87:
			return &((*pContext)._L8);
		case 88:
			return &((*pContext)._L7);
		case 89:
			return &((*pContext)._L6);
		case 90:
			return &((*pContext)._L5);
		case 91:
			return &((*pContext)._L4);
		case 92:
			return &((*pContext)._L3);
		case 93:
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
