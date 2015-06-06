#include "TestStory00A_P005_Internal_mapping.h"
#include "TestStory00A_P005_Internal_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_TestStory00A_P005_Internal();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** Internal::TestStory00A_P005/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_TestStory00A_P005_Internal() {
	pSimulator->m_pfnSetRoot(pSimulator, "Internal::TestStory00A_P005/", &outputs_ctx, _SCSIM_Get_TestStory00A_P005_Internal_Handle);
	_SCSIM_Mapping_Story00A_FirstTest("FirstTest::Story00A", "1", 1, 0, 0);
	_SCSIM_Mapping_Read_P005_ForCalcTrainPos_TM("TM::Read_P005_ForCalcTrainPos", "1", 2, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_TelegramHeader_T_BG_Types_Pkg_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_LinkedBGs_T_BG_Types_Pkg_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_NID_LRBG_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_real_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TelegramHeader", &_SCSIM_TelegramHeader_T_BG_Types_Pkg_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LinkedBGsOUT", &_SCSIM_LinkedBGs_T_BG_Types_Pkg_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "LRBG", &_SCSIM_NID_LRBG_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Loc", &_SCSIM_kcg_real_Utils, 11, valid, 0, 0);
}

void* _SCSIM_Get_TestStory00A_P005_Internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.Context_1);
		case 2:
			return &(outputs_ctx._1_Context_1);
		case 3:
			return &(outputs_ctx._L2);
		case 4:
			return &(outputs_ctx._L1);
		case 5:
			return &(outputs_ctx._L3);
		case 6:
			return &(outputs_ctx._L4);
		case 7:
			return &(outputs_ctx._L5);
		case 8:
			return &(outputs_ctx.TelegramHeader);
		case 9:
			return &(outputs_ctx.LinkedBGsOUT);
		case 10:
			return &(inputs_ctx.LRBG);
		case 11:
			return &(inputs_ctx.Loc);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::Story00A/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Story00A_FirstTest(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Story00A_FirstTest_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Story00A_BTM_FirstTest("FirstTest::Story00A_BTM", "1", 12, 0, 0);
	_SCSIM_Mapping_RECV_ConvertBaliseHeader_CT_TM_conversions("TM_conversions::RECV_ConvertBaliseHeader_CT", "1", 13, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_real_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_TelegramHeader_T_BG_Types_Pkg_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_CompressedBaliseMessage_TM_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Packets_Out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TelegramHeader", &_SCSIM_TelegramHeader_T_BG_Types_Pkg_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Story00A_FirstTest_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Story00A_FirstTest* pContext = (outC_Story00A_FirstTest*)pInstance;
	switch (nHandleIdent) {
		case 12:
			return &((*pContext).Context_1);
		case 13:
			return &((*pContext)._1_Context_1);
		case 14:
			return &((*pContext)._L8);
		case 15:
			return &((*pContext)._L7);
		case 16:
			return &((*pContext)._L4);
		case 17:
			return &((*pContext)._L1);
		case 18:
			return &((*pContext)._L2);
		case 19:
			return &((*pContext).Packets_Out);
		case 20:
			return &((*pContext).TelegramHeader);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM::Read_P005_ForCalcTrainPos/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Read_P005_ForCalcTrainPos_TM(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Read_P005_ForCalcTrainPos_TM_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Read_P005_TM("TM::Read_P005", "1", 21, 0, 0);
	_SCSIM_Mapping_C_P005_ForCalcTrainPos_TM_conversions("TM_conversions::C_P005_ForCalcTrainPos", "1", 22, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_NID_LRBG_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_P005_OBU_T_TM_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_LinkedBGs_T_BG_Types_Pkg_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LinkedBGsOUT", &_SCSIM_LinkedBGs_T_BG_Types_Pkg_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Read_P005_ForCalcTrainPos_TM_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Read_P005_ForCalcTrainPos_TM* pContext = (outC_Read_P005_ForCalcTrainPos_TM*)pInstance;
	switch (nHandleIdent) {
		case 21:
			return &((*pContext).Context_1);
		case 22:
			return &((*pContext)._1_Context_1);
		case 23:
			return &((*pContext)._L1);
		case 24:
			return &((*pContext)._L2);
		case 25:
			return &((*pContext)._L3);
		case 26:
			return &((*pContext)._L4);
		case 27:
			return &((*pContext).LinkedBGsOUT);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::Story00A_BTM/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Story00A_BTM_FirstTest(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Story00A_BTM_FirstTest_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Group_364_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_364", "1", 28, 0, 0);
	_SCSIM_Mapping_Balise_Group_367_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_367", "1", 29, 0, 0);
	_SCSIM_Mapping_Balise_Group_368_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_368", "1", 30, 0, 0);
	_SCSIM_Mapping_Balise_Group_366_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_366", "1", 31, 0, 0);
	_SCSIM_Mapping_Balise_Group_369_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_369", "1", 32, 0, 0);
	_SCSIM_Mapping_Balise_Group_365_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_365", "1", 33, 0, 0);
	_SCSIM_Mapping_Balise_Group_341_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_341", "1", 34, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_CompressedBaliseMessage_TM_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_CompressedBaliseMessage_TM_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_CompressedBaliseMessage_TM_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_CompressedBaliseMessage_TM_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_CompressedBaliseMessage_TM_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_CompressedBaliseMessage_TM_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_CompressedBaliseMessage_TM_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_CompressedBaliseMessage_TM_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_real_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BM", &_SCSIM_CompressedBaliseMessage_TM_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Story00A_BTM_FirstTest_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Story00A_BTM_FirstTest* pContext = (outC_Story00A_BTM_FirstTest*)pInstance;
	switch (nHandleIdent) {
		case 28:
			return &((*pContext).Context_1);
		case 29:
			return &((*pContext)._3_Context_1);
		case 30:
			return &((*pContext)._4_Context_1);
		case 31:
			return &((*pContext)._2_Context_1);
		case 32:
			return &((*pContext)._5_Context_1);
		case 33:
			return &((*pContext)._1_Context_1);
		case 34:
			return &((*pContext)._6_Context_1);
		case 35:
			return &((*pContext)._L41);
		case 36:
			return &((*pContext)._L40);
		case 37:
			return &((*pContext)._L39);
		case 38:
			return &((*pContext)._L38);
		case 39:
			return &((*pContext)._L37);
		case 40:
			return &((*pContext)._L36);
		case 41:
			return &((*pContext)._L35);
		case 42:
			return &((*pContext)._L34);
		case 43:
			return &((*pContext)._L33);
		case 44:
			return &((*pContext).BM);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::RECV_ConvertBaliseHeader_CT/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_ConvertBaliseHeader_CT_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_RECV_ConvertBaliseHeader_CT_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_CAST_Int_to_Q_UPDOWN_TM_conversions("TM_conversions::CAST_Int_to_Q_UPDOWN", "1", 45, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_M_VERSION_TM_conversions("TM_conversions::CAST_Int_to_M_VERSION", "1", 46, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_MEDIA_TM_conversions("TM_conversions::CAST_Int_to_Q_MEDIA", "1", 47, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_N_PIG_TM_conversions("TM_conversions::CAST_Int_to_N_PIG", "1", 48, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_N_TOTAL_TM_conversions("TM_conversions::CAST_Int_to_N_TOTAL", "1", 49, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_M_DUP_TM_conversions("TM_conversions::CAST_Int_to_M_DUP", "1", 50, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_LINK_TM_conversions("TM_conversions::CAST_Int_to_Q_LINK", "1", 51, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 60, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 61, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_TelegramHeader_T_BG_Types_Pkg_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_Q_UPDOWN_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_M_VERSION_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_Q_MEDIA_Utils, 66, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_N_PIG_Utils, 67, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_N_TOTAL_Utils, 68, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_M_DUP_Utils, 69, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L49", &_SCSIM_Q_LINK_Utils, 70, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BaliseTelegramHeaderOut", &_SCSIM_TelegramHeader_T_BG_Types_Pkg_Utils, 71, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ConvertBaliseHeader_CT_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ConvertBaliseHeader_CT_TM_conversions* pContext = (outC_RECV_ConvertBaliseHeader_CT_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 45:
			return &((*pContext)._6_Context_1);
		case 46:
			return &((*pContext)._5_Context_1);
		case 47:
			return &((*pContext)._4_Context_1);
		case 48:
			return &((*pContext)._3_Context_1);
		case 49:
			return &((*pContext)._2_Context_1);
		case 50:
			return &((*pContext)._1_Context_1);
		case 51:
			return &((*pContext).Context_1);
		case 52:
			return &((*pContext)._L1);
		case 53:
			return &((*pContext)._L11);
		case 54:
			return &((*pContext)._L10);
		case 55:
			return &((*pContext)._L9);
		case 56:
			return &((*pContext)._L8);
		case 57:
			return &((*pContext)._L7);
		case 58:
			return &((*pContext)._L6);
		case 59:
			return &((*pContext)._L5);
		case 60:
			return &((*pContext)._L4);
		case 61:
			return &((*pContext)._L3);
		case 62:
			return &((*pContext)._L2);
		case 63:
			return &((*pContext)._L42);
		case 64:
			return &((*pContext)._L43);
		case 65:
			return &((*pContext)._L44);
		case 66:
			return &((*pContext)._L45);
		case 67:
			return &((*pContext)._L46);
		case 68:
			return &((*pContext)._L47);
		case 69:
			return &((*pContext)._L48);
		case 70:
			return &((*pContext)._L49);
		case 71:
			return &((*pContext).BaliseTelegramHeaderOut);
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
	_SCSIM_Mapping_RECV_ReadPackets_TM_lib_internal("TM_lib_internal::RECV_ReadPackets", "1", 72, 0, 0);
	_SCSIM_Mapping_C_P005_compr_onboard_TM_conversions("TM_conversions::C_P005_compr_onboard", "3", 73, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_int_500_Utils, 74, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 75, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 76, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L166", &_SCSIM_P005_OBU_T_TM_Utils, 77, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "P005_OBU_out", &_SCSIM_P005_OBU_T_TM_Utils, 78, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Read_P005_TM_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Read_P005_TM* pContext = (outC_Read_P005_TM*)pInstance;
	switch (nHandleIdent) {
		case 72:
			return &((*pContext).Context_1);
		case 73:
			return &((*pContext).Context_3);
		case 74:
			return &((*pContext)._L5);
		case 75:
			return &((*pContext)._L6);
		case 76:
			return &((*pContext)._L30);
		case 77:
			return &((*pContext)._L166);
		case 78:
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
	_SCSIM_Mapping_C_P005_LinkedBGs_TM_conversions("TM_conversions::C_P005_LinkedBGs", "1", 79, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_NID_LRBG_Utils, 80, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_P005_OBU_T_TM_Utils, 81, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_array__5546_Utils, 82, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_P005_OBU_sectionlist_enum_T_TM_Utils, 83, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_N_ITER_Utils, 84, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_Q_SCALE_Utils, 85, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_L_PACKET_Utils, 86, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_Q_DIR_Utils, 87, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 88, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_array__5717_Utils, 89, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_array__5720_Utils, 90, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_array__5723_Utils, 91, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_array_int_4_Utils, 92, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LinkedBGsOUT", &_SCSIM_LinkedBGs_T_BG_Types_Pkg_Utils, 93, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_ForCalcTrainPos_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_ForCalcTrainPos_TM_conversions* pContext = (outC_C_P005_ForCalcTrainPos_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 79:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 80:
			return &((*pContext)._L1);
		case 81:
			return &((*pContext)._L2);
		case 82:
			return &((*pContext)._L4);
		case 83:
			return &((*pContext)._L11);
		case 84:
			return &((*pContext)._L10);
		case 85:
			return &((*pContext)._L9);
		case 86:
			return &((*pContext)._L8);
		case 87:
			return &((*pContext)._L7);
		case 88:
			return &((*pContext)._L6);
		case 89:
			return &((*pContext)._L18);
		case 90:
			return &((*pContext)._L20);
		case 91:
			return &((*pContext)._L21);
		case 92:
			return &((*pContext)._L22);
		case 93:
			return &((*pContext).LinkedBGsOUT);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_Group_364/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_364_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_364_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_364_1_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_364_1", "1", 94, 0, 0);
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 95, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 96, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 97, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 98, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 99, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 100, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 101, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 102, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 103, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 104, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 105, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 106, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 107, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 108, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 109, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 110, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 111, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 112, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 113, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 114, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 115, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 116, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 117, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 118, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 119, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 120, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 121, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 122, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 123, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 124, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 125, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 126, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 127, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 128, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 129, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "7", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 130, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 131, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 132, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 133, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 134, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 135, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 136, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Balise_Group_Init_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_Init", "1", 137, 0, 0);
	_SCSIM_Mapping_Balise_Group_Close_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_Close", "1", 138, 0, 0);
	_SCSIM_Mapping_Balise_364_0_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_364_0", "1", 139, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataIn", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 140, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataOut", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 141, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 142, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 143, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 144, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 145, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 146, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 147, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 148, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 149, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 150, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedBaliseMessage_TM_Utils, 151, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 152, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 153, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseGroupData_TM_Utils, 154, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 155, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 156, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 157, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 158, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 159, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 160, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 161, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 162, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 163, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_real_Utils, 164, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_CompressedBaliseMessage_TM_Utils, 165, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_CompressedBaliseMessage_TM_Utils, 166, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_364_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_364_FirstTest_InfraLibInt* pContext = (outC_Balise_Group_364_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 94:
			return &((*pContext)._2_Context_1);
		case 95:
			return &((*pContext).B_data_out_2);
		case 96:
			return &((*pContext).B_data_in_2);
		case 97:
			return &((*pContext).Header_2);
		case 98:
			return &((*pContext).PIG_nom_2);
		case 99:
			return &((*pContext)._L1_2);
		case 100:
			return &((*pContext)._L2_2);
		case 101:
			return &((*pContext)._L3_2);
		case 102:
			return &((*pContext).B_data_out_3);
		case 103:
			return &((*pContext).B_data_in_3);
		case 104:
			return &((*pContext).Header_3);
		case 105:
			return &((*pContext).PIG_nom_3);
		case 106:
			return &((*pContext)._L1_3);
		case 107:
			return &((*pContext)._L2_3);
		case 108:
			return &((*pContext)._L3_3);
		case 109:
			return &((*pContext).B_data_out_4);
		case 110:
			return &((*pContext).B_data_in_4);
		case 111:
			return &((*pContext).Header_4);
		case 112:
			return &((*pContext).PIG_nom_4);
		case 113:
			return &((*pContext)._L1_4);
		case 114:
			return &((*pContext)._L2_4);
		case 115:
			return &((*pContext)._L3_4);
		case 116:
			return &((*pContext).B_data_out_5);
		case 117:
			return &((*pContext).B_data_in_5);
		case 118:
			return &((*pContext).Header_5);
		case 119:
			return &((*pContext).PIG_nom_5);
		case 120:
			return &((*pContext)._L1_5);
		case 121:
			return &((*pContext)._L2_5);
		case 122:
			return &((*pContext)._L3_5);
		case 123:
			return &((*pContext).B_data_out_6);
		case 124:
			return &((*pContext).B_data_in_6);
		case 125:
			return &((*pContext).Header_6);
		case 126:
			return &((*pContext).PIG_nom_6);
		case 127:
			return &((*pContext)._L1_6);
		case 128:
			return &((*pContext)._L2_6);
		case 129:
			return &((*pContext)._L3_6);
		case 130:
			return &((*pContext).B_data_out_7);
		case 131:
			return &((*pContext).B_data_in_7);
		case 132:
			return &((*pContext).Header_7);
		case 133:
			return &((*pContext).PIG_nom_7);
		case 134:
			return &((*pContext)._L1_7);
		case 135:
			return &((*pContext)._L2_7);
		case 136:
			return &((*pContext)._L3_7);
		case 137:
			return &((*pContext).Context_1);
		case 138:
			return &((*pContext)._3_Context_1);
		case 139:
			return &((*pContext)._1_Context_1);
		case 140:
			return &((*pContext).BaliseDataIn);
		case 141:
			return &((*pContext).BaliseDataOut);
		case 142:
			return &((*pContext)._L1);
		case 143:
			return &((*pContext)._L2);
		case 144:
			return &((*pContext)._L3);
		case 145:
			return &((*pContext)._L4);
		case 146:
			return &((*pContext)._L5);
		case 147:
			return &((*pContext)._L6);
		case 148:
			return &((*pContext)._L7);
		case 149:
			return &((*pContext)._L9);
		case 150:
			return &((*pContext)._L11);
		case 151:
			return &((*pContext)._L13);
		case 152:
			return &((*pContext)._L14);
		case 153:
			return &((*pContext)._L16);
		case 154:
			return &((*pContext)._L19);
		case 155:
			return &((*pContext)._L20);
		case 156:
			return &((*pContext)._L21);
		case 157:
			return &((*pContext)._L22);
		case 158:
			return &((*pContext)._L23);
		case 159:
			return &((*pContext)._L24);
		case 160:
			return &((*pContext)._L25);
		case 161:
			return &((*pContext)._L26);
		case 162:
			return &((*pContext)._L27);
		case 163:
			return &((*pContext)._L8);
		case 164:
			return &((*pContext)._L28);
		case 165:
			return &((*pContext)._L29);
		case 166:
			return &((*pContext).BG_message_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_Group_367/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_367_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_367_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_367_0_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_367_0", "1", 167, 0, 0);
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 168, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 169, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 170, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 171, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 172, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 173, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 174, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 175, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 176, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 177, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 178, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 179, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 180, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 181, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 182, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 183, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 184, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 185, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 186, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 187, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 188, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 189, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 190, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 191, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 192, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 193, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 194, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 195, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 196, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 197, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 198, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 199, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 200, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 201, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 202, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "7", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 203, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 204, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 205, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 206, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 207, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 208, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 209, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Balise_Group_Init_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_Init", "1", 210, 0, 0);
	_SCSIM_Mapping_Balise_Group_Close_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_Close", "1", 211, 0, 0);
	_SCSIM_Mapping_Balise_367_1_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_367_1", "1", 212, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataIn", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 213, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataOut", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 214, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 215, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 216, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 217, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 218, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 219, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 220, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 221, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 222, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 223, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedBaliseMessage_TM_Utils, 224, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 225, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 226, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseGroupData_TM_Utils, 227, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 228, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 229, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 230, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 231, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 232, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 233, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 234, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 235, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 236, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_real_Utils, 237, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_CompressedBaliseMessage_TM_Utils, 238, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_CompressedBaliseMessage_TM_Utils, 239, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_367_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_367_FirstTest_InfraLibInt* pContext = (outC_Balise_Group_367_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 167:
			return &((*pContext)._2_Context_1);
		case 168:
			return &((*pContext).B_data_out_2);
		case 169:
			return &((*pContext).B_data_in_2);
		case 170:
			return &((*pContext).Header_2);
		case 171:
			return &((*pContext).PIG_nom_2);
		case 172:
			return &((*pContext)._L1_2);
		case 173:
			return &((*pContext)._L2_2);
		case 174:
			return &((*pContext)._L3_2);
		case 175:
			return &((*pContext).B_data_out_3);
		case 176:
			return &((*pContext).B_data_in_3);
		case 177:
			return &((*pContext).Header_3);
		case 178:
			return &((*pContext).PIG_nom_3);
		case 179:
			return &((*pContext)._L1_3);
		case 180:
			return &((*pContext)._L2_3);
		case 181:
			return &((*pContext)._L3_3);
		case 182:
			return &((*pContext).B_data_out_4);
		case 183:
			return &((*pContext).B_data_in_4);
		case 184:
			return &((*pContext).Header_4);
		case 185:
			return &((*pContext).PIG_nom_4);
		case 186:
			return &((*pContext)._L1_4);
		case 187:
			return &((*pContext)._L2_4);
		case 188:
			return &((*pContext)._L3_4);
		case 189:
			return &((*pContext).B_data_out_5);
		case 190:
			return &((*pContext).B_data_in_5);
		case 191:
			return &((*pContext).Header_5);
		case 192:
			return &((*pContext).PIG_nom_5);
		case 193:
			return &((*pContext)._L1_5);
		case 194:
			return &((*pContext)._L2_5);
		case 195:
			return &((*pContext)._L3_5);
		case 196:
			return &((*pContext).B_data_out_6);
		case 197:
			return &((*pContext).B_data_in_6);
		case 198:
			return &((*pContext).Header_6);
		case 199:
			return &((*pContext).PIG_nom_6);
		case 200:
			return &((*pContext)._L1_6);
		case 201:
			return &((*pContext)._L2_6);
		case 202:
			return &((*pContext)._L3_6);
		case 203:
			return &((*pContext).B_data_out_7);
		case 204:
			return &((*pContext).B_data_in_7);
		case 205:
			return &((*pContext).Header_7);
		case 206:
			return &((*pContext).PIG_nom_7);
		case 207:
			return &((*pContext)._L1_7);
		case 208:
			return &((*pContext)._L2_7);
		case 209:
			return &((*pContext)._L3_7);
		case 210:
			return &((*pContext).Context_1);
		case 211:
			return &((*pContext)._3_Context_1);
		case 212:
			return &((*pContext)._1_Context_1);
		case 213:
			return &((*pContext).BaliseDataIn);
		case 214:
			return &((*pContext).BaliseDataOut);
		case 215:
			return &((*pContext)._L1);
		case 216:
			return &((*pContext)._L2);
		case 217:
			return &((*pContext)._L3);
		case 218:
			return &((*pContext)._L4);
		case 219:
			return &((*pContext)._L5);
		case 220:
			return &((*pContext)._L6);
		case 221:
			return &((*pContext)._L7);
		case 222:
			return &((*pContext)._L9);
		case 223:
			return &((*pContext)._L11);
		case 224:
			return &((*pContext)._L13);
		case 225:
			return &((*pContext)._L14);
		case 226:
			return &((*pContext)._L16);
		case 227:
			return &((*pContext)._L19);
		case 228:
			return &((*pContext)._L20);
		case 229:
			return &((*pContext)._L21);
		case 230:
			return &((*pContext)._L22);
		case 231:
			return &((*pContext)._L23);
		case 232:
			return &((*pContext)._L24);
		case 233:
			return &((*pContext)._L25);
		case 234:
			return &((*pContext)._L26);
		case 235:
			return &((*pContext)._L27);
		case 236:
			return &((*pContext)._L8);
		case 237:
			return &((*pContext)._L28);
		case 238:
			return &((*pContext)._L29);
		case 239:
			return &((*pContext).BG_message_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_Group_368/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_368_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_368_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_368_1_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_368_1", "1", 240, 0, 0);
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 241, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 242, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 243, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 244, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 245, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 246, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 247, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 248, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 249, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 250, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 251, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 252, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 253, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 254, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 255, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 256, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 257, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 258, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 259, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 260, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 261, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 262, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 263, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 264, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 265, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 266, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 267, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 268, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 269, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 270, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 271, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 272, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 273, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 274, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 275, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "7", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 276, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 277, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 278, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 279, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 280, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 281, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 282, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Balise_Group_Init_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_Init", "1", 283, 0, 0);
	_SCSIM_Mapping_Balise_Group_Close_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_Close", "1", 284, 0, 0);
	_SCSIM_Mapping_Balise_368_0_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_368_0", "1", 285, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataIn", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 286, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataOut", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 287, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 288, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 289, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 290, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 291, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 292, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 293, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 294, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 295, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 296, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedBaliseMessage_TM_Utils, 297, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 298, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 299, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseGroupData_TM_Utils, 300, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 301, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 302, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 303, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 304, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 305, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 306, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 307, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 308, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 309, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_real_Utils, 310, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_CompressedBaliseMessage_TM_Utils, 311, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_CompressedBaliseMessage_TM_Utils, 312, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_368_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_368_FirstTest_InfraLibInt* pContext = (outC_Balise_Group_368_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 240:
			return &((*pContext)._2_Context_1);
		case 241:
			return &((*pContext).B_data_out_2);
		case 242:
			return &((*pContext).B_data_in_2);
		case 243:
			return &((*pContext).Header_2);
		case 244:
			return &((*pContext).PIG_nom_2);
		case 245:
			return &((*pContext)._L1_2);
		case 246:
			return &((*pContext)._L2_2);
		case 247:
			return &((*pContext)._L3_2);
		case 248:
			return &((*pContext).B_data_out_3);
		case 249:
			return &((*pContext).B_data_in_3);
		case 250:
			return &((*pContext).Header_3);
		case 251:
			return &((*pContext).PIG_nom_3);
		case 252:
			return &((*pContext)._L1_3);
		case 253:
			return &((*pContext)._L2_3);
		case 254:
			return &((*pContext)._L3_3);
		case 255:
			return &((*pContext).B_data_out_4);
		case 256:
			return &((*pContext).B_data_in_4);
		case 257:
			return &((*pContext).Header_4);
		case 258:
			return &((*pContext).PIG_nom_4);
		case 259:
			return &((*pContext)._L1_4);
		case 260:
			return &((*pContext)._L2_4);
		case 261:
			return &((*pContext)._L3_4);
		case 262:
			return &((*pContext).B_data_out_5);
		case 263:
			return &((*pContext).B_data_in_5);
		case 264:
			return &((*pContext).Header_5);
		case 265:
			return &((*pContext).PIG_nom_5);
		case 266:
			return &((*pContext)._L1_5);
		case 267:
			return &((*pContext)._L2_5);
		case 268:
			return &((*pContext)._L3_5);
		case 269:
			return &((*pContext).B_data_out_6);
		case 270:
			return &((*pContext).B_data_in_6);
		case 271:
			return &((*pContext).Header_6);
		case 272:
			return &((*pContext).PIG_nom_6);
		case 273:
			return &((*pContext)._L1_6);
		case 274:
			return &((*pContext)._L2_6);
		case 275:
			return &((*pContext)._L3_6);
		case 276:
			return &((*pContext).B_data_out_7);
		case 277:
			return &((*pContext).B_data_in_7);
		case 278:
			return &((*pContext).Header_7);
		case 279:
			return &((*pContext).PIG_nom_7);
		case 280:
			return &((*pContext)._L1_7);
		case 281:
			return &((*pContext)._L2_7);
		case 282:
			return &((*pContext)._L3_7);
		case 283:
			return &((*pContext).Context_1);
		case 284:
			return &((*pContext)._3_Context_1);
		case 285:
			return &((*pContext)._1_Context_1);
		case 286:
			return &((*pContext).BaliseDataIn);
		case 287:
			return &((*pContext).BaliseDataOut);
		case 288:
			return &((*pContext)._L1);
		case 289:
			return &((*pContext)._L2);
		case 290:
			return &((*pContext)._L3);
		case 291:
			return &((*pContext)._L4);
		case 292:
			return &((*pContext)._L5);
		case 293:
			return &((*pContext)._L6);
		case 294:
			return &((*pContext)._L7);
		case 295:
			return &((*pContext)._L9);
		case 296:
			return &((*pContext)._L11);
		case 297:
			return &((*pContext)._L13);
		case 298:
			return &((*pContext)._L14);
		case 299:
			return &((*pContext)._L16);
		case 300:
			return &((*pContext)._L19);
		case 301:
			return &((*pContext)._L20);
		case 302:
			return &((*pContext)._L21);
		case 303:
			return &((*pContext)._L22);
		case 304:
			return &((*pContext)._L23);
		case 305:
			return &((*pContext)._L24);
		case 306:
			return &((*pContext)._L25);
		case 307:
			return &((*pContext)._L26);
		case 308:
			return &((*pContext)._L27);
		case 309:
			return &((*pContext)._L8);
		case 310:
			return &((*pContext)._L28);
		case 311:
			return &((*pContext)._L29);
		case 312:
			return &((*pContext).BG_message_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_Group_366/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_366_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_366_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_366_0_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_366_0", "1", 313, 0, 0);
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 314, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 315, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 316, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 317, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 318, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 319, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 320, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 321, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 322, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 323, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 324, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 325, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 326, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 327, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 328, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 329, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 330, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 331, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 332, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 333, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 334, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 335, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 336, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 337, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 338, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 339, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 340, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 341, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 342, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 343, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 344, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 345, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 346, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 347, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 348, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "7", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 349, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 350, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 351, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 352, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 353, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 354, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 355, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Balise_Group_Init_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_Init", "1", 356, 0, 0);
	_SCSIM_Mapping_Balise_Group_Close_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_Close", "1", 357, 0, 0);
	_SCSIM_Mapping_Balise_366_1_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_366_1", "1", 358, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataIn", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 359, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataOut", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 360, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 361, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 362, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 363, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 364, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 365, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 366, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 367, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 368, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 369, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedBaliseMessage_TM_Utils, 370, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 371, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 372, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseGroupData_TM_Utils, 373, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 374, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 375, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 376, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 377, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 378, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 379, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 380, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 381, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 382, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_real_Utils, 383, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_CompressedBaliseMessage_TM_Utils, 384, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_CompressedBaliseMessage_TM_Utils, 385, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_366_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_366_FirstTest_InfraLibInt* pContext = (outC_Balise_Group_366_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 313:
			return &((*pContext)._2_Context_1);
		case 314:
			return &((*pContext).B_data_out_2);
		case 315:
			return &((*pContext).B_data_in_2);
		case 316:
			return &((*pContext).Header_2);
		case 317:
			return &((*pContext).PIG_nom_2);
		case 318:
			return &((*pContext)._L1_2);
		case 319:
			return &((*pContext)._L2_2);
		case 320:
			return &((*pContext)._L3_2);
		case 321:
			return &((*pContext).B_data_out_3);
		case 322:
			return &((*pContext).B_data_in_3);
		case 323:
			return &((*pContext).Header_3);
		case 324:
			return &((*pContext).PIG_nom_3);
		case 325:
			return &((*pContext)._L1_3);
		case 326:
			return &((*pContext)._L2_3);
		case 327:
			return &((*pContext)._L3_3);
		case 328:
			return &((*pContext).B_data_out_4);
		case 329:
			return &((*pContext).B_data_in_4);
		case 330:
			return &((*pContext).Header_4);
		case 331:
			return &((*pContext).PIG_nom_4);
		case 332:
			return &((*pContext)._L1_4);
		case 333:
			return &((*pContext)._L2_4);
		case 334:
			return &((*pContext)._L3_4);
		case 335:
			return &((*pContext).B_data_out_5);
		case 336:
			return &((*pContext).B_data_in_5);
		case 337:
			return &((*pContext).Header_5);
		case 338:
			return &((*pContext).PIG_nom_5);
		case 339:
			return &((*pContext)._L1_5);
		case 340:
			return &((*pContext)._L2_5);
		case 341:
			return &((*pContext)._L3_5);
		case 342:
			return &((*pContext).B_data_out_6);
		case 343:
			return &((*pContext).B_data_in_6);
		case 344:
			return &((*pContext).Header_6);
		case 345:
			return &((*pContext).PIG_nom_6);
		case 346:
			return &((*pContext)._L1_6);
		case 347:
			return &((*pContext)._L2_6);
		case 348:
			return &((*pContext)._L3_6);
		case 349:
			return &((*pContext).B_data_out_7);
		case 350:
			return &((*pContext).B_data_in_7);
		case 351:
			return &((*pContext).Header_7);
		case 352:
			return &((*pContext).PIG_nom_7);
		case 353:
			return &((*pContext)._L1_7);
		case 354:
			return &((*pContext)._L2_7);
		case 355:
			return &((*pContext)._L3_7);
		case 356:
			return &((*pContext).Context_1);
		case 357:
			return &((*pContext)._3_Context_1);
		case 358:
			return &((*pContext)._1_Context_1);
		case 359:
			return &((*pContext).BaliseDataIn);
		case 360:
			return &((*pContext).BaliseDataOut);
		case 361:
			return &((*pContext)._L1);
		case 362:
			return &((*pContext)._L2);
		case 363:
			return &((*pContext)._L3);
		case 364:
			return &((*pContext)._L4);
		case 365:
			return &((*pContext)._L5);
		case 366:
			return &((*pContext)._L6);
		case 367:
			return &((*pContext)._L7);
		case 368:
			return &((*pContext)._L9);
		case 369:
			return &((*pContext)._L11);
		case 370:
			return &((*pContext)._L13);
		case 371:
			return &((*pContext)._L14);
		case 372:
			return &((*pContext)._L16);
		case 373:
			return &((*pContext)._L19);
		case 374:
			return &((*pContext)._L20);
		case 375:
			return &((*pContext)._L21);
		case 376:
			return &((*pContext)._L22);
		case 377:
			return &((*pContext)._L23);
		case 378:
			return &((*pContext)._L24);
		case 379:
			return &((*pContext)._L25);
		case 380:
			return &((*pContext)._L26);
		case 381:
			return &((*pContext)._L27);
		case 382:
			return &((*pContext)._L8);
		case 383:
			return &((*pContext)._L28);
		case 384:
			return &((*pContext)._L29);
		case 385:
			return &((*pContext).BG_message_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_Group_369/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_369_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_369_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_369_1_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_369_1", "1", 386, 0, 0);
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 387, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 388, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 389, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 390, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 391, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 392, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 393, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 394, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 395, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 396, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 397, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 398, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 399, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 400, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 401, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 402, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 403, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 404, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 405, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 406, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 407, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 408, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 409, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 410, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 411, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 412, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 413, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 414, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 415, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 416, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 417, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 418, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 419, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 420, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 421, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "7", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 422, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 423, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 424, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 425, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 426, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 427, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 428, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Balise_Group_Init_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_Init", "1", 429, 0, 0);
	_SCSIM_Mapping_Balise_Group_Close_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_Close", "1", 430, 0, 0);
	_SCSIM_Mapping_Balise_369_0_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_369_0", "1", 431, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataIn", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 432, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataOut", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 433, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 434, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 435, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 436, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 437, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 438, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 439, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 440, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 441, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 442, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedBaliseMessage_TM_Utils, 443, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 444, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 445, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseGroupData_TM_Utils, 446, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 447, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 448, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 449, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 450, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 451, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 452, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 453, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 454, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 455, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_real_Utils, 456, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_CompressedBaliseMessage_TM_Utils, 457, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_CompressedBaliseMessage_TM_Utils, 458, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_369_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_369_FirstTest_InfraLibInt* pContext = (outC_Balise_Group_369_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 386:
			return &((*pContext)._2_Context_1);
		case 387:
			return &((*pContext).B_data_out_2);
		case 388:
			return &((*pContext).B_data_in_2);
		case 389:
			return &((*pContext).Header_2);
		case 390:
			return &((*pContext).PIG_nom_2);
		case 391:
			return &((*pContext)._L1_2);
		case 392:
			return &((*pContext)._L2_2);
		case 393:
			return &((*pContext)._L3_2);
		case 394:
			return &((*pContext).B_data_out_3);
		case 395:
			return &((*pContext).B_data_in_3);
		case 396:
			return &((*pContext).Header_3);
		case 397:
			return &((*pContext).PIG_nom_3);
		case 398:
			return &((*pContext)._L1_3);
		case 399:
			return &((*pContext)._L2_3);
		case 400:
			return &((*pContext)._L3_3);
		case 401:
			return &((*pContext).B_data_out_4);
		case 402:
			return &((*pContext).B_data_in_4);
		case 403:
			return &((*pContext).Header_4);
		case 404:
			return &((*pContext).PIG_nom_4);
		case 405:
			return &((*pContext)._L1_4);
		case 406:
			return &((*pContext)._L2_4);
		case 407:
			return &((*pContext)._L3_4);
		case 408:
			return &((*pContext).B_data_out_5);
		case 409:
			return &((*pContext).B_data_in_5);
		case 410:
			return &((*pContext).Header_5);
		case 411:
			return &((*pContext).PIG_nom_5);
		case 412:
			return &((*pContext)._L1_5);
		case 413:
			return &((*pContext)._L2_5);
		case 414:
			return &((*pContext)._L3_5);
		case 415:
			return &((*pContext).B_data_out_6);
		case 416:
			return &((*pContext).B_data_in_6);
		case 417:
			return &((*pContext).Header_6);
		case 418:
			return &((*pContext).PIG_nom_6);
		case 419:
			return &((*pContext)._L1_6);
		case 420:
			return &((*pContext)._L2_6);
		case 421:
			return &((*pContext)._L3_6);
		case 422:
			return &((*pContext).B_data_out_7);
		case 423:
			return &((*pContext).B_data_in_7);
		case 424:
			return &((*pContext).Header_7);
		case 425:
			return &((*pContext).PIG_nom_7);
		case 426:
			return &((*pContext)._L1_7);
		case 427:
			return &((*pContext)._L2_7);
		case 428:
			return &((*pContext)._L3_7);
		case 429:
			return &((*pContext).Context_1);
		case 430:
			return &((*pContext)._3_Context_1);
		case 431:
			return &((*pContext)._1_Context_1);
		case 432:
			return &((*pContext).BaliseDataIn);
		case 433:
			return &((*pContext).BaliseDataOut);
		case 434:
			return &((*pContext)._L1);
		case 435:
			return &((*pContext)._L2);
		case 436:
			return &((*pContext)._L3);
		case 437:
			return &((*pContext)._L4);
		case 438:
			return &((*pContext)._L5);
		case 439:
			return &((*pContext)._L6);
		case 440:
			return &((*pContext)._L7);
		case 441:
			return &((*pContext)._L9);
		case 442:
			return &((*pContext)._L11);
		case 443:
			return &((*pContext)._L13);
		case 444:
			return &((*pContext)._L14);
		case 445:
			return &((*pContext)._L16);
		case 446:
			return &((*pContext)._L19);
		case 447:
			return &((*pContext)._L20);
		case 448:
			return &((*pContext)._L21);
		case 449:
			return &((*pContext)._L22);
		case 450:
			return &((*pContext)._L23);
		case 451:
			return &((*pContext)._L24);
		case 452:
			return &((*pContext)._L25);
		case 453:
			return &((*pContext)._L26);
		case 454:
			return &((*pContext)._L27);
		case 455:
			return &((*pContext)._L8);
		case 456:
			return &((*pContext)._L28);
		case 457:
			return &((*pContext)._L29);
		case 458:
			return &((*pContext).BG_message_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_Group_365/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_365_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_365_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_365_0_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_365_0", "1", 459, 0, 0);
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 460, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 461, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 462, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 463, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 464, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 465, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 466, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 467, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 468, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 469, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 470, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 471, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 472, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 473, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 474, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 475, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 476, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 477, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 478, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 479, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 480, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 481, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 482, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 483, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 484, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 485, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 486, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 487, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 488, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 489, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 490, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 491, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 492, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 493, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 494, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 495, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 496, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 497, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 498, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 499, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 500, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 501, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Balise_Group_Init_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_Init", "1", 502, 0, 0);
	_SCSIM_Mapping_Balise_Group_Close_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_Close", "1", 503, 0, 0);
	_SCSIM_Mapping_Balise_365_1_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_365_1", "1", 504, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataIn", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 505, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataOut", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 506, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 507, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 508, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 509, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 510, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 511, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 512, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 513, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 514, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 515, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedBaliseMessage_TM_Utils, 516, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 517, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 518, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseGroupData_TM_Utils, 519, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 520, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 521, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 522, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 523, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 524, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 525, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 526, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 527, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 528, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_real_Utils, 529, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_CompressedBaliseMessage_TM_Utils, 530, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_CompressedBaliseMessage_TM_Utils, 531, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_365_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_365_FirstTest_InfraLibInt* pContext = (outC_Balise_Group_365_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 459:
			return &((*pContext)._2_Context_1);
		case 460:
			return &((*pContext).B_data_out_1);
		case 461:
			return &((*pContext).B_data_in_1);
		case 462:
			return &((*pContext).Header_1);
		case 463:
			return &((*pContext).PIG_nom_1);
		case 464:
			return &((*pContext)._L1_1);
		case 465:
			return &((*pContext)._L2_1);
		case 466:
			return &((*pContext)._L3_1);
		case 467:
			return &((*pContext).B_data_out_2);
		case 468:
			return &((*pContext).B_data_in_2);
		case 469:
			return &((*pContext).Header_2);
		case 470:
			return &((*pContext).PIG_nom_2);
		case 471:
			return &((*pContext)._L1_2);
		case 472:
			return &((*pContext)._L2_2);
		case 473:
			return &((*pContext)._L3_2);
		case 474:
			return &((*pContext).B_data_out_3);
		case 475:
			return &((*pContext).B_data_in_3);
		case 476:
			return &((*pContext).Header_3);
		case 477:
			return &((*pContext).PIG_nom_3);
		case 478:
			return &((*pContext)._L1_3);
		case 479:
			return &((*pContext)._L2_3);
		case 480:
			return &((*pContext)._L3_3);
		case 481:
			return &((*pContext).B_data_out_4);
		case 482:
			return &((*pContext).B_data_in_4);
		case 483:
			return &((*pContext).Header_4);
		case 484:
			return &((*pContext).PIG_nom_4);
		case 485:
			return &((*pContext)._L1_4);
		case 486:
			return &((*pContext)._L2_4);
		case 487:
			return &((*pContext)._L3_4);
		case 488:
			return &((*pContext).B_data_out_5);
		case 489:
			return &((*pContext).B_data_in_5);
		case 490:
			return &((*pContext).Header_5);
		case 491:
			return &((*pContext).PIG_nom_5);
		case 492:
			return &((*pContext)._L1_5);
		case 493:
			return &((*pContext)._L2_5);
		case 494:
			return &((*pContext)._L3_5);
		case 495:
			return &((*pContext).B_data_out_6);
		case 496:
			return &((*pContext).B_data_in_6);
		case 497:
			return &((*pContext).Header_6);
		case 498:
			return &((*pContext).PIG_nom_6);
		case 499:
			return &((*pContext)._L1_6);
		case 500:
			return &((*pContext)._L2_6);
		case 501:
			return &((*pContext)._L3_6);
		case 502:
			return &((*pContext).Context_1);
		case 503:
			return &((*pContext)._3_Context_1);
		case 504:
			return &((*pContext)._1_Context_1);
		case 505:
			return &((*pContext).BaliseDataIn);
		case 506:
			return &((*pContext).BaliseDataOut);
		case 507:
			return &((*pContext)._L1);
		case 508:
			return &((*pContext)._L2);
		case 509:
			return &((*pContext)._L3);
		case 510:
			return &((*pContext)._L4);
		case 511:
			return &((*pContext)._L5);
		case 512:
			return &((*pContext)._L6);
		case 513:
			return &((*pContext)._L7);
		case 514:
			return &((*pContext)._L9);
		case 515:
			return &((*pContext)._L11);
		case 516:
			return &((*pContext)._L13);
		case 517:
			return &((*pContext)._L14);
		case 518:
			return &((*pContext)._L16);
		case 519:
			return &((*pContext)._L19);
		case 520:
			return &((*pContext)._L20);
		case 521:
			return &((*pContext)._L21);
		case 522:
			return &((*pContext)._L22);
		case 523:
			return &((*pContext)._L23);
		case 524:
			return &((*pContext)._L24);
		case 525:
			return &((*pContext)._L25);
		case 526:
			return &((*pContext)._L26);
		case 527:
			return &((*pContext)._L27);
		case 528:
			return &((*pContext)._L8);
		case 529:
			return &((*pContext)._L28);
		case 530:
			return &((*pContext)._L29);
		case 531:
			return &((*pContext).BG_message_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_Group_341/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_341_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_341_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_341_0_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_341_0", "1", 532, 0, 0);
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 533, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 534, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 535, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 536, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 537, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 538, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 539, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 540, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 541, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 542, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 543, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 544, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 545, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 546, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 547, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 548, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 549, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 550, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 551, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 552, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 553, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 554, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 555, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 556, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 557, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 558, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 559, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 560, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 561, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 562, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 563, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 564, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 565, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 566, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 567, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Balise", "7", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 568, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 569, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 570, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 571, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 572, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 573, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 574, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Balise_Group_Init_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_Init", "1", 575, 0, 0);
	_SCSIM_Mapping_Balise_Group_Close_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Group_Close", "1", 576, 0, 0);
	_SCSIM_Mapping_Balise_341_1_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_341_1", "1", 577, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataIn", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 578, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataOut", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 579, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 580, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 581, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 582, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 583, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 584, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 585, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 586, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 587, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 588, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedBaliseMessage_TM_Utils, 589, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 590, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 591, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseGroupData_TM_Utils, 592, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 593, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 594, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 595, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 596, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 597, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 598, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 599, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 600, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 601, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_real_Utils, 602, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_CompressedBaliseMessage_TM_Utils, 603, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_CompressedBaliseMessage_TM_Utils, 604, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_341_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_341_FirstTest_InfraLibInt* pContext = (outC_Balise_Group_341_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 532:
			return &((*pContext)._2_Context_1);
		case 533:
			return &((*pContext).B_data_out_2);
		case 534:
			return &((*pContext).B_data_in_2);
		case 535:
			return &((*pContext).Header_2);
		case 536:
			return &((*pContext).PIG_nom_2);
		case 537:
			return &((*pContext)._L1_2);
		case 538:
			return &((*pContext)._L2_2);
		case 539:
			return &((*pContext)._L3_2);
		case 540:
			return &((*pContext).B_data_out_3);
		case 541:
			return &((*pContext).B_data_in_3);
		case 542:
			return &((*pContext).Header_3);
		case 543:
			return &((*pContext).PIG_nom_3);
		case 544:
			return &((*pContext)._L1_3);
		case 545:
			return &((*pContext)._L2_3);
		case 546:
			return &((*pContext)._L3_3);
		case 547:
			return &((*pContext).B_data_out_4);
		case 548:
			return &((*pContext).B_data_in_4);
		case 549:
			return &((*pContext).Header_4);
		case 550:
			return &((*pContext).PIG_nom_4);
		case 551:
			return &((*pContext)._L1_4);
		case 552:
			return &((*pContext)._L2_4);
		case 553:
			return &((*pContext)._L3_4);
		case 554:
			return &((*pContext).B_data_out_5);
		case 555:
			return &((*pContext).B_data_in_5);
		case 556:
			return &((*pContext).Header_5);
		case 557:
			return &((*pContext).PIG_nom_5);
		case 558:
			return &((*pContext)._L1_5);
		case 559:
			return &((*pContext)._L2_5);
		case 560:
			return &((*pContext)._L3_5);
		case 561:
			return &((*pContext).B_data_out_6);
		case 562:
			return &((*pContext).B_data_in_6);
		case 563:
			return &((*pContext).Header_6);
		case 564:
			return &((*pContext).PIG_nom_6);
		case 565:
			return &((*pContext)._L1_6);
		case 566:
			return &((*pContext)._L2_6);
		case 567:
			return &((*pContext)._L3_6);
		case 568:
			return &((*pContext).B_data_out_7);
		case 569:
			return &((*pContext).B_data_in_7);
		case 570:
			return &((*pContext).Header_7);
		case 571:
			return &((*pContext).PIG_nom_7);
		case 572:
			return &((*pContext)._L1_7);
		case 573:
			return &((*pContext)._L2_7);
		case 574:
			return &((*pContext)._L3_7);
		case 575:
			return &((*pContext).Context_1);
		case 576:
			return &((*pContext)._3_Context_1);
		case 577:
			return &((*pContext)._1_Context_1);
		case 578:
			return &((*pContext).BaliseDataIn);
		case 579:
			return &((*pContext).BaliseDataOut);
		case 580:
			return &((*pContext)._L1);
		case 581:
			return &((*pContext)._L2);
		case 582:
			return &((*pContext)._L3);
		case 583:
			return &((*pContext)._L4);
		case 584:
			return &((*pContext)._L5);
		case 585:
			return &((*pContext)._L6);
		case 586:
			return &((*pContext)._L7);
		case 587:
			return &((*pContext)._L9);
		case 588:
			return &((*pContext)._L11);
		case 589:
			return &((*pContext)._L13);
		case 590:
			return &((*pContext)._L14);
		case 591:
			return &((*pContext)._L16);
		case 592:
			return &((*pContext)._L19);
		case 593:
			return &((*pContext)._L20);
		case 594:
			return &((*pContext)._L21);
		case 595:
			return &((*pContext)._L22);
		case 596:
			return &((*pContext)._L23);
		case 597:
			return &((*pContext)._L24);
		case 598:
			return &((*pContext)._L25);
		case 599:
			return &((*pContext)._L26);
		case 600:
			return &((*pContext)._L27);
		case 601:
			return &((*pContext)._L8);
		case 602:
			return &((*pContext)._L28);
		case 603:
			return &((*pContext)._L29);
		case 604:
			return &((*pContext).BG_message_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_UPDOWN/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_UPDOWN_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_UPDOWN_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_605_Utils, 605);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_606_Utils, 606);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 607, valid, 606, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_UPDOWN_Utils, 608, valid, 606, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_609_Utils, 609);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_UPDOWN_Utils, 610, valid, 609, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 611, valid, 609, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_612_Utils, 612);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_UPDOWN_Utils, 613, valid, 612, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 614, valid, 612, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 615, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_updown_in", &_SCSIM_kcg_int_Utils, 616, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 617, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 618, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_updown", &_SCSIM_Q_UPDOWN_Utils, 619, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_UPDOWN_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_UPDOWN_TM_conversions* pContext = (outC_CAST_Int_to_Q_UPDOWN_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 605:
			return &((*pContext).IfBlock1_clock);
		case 606:
			return &((*pContext).else_clock_IfBlock1);
		case 607:
			return &((*pContext)._L2_IfBlock1);
		case 608:
			return &((*pContext)._L1_IfBlock1);
		case 609:
			return &((*pContext).else_clock_IfBlock1);
		case 610:
			return &((*pContext)._L3_IfBlock1);
		case 611:
			return &((*pContext)._L51_IfBlock1);
		case 612:
			return &((*pContext).IfBlock1_clock);
		case 613:
			return &((*pContext)._L4_IfBlock1);
		case 614:
			return &((*pContext)._L5_IfBlock1);
		case 615:
			return &((*pContext).error);
		case 616:
			return &((*pContext).q_updown_in);
		case 617:
			return &((*pContext)._L13);
		case 618:
			return &((*pContext)._L12);
		case 619:
			return &((*pContext).q_updown);
		default:
			break;
	}
	return 0;
}

static int Is606Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_606_Utils = {Is606Active};

static int Is609Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_609_Utils = {Is609Active};

static int Is605Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_605_Utils = {Is605Active};

static int Is612Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_612_Utils = {Is612Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_M_VERSION/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_M_VERSION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_M_VERSION_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_620_Utils, 620);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_621_Utils, 621);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_622_Utils, 622);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_623_Utils, 623);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_M_VERSION_Utils, 624, valid, 623, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 625, valid, 623, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_626_Utils, 626);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_M_VERSION_Utils, 627, valid, 626, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 628, valid, 626, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_629_Utils, 629);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_M_VERSION_Utils, 630, valid, 629, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 631, valid, 629, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_632_Utils, 632);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_M_VERSION_Utils, 633, valid, 632, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 634, valid, 632, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_635_Utils, 635);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_M_VERSION_Utils, 636, valid, 635, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 637, valid, 635, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "m_version_in", &_SCSIM_kcg_int_Utils, 638, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 639, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 640, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 641, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "m_version", &_SCSIM_M_VERSION_Utils, 642, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_M_VERSION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_M_VERSION_TM_conversions* pContext = (outC_CAST_Int_to_M_VERSION_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 620:
			return &((*pContext).IfBlock1_clock);
		case 621:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 622:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 623:
			return &((*pContext).else_clock_IfBlock1);
		case 624:
			return &((*pContext)._L27_IfBlock1);
		case 625:
			return &((*pContext)._L1_IfBlock1);
		case 626:
			return &((*pContext).else_clock_IfBlock1);
		case 627:
			return &((*pContext)._L26_IfBlock1);
		case 628:
			return &((*pContext)._L45_IfBlock1);
		case 629:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 630:
			return &((*pContext)._L2_IfBlock1);
		case 631:
			return &((*pContext)._L44_IfBlock1);
		case 632:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 633:
			return &((*pContext)._L3_IfBlock1);
		case 634:
			return &((*pContext)._L53_IfBlock1);
		case 635:
			return &((*pContext).IfBlock1_clock);
		case 636:
			return &((*pContext)._L4_IfBlock1);
		case 637:
			return &((*pContext)._L5_IfBlock1);
		case 638:
			return &((*pContext).m_version_in);
		case 639:
			return &((*pContext).error);
		case 640:
			return &((*pContext)._L4);
		case 641:
			return &((*pContext)._L5);
		case 642:
			return &((*pContext).m_version);
		default:
			break;
	}
	return 0;
}

static int Is623Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_623_Utils = {Is623Active};

static int Is626Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_626_Utils = {Is626Active};

static int Is622Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_622_Utils = {Is622Active};

static int Is629Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_629_Utils = {Is629Active};

static int Is621Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_621_Utils = {Is621Active};

static int Is632Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_632_Utils = {Is632Active};

static int Is620Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_620_Utils = {Is620Active};

static int Is635Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_635_Utils = {Is635Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_MEDIA/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_MEDIA_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_MEDIA_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_643_Utils, 643);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_644_Utils, 644);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 645, valid, 644, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_MEDIA_Utils, 646, valid, 644, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_647_Utils, 647);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_MEDIA_Utils, 648, valid, 647, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 649, valid, 647, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_650_Utils, 650);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_MEDIA_Utils, 651, valid, 650, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 652, valid, 650, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 653, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_media_in", &_SCSIM_kcg_int_Utils, 654, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 655, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 656, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_media", &_SCSIM_Q_MEDIA_Utils, 657, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_MEDIA_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_MEDIA_TM_conversions* pContext = (outC_CAST_Int_to_Q_MEDIA_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 643:
			return &((*pContext).IfBlock1_clock);
		case 644:
			return &((*pContext).else_clock_IfBlock1);
		case 645:
			return &((*pContext)._L2_IfBlock1);
		case 646:
			return &((*pContext)._L1_IfBlock1);
		case 647:
			return &((*pContext).else_clock_IfBlock1);
		case 648:
			return &((*pContext)._L3_IfBlock1);
		case 649:
			return &((*pContext)._L51_IfBlock1);
		case 650:
			return &((*pContext).IfBlock1_clock);
		case 651:
			return &((*pContext)._L4_IfBlock1);
		case 652:
			return &((*pContext)._L5_IfBlock1);
		case 653:
			return &((*pContext).error);
		case 654:
			return &((*pContext).q_media_in);
		case 655:
			return &((*pContext)._L13);
		case 656:
			return &((*pContext)._L12);
		case 657:
			return &((*pContext).q_media);
		default:
			break;
	}
	return 0;
}

static int Is644Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_644_Utils = {Is644Active};

static int Is647Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_647_Utils = {Is647Active};

static int Is643Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_643_Utils = {Is643Active};

static int Is650Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_650_Utils = {Is650Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_N_PIG/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_N_PIG_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_N_PIG_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_658_Utils, 658);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_659_Utils, 659);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_660_Utils, 660);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_661_Utils, 661);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_662_Utils, 662);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_663_Utils, 663);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_664_Utils, 664);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_665_Utils, 665);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_N_PIG_Utils, 666, valid, 665, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 667, valid, 665, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_668_Utils, 668);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 669, valid, 668, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 670, valid, 668, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_671_Utils, 671);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 672, valid, 671, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 673, valid, 671, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_674_Utils, 674);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_N_PIG_Utils, 675, valid, 674, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 676, valid, 674, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_677_Utils, 677);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 678, valid, 677, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 679, valid, 677, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_680_Utils, 680);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 681, valid, 680, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 682, valid, 680, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_683_Utils, 683);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 684, valid, 683, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 685, valid, 683, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_686_Utils, 686);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 687, valid, 686, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 688, valid, 686, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_689_Utils, 689);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_N_PIG_Utils, 690, valid, 689, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 691, valid, 689, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "n_pig_in", &_SCSIM_kcg_int_Utils, 692, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 693, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 694, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 695, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "n_pig", &_SCSIM_N_PIG_Utils, 696, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_N_PIG_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_N_PIG_TM_conversions* pContext = (outC_CAST_Int_to_N_PIG_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 658:
			return &((*pContext).IfBlock1_clock);
		case 659:
			return &((*pContext)._6_else_clock_IfBlock1);
		case 660:
			return &((*pContext)._5_else_clock_IfBlock1);
		case 661:
			return &((*pContext)._4_else_clock_IfBlock1);
		case 662:
			return &((*pContext)._3_else_clock_IfBlock1);
		case 663:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 664:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 665:
			return &((*pContext).else_clock_IfBlock1);
		case 666:
			return &((*pContext)._L220_IfBlock1);
		case 667:
			return &((*pContext)._L319_IfBlock1);
		case 668:
			return &((*pContext).else_clock_IfBlock1);
		case 669:
			return &((*pContext)._L118_IfBlock1);
		case 670:
			return &((*pContext)._L417_IfBlock1);
		case 671:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 672:
			return &((*pContext)._L116_IfBlock1);
		case 673:
			return &((*pContext)._L315_IfBlock1);
		case 674:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 675:
			return &((*pContext)._L214_IfBlock1);
		case 676:
			return &((*pContext)._L413_IfBlock1);
		case 677:
			return &((*pContext)._3_else_clock_IfBlock1);
		case 678:
			return &((*pContext)._L112_IfBlock1);
		case 679:
			return &((*pContext)._L311_IfBlock1);
		case 680:
			return &((*pContext)._4_else_clock_IfBlock1);
		case 681:
			return &((*pContext)._L110_IfBlock1);
		case 682:
			return &((*pContext)._L39_IfBlock1);
		case 683:
			return &((*pContext)._5_else_clock_IfBlock1);
		case 684:
			return &((*pContext)._L18_IfBlock1);
		case 685:
			return &((*pContext)._L4_IfBlock1);
		case 686:
			return &((*pContext)._6_else_clock_IfBlock1);
		case 687:
			return &((*pContext)._L1_IfBlock1);
		case 688:
			return &((*pContext)._L37_IfBlock1);
		case 689:
			return &((*pContext).IfBlock1_clock);
		case 690:
			return &((*pContext)._L2_IfBlock1);
		case 691:
			return &((*pContext)._L3_IfBlock1);
		case 692:
			return &((*pContext).n_pig_in);
		case 693:
			return &((*pContext).error);
		case 694:
			return &((*pContext)._L2);
		case 695:
			return &((*pContext)._L4);
		case 696:
			return &((*pContext).n_pig);
		default:
			break;
	}
	return 0;
}

