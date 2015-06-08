#include "Read_P005_ForCalcTrainPos_TM_mapping.h"
#include "Read_P005_ForCalcTrainPos_TM_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Read_P005_ForCalcTrainPos_TM();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** TM::Read_P005_ForCalcTrainPos/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Read_P005_ForCalcTrainPos_TM() {
	pSimulator->m_pfnSetRoot(pSimulator, "TM::Read_P005_ForCalcTrainPos/", &outputs_ctx, _SCSIM_Get_Read_P005_ForCalcTrainPos_TM_Handle);
	_SCSIM_Mapping_Read_P005_TM("TM::Read_P005", "1", 1, 0, 0);
	_SCSIM_Mapping_C_P005_ForCalcTrainPos_TM_conversions("TM_conversions::C_P005_ForCalcTrainPos", "1", 2, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_NID_LRBG_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_P005_OBU_T_TM_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_LinkedBGs_T_BG_Types_Pkg_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LinkedBGsOUT", &_SCSIM_LinkedBGs_T_BG_Types_Pkg_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "RadioMessage_IN", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "LRBG", &_SCSIM_NID_LRBG_Utils, 9, valid, 0, 0);
}

void* _SCSIM_Get_Read_P005_ForCalcTrainPos_TM_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.Context_1);
		case 2:
			return &(outputs_ctx._1_Context_1);
		case 3:
			return &(outputs_ctx._L1);
		case 4:
			return &(outputs_ctx._L2);
		case 5:
			return &(outputs_ctx._L3);
		case 6:
			return &(outputs_ctx._L4);
		case 7:
			return &(outputs_ctx.LinkedBGsOUT);
		case 8:
			return &(inputs_ctx.RadioMessage_IN);
		case 9:
			return &(inputs_ctx.LRBG);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM::Read_P005/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Read_P005_TM(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Read_P005_TM_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_RECV_ReadPackets_TM_lib_internal("TM_lib_internal::RECV_ReadPackets", "1", 10, 0, 0);
	_SCSIM_Mapping_C_P005_compr_onboard_TM_conversions("TM_conversions::C_P005_compr_onboard", "3", 11, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_int_500_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L166", &_SCSIM_P005_OBU_T_TM_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "P005_OBU_out", &_SCSIM_P005_OBU_T_TM_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Read_P005_TM_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Read_P005_TM* pContext = (outC_Read_P005_TM*)pInstance;
	switch (nHandleIdent) {
		case 10:
			return &((*pContext).Context_1);
		case 11:
			return &((*pContext).Context_3);
		case 12:
			return &((*pContext)._L5);
		case 13:
			return &((*pContext)._L6);
		case 14:
			return &((*pContext)._L30);
		case 15:
			return &((*pContext)._L166);
		case 16:
			return &((*pContext).P005_OBU_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::C_P005_ForCalcTrainPos/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_ForCalcTrainPos_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P005_ForCalcTrainPos_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 4, 4);
	_SCSIM_Mapping_C_P005_LinkedBGs_TM_conversions("TM_conversions::C_P005_LinkedBGs", "1", 17, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_NID_LRBG_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_P005_OBU_T_TM_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_array__1411_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_P005_OBU_sectionlist_enum_T_TM_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_N_ITER_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_Q_SCALE_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_L_PACKET_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_Q_DIR_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_array__1477_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_array__1480_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_array__1483_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_array_int_4_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LinkedBGsOUT", &_SCSIM_LinkedBGs_T_BG_Types_Pkg_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_ForCalcTrainPos_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_ForCalcTrainPos_TM_conversions* pContext = (outC_C_P005_ForCalcTrainPos_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 17:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 18:
			return &((*pContext)._L1);
		case 19:
			return &((*pContext)._L2);
		case 20:
			return &((*pContext)._L4);
		case 21:
			return &((*pContext)._L11);
		case 22:
			return &((*pContext)._L10);
		case 23:
			return &((*pContext)._L9);
		case 24:
			return &((*pContext)._L8);
		case 25:
			return &((*pContext)._L7);
		case 26:
			return &((*pContext)._L6);
		case 27:
			return &((*pContext)._L18);
		case 28:
			return &((*pContext)._L20);
		case 29:
			return &((*pContext)._L21);
		case 30:
			return &((*pContext)._L22);
		case 31:
			return &((*pContext).LinkedBGsOUT);
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
	_SCSIM_Mapping_RECV_LookupPacket_TM_lib_internal("TM_lib_internal::RECV_LookupPacket", "1", 32, 0, 0);
	_SCSIM_Mapping_RECV_ReadPacketKernel_TM_lib_internal("TM_lib_internal::RECV_ReadPacketKernel", "1", 33, 34, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_array_int_500_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_kcg_int_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Data", &_SCSIM_array_int_500_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Metadata", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ReadPackets_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ReadPackets_TM_lib_internal* pContext = (outC_RECV_ReadPackets_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 32:
			return &((*pContext).Context_1);
		case 33:
			return &((*pContext)._1_Context_1);
		case 35:
			return &((*pContext)._L3);
		case 36:
			return &((*pContext)._L2);
		case 37:
			return &((*pContext)._L1);
		case 38:
			return &((*pContext)._L4);
		case 39:
			return &((*pContext)._L44);
		case 40:
			return &((*pContext)._L45);
		case 41:
			return &((*pContext)._L46);
		case 42:
			return &((*pContext)._L48);
		case 43:
			return &((*pContext)._L47);
		case 34:
			return &((*pContext).tmp);
		case 44:
			return &((*pContext).Data);
		case 45:
			return &((*pContext).Metadata);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::C_P005_compr_onboard/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_compr_onboard_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P005_compr_onboard_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined TM_conversions::CAST_Int_to_Q_SCALE*/
	pSimulator->m_pfnPushInstance(pSimulator, "TM_conversions::CAST_Int_to_Q_SCALE", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_scale", &_SCSIM_Q_SCALE_Utils, 46, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "q_scale_int", &_SCSIM_kcg_int_Utils, 47, valid, 0, 0);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_48_Utils, 48);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_49_Utils, 49);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_50_Utils, 50);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 51, valid, 50, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_SCALE_Utils, 52, valid, 50, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_53_Utils, 53);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_SCALE_Utils, 54, valid, 53, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 55, valid, 53, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_56_Utils, 56);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_SCALE_Utils, 57, valid, 56, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 58, valid, 56, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_59_Utils, 59);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_SCALE_Utils, 60, valid, 59, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 61, valid, 59, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "q_scale_in", &_SCSIM_kcg_int_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_C_P005_unflatten_sections_TM_lib_internal("TM_lib_internal::C_P005_unflatten_sections", "1", 66, 0, 0);
	/*<< Inlined TM_conversions::CAST_Int_to_N_ITER*/
	pSimulator->m_pfnPushInstance(pSimulator, "TM_conversions::CAST_Int_to_N_ITER", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "n_iter", &_SCSIM_N_ITER_Utils, 67, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "n_iter_int", &_SCSIM_kcg_int_Utils, 68, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 69, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 70, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 71, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 72, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 73, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined TM_conversions::CAST_Int_to_L_PACKET*/
	pSimulator->m_pfnPushInstance(pSimulator, "TM_conversions::CAST_Int_to_L_PACKET", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "l_packet", &_SCSIM_L_PACKET_Utils, 74, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "l_packet_int", &_SCSIM_kcg_int_Utils, 75, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 76, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 77, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 78, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 79, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 80, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined TM_conversions::CAST_Int_to_Q_DIR*/
	pSimulator->m_pfnPushInstance(pSimulator, "TM_conversions::CAST_Int_to_Q_DIR", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_dir", &_SCSIM_Q_DIR_Utils, 81, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "q_dir_int", &_SCSIM_kcg_int_Utils, 82, valid, 0, 0);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_83_Utils, 83);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_84_Utils, 84);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_85_Utils, 85);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 86, valid, 85, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 87, valid, 85, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_88_Utils, 88);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 89, valid, 88, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 90, valid, 88, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_91_Utils, 91);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_DIR_Utils, 92, valid, 91, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 93, valid, 91, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_94_Utils, 94);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_DIR_Utils, 95, valid, 94, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 96, valid, 94, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 97, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_dir_in", &_SCSIM_kcg_int_Utils, 98, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 99, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 100, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined TM_conversions::CAST_Int_to_NID_PACKET*/
	pSimulator->m_pfnPushInstance(pSimulator, "TM_conversions::CAST_Int_to_NID_PACKET", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_packet", &_SCSIM_NID_PACKET_Utils, 101, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "nid_packet_int", &_SCSIM_kcg_int_Utils, 102, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 103, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 104, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 105, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 106, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 107, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 108, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 109, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 110, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_array_int_224_Utils, 111, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_NID_PACKET_Utils, 112, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_Q_DIR_Utils, 113, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_P005_OBU_T_TM_Utils, 114, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 115, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_L_PACKET_Utils, 116, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_N_ITER_Utils, 117, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_int_3_Utils, 118, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_P005_OBU_sectionlist_enum_T_TM_Utils, 119, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_SCALE_Utils, 120, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array_int_1_Utils, 121, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_array_int_1_Utils, 122, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 123, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 124, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 125, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 126, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "P005_onboard", &_SCSIM_P005_OBU_T_TM_Utils, 127, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_compr_onboard_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_compr_onboard_TM_conversions* pContext = (outC_C_P005_compr_onboard_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 46:
			return &((*pContext).q_scale_1);
		case 47:
			return &((*pContext).q_scale_int_1);
		case 48:
			return &((*pContext).IfBlock1_clock_1);
		case 49:
			return &((*pContext)._3_else_clock_1_IfBlock1);
		case 50:
			return &((*pContext).else_clock_1_IfBlock1);
		case 51:
			return &((*pContext)._L2_1_IfBlock1);
		case 52:
			return &((*pContext)._L1_11_IfBlock1);
		case 53:
			return &((*pContext).else_clock_1_IfBlock1);
		case 54:
			return &((*pContext)._L1_12_IfBlock1);
		case 55:
			return &((*pContext)._L4_1_IfBlock1);
		case 56:
			return &((*pContext)._3_else_clock_1_IfBlock1);
		case 57:
			return &((*pContext)._L1_1_IfBlock1);
		case 58:
			return &((*pContext)._L3_1_IfBlock1);
		case 59:
			return &((*pContext).IfBlock1_clock_1);
		case 60:
			return &((*pContext)._L2_14_IfBlock1);
		case 61:
			return &((*pContext)._L3_15_IfBlock1);
		case 62:
			return &((*pContext).q_scale_in_1);
		case 63:
			return &((*pContext).error_1);
		case 64:
			return &((*pContext)._L2_1);
		case 65:
			return &((*pContext)._L4_1);
		case 66:
			return &((*pContext).Context_1);
		case 67:
			return &((*pContext).n_iter_1);
		case 68:
			return &((*pContext).n_iter_int_1);
		case 69:
			return &((*pContext)._L1_1);
		case 70:
			return &((*pContext)._L12_1);
		case 71:
			return &((*pContext)._L11_1);
		case 72:
			return &((*pContext)._L10_1);
		case 73:
			return &((*pContext)._L9_1);
		case 74:
			return &((*pContext).l_packet_1);
		case 75:
			return &((*pContext).l_packet_int_1);
		case 76:
			return &((*pContext)._L1_18);
		case 77:
			return &((*pContext)._L9_17);
		case 78:
			return &((*pContext)._L8_1);
		case 79:
			return &((*pContext)._6__L12_1);
		case 80:
			return &((*pContext)._L13_1);
		case 81:
			return &((*pContext).q_dir_1);
		case 82:
			return &((*pContext).q_dir_int_1);
		case 83:
			return &((*pContext)._12_IfBlock1_clock_1);
		case 84:
			return &((*pContext)._19_else_clock_1_IfBlock1);
		case 85:
			return &((*pContext)._14_else_clock_1_IfBlock1);
		case 86:
			return &((*pContext)._L2_115_IfBlock1);
		case 87:
			return &((*pContext)._L1_116_IfBlock1);
		case 88:
			return &((*pContext)._14_else_clock_1_IfBlock1);
		case 89:
			return &((*pContext)._L2_117_IfBlock1);
		case 90:
			return &((*pContext)._L4_118_IfBlock1);
		case 91:
			return &((*pContext)._19_else_clock_1_IfBlock1);
		case 92:
			return &((*pContext)._L3_113_IfBlock1);
		case 93:
			return &((*pContext)._L5_1_IfBlock1);
		case 94:
			return &((*pContext)._12_IfBlock1_clock_1);
		case 95:
			return &((*pContext)._L4_120_IfBlock1);
		case 96:
			return &((*pContext)._L5_121_IfBlock1);
		case 97:
			return &((*pContext)._11_error_1);
		case 98:
			return &((*pContext).q_dir_in_1);
		case 99:
			return &((*pContext)._10__L13_1);
		case 100:
			return &((*pContext)._9__L12_1);
		case 101:
			return &((*pContext).nid_packet_1);
		case 102:
			return &((*pContext).nid_packet_int_1);
		case 103:
			return &((*pContext)._L1_124);
		case 104:
			return &((*pContext)._L5_1);
		case 105:
			return &((*pContext)._L4_123);
		case 106:
			return &((*pContext)._L3_1);
		case 107:
			return &((*pContext)._L2_122);
		case 108:
			return &((*pContext)._L14);
		case 109:
			return &((*pContext)._L15);
		case 110:
			return &((*pContext)._L16);
		case 111:
			return &((*pContext)._L13);
		case 112:
			return &((*pContext)._L12);
		case 113:
			return &((*pContext)._L11);
		case 114:
			return &((*pContext)._L10);
		case 115:
			return &((*pContext)._L9);
		case 116:
			return &((*pContext)._L8);
		case 117:
			return &((*pContext)._L7);
		case 118:
			return &((*pContext)._L6);
		case 119:
			return &((*pContext)._L5);
		case 120:
			return &((*pContext)._L4);
		case 121:
			return &((*pContext)._L2);
		case 122:
			return &((*pContext)._L1);
		case 123:
			return &((*pContext)._L17);
		case 124:
			return &((*pContext)._L18);
		case 125:
			return &((*pContext)._L19);
		case 126:
			return &((*pContext)._L20);
		case 127:
			return &((*pContext).P005_onboard);
		default:
			break;
	}
	return 0;
}

static int Is50Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_50_Utils = {Is50Active};

static int Is53Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_53_Utils = {Is53Active};

static int Is49Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_49_Utils = {Is49Active};

static int Is56Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_56_Utils = {Is56Active};

static int Is48Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_48_Utils = {Is48Active};

static int Is59Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_59_Utils = {Is59Active};

static int Is85Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_85_Utils = {Is85Active};

static int Is88Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_88_Utils = {Is88Active};

static int Is84Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_84_Utils = {Is84Active};

static int Is91Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_91_Utils = {Is91Active};

static int Is83Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_83_Utils = {Is83Active};

static int Is94Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_94_Utils = {Is94Active};

/****************************************************************
 ** TM_conversions::C_P005_LinkedBGs/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_LinkedBGs_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P005_LinkedBGs_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_LinkedBG_T_BG_Types_Pkg_Utils, 128, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_NID_LRBG_Utils, 129, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_DIR_Utils, 130, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_Q_SCALE_Utils, 131, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_P005_section_enum_T_TM_Utils, 132, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_Q_LOCACC_Utils, 133, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_Q_LINKREACTION_Utils, 134, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_Q_LINKORIENTATION_Utils, 135, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_NID_BG_Utils, 136, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_NID_C_Utils, 137, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_Q_NEWCOUNTRY_Utils, 138, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_D_LINK_Utils, 139, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 140, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LinkedBGsOUT", &_SCSIM_LinkedBG_T_BG_Types_Pkg_Utils, 141, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_LinkedBGs_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_LinkedBGs_TM_conversions* pContext = (outC_C_P005_LinkedBGs_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 128:
			return &((*pContext)._L2);
		case 129:
			return &((*pContext)._L3);
		case 130:
			return &((*pContext)._L4);
		case 131:
			return &((*pContext)._L5);
		case 132:
			return &((*pContext)._L6);
		case 133:
			return &((*pContext)._L14);
		case 134:
			return &((*pContext)._L13);
		case 135:
			return &((*pContext)._L12);
		case 136:
			return &((*pContext)._L11);
		case 137:
			return &((*pContext)._L10);
		case 138:
			return &((*pContext)._L9);
		case 139:
			return &((*pContext)._L8);
		case 140:
			return &((*pContext)._L7);
		case 141:
			return &((*pContext).LinkedBGsOUT);
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
	_SCSIM_Mapping_RECV_LookupPacketLoop_TM_lib_internal("TM_lib_internal::RECV_LookupPacketLoop", "1", 142, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 143, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 144, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_array_int_30_Utils, 145, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 146, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 147, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 148, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_NID_PACKET_Utils, 149, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 150, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 151, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 152, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 153, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 154, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_int_Utils, 155, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Found", &_SCSIM_kcg_bool_Utils, 156, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Index", &_SCSIM_kcg_int_Utils, 157, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "HeaderFound", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 158, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_LookupPacket_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_LookupPacket_TM_lib_internal* pContext = (outC_RECV_LookupPacket_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 142:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 143:
			return &((*pContext)._L1);
		case 144:
			return &((*pContext)._L2);
		case 145:
			return &((*pContext)._L3);
		case 146:
			return &((*pContext)._L4);
		case 147:
			return &((*pContext)._L5);
		case 148:
			return &((*pContext)._L23);
		case 149:
			return &((*pContext)._L24);
		case 150:
			return &((*pContext)._L25);
		case 151:
			return &((*pContext)._L26);
		case 152:
			return &((*pContext)._L22);
		case 153:
			return &((*pContext)._L27);
		case 154:
			return &((*pContext)._L28);
		case 155:
			return &((*pContext)._L29);
		case 156:
			return &((*pContext).Found);
		case 157:
			return &((*pContext).Index);
		case 158:
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
	_SCSIM_Mapping_RECV_ReadPacketKernelLoop_TM_lib_internal("TM_lib_internal::RECV_ReadPacketKernelLoop", "1", 159, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 160, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 161, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_int_500_Utils, 162, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_array_int_500_Utils, 163, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 164, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_array_int_500_Utils, 165, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_array_int_500_500_Utils, 166, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 167, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 168, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 169, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PacketOut", &_SCSIM_array_int_500_Utils, 170, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ReadPacketKernel_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ReadPacketKernel_TM_lib_internal* pContext = (outC_RECV_ReadPacketKernel_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 159:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 160:
			return &((*pContext)._L3);
		case 161:
			return &((*pContext)._L4);
		case 162:
			return &((*pContext)._L6);
		case 163:
			return &((*pContext)._L7);
		case 164:
			return &((*pContext)._L8);
		case 165:
			return &((*pContext)._L10);
		case 166:
			return &((*pContext)._L18);
		case 167:
			return &((*pContext)._L22);
		case 168:
			return &((*pContext)._L24);
		case 169:
			return &((*pContext)._L23);
		case 170:
			return &((*pContext).PacketOut);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::C_P005_unflatten_sections/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_unflatten_sections_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P005_unflatten_sections_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "mapwi", 33, 33);
	_SCSIM_Mapping_C_P005_us_array_TM_lib_internal("TM_lib_internal::C_P005_us_array", "1", 171, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 172, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 173, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_int_33_Utils, 174, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_int_224_33_Utils, 175, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 176, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_array__1425_Utils, 177, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 178, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "sections", &_SCSIM_P005_OBU_sectionlist_enum_T_TM_Utils, 179, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_unflatten_sections_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_unflatten_sections_TM_lib_internal* pContext = (outC_C_P005_unflatten_sections_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 171:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 172:
			return &((*pContext)._L1);
		case 173:
			return &((*pContext)._L3);
		case 174:
			return &((*pContext)._L5);
		case 175:
			return &((*pContext)._L6);
		case 176:
			return &((*pContext)._L7);
		case 177:
			return &((*pContext)._L9);
		case 178:
			return &((*pContext)._L10);
		case 179:
			return &((*pContext).sections);
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 180, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 181, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_NID_PACKET_Utils, 182, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_bool_Utils, 183, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_bool_Utils, 184, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 185, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 186, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 187, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "HeaderFound", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 188, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_LookupPacketLoop_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_LookupPacketLoop_TM_lib_internal* pContext = (outC_RECV_LookupPacketLoop_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 180:
			return &((*pContext)._L3);
		case 181:
			return &((*pContext)._L4);
		case 182:
			return &((*pContext)._L27);
		case 183:
			return &((*pContext)._L28);
		case 184:
			return &((*pContext)._L29);
		case 185:
			return &((*pContext)._L30);
		case 186:
			return &((*pContext)._L31);
		case 187:
			return &((*pContext).Cont);
		case 188:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 189, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 190, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 191, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 192, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 193, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 194, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_int_Utils, 195, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_int_Utils, 196, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 197, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_int_Utils, 198, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_int_Utils, 199, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_int_Utils, 200, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 201, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PacketOut", &_SCSIM_kcg_int_Utils, 202, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ReadPacketKernelLoop_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ReadPacketKernelLoop_TM_lib_internal* pContext = (outC_RECV_ReadPacketKernelLoop_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 189:
			return &((*pContext)._L1);
		case 190:
			return &((*pContext)._L3);
		case 191:
			return &((*pContext)._L4);
		case 192:
			return &((*pContext)._L9);
		case 193:
			return &((*pContext)._L18);
		case 194:
			return &((*pContext)._L20);
		case 195:
			return &((*pContext)._L29);
		case 196:
			return &((*pContext)._L30);
		case 197:
			return &((*pContext)._L31);
		case 198:
			return &((*pContext)._L32);
		case 199:
			return &((*pContext)._L33);
		case 200:
			return &((*pContext)._L34);
		case 201:
			return &((*pContext).Cont);
		case 202:
			return &((*pContext).PacketOut);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::C_P005_us_array/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_us_array_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P005_us_array_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "1", 203, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "2", 204, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "3", 205, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "4", 206, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "5", 207, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "6", 208, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "7", 209, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_D_LINK_TM_conversions("TM_conversions::CAST_Int_to_D_LINK", "1", 210, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_NID_C_TM_conversions("TM_conversions::CAST_Int_to_NID_C", "1", 211, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_NID_BG_TM_conversions("TM_conversions::CAST_Int_to_NID_BG", "1", 212, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions("TM_conversions::CAST_Int_to_Q_NEWCOUNTRY", "1", 213, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_LINKORIENTATION_TM_conversions("TM_conversions::CAST_Int_to_Q_LINKORIENTATION", "1", 214, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_LINKREACTION_TM_conversions("TM_conversions::CAST_Int_to_Q_LINKREACTION", "1", 215, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_LOCACC_TM_conversions("TM_conversions::CAST_Int_to_Q_LOCACC", "1", 216, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 217, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 218, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_P005_section_enum_T_TM_Utils, 219, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 220, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 221, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 222, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 223, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_int_Utils, 224, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 225, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 226, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 227, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 228, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 229, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_D_LINK_Utils, 230, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_NID_C_Utils, 231, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_NID_BG_Utils, 232, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_Q_NEWCOUNTRY_Utils, 233, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_Q_LINKORIENTATION_Utils, 234, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_Q_LINKREACTION_Utils, 235, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_Q_LOCACC_Utils, 236, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 237, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_bool_Utils, 238, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 239, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "sections", &_SCSIM_P005_section_enum_T_TM_Utils, 240, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_us_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_us_array_TM_lib_internal* pContext = (outC_C_P005_us_array_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 203:
			return &((*pContext)._6_Context_1);
		case 204:
			return &((*pContext).Context_2);
		case 205:
			return &((*pContext).Context_3);
		case 206:
			return &((*pContext).Context_4);
		case 207:
			return &((*pContext).Context_5);
		case 208:
			return &((*pContext).Context_6);
		case 209:
			return &((*pContext).Context_7);
		case 210:
			return &((*pContext)._7_Context_1);
		case 211:
			return &((*pContext)._5_Context_1);
		case 212:
			return &((*pContext)._4_Context_1);
		case 213:
			return &((*pContext)._3_Context_1);
		case 214:
			return &((*pContext)._2_Context_1);
		case 215:
			return &((*pContext)._1_Context_1);
		case 216:
			return &((*pContext).Context_1);
		case 217:
			return &((*pContext)._L1);
		case 218:
			return &((*pContext)._L3);
		case 219:
			return &((*pContext)._L4);
		case 220:
			return &((*pContext)._L5);
		case 221:
			return &((*pContext)._L15);
		case 222:
			return &((*pContext)._L16);
		case 223:
			return &((*pContext)._L18);
		case 224:
			return &((*pContext)._L19);
		case 225:
			return &((*pContext)._L20);
		case 226:
			return &((*pContext)._L21);
		case 227:
			return &((*pContext)._L22);
		case 228:
			return &((*pContext)._L23);
		case 229:
			return &((*pContext)._L24);
		case 230:
			return &((*pContext)._L25);
		case 231:
			return &((*pContext)._L26);
		case 232:
			return &((*pContext)._L27);
		case 233:
			return &((*pContext)._L28);
		case 234:
			return &((*pContext)._L29);
		case 235:
			return &((*pContext)._L30);
		case 236:
			return &((*pContext)._L31);
		case 237:
			return &((*pContext)._L32);
		case 238:
			return &((*pContext)._L33);
		case 239:
			return &((*pContext).cont);
		case 240:
			return &((*pContext).sections);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_lib_internal::C_P005_extract_el_section/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P005_extract_el_section_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 241, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 242, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 243, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 244, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 245, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "element", &_SCSIM_kcg_int_Utils, 246, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_extract_el_section_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_extract_el_section_TM_lib_internal* pContext = (outC_C_P005_extract_el_section_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 241:
			return &((*pContext)._L1);
		case 242:
			return &((*pContext)._L2);
		case 243:
			return &((*pContext)._L3);
		case 244:
			return &((*pContext)._L5);
		case 245:
			return &((*pContext)._L6);
		case 246:
			return &((*pContext).element);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::CAST_Int_to_D_LINK/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_D_LINK_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_D_LINK_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 247, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 248, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 249, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 250, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 251, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "d_link", &_SCSIM_D_LINK_Utils, 252, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_D_LINK_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_D_LINK_TM_conversions* pContext = (outC_CAST_Int_to_D_LINK_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 247:
			return &((*pContext)._L1);
		case 248:
			return &((*pContext)._L9);
		case 249:
			return &((*pContext)._L8);
		case 250:
			return &((*pContext)._L7);
		case 251:
			return &((*pContext)._L6);
		case 252:
			return &((*pContext).d_link);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::CAST_Int_to_NID_C/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_NID_C_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_NID_C_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 253, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 254, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 255, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 256, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 257, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_c", &_SCSIM_NID_C_Utils, 258, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_NID_C_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_NID_C_TM_conversions* pContext = (outC_CAST_Int_to_NID_C_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 253:
			return &((*pContext)._L1);
		case 254:
			return &((*pContext)._L9);
		case 255:
			return &((*pContext)._L8);
		case 256:
			return &((*pContext)._L10);
		case 257:
			return &((*pContext)._L11);
		case 258:
			return &((*pContext).nid_c);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::CAST_Int_to_NID_BG/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_NID_BG_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_NID_BG_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 259, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 260, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 261, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 262, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 263, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_bg", &_SCSIM_NID_BG_Utils, 264, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_NID_BG_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_NID_BG_TM_conversions* pContext = (outC_CAST_Int_to_NID_BG_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 259:
			return &((*pContext)._L1);
		case 260:
			return &((*pContext)._L9);
		case 261:
			return &((*pContext)._L8);
		case 262:
			return &((*pContext)._L10);
		case 263:
			return &((*pContext)._L11);
		case 264:
			return &((*pContext).nid_bg);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_265_Utils, 265);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_266_Utils, 266);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 267, valid, 266, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_NEWCOUNTRY_Utils, 268, valid, 266, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_269_Utils, 269);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_NEWCOUNTRY_Utils, 270, valid, 269, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 271, valid, 269, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_272_Utils, 272);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_NEWCOUNTRY_Utils, 273, valid, 272, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 274, valid, 272, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 275, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_newcountry_in", &_SCSIM_kcg_int_Utils, 276, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 277, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 278, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_newcountry", &_SCSIM_Q_NEWCOUNTRY_Utils, 279, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions* pContext = (outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 265:
			return &((*pContext).IfBlock1_clock);
		case 266:
			return &((*pContext).else_clock_IfBlock1);
		case 267:
			return &((*pContext)._L2_IfBlock1);
		case 268:
			return &((*pContext)._L1_IfBlock1);
		case 269:
			return &((*pContext).else_clock_IfBlock1);
		case 270:
			return &((*pContext)._L3_IfBlock1);
		case 271:
			return &((*pContext)._L51_IfBlock1);
		case 272:
			return &((*pContext).IfBlock1_clock);
		case 273:
			return &((*pContext)._L4_IfBlock1);
		case 274:
			return &((*pContext)._L5_IfBlock1);
		case 275:
			return &((*pContext).error);
		case 276:
			return &((*pContext).q_newcountry_in);
		case 277:
			return &((*pContext)._L13);
		case 278:
			return &((*pContext)._L12);
		case 279:
			return &((*pContext).q_newcountry);
		default:
			break;
	}
	return 0;
}

static int Is266Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_266_Utils = {Is266Active};

static int Is269Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_269_Utils = {Is269Active};

static int Is265Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_265_Utils = {Is265Active};

static int Is272Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_272_Utils = {Is272Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_LINKORIENTATION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_LINKORIENTATION_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_280_Utils, 280);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_281_Utils, 281);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 282, valid, 281, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKORIENTATION_Utils, 283, valid, 281, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_284_Utils, 284);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_LINKORIENTATION_Utils, 285, valid, 284, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 286, valid, 284, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_287_Utils, 287);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_LINKORIENTATION_Utils, 288, valid, 287, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 289, valid, 287, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 290, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_linkorientation_in", &_SCSIM_kcg_int_Utils, 291, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 292, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 293, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_linkorientation", &_SCSIM_Q_LINKORIENTATION_Utils, 294, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_LINKORIENTATION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions* pContext = (outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 280:
			return &((*pContext).IfBlock1_clock);
		case 281:
			return &((*pContext).else_clock_IfBlock1);
		case 282:
			return &((*pContext)._L2_IfBlock1);
		case 283:
			return &((*pContext)._L1_IfBlock1);
		case 284:
			return &((*pContext).else_clock_IfBlock1);
		case 285:
			return &((*pContext)._L3_IfBlock1);
		case 286:
			return &((*pContext)._L51_IfBlock1);
		case 287:
			return &((*pContext).IfBlock1_clock);
		case 288:
			return &((*pContext)._L4_IfBlock1);
		case 289:
			return &((*pContext)._L5_IfBlock1);
		case 290:
			return &((*pContext).error);
		case 291:
			return &((*pContext).q_linkorientation_in);
		case 292:
			return &((*pContext)._L13);
		case 293:
			return &((*pContext)._L12);
		case 294:
			return &((*pContext).q_linkorientation);
		default:
			break;
	}
	return 0;
}

static int Is281Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_281_Utils = {Is281Active};

static int Is284Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_284_Utils = {Is284Active};

static int Is280Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_280_Utils = {Is280Active};

static int Is287Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_287_Utils = {Is287Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_LINKREACTION/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_LINKREACTION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_LINKREACTION_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_295_Utils, 295);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_296_Utils, 296);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_297_Utils, 297);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 298, valid, 297, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKREACTION_Utils, 299, valid, 297, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_300_Utils, 300);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKREACTION_Utils, 301, valid, 300, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 302, valid, 300, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_303_Utils, 303);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKREACTION_Utils, 304, valid, 303, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 305, valid, 303, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_306_Utils, 306);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_LINKREACTION_Utils, 307, valid, 306, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 308, valid, 306, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "q_linkreaction_in", &_SCSIM_kcg_int_Utils, 309, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 310, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 311, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 312, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_linkreaction", &_SCSIM_Q_LINKREACTION_Utils, 313, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_LINKREACTION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_LINKREACTION_TM_conversions* pContext = (outC_CAST_Int_to_Q_LINKREACTION_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 295:
			return &((*pContext).IfBlock1_clock);
		case 296:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 297:
			return &((*pContext).else_clock_IfBlock1);
		case 298:
			return &((*pContext)._L25_IfBlock1);
		case 299:
			return &((*pContext)._L14_IfBlock1);
		case 300:
			return &((*pContext).else_clock_IfBlock1);
		case 301:
			return &((*pContext)._L13_IfBlock1);
		case 302:
			return &((*pContext)._L4_IfBlock1);
		case 303:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 304:
			return &((*pContext)._L1_IfBlock1);
		case 305:
			return &((*pContext)._L32_IfBlock1);
		case 306:
			return &((*pContext).IfBlock1_clock);
		case 307:
			return &((*pContext)._L2_IfBlock1);
		case 308:
			return &((*pContext)._L3_IfBlock1);
		case 309:
			return &((*pContext).q_linkreaction_in);
		case 310:
			return &((*pContext).error);
		case 311:
			return &((*pContext)._L2);
		case 312:
			return &((*pContext)._L4);
		case 313:
			return &((*pContext).q_linkreaction);
		default:
			break;
	}
	return 0;
}

static int Is297Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_297_Utils = {Is297Active};

static int Is300Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_300_Utils = {Is300Active};

static int Is296Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_296_Utils = {Is296Active};

static int Is303Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_303_Utils = {Is303Active};

static int Is295Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_295_Utils = {Is295Active};

static int Is306Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_306_Utils = {Is306Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_LOCACC/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_LOCACC_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_LOCACC_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 314, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 315, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 316, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 317, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 318, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_locacc", &_SCSIM_Q_LOCACC_Utils, 319, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_LOCACC_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_LOCACC_TM_conversions* pContext = (outC_CAST_Int_to_Q_LOCACC_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 314:
			return &((*pContext)._L1);
		case 315:
			return &((*pContext)._L9);
		case 316:
			return &((*pContext)._L8);
		case 317:
			return &((*pContext)._L10);
		case 318:
			return &((*pContext)._L11);
		case 319:
			return &((*pContext).q_locacc);
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