static int Is665Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_665_Utils = {Is665Active};

static int Is668Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_668_Utils = {Is668Active};

static int Is664Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_664_Utils = {Is664Active};

static int Is671Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_671_Utils = {Is671Active};

static int Is663Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_663_Utils = {Is663Active};

static int Is674Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_674_Utils = {Is674Active};

static int Is662Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_662_Utils = {Is662Active};

static int Is677Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_677_Utils = {Is677Active};

static int Is661Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_661_Utils = {Is661Active};

static int Is680Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_680_Utils = {Is680Active};

static int Is660Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_660_Utils = {Is660Active};

static int Is683Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_683_Utils = {Is683Active};

static int Is659Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_659_Utils = {Is659Active};

static int Is686Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_686_Utils = {Is686Active};

static int Is658Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_658_Utils = {Is658Active};

static int Is689Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_689_Utils = {Is689Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_N_TOTAL/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_N_TOTAL_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_N_TOTAL_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_697_Utils, 697);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_698_Utils, 698);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_699_Utils, 699);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_700_Utils, 700);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_701_Utils, 701);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_702_Utils, 702);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_703_Utils, 703);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_704_Utils, 704);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_TOTAL_Utils, 705, valid, 704, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 706, valid, 704, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_707_Utils, 707);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_TOTAL_Utils, 708, valid, 707, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 709, valid, 707, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_710_Utils, 710);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_TOTAL_Utils, 711, valid, 710, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 712, valid, 710, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_713_Utils, 713);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_N_TOTAL_Utils, 714, valid, 713, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 715, valid, 713, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_716_Utils, 716);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_TOTAL_Utils, 717, valid, 716, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 718, valid, 716, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_719_Utils, 719);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_TOTAL_Utils, 720, valid, 719, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 721, valid, 719, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_722_Utils, 722);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_TOTAL_Utils, 723, valid, 722, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 724, valid, 722, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_725_Utils, 725);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_TOTAL_Utils, 726, valid, 725, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 727, valid, 725, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_728_Utils, 728);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_N_TOTAL_Utils, 729, valid, 728, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 730, valid, 728, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "n_total_in", &_SCSIM_kcg_int_Utils, 731, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 732, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 733, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 734, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "n_pig", &_SCSIM_N_TOTAL_Utils, 735, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_N_TOTAL_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_N_TOTAL_TM_conversions* pContext = (outC_CAST_Int_to_N_TOTAL_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 697:
			return &((*pContext).IfBlock1_clock);
		case 698:
			return &((*pContext)._6_else_clock_IfBlock1);
		case 699:
			return &((*pContext)._5_else_clock_IfBlock1);
		case 700:
			return &((*pContext)._4_else_clock_IfBlock1);
		case 701:
			return &((*pContext)._3_else_clock_IfBlock1);
		case 702:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 703:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 704:
			return &((*pContext).else_clock_IfBlock1);
		case 705:
			return &((*pContext)._L119_IfBlock1);
		case 706:
			return &((*pContext)._L4_IfBlock1);
		case 707:
			return &((*pContext).else_clock_IfBlock1);
		case 708:
			return &((*pContext)._L118_IfBlock1);
		case 709:
			return &((*pContext)._L317_IfBlock1);
		case 710:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 711:
			return &((*pContext)._L116_IfBlock1);
		case 712:
			return &((*pContext)._L315_IfBlock1);
		case 713:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 714:
			return &((*pContext)._L214_IfBlock1);
		case 715:
			return &((*pContext)._L5_IfBlock1);
		case 716:
			return &((*pContext)._3_else_clock_IfBlock1);
		case 717:
			return &((*pContext)._L113_IfBlock1);
		case 718:
			return &((*pContext)._L312_IfBlock1);
		case 719:
			return &((*pContext)._4_else_clock_IfBlock1);
		case 720:
			return &((*pContext)._L111_IfBlock1);
		case 721:
			return &((*pContext)._L310_IfBlock1);
		case 722:
			return &((*pContext)._5_else_clock_IfBlock1);
		case 723:
			return &((*pContext)._L19_IfBlock1);
		case 724:
			return &((*pContext)._L38_IfBlock1);
		case 725:
			return &((*pContext)._6_else_clock_IfBlock1);
		case 726:
			return &((*pContext)._L1_IfBlock1);
		case 727:
			return &((*pContext)._L37_IfBlock1);
		case 728:
			return &((*pContext).IfBlock1_clock);
		case 729:
			return &((*pContext)._L2_IfBlock1);
		case 730:
			return &((*pContext)._L3_IfBlock1);
		case 731:
			return &((*pContext).n_total_in);
		case 732:
			return &((*pContext).error);
		case 733:
			return &((*pContext)._L3);
		case 734:
			return &((*pContext)._L4);
		case 735:
			return &((*pContext).n_pig);
		default:
			break;
	}
	return 0;
}

static int Is704Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_704_Utils = {Is704Active};

static int Is707Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_707_Utils = {Is707Active};

static int Is703Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_703_Utils = {Is703Active};

static int Is710Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_710_Utils = {Is710Active};

static int Is702Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_702_Utils = {Is702Active};

static int Is713Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_713_Utils = {Is713Active};

static int Is701Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_701_Utils = {Is701Active};

static int Is716Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_716_Utils = {Is716Active};

static int Is700Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_700_Utils = {Is700Active};

static int Is719Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_719_Utils = {Is719Active};

static int Is699Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_699_Utils = {Is699Active};

static int Is722Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_722_Utils = {Is722Active};

static int Is698Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_698_Utils = {Is698Active};

static int Is725Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_725_Utils = {Is725Active};

static int Is697Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_697_Utils = {Is697Active};

static int Is728Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_728_Utils = {Is728Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_M_DUP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_M_DUP_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_M_DUP_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_736_Utils, 736);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_737_Utils, 737);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_738_Utils, 738);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 739, valid, 738, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_M_DUP_Utils, 740, valid, 738, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_741_Utils, 741);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_M_DUP_Utils, 742, valid, 741, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 743, valid, 741, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_744_Utils, 744);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_M_DUP_Utils, 745, valid, 744, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 746, valid, 744, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_747_Utils, 747);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_M_DUP_Utils, 748, valid, 747, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 749, valid, 747, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "m_dup_in", &_SCSIM_kcg_int_Utils, 750, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 751, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 752, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 753, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "m_dup", &_SCSIM_M_DUP_Utils, 754, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_M_DUP_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_M_DUP_TM_conversions* pContext = (outC_CAST_Int_to_M_DUP_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 736:
			return &((*pContext).IfBlock1_clock);
		case 737:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 738:
			return &((*pContext).else_clock_IfBlock1);
		case 739:
			return &((*pContext)._L2_IfBlock1);
		case 740:
			return &((*pContext)._L3_IfBlock1);
		case 741:
			return &((*pContext).else_clock_IfBlock1);
		case 742:
			return &((*pContext)._L4_IfBlock1);
		case 743:
			return &((*pContext)._L53_IfBlock1);
		case 744:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 745:
			return &((*pContext)._L5_IfBlock1);
		case 746:
			return &((*pContext)._L62_IfBlock1);
		case 747:
			return &((*pContext).IfBlock1_clock);
		case 748:
			return &((*pContext)._L6_IfBlock1);
		case 749:
			return &((*pContext)._L7_IfBlock1);
		case 750:
			return &((*pContext).m_dup_in);
		case 751:
			return &((*pContext).error);
		case 752:
			return &((*pContext)._L2);
		case 753:
			return &((*pContext)._L3);
		case 754:
			return &((*pContext).m_dup);
		default:
			break;
	}
	return 0;
}

static int Is738Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_738_Utils = {Is738Active};

static int Is741Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_741_Utils = {Is741Active};

static int Is737Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_737_Utils = {Is737Active};

static int Is744Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_744_Utils = {Is744Active};

static int Is736Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_736_Utils = {Is736Active};

static int Is747Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_747_Utils = {Is747Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_LINK/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_LINK_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_LINK_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_755_Utils, 755);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_756_Utils, 756);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 757, valid, 756, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINK_Utils, 758, valid, 756, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_759_Utils, 759);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_LINK_Utils, 760, valid, 759, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 761, valid, 759, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_762_Utils, 762);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_LINK_Utils, 763, valid, 762, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 764, valid, 762, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 765, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_link_in", &_SCSIM_kcg_int_Utils, 766, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 767, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 768, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_link", &_SCSIM_Q_LINK_Utils, 769, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_LINK_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_LINK_TM_conversions* pContext = (outC_CAST_Int_to_Q_LINK_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 755:
			return &((*pContext).IfBlock1_clock);
		case 756:
			return &((*pContext).else_clock_IfBlock1);
		case 757:
			return &((*pContext)._L2_IfBlock1);
		case 758:
			return &((*pContext)._L1_IfBlock1);
		case 759:
			return &((*pContext).else_clock_IfBlock1);
		case 760:
			return &((*pContext)._L3_IfBlock1);
		case 761:
			return &((*pContext)._L51_IfBlock1);
		case 762:
			return &((*pContext).IfBlock1_clock);
		case 763:
			return &((*pContext)._L4_IfBlock1);
		case 764:
			return &((*pContext)._L5_IfBlock1);
		case 765:
			return &((*pContext).error);
		case 766:
			return &((*pContext).q_link_in);
		case 767:
			return &((*pContext)._L13);
		case 768:
			return &((*pContext)._L12);
		case 769:
			return &((*pContext).q_link);
		default:
			break;
	}
	return 0;
}

static int Is756Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_756_Utils = {Is756Active};

static int Is759Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_759_Utils = {Is759Active};

static int Is755Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_755_Utils = {Is755Active};

static int Is762Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_762_Utils = {Is762Active};

/****************************************************************
 ** TM_lib_internal::RECV_ReadPackets/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_ReadPackets_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_RECV_ReadPackets_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_RECV_LookupPacket_TM_lib_internal("TM_lib_internal::RECV_LookupPacket", "1", 770, 0, 0);
	_SCSIM_Mapping_RECV_ReadPacketKernel_TM_lib_internal("TM_lib_internal::RECV_ReadPacketKernel", "1", 771, 772, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 773, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 774, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 775, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_array_int_500_Utils, 776, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 777, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_kcg_int_Utils, 778, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 779, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 780, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 781, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 772, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Data", &_SCSIM_array_int_500_Utils, 782, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Metadata", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 783, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ReadPackets_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ReadPackets_TM_lib_internal* pContext = (outC_RECV_ReadPackets_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 770:
			return &((*pContext).Context_1);
		case 771:
			return &((*pContext)._1_Context_1);
		case 773:
			return &((*pContext)._L3);
		case 774:
			return &((*pContext)._L2);
		case 775:
			return &((*pContext)._L1);
		case 776:
			return &((*pContext)._L4);
		case 777:
			return &((*pContext)._L44);
		case 778:
			return &((*pContext)._L45);
		case 779:
			return &((*pContext)._L46);
		case 780:
			return &((*pContext)._L48);
		case 781:
			return &((*pContext)._L47);
		case 772:
			return &((*pContext).tmp);
		case 782:
			return &((*pContext).Data);
		case 783:
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
	pSimulator->m_pfnAddOutput(pSimulator, "q_scale", &_SCSIM_Q_SCALE_Utils, 784, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "q_scale_int", &_SCSIM_kcg_int_Utils, 785, valid, 0, 0);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_786_Utils, 786);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_787_Utils, 787);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_788_Utils, 788);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 789, valid, 788, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_SCALE_Utils, 790, valid, 788, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_791_Utils, 791);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_SCALE_Utils, 792, valid, 791, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 793, valid, 791, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_794_Utils, 794);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_SCALE_Utils, 795, valid, 794, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 796, valid, 794, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_797_Utils, 797);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_SCALE_Utils, 798, valid, 797, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 799, valid, 797, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "q_scale_in", &_SCSIM_kcg_int_Utils, 800, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 801, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 802, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 803, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_C_P005_unflatten_sections_TM_lib_internal("TM_lib_internal::C_P005_unflatten_sections", "1", 804, 0, 0);
	/*<< Inlined TM_conversions::CAST_Int_to_N_ITER*/
	pSimulator->m_pfnPushInstance(pSimulator, "TM_conversions::CAST_Int_to_N_ITER", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "n_iter", &_SCSIM_N_ITER_Utils, 805, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "n_iter_int", &_SCSIM_kcg_int_Utils, 806, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 807, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 808, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 809, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 810, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 811, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined TM_conversions::CAST_Int_to_L_PACKET*/
	pSimulator->m_pfnPushInstance(pSimulator, "TM_conversions::CAST_Int_to_L_PACKET", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "l_packet", &_SCSIM_L_PACKET_Utils, 812, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "l_packet_int", &_SCSIM_kcg_int_Utils, 813, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 814, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 815, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 816, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 817, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 818, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined TM_conversions::CAST_Int_to_Q_DIR*/
	pSimulator->m_pfnPushInstance(pSimulator, "TM_conversions::CAST_Int_to_Q_DIR", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_dir", &_SCSIM_Q_DIR_Utils, 819, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "q_dir_int", &_SCSIM_kcg_int_Utils, 820, valid, 0, 0);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_821_Utils, 821);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_822_Utils, 822);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_823_Utils, 823);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 824, valid, 823, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 825, valid, 823, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_826_Utils, 826);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 827, valid, 826, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 828, valid, 826, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_829_Utils, 829);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_DIR_Utils, 830, valid, 829, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 831, valid, 829, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_832_Utils, 832);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_DIR_Utils, 833, valid, 832, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 834, valid, 832, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 835, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_dir_in", &_SCSIM_kcg_int_Utils, 836, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 837, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 838, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined TM_conversions::CAST_Int_to_NID_PACKET*/
	pSimulator->m_pfnPushInstance(pSimulator, "TM_conversions::CAST_Int_to_NID_PACKET", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_packet", &_SCSIM_NID_PACKET_Utils, 839, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "nid_packet_int", &_SCSIM_kcg_int_Utils, 840, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 841, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 842, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 843, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 844, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 845, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 846, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 847, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 848, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_array_int_224_Utils, 849, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_NID_PACKET_Utils, 850, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_Q_DIR_Utils, 851, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_P005_OBU_T_TM_Utils, 852, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 853, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_L_PACKET_Utils, 854, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_N_ITER_Utils, 855, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_int_3_Utils, 856, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_P005_OBU_sectionlist_enum_T_TM_Utils, 857, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_SCALE_Utils, 858, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array_int_1_Utils, 859, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_array_int_1_Utils, 860, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 861, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 862, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 863, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 864, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_bool_Utils, 865, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "P005_onboard", &_SCSIM_P005_OBU_T_TM_Utils, 866, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_compr_onboard_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_compr_onboard_TM_conversions* pContext = (outC_C_P005_compr_onboard_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 784:
			return &((*pContext).q_scale_1);
		case 785:
			return &((*pContext).q_scale_int_1);
		case 786:
			return &((*pContext).IfBlock1_clock_1);
		case 787:
			return &((*pContext)._3_else_clock_1_IfBlock1);
		case 788:
			return &((*pContext).else_clock_1_IfBlock1);
		case 789:
			return &((*pContext)._L2_1_IfBlock1);
		case 790:
			return &((*pContext)._L1_11_IfBlock1);
		case 791:
			return &((*pContext).else_clock_1_IfBlock1);
		case 792:
			return &((*pContext)._L1_12_IfBlock1);
		case 793:
			return &((*pContext)._L4_1_IfBlock1);
		case 794:
			return &((*pContext)._3_else_clock_1_IfBlock1);
		case 795:
			return &((*pContext)._L1_1_IfBlock1);
		case 796:
			return &((*pContext)._L3_1_IfBlock1);
		case 797:
			return &((*pContext).IfBlock1_clock_1);
		case 798:
			return &((*pContext)._L2_14_IfBlock1);
		case 799:
			return &((*pContext)._L3_15_IfBlock1);
		case 800:
			return &((*pContext).q_scale_in_1);
		case 801:
			return &((*pContext).error_1);
		case 802:
			return &((*pContext)._L2_1);
		case 803:
			return &((*pContext)._L4_1);
		case 804:
			return &((*pContext).Context_1);
		case 805:
			return &((*pContext).n_iter_1);
		case 806:
			return &((*pContext).n_iter_int_1);
		case 807:
			return &((*pContext)._L1_1);
		case 808:
			return &((*pContext)._L12_1);
		case 809:
			return &((*pContext)._L11_1);
		case 810:
			return &((*pContext)._L10_1);
		case 811:
			return &((*pContext)._L9_1);
		case 812:
			return &((*pContext).l_packet_1);
		case 813:
			return &((*pContext).l_packet_int_1);
		case 814:
			return &((*pContext)._L1_18);
		case 815:
			return &((*pContext)._L9_17);
		case 816:
			return &((*pContext)._L8_1);
		case 817:
			return &((*pContext)._6__L12_1);
		case 818:
			return &((*pContext)._L13_1);
		case 819:
			return &((*pContext).q_dir_1);
		case 820:
			return &((*pContext).q_dir_int_1);
		case 821:
			return &((*pContext)._12_IfBlock1_clock_1);
		case 822:
			return &((*pContext)._19_else_clock_1_IfBlock1);
		case 823:
			return &((*pContext)._14_else_clock_1_IfBlock1);
		case 824:
			return &((*pContext)._L2_115_IfBlock1);
		case 825:
			return &((*pContext)._L1_116_IfBlock1);
		case 826:
			return &((*pContext)._14_else_clock_1_IfBlock1);
		case 827:
			return &((*pContext)._L2_117_IfBlock1);
		case 828:
			return &((*pContext)._L4_118_IfBlock1);
		case 829:
			return &((*pContext)._19_else_clock_1_IfBlock1);
		case 830:
			return &((*pContext)._L3_113_IfBlock1);
		case 831:
			return &((*pContext)._L5_1_IfBlock1);
		case 832:
			return &((*pContext)._12_IfBlock1_clock_1);
		case 833:
			return &((*pContext)._L4_120_IfBlock1);
		case 834:
			return &((*pContext)._L5_121_IfBlock1);
		case 835:
			return &((*pContext)._11_error_1);
		case 836:
			return &((*pContext).q_dir_in_1);
		case 837:
			return &((*pContext)._10__L13_1);
		case 838:
			return &((*pContext)._9__L12_1);
		case 839:
			return &((*pContext).nid_packet_1);
		case 840:
			return &((*pContext).nid_packet_int_1);
		case 841:
			return &((*pContext)._L1_124);
		case 842:
			return &((*pContext)._L5_1);
		case 843:
			return &((*pContext)._L4_123);
		case 844:
			return &((*pContext)._L3_1);
		case 845:
			return &((*pContext)._L2_122);
		case 846:
			return &((*pContext)._L14);
		case 847:
			return &((*pContext)._L15);
		case 848:
			return &((*pContext)._L16);
		case 849:
			return &((*pContext)._L13);
		case 850:
			return &((*pContext)._L12);
		case 851:
			return &((*pContext)._L11);
		case 852:
			return &((*pContext)._L10);
		case 853:
			return &((*pContext)._L9);
		case 854:
			return &((*pContext)._L8);
		case 855:
			return &((*pContext)._L7);
		case 856:
			return &((*pContext)._L6);
		case 857:
			return &((*pContext)._L5);
		case 858:
			return &((*pContext)._L4);
		case 859:
			return &((*pContext)._L2);
		case 860:
			return &((*pContext)._L1);
		case 861:
			return &((*pContext)._L17);
		case 862:
			return &((*pContext)._L18);
		case 863:
			return &((*pContext)._L20);
		case 864:
			return &((*pContext)._L21);
		case 865:
			return &((*pContext)._L22);
		case 866:
			return &((*pContext).P005_onboard);
		default:
			break;
	}
	return 0;
}

static int Is788Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_788_Utils = {Is788Active};

static int Is791Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_791_Utils = {Is791Active};

static int Is787Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_787_Utils = {Is787Active};

static int Is794Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_794_Utils = {Is794Active};

static int Is786Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_786_Utils = {Is786Active};

static int Is797Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_797_Utils = {Is797Active};

static int Is823Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_823_Utils = {Is823Active};

static int Is826Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_826_Utils = {Is826Active};

static int Is822Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_822_Utils = {Is822Active};

static int Is829Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_829_Utils = {Is829Active};

static int Is821Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_821_Utils = {Is821Active};

static int Is832Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_832_Utils = {Is832Active};

/****************************************************************
 ** TM_conversions::C_P005_LinkedBGs/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_LinkedBGs_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P005_LinkedBGs_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_LinkedBG_T_BG_Types_Pkg_Utils, 867, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_NID_LRBG_Utils, 868, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_DIR_Utils, 869, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_Q_SCALE_Utils, 870, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_P005_section_enum_T_TM_Utils, 871, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_Q_LOCACC_Utils, 872, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_Q_LINKREACTION_Utils, 873, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_Q_LINKORIENTATION_Utils, 874, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_NID_BG_Utils, 875, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_NID_C_Utils, 876, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_Q_NEWCOUNTRY_Utils, 877, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_D_LINK_Utils, 878, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 879, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LinkedBGsOUT", &_SCSIM_LinkedBG_T_BG_Types_Pkg_Utils, 880, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_LinkedBGs_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_LinkedBGs_TM_conversions* pContext = (outC_C_P005_LinkedBGs_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 867:
			return &((*pContext)._L2);
		case 868:
			return &((*pContext)._L3);
		case 869:
			return &((*pContext)._L4);
		case 870:
			return &((*pContext)._L5);
		case 871:
			return &((*pContext)._L6);
		case 872:
			return &((*pContext)._L14);
		case 873:
			return &((*pContext)._L13);
		case 874:
			return &((*pContext)._L12);
		case 875:
			return &((*pContext)._L11);
		case 876:
			return &((*pContext)._L10);
		case 877:
			return &((*pContext)._L9);
		case 878:
			return &((*pContext)._L8);
		case 879:
			return &((*pContext)._L7);
		case 880:
			return &((*pContext).LinkedBGsOUT);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_364_1/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_364_1_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_364_1_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Packets_364_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Packets_364", "1", 881, 882, &_SCSIM_ClockActive_kcg_true);
	_SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Localisation", "1", 883, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 884, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 885, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 886, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 887, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 888, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 889, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 890, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 891, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 892, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 882, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 893, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_364_1_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_364_1_FirstTest_InfraLibInt* pContext = (outC_Balise_364_1_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 881:
			return &((*pContext)._1_Context_1);
		case 883:
			return &((*pContext).Context_1);
		case 884:
			return &((*pContext)._L4);
		case 885:
			return &((*pContext)._L5);
		case 886:
			return &((*pContext)._L15);
		case 887:
			return &((*pContext)._L17);
		case 888:
			return &((*pContext)._L19);
		case 889:
			return &((*pContext)._L20);
		case 890:
			return &((*pContext)._L23);
		case 891:
			return &((*pContext)._L2);
		case 892:
			return &((*pContext)._L21);
		case 882:
			return &((*pContext).tmp);
		case 893:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_Group_Init/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_Init_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_Init_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_BaliseGroupData_TM_Utils, 894, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 895, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 896, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 897, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 898, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_int_Utils, 899, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_real_Utils, 900, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_bool_Utils, 901, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_internal_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 902, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_Init_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_Init_FirstTest_InfraLibInt* pContext = (outC_Balise_Group_Init_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 894:
			return &((*pContext)._L2);
		case 895:
			return &((*pContext)._L14);
		case 896:
			return &((*pContext)._L26);
		case 897:
			return &((*pContext)._L27);
		case 898:
			return &((*pContext)._L28);
		case 899:
			return &((*pContext)._L29);
		case 900:
			return &((*pContext)._L30);
		case 901:
			return &((*pContext)._L31);
		case 902:
			return &((*pContext).BG_internal_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_Group_Close/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_Close_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_Close_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_CompressedBaliseMessage_TM_Utils, 903, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_CompressedBaliseMessage_TM_Utils, 904, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 905, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 906, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 907, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_CompressedBaliseMessage_TM_Utils, 908, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 909, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_bool_Utils, 910, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Error_out", &_SCSIM_kcg_bool_Utils, 911, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_CompressedBaliseMessage_TM_Utils, 912, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_Close_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_Close_FirstTest_InfraLibInt* pContext = (outC_Balise_Group_Close_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 903:
			return &((*pContext)._L2);
		case 904:
			return &((*pContext)._L20);
		case 905:
			return &((*pContext)._L21);
		case 906:
			return &((*pContext)._L22);
		case 907:
			return &((*pContext)._L23);
		case 908:
			return &((*pContext)._L24);
		case 909:
			return &((*pContext)._L25);
		case 910:
			return &((*pContext)._L26);
		case 911:
			return &((*pContext).Error_out);
		case 912:
			return &((*pContext).BG_message_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_364_0/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_364_0_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_364_0_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Packets_364_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Packets_364", "1", 913, 914, &_SCSIM_ClockActive_kcg_true);
	_SCSIM_Mapping_Balise_Localisation_InfraLib("InfraLib::Balise_Localisation", "1", 915, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 916, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 917, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 918, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 919, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 920, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 921, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 922, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 923, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 924, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 914, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 925, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_364_0_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_364_0_FirstTest_InfraLibInt* pContext = (outC_Balise_364_0_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 913:
			return &((*pContext)._1_Context_1);
		case 915:
			return &((*pContext).Context_1);
		case 916:
			return &((*pContext)._L4);
		case 917:
			return &((*pContext)._L5);
		case 918:
			return &((*pContext)._L15);
		case 919:
			return &((*pContext)._L17);
		case 920:
			return &((*pContext)._L19);
		case 921:
			return &((*pContext)._L20);
		case 922:
			return &((*pContext)._L23);
		case 923:
			return &((*pContext)._L2);
		case 924:
			return &((*pContext)._L21);
		case 914:
			return &((*pContext).tmp);
		case 925:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_367_0/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_367_0_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_367_0_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt("FirstTest::InfraLibInt::TEMPLATE_Balise_Packets", "1", 926, 927, &_SCSIM_ClockActive_kcg_true);
	_SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Localisation", "1", 928, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 929, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 930, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 931, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 932, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 933, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 934, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 935, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 936, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 937, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 927, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 938, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_367_0_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_367_0_FirstTest_InfraLibInt* pContext = (outC_Balise_367_0_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 926:
			return &((*pContext)._1_Context_1);
		case 928:
			return &((*pContext).Context_1);
		case 929:
			return &((*pContext)._L4);
		case 930:
			return &((*pContext)._L5);
		case 931:
			return &((*pContext)._L15);
		case 932:
			return &((*pContext)._L17);
		case 933:
			return &((*pContext)._L19);
		case 934:
			return &((*pContext)._L20);
		case 935:
			return &((*pContext)._L23);
		case 936:
			return &((*pContext)._L2);
		case 937:
			return &((*pContext)._L21);
		case 927:
			return &((*pContext).tmp);
		case 938:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_367_1/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_367_1_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_367_1_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt("FirstTest::InfraLibInt::TEMPLATE_Balise_Packets", "1", 939, 940, &_SCSIM_ClockActive_kcg_true);
	_SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Localisation", "1", 941, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 942, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 943, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 944, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 945, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 946, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 947, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 948, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 949, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 950, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 940, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 951, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_367_1_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_367_1_FirstTest_InfraLibInt* pContext = (outC_Balise_367_1_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 939:
			return &((*pContext)._1_Context_1);
		case 941:
			return &((*pContext).Context_1);
		case 942:
			return &((*pContext)._L4);
		case 943:
			return &((*pContext)._L5);
		case 944:
			return &((*pContext)._L15);
		case 945:
			return &((*pContext)._L17);
		case 946:
			return &((*pContext)._L19);
		case 947:
			return &((*pContext)._L20);
		case 948:
			return &((*pContext)._L23);
		case 949:
			return &((*pContext)._L2);
		case 950:
			return &((*pContext)._L21);
		case 940:
			return &((*pContext).tmp);
		case 951:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_368_1/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_368_1_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_368_1_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt("FirstTest::InfraLibInt::TEMPLATE_Balise_Packets", "1", 952, 953, &_SCSIM_ClockActive_kcg_true);
	_SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Localisation", "1", 954, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 955, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 956, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 957, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 958, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 959, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 960, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 961, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 962, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 963, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 953, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 964, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_368_1_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_368_1_FirstTest_InfraLibInt* pContext = (outC_Balise_368_1_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 952:
			return &((*pContext)._1_Context_1);
		case 954:
			return &((*pContext).Context_1);
		case 955:
			return &((*pContext)._L4);
		case 956:
			return &((*pContext)._L5);
		case 957:
			return &((*pContext)._L15);
		case 958:
			return &((*pContext)._L17);
		case 959:
			return &((*pContext)._L19);
		case 960:
			return &((*pContext)._L20);
		case 961:
			return &((*pContext)._L23);
		case 962:
			return &((*pContext)._L2);
		case 963:
			return &((*pContext)._L21);
		case 953:
			return &((*pContext).tmp);
		case 964:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_368_0/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_368_0_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_368_0_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt("FirstTest::InfraLibInt::TEMPLATE_Balise_Packets", "1", 965, 966, &_SCSIM_ClockActive_kcg_true);
	_SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Localisation", "1", 967, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 968, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 969, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 970, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 971, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 972, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 973, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 974, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 975, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 976, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 966, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 977, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_368_0_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_368_0_FirstTest_InfraLibInt* pContext = (outC_Balise_368_0_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 965:
			return &((*pContext)._1_Context_1);
		case 967:
			return &((*pContext).Context_1);
		case 968:
			return &((*pContext)._L4);
		case 969:
			return &((*pContext)._L5);
		case 970:
			return &((*pContext)._L15);
		case 971:
			return &((*pContext)._L17);
		case 972:
			return &((*pContext)._L19);
		case 973:
			return &((*pContext)._L20);
		case 974:
			return &((*pContext)._L23);
		case 975:
			return &((*pContext)._L2);
		case 976:
			return &((*pContext)._L21);
		case 966:
			return &((*pContext).tmp);
		case 977:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_366_0/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_366_0_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_366_0_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt("FirstTest::InfraLibInt::TEMPLATE_Balise_Packets", "1", 978, 979, &_SCSIM_ClockActive_kcg_true);
	_SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Localisation", "1", 980, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 981, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 982, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 983, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 984, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 985, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 986, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 987, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 988, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 989, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 979, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 990, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_366_0_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_366_0_FirstTest_InfraLibInt* pContext = (outC_Balise_366_0_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 978:
			return &((*pContext)._1_Context_1);
		case 980:
			return &((*pContext).Context_1);
		case 981:
			return &((*pContext)._L4);
		case 982:
			return &((*pContext)._L5);
		case 983:
			return &((*pContext)._L15);
		case 984:
			return &((*pContext)._L17);
		case 985:
			return &((*pContext)._L19);
		case 986:
			return &((*pContext)._L20);
		case 987:
			return &((*pContext)._L23);
		case 988:
			return &((*pContext)._L2);
		case 989:
			return &((*pContext)._L21);
		case 979:
			return &((*pContext).tmp);
		case 990:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_366_1/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_366_1_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_366_1_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt("FirstTest::InfraLibInt::TEMPLATE_Balise_Packets", "1", 991, 992, &_SCSIM_ClockActive_kcg_true);
	_SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Localisation", "1", 993, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 994, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 995, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 996, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 997, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 998, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 999, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1000, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1001, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1002, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 992, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1003, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_366_1_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_366_1_FirstTest_InfraLibInt* pContext = (outC_Balise_366_1_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 991:
			return &((*pContext)._1_Context_1);
		case 993:
			return &((*pContext).Context_1);
		case 994:
			return &((*pContext)._L4);
		case 995:
			return &((*pContext)._L5);
		case 996:
			return &((*pContext)._L15);
		case 997:
			return &((*pContext)._L17);
		case 998:
			return &((*pContext)._L19);
		case 999:
			return &((*pContext)._L20);
		case 1000:
			return &((*pContext)._L23);
		case 1001:
			return &((*pContext)._L2);
		case 1002:
			return &((*pContext)._L21);
		case 992:
			return &((*pContext).tmp);
		case 1003:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_369_1/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_369_1_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_369_1_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt("FirstTest::InfraLibInt::TEMPLATE_Balise_Packets", "1", 1004, 1005, &_SCSIM_ClockActive_kcg_true);
	_SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Localisation", "1", 1006, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1007, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1008, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1009, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1010, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1011, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1012, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1013, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1014, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1015, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 1005, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1016, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_369_1_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_369_1_FirstTest_InfraLibInt* pContext = (outC_Balise_369_1_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 1004:
			return &((*pContext)._1_Context_1);
		case 1006:
			return &((*pContext).Context_1);
		case 1007:
			return &((*pContext)._L4);
		case 1008:
			return &((*pContext)._L5);
		case 1009:
			return &((*pContext)._L15);
		case 1010:
			return &((*pContext)._L17);
		case 1011:
			return &((*pContext)._L19);
		case 1012:
			return &((*pContext)._L20);
		case 1013:
			return &((*pContext)._L23);
		case 1014:
			return &((*pContext)._L2);
		case 1015:
			return &((*pContext)._L21);
		case 1005:
			return &((*pContext).tmp);
		case 1016:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_369_0/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_369_0_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_369_0_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt("FirstTest::InfraLibInt::TEMPLATE_Balise_Packets", "1", 1017, 1018, &_SCSIM_ClockActive_kcg_true);
	_SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Localisation", "1", 1019, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1020, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1021, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1022, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1023, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1024, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1025, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1026, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1027, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1028, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 1018, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1029, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_369_0_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_369_0_FirstTest_InfraLibInt* pContext = (outC_Balise_369_0_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 1017:
			return &((*pContext)._1_Context_1);
		case 1019:
			return &((*pContext).Context_1);
		case 1020:
			return &((*pContext)._L4);
		case 1021:
			return &((*pContext)._L5);
		case 1022:
			return &((*pContext)._L15);
		case 1023:
			return &((*pContext)._L17);
		case 1024:
			return &((*pContext)._L19);
		case 1025:
			return &((*pContext)._L20);
		case 1026:
			return &((*pContext)._L23);
		case 1027:
			return &((*pContext)._L2);
		case 1028:
			return &((*pContext)._L21);
		case 1018:
			return &((*pContext).tmp);
		case 1029:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_365_0/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_365_0_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_365_0_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt("FirstTest::InfraLibInt::TEMPLATE_Balise_Packets", "1", 1030, 1031, &_SCSIM_ClockActive_kcg_true);
	_SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Localisation", "1", 1032, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1033, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1034, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1035, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1036, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1037, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1038, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1039, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1040, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1041, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 1031, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1042, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_365_0_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_365_0_FirstTest_InfraLibInt* pContext = (outC_Balise_365_0_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 1030:
			return &((*pContext)._1_Context_1);
		case 1032:
			return &((*pContext).Context_1);
		case 1033:
			return &((*pContext)._L4);
		case 1034:
			return &((*pContext)._L5);
		case 1035:
			return &((*pContext)._L15);
		case 1036:
			return &((*pContext)._L17);
		case 1037:
			return &((*pContext)._L19);
		case 1038:
			return &((*pContext)._L20);
		case 1039:
			return &((*pContext)._L23);
		case 1040:
			return &((*pContext)._L2);
		case 1041:
			return &((*pContext)._L21);
		case 1031:
			return &((*pContext).tmp);
		case 1042:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_365_1/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_365_1_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_365_1_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt("FirstTest::InfraLibInt::TEMPLATE_Balise_Packets", "1", 1043, 1044, &_SCSIM_ClockActive_kcg_true);
	_SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Localisation", "1", 1045, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1046, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1047, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1048, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1049, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1050, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1051, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1052, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1053, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1054, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 1044, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1055, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_365_1_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_365_1_FirstTest_InfraLibInt* pContext = (outC_Balise_365_1_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 1043:
			return &((*pContext)._1_Context_1);
		case 1045:
			return &((*pContext).Context_1);
		case 1046:
			return &((*pContext)._L4);
		case 1047:
			return &((*pContext)._L5);
		case 1048:
			return &((*pContext)._L15);
		case 1049:
			return &((*pContext)._L17);
		case 1050:
			return &((*pContext)._L19);
		case 1051:
			return &((*pContext)._L20);
		case 1052:
			return &((*pContext)._L23);
		case 1053:
			return &((*pContext)._L2);
		case 1054:
			return &((*pContext)._L21);
		case 1044:
			return &((*pContext).tmp);
		case 1055:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_341_0/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_341_0_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_341_0_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt("FirstTest::InfraLibInt::TEMPLATE_Balise_Packets", "1", 1056, 1057, &_SCSIM_ClockActive_kcg_true);
	_SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Localisation", "1", 1058, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1059, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1060, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1061, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1062, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1063, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1064, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1065, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1066, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1067, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 1057, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1068, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_341_0_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_341_0_FirstTest_InfraLibInt* pContext = (outC_Balise_341_0_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 1056:
			return &((*pContext)._1_Context_1);
		case 1058:
			return &((*pContext).Context_1);
		case 1059:
			return &((*pContext)._L4);
		case 1060:
			return &((*pContext)._L5);
		case 1061:
			return &((*pContext)._L15);
		case 1062:
			return &((*pContext)._L17);
		case 1063:
			return &((*pContext)._L19);
		case 1064:
			return &((*pContext)._L20);
		case 1065:
			return &((*pContext)._L23);
		case 1066:
			return &((*pContext)._L2);
		case 1067:
			return &((*pContext)._L21);
		case 1057:
			return &((*pContext).tmp);
		case 1068:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_341_1/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_341_1_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_341_1_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt("FirstTest::InfraLibInt::TEMPLATE_Balise_Packets", "1", 1069, 1070, &_SCSIM_ClockActive_kcg_true);
	_SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Localisation", "1", 1071, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1072, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1073, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1074, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1075, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1076, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1077, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1078, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1079, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1080, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 1070, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1081, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_341_1_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_341_1_FirstTest_InfraLibInt* pContext = (outC_Balise_341_1_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 1069:
			return &((*pContext)._1_Context_1);
		case 1071:
			return &((*pContext).Context_1);
		case 1072:
			return &((*pContext)._L4);
		case 1073:
			return &((*pContext)._L5);
		case 1074:
			return &((*pContext)._L15);
		case 1075:
			return &((*pContext)._L17);
		case 1076:
			return &((*pContext)._L19);
		case 1077:
			return &((*pContext)._L20);
		case 1078:
			return &((*pContext)._L23);
		case 1079:
			return &((*pContext)._L2);
		case 1080:
			return &((*pContext)._L21);
		case 1070:
			return &((*pContext).tmp);
		case 1081:
			return &((*pContext).B_data_out);
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
	_SCSIM_Mapping_RECV_LookupPacketLoop_TM_lib_internal("TM_lib_internal::RECV_LookupPacketLoop", "1", 1082, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 1083, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 1084, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_array_int_30_Utils, 1085, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 1086, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 1087, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1088, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_NID_PACKET_Utils, 1089, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 1090, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1091, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1092, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1093, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 1094, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_int_Utils, 1095, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Found", &_SCSIM_kcg_bool_Utils, 1096, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Index", &_SCSIM_kcg_int_Utils, 1097, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "HeaderFound", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1098, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_LookupPacket_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_LookupPacket_TM_lib_internal* pContext = (outC_RECV_LookupPacket_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1082:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 1083:
			return &((*pContext)._L1);
		case 1084:
			return &((*pContext)._L2);
		case 1085:
			return &((*pContext)._L3);
		case 1086:
			return &((*pContext)._L4);
		case 1087:
			return &((*pContext)._L5);
		case 1088:
			return &((*pContext)._L23);
		case 1089:
			return &((*pContext)._L24);
		case 1090:
			return &((*pContext)._L25);
		case 1091:
			return &((*pContext)._L26);
		case 1092:
			return &((*pContext)._L22);
		case 1093:
			return &((*pContext)._L27);
		case 1094:
			return &((*pContext)._L28);
		case 1095:
			return &((*pContext)._L29);
		case 1096:
			return &((*pContext).Found);
		case 1097:
			return &((*pContext).Index);
		case 1098:
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
	_SCSIM_Mapping_RECV_ReadPacketKernelLoop_TM_lib_internal("TM_lib_internal::RECV_ReadPacketKernelLoop", "1", 1099, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1100, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1101, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_int_500_Utils, 1102, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_array_int_500_Utils, 1103, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 1104, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_array_int_500_Utils, 1105, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_array_int_500_500_Utils, 1106, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 1107, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 1108, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 1109, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PacketOut", &_SCSIM_array_int_500_Utils, 1110, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ReadPacketKernel_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ReadPacketKernel_TM_lib_internal* pContext = (outC_RECV_ReadPacketKernel_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1099:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 1100:
			return &((*pContext)._L3);
		case 1101:
			return &((*pContext)._L4);
		case 1102:
			return &((*pContext)._L6);
		case 1103:
			return &((*pContext)._L7);
		case 1104:
			return &((*pContext)._L8);
		case 1105:
			return &((*pContext)._L10);
		case 1106:
			return &((*pContext)._L18);
		case 1107:
			return &((*pContext)._L22);
		case 1108:
			return &((*pContext)._L24);
		case 1109:
			return &((*pContext)._L23);
		case 1110:
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
	_SCSIM_Mapping_C_P005_us_array_TM_lib_internal("TM_lib_internal::C_P005_us_array", "1", 1111, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1112, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1113, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_int_33_Utils, 1114, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_int_224_33_Utils, 1115, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 1116, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_array__5592_Utils, 1117, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 1118, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "sections", &_SCSIM_P005_OBU_sectionlist_enum_T_TM_Utils, 1119, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_unflatten_sections_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_unflatten_sections_TM_lib_internal* pContext = (outC_C_P005_unflatten_sections_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1111:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 1112:
			return &((*pContext)._L1);
		case 1113:
			return &((*pContext)._L3);
		case 1114:
			return &((*pContext)._L5);
		case 1115:
			return &((*pContext)._L6);
		case 1116:
			return &((*pContext)._L7);
		case 1117:
			return &((*pContext)._L9);
		case 1118:
			return &((*pContext)._L11);
		case 1119:
			return &((*pContext).sections);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_Packets_364/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Packets_364_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Packets_364_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "21", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1120, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1121, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1122, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "22", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1123, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1124, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1125, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "23", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1126, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1127, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1128, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1129, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1130, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1131, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1132, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1133, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1134, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1135, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1136, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1137, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "7", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1138, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1139, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1140, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "8", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1141, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1142, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1143, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "9", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1144, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1145, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1146, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "11", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1147, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1148, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1149, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "12", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1150, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1151, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1152, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "13", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1153, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1154, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1155, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "14", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1156, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1157, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1158, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "15", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1159, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1160, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1161, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "16", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1162, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1163, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1164, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "17", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1165, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1166, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1167, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "18", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1168, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1169, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1170, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "19", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1171, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1172, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1173, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "20", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1174, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1175, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1176, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Send_BG364_P005_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Send_BG364_P005", "1", 1177, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1178, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1179, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "B_data_link", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1180, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1181, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1182, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1183, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1184, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1185, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1186, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1187, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1188, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1189, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1190, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1191, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1192, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1193, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1194, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1195, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1196, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1197, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1198, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1199, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1200, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1201, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1202, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1203, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1204, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1205, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1206, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1207, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1208, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 1209, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1210, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Balise_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1211, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Packets_364_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Packets_364_FirstTest_InfraLibInt* pContext = (outC_Balise_Packets_364_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 1120:
			return &((*pContext).B_data_out_21);
		case 1121:
			return &((*pContext).B_data_in_21);
		case 1122:
			return &((*pContext)._L1_21);
		case 1123:
			return &((*pContext).B_data_out_22);
		case 1124:
			return &((*pContext).B_data_in_22);
		case 1125:
			return &((*pContext)._L1_22);
		case 1126:
			return &((*pContext).B_data_out_23);
		case 1127:
			return &((*pContext).B_data_in_23);
		case 1128:
			return &((*pContext)._L1_23);
		case 1129:
			return &((*pContext).B_data_out_4);
		case 1130:
			return &((*pContext).B_data_in_4);
		case 1131:
			return &((*pContext)._L1_4);
		case 1132:
			return &((*pContext).B_data_out_5);
		case 1133:
			return &((*pContext).B_data_in_5);
		case 1134:
			return &((*pContext)._L1_5);
		case 1135:
			return &((*pContext).B_data_out_6);
		case 1136:
			return &((*pContext).B_data_in_6);
		case 1137:
			return &((*pContext)._L1_6);
		case 1138:
			return &((*pContext).B_data_out_7);
		case 1139:
			return &((*pContext).B_data_in_7);
		case 1140:
			return &((*pContext)._L1_7);
		case 1141:
			return &((*pContext).B_data_out_8);
		case 1142:
			return &((*pContext).B_data_in_8);
		case 1143:
			return &((*pContext)._L1_8);
		case 1144:
			return &((*pContext).B_data_out_9);
		case 1145:
			return &((*pContext).B_data_in_9);
		case 1146:
			return &((*pContext)._L1_9);
		case 1147:
			return &((*pContext).B_data_out_11);
		case 1148:
			return &((*pContext).B_data_in_11);
		case 1149:
			return &((*pContext)._L1_11);
		case 1150:
			return &((*pContext).B_data_out_12);
		case 1151:
			return &((*pContext).B_data_in_12);
		case 1152:
			return &((*pContext)._L1_12);
		case 1153:
			return &((*pContext).B_data_out_13);
		case 1154:
			return &((*pContext).B_data_in_13);
		case 1155:
			return &((*pContext)._L1_13);
		case 1156:
			return &((*pContext).B_data_out_14);
		case 1157:
			return &((*pContext).B_data_in_14);
		case 1158:
			return &((*pContext)._L1_14);
		case 1159:
			return &((*pContext).B_data_out_15);
		case 1160:
			return &((*pContext).B_data_in_15);
		case 1161:
			return &((*pContext)._L1_15);
		case 1162:
			return &((*pContext).B_data_out_16);
		case 1163:
			return &((*pContext).B_data_in_16);
		case 1164:
			return &((*pContext)._L1_16);
		case 1165:
			return &((*pContext).B_data_out_17);
		case 1166:
			return &((*pContext).B_data_in_17);
		case 1167:
			return &((*pContext)._L1_17);
		case 1168:
			return &((*pContext).B_data_out_18);
		case 1169:
			return &((*pContext).B_data_in_18);
		case 1170:
			return &((*pContext)._L1_18);
		case 1171:
			return &((*pContext).B_data_out_19);
		case 1172:
			return &((*pContext).B_data_in_19);
		case 1173:
			return &((*pContext)._L1_19);
		case 1174:
			return &((*pContext).B_data_out_20);
		case 1175:
			return &((*pContext).B_data_in_20);
		case 1176:
			return &((*pContext)._L1_20);
		case 1177:
			return &((*pContext).Context_1);
		case 1178:
			return &((*pContext).B_data_in);
		case 1179:
			return &((*pContext).B_data_out);
		case 1180:
			return &((*pContext).B_data_link);
		case 1181:
			return &((*pContext)._L2);
		case 1182:
			return &((*pContext)._L3);
		case 1183:
			return &((*pContext)._L4);
		case 1184:
			return &((*pContext)._L5);
		case 1185:
			return &((*pContext)._L6);
		case 1186:
			return &((*pContext)._L7);
		case 1187:
			return &((*pContext)._L8);
		case 1188:
			return &((*pContext)._L9);
		case 1189:
			return &((*pContext)._L10);
		case 1190:
			return &((*pContext)._L21);
		case 1191:
			return &((*pContext)._L20);
		case 1192:
			return &((*pContext)._L19);
		case 1193:
			return &((*pContext)._L18);
		case 1194:
			return &((*pContext)._L17);
		case 1195:
			return &((*pContext)._L16);
		case 1196:
			return &((*pContext)._L15);
		case 1197:
			return &((*pContext)._L14);
		case 1198:
			return &((*pContext)._L13);
		case 1199:
			return &((*pContext)._L12);
		case 1200:
			return &((*pContext)._L22);
		case 1201:
			return &((*pContext)._L24);
		case 1202:
			return &((*pContext)._L25);
		case 1203:
			return &((*pContext)._L26);
		case 1204:
			return &((*pContext)._L28);
		case 1205:
			return &((*pContext)._L29);
		case 1206:
			return &((*pContext)._L30);
		case 1207:
			return &((*pContext)._L31);
		case 1208:
			return &((*pContext)._L33);
		case 1209:
			return &((*pContext)._L32);
		case 1210:
			return &((*pContext)._L11);
		case 1211:
			return &((*pContext).Balise_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_Localisation/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Localisation_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L73", &_SCSIM_kcg_real_Utils, 1212, valid, 0, 0);
	_SCSIM_Mapping_Balise_Interdistance_FirstTest_InfraLibInt("FirstTest::InfraLibInt::Balise_Interdistance", "1", 1213, 0, 0);
	_SCSIM_Mapping_TOOLS_convert_engineering_TM_conversions("TM_conversions::TOOLS_convert_engineering_location", "1", 1214, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 1215, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1216, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_kcg_int_Utils, 1217, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_kcg_int_Utils, 1218, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_kcg_bool_Utils, 1219, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L51", &_SCSIM_kcg_int_Utils, 1220, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L52", &_SCSIM_kcg_int_Utils, 1221, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L65", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1222, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L66", &_SCSIM_kcg_int_Utils, 1223, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L72", &_SCSIM_kcg_bool_Utils, 1224, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L71", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1225, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L70", &_SCSIM_kcg_real_Utils, 1226, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L69", &_SCSIM_kcg_bool_Utils, 1227, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L68", &_SCSIM_kcg_int_Utils, 1228, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L67", &_SCSIM_kcg_bool_Utils, 1229, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L75", &_SCSIM_kcg_real_Utils, 1230, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L76", &_SCSIM_kcg_real_Utils, 1231, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L77", &_SCSIM_kcg_real_Utils, 1232, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PIG_0_out", &_SCSIM_kcg_int_Utils, 1233, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TrainPass", &_SCSIM_kcg_bool_Utils, 1234, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Localisation_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Localisation_FirstTest_InfraLibInt* pContext = (outC_Balise_Localisation_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 1212:
			return &((*pContext)._L73);
		case 1213:
			return &((*pContext)._1_Context_1);
		case 1214:
			return &((*pContext).Context_1);
		case 1215:
			return &((*pContext)._L15);
		case 1216:
			return &((*pContext)._L16);
		case 1217:
			return &((*pContext)._L47);
		case 1218:
			return &((*pContext)._L48);
		case 1219:
			return &((*pContext)._L50);
		case 1220:
			return &((*pContext)._L51);
		case 1221:
			return &((*pContext)._L52);
		case 1222:
			return &((*pContext)._L65);
		case 1223:
			return &((*pContext)._L66);
		case 1224:
			return &((*pContext)._L72);
		case 1225:
			return &((*pContext)._L71);
		case 1226:
			return &((*pContext)._L70);
		case 1227:
			return &((*pContext)._L69);
		case 1228:
			return &((*pContext)._L68);
		case 1229:
			return &((*pContext)._L67);
		case 1230:
			return &((*pContext)._L75);
		case 1231:
			return &((*pContext)._L76);
		case 1232:
			return &((*pContext)._L77);
		case 1233:
			return &((*pContext).PIG_0_out);
		case 1234:
			return &((*pContext).TrainPass);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** InfraLib::Balise_Localisation/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Localisation_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Localisation_InfraLib_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L73", &_SCSIM_kcg_real_Utils, 1235, valid, 0, 0);
	_SCSIM_Mapping_Balise_Interdistance_InfraLib("InfraLib::Balise_Interdistance", "1", 1236, 0, 0);
	_SCSIM_Mapping_TOOLS_convert_engineering_TM_conversions("TM_conversions::TOOLS_convert_engineering_location", "1", 1237, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 1238, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1239, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_kcg_int_Utils, 1240, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_kcg_int_Utils, 1241, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_kcg_bool_Utils, 1242, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L51", &_SCSIM_kcg_int_Utils, 1243, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L52", &_SCSIM_kcg_int_Utils, 1244, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L65", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1245, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L66", &_SCSIM_kcg_int_Utils, 1246, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L72", &_SCSIM_kcg_bool_Utils, 1247, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L71", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1248, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L70", &_SCSIM_kcg_real_Utils, 1249, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L69", &_SCSIM_kcg_bool_Utils, 1250, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L68", &_SCSIM_kcg_int_Utils, 1251, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L67", &_SCSIM_kcg_bool_Utils, 1252, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L75", &_SCSIM_kcg_real_Utils, 1253, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L76", &_SCSIM_kcg_real_Utils, 1254, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L77", &_SCSIM_kcg_real_Utils, 1255, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L80", &_SCSIM_kcg_bool_Utils, 1256, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L79", &_SCSIM_kcg_bool_Utils, 1257, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L78", &_SCSIM_kcg_bool_Utils, 1258, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L81", &_SCSIM_kcg_bool_Utils, 1259, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PIG_0_out", &_SCSIM_kcg_int_Utils, 1260, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TrainPass", &_SCSIM_kcg_bool_Utils, 1261, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Localisation_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Localisation_InfraLib* pContext = (outC_Balise_Localisation_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 1235:
			return &((*pContext)._L73);
		case 1236:
			return &((*pContext).Context_1);
		case 1237:
			return &((*pContext)._1_Context_1);
		case 1238:
			return &((*pContext)._L15);
		case 1239:
			return &((*pContext)._L16);
		case 1240:
			return &((*pContext)._L47);
		case 1241:
			return &((*pContext)._L48);
		case 1242:
			return &((*pContext)._L50);
		case 1243:
			return &((*pContext)._L51);
		case 1244:
			return &((*pContext)._L52);
		case 1245:
			return &((*pContext)._L65);
		case 1246:
			return &((*pContext)._L66);
		case 1247:
			return &((*pContext)._L72);
		case 1248:
			return &((*pContext)._L71);
		case 1249:
			return &((*pContext)._L70);
		case 1250:
			return &((*pContext)._L69);
		case 1251:
			return &((*pContext)._L68);
		case 1252:
			return &((*pContext)._L67);
		case 1253:
			return &((*pContext)._L75);
		case 1254:
			return &((*pContext)._L76);
		case 1255:
			return &((*pContext)._L77);
		case 1256:
			return &((*pContext)._L80);
		case 1257:
			return &((*pContext)._L79);
		case 1258:
			return &((*pContext)._L78);
		case 1259:
			return &((*pContext)._L81);
		case 1260:
			return &((*pContext).PIG_0_out);
		case 1261:
			return &((*pContext).TrainPass);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::TEMPLATE_Balise_Packets/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1262, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1263, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1264, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1265, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1266, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1267, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1268, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1269, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1270, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1271, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1272, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1273, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1274, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1275, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1276, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1277, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1278, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1279, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "7", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1280, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1281, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1282, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "8", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1283, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1284, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1285, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "9", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1286, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1287, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1288, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "0", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1289, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1290, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1291, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "20", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1292, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1293, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1294, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "19", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1295, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1296, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1297, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "18", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1298, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1299, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1300, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "17", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1301, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1302, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1303, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "16", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1304, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1305, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1306, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "15", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1307, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1308, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1309, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "14", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1310, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1311, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1312, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "13", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1313, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1314, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1315, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "12", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1316, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1317, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1318, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLibInt::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLibInt::No_Packet", "11", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1319, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1320, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1321, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1322, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1323, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "B_data_link", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1324, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1325, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1326, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1327, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1328, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1329, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1330, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1331, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1332, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1333, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1334, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1335, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1336, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1337, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1338, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1339, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1340, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1341, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1342, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1343, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1344, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1345, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1346, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1347, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1348, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1349, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1350, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1351, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1352, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1353, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_bool_Utils, 1354, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Balise_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLibInt_Utils, 1355, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt* pContext = (outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 1262:
			return &((*pContext).B_data_out_1);
		case 1263:
			return &((*pContext).B_data_in_1);
		case 1264:
			return &((*pContext)._L1_1);
		case 1265:
			return &((*pContext).B_data_out_2);
		case 1266:
			return &((*pContext).B_data_in_2);
		case 1267:
			return &((*pContext)._L1_2);
		case 1268:
			return &((*pContext).B_data_out_3);
		case 1269:
			return &((*pContext).B_data_in_3);
		case 1270:
			return &((*pContext)._L1_3);
		case 1271:
			return &((*pContext).B_data_out_4);
		case 1272:
			return &((*pContext).B_data_in_4);
		case 1273:
			return &((*pContext)._L1_4);
		case 1274:
			return &((*pContext).B_data_out_5);
		case 1275:
			return &((*pContext).B_data_in_5);
		case 1276:
			return &((*pContext)._L1_5);
		case 1277:
			return &((*pContext).B_data_out_6);
		case 1278:
			return &((*pContext).B_data_in_6);
		case 1279:
			return &((*pContext)._L1_6);
		case 1280:
			return &((*pContext).B_data_out_7);
		case 1281:
			return &((*pContext).B_data_in_7);
		case 1282:
			return &((*pContext)._L1_7);
		case 1283:
			return &((*pContext).B_data_out_8);
		case 1284:
			return &((*pContext).B_data_in_8);
		case 1285:
			return &((*pContext)._L1_8);
		case 1286:
			return &((*pContext).B_data_out_9);
		case 1287:
			return &((*pContext).B_data_in_9);
		case 1288:
			return &((*pContext)._L1_9);
		case 1289:
			return &((*pContext).B_data_out_0);
		case 1290:
			return &((*pContext).B_data_in_0);
		case 1291:
			return &((*pContext)._L1_0);
		case 1292:
			return &((*pContext).B_data_out_20);
		case 1293:
			return &((*pContext).B_data_in_20);
		case 1294:
			return &((*pContext)._L1_20);
		case 1295:
			return &((*pContext).B_data_out_19);
		case 1296:
			return &((*pContext).B_data_in_19);
		case 1297:
			return &((*pContext)._L1_19);
		case 1298:
			return &((*pContext).B_data_out_18);
		case 1299:
			return &((*pContext).B_data_in_18);
		case 1300:
			return &((*pContext)._L1_18);
		case 1301:
			return &((*pContext).B_data_out_17);
		case 1302:
			return &((*pContext).B_data_in_17);
		case 1303:
			return &((*pContext)._L1_17);
		case 1304:
			return &((*pContext).B_data_out_16);
		case 1305:
			return &((*pContext).B_data_in_16);
		case 1306:
			return &((*pContext)._L1_16);
		case 1307:
			return &((*pContext).B_data_out_15);
		case 1308:
			return &((*pContext).B_data_in_15);
		case 1309:
			return &((*pContext)._L1_15);
		case 1310:
			return &((*pContext).B_data_out_14);
		case 1311:
			return &((*pContext).B_data_in_14);
		case 1312:
			return &((*pContext)._L1_14);
		case 1313:
			return &((*pContext).B_data_out_13);
		case 1314:
			return &((*pContext).B_data_in_13);
		case 1315:
			return &((*pContext)._L1_13);
		case 1316:
			return &((*pContext).B_data_out_12);
		case 1317:
			return &((*pContext).B_data_in_12);
		case 1318:
			return &((*pContext)._L1_12);
		case 1319:
			return &((*pContext).B_data_out_11);
		case 1320:
			return &((*pContext).B_data_in_11);
		case 1321:
			return &((*pContext)._L1_11);
		case 1322:
			return &((*pContext).B_data_in);
		case 1323:
			return &((*pContext).B_data_out);
		case 1324:
			return &((*pContext).B_data_link);
		case 1325:
			return &((*pContext)._L2);
		case 1326:
			return &((*pContext)._L3);
		case 1327:
			return &((*pContext)._L4);
		case 1328:
			return &((*pContext)._L5);
		case 1329:
			return &((*pContext)._L6);
		case 1330:
			return &((*pContext)._L7);
		case 1331:
			return &((*pContext)._L8);
		case 1332:
			return &((*pContext)._L9);
		case 1333:
			return &((*pContext)._L10);
		case 1334:
			return &((*pContext)._L11);
		case 1335:
			return &((*pContext)._L21);
		case 1336:
			return &((*pContext)._L20);
		case 1337:
			return &((*pContext)._L19);
		case 1338:
			return &((*pContext)._L18);
		case 1339:
			return &((*pContext)._L17);
		case 1340:
			return &((*pContext)._L16);
		case 1341:
			return &((*pContext)._L15);
		case 1342:
			return &((*pContext)._L14);
		case 1343:
			return &((*pContext)._L13);
		case 1344:
			return &((*pContext)._L12);
		case 1345:
			return &((*pContext)._L22);
		case 1346:
			return &((*pContext)._L24);
		case 1347:
			return &((*pContext)._L25);
		case 1348:
			return &((*pContext)._L26);
		case 1349:
			return &((*pContext)._L28);
		case 1350:
			return &((*pContext)._L29);
		case 1351:
			return &((*pContext)._L30);
		case 1352:
			return &((*pContext)._L31);
		case 1353:
			return &((*pContext)._L32);
		case 1354:
			return &((*pContext)._L33);
		case 1355:
			return &((*pContext).Balise_data_out);
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1356, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1357, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_NID_PACKET_Utils, 1358, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_bool_Utils, 1359, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_bool_Utils, 1360, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1361, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 1362, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 1363, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "HeaderFound", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1364, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_LookupPacketLoop_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_LookupPacketLoop_TM_lib_internal* pContext = (outC_RECV_LookupPacketLoop_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1356:
			return &((*pContext)._L3);
		case 1357:
			return &((*pContext)._L4);
		case 1358:
			return &((*pContext)._L27);
		case 1359:
			return &((*pContext)._L28);
		case 1360:
			return &((*pContext)._L29);
		case 1361:
			return &((*pContext)._L30);
		case 1362:
			return &((*pContext)._L31);
		case 1363:
			return &((*pContext).Cont);
		case 1364:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1365, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1366, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 1367, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1368, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 1369, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1370, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_int_Utils, 1371, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_int_Utils, 1372, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 1373, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_int_Utils, 1374, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_int_Utils, 1375, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_int_Utils, 1376, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 1377, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PacketOut", &_SCSIM_kcg_int_Utils, 1378, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ReadPacketKernelLoop_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ReadPacketKernelLoop_TM_lib_internal* pContext = (outC_RECV_ReadPacketKernelLoop_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1365:
			return &((*pContext)._L1);
		case 1366:
			return &((*pContext)._L3);
		case 1367:
			return &((*pContext)._L4);
		case 1368:
			return &((*pContext)._L9);
		case 1369:
			return &((*pContext)._L18);
		case 1370:
			return &((*pContext)._L20);
		case 1371:
			return &((*pContext)._L29);
		case 1372:
			return &((*pContext)._L30);
		case 1373:
			return &((*pContext)._L31);
		case 1374:
			return &((*pContext)._L32);
		case 1375:
			return &((*pContext)._L33);
		case 1376:
			return &((*pContext)._L34);
		case 1377:
			return &((*pContext).Cont);
		case 1378:
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
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "1", 1379, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "2", 1380, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "3", 1381, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "4", 1382, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "5", 1383, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "6", 1384, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "7", 1385, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_D_LINK_TM_conversions("TM_conversions::CAST_Int_to_D_LINK", "1", 1386, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_NID_C_TM_conversions("TM_conversions::CAST_Int_to_NID_C", "1", 1387, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_NID_BG_TM_conversions("TM_conversions::CAST_Int_to_NID_BG", "1", 1388, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions("TM_conversions::CAST_Int_to_Q_NEWCOUNTRY", "1", 1389, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_LINKORIENTATION_TM_conversions("TM_conversions::CAST_Int_to_Q_LINKORIENTATION", "1", 1390, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_LINKREACTION_TM_conversions("TM_conversions::CAST_Int_to_Q_LINKREACTION", "1", 1391, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_LOCACC_TM_conversions("TM_conversions::CAST_Int_to_Q_LOCACC", "1", 1392, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1393, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1394, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_P005_section_enum_T_TM_Utils, 1395, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 1396, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 1397, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 1398, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 1399, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_int_Utils, 1400, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1401, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1402, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 1403, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 1404, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 1405, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_D_LINK_Utils, 1406, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_NID_C_Utils, 1407, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_NID_BG_Utils, 1408, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_Q_NEWCOUNTRY_Utils, 1409, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_Q_LINKORIENTATION_Utils, 1410, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_Q_LINKREACTION_Utils, 1411, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_Q_LOCACC_Utils, 1412, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 1413, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_bool_Utils, 1414, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 1415, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "sections", &_SCSIM_P005_section_enum_T_TM_Utils, 1416, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_us_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_us_array_TM_lib_internal* pContext = (outC_C_P005_us_array_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1379:
			return &((*pContext)._6_Context_1);
		case 1380:
			return &((*pContext).Context_2);
		case 1381:
			return &((*pContext).Context_3);
		case 1382:
			return &((*pContext).Context_4);
		case 1383:
			return &((*pContext).Context_5);
		case 1384:
			return &((*pContext).Context_6);
		case 1385:
			return &((*pContext).Context_7);
		case 1386:
			return &((*pContext)._7_Context_1);
		case 1387:
			return &((*pContext)._5_Context_1);
		case 1388:
			return &((*pContext)._4_Context_1);
		case 1389:
			return &((*pContext)._3_Context_1);
		case 1390:
			return &((*pContext)._2_Context_1);
		case 1391:
			return &((*pContext)._1_Context_1);
		case 1392:
			return &((*pContext).Context_1);
		case 1393:
			return &((*pContext)._L1);
		case 1394:
			return &((*pContext)._L3);
		case 1395:
			return &((*pContext)._L4);
		case 1396:
			return &((*pContext)._L5);
		case 1397:
			return &((*pContext)._L15);
		case 1398:
			return &((*pContext)._L16);
		case 1399:
			return &((*pContext)._L18);
		case 1400:
			return &((*pContext)._L19);
		case 1401:
			return &((*pContext)._L20);
		case 1402:
			return &((*pContext)._L21);
		case 1403:
			return &((*pContext)._L22);
		case 1404:
			return &((*pContext)._L23);
		case 1405:
			return &((*pContext)._L24);
		case 1406:
			return &((*pContext)._L25);
		case 1407:
			return &((*pContext)._L26);
		case 1408:
			return &((*pContext)._L27);
		case 1409:
			return &((*pContext)._L28);
		case 1410:
			return &((*pContext)._L29);
		case 1411:
			return &((*pContext)._L30);
		case 1412:
			return &((*pContext)._L31);
		case 1413:
			return &((*pContext)._L32);
		case 1414:
			return &((*pContext)._L33);
		case 1415:
			return &((*pContext).cont);
		case 1416:
			return &((*pContext).sections);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Send_BG364_P005/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Send_BG364_P005_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Send_BG364_P005_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Write_P005_TM_trackside("TM_trackside::Write_P005", "1", 1417, 1418, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1419, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_P005_trackside_int_T_TM_Utils, 1420, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 1421, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 1422, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1423, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 1424, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 1418, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1425, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Send_BG364_P005_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Send_BG364_P005_FirstTest_InfraLibInt* pContext = (outC_Send_BG364_P005_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 1417:
			return &((*pContext).Context_1);
		case 1419:
			return &((*pContext)._L3);
		case 1420:
			return &((*pContext)._L4);
		case 1421:
			return &((*pContext)._L8);
		case 1422:
			return &((*pContext)._L6);
		case 1423:
			return &((*pContext)._L7);
		case 1424:
			return &((*pContext)._L5);
		case 1418:
			return &((*pContext).tmp);
		case 1425:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLibInt::Balise_Interdistance/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Interdistance_FirstTest_InfraLibInt(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Interdistance_FirstTest_InfraLibInt_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined math::Abs*/
	pSimulator->m_pfnPushInstance(pSimulator, "math::Abs", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "A_Output", &_SCSIM_kcg_int_Utils, 1426, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "A_Input", &_SCSIM_kcg_int_Utils, 1427, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 1428, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 1429, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1430, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 1431, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 1432, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 1433, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 1434, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 1435, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 1436, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_real_Utils, 1437, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 1438, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 1439, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 1440, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 1441, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 1442, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_real_Utils, 1443, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 1444, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_real_Utils, 1445, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "distance_BB", &_SCSIM_kcg_real_Utils, 1446, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Interdistance_FirstTest_InfraLibInt_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Interdistance_FirstTest_InfraLibInt* pContext = (outC_Balise_Interdistance_FirstTest_InfraLibInt*)pInstance;
	switch (nHandleIdent) {
		case 1426:
			return &((*pContext).A_Output_1);
		case 1427:
			return &((*pContext).A_Input_1);
		case 1428:
			return &((*pContext)._L1_1);
		case 1429:
			return &((*pContext)._L2_1);
		case 1430:
			return &((*pContext)._L3_1);
		case 1431:
			return &((*pContext)._L5_1);
		case 1432:
			return &((*pContext)._L8_1);
		case 1433:
			return &((*pContext)._L1);
		case 1434:
			return &((*pContext)._L2);
		case 1435:
			return &((*pContext)._L3);
		case 1436:
			return &((*pContext)._L4);
		case 1437:
			return &((*pContext)._L5);
		case 1438:
			return &((*pContext)._L6);
		case 1439:
			return &((*pContext)._L8);
		case 1440:
			return &((*pContext)._L9);
		case 1441:
			return &((*pContext)._L10);
		case 1442:
			return &((*pContext)._L11);
		case 1443:
			return &((*pContext)._L12);
		case 1444:
			return &((*pContext)._L13);
		case 1445:
			return &((*pContext)._L14);
		case 1446:
			return &((*pContext).distance_BB);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::TOOLS_convert_engineering_location/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_TOOLS_convert_engineering_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_TOOLS_convert_engineering_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1447, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 1448, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 1449, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 1450, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Loc_real", &_SCSIM_kcg_real_Utils, 1451, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_TOOLS_convert_engineering_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_TOOLS_convert_engineering_TM_conversions* pContext = (outC_TOOLS_convert_engineering_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 1447:
			return &((*pContext)._L1);
		case 1448:
			return &((*pContext)._L2);
		case 1449:
			return &((*pContext)._L3);
		case 1450:
			return &((*pContext)._L4);
		case 1451:
			return &((*pContext).Loc_real);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** InfraLib::Balise_Interdistance/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Interdistance_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Interdistance_InfraLib_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined math::Abs*/
	pSimulator->m_pfnPushInstance(pSimulator, "math::Abs", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "A_Output", &_SCSIM_kcg_int_Utils, 1452, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "A_Input", &_SCSIM_kcg_int_Utils, 1453, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 1454, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 1455, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1456, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 1457, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 1458, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 1459, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 1460, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 1461, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 1462, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_real_Utils, 1463, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 1464, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 1465, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 1466, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 1467, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 1468, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_real_Utils, 1469, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 1470, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_real_Utils, 1471, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "distance_BB", &_SCSIM_kcg_real_Utils, 1472, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Interdistance_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Interdistance_InfraLib* pContext = (outC_Balise_Interdistance_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 1452:
			return &((*pContext).A_Output_1);
		case 1453:
			return &((*pContext).A_Input_1);
		case 1454:
			return &((*pContext)._L1_1);
		case 1455:
			return &((*pContext)._L2_1);
		case 1456:
			return &((*pContext)._L3_1);
		case 1457:
			return &((*pContext)._L5_1);
		case 1458:
			return &((*pContext)._L8_1);
		case 1459:
			return &((*pContext)._L1);
		case 1460:
			return &((*pContext)._L2);
		case 1461:
			return &((*pContext)._L3);
		case 1462:
			return &((*pContext)._L4);
		case 1463:
			return &((*pContext)._L5);
		case 1464:
			return &((*pContext)._L6);
		case 1465:
			return &((*pContext)._L8);
		case 1466:
			return &((*pContext)._L9);
		case 1467:
			return &((*pContext)._L10);
		case 1468:
			return &((*pContext)._L11);
		case 1469:
			return &((*pContext)._L12);
		case 1470:
			return &((*pContext)._L13);
		case 1471:
			return &((*pContext)._L14);
		case 1472:
			return &((*pContext).distance_BB);
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1473, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1474, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1475, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 1476, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 1477, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "element", &_SCSIM_kcg_int_Utils, 1478, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_extract_el_section_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_extract_el_section_TM_lib_internal* pContext = (outC_C_P005_extract_el_section_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1473:
			return &((*pContext)._L1);
		case 1474:
			return &((*pContext)._L2);
		case 1475:
			return &((*pContext)._L3);
		case 1476:
			return &((*pContext)._L5);
		case 1477:
			return &((*pContext)._L6);
		case 1478:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1479, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 1480, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 1481, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 1482, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 1483, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "d_link", &_SCSIM_D_LINK_Utils, 1484, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_D_LINK_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_D_LINK_TM_conversions* pContext = (outC_CAST_Int_to_D_LINK_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 1479:
			return &((*pContext)._L1);
		case 1480:
			return &((*pContext)._L9);
		case 1481:
			return &((*pContext)._L8);
		case 1482:
			return &((*pContext)._L7);
		case 1483:
			return &((*pContext)._L6);
		case 1484:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1485, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 1486, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 1487, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 1488, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 1489, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_c", &_SCSIM_NID_C_Utils, 1490, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_NID_C_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_NID_C_TM_conversions* pContext = (outC_CAST_Int_to_NID_C_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 1485:
			return &((*pContext)._L1);
		case 1486:
			return &((*pContext)._L9);
		case 1487:
			return &((*pContext)._L8);
		case 1488:
			return &((*pContext)._L10);
		case 1489:
			return &((*pContext)._L11);
		case 1490:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1491, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 1492, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 1493, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 1494, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 1495, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_bg", &_SCSIM_NID_BG_Utils, 1496, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_NID_BG_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_NID_BG_TM_conversions* pContext = (outC_CAST_Int_to_NID_BG_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 1491:
			return &((*pContext)._L1);
		case 1492:
			return &((*pContext)._L9);
		case 1493:
			return &((*pContext)._L8);
		case 1494:
			return &((*pContext)._L10);
		case 1495:
			return &((*pContext)._L11);
		case 1496:
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
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1497_Utils, 1497);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1498_Utils, 1498);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1499, valid, 1498, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_NEWCOUNTRY_Utils, 1500, valid, 1498, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1501_Utils, 1501);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_NEWCOUNTRY_Utils, 1502, valid, 1501, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 1503, valid, 1501, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1504_Utils, 1504);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_NEWCOUNTRY_Utils, 1505, valid, 1504, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 1506, valid, 1504, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 1507, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_newcountry_in", &_SCSIM_kcg_int_Utils, 1508, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 1509, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 1510, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_newcountry", &_SCSIM_Q_NEWCOUNTRY_Utils, 1511, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions* pContext = (outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 1497:
			return &((*pContext).IfBlock1_clock);
		case 1498:
			return &((*pContext).else_clock_IfBlock1);
		case 1499:
			return &((*pContext)._L2_IfBlock1);
		case 1500:
			return &((*pContext)._L1_IfBlock1);
		case 1501:
			return &((*pContext).else_clock_IfBlock1);
		case 1502:
			return &((*pContext)._L3_IfBlock1);
		case 1503:
			return &((*pContext)._L51_IfBlock1);
		case 1504:
			return &((*pContext).IfBlock1_clock);
		case 1505:
			return &((*pContext)._L4_IfBlock1);
		case 1506:
			return &((*pContext)._L5_IfBlock1);
		case 1507:
			return &((*pContext).error);
		case 1508:
			return &((*pContext).q_newcountry_in);
		case 1509:
			return &((*pContext)._L13);
		case 1510:
			return &((*pContext)._L12);
		case 1511:
			return &((*pContext).q_newcountry);
		default:
			break;
	}
	return 0;
}

static int Is1498Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1498_Utils = {Is1498Active};

static int Is1501Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1501_Utils = {Is1501Active};

static int Is1497Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1497_Utils = {Is1497Active};

static int Is1504Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1504_Utils = {Is1504Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_LINKORIENTATION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_LINKORIENTATION_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1512_Utils, 1512);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1513_Utils, 1513);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1514, valid, 1513, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKORIENTATION_Utils, 1515, valid, 1513, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1516_Utils, 1516);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_LINKORIENTATION_Utils, 1517, valid, 1516, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 1518, valid, 1516, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1519_Utils, 1519);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_LINKORIENTATION_Utils, 1520, valid, 1519, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 1521, valid, 1519, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 1522, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_linkorientation_in", &_SCSIM_kcg_int_Utils, 1523, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 1524, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 1525, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_linkorientation", &_SCSIM_Q_LINKORIENTATION_Utils, 1526, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_LINKORIENTATION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions* pContext = (outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 1512:
			return &((*pContext).IfBlock1_clock);
		case 1513:
			return &((*pContext).else_clock_IfBlock1);
		case 1514:
			return &((*pContext)._L2_IfBlock1);
		case 1515:
			return &((*pContext)._L1_IfBlock1);
		case 1516:
			return &((*pContext).else_clock_IfBlock1);
		case 1517:
			return &((*pContext)._L3_IfBlock1);
		case 1518:
			return &((*pContext)._L51_IfBlock1);
		case 1519:
			return &((*pContext).IfBlock1_clock);
		case 1520:
			return &((*pContext)._L4_IfBlock1);
		case 1521:
			return &((*pContext)._L5_IfBlock1);
		case 1522:
			return &((*pContext).error);
		case 1523:
			return &((*pContext).q_linkorientation_in);
		case 1524:
			return &((*pContext)._L13);
		case 1525:
			return &((*pContext)._L12);
		case 1526:
			return &((*pContext).q_linkorientation);
		default:
			break;
	}
	return 0;
}

static int Is1513Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1513_Utils = {Is1513Active};

static int Is1516Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1516_Utils = {Is1516Active};

static int Is1512Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1512_Utils = {Is1512Active};

static int Is1519Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1519_Utils = {Is1519Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_LINKREACTION/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_LINKREACTION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_LINKREACTION_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1527_Utils, 1527);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1528_Utils, 1528);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1529_Utils, 1529);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1530, valid, 1529, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKREACTION_Utils, 1531, valid, 1529, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1532_Utils, 1532);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKREACTION_Utils, 1533, valid, 1532, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 1534, valid, 1532, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1535_Utils, 1535);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKREACTION_Utils, 1536, valid, 1535, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 1537, valid, 1535, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1538_Utils, 1538);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_LINKREACTION_Utils, 1539, valid, 1538, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 1540, valid, 1538, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "q_linkreaction_in", &_SCSIM_kcg_int_Utils, 1541, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 1542, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 1543, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 1544, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_linkreaction", &_SCSIM_Q_LINKREACTION_Utils, 1545, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_LINKREACTION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_LINKREACTION_TM_conversions* pContext = (outC_CAST_Int_to_Q_LINKREACTION_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 1527:
			return &((*pContext).IfBlock1_clock);
		case 1528:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 1529:
			return &((*pContext).else_clock_IfBlock1);
		case 1530:
			return &((*pContext)._L25_IfBlock1);
		case 1531:
			return &((*pContext)._L14_IfBlock1);
		case 1532:
			return &((*pContext).else_clock_IfBlock1);
		case 1533:
			return &((*pContext)._L13_IfBlock1);
		case 1534:
			return &((*pContext)._L4_IfBlock1);
		case 1535:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 1536:
			return &((*pContext)._L1_IfBlock1);
		case 1537:
			return &((*pContext)._L32_IfBlock1);
		case 1538:
			return &((*pContext).IfBlock1_clock);
		case 1539:
			return &((*pContext)._L2_IfBlock1);
		case 1540:
			return &((*pContext)._L3_IfBlock1);
		case 1541:
			return &((*pContext).q_linkreaction_in);
		case 1542:
			return &((*pContext).error);
		case 1543:
			return &((*pContext)._L2);
		case 1544:
			return &((*pContext)._L4);
		case 1545:
			return &((*pContext).q_linkreaction);
		default:
			break;
	}
	return 0;
}

static int Is1529Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1529_Utils = {Is1529Active};

static int Is1532Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1532_Utils = {Is1532Active};

static int Is1528Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1528_Utils = {Is1528Active};

static int Is1535Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1535_Utils = {Is1535Active};

static int Is1527Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1527_Utils = {Is1527Active};

static int Is1538Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1538_Utils = {Is1538Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_LOCACC/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_LOCACC_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_LOCACC_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1546, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 1547, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 1548, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 1549, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 1550, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_locacc", &_SCSIM_Q_LOCACC_Utils, 1551, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_LOCACC_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_LOCACC_TM_conversions* pContext = (outC_CAST_Int_to_Q_LOCACC_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 1546:
			return &((*pContext)._L1);
		case 1547:
			return &((*pContext)._L9);
		case 1548:
			return &((*pContext)._L8);
		case 1549:
			return &((*pContext)._L10);
		case 1550:
			return &((*pContext)._L11);
		case 1551:
			return &((*pContext).q_locacc);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_trackside::Write_P005/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Write_P005_TM_trackside(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Write_P005_TM_trackside_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_SIM_SEND_WriteBaliseMessa_DRAFTS("DRAFTS::SIM_SEND_WriteBaliseMessageHeader", "1", 1552, 0, 0);
	_SCSIM_Mapping_SEND_MessageData_TM_lib_internal("TM_lib_internal::SEND_MessageData", "1", 1553, 0, 0);
	_SCSIM_Mapping_C_P005_tracksim_compr_TM_conversions("TM_conversions::C_P005_tracksim_compr", "1", 1554, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_trackside_int_T_TM_Utils, 1555, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 1556, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1557, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 1558, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1559, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 1560, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1561, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1562, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1563, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 1564, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1565, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1566, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Error", &_SCSIM_kcg_bool_Utils, 1567, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "RadioPacketsOut", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1568, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Write_P005_TM_trackside_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Write_P005_TM_trackside* pContext = (outC_Write_P005_TM_trackside*)pInstance;
	switch (nHandleIdent) {
		case 1552:
			return &((*pContext)._1_Context_1);
		case 1553:
			return &((*pContext)._2_Context_1);
		case 1554:
			return &((*pContext).Context_1);
		case 1555:
			return &((*pContext)._L1);
		case 1556:
			return &((*pContext)._L4);
		case 1557:
			return &((*pContext)._L10);
		case 1558:
			return &((*pContext)._L18);
		case 1559:
			return &((*pContext)._L21);
		case 1560:
			return &((*pContext)._L22);
		case 1561:
			return &((*pContext)._L39);
		case 1562:
			return &((*pContext)._L40);
		case 1563:
			return &((*pContext)._L42);
		case 1564:
			return &((*pContext)._L41);
		case 1565:
			return &((*pContext)._L44);
		case 1566:
			return &((*pContext)._L43);
		case 1567:
			return &((*pContext).Error);
		case 1568:
			return &((*pContext).RadioPacketsOut);
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
	_SCSIM_Mapping_SEND_FindSlot_DRAFTS("DRAFTS::SEND_FindSlot", "1", 1569, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 1570, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 1571, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 1572, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 1573, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1574, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 1575, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 1576, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 1577, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 1578, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 1579, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 1580, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 1581, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 1582, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_int_Utils, 1583, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_int_Utils, 1584, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_int_Utils, 1585, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_int_Utils, 1586, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_kcg_int_Utils, 1587, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1588, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1589, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 1590, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1591, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "HeadersOut", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 1592, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NewStartAddr", &_SCSIM_kcg_int_Utils, 1593, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NewEndAddr", &_SCSIM_kcg_int_Utils, 1594, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SIM_SEND_WriteBaliseMessa_DRAFTS_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SIM_SEND_WriteBaliseMessa_DRAFTS* pContext = (outC_SIM_SEND_WriteBaliseMessa_DRAFTS*)pInstance;
	switch (nHandleIdent) {
		case 1569:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 1570:
			return &((*pContext)._L1);
		case 1571:
			return &((*pContext)._L4);
		case 1572:
			return &((*pContext)._L5);
		case 1573:
			return &((*pContext)._L8);
		case 1574:
			return &((*pContext)._L9);
		case 1575:
			return &((*pContext)._L16);
		case 1576:
			return &((*pContext)._L17);
		case 1577:
			return &((*pContext)._L18);
		case 1578:
			return &((*pContext)._L22);
		case 1579:
			return &((*pContext)._L23);
		case 1580:
			return &((*pContext)._L24);
		case 1581:
			return &((*pContext)._L31);
		case 1582:
			return &((*pContext)._L32);
		case 1583:
			return &((*pContext)._L33);
		case 1584:
			return &((*pContext)._L34);
		case 1585:
			return &((*pContext)._L35);
		case 1586:
			return &((*pContext)._L36);
		case 1587:
			return &((*pContext)._L37);
		case 1588:
			return &((*pContext)._L43);
		case 1589:
			return &((*pContext)._L44);
		case 1590:
			return &((*pContext)._L7);
		case 1591:
			return &((*pContext)._L3);
		case 1592:
			return &((*pContext).HeadersOut);
		case 1593:
			return &((*pContext).NewStartAddr);
		case 1594:
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
	_SCSIM_Mapping_SEND_WriteBaliseDataElement_TM_lib_internal("TM_lib_internal::SEND_WriteBaliseDataElement", "1", 1595, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1596, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L402", &_SCSIM_kcg_int_Utils, 1597, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L403", &_SCSIM_kcg_bool_Utils, 1598, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L404", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1599, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L406", &_SCSIM_array_int_500_Utils, 1600, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L407", &_SCSIM_kcg_int_Utils, 1601, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L408", &_SCSIM_kcg_int_Utils, 1602, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L413", &_SCSIM_array_int_500_500_Utils, 1603, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L414", &_SCSIM_array_int_500_Utils, 1604, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L415", &_SCSIM_array_int_500_Utils, 1605, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "DataOut", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1606, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_MessageData_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_MessageData_TM_lib_internal* pContext = (outC_SEND_MessageData_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1595:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 1596:
			return &((*pContext)._L1);
		case 1597:
			return &((*pContext)._L402);
		case 1598:
			return &((*pContext)._L403);
		case 1599:
			return &((*pContext)._L404);
		case 1600:
			return &((*pContext)._L406);
		case 1601:
			return &((*pContext)._L407);
		case 1602:
			return &((*pContext)._L408);
		case 1603:
			return &((*pContext)._L413);
		case 1604:
			return &((*pContext)._L414);
		case 1605:
			return &((*pContext)._L415);
		case 1606:
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
	pSimulator->m_pfnAddOutput(pSimulator, "q_dir", &_SCSIM_Q_DIR_Utils, 1607, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "q_dir_int", &_SCSIM_kcg_int_Utils, 1608, valid, 0, 0);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1609_Utils, 1609);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1610_Utils, 1610);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1611_Utils, 1611);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 1612, valid, 1611, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 1613, valid, 1611, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1614_Utils, 1614);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 1615, valid, 1614, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 1616, valid, 1614, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1617_Utils, 1617);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_DIR_Utils, 1618, valid, 1617, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 1619, valid, 1617, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1620_Utils, 1620);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_DIR_Utils, 1621, valid, 1620, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 1622, valid, 1620, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 1623, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_dir_in", &_SCSIM_kcg_int_Utils, 1624, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 1625, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 1626, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_DeterminePacketSizeInt_TM_lib_internal("TM_lib_internal::DeterminePacketSizeInt", "1", 1627, 0, 0);
	_SCSIM_Mapping_C_P005_flatten_sections_TM_lib_internal("TM_lib_internal::C_P005_flatten_sections", "1", 1628, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "p_size", &_SCSIM_kcg_int_Utils, 1629, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_trackside_int_T_TM_Utils, 1630, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L204", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1631, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L206", &_SCSIM_kcg_int_Utils, 1632, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L209", &_SCSIM_array_int_271_Utils, 1633, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L212", &_SCSIM_kcg_int_Utils, 1634, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L213", &_SCSIM_kcg_int_Utils, 1635, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L336", &_SCSIM_kcg_int_Utils, 1636, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L219", &_SCSIM_kcg_int_Utils, 1637, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L218", &_SCSIM_kcg_int_Utils, 1638, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L217", &_SCSIM_kcg_int_Utils, 1639, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L216", &_SCSIM_kcg_int_Utils, 1640, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L215", &_SCSIM_kcg_int_Utils, 1641, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L214", &_SCSIM_kcg_bool_Utils, 1642, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L356", &_SCSIM_Q_DIR_Utils, 1643, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L371", &_SCSIM_kcg_int_Utils, 1644, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L370", &_SCSIM_kcg_int_Utils, 1645, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L369", &_SCSIM_kcg_int_Utils, 1646, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L368", &_SCSIM_kcg_int_Utils, 1647, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L367", &_SCSIM_kcg_int_Utils, 1648, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L366", &_SCSIM_kcg_int_Utils, 1649, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L365", &_SCSIM_P005_trackide_sectionlist_T_TM_Utils, 1650, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L373", &_SCSIM_array_int_4_Utils, 1651, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L375", &_SCSIM_P005_section_int_T_TM_Utils, 1652, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L376", &_SCSIM_array_int_1_Utils, 1653, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L378", &_SCSIM_kcg_int_Utils, 1654, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L379", &_SCSIM_kcg_int_Utils, 1655, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L380", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1656, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L381", &_SCSIM_array_int_5_Utils, 1657, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L383", &_SCSIM_array_int_500_Utils, 1658, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L384", &_SCSIM_array_int_229_Utils, 1659, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L386", &_SCSIM_array__5705_Utils, 1660, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L385", &_SCSIM_array__5681_Utils, 1661, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L387", &_SCSIM_kcg_int_Utils, 1662, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Header", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1663, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "P005_compressed", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1664, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_tracksim_compr_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_tracksim_compr_TM_conversions* pContext = (outC_C_P005_tracksim_compr_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 1607:
			return &((*pContext).q_dir_1);
		case 1608:
			return &((*pContext).q_dir_int_1);
		case 1609:
			return &((*pContext).IfBlock1_clock_1);
		case 1610:
			return &((*pContext)._3_else_clock_1_IfBlock1);
		case 1611:
			return &((*pContext).else_clock_1_IfBlock1);
		case 1612:
			return &((*pContext)._L2_1_IfBlock1);
		case 1613:
			return &((*pContext)._L1_1_IfBlock1);
		case 1614:
			return &((*pContext).else_clock_1_IfBlock1);
		case 1615:
			return &((*pContext)._L2_12_IfBlock1);
		case 1616:
			return &((*pContext)._L4_1_IfBlock1);
		case 1617:
			return &((*pContext)._3_else_clock_1_IfBlock1);
		case 1618:
			return &((*pContext)._L3_1_IfBlock1);
		case 1619:
			return &((*pContext)._L5_1_IfBlock1);
		case 1620:
			return &((*pContext).IfBlock1_clock_1);
		case 1621:
			return &((*pContext)._L4_14_IfBlock1);
		case 1622:
			return &((*pContext)._L5_15_IfBlock1);
		case 1623:
			return &((*pContext).error_1);
		case 1624:
			return &((*pContext).q_dir_in_1);
		case 1625:
			return &((*pContext)._L13_1);
		case 1626:
			return &((*pContext)._L12_1);
		case 1627:
			return &((*pContext)._1_Context_1);
		case 1628:
			return &((*pContext).Context_1);
		case 1629:
			return &((*pContext).p_size);
		case 1630:
			return &((*pContext)._L1);
		case 1631:
			return &((*pContext)._L204);
		case 1632:
			return &((*pContext)._L206);
		case 1633:
			return &((*pContext)._L209);
		case 1634:
			return &((*pContext)._L212);
		case 1635:
			return &((*pContext)._L213);
		case 1636:
			return &((*pContext)._L336);
		case 1637:
			return &((*pContext)._L219);
		case 1638:
			return &((*pContext)._L218);
		case 1639:
			return &((*pContext)._L217);
		case 1640:
			return &((*pContext)._L216);
		case 1641:
			return &((*pContext)._L215);
		case 1642:
			return &((*pContext)._L214);
		case 1643:
			return &((*pContext)._L356);
		case 1644:
			return &((*pContext)._L371);
		case 1645:
			return &((*pContext)._L370);
		case 1646:
			return &((*pContext)._L369);
		case 1647:
			return &((*pContext)._L368);
		case 1648:
			return &((*pContext)._L367);
		case 1649:
			return &((*pContext)._L366);
		case 1650:
			return &((*pContext)._L365);
		case 1651:
			return &((*pContext)._L373);
		case 1652:
			return &((*pContext)._L375);
		case 1653:
			return &((*pContext)._L376);
		case 1654:
			return &((*pContext)._L378);
		case 1655:
			return &((*pContext)._L379);
		case 1656:
			return &((*pContext)._L380);
		case 1657:
			return &((*pContext)._L381);
		case 1658:
			return &((*pContext)._L383);
		case 1659:
			return &((*pContext)._L384);
		case 1660:
			return &((*pContext)._L386);
		case 1661:
			return &((*pContext)._L385);
		case 1662:
			return &((*pContext)._L387);
		case 1663:
			return &((*pContext).Header);
		case 1664:
			return &((*pContext).P005_compressed);
		default:
			break;
	}
	return 0;
}

static int Is1611Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1611_Utils = {Is1611Active};

static int Is1614Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1614_Utils = {Is1614Active};

static int Is1610Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1610_Utils = {Is1610Active};

static int Is1617Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1617_Utils = {Is1617Active};

static int Is1609Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1609_Utils = {Is1609Active};

static int Is1620Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1620_Utils = {Is1620Active};

/****************************************************************
 ** DRAFTS::SEND_FindSlot/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SEND_FindSlot_DRAFTS(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SEND_FindSlot_DRAFTS_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1665, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1666, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1667, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 1668, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_int_Utils, 1669, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_NID_PACKET_Utils, 1670, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 1671, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_NID_PACKET_Utils, 1672, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 1673, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Acc", &_SCSIM_kcg_int_Utils, 1674, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_FindSlot_DRAFTS_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_FindSlot_DRAFTS* pContext = (outC_SEND_FindSlot_DRAFTS*)pInstance;
	switch (nHandleIdent) {
		case 1665:
			return &((*pContext)._L1);
		case 1666:
			return &((*pContext)._L2);
		case 1667:
			return &((*pContext)._L3);
		case 1668:
			return &((*pContext)._L17);
		case 1669:
			return &((*pContext)._L19);
		case 1670:
			return &((*pContext)._L27);
		case 1671:
			return &((*pContext)._L28);
		case 1672:
			return &((*pContext)._L29);
		case 1673:
			return &((*pContext).Cont);
		case 1674:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1675, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 1676, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1677, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 1678, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 1679, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 1680, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 1681, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 1682, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 1683, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 1684, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 1685, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 1686, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 1687, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 1688, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "DataOut", &_SCSIM_kcg_int_Utils, 1689, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_WriteBaliseDataElement_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_WriteBaliseDataElement_TM_lib_internal* pContext = (outC_SEND_WriteBaliseDataElement_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1675:
			return &((*pContext)._L1);
		case 1676:
			return &((*pContext)._L2);
		case 1677:
			return &((*pContext)._L3);
		case 1678:
			return &((*pContext)._L4);
		case 1679:
			return &((*pContext)._L5);
		case 1680:
			return &((*pContext)._L6);
		case 1681:
			return &((*pContext)._L7);
		case 1682:
			return &((*pContext)._L8);
		case 1683:
			return &((*pContext)._L9);
		case 1684:
			return &((*pContext)._L10);
		case 1685:
			return &((*pContext)._L14);
		case 1686:
			return &((*pContext)._L16);
		case 1687:
			return &((*pContext)._L17);
		case 1688:
			return &((*pContext).Cont);
		case 1689:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1690, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 1691, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1692, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 1693, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 1694, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "p_size", &_SCSIM_kcg_int_Utils, 1695, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_DeterminePacketSizeInt_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_DeterminePacketSizeInt_TM_lib_internal* pContext = (outC_DeterminePacketSizeInt_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1690:
			return &((*pContext)._L1);
		case 1691:
			return &((*pContext)._L2);
		case 1692:
			return &((*pContext)._L3);
		case 1693:
			return &((*pContext)._L6);
		case 1694:
			return &((*pContext)._L7);
		case 1695:
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
	_SCSIM_Mapping_C_P005_fs_flatten_array_TM_lib_internal("TM_lib_internal::C_P005_fs_flatten_array", "2", 1696, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 33, 33);
	_SCSIM_Mapping_C_P005_fs_struct_to_array_TM_lib_internal("TM_lib_internal::C_P005_fs_struct_to_array", "2", 1697, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L76", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1698, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L75", &_SCSIM_P005_OBU_sectionlist_int_T_TM_Utils, 1699, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L74", &_SCSIM_array_int_7_33_Utils, 1700, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L78", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1701, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L80", &_SCSIM_array_int_7_33_231_Utils, 1702, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Flattened", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1703, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_flatten_sections_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_flatten_sections_TM_lib_internal* pContext = (outC_C_P005_flatten_sections_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1696:
			if (nSize != 1)
				break;
			return &((*pContext)._1_Context_2[pIteratorFilter[0]]);
		case 1697:
			if (nSize != 1)
				break;
			return &((*pContext).Context_2[pIteratorFilter[0]]);
		case 1698:
			return &((*pContext)._L76);
		case 1699:
			return &((*pContext)._L75);
		case 1700:
			return &((*pContext)._L74);
		case 1701:
			return &((*pContext)._L78);
		case 1702:
			return &((*pContext)._L80);
		case 1703:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1704, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1705, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 1706, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 1707, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1708, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 1709, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_P005_OBU_sectionlist_array_T_TM_Utils, 1710, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 1711, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L154", &_SCSIM_kcg_int_Utils, 1712, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "flat", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1713, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_fs_flatten_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_fs_flatten_array_TM_lib_internal* pContext = (outC_C_P005_fs_flatten_array_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1704:
			return &((*pContext)._L1);
		case 1705:
			return &((*pContext)._L3);
		case 1706:
			return &((*pContext)._L5);
		case 1707:
			return &((*pContext)._L6);
		case 1708:
			return &((*pContext)._L7);
		case 1709:
			return &((*pContext)._L8);
		case 1710:
			return &((*pContext)._L2);
		case 1711:
			return &((*pContext)._L10);
		case 1712:
			return &((*pContext)._L154);
		case 1713:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_section_int_T_TM_Utils, 1714, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array_int_7_Utils, 1715, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 1716, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 1717, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 1718, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 1719, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 1720, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 1721, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1722, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "section_arrays", &_SCSIM_P005_section_array_T_TM_Utils, 1723, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_fs_struct_to_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_fs_struct_to_array_TM_lib_internal* pContext = (outC_C_P005_fs_struct_to_array_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1714:
			return &((*pContext)._L1);
		case 1715:
			return &((*pContext)._L2);
		case 1716:
			return &((*pContext)._L9);
		case 1717:
			return &((*pContext)._L8);
		case 1718:
			return &((*pContext)._L7);
		case 1719:
			return &((*pContext)._L6);
		case 1720:
			return &((*pContext)._L5);
		case 1721:
			return &((*pContext)._L4);
		case 1722:
			return &((*pContext)._L3);
		case 1723:
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