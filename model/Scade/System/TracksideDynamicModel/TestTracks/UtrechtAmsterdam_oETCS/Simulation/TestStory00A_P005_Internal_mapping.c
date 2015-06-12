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
	_SCSIM_Mapping_CASTLIB_BaliseHeaders_TM_conversions("TM_conversions::CASTLIB_BaliseHeaders", "1", 13, 0, 0);
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
	_SCSIM_Mapping_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A", "1", 28, 0, 0);
	_SCSIM_Mapping_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367", "1", 29, 0, 0);
	_SCSIM_Mapping_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368", "1", 30, 0, 0);
	_SCSIM_Mapping_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366", "1", 31, 0, 0);
	_SCSIM_Mapping_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369", "1", 32, 0, 0);
	_SCSIM_Mapping_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365", "1", 33, 0, 0);
	_SCSIM_Mapping_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341", "1", 34, 0, 0);
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
 ** TM_conversions::CASTLIB_BaliseHeaders/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CASTLIB_BaliseHeaders_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CASTLIB_BaliseHeaders_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_CAST_Int_to_Q_UPDOWN_TM_conversions("TM_conversions::CAST_Int_to_Q_UPDOWN", "1", 45, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_M_VERSION_TM_conversions("TM_conversions::CAST_Int_to_M_VERSION", "1", 46, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_MEDIA_TM_conversions("TM_conversions::CAST_Int_to_Q_MEDIA", "1", 47, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_N_PIG_TM_conversions("TM_conversions::CAST_Int_to_N_PIG", "1", 48, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_N_TOTAL_TM_conversions("TM_conversions::CAST_Int_to_N_TOTAL", "1", 49, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_M_DUP_TM_conversions("TM_conversions::CAST_Int_to_M_DUP", "1", 50, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_M_MCOUNT_TM_conversions("TM_conversions::CAST_Int_to_M_MCOUNT", "1", 51, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_NID_C_TM_conversions("TM_conversions::CAST_Int_to_NID_C", "1", 52, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_NID_BG_TM_conversions("TM_conversions::CAST_Int_to_NID_BG", "1", 53, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_LINK_TM_conversions("TM_conversions::CAST_Int_to_Q_LINK", "1", 54, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 60, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 61, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_TelegramHeader_T_BG_Types_Pkg_Utils, 66, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_Q_UPDOWN_Utils, 67, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_M_VERSION_Utils, 68, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_Q_MEDIA_Utils, 69, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_N_PIG_Utils, 70, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_N_TOTAL_Utils, 71, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_M_DUP_Utils, 72, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_M_MCOUNT_Utils, 73, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_NID_C_Utils, 74, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_NID_BG_Utils, 75, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_Q_LINK_Utils, 76, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Out", &_SCSIM_TelegramHeader_T_BG_Types_Pkg_Utils, 77, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CASTLIB_BaliseHeaders_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CASTLIB_BaliseHeaders_TM_conversions* pContext = (outC_CASTLIB_BaliseHeaders_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 45:
			return &((*pContext)._9_Context_1);
		case 46:
			return &((*pContext)._8_Context_1);
		case 47:
			return &((*pContext)._7_Context_1);
		case 48:
			return &((*pContext)._6_Context_1);
		case 49:
			return &((*pContext)._5_Context_1);
		case 50:
			return &((*pContext)._4_Context_1);
		case 51:
			return &((*pContext)._3_Context_1);
		case 52:
			return &((*pContext)._2_Context_1);
		case 53:
			return &((*pContext)._1_Context_1);
		case 54:
			return &((*pContext).Context_1);
		case 55:
			return &((*pContext)._L1);
		case 56:
			return &((*pContext)._L11);
		case 57:
			return &((*pContext)._L10);
		case 58:
			return &((*pContext)._L9);
		case 59:
			return &((*pContext)._L8);
		case 60:
			return &((*pContext)._L7);
		case 61:
			return &((*pContext)._L6);
		case 62:
			return &((*pContext)._L5);
		case 63:
			return &((*pContext)._L4);
		case 64:
			return &((*pContext)._L3);
		case 65:
			return &((*pContext)._L2);
		case 66:
			return &((*pContext)._L22);
		case 67:
			return &((*pContext)._L23);
		case 68:
			return &((*pContext)._L24);
		case 69:
			return &((*pContext)._L25);
		case 70:
			return &((*pContext)._L26);
		case 71:
			return &((*pContext)._L27);
		case 72:
			return &((*pContext)._L28);
		case 73:
			return &((*pContext)._L29);
		case 74:
			return &((*pContext)._L30);
		case 75:
			return &((*pContext)._L31);
		case 76:
			return &((*pContext)._L32);
		case 77:
			return &((*pContext).Out);
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
	_SCSIM_Mapping_RECV_ReadPackets_TM_lib_internal("TM_lib_internal::RECV_ReadPackets", "1", 78, 0, 0);
	_SCSIM_Mapping_C_P005_compr_onboard_TM_conversions("TM_conversions::C_P005_compr_onboard", "3", 79, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_int_500_Utils, 80, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 81, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 82, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L166", &_SCSIM_P005_OBU_T_TM_Utils, 83, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "P005_OBU_out", &_SCSIM_P005_OBU_T_TM_Utils, 84, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Read_P005_TM_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Read_P005_TM* pContext = (outC_Read_P005_TM*)pInstance;
	switch (nHandleIdent) {
		case 78:
			return &((*pContext).Context_1);
		case 79:
			return &((*pContext).Context_3);
		case 80:
			return &((*pContext)._L5);
		case 81:
			return &((*pContext)._L6);
		case 82:
			return &((*pContext)._L30);
		case 83:
			return &((*pContext)._L166);
		case 84:
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
	_SCSIM_Mapping_C_P005_LinkedBGs_TM_conversions("TM_conversions::C_P005_LinkedBGs", "1", 85, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_NID_LRBG_Utils, 86, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_P005_OBU_T_TM_Utils, 87, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_array__5292_Utils, 88, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_P005_OBU_sectionlist_enum_T_TM_Utils, 89, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_N_ITER_Utils, 90, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_Q_SCALE_Utils, 91, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_L_PACKET_Utils, 92, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_Q_DIR_Utils, 93, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 94, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_array__5463_Utils, 95, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_array__5466_Utils, 96, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_array__5469_Utils, 97, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_array_int_4_Utils, 98, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LinkedBGsOUT", &_SCSIM_LinkedBGs_T_BG_Types_Pkg_Utils, 99, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_ForCalcTrainPos_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_ForCalcTrainPos_TM_conversions* pContext = (outC_C_P005_ForCalcTrainPos_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 85:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 86:
			return &((*pContext)._L1);
		case 87:
			return &((*pContext)._L2);
		case 88:
			return &((*pContext)._L4);
		case 89:
			return &((*pContext)._L11);
		case 90:
			return &((*pContext)._L10);
		case 91:
			return &((*pContext)._L9);
		case 92:
			return &((*pContext)._L8);
		case 93:
			return &((*pContext)._L7);
		case 94:
			return &((*pContext)._L6);
		case 95:
			return &((*pContext)._L18);
		case 96:
			return &((*pContext)._L20);
		case 97:
			return &((*pContext)._L21);
		case 98:
			return &((*pContext)._L22);
		case 99:
			return &((*pContext).LinkedBGsOUT);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1_00A", "1", 100, 0, 0);
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 101, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 102, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 103, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 104, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 105, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 106, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 107, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 108, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 109, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 110, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 111, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 112, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 113, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 114, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 115, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 116, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 117, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 118, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 119, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 120, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 121, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 122, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 123, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 124, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 125, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 126, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 127, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 128, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 129, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 130, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 131, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 132, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 133, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 134, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 135, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 136, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 137, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 138, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 139, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 140, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 141, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 142, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Balise_Group_Init_InfraLib("InfraLib::Balise_Group_Init", "1", 143, 0, 0);
	_SCSIM_Mapping_Balise_Group_Close_InfraLib("InfraLib::Balise_Group_Close", "1", 144, 0, 0);
	_SCSIM_Mapping_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_0_00A", "1", 145, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataIn", &_SCSIM_B_data_internal_T_InfraLib_Utils, 146, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataOut", &_SCSIM_B_data_internal_T_InfraLib_Utils, 147, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 148, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_B_data_internal_T_InfraLib_Utils, 149, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_B_data_internal_T_InfraLib_Utils, 150, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 151, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 152, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_B_data_internal_T_InfraLib_Utils, 153, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_B_data_internal_T_InfraLib_Utils, 154, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_B_data_internal_T_InfraLib_Utils, 155, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_B_data_internal_T_InfraLib_Utils, 156, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedBaliseMessage_TM_Utils, 157, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 158, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_B_data_internal_T_InfraLib_Utils, 159, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseGroupData_TM_Utils, 160, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 161, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 162, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 163, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 164, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 165, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 166, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 167, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 168, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_B_data_internal_T_InfraLib_Utils, 169, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_real_Utils, 170, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_CompressedBaliseMessage_TM_Utils, 171, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_CompressedBaliseMessage_TM_Utils, 172, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 100:
			return &((*pContext)._2_Context_1);
		case 101:
			return &((*pContext).B_data_out_1);
		case 102:
			return &((*pContext).B_data_in_1);
		case 103:
			return &((*pContext).Header_1);
		case 104:
			return &((*pContext).PIG_nom_1);
		case 105:
			return &((*pContext)._L1_1);
		case 106:
			return &((*pContext)._L2_1);
		case 107:
			return &((*pContext)._L3_1);
		case 108:
			return &((*pContext).B_data_out_2);
		case 109:
			return &((*pContext).B_data_in_2);
		case 110:
			return &((*pContext).Header_2);
		case 111:
			return &((*pContext).PIG_nom_2);
		case 112:
			return &((*pContext)._L1_2);
		case 113:
			return &((*pContext)._L2_2);
		case 114:
			return &((*pContext)._L3_2);
		case 115:
			return &((*pContext).B_data_out_3);
		case 116:
			return &((*pContext).B_data_in_3);
		case 117:
			return &((*pContext).Header_3);
		case 118:
			return &((*pContext).PIG_nom_3);
		case 119:
			return &((*pContext)._L1_3);
		case 120:
			return &((*pContext)._L2_3);
		case 121:
			return &((*pContext)._L3_3);
		case 122:
			return &((*pContext).B_data_out_4);
		case 123:
			return &((*pContext).B_data_in_4);
		case 124:
			return &((*pContext).Header_4);
		case 125:
			return &((*pContext).PIG_nom_4);
		case 126:
			return &((*pContext)._L1_4);
		case 127:
			return &((*pContext)._L2_4);
		case 128:
			return &((*pContext)._L3_4);
		case 129:
			return &((*pContext).B_data_out_5);
		case 130:
			return &((*pContext).B_data_in_5);
		case 131:
			return &((*pContext).Header_5);
		case 132:
			return &((*pContext).PIG_nom_5);
		case 133:
			return &((*pContext)._L1_5);
		case 134:
			return &((*pContext)._L2_5);
		case 135:
			return &((*pContext)._L3_5);
		case 136:
			return &((*pContext).B_data_out_6);
		case 137:
			return &((*pContext).B_data_in_6);
		case 138:
			return &((*pContext).Header_6);
		case 139:
			return &((*pContext).PIG_nom_6);
		case 140:
			return &((*pContext)._L1_6);
		case 141:
			return &((*pContext)._L2_6);
		case 142:
			return &((*pContext)._L3_6);
		case 143:
			return &((*pContext).Context_1);
		case 144:
			return &((*pContext)._3_Context_1);
		case 145:
			return &((*pContext)._1_Context_1);
		case 146:
			return &((*pContext).BaliseDataIn);
		case 147:
			return &((*pContext).BaliseDataOut);
		case 148:
			return &((*pContext)._L1);
		case 149:
			return &((*pContext)._L2);
		case 150:
			return &((*pContext)._L3);
		case 151:
			return &((*pContext)._L4);
		case 152:
			return &((*pContext)._L5);
		case 153:
			return &((*pContext)._L6);
		case 154:
			return &((*pContext)._L7);
		case 155:
			return &((*pContext)._L9);
		case 156:
			return &((*pContext)._L11);
		case 157:
			return &((*pContext)._L13);
		case 158:
			return &((*pContext)._L14);
		case 159:
			return &((*pContext)._L16);
		case 160:
			return &((*pContext)._L19);
		case 161:
			return &((*pContext)._L20);
		case 162:
			return &((*pContext)._L21);
		case 163:
			return &((*pContext)._L22);
		case 164:
			return &((*pContext)._L23);
		case 165:
			return &((*pContext)._L24);
		case 166:
			return &((*pContext)._L25);
		case 167:
			return &((*pContext)._L26);
		case 168:
			return &((*pContext)._L27);
		case 169:
			return &((*pContext)._L8);
		case 170:
			return &((*pContext)._L28);
		case 171:
			return &((*pContext)._L29);
		case 172:
			return &((*pContext).BG_message_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_367_0", "1", 173, 0, 0);
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 174, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 175, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 176, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 177, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 178, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 179, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 180, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 181, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 182, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 183, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 184, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 185, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 186, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 187, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 188, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 189, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 190, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 191, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 192, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 193, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 194, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 195, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 196, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 197, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 198, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 199, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 200, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 201, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 202, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 203, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 204, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 205, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 206, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 207, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 208, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 209, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 210, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 211, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 212, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 213, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 214, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 215, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Balise_Group_Init_InfraLib("InfraLib::Balise_Group_Init", "1", 216, 0, 0);
	_SCSIM_Mapping_Balise_Group_Close_InfraLib("InfraLib::Balise_Group_Close", "1", 217, 0, 0);
	_SCSIM_Mapping_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_367_1", "1", 218, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataIn", &_SCSIM_B_data_internal_T_InfraLib_Utils, 219, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataOut", &_SCSIM_B_data_internal_T_InfraLib_Utils, 220, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 221, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_B_data_internal_T_InfraLib_Utils, 222, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_B_data_internal_T_InfraLib_Utils, 223, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 224, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 225, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_B_data_internal_T_InfraLib_Utils, 226, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_B_data_internal_T_InfraLib_Utils, 227, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_B_data_internal_T_InfraLib_Utils, 228, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_B_data_internal_T_InfraLib_Utils, 229, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedBaliseMessage_TM_Utils, 230, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 231, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_B_data_internal_T_InfraLib_Utils, 232, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseGroupData_TM_Utils, 233, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 234, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 235, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 236, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 237, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 238, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 239, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 240, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 241, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_B_data_internal_T_InfraLib_Utils, 242, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_real_Utils, 243, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_CompressedBaliseMessage_TM_Utils, 244, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_CompressedBaliseMessage_TM_Utils, 245, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 173:
			return &((*pContext)._2_Context_1);
		case 174:
			return &((*pContext).B_data_out_1);
		case 175:
			return &((*pContext).B_data_in_1);
		case 176:
			return &((*pContext).Header_1);
		case 177:
			return &((*pContext).PIG_nom_1);
		case 178:
			return &((*pContext)._L1_1);
		case 179:
			return &((*pContext)._L2_1);
		case 180:
			return &((*pContext)._L3_1);
		case 181:
			return &((*pContext).B_data_out_2);
		case 182:
			return &((*pContext).B_data_in_2);
		case 183:
			return &((*pContext).Header_2);
		case 184:
			return &((*pContext).PIG_nom_2);
		case 185:
			return &((*pContext)._L1_2);
		case 186:
			return &((*pContext)._L2_2);
		case 187:
			return &((*pContext)._L3_2);
		case 188:
			return &((*pContext).B_data_out_3);
		case 189:
			return &((*pContext).B_data_in_3);
		case 190:
			return &((*pContext).Header_3);
		case 191:
			return &((*pContext).PIG_nom_3);
		case 192:
			return &((*pContext)._L1_3);
		case 193:
			return &((*pContext)._L2_3);
		case 194:
			return &((*pContext)._L3_3);
		case 195:
			return &((*pContext).B_data_out_4);
		case 196:
			return &((*pContext).B_data_in_4);
		case 197:
			return &((*pContext).Header_4);
		case 198:
			return &((*pContext).PIG_nom_4);
		case 199:
			return &((*pContext)._L1_4);
		case 200:
			return &((*pContext)._L2_4);
		case 201:
			return &((*pContext)._L3_4);
		case 202:
			return &((*pContext).B_data_out_5);
		case 203:
			return &((*pContext).B_data_in_5);
		case 204:
			return &((*pContext).Header_5);
		case 205:
			return &((*pContext).PIG_nom_5);
		case 206:
			return &((*pContext)._L1_5);
		case 207:
			return &((*pContext)._L2_5);
		case 208:
			return &((*pContext)._L3_5);
		case 209:
			return &((*pContext).B_data_out_6);
		case 210:
			return &((*pContext).B_data_in_6);
		case 211:
			return &((*pContext).Header_6);
		case 212:
			return &((*pContext).PIG_nom_6);
		case 213:
			return &((*pContext)._L1_6);
		case 214:
			return &((*pContext)._L2_6);
		case 215:
			return &((*pContext)._L3_6);
		case 216:
			return &((*pContext).Context_1);
		case 217:
			return &((*pContext)._3_Context_1);
		case 218:
			return &((*pContext)._1_Context_1);
		case 219:
			return &((*pContext).BaliseDataIn);
		case 220:
			return &((*pContext).BaliseDataOut);
		case 221:
			return &((*pContext)._L1);
		case 222:
			return &((*pContext)._L2);
		case 223:
			return &((*pContext)._L3);
		case 224:
			return &((*pContext)._L4);
		case 225:
			return &((*pContext)._L5);
		case 226:
			return &((*pContext)._L6);
		case 227:
			return &((*pContext)._L7);
		case 228:
			return &((*pContext)._L9);
		case 229:
			return &((*pContext)._L11);
		case 230:
			return &((*pContext)._L13);
		case 231:
			return &((*pContext)._L14);
		case 232:
			return &((*pContext)._L16);
		case 233:
			return &((*pContext)._L19);
		case 234:
			return &((*pContext)._L20);
		case 235:
			return &((*pContext)._L21);
		case 236:
			return &((*pContext)._L22);
		case 237:
			return &((*pContext)._L23);
		case 238:
			return &((*pContext)._L24);
		case 239:
			return &((*pContext)._L25);
		case 240:
			return &((*pContext)._L26);
		case 241:
			return &((*pContext)._L27);
		case 242:
			return &((*pContext)._L8);
		case 243:
			return &((*pContext)._L28);
		case 244:
			return &((*pContext)._L29);
		case 245:
			return &((*pContext).BG_message_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_1", "1", 246, 0, 0);
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 247, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 248, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 249, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 250, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 251, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 252, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 253, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 254, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 255, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 256, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 257, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 258, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 259, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 260, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 261, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 262, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 263, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 264, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 265, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 266, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 267, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 268, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 269, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 270, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 271, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 272, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 273, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 274, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 275, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 276, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 277, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 278, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 279, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 280, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 281, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 282, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 283, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 284, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 285, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 286, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 287, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 288, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Balise_Group_Init_InfraLib("InfraLib::Balise_Group_Init", "1", 289, 0, 0);
	_SCSIM_Mapping_Balise_Group_Close_InfraLib("InfraLib::Balise_Group_Close", "1", 290, 0, 0);
	_SCSIM_Mapping_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_0", "1", 291, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataIn", &_SCSIM_B_data_internal_T_InfraLib_Utils, 292, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataOut", &_SCSIM_B_data_internal_T_InfraLib_Utils, 293, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 294, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_B_data_internal_T_InfraLib_Utils, 295, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_B_data_internal_T_InfraLib_Utils, 296, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 297, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 298, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_B_data_internal_T_InfraLib_Utils, 299, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_B_data_internal_T_InfraLib_Utils, 300, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_B_data_internal_T_InfraLib_Utils, 301, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_B_data_internal_T_InfraLib_Utils, 302, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedBaliseMessage_TM_Utils, 303, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 304, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_B_data_internal_T_InfraLib_Utils, 305, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseGroupData_TM_Utils, 306, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 307, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 308, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 309, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 310, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 311, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 312, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 313, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 314, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_B_data_internal_T_InfraLib_Utils, 315, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_real_Utils, 316, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_CompressedBaliseMessage_TM_Utils, 317, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_CompressedBaliseMessage_TM_Utils, 318, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 246:
			return &((*pContext)._2_Context_1);
		case 247:
			return &((*pContext).B_data_out_1);
		case 248:
			return &((*pContext).B_data_in_1);
		case 249:
			return &((*pContext).Header_1);
		case 250:
			return &((*pContext).PIG_nom_1);
		case 251:
			return &((*pContext)._L1_1);
		case 252:
			return &((*pContext)._L2_1);
		case 253:
			return &((*pContext)._L3_1);
		case 254:
			return &((*pContext).B_data_out_2);
		case 255:
			return &((*pContext).B_data_in_2);
		case 256:
			return &((*pContext).Header_2);
		case 257:
			return &((*pContext).PIG_nom_2);
		case 258:
			return &((*pContext)._L1_2);
		case 259:
			return &((*pContext)._L2_2);
		case 260:
			return &((*pContext)._L3_2);
		case 261:
			return &((*pContext).B_data_out_3);
		case 262:
			return &((*pContext).B_data_in_3);
		case 263:
			return &((*pContext).Header_3);
		case 264:
			return &((*pContext).PIG_nom_3);
		case 265:
			return &((*pContext)._L1_3);
		case 266:
			return &((*pContext)._L2_3);
		case 267:
			return &((*pContext)._L3_3);
		case 268:
			return &((*pContext).B_data_out_4);
		case 269:
			return &((*pContext).B_data_in_4);
		case 270:
			return &((*pContext).Header_4);
		case 271:
			return &((*pContext).PIG_nom_4);
		case 272:
			return &((*pContext)._L1_4);
		case 273:
			return &((*pContext)._L2_4);
		case 274:
			return &((*pContext)._L3_4);
		case 275:
			return &((*pContext).B_data_out_5);
		case 276:
			return &((*pContext).B_data_in_5);
		case 277:
			return &((*pContext).Header_5);
		case 278:
			return &((*pContext).PIG_nom_5);
		case 279:
			return &((*pContext)._L1_5);
		case 280:
			return &((*pContext)._L2_5);
		case 281:
			return &((*pContext)._L3_5);
		case 282:
			return &((*pContext).B_data_out_6);
		case 283:
			return &((*pContext).B_data_in_6);
		case 284:
			return &((*pContext).Header_6);
		case 285:
			return &((*pContext).PIG_nom_6);
		case 286:
			return &((*pContext)._L1_6);
		case 287:
			return &((*pContext)._L2_6);
		case 288:
			return &((*pContext)._L3_6);
		case 289:
			return &((*pContext).Context_1);
		case 290:
			return &((*pContext)._3_Context_1);
		case 291:
			return &((*pContext)._1_Context_1);
		case 292:
			return &((*pContext).BaliseDataIn);
		case 293:
			return &((*pContext).BaliseDataOut);
		case 294:
			return &((*pContext)._L1);
		case 295:
			return &((*pContext)._L2);
		case 296:
			return &((*pContext)._L3);
		case 297:
			return &((*pContext)._L4);
		case 298:
			return &((*pContext)._L5);
		case 299:
			return &((*pContext)._L6);
		case 300:
			return &((*pContext)._L7);
		case 301:
			return &((*pContext)._L9);
		case 302:
			return &((*pContext)._L11);
		case 303:
			return &((*pContext)._L13);
		case 304:
			return &((*pContext)._L14);
		case 305:
			return &((*pContext)._L16);
		case 306:
			return &((*pContext)._L19);
		case 307:
			return &((*pContext)._L20);
		case 308:
			return &((*pContext)._L21);
		case 309:
			return &((*pContext)._L22);
		case 310:
			return &((*pContext)._L23);
		case 311:
			return &((*pContext)._L24);
		case 312:
			return &((*pContext)._L25);
		case 313:
			return &((*pContext)._L26);
		case 314:
			return &((*pContext)._L27);
		case 315:
			return &((*pContext)._L8);
		case 316:
			return &((*pContext)._L28);
		case 317:
			return &((*pContext)._L29);
		case 318:
			return &((*pContext).BG_message_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_366_0", "1", 319, 0, 0);
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 320, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 321, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 322, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 323, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 324, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 325, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 326, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 327, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 328, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 329, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 330, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 331, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 332, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 333, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 334, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 335, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 336, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 337, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 338, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 339, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 340, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 341, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 342, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 343, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 344, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 345, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 346, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 347, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 348, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 349, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 350, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 351, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 352, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 353, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 354, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 355, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 356, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 357, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 358, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 359, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 360, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 361, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Balise_Group_Init_InfraLib("InfraLib::Balise_Group_Init", "1", 362, 0, 0);
	_SCSIM_Mapping_Balise_Group_Close_InfraLib("InfraLib::Balise_Group_Close", "1", 363, 0, 0);
	_SCSIM_Mapping_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_366_1", "1", 364, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataIn", &_SCSIM_B_data_internal_T_InfraLib_Utils, 365, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataOut", &_SCSIM_B_data_internal_T_InfraLib_Utils, 366, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 367, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_B_data_internal_T_InfraLib_Utils, 368, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_B_data_internal_T_InfraLib_Utils, 369, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 370, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 371, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_B_data_internal_T_InfraLib_Utils, 372, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_B_data_internal_T_InfraLib_Utils, 373, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_B_data_internal_T_InfraLib_Utils, 374, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_B_data_internal_T_InfraLib_Utils, 375, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedBaliseMessage_TM_Utils, 376, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 377, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_B_data_internal_T_InfraLib_Utils, 378, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseGroupData_TM_Utils, 379, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 380, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 381, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 382, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 383, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 384, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 385, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 386, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 387, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_B_data_internal_T_InfraLib_Utils, 388, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_real_Utils, 389, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_CompressedBaliseMessage_TM_Utils, 390, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_CompressedBaliseMessage_TM_Utils, 391, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 319:
			return &((*pContext)._2_Context_1);
		case 320:
			return &((*pContext).B_data_out_1);
		case 321:
			return &((*pContext).B_data_in_1);
		case 322:
			return &((*pContext).Header_1);
		case 323:
			return &((*pContext).PIG_nom_1);
		case 324:
			return &((*pContext)._L1_1);
		case 325:
			return &((*pContext)._L2_1);
		case 326:
			return &((*pContext)._L3_1);
		case 327:
			return &((*pContext).B_data_out_2);
		case 328:
			return &((*pContext).B_data_in_2);
		case 329:
			return &((*pContext).Header_2);
		case 330:
			return &((*pContext).PIG_nom_2);
		case 331:
			return &((*pContext)._L1_2);
		case 332:
			return &((*pContext)._L2_2);
		case 333:
			return &((*pContext)._L3_2);
		case 334:
			return &((*pContext).B_data_out_3);
		case 335:
			return &((*pContext).B_data_in_3);
		case 336:
			return &((*pContext).Header_3);
		case 337:
			return &((*pContext).PIG_nom_3);
		case 338:
			return &((*pContext)._L1_3);
		case 339:
			return &((*pContext)._L2_3);
		case 340:
			return &((*pContext)._L3_3);
		case 341:
			return &((*pContext).B_data_out_4);
		case 342:
			return &((*pContext).B_data_in_4);
		case 343:
			return &((*pContext).Header_4);
		case 344:
			return &((*pContext).PIG_nom_4);
		case 345:
			return &((*pContext)._L1_4);
		case 346:
			return &((*pContext)._L2_4);
		case 347:
			return &((*pContext)._L3_4);
		case 348:
			return &((*pContext).B_data_out_5);
		case 349:
			return &((*pContext).B_data_in_5);
		case 350:
			return &((*pContext).Header_5);
		case 351:
			return &((*pContext).PIG_nom_5);
		case 352:
			return &((*pContext)._L1_5);
		case 353:
			return &((*pContext)._L2_5);
		case 354:
			return &((*pContext)._L3_5);
		case 355:
			return &((*pContext).B_data_out_6);
		case 356:
			return &((*pContext).B_data_in_6);
		case 357:
			return &((*pContext).Header_6);
		case 358:
			return &((*pContext).PIG_nom_6);
		case 359:
			return &((*pContext)._L1_6);
		case 360:
			return &((*pContext)._L2_6);
		case 361:
			return &((*pContext)._L3_6);
		case 362:
			return &((*pContext).Context_1);
		case 363:
			return &((*pContext)._3_Context_1);
		case 364:
			return &((*pContext)._1_Context_1);
		case 365:
			return &((*pContext).BaliseDataIn);
		case 366:
			return &((*pContext).BaliseDataOut);
		case 367:
			return &((*pContext)._L1);
		case 368:
			return &((*pContext)._L2);
		case 369:
			return &((*pContext)._L3);
		case 370:
			return &((*pContext)._L4);
		case 371:
			return &((*pContext)._L5);
		case 372:
			return &((*pContext)._L6);
		case 373:
			return &((*pContext)._L7);
		case 374:
			return &((*pContext)._L9);
		case 375:
			return &((*pContext)._L11);
		case 376:
			return &((*pContext)._L13);
		case 377:
			return &((*pContext)._L14);
		case 378:
			return &((*pContext)._L16);
		case 379:
			return &((*pContext)._L19);
		case 380:
			return &((*pContext)._L20);
		case 381:
			return &((*pContext)._L21);
		case 382:
			return &((*pContext)._L22);
		case 383:
			return &((*pContext)._L23);
		case 384:
			return &((*pContext)._L24);
		case 385:
			return &((*pContext)._L25);
		case 386:
			return &((*pContext)._L26);
		case 387:
			return &((*pContext)._L27);
		case 388:
			return &((*pContext)._L8);
		case 389:
			return &((*pContext)._L28);
		case 390:
			return &((*pContext)._L29);
		case 391:
			return &((*pContext).BG_message_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_369_1", "1", 392, 0, 0);
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 393, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 394, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 395, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 396, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 397, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 398, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 399, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 400, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 401, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 402, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 403, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 404, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 405, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 406, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 407, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 408, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 409, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 410, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 411, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 412, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 413, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 414, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 415, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 416, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 417, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 418, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 419, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 420, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 421, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 422, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 423, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 424, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 425, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 426, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 427, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 428, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 429, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 430, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 431, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 432, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 433, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 434, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Balise_Group_Init_InfraLib("InfraLib::Balise_Group_Init", "1", 435, 0, 0);
	_SCSIM_Mapping_Balise_Group_Close_InfraLib("InfraLib::Balise_Group_Close", "1", 436, 0, 0);
	_SCSIM_Mapping_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_369_0", "1", 437, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataIn", &_SCSIM_B_data_internal_T_InfraLib_Utils, 438, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataOut", &_SCSIM_B_data_internal_T_InfraLib_Utils, 439, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 440, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_B_data_internal_T_InfraLib_Utils, 441, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_B_data_internal_T_InfraLib_Utils, 442, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 443, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 444, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_B_data_internal_T_InfraLib_Utils, 445, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_B_data_internal_T_InfraLib_Utils, 446, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_B_data_internal_T_InfraLib_Utils, 447, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_B_data_internal_T_InfraLib_Utils, 448, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedBaliseMessage_TM_Utils, 449, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 450, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_B_data_internal_T_InfraLib_Utils, 451, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseGroupData_TM_Utils, 452, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 453, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 454, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 455, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 456, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 457, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 458, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 459, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 460, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_B_data_internal_T_InfraLib_Utils, 461, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_real_Utils, 462, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_CompressedBaliseMessage_TM_Utils, 463, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_CompressedBaliseMessage_TM_Utils, 464, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 392:
			return &((*pContext)._2_Context_1);
		case 393:
			return &((*pContext).B_data_out_1);
		case 394:
			return &((*pContext).B_data_in_1);
		case 395:
			return &((*pContext).Header_1);
		case 396:
			return &((*pContext).PIG_nom_1);
		case 397:
			return &((*pContext)._L1_1);
		case 398:
			return &((*pContext)._L2_1);
		case 399:
			return &((*pContext)._L3_1);
		case 400:
			return &((*pContext).B_data_out_2);
		case 401:
			return &((*pContext).B_data_in_2);
		case 402:
			return &((*pContext).Header_2);
		case 403:
			return &((*pContext).PIG_nom_2);
		case 404:
			return &((*pContext)._L1_2);
		case 405:
			return &((*pContext)._L2_2);
		case 406:
			return &((*pContext)._L3_2);
		case 407:
			return &((*pContext).B_data_out_3);
		case 408:
			return &((*pContext).B_data_in_3);
		case 409:
			return &((*pContext).Header_3);
		case 410:
			return &((*pContext).PIG_nom_3);
		case 411:
			return &((*pContext)._L1_3);
		case 412:
			return &((*pContext)._L2_3);
		case 413:
			return &((*pContext)._L3_3);
		case 414:
			return &((*pContext).B_data_out_4);
		case 415:
			return &((*pContext).B_data_in_4);
		case 416:
			return &((*pContext).Header_4);
		case 417:
			return &((*pContext).PIG_nom_4);
		case 418:
			return &((*pContext)._L1_4);
		case 419:
			return &((*pContext)._L2_4);
		case 420:
			return &((*pContext)._L3_4);
		case 421:
			return &((*pContext).B_data_out_5);
		case 422:
			return &((*pContext).B_data_in_5);
		case 423:
			return &((*pContext).Header_5);
		case 424:
			return &((*pContext).PIG_nom_5);
		case 425:
			return &((*pContext)._L1_5);
		case 426:
			return &((*pContext)._L2_5);
		case 427:
			return &((*pContext)._L3_5);
		case 428:
			return &((*pContext).B_data_out_6);
		case 429:
			return &((*pContext).B_data_in_6);
		case 430:
			return &((*pContext).Header_6);
		case 431:
			return &((*pContext).PIG_nom_6);
		case 432:
			return &((*pContext)._L1_6);
		case 433:
			return &((*pContext)._L2_6);
		case 434:
			return &((*pContext)._L3_6);
		case 435:
			return &((*pContext).Context_1);
		case 436:
			return &((*pContext)._3_Context_1);
		case 437:
			return &((*pContext)._1_Context_1);
		case 438:
			return &((*pContext).BaliseDataIn);
		case 439:
			return &((*pContext).BaliseDataOut);
		case 440:
			return &((*pContext)._L1);
		case 441:
			return &((*pContext)._L2);
		case 442:
			return &((*pContext)._L3);
		case 443:
			return &((*pContext)._L4);
		case 444:
			return &((*pContext)._L5);
		case 445:
			return &((*pContext)._L6);
		case 446:
			return &((*pContext)._L7);
		case 447:
			return &((*pContext)._L9);
		case 448:
			return &((*pContext)._L11);
		case 449:
			return &((*pContext)._L13);
		case 450:
			return &((*pContext)._L14);
		case 451:
			return &((*pContext)._L16);
		case 452:
			return &((*pContext)._L19);
		case 453:
			return &((*pContext)._L20);
		case 454:
			return &((*pContext)._L21);
		case 455:
			return &((*pContext)._L22);
		case 456:
			return &((*pContext)._L23);
		case 457:
			return &((*pContext)._L24);
		case 458:
			return &((*pContext)._L25);
		case 459:
			return &((*pContext)._L26);
		case 460:
			return &((*pContext)._L27);
		case 461:
			return &((*pContext)._L8);
		case 462:
			return &((*pContext)._L28);
		case 463:
			return &((*pContext)._L29);
		case 464:
			return &((*pContext).BG_message_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_365_0", "1", 465, 0, 0);
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 466, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 467, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 468, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 469, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 470, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 471, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 472, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 473, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 474, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 475, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 476, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 477, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 478, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 479, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 480, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 481, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 482, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 483, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 484, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 485, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 486, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 487, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 488, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 489, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 490, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 491, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 492, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 493, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 494, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 495, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 496, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 497, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 498, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 499, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 500, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 501, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 502, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 503, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 504, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 505, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 506, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 507, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Balise_Group_Init_InfraLib("InfraLib::Balise_Group_Init", "1", 508, 0, 0);
	_SCSIM_Mapping_Balise_Group_Close_InfraLib("InfraLib::Balise_Group_Close", "1", 509, 0, 0);
	_SCSIM_Mapping_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_365_1", "1", 510, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataIn", &_SCSIM_B_data_internal_T_InfraLib_Utils, 511, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataOut", &_SCSIM_B_data_internal_T_InfraLib_Utils, 512, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 513, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_B_data_internal_T_InfraLib_Utils, 514, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_B_data_internal_T_InfraLib_Utils, 515, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 516, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 517, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_B_data_internal_T_InfraLib_Utils, 518, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_B_data_internal_T_InfraLib_Utils, 519, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_B_data_internal_T_InfraLib_Utils, 520, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_B_data_internal_T_InfraLib_Utils, 521, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedBaliseMessage_TM_Utils, 522, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 523, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_B_data_internal_T_InfraLib_Utils, 524, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseGroupData_TM_Utils, 525, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 526, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 527, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 528, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 529, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 530, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 531, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 532, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 533, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_B_data_internal_T_InfraLib_Utils, 534, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_real_Utils, 535, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_CompressedBaliseMessage_TM_Utils, 536, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_CompressedBaliseMessage_TM_Utils, 537, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 465:
			return &((*pContext)._2_Context_1);
		case 466:
			return &((*pContext).B_data_out_1);
		case 467:
			return &((*pContext).B_data_in_1);
		case 468:
			return &((*pContext).Header_1);
		case 469:
			return &((*pContext).PIG_nom_1);
		case 470:
			return &((*pContext)._L1_1);
		case 471:
			return &((*pContext)._L2_1);
		case 472:
			return &((*pContext)._L3_1);
		case 473:
			return &((*pContext).B_data_out_2);
		case 474:
			return &((*pContext).B_data_in_2);
		case 475:
			return &((*pContext).Header_2);
		case 476:
			return &((*pContext).PIG_nom_2);
		case 477:
			return &((*pContext)._L1_2);
		case 478:
			return &((*pContext)._L2_2);
		case 479:
			return &((*pContext)._L3_2);
		case 480:
			return &((*pContext).B_data_out_3);
		case 481:
			return &((*pContext).B_data_in_3);
		case 482:
			return &((*pContext).Header_3);
		case 483:
			return &((*pContext).PIG_nom_3);
		case 484:
			return &((*pContext)._L1_3);
		case 485:
			return &((*pContext)._L2_3);
		case 486:
			return &((*pContext)._L3_3);
		case 487:
			return &((*pContext).B_data_out_4);
		case 488:
			return &((*pContext).B_data_in_4);
		case 489:
			return &((*pContext).Header_4);
		case 490:
			return &((*pContext).PIG_nom_4);
		case 491:
			return &((*pContext)._L1_4);
		case 492:
			return &((*pContext)._L2_4);
		case 493:
			return &((*pContext)._L3_4);
		case 494:
			return &((*pContext).B_data_out_5);
		case 495:
			return &((*pContext).B_data_in_5);
		case 496:
			return &((*pContext).Header_5);
		case 497:
			return &((*pContext).PIG_nom_5);
		case 498:
			return &((*pContext)._L1_5);
		case 499:
			return &((*pContext)._L2_5);
		case 500:
			return &((*pContext)._L3_5);
		case 501:
			return &((*pContext).B_data_out_6);
		case 502:
			return &((*pContext).B_data_in_6);
		case 503:
			return &((*pContext).Header_6);
		case 504:
			return &((*pContext).PIG_nom_6);
		case 505:
			return &((*pContext)._L1_6);
		case 506:
			return &((*pContext)._L2_6);
		case 507:
			return &((*pContext)._L3_6);
		case 508:
			return &((*pContext).Context_1);
		case 509:
			return &((*pContext)._3_Context_1);
		case 510:
			return &((*pContext)._1_Context_1);
		case 511:
			return &((*pContext).BaliseDataIn);
		case 512:
			return &((*pContext).BaliseDataOut);
		case 513:
			return &((*pContext)._L1);
		case 514:
			return &((*pContext)._L2);
		case 515:
			return &((*pContext)._L3);
		case 516:
			return &((*pContext)._L4);
		case 517:
			return &((*pContext)._L5);
		case 518:
			return &((*pContext)._L6);
		case 519:
			return &((*pContext)._L7);
		case 520:
			return &((*pContext)._L9);
		case 521:
			return &((*pContext)._L11);
		case 522:
			return &((*pContext)._L13);
		case 523:
			return &((*pContext)._L14);
		case 524:
			return &((*pContext)._L16);
		case 525:
			return &((*pContext)._L19);
		case 526:
			return &((*pContext)._L20);
		case 527:
			return &((*pContext)._L21);
		case 528:
			return &((*pContext)._L22);
		case 529:
			return &((*pContext)._L23);
		case 530:
			return &((*pContext)._L24);
		case 531:
			return &((*pContext)._L25);
		case 532:
			return &((*pContext)._L26);
		case 533:
			return &((*pContext)._L27);
		case 534:
			return &((*pContext)._L8);
		case 535:
			return &((*pContext)._L28);
		case 536:
			return &((*pContext)._L29);
		case 537:
			return &((*pContext).BG_message_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_341_0", "1", 538, 0, 0);
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 539, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 540, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 541, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 542, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 543, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 544, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 545, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 546, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 547, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 548, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 549, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 550, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 551, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 552, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 553, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 554, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 555, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 556, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 557, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 558, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 559, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 560, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 561, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 562, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 563, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 564, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 565, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 566, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 567, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 568, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 569, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 570, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 571, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 572, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 573, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Balise", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 574, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_T_InfraLib_Utils, 575, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 576, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 577, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 578, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 579, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 580, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Balise_Group_Init_InfraLib("InfraLib::Balise_Group_Init", "1", 581, 0, 0);
	_SCSIM_Mapping_Balise_Group_Close_InfraLib("InfraLib::Balise_Group_Close", "1", 582, 0, 0);
	_SCSIM_Mapping_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_341_1", "1", 583, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataIn", &_SCSIM_B_data_internal_T_InfraLib_Utils, 584, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataOut", &_SCSIM_B_data_internal_T_InfraLib_Utils, 585, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_T_InfraLib_Utils, 586, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_B_data_internal_T_InfraLib_Utils, 587, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_B_data_internal_T_InfraLib_Utils, 588, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 589, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 590, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_B_data_internal_T_InfraLib_Utils, 591, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_B_data_internal_T_InfraLib_Utils, 592, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_B_data_internal_T_InfraLib_Utils, 593, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_B_data_internal_T_InfraLib_Utils, 594, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedBaliseMessage_TM_Utils, 595, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 596, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_B_data_internal_T_InfraLib_Utils, 597, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseGroupData_TM_Utils, 598, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 599, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 600, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 601, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 602, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 603, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 604, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 605, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 606, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_B_data_internal_T_InfraLib_Utils, 607, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_real_Utils, 608, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_CompressedBaliseMessage_TM_Utils, 609, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_CompressedBaliseMessage_TM_Utils, 610, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 538:
			return &((*pContext)._2_Context_1);
		case 539:
			return &((*pContext).B_data_out_1);
		case 540:
			return &((*pContext).B_data_in_1);
		case 541:
			return &((*pContext).Header_1);
		case 542:
			return &((*pContext).PIG_nom_1);
		case 543:
			return &((*pContext)._L1_1);
		case 544:
			return &((*pContext)._L2_1);
		case 545:
			return &((*pContext)._L3_1);
		case 546:
			return &((*pContext).B_data_out_2);
		case 547:
			return &((*pContext).B_data_in_2);
		case 548:
			return &((*pContext).Header_2);
		case 549:
			return &((*pContext).PIG_nom_2);
		case 550:
			return &((*pContext)._L1_2);
		case 551:
			return &((*pContext)._L2_2);
		case 552:
			return &((*pContext)._L3_2);
		case 553:
			return &((*pContext).B_data_out_3);
		case 554:
			return &((*pContext).B_data_in_3);
		case 555:
			return &((*pContext).Header_3);
		case 556:
			return &((*pContext).PIG_nom_3);
		case 557:
			return &((*pContext)._L1_3);
		case 558:
			return &((*pContext)._L2_3);
		case 559:
			return &((*pContext)._L3_3);
		case 560:
			return &((*pContext).B_data_out_4);
		case 561:
			return &((*pContext).B_data_in_4);
		case 562:
			return &((*pContext).Header_4);
		case 563:
			return &((*pContext).PIG_nom_4);
		case 564:
			return &((*pContext)._L1_4);
		case 565:
			return &((*pContext)._L2_4);
		case 566:
			return &((*pContext)._L3_4);
		case 567:
			return &((*pContext).B_data_out_5);
		case 568:
			return &((*pContext).B_data_in_5);
		case 569:
			return &((*pContext).Header_5);
		case 570:
			return &((*pContext).PIG_nom_5);
		case 571:
			return &((*pContext)._L1_5);
		case 572:
			return &((*pContext)._L2_5);
		case 573:
			return &((*pContext)._L3_5);
		case 574:
			return &((*pContext).B_data_out_6);
		case 575:
			return &((*pContext).B_data_in_6);
		case 576:
			return &((*pContext).Header_6);
		case 577:
			return &((*pContext).PIG_nom_6);
		case 578:
			return &((*pContext)._L1_6);
		case 579:
			return &((*pContext)._L2_6);
		case 580:
			return &((*pContext)._L3_6);
		case 581:
			return &((*pContext).Context_1);
		case 582:
			return &((*pContext)._3_Context_1);
		case 583:
			return &((*pContext)._1_Context_1);
		case 584:
			return &((*pContext).BaliseDataIn);
		case 585:
			return &((*pContext).BaliseDataOut);
		case 586:
			return &((*pContext)._L1);
		case 587:
			return &((*pContext)._L2);
		case 588:
			return &((*pContext)._L3);
		case 589:
			return &((*pContext)._L4);
		case 590:
			return &((*pContext)._L5);
		case 591:
			return &((*pContext)._L6);
		case 592:
			return &((*pContext)._L7);
		case 593:
			return &((*pContext)._L9);
		case 594:
			return &((*pContext)._L11);
		case 595:
			return &((*pContext)._L13);
		case 596:
			return &((*pContext)._L14);
		case 597:
			return &((*pContext)._L16);
		case 598:
			return &((*pContext)._L19);
		case 599:
			return &((*pContext)._L20);
		case 600:
			return &((*pContext)._L21);
		case 601:
			return &((*pContext)._L22);
		case 602:
			return &((*pContext)._L23);
		case 603:
			return &((*pContext)._L24);
		case 604:
			return &((*pContext)._L25);
		case 605:
			return &((*pContext)._L26);
		case 606:
			return &((*pContext)._L27);
		case 607:
			return &((*pContext)._L8);
		case 608:
			return &((*pContext)._L28);
		case 609:
			return &((*pContext)._L29);
		case 610:
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
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_611_Utils, 611);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_612_Utils, 612);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 613, valid, 612, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_UPDOWN_Utils, 614, valid, 612, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_615_Utils, 615);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_UPDOWN_Utils, 616, valid, 615, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 617, valid, 615, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_618_Utils, 618);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_UPDOWN_Utils, 619, valid, 618, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 620, valid, 618, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 621, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_updown_in", &_SCSIM_kcg_int_Utils, 622, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 623, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 624, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_updown", &_SCSIM_Q_UPDOWN_Utils, 625, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_UPDOWN_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_UPDOWN_TM_conversions* pContext = (outC_CAST_Int_to_Q_UPDOWN_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 611:
			return &((*pContext).IfBlock1_clock);
		case 612:
			return &((*pContext).else_clock_IfBlock1);
		case 613:
			return &((*pContext)._L2_IfBlock1);
		case 614:
			return &((*pContext)._L1_IfBlock1);
		case 615:
			return &((*pContext).else_clock_IfBlock1);
		case 616:
			return &((*pContext)._L3_IfBlock1);
		case 617:
			return &((*pContext)._L51_IfBlock1);
		case 618:
			return &((*pContext).IfBlock1_clock);
		case 619:
			return &((*pContext)._L4_IfBlock1);
		case 620:
			return &((*pContext)._L5_IfBlock1);
		case 621:
			return &((*pContext).error);
		case 622:
			return &((*pContext).q_updown_in);
		case 623:
			return &((*pContext)._L13);
		case 624:
			return &((*pContext)._L12);
		case 625:
			return &((*pContext).q_updown);
		default:
			break;
	}
	return 0;
}

static int Is612Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_612_Utils = {Is612Active};

static int Is615Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_615_Utils = {Is615Active};

static int Is611Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_611_Utils = {Is611Active};

static int Is618Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_618_Utils = {Is618Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_M_VERSION/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_M_VERSION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_M_VERSION_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_626_Utils, 626);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_627_Utils, 627);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_628_Utils, 628);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_629_Utils, 629);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_M_VERSION_Utils, 630, valid, 629, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 631, valid, 629, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_632_Utils, 632);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_M_VERSION_Utils, 633, valid, 632, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 634, valid, 632, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_635_Utils, 635);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_M_VERSION_Utils, 636, valid, 635, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 637, valid, 635, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_638_Utils, 638);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_M_VERSION_Utils, 639, valid, 638, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 640, valid, 638, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_641_Utils, 641);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_M_VERSION_Utils, 642, valid, 641, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 643, valid, 641, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "m_version_in", &_SCSIM_kcg_int_Utils, 644, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 645, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 646, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 647, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "m_version", &_SCSIM_M_VERSION_Utils, 648, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_M_VERSION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_M_VERSION_TM_conversions* pContext = (outC_CAST_Int_to_M_VERSION_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 626:
			return &((*pContext).IfBlock1_clock);
		case 627:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 628:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 629:
			return &((*pContext).else_clock_IfBlock1);
		case 630:
			return &((*pContext)._L27_IfBlock1);
		case 631:
			return &((*pContext)._L1_IfBlock1);
		case 632:
			return &((*pContext).else_clock_IfBlock1);
		case 633:
			return &((*pContext)._L26_IfBlock1);
		case 634:
			return &((*pContext)._L45_IfBlock1);
		case 635:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 636:
			return &((*pContext)._L2_IfBlock1);
		case 637:
			return &((*pContext)._L44_IfBlock1);
		case 638:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 639:
			return &((*pContext)._L3_IfBlock1);
		case 640:
			return &((*pContext)._L53_IfBlock1);
		case 641:
			return &((*pContext).IfBlock1_clock);
		case 642:
			return &((*pContext)._L4_IfBlock1);
		case 643:
			return &((*pContext)._L5_IfBlock1);
		case 644:
			return &((*pContext).m_version_in);
		case 645:
			return &((*pContext).error);
		case 646:
			return &((*pContext)._L4);
		case 647:
			return &((*pContext)._L5);
		case 648:
			return &((*pContext).m_version);
		default:
			break;
	}
	return 0;
}

static int Is629Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_629_Utils = {Is629Active};

static int Is632Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_632_Utils = {Is632Active};

static int Is628Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_628_Utils = {Is628Active};

static int Is635Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_635_Utils = {Is635Active};

static int Is627Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_627_Utils = {Is627Active};

static int Is638Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_638_Utils = {Is638Active};

static int Is626Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_626_Utils = {Is626Active};

static int Is641Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_641_Utils = {Is641Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_MEDIA/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_MEDIA_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_MEDIA_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_649_Utils, 649);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_650_Utils, 650);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 651, valid, 650, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_MEDIA_Utils, 652, valid, 650, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_653_Utils, 653);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_MEDIA_Utils, 654, valid, 653, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 655, valid, 653, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_656_Utils, 656);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_MEDIA_Utils, 657, valid, 656, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 658, valid, 656, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 659, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_media_in", &_SCSIM_kcg_int_Utils, 660, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 661, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 662, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_media", &_SCSIM_Q_MEDIA_Utils, 663, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_MEDIA_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_MEDIA_TM_conversions* pContext = (outC_CAST_Int_to_Q_MEDIA_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 649:
			return &((*pContext).IfBlock1_clock);
		case 650:
			return &((*pContext).else_clock_IfBlock1);
		case 651:
			return &((*pContext)._L2_IfBlock1);
		case 652:
			return &((*pContext)._L1_IfBlock1);
		case 653:
			return &((*pContext).else_clock_IfBlock1);
		case 654:
			return &((*pContext)._L3_IfBlock1);
		case 655:
			return &((*pContext)._L51_IfBlock1);
		case 656:
			return &((*pContext).IfBlock1_clock);
		case 657:
			return &((*pContext)._L4_IfBlock1);
		case 658:
			return &((*pContext)._L5_IfBlock1);
		case 659:
			return &((*pContext).error);
		case 660:
			return &((*pContext).q_media_in);
		case 661:
			return &((*pContext)._L13);
		case 662:
			return &((*pContext)._L12);
		case 663:
			return &((*pContext).q_media);
		default:
			break;
	}
	return 0;
}

static int Is650Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_650_Utils = {Is650Active};

static int Is653Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_653_Utils = {Is653Active};

static int Is649Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_649_Utils = {Is649Active};

static int Is656Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_656_Utils = {Is656Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_N_PIG/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_N_PIG_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_N_PIG_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_664_Utils, 664);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_665_Utils, 665);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_666_Utils, 666);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_667_Utils, 667);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_668_Utils, 668);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_669_Utils, 669);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_670_Utils, 670);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_671_Utils, 671);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_N_PIG_Utils, 672, valid, 671, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 673, valid, 671, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_674_Utils, 674);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 675, valid, 674, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 676, valid, 674, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_677_Utils, 677);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 678, valid, 677, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 679, valid, 677, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_680_Utils, 680);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_N_PIG_Utils, 681, valid, 680, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 682, valid, 680, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_683_Utils, 683);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 684, valid, 683, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 685, valid, 683, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_686_Utils, 686);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 687, valid, 686, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 688, valid, 686, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_689_Utils, 689);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 690, valid, 689, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 691, valid, 689, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_692_Utils, 692);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_PIG_Utils, 693, valid, 692, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 694, valid, 692, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_695_Utils, 695);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_N_PIG_Utils, 696, valid, 695, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 697, valid, 695, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "n_pig_in", &_SCSIM_kcg_int_Utils, 698, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 699, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 700, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 701, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "n_pig", &_SCSIM_N_PIG_Utils, 702, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_N_PIG_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_N_PIG_TM_conversions* pContext = (outC_CAST_Int_to_N_PIG_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 664:
			return &((*pContext).IfBlock1_clock);
		case 665:
			return &((*pContext)._6_else_clock_IfBlock1);
		case 666:
			return &((*pContext)._5_else_clock_IfBlock1);
		case 667:
			return &((*pContext)._4_else_clock_IfBlock1);
		case 668:
			return &((*pContext)._3_else_clock_IfBlock1);
		case 669:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 670:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 671:
			return &((*pContext).else_clock_IfBlock1);
		case 672:
			return &((*pContext)._L220_IfBlock1);
		case 673:
			return &((*pContext)._L319_IfBlock1);
		case 674:
			return &((*pContext).else_clock_IfBlock1);
		case 675:
			return &((*pContext)._L118_IfBlock1);
		case 676:
			return &((*pContext)._L417_IfBlock1);
		case 677:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 678:
			return &((*pContext)._L116_IfBlock1);
		case 679:
			return &((*pContext)._L315_IfBlock1);
		case 680:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 681:
			return &((*pContext)._L214_IfBlock1);
		case 682:
			return &((*pContext)._L413_IfBlock1);
		case 683:
			return &((*pContext)._3_else_clock_IfBlock1);
		case 684:
			return &((*pContext)._L112_IfBlock1);
		case 685:
			return &((*pContext)._L311_IfBlock1);
		case 686:
			return &((*pContext)._4_else_clock_IfBlock1);
		case 687:
			return &((*pContext)._L110_IfBlock1);
		case 688:
			return &((*pContext)._L39_IfBlock1);
		case 689:
			return &((*pContext)._5_else_clock_IfBlock1);
		case 690:
			return &((*pContext)._L18_IfBlock1);
		case 691:
			return &((*pContext)._L4_IfBlock1);
		case 692:
			return &((*pContext)._6_else_clock_IfBlock1);
		case 693:
			return &((*pContext)._L1_IfBlock1);
		case 694:
			return &((*pContext)._L37_IfBlock1);
		case 695:
			return &((*pContext).IfBlock1_clock);
		case 696:
			return &((*pContext)._L2_IfBlock1);
		case 697:
			return &((*pContext)._L3_IfBlock1);
		case 698:
			return &((*pContext).n_pig_in);
		case 699:
			return &((*pContext).error);
		case 700:
			return &((*pContext)._L2);
		case 701:
			return &((*pContext)._L4);
		case 702:
			return &((*pContext).n_pig);
		default:
			break;
	}
	return 0;
}

static int Is671Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_671_Utils = {Is671Active};

static int Is674Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_674_Utils = {Is674Active};

static int Is670Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_670_Utils = {Is670Active};

static int Is677Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_677_Utils = {Is677Active};

static int Is669Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_669_Utils = {Is669Active};

static int Is680Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_680_Utils = {Is680Active};

static int Is668Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_668_Utils = {Is668Active};

static int Is683Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_683_Utils = {Is683Active};

static int Is667Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_667_Utils = {Is667Active};

static int Is686Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_686_Utils = {Is686Active};

static int Is666Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_666_Utils = {Is666Active};

static int Is689Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_689_Utils = {Is689Active};

static int Is665Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_665_Utils = {Is665Active};

static int Is692Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_692_Utils = {Is692Active};

static int Is664Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_664_Utils = {Is664Active};

static int Is695Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_695_Utils = {Is695Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_N_TOTAL/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_N_TOTAL_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_N_TOTAL_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_703_Utils, 703);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_704_Utils, 704);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_705_Utils, 705);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_706_Utils, 706);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_707_Utils, 707);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_708_Utils, 708);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_709_Utils, 709);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_710_Utils, 710);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_TOTAL_Utils, 711, valid, 710, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 712, valid, 710, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_713_Utils, 713);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_TOTAL_Utils, 714, valid, 713, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 715, valid, 713, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_716_Utils, 716);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_TOTAL_Utils, 717, valid, 716, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 718, valid, 716, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_719_Utils, 719);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_N_TOTAL_Utils, 720, valid, 719, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 721, valid, 719, &_SCSIM_ClockActive_kcg_true);
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_TOTAL_Utils, 729, valid, 728, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 730, valid, 728, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_731_Utils, 731);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_N_TOTAL_Utils, 732, valid, 731, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 733, valid, 731, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_734_Utils, 734);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_N_TOTAL_Utils, 735, valid, 734, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 736, valid, 734, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "n_total_in", &_SCSIM_kcg_int_Utils, 737, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 738, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 739, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 740, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "n_pig", &_SCSIM_N_TOTAL_Utils, 741, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_N_TOTAL_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_N_TOTAL_TM_conversions* pContext = (outC_CAST_Int_to_N_TOTAL_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 703:
			return &((*pContext).IfBlock1_clock);
		case 704:
			return &((*pContext)._6_else_clock_IfBlock1);
		case 705:
			return &((*pContext)._5_else_clock_IfBlock1);
		case 706:
			return &((*pContext)._4_else_clock_IfBlock1);
		case 707:
			return &((*pContext)._3_else_clock_IfBlock1);
		case 708:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 709:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 710:
			return &((*pContext).else_clock_IfBlock1);
		case 711:
			return &((*pContext)._L119_IfBlock1);
		case 712:
			return &((*pContext)._L4_IfBlock1);
		case 713:
			return &((*pContext).else_clock_IfBlock1);
		case 714:
			return &((*pContext)._L118_IfBlock1);
		case 715:
			return &((*pContext)._L317_IfBlock1);
		case 716:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 717:
			return &((*pContext)._L116_IfBlock1);
		case 718:
			return &((*pContext)._L315_IfBlock1);
		case 719:
			return &((*pContext)._2_else_clock_IfBlock1);
		case 720:
			return &((*pContext)._L214_IfBlock1);
		case 721:
			return &((*pContext)._L5_IfBlock1);
		case 722:
			return &((*pContext)._3_else_clock_IfBlock1);
		case 723:
			return &((*pContext)._L113_IfBlock1);
		case 724:
			return &((*pContext)._L312_IfBlock1);
		case 725:
			return &((*pContext)._4_else_clock_IfBlock1);
		case 726:
			return &((*pContext)._L111_IfBlock1);
		case 727:
			return &((*pContext)._L310_IfBlock1);
		case 728:
			return &((*pContext)._5_else_clock_IfBlock1);
		case 729:
			return &((*pContext)._L19_IfBlock1);
		case 730:
			return &((*pContext)._L38_IfBlock1);
		case 731:
			return &((*pContext)._6_else_clock_IfBlock1);
		case 732:
			return &((*pContext)._L1_IfBlock1);
		case 733:
			return &((*pContext)._L37_IfBlock1);
		case 734:
			return &((*pContext).IfBlock1_clock);
		case 735:
			return &((*pContext)._L2_IfBlock1);
		case 736:
			return &((*pContext)._L3_IfBlock1);
		case 737:
			return &((*pContext).n_total_in);
		case 738:
			return &((*pContext).error);
		case 739:
			return &((*pContext)._L3);
		case 740:
			return &((*pContext)._L4);
		case 741:
			return &((*pContext).n_pig);
		default:
			break;
	}
	return 0;
}

static int Is710Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_710_Utils = {Is710Active};

static int Is713Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_713_Utils = {Is713Active};

static int Is709Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_709_Utils = {Is709Active};

static int Is716Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_716_Utils = {Is716Active};

static int Is708Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_708_Utils = {Is708Active};

static int Is719Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_719_Utils = {Is719Active};

static int Is707Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_707_Utils = {Is707Active};

static int Is722Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_722_Utils = {Is722Active};

static int Is706Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_706_Utils = {Is706Active};

static int Is725Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_725_Utils = {Is725Active};

static int Is705Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_705_Utils = {Is705Active};

static int Is728Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_728_Utils = {Is728Active};

static int Is704Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_704_Utils = {Is704Active};

static int Is731Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_731_Utils = {Is731Active};

static int Is703Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_703_Utils = {Is703Active};

static int Is734Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_734_Utils = {Is734Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_M_DUP/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_M_DUP_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_M_DUP_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_742_Utils, 742);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_743_Utils, 743);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_744_Utils, 744);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 745, valid, 744, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_M_DUP_Utils, 746, valid, 744, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_747_Utils, 747);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_M_DUP_Utils, 748, valid, 747, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 749, valid, 747, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_750_Utils, 750);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_M_DUP_Utils, 751, valid, 750, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 752, valid, 750, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_753_Utils, 753);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_M_DUP_Utils, 754, valid, 753, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 755, valid, 753, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "m_dup_in", &_SCSIM_kcg_int_Utils, 756, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 757, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 758, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 759, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "m_dup", &_SCSIM_M_DUP_Utils, 760, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_M_DUP_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_M_DUP_TM_conversions* pContext = (outC_CAST_Int_to_M_DUP_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 742:
			return &((*pContext).IfBlock1_clock);
		case 743:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 744:
			return &((*pContext).else_clock_IfBlock1);
		case 745:
			return &((*pContext)._L2_IfBlock1);
		case 746:
			return &((*pContext)._L3_IfBlock1);
		case 747:
			return &((*pContext).else_clock_IfBlock1);
		case 748:
			return &((*pContext)._L4_IfBlock1);
		case 749:
			return &((*pContext)._L53_IfBlock1);
		case 750:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 751:
			return &((*pContext)._L5_IfBlock1);
		case 752:
			return &((*pContext)._L62_IfBlock1);
		case 753:
			return &((*pContext).IfBlock1_clock);
		case 754:
			return &((*pContext)._L6_IfBlock1);
		case 755:
			return &((*pContext)._L7_IfBlock1);
		case 756:
			return &((*pContext).m_dup_in);
		case 757:
			return &((*pContext).error);
		case 758:
			return &((*pContext)._L2);
		case 759:
			return &((*pContext)._L3);
		case 760:
			return &((*pContext).m_dup);
		default:
			break;
	}
	return 0;
}

static int Is744Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_744_Utils = {Is744Active};

static int Is747Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_747_Utils = {Is747Active};

static int Is743Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_743_Utils = {Is743Active};

static int Is750Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_750_Utils = {Is750Active};

static int Is742Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_742_Utils = {Is742Active};

static int Is753Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_753_Utils = {Is753Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_M_MCOUNT/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_M_MCOUNT_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_M_MCOUNT_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 761, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 762, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 763, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 764, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 765, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "m_mcount", &_SCSIM_M_MCOUNT_Utils, 766, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_M_MCOUNT_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_M_MCOUNT_TM_conversions* pContext = (outC_CAST_Int_to_M_MCOUNT_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 761:
			return &((*pContext)._L1);
		case 762:
			return &((*pContext)._L9);
		case 763:
			return &((*pContext)._L8);
		case 764:
			return &((*pContext)._L10);
		case 765:
			return &((*pContext)._L11);
		case 766:
			return &((*pContext).m_mcount);
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 767, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 768, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 769, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 770, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 771, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_c", &_SCSIM_NID_C_Utils, 772, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_NID_C_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_NID_C_TM_conversions* pContext = (outC_CAST_Int_to_NID_C_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 767:
			return &((*pContext)._L1);
		case 768:
			return &((*pContext)._L9);
		case 769:
			return &((*pContext)._L8);
		case 770:
			return &((*pContext)._L10);
		case 771:
			return &((*pContext)._L11);
		case 772:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 773, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 774, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 775, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 776, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 777, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_bg", &_SCSIM_NID_BG_Utils, 778, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_NID_BG_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_NID_BG_TM_conversions* pContext = (outC_CAST_Int_to_NID_BG_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 773:
			return &((*pContext)._L1);
		case 774:
			return &((*pContext)._L9);
		case 775:
			return &((*pContext)._L8);
		case 776:
			return &((*pContext)._L10);
		case 777:
			return &((*pContext)._L11);
		case 778:
			return &((*pContext).nid_bg);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_LINK/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_LINK_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_LINK_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_779_Utils, 779);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_780_Utils, 780);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 781, valid, 780, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINK_Utils, 782, valid, 780, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_783_Utils, 783);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_LINK_Utils, 784, valid, 783, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 785, valid, 783, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_786_Utils, 786);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_LINK_Utils, 787, valid, 786, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 788, valid, 786, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 789, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_link_in", &_SCSIM_kcg_int_Utils, 790, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 791, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 792, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_link", &_SCSIM_Q_LINK_Utils, 793, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_LINK_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_LINK_TM_conversions* pContext = (outC_CAST_Int_to_Q_LINK_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 779:
			return &((*pContext).IfBlock1_clock);
		case 780:
			return &((*pContext).else_clock_IfBlock1);
		case 781:
			return &((*pContext)._L2_IfBlock1);
		case 782:
			return &((*pContext)._L1_IfBlock1);
		case 783:
			return &((*pContext).else_clock_IfBlock1);
		case 784:
			return &((*pContext)._L3_IfBlock1);
		case 785:
			return &((*pContext)._L51_IfBlock1);
		case 786:
			return &((*pContext).IfBlock1_clock);
		case 787:
			return &((*pContext)._L4_IfBlock1);
		case 788:
			return &((*pContext)._L5_IfBlock1);
		case 789:
			return &((*pContext).error);
		case 790:
			return &((*pContext).q_link_in);
		case 791:
			return &((*pContext)._L13);
		case 792:
			return &((*pContext)._L12);
		case 793:
			return &((*pContext).q_link);
		default:
			break;
	}
	return 0;
}

static int Is780Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_780_Utils = {Is780Active};

static int Is783Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_783_Utils = {Is783Active};

static int Is779Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_779_Utils = {Is779Active};

static int Is786Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_786_Utils = {Is786Active};

/****************************************************************
 ** TM_lib_internal::RECV_ReadPackets/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_RECV_ReadPackets_TM_lib_internal(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_RECV_ReadPackets_TM_lib_internal_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_RECV_LookupPacket_TM_lib_internal("TM_lib_internal::RECV_LookupPacket", "1", 794, 0, 0);
	_SCSIM_Mapping_RECV_ReadPacketKernel_TM_lib_internal("TM_lib_internal::RECV_ReadPacketKernel", "1", 795, 796, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 797, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 798, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 799, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_array_int_500_Utils, 800, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 801, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_kcg_int_Utils, 802, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 803, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 804, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 805, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 796, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Data", &_SCSIM_array_int_500_Utils, 806, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Metadata", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 807, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ReadPackets_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ReadPackets_TM_lib_internal* pContext = (outC_RECV_ReadPackets_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 794:
			return &((*pContext).Context_1);
		case 795:
			return &((*pContext)._1_Context_1);
		case 797:
			return &((*pContext)._L3);
		case 798:
			return &((*pContext)._L2);
		case 799:
			return &((*pContext)._L1);
		case 800:
			return &((*pContext)._L4);
		case 801:
			return &((*pContext)._L44);
		case 802:
			return &((*pContext)._L45);
		case 803:
			return &((*pContext)._L46);
		case 804:
			return &((*pContext)._L48);
		case 805:
			return &((*pContext)._L47);
		case 796:
			return &((*pContext).tmp);
		case 806:
			return &((*pContext).Data);
		case 807:
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
	pSimulator->m_pfnAddOutput(pSimulator, "q_scale", &_SCSIM_Q_SCALE_Utils, 808, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "q_scale_int", &_SCSIM_kcg_int_Utils, 809, valid, 0, 0);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_810_Utils, 810);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_811_Utils, 811);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_812_Utils, 812);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 813, valid, 812, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_SCALE_Utils, 814, valid, 812, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_815_Utils, 815);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_SCALE_Utils, 816, valid, 815, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 817, valid, 815, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_818_Utils, 818);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_SCALE_Utils, 819, valid, 818, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 820, valid, 818, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_821_Utils, 821);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_SCALE_Utils, 822, valid, 821, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 823, valid, 821, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "q_scale_in", &_SCSIM_kcg_int_Utils, 824, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 825, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 826, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 827, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_C_P005_unflatten_sections_TM_lib_internal("TM_lib_internal::C_P005_unflatten_sections", "1", 828, 0, 0);
	/*<< Inlined TM_conversions::CAST_Int_to_N_ITER*/
	pSimulator->m_pfnPushInstance(pSimulator, "TM_conversions::CAST_Int_to_N_ITER", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "n_iter", &_SCSIM_N_ITER_Utils, 829, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "n_iter_int", &_SCSIM_kcg_int_Utils, 830, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 831, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 832, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 833, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 834, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 835, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined TM_conversions::CAST_Int_to_L_PACKET*/
	pSimulator->m_pfnPushInstance(pSimulator, "TM_conversions::CAST_Int_to_L_PACKET", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "l_packet", &_SCSIM_L_PACKET_Utils, 836, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "l_packet_int", &_SCSIM_kcg_int_Utils, 837, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 838, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 839, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 840, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 841, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 842, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined TM_conversions::CAST_Int_to_Q_DIR*/
	pSimulator->m_pfnPushInstance(pSimulator, "TM_conversions::CAST_Int_to_Q_DIR", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_dir", &_SCSIM_Q_DIR_Utils, 843, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "q_dir_int", &_SCSIM_kcg_int_Utils, 844, valid, 0, 0);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_845_Utils, 845);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_846_Utils, 846);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_847_Utils, 847);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 848, valid, 847, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 849, valid, 847, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_850_Utils, 850);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 851, valid, 850, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 852, valid, 850, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_853_Utils, 853);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_DIR_Utils, 854, valid, 853, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 855, valid, 853, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_856_Utils, 856);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_DIR_Utils, 857, valid, 856, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 858, valid, 856, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 859, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_dir_in", &_SCSIM_kcg_int_Utils, 860, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 861, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 862, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined TM_conversions::CAST_Int_to_NID_PACKET*/
	pSimulator->m_pfnPushInstance(pSimulator, "TM_conversions::CAST_Int_to_NID_PACKET", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "nid_packet", &_SCSIM_NID_PACKET_Utils, 863, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "nid_packet_int", &_SCSIM_kcg_int_Utils, 864, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 865, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 866, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 867, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 868, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 869, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 870, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 871, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 872, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_array_int_231_Utils, 873, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_NID_PACKET_Utils, 874, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_Q_DIR_Utils, 875, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_P005_OBU_T_TM_Utils, 876, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 877, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_L_PACKET_Utils, 878, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_N_ITER_Utils, 879, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_int_3_Utils, 880, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_P005_OBU_sectionlist_enum_T_TM_Utils, 881, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_SCALE_Utils, 882, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array_int_1_Utils, 883, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_array_int_1_Utils, 884, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 885, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 886, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 887, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 888, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_bool_Utils, 889, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "P005_onboard", &_SCSIM_P005_OBU_T_TM_Utils, 890, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_compr_onboard_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_compr_onboard_TM_conversions* pContext = (outC_C_P005_compr_onboard_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 808:
			return &((*pContext).q_scale_1);
		case 809:
			return &((*pContext).q_scale_int_1);
		case 810:
			return &((*pContext).IfBlock1_clock_1);
		case 811:
			return &((*pContext)._3_else_clock_1_IfBlock1);
		case 812:
			return &((*pContext).else_clock_1_IfBlock1);
		case 813:
			return &((*pContext)._L2_1_IfBlock1);
		case 814:
			return &((*pContext)._L1_11_IfBlock1);
		case 815:
			return &((*pContext).else_clock_1_IfBlock1);
		case 816:
			return &((*pContext)._L1_12_IfBlock1);
		case 817:
			return &((*pContext)._L4_1_IfBlock1);
		case 818:
			return &((*pContext)._3_else_clock_1_IfBlock1);
		case 819:
			return &((*pContext)._L1_1_IfBlock1);
		case 820:
			return &((*pContext)._L3_1_IfBlock1);
		case 821:
			return &((*pContext).IfBlock1_clock_1);
		case 822:
			return &((*pContext)._L2_14_IfBlock1);
		case 823:
			return &((*pContext)._L3_15_IfBlock1);
		case 824:
			return &((*pContext).q_scale_in_1);
		case 825:
			return &((*pContext).error_1);
		case 826:
			return &((*pContext)._L2_1);
		case 827:
			return &((*pContext)._L4_1);
		case 828:
			return &((*pContext).Context_1);
		case 829:
			return &((*pContext).n_iter_1);
		case 830:
			return &((*pContext).n_iter_int_1);
		case 831:
			return &((*pContext)._L1_1);
		case 832:
			return &((*pContext)._L12_1);
		case 833:
			return &((*pContext)._L11_1);
		case 834:
			return &((*pContext)._L10_1);
		case 835:
			return &((*pContext)._L9_1);
		case 836:
			return &((*pContext).l_packet_1);
		case 837:
			return &((*pContext).l_packet_int_1);
		case 838:
			return &((*pContext)._L1_18);
		case 839:
			return &((*pContext)._L9_17);
		case 840:
			return &((*pContext)._L8_1);
		case 841:
			return &((*pContext)._6__L12_1);
		case 842:
			return &((*pContext)._L13_1);
		case 843:
			return &((*pContext).q_dir_1);
		case 844:
			return &((*pContext).q_dir_int_1);
		case 845:
			return &((*pContext)._12_IfBlock1_clock_1);
		case 846:
			return &((*pContext)._19_else_clock_1_IfBlock1);
		case 847:
			return &((*pContext)._14_else_clock_1_IfBlock1);
		case 848:
			return &((*pContext)._L2_115_IfBlock1);
		case 849:
			return &((*pContext)._L1_116_IfBlock1);
		case 850:
			return &((*pContext)._14_else_clock_1_IfBlock1);
		case 851:
			return &((*pContext)._L2_117_IfBlock1);
		case 852:
			return &((*pContext)._L4_118_IfBlock1);
		case 853:
			return &((*pContext)._19_else_clock_1_IfBlock1);
		case 854:
			return &((*pContext)._L3_113_IfBlock1);
		case 855:
			return &((*pContext)._L5_1_IfBlock1);
		case 856:
			return &((*pContext)._12_IfBlock1_clock_1);
		case 857:
			return &((*pContext)._L4_120_IfBlock1);
		case 858:
			return &((*pContext)._L5_121_IfBlock1);
		case 859:
			return &((*pContext)._11_error_1);
		case 860:
			return &((*pContext).q_dir_in_1);
		case 861:
			return &((*pContext)._10__L13_1);
		case 862:
			return &((*pContext)._9__L12_1);
		case 863:
			return &((*pContext).nid_packet_1);
		case 864:
			return &((*pContext).nid_packet_int_1);
		case 865:
			return &((*pContext)._L1_124);
		case 866:
			return &((*pContext)._L5_1);
		case 867:
			return &((*pContext)._L4_123);
		case 868:
			return &((*pContext)._L3_1);
		case 869:
			return &((*pContext)._L2_122);
		case 870:
			return &((*pContext)._L14);
		case 871:
			return &((*pContext)._L15);
		case 872:
			return &((*pContext)._L16);
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
			return &((*pContext)._L6);
		case 881:
			return &((*pContext)._L5);
		case 882:
			return &((*pContext)._L4);
		case 883:
			return &((*pContext)._L2);
		case 884:
			return &((*pContext)._L1);
		case 885:
			return &((*pContext)._L17);
		case 886:
			return &((*pContext)._L18);
		case 887:
			return &((*pContext)._L20);
		case 888:
			return &((*pContext)._L21);
		case 889:
			return &((*pContext)._L22);
		case 890:
			return &((*pContext).P005_onboard);
		default:
			break;
	}
	return 0;
}

static int Is812Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_812_Utils = {Is812Active};

static int Is815Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_815_Utils = {Is815Active};

static int Is811Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_811_Utils = {Is811Active};

static int Is818Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_818_Utils = {Is818Active};

static int Is810Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_810_Utils = {Is810Active};

static int Is821Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_821_Utils = {Is821Active};

static int Is847Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_847_Utils = {Is847Active};

static int Is850Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_850_Utils = {Is850Active};

static int Is846Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_846_Utils = {Is846Active};

static int Is853Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_853_Utils = {Is853Active};

static int Is845Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_845_Utils = {Is845Active};

static int Is856Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_856_Utils = {Is856Active};

/****************************************************************
 ** TM_conversions::C_P005_LinkedBGs/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_C_P005_LinkedBGs_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_C_P005_LinkedBGs_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_LinkedBG_T_BG_Types_Pkg_Utils, 891, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_NID_LRBG_Utils, 892, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_DIR_Utils, 893, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_Q_SCALE_Utils, 894, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_P005_section_enum_T_TM_Utils, 895, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_Q_LOCACC_Utils, 896, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_Q_LINKREACTION_Utils, 897, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_Q_LINKORIENTATION_Utils, 898, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_NID_BG_Utils, 899, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_NID_C_Utils, 900, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_Q_NEWCOUNTRY_Utils, 901, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_D_LINK_Utils, 902, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 903, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LinkedBGsOUT", &_SCSIM_LinkedBG_T_BG_Types_Pkg_Utils, 904, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_LinkedBGs_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_LinkedBGs_TM_conversions* pContext = (outC_C_P005_LinkedBGs_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 891:
			return &((*pContext)._L2);
		case 892:
			return &((*pContext)._L3);
		case 893:
			return &((*pContext)._L4);
		case 894:
			return &((*pContext)._L5);
		case 895:
			return &((*pContext)._L6);
		case 896:
			return &((*pContext)._L14);
		case 897:
			return &((*pContext)._L13);
		case 898:
			return &((*pContext)._L12);
		case 899:
			return &((*pContext)._L11);
		case 900:
			return &((*pContext)._L10);
		case 901:
			return &((*pContext)._L9);
		case 902:
			return &((*pContext)._L8);
		case 903:
			return &((*pContext)._L7);
		case 904:
			return &((*pContext).LinkedBGsOUT);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1_00A/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Localisation_InfraLib("InfraLib::Balise_Localisation", "1", 905, 0, 0);
	_SCSIM_Mapping_Packets_BG364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A", "1", 906, 907, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 908, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 909, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 910, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_T_InfraLib_Utils, 911, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_T_InfraLib_Utils, 912, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 913, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 914, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 915, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 916, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 907, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 917, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 905:
			return &((*pContext).Context_1);
		case 906:
			return &((*pContext)._1_Context_1);
		case 908:
			return &((*pContext)._L2);
		case 909:
			return &((*pContext)._L4);
		case 910:
			return &((*pContext)._L5);
		case 911:
			return &((*pContext)._L15);
		case 912:
			return &((*pContext)._L17);
		case 913:
			return &((*pContext)._L19);
		case 914:
			return &((*pContext)._L20);
		case 915:
			return &((*pContext)._L21);
		case 916:
			return &((*pContext)._L23);
		case 907:
			return &((*pContext).tmp);
		case 917:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** InfraLib::Balise_Group_Init/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_Init_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_Init_InfraLib_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_BaliseGroupData_TM_Utils, 918, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 919, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_B_data_internal_T_InfraLib_Utils, 920, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 921, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 922, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_int_Utils, 923, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_real_Utils, 924, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_bool_Utils, 925, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_internal_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 926, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_Init_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_Init_InfraLib* pContext = (outC_Balise_Group_Init_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 918:
			return &((*pContext)._L2);
		case 919:
			return &((*pContext)._L14);
		case 920:
			return &((*pContext)._L26);
		case 921:
			return &((*pContext)._L27);
		case 922:
			return &((*pContext)._L28);
		case 923:
			return &((*pContext)._L29);
		case 924:
			return &((*pContext)._L30);
		case 925:
			return &((*pContext)._L31);
		case 926:
			return &((*pContext).BG_internal_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** InfraLib::Balise_Group_Close/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_Close_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_Close_InfraLib_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_CompressedBaliseMessage_TM_Utils, 927, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_CompressedBaliseMessage_TM_Utils, 928, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_B_data_internal_T_InfraLib_Utils, 929, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 930, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 931, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_CompressedBaliseMessage_TM_Utils, 932, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 933, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_bool_Utils, 934, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Error_out", &_SCSIM_kcg_bool_Utils, 935, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_CompressedBaliseMessage_TM_Utils, 936, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_Close_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_Close_InfraLib* pContext = (outC_Balise_Group_Close_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 927:
			return &((*pContext)._L2);
		case 928:
			return &((*pContext)._L20);
		case 929:
			return &((*pContext)._L21);
		case 930:
			return &((*pContext)._L22);
		case 931:
			return &((*pContext)._L23);
		case 932:
			return &((*pContext)._L24);
		case 933:
			return &((*pContext)._L25);
		case 934:
			return &((*pContext)._L26);
		case 935:
			return &((*pContext).Error_out);
		case 936:
			return &((*pContext).BG_message_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_0_00A/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Localisation_InfraLib("InfraLib::Balise_Localisation", "1", 937, 0, 0);
	_SCSIM_Mapping_Packets_BG364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer("AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A", "1", 938, 939, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 940, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 941, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 942, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_T_InfraLib_Utils, 943, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_T_InfraLib_Utils, 944, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 945, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 946, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 947, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 948, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 939, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 949, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 937:
			return &((*pContext).Context_1);
		case 938:
			return &((*pContext)._1_Context_1);
		case 940:
			return &((*pContext)._L2);
		case 941:
			return &((*pContext)._L4);
		case 942:
			return &((*pContext)._L5);
		case 943:
			return &((*pContext)._L15);
		case 944:
			return &((*pContext)._L17);
		case 945:
			return &((*pContext)._L19);
		case 946:
			return &((*pContext)._L20);
		case 947:
			return &((*pContext)._L21);
		case 948:
			return &((*pContext)._L23);
		case 939:
			return &((*pContext).tmp);
		case 949:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_367_0/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Localisation_InfraLib("InfraLib::Balise_Localisation", "1", 950, 0, 0);
	_SCSIM_Mapping_No_Balise_Packets_InfraLib("InfraLib::No_Balise_Packets", "1", 951, 952, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 953, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 954, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 955, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_T_InfraLib_Utils, 956, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_T_InfraLib_Utils, 957, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 958, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 959, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 960, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 961, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 952, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 962, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 950:
			return &((*pContext).Context_1);
		case 951:
			return &((*pContext)._1_Context_1);
		case 953:
			return &((*pContext)._L2);
		case 954:
			return &((*pContext)._L4);
		case 955:
			return &((*pContext)._L5);
		case 956:
			return &((*pContext)._L15);
		case 957:
			return &((*pContext)._L17);
		case 958:
			return &((*pContext)._L19);
		case 959:
			return &((*pContext)._L20);
		case 960:
			return &((*pContext)._L21);
		case 961:
			return &((*pContext)._L23);
		case 952:
			return &((*pContext).tmp);
		case 962:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_367_1/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Localisation_InfraLib("InfraLib::Balise_Localisation", "1", 963, 0, 0);
	_SCSIM_Mapping_No_Balise_Packets_InfraLib("InfraLib::No_Balise_Packets", "1", 964, 965, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 966, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 967, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 968, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_T_InfraLib_Utils, 969, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_T_InfraLib_Utils, 970, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 971, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 972, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 973, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 974, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 965, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 975, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 963:
			return &((*pContext).Context_1);
		case 964:
			return &((*pContext)._1_Context_1);
		case 966:
			return &((*pContext)._L2);
		case 967:
			return &((*pContext)._L4);
		case 968:
			return &((*pContext)._L5);
		case 969:
			return &((*pContext)._L15);
		case 970:
			return &((*pContext)._L17);
		case 971:
			return &((*pContext)._L19);
		case 972:
			return &((*pContext)._L20);
		case 973:
			return &((*pContext)._L21);
		case 974:
			return &((*pContext)._L23);
		case 965:
			return &((*pContext).tmp);
		case 975:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_1/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Localisation_InfraLib("InfraLib::Balise_Localisation", "1", 976, 0, 0);
	_SCSIM_Mapping_No_Balise_Packets_InfraLib("InfraLib::No_Balise_Packets", "1", 977, 978, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 979, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 980, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 981, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_T_InfraLib_Utils, 982, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_T_InfraLib_Utils, 983, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 984, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 985, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 986, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 987, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 978, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 988, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 976:
			return &((*pContext).Context_1);
		case 977:
			return &((*pContext)._1_Context_1);
		case 979:
			return &((*pContext)._L2);
		case 980:
			return &((*pContext)._L4);
		case 981:
			return &((*pContext)._L5);
		case 982:
			return &((*pContext)._L15);
		case 983:
			return &((*pContext)._L17);
		case 984:
			return &((*pContext)._L19);
		case 985:
			return &((*pContext)._L20);
		case 986:
			return &((*pContext)._L21);
		case 987:
			return &((*pContext)._L23);
		case 978:
			return &((*pContext).tmp);
		case 988:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_0/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Localisation_InfraLib("InfraLib::Balise_Localisation", "1", 989, 0, 0);
	_SCSIM_Mapping_No_Balise_Packets_InfraLib("InfraLib::No_Balise_Packets", "1", 990, 991, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 992, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 993, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 994, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_T_InfraLib_Utils, 995, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_T_InfraLib_Utils, 996, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 997, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 998, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 999, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1000, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 991, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1001, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 989:
			return &((*pContext).Context_1);
		case 990:
			return &((*pContext)._1_Context_1);
		case 992:
			return &((*pContext)._L2);
		case 993:
			return &((*pContext)._L4);
		case 994:
			return &((*pContext)._L5);
		case 995:
			return &((*pContext)._L15);
		case 996:
			return &((*pContext)._L17);
		case 997:
			return &((*pContext)._L19);
		case 998:
			return &((*pContext)._L20);
		case 999:
			return &((*pContext)._L21);
		case 1000:
			return &((*pContext)._L23);
		case 991:
			return &((*pContext).tmp);
		case 1001:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_366_0/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Localisation_InfraLib("InfraLib::Balise_Localisation", "1", 1002, 0, 0);
	_SCSIM_Mapping_No_Balise_Packets_InfraLib("InfraLib::No_Balise_Packets", "1", 1003, 1004, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1005, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1006, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1007, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1008, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1009, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1010, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1011, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1012, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1013, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 1004, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1014, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 1002:
			return &((*pContext).Context_1);
		case 1003:
			return &((*pContext)._1_Context_1);
		case 1005:
			return &((*pContext)._L2);
		case 1006:
			return &((*pContext)._L4);
		case 1007:
			return &((*pContext)._L5);
		case 1008:
			return &((*pContext)._L15);
		case 1009:
			return &((*pContext)._L17);
		case 1010:
			return &((*pContext)._L19);
		case 1011:
			return &((*pContext)._L20);
		case 1012:
			return &((*pContext)._L21);
		case 1013:
			return &((*pContext)._L23);
		case 1004:
			return &((*pContext).tmp);
		case 1014:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_366_1/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Localisation_InfraLib("InfraLib::Balise_Localisation", "1", 1015, 0, 0);
	_SCSIM_Mapping_No_Balise_Packets_InfraLib("InfraLib::No_Balise_Packets", "1", 1016, 1017, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1018, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1019, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1020, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1021, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1022, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1023, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1024, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1025, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1026, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 1017, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1027, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 1015:
			return &((*pContext).Context_1);
		case 1016:
			return &((*pContext)._1_Context_1);
		case 1018:
			return &((*pContext)._L2);
		case 1019:
			return &((*pContext)._L4);
		case 1020:
			return &((*pContext)._L5);
		case 1021:
			return &((*pContext)._L15);
		case 1022:
			return &((*pContext)._L17);
		case 1023:
			return &((*pContext)._L19);
		case 1024:
			return &((*pContext)._L20);
		case 1025:
			return &((*pContext)._L21);
		case 1026:
			return &((*pContext)._L23);
		case 1017:
			return &((*pContext).tmp);
		case 1027:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_369_1/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Localisation_InfraLib("InfraLib::Balise_Localisation", "1", 1028, 0, 0);
	_SCSIM_Mapping_No_Balise_Packets_InfraLib("InfraLib::No_Balise_Packets", "1", 1029, 1030, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1031, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1032, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1033, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1034, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1035, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1036, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1037, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1038, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1039, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 1030, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1040, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 1028:
			return &((*pContext).Context_1);
		case 1029:
			return &((*pContext)._1_Context_1);
		case 1031:
			return &((*pContext)._L2);
		case 1032:
			return &((*pContext)._L4);
		case 1033:
			return &((*pContext)._L5);
		case 1034:
			return &((*pContext)._L15);
		case 1035:
			return &((*pContext)._L17);
		case 1036:
			return &((*pContext)._L19);
		case 1037:
			return &((*pContext)._L20);
		case 1038:
			return &((*pContext)._L21);
		case 1039:
			return &((*pContext)._L23);
		case 1030:
			return &((*pContext).tmp);
		case 1040:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_369_0/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Localisation_InfraLib("InfraLib::Balise_Localisation", "1", 1041, 0, 0);
	_SCSIM_Mapping_No_Balise_Packets_InfraLib("InfraLib::No_Balise_Packets", "1", 1042, 1043, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1044, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1045, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1046, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1047, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1048, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1049, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1050, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1051, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1052, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 1043, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1053, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 1041:
			return &((*pContext).Context_1);
		case 1042:
			return &((*pContext)._1_Context_1);
		case 1044:
			return &((*pContext)._L2);
		case 1045:
			return &((*pContext)._L4);
		case 1046:
			return &((*pContext)._L5);
		case 1047:
			return &((*pContext)._L15);
		case 1048:
			return &((*pContext)._L17);
		case 1049:
			return &((*pContext)._L19);
		case 1050:
			return &((*pContext)._L20);
		case 1051:
			return &((*pContext)._L21);
		case 1052:
			return &((*pContext)._L23);
		case 1043:
			return &((*pContext).tmp);
		case 1053:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_365_0/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Localisation_InfraLib("InfraLib::Balise_Localisation", "1", 1054, 0, 0);
	_SCSIM_Mapping_No_Balise_Packets_InfraLib("InfraLib::No_Balise_Packets", "1", 1055, 1056, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1057, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1058, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1059, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1060, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1061, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1062, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1063, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1064, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1065, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 1056, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1066, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 1054:
			return &((*pContext).Context_1);
		case 1055:
			return &((*pContext)._1_Context_1);
		case 1057:
			return &((*pContext)._L2);
		case 1058:
			return &((*pContext)._L4);
		case 1059:
			return &((*pContext)._L5);
		case 1060:
			return &((*pContext)._L15);
		case 1061:
			return &((*pContext)._L17);
		case 1062:
			return &((*pContext)._L19);
		case 1063:
			return &((*pContext)._L20);
		case 1064:
			return &((*pContext)._L21);
		case 1065:
			return &((*pContext)._L23);
		case 1056:
			return &((*pContext).tmp);
		case 1066:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_365_1/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Localisation_InfraLib("InfraLib::Balise_Localisation", "1", 1067, 0, 0);
	_SCSIM_Mapping_No_Balise_Packets_InfraLib("InfraLib::No_Balise_Packets", "1", 1068, 1069, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1070, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1071, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1072, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1073, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1074, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1075, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1076, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1077, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1078, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 1069, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1079, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 1067:
			return &((*pContext).Context_1);
		case 1068:
			return &((*pContext)._1_Context_1);
		case 1070:
			return &((*pContext)._L2);
		case 1071:
			return &((*pContext)._L4);
		case 1072:
			return &((*pContext)._L5);
		case 1073:
			return &((*pContext)._L15);
		case 1074:
			return &((*pContext)._L17);
		case 1075:
			return &((*pContext)._L19);
		case 1076:
			return &((*pContext)._L20);
		case 1077:
			return &((*pContext)._L21);
		case 1078:
			return &((*pContext)._L23);
		case 1069:
			return &((*pContext).tmp);
		case 1079:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_341_0/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Localisation_InfraLib("InfraLib::Balise_Localisation", "1", 1080, 0, 0);
	_SCSIM_Mapping_No_Balise_Packets_InfraLib("InfraLib::No_Balise_Packets", "1", 1081, 1082, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1083, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1084, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1085, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1086, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1087, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1088, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1089, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1090, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1091, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 1082, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1092, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 1080:
			return &((*pContext).Context_1);
		case 1081:
			return &((*pContext)._1_Context_1);
		case 1083:
			return &((*pContext)._L2);
		case 1084:
			return &((*pContext)._L4);
		case 1085:
			return &((*pContext)._L5);
		case 1086:
			return &((*pContext)._L15);
		case 1087:
			return &((*pContext)._L17);
		case 1088:
			return &((*pContext)._L19);
		case 1089:
			return &((*pContext)._L20);
		case 1090:
			return &((*pContext)._L21);
		case 1091:
			return &((*pContext)._L23);
		case 1082:
			return &((*pContext).tmp);
		case 1092:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_341_1/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Localisation_InfraLib("InfraLib::Balise_Localisation", "1", 1093, 0, 0);
	_SCSIM_Mapping_No_Balise_Packets_InfraLib("InfraLib::No_Balise_Packets", "1", 1094, 1095, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1096, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1097, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1098, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1099, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1100, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1101, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1102, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1103, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1104, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 1095, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1105, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 1093:
			return &((*pContext).Context_1);
		case 1094:
			return &((*pContext)._1_Context_1);
		case 1096:
			return &((*pContext)._L2);
		case 1097:
			return &((*pContext)._L4);
		case 1098:
			return &((*pContext)._L5);
		case 1099:
			return &((*pContext)._L15);
		case 1100:
			return &((*pContext)._L17);
		case 1101:
			return &((*pContext)._L19);
		case 1102:
			return &((*pContext)._L20);
		case 1103:
			return &((*pContext)._L21);
		case 1104:
			return &((*pContext)._L23);
		case 1095:
			return &((*pContext).tmp);
		case 1105:
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
	_SCSIM_Mapping_RECV_LookupPacketLoop_TM_lib_internal("TM_lib_internal::RECV_LookupPacketLoop", "1", 1106, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 1107, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 1108, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_array_int_30_Utils, 1109, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 1110, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 1111, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1112, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_NID_PACKET_Utils, 1113, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 1114, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1115, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1116, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1117, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 1118, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_int_Utils, 1119, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Found", &_SCSIM_kcg_bool_Utils, 1120, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Index", &_SCSIM_kcg_int_Utils, 1121, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "HeaderFound", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1122, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_LookupPacket_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_LookupPacket_TM_lib_internal* pContext = (outC_RECV_LookupPacket_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1106:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 1107:
			return &((*pContext)._L1);
		case 1108:
			return &((*pContext)._L2);
		case 1109:
			return &((*pContext)._L3);
		case 1110:
			return &((*pContext)._L4);
		case 1111:
			return &((*pContext)._L5);
		case 1112:
			return &((*pContext)._L23);
		case 1113:
			return &((*pContext)._L24);
		case 1114:
			return &((*pContext)._L25);
		case 1115:
			return &((*pContext)._L26);
		case 1116:
			return &((*pContext)._L22);
		case 1117:
			return &((*pContext)._L27);
		case 1118:
			return &((*pContext)._L28);
		case 1119:
			return &((*pContext)._L29);
		case 1120:
			return &((*pContext).Found);
		case 1121:
			return &((*pContext).Index);
		case 1122:
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
	_SCSIM_Mapping_RECV_ReadPacketKernelLoop_TM_lib_internal("TM_lib_internal::RECV_ReadPacketKernelLoop", "1", 1123, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1124, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1125, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_int_500_Utils, 1126, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_array_int_500_Utils, 1127, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 1128, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_array_int_500_Utils, 1129, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_array_int_500_500_Utils, 1130, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 1131, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 1132, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 1133, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PacketOut", &_SCSIM_array_int_500_Utils, 1134, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ReadPacketKernel_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ReadPacketKernel_TM_lib_internal* pContext = (outC_RECV_ReadPacketKernel_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1123:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 1124:
			return &((*pContext)._L3);
		case 1125:
			return &((*pContext)._L4);
		case 1126:
			return &((*pContext)._L6);
		case 1127:
			return &((*pContext)._L7);
		case 1128:
			return &((*pContext)._L8);
		case 1129:
			return &((*pContext)._L10);
		case 1130:
			return &((*pContext)._L18);
		case 1131:
			return &((*pContext)._L22);
		case 1132:
			return &((*pContext)._L24);
		case 1133:
			return &((*pContext)._L23);
		case 1134:
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
	_SCSIM_Mapping_C_P005_us_array_TM_lib_internal("TM_lib_internal::C_P005_us_array", "1", 1135, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1136, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1137, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_array_int_33_Utils, 1138, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_array_int_231_33_Utils, 1139, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 1140, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_array__5338_Utils, 1141, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 1142, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "sections", &_SCSIM_P005_OBU_sectionlist_enum_T_TM_Utils, 1143, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_unflatten_sections_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_unflatten_sections_TM_lib_internal* pContext = (outC_C_P005_unflatten_sections_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1135:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 1136:
			return &((*pContext)._L1);
		case 1137:
			return &((*pContext)._L3);
		case 1138:
			return &((*pContext)._L5);
		case 1139:
			return &((*pContext)._L6);
		case 1140:
			return &((*pContext)._L7);
		case 1141:
			return &((*pContext)._L9);
		case 1142:
			return &((*pContext)._L11);
		case 1143:
			return &((*pContext).sections);
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
	_SCSIM_Mapping_Balise_Interdistance_InfraLib("InfraLib::Balise_Interdistance", "1", 1144, 0, 0);
	_SCSIM_Mapping_TOOLS_convert_engineering_TM_conversions("TM_conversions::TOOLS_convert_engineering_location", "1", 1145, 0, 0);
	/*<< Inlined math::Min*/
	pSimulator->m_pfnPushInstance(pSimulator, "math::Min", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Mi_Output", &_SCSIM_kcg_real_Utils, 1146, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "I1", &_SCSIM_kcg_real_Utils, 1147, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "I2", &_SCSIM_kcg_real_Utils, 1148, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_real_Utils, 1149, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 1150, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_real_Utils, 1151, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 1152, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 1153, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1154, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_kcg_int_Utils, 1155, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_kcg_int_Utils, 1156, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_kcg_bool_Utils, 1157, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L51", &_SCSIM_kcg_int_Utils, 1158, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L52", &_SCSIM_kcg_int_Utils, 1159, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L65", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1160, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L66", &_SCSIM_kcg_int_Utils, 1161, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L73", &_SCSIM_kcg_real_Utils, 1162, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L71", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1163, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L68", &_SCSIM_kcg_int_Utils, 1164, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L75", &_SCSIM_kcg_real_Utils, 1165, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L76", &_SCSIM_kcg_real_Utils, 1166, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L77", &_SCSIM_kcg_real_Utils, 1167, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L82", &_SCSIM_kcg_real_Utils, 1168, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L90", &_SCSIM_kcg_real_Utils, 1169, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L91", &_SCSIM_kcg_real_Utils, 1170, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L92", &_SCSIM_kcg_real_Utils, 1171, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L93", &_SCSIM_kcg_real_Utils, 1172, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L94", &_SCSIM_kcg_bool_Utils, 1173, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L95", &_SCSIM_kcg_bool_Utils, 1174, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L96", &_SCSIM_kcg_bool_Utils, 1175, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PIG_0_out", &_SCSIM_kcg_int_Utils, 1176, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TrainPass", &_SCSIM_kcg_bool_Utils, 1177, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Localisation_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Localisation_InfraLib* pContext = (outC_Balise_Localisation_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 1144:
			return &((*pContext).Context_1);
		case 1145:
			return &((*pContext)._1_Context_1);
		case 1146:
			return &((*pContext).Mi_Output_1);
		case 1147:
			return &((*pContext).I1_1);
		case 1148:
			return &((*pContext).I2_1);
		case 1149:
			return &((*pContext)._L21_1);
		case 1150:
			return &((*pContext)._L22_1);
		case 1151:
			return &((*pContext)._L24_1);
		case 1152:
			return &((*pContext)._L25_1);
		case 1153:
			return &((*pContext)._L15);
		case 1154:
			return &((*pContext)._L16);
		case 1155:
			return &((*pContext)._L47);
		case 1156:
			return &((*pContext)._L48);
		case 1157:
			return &((*pContext)._L50);
		case 1158:
			return &((*pContext)._L51);
		case 1159:
			return &((*pContext)._L52);
		case 1160:
			return &((*pContext)._L65);
		case 1161:
			return &((*pContext)._L66);
		case 1162:
			return &((*pContext)._L73);
		case 1163:
			return &((*pContext)._L71);
		case 1164:
			return &((*pContext)._L68);
		case 1165:
			return &((*pContext)._L75);
		case 1166:
			return &((*pContext)._L76);
		case 1167:
			return &((*pContext)._L77);
		case 1168:
			return &((*pContext)._L82);
		case 1169:
			return &((*pContext)._L90);
		case 1170:
			return &((*pContext)._L91);
		case 1171:
			return &((*pContext)._L92);
		case 1172:
			return &((*pContext)._L93);
		case 1173:
			return &((*pContext)._L94);
		case 1174:
			return &((*pContext)._L95);
		case 1175:
			return &((*pContext)._L96);
		case 1176:
			return &((*pContext).PIG_0_out);
		case 1177:
			return &((*pContext).TrainPass);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Packets_BG364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Packets_BG364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1178, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1179, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1180, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1181, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1182, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1183, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1184, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1185, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1186, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1187, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1188, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1189, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1190, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1191, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1192, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1193, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1194, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1195, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "7", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1196, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1197, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1198, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "8", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1199, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1200, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1201, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "9", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1202, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1203, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1204, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Send_P005_InfraLib("InfraLib::Send_P005", "1", 1205, 0, 0);
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "10", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1206, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1207, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1208, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "11", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1209, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1210, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1211, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "12", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1212, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1213, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1214, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "13", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1215, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1216, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1217, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "14", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1218, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1219, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1220, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "15", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1221, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1222, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1223, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "16", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1224, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1225, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1226, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "17", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1227, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1228, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1229, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "18", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1230, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1231, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1232, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "InfraLib::No_Packet", "19", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1233, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1234, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1235, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1236, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1237, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "B_data_link", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1238, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1239, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1240, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1241, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1242, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1243, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1244, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1245, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1246, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1247, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1248, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1249, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1250, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1251, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1252, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1253, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1254, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1255, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1256, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1257, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1258, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1259, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1260, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1261, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1262, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1263, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1264, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1265, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1266, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1267, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_bool_Utils, 1268, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Balise_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1269, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Packets_BG364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Packets_BG364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer* pContext = (outC_Packets_BG364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer*)pInstance;
	switch (nHandleIdent) {
		case 1178:
			return &((*pContext).B_data_out_1);
		case 1179:
			return &((*pContext).B_data_in_1);
		case 1180:
			return &((*pContext)._L1_1);
		case 1181:
			return &((*pContext).B_data_out_2);
		case 1182:
			return &((*pContext).B_data_in_2);
		case 1183:
			return &((*pContext)._L1_2);
		case 1184:
			return &((*pContext).B_data_out_3);
		case 1185:
			return &((*pContext).B_data_in_3);
		case 1186:
			return &((*pContext)._L1_3);
		case 1187:
			return &((*pContext).B_data_out_4);
		case 1188:
			return &((*pContext).B_data_in_4);
		case 1189:
			return &((*pContext)._L1_4);
		case 1190:
			return &((*pContext).B_data_out_5);
		case 1191:
			return &((*pContext).B_data_in_5);
		case 1192:
			return &((*pContext)._L1_5);
		case 1193:
			return &((*pContext).B_data_out_6);
		case 1194:
			return &((*pContext).B_data_in_6);
		case 1195:
			return &((*pContext)._L1_6);
		case 1196:
			return &((*pContext).B_data_out_7);
		case 1197:
			return &((*pContext).B_data_in_7);
		case 1198:
			return &((*pContext)._L1_7);
		case 1199:
			return &((*pContext).B_data_out_8);
		case 1200:
			return &((*pContext).B_data_in_8);
		case 1201:
			return &((*pContext)._L1_8);
		case 1202:
			return &((*pContext).B_data_out_9);
		case 1203:
			return &((*pContext).B_data_in_9);
		case 1204:
			return &((*pContext)._L1_9);
		case 1205:
			return &((*pContext).Context_1);
		case 1206:
			return &((*pContext).B_data_out_10);
		case 1207:
			return &((*pContext).B_data_in_10);
		case 1208:
			return &((*pContext)._L1_10);
		case 1209:
			return &((*pContext).B_data_out_11);
		case 1210:
			return &((*pContext).B_data_in_11);
		case 1211:
			return &((*pContext)._L1_11);
		case 1212:
			return &((*pContext).B_data_out_12);
		case 1213:
			return &((*pContext).B_data_in_12);
		case 1214:
			return &((*pContext)._L1_12);
		case 1215:
			return &((*pContext).B_data_out_13);
		case 1216:
			return &((*pContext).B_data_in_13);
		case 1217:
			return &((*pContext)._L1_13);
		case 1218:
			return &((*pContext).B_data_out_14);
		case 1219:
			return &((*pContext).B_data_in_14);
		case 1220:
			return &((*pContext)._L1_14);
		case 1221:
			return &((*pContext).B_data_out_15);
		case 1222:
			return &((*pContext).B_data_in_15);
		case 1223:
			return &((*pContext)._L1_15);
		case 1224:
			return &((*pContext).B_data_out_16);
		case 1225:
			return &((*pContext).B_data_in_16);
		case 1226:
			return &((*pContext)._L1_16);
		case 1227:
			return &((*pContext).B_data_out_17);
		case 1228:
			return &((*pContext).B_data_in_17);
		case 1229:
			return &((*pContext)._L1_17);
		case 1230:
			return &((*pContext).B_data_out_18);
		case 1231:
			return &((*pContext).B_data_in_18);
		case 1232:
			return &((*pContext)._L1_18);
		case 1233:
			return &((*pContext).B_data_out_19);
		case 1234:
			return &((*pContext).B_data_in_19);
		case 1235:
			return &((*pContext)._L1_19);
		case 1236:
			return &((*pContext).B_data_in);
		case 1237:
			return &((*pContext).B_data_out);
		case 1238:
			return &((*pContext).B_data_link);
		case 1239:
			return &((*pContext)._L2);
		case 1240:
			return &((*pContext)._L3);
		case 1241:
			return &((*pContext)._L4);
		case 1242:
			return &((*pContext)._L5);
		case 1243:
			return &((*pContext)._L6);
		case 1244:
			return &((*pContext)._L7);
		case 1245:
			return &((*pContext)._L8);
		case 1246:
			return &((*pContext)._L9);
		case 1247:
			return &((*pContext)._L10);
		case 1248:
			return &((*pContext)._L11);
		case 1249:
			return &((*pContext)._L21);
		case 1250:
			return &((*pContext)._L20);
		case 1251:
			return &((*pContext)._L19);
		case 1252:
			return &((*pContext)._L18);
		case 1253:
			return &((*pContext)._L17);
		case 1254:
			return &((*pContext)._L16);
		case 1255:
			return &((*pContext)._L15);
		case 1256:
			return &((*pContext)._L14);
		case 1257:
			return &((*pContext)._L13);
		case 1258:
			return &((*pContext)._L12);
		case 1259:
			return &((*pContext)._L22);
		case 1260:
			return &((*pContext)._L24);
		case 1261:
			return &((*pContext)._L25);
		case 1262:
			return &((*pContext)._L26);
		case 1263:
			return &((*pContext)._L28);
		case 1264:
			return &((*pContext)._L29);
		case 1265:
			return &((*pContext)._L30);
		case 1266:
			return &((*pContext)._L31);
		case 1267:
			return &((*pContext)._L32);
		case 1268:
			return &((*pContext)._L33);
		case 1269:
			return &((*pContext).Balise_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** InfraLib::No_Balise_Packets/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_No_Balise_Packets_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_No_Balise_Packets_InfraLib_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1270, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_bool_Utils, 1271, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_BaliseTelegramHeader_int_T_TM_Utils, 1272, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1273, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1274, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Balise_data_out", &_SCSIM_B_data_internal_T_InfraLib_Utils, 1275, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_No_Balise_Packets_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_No_Balise_Packets_InfraLib* pContext = (outC_No_Balise_Packets_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 1270:
			return &((*pContext)._L36);
		case 1271:
			return &((*pContext)._L35);
		case 1272:
			return &((*pContext)._L32);
		case 1273:
			return &((*pContext)._L31);
		case 1274:
			return &((*pContext)._L30);
		case 1275:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1276, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1277, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_NID_PACKET_Utils, 1278, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_bool_Utils, 1279, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_bool_Utils, 1280, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1281, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 1282, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 1283, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "HeaderFound", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1284, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_LookupPacketLoop_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_LookupPacketLoop_TM_lib_internal* pContext = (outC_RECV_LookupPacketLoop_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1276:
			return &((*pContext)._L3);
		case 1277:
			return &((*pContext)._L4);
		case 1278:
			return &((*pContext)._L27);
		case 1279:
			return &((*pContext)._L28);
		case 1280:
			return &((*pContext)._L29);
		case 1281:
			return &((*pContext)._L30);
		case 1282:
			return &((*pContext)._L31);
		case 1283:
			return &((*pContext).Cont);
		case 1284:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1285, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1286, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 1287, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1288, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 1289, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1290, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_int_Utils, 1291, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_int_Utils, 1292, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 1293, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_int_Utils, 1294, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_int_Utils, 1295, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_int_Utils, 1296, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 1297, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PacketOut", &_SCSIM_kcg_int_Utils, 1298, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_RECV_ReadPacketKernelLoop_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_RECV_ReadPacketKernelLoop_TM_lib_internal* pContext = (outC_RECV_ReadPacketKernelLoop_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1285:
			return &((*pContext)._L1);
		case 1286:
			return &((*pContext)._L3);
		case 1287:
			return &((*pContext)._L4);
		case 1288:
			return &((*pContext)._L9);
		case 1289:
			return &((*pContext)._L18);
		case 1290:
			return &((*pContext)._L20);
		case 1291:
			return &((*pContext)._L29);
		case 1292:
			return &((*pContext)._L30);
		case 1293:
			return &((*pContext)._L31);
		case 1294:
			return &((*pContext)._L32);
		case 1295:
			return &((*pContext)._L33);
		case 1296:
			return &((*pContext)._L34);
		case 1297:
			return &((*pContext).Cont);
		case 1298:
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
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "1", 1299, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "2", 1300, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "3", 1301, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_D_LINK_TM_conversions("TM_conversions::CAST_Int_to_D_LINK", "1", 1302, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_NID_C_TM_conversions("TM_conversions::CAST_Int_to_NID_C", "1", 1303, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions("TM_conversions::CAST_Int_to_Q_NEWCOUNTRY", "1", 1304, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_LOCACC_TM_conversions("TM_conversions::CAST_Int_to_Q_LOCACC", "1", 1305, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_LINKREACTION_TM_conversions("TM_conversions::CAST_Int_to_Q_LINKREACTION", "1", 1306, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_Q_LINKORIENTATION_TM_conversions("TM_conversions::CAST_Int_to_Q_LINKORIENTATION", "1", 1307, 0, 0);
	_SCSIM_Mapping_CAST_Int_to_NID_BG_TM_conversions("TM_conversions::CAST_Int_to_NID_BG", "1", 1308, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "7", 1309, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "6", 1310, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "5", 1311, 0, 0);
	_SCSIM_Mapping_C_P005_extract_el_section_TM_lib_internal("TM_lib_internal::C_P005_extract_el_section", "4", 1312, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1313, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1314, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_P005_section_enum_T_TM_Utils, 1315, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 1316, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 1317, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 1318, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 1319, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_int_Utils, 1320, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 1321, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_D_LINK_Utils, 1322, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_NID_C_Utils, 1323, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_Q_NEWCOUNTRY_Utils, 1324, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 1325, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_bool_Utils, 1326, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_Q_LOCACC_Utils, 1327, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_Q_LINKREACTION_Utils, 1328, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_Q_LINKORIENTATION_Utils, 1329, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_NID_BG_Utils, 1330, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 1331, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 1332, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 1333, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1334, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "cont", &_SCSIM_kcg_bool_Utils, 1335, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "sections", &_SCSIM_P005_section_enum_T_TM_Utils, 1336, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_us_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_us_array_TM_lib_internal* pContext = (outC_C_P005_us_array_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1299:
			return &((*pContext)._6_Context_1);
		case 1300:
			return &((*pContext).Context_2);
		case 1301:
			return &((*pContext).Context_3);
		case 1302:
			return &((*pContext)._7_Context_1);
		case 1303:
			return &((*pContext)._5_Context_1);
		case 1304:
			return &((*pContext)._4_Context_1);
		case 1305:
			return &((*pContext)._3_Context_1);
		case 1306:
			return &((*pContext)._2_Context_1);
		case 1307:
			return &((*pContext)._1_Context_1);
		case 1308:
			return &((*pContext).Context_1);
		case 1309:
			return &((*pContext).Context_7);
		case 1310:
			return &((*pContext).Context_6);
		case 1311:
			return &((*pContext).Context_5);
		case 1312:
			return &((*pContext).Context_4);
		case 1313:
			return &((*pContext)._L1);
		case 1314:
			return &((*pContext)._L3);
		case 1315:
			return &((*pContext)._L4);
		case 1316:
			return &((*pContext)._L5);
		case 1317:
			return &((*pContext)._L15);
		case 1318:
			return &((*pContext)._L16);
		case 1319:
			return &((*pContext)._L18);
		case 1320:
			return &((*pContext)._L19);
		case 1321:
			return &((*pContext)._L20);
		case 1322:
			return &((*pContext)._L25);
		case 1323:
			return &((*pContext)._L26);
		case 1324:
			return &((*pContext)._L28);
		case 1325:
			return &((*pContext)._L32);
		case 1326:
			return &((*pContext)._L33);
		case 1327:
			return &((*pContext)._L31);
		case 1328:
			return &((*pContext)._L30);
		case 1329:
			return &((*pContext)._L29);
		case 1330:
			return &((*pContext)._L27);
		case 1331:
			return &((*pContext)._L24);
		case 1332:
			return &((*pContext)._L23);
		case 1333:
			return &((*pContext)._L22);
		case 1334:
			return &((*pContext)._L21);
		case 1335:
			return &((*pContext).cont);
		case 1336:
			return &((*pContext).sections);
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
	pSimulator->m_pfnAddOutput(pSimulator, "A_Output", &_SCSIM_kcg_int_Utils, 1337, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "A_Input", &_SCSIM_kcg_int_Utils, 1338, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 1339, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 1340, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1341, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 1342, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 1343, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 1344, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 1345, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 1346, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 1347, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_real_Utils, 1348, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 1349, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 1350, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 1351, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 1352, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 1353, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_real_Utils, 1354, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 1355, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_real_Utils, 1356, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "distance_BB", &_SCSIM_kcg_real_Utils, 1357, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Interdistance_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Interdistance_InfraLib* pContext = (outC_Balise_Interdistance_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 1337:
			return &((*pContext).A_Output_1);
		case 1338:
			return &((*pContext).A_Input_1);
		case 1339:
			return &((*pContext)._L1_1);
		case 1340:
			return &((*pContext)._L2_1);
		case 1341:
			return &((*pContext)._L3_1);
		case 1342:
			return &((*pContext)._L5_1);
		case 1343:
			return &((*pContext)._L8_1);
		case 1344:
			return &((*pContext)._L1);
		case 1345:
			return &((*pContext)._L2);
		case 1346:
			return &((*pContext)._L3);
		case 1347:
			return &((*pContext)._L4);
		case 1348:
			return &((*pContext)._L5);
		case 1349:
			return &((*pContext)._L6);
		case 1350:
			return &((*pContext)._L8);
		case 1351:
			return &((*pContext)._L9);
		case 1352:
			return &((*pContext)._L10);
		case 1353:
			return &((*pContext)._L11);
		case 1354:
			return &((*pContext)._L12);
		case 1355:
			return &((*pContext)._L13);
		case 1356:
			return &((*pContext)._L14);
		case 1357:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1358, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 1359, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 1360, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 1361, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Loc_real", &_SCSIM_kcg_real_Utils, 1362, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_TOOLS_convert_engineering_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_TOOLS_convert_engineering_TM_conversions* pContext = (outC_TOOLS_convert_engineering_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 1358:
			return &((*pContext)._L1);
		case 1359:
			return &((*pContext)._L2);
		case 1360:
			return &((*pContext)._L3);
		case 1361:
			return &((*pContext)._L4);
		case 1362:
			return &((*pContext).Loc_real);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** InfraLib::Send_P005/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Send_P005_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Send_P005_InfraLib_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Write_P005_TM_trackside("TM_trackside::Write_P005", "1", 1363, 1364, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1365, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_P005_trackside_int_T_TM_Utils, 1366, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 1367, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 1368, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1369, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 1370, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 1364, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1371, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Send_P005_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Send_P005_InfraLib* pContext = (outC_Send_P005_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 1363:
			return &((*pContext).Context_1);
		case 1365:
			return &((*pContext)._L3);
		case 1366:
			return &((*pContext)._L4);
		case 1367:
			return &((*pContext)._L8);
		case 1368:
			return &((*pContext)._L6);
		case 1369:
			return &((*pContext)._L7);
		case 1370:
			return &((*pContext)._L5);
		case 1364:
			return &((*pContext).tmp);
		case 1371:
			return &((*pContext).B_data_out);
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1372, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1373, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1374, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 1375, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 1376, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "element", &_SCSIM_kcg_int_Utils, 1377, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_extract_el_section_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_extract_el_section_TM_lib_internal* pContext = (outC_C_P005_extract_el_section_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1372:
			return &((*pContext)._L1);
		case 1373:
			return &((*pContext)._L2);
		case 1374:
			return &((*pContext)._L3);
		case 1375:
			return &((*pContext)._L5);
		case 1376:
			return &((*pContext)._L6);
		case 1377:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1378, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 1379, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 1380, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 1381, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 1382, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "d_link", &_SCSIM_D_LINK_Utils, 1383, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_D_LINK_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_D_LINK_TM_conversions* pContext = (outC_CAST_Int_to_D_LINK_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 1378:
			return &((*pContext)._L1);
		case 1379:
			return &((*pContext)._L9);
		case 1380:
			return &((*pContext)._L8);
		case 1381:
			return &((*pContext)._L7);
		case 1382:
			return &((*pContext)._L6);
		case 1383:
			return &((*pContext).d_link);
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
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1384_Utils, 1384);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1385_Utils, 1385);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1386, valid, 1385, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_NEWCOUNTRY_Utils, 1387, valid, 1385, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1388_Utils, 1388);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_NEWCOUNTRY_Utils, 1389, valid, 1388, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 1390, valid, 1388, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1391_Utils, 1391);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_NEWCOUNTRY_Utils, 1392, valid, 1391, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 1393, valid, 1391, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 1394, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_newcountry_in", &_SCSIM_kcg_int_Utils, 1395, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 1396, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 1397, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_newcountry", &_SCSIM_Q_NEWCOUNTRY_Utils, 1398, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions* pContext = (outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 1384:
			return &((*pContext).IfBlock1_clock);
		case 1385:
			return &((*pContext).else_clock_IfBlock1);
		case 1386:
			return &((*pContext)._L2_IfBlock1);
		case 1387:
			return &((*pContext)._L1_IfBlock1);
		case 1388:
			return &((*pContext).else_clock_IfBlock1);
		case 1389:
			return &((*pContext)._L3_IfBlock1);
		case 1390:
			return &((*pContext)._L51_IfBlock1);
		case 1391:
			return &((*pContext).IfBlock1_clock);
		case 1392:
			return &((*pContext)._L4_IfBlock1);
		case 1393:
			return &((*pContext)._L5_IfBlock1);
		case 1394:
			return &((*pContext).error);
		case 1395:
			return &((*pContext).q_newcountry_in);
		case 1396:
			return &((*pContext)._L13);
		case 1397:
			return &((*pContext)._L12);
		case 1398:
			return &((*pContext).q_newcountry);
		default:
			break;
	}
	return 0;
}

static int Is1385Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1385_Utils = {Is1385Active};

static int Is1388Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1388_Utils = {Is1388Active};

static int Is1384Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1384_Utils = {Is1384Active};

static int Is1391Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1391_Utils = {Is1391Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_LOCACC/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_LOCACC_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_LOCACC_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1399, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 1400, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 1401, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 1402, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 1403, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_locacc", &_SCSIM_Q_LOCACC_Utils, 1404, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_LOCACC_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_LOCACC_TM_conversions* pContext = (outC_CAST_Int_to_Q_LOCACC_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 1399:
			return &((*pContext)._L1);
		case 1400:
			return &((*pContext)._L9);
		case 1401:
			return &((*pContext)._L8);
		case 1402:
			return &((*pContext)._L10);
		case 1403:
			return &((*pContext)._L11);
		case 1404:
			return &((*pContext).q_locacc);
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
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1405_Utils, 1405);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1406_Utils, 1406);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1407_Utils, 1407);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1408, valid, 1407, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKREACTION_Utils, 1409, valid, 1407, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1410_Utils, 1410);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKREACTION_Utils, 1411, valid, 1410, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 1412, valid, 1410, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1413_Utils, 1413);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKREACTION_Utils, 1414, valid, 1413, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 1415, valid, 1413, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1416_Utils, 1416);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_LINKREACTION_Utils, 1417, valid, 1416, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 1418, valid, 1416, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "q_linkreaction_in", &_SCSIM_kcg_int_Utils, 1419, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 1420, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 1421, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 1422, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_linkreaction", &_SCSIM_Q_LINKREACTION_Utils, 1423, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_LINKREACTION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_LINKREACTION_TM_conversions* pContext = (outC_CAST_Int_to_Q_LINKREACTION_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 1405:
			return &((*pContext).IfBlock1_clock);
		case 1406:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 1407:
			return &((*pContext).else_clock_IfBlock1);
		case 1408:
			return &((*pContext)._L25_IfBlock1);
		case 1409:
			return &((*pContext)._L14_IfBlock1);
		case 1410:
			return &((*pContext).else_clock_IfBlock1);
		case 1411:
			return &((*pContext)._L13_IfBlock1);
		case 1412:
			return &((*pContext)._L4_IfBlock1);
		case 1413:
			return &((*pContext)._1_else_clock_IfBlock1);
		case 1414:
			return &((*pContext)._L1_IfBlock1);
		case 1415:
			return &((*pContext)._L32_IfBlock1);
		case 1416:
			return &((*pContext).IfBlock1_clock);
		case 1417:
			return &((*pContext)._L2_IfBlock1);
		case 1418:
			return &((*pContext)._L3_IfBlock1);
		case 1419:
			return &((*pContext).q_linkreaction_in);
		case 1420:
			return &((*pContext).error);
		case 1421:
			return &((*pContext)._L2);
		case 1422:
			return &((*pContext)._L4);
		case 1423:
			return &((*pContext).q_linkreaction);
		default:
			break;
	}
	return 0;
}

static int Is1407Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1407_Utils = {Is1407Active};

static int Is1410Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1410_Utils = {Is1410Active};

static int Is1406Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1406_Utils = {Is1406Active};

static int Is1413Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1413_Utils = {Is1413Active};

static int Is1405Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1405_Utils = {Is1405Active};

static int Is1416Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1416_Utils = {Is1416Active};

/****************************************************************
 ** TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CAST_Int_to_Q_LINKORIENTATION_TM_conversions(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CAST_Int_to_Q_LINKORIENTATION_TM_conversions_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1424_Utils, 1424);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1425_Utils, 1425);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 1426, valid, 1425, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_LINKORIENTATION_Utils, 1427, valid, 1425, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1428_Utils, 1428);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_LINKORIENTATION_Utils, 1429, valid, 1428, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 1430, valid, 1428, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1431_Utils, 1431);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_LINKORIENTATION_Utils, 1432, valid, 1431, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 1433, valid, 1431, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 1434, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_linkorientation_in", &_SCSIM_kcg_int_Utils, 1435, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 1436, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 1437, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "q_linkorientation", &_SCSIM_Q_LINKORIENTATION_Utils, 1438, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CAST_Int_to_Q_LINKORIENTATION_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions* pContext = (outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 1424:
			return &((*pContext).IfBlock1_clock);
		case 1425:
			return &((*pContext).else_clock_IfBlock1);
		case 1426:
			return &((*pContext)._L2_IfBlock1);
		case 1427:
			return &((*pContext)._L1_IfBlock1);
		case 1428:
			return &((*pContext).else_clock_IfBlock1);
		case 1429:
			return &((*pContext)._L3_IfBlock1);
		case 1430:
			return &((*pContext)._L51_IfBlock1);
		case 1431:
			return &((*pContext).IfBlock1_clock);
		case 1432:
			return &((*pContext)._L4_IfBlock1);
		case 1433:
			return &((*pContext)._L5_IfBlock1);
		case 1434:
			return &((*pContext).error);
		case 1435:
			return &((*pContext).q_linkorientation_in);
		case 1436:
			return &((*pContext)._L13);
		case 1437:
			return &((*pContext)._L12);
		case 1438:
			return &((*pContext).q_linkorientation);
		default:
			break;
	}
	return 0;
}

static int Is1425Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1425_Utils = {Is1425Active};

static int Is1428Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1428_Utils = {Is1428Active};

static int Is1424Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1424_Utils = {Is1424Active};

static int Is1431Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1431_Utils = {Is1431Active};

/****************************************************************
 ** TM_trackside::Write_P005/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Write_P005_TM_trackside(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Write_P005_TM_trackside_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_SIM_SEND_WriteBaliseMessa_DRAFTS("DRAFTS::SIM_SEND_WriteBaliseMessageHeader", "1", 1439, 0, 0);
	_SCSIM_Mapping_SEND_MessageData_TM_lib_internal("TM_lib_internal::SEND_MessageData", "1", 1440, 0, 0);
	_SCSIM_Mapping_C_P005_tracksim_compr_TM_conversions("TM_conversions::C_P005_tracksim_compr", "1", 1441, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_trackside_int_T_TM_Utils, 1442, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 1443, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1444, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 1445, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 1446, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 1447, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1448, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1449, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1450, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 1451, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1452, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1453, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Error", &_SCSIM_kcg_bool_Utils, 1454, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "RadioPacketsOut", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 1455, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Write_P005_TM_trackside_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Write_P005_TM_trackside* pContext = (outC_Write_P005_TM_trackside*)pInstance;
	switch (nHandleIdent) {
		case 1439:
			return &((*pContext)._1_Context_1);
		case 1440:
			return &((*pContext)._2_Context_1);
		case 1441:
			return &((*pContext).Context_1);
		case 1442:
			return &((*pContext)._L1);
		case 1443:
			return &((*pContext)._L4);
		case 1444:
			return &((*pContext)._L10);
		case 1445:
			return &((*pContext)._L18);
		case 1446:
			return &((*pContext)._L21);
		case 1447:
			return &((*pContext)._L22);
		case 1448:
			return &((*pContext)._L39);
		case 1449:
			return &((*pContext)._L40);
		case 1450:
			return &((*pContext)._L42);
		case 1451:
			return &((*pContext)._L41);
		case 1452:
			return &((*pContext)._L44);
		case 1453:
			return &((*pContext)._L43);
		case 1454:
			return &((*pContext).Error);
		case 1455:
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
	_SCSIM_Mapping_SEND_FindSlot_DRAFTS("DRAFTS::SEND_FindSlot", "1", 1456, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 1457, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 1458, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 1459, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 1460, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1461, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 1462, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 1463, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 1464, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 1465, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 1466, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 1467, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 1468, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 1469, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_int_Utils, 1470, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_int_Utils, 1471, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_int_Utils, 1472, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_int_Utils, 1473, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_kcg_int_Utils, 1474, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1475, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1476, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 1477, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1478, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "HeadersOut", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 1479, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NewStartAddr", &_SCSIM_kcg_int_Utils, 1480, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NewEndAddr", &_SCSIM_kcg_int_Utils, 1481, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SIM_SEND_WriteBaliseMessa_DRAFTS_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SIM_SEND_WriteBaliseMessa_DRAFTS* pContext = (outC_SIM_SEND_WriteBaliseMessa_DRAFTS*)pInstance;
	switch (nHandleIdent) {
		case 1456:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 1457:
			return &((*pContext)._L1);
		case 1458:
			return &((*pContext)._L4);
		case 1459:
			return &((*pContext)._L5);
		case 1460:
			return &((*pContext)._L8);
		case 1461:
			return &((*pContext)._L9);
		case 1462:
			return &((*pContext)._L16);
		case 1463:
			return &((*pContext)._L17);
		case 1464:
			return &((*pContext)._L18);
		case 1465:
			return &((*pContext)._L22);
		case 1466:
			return &((*pContext)._L23);
		case 1467:
			return &((*pContext)._L24);
		case 1468:
			return &((*pContext)._L31);
		case 1469:
			return &((*pContext)._L32);
		case 1470:
			return &((*pContext)._L33);
		case 1471:
			return &((*pContext)._L34);
		case 1472:
			return &((*pContext)._L35);
		case 1473:
			return &((*pContext)._L36);
		case 1474:
			return &((*pContext)._L37);
		case 1475:
			return &((*pContext)._L43);
		case 1476:
			return &((*pContext)._L44);
		case 1477:
			return &((*pContext)._L7);
		case 1478:
			return &((*pContext)._L3);
		case 1479:
			return &((*pContext).HeadersOut);
		case 1480:
			return &((*pContext).NewStartAddr);
		case 1481:
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
	_SCSIM_Mapping_SEND_WriteBaliseDataElement_TM_lib_internal("TM_lib_internal::SEND_WriteBaliseDataElement", "1", 1482, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1483, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L402", &_SCSIM_kcg_int_Utils, 1484, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L403", &_SCSIM_kcg_bool_Utils, 1485, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L404", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1486, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L406", &_SCSIM_array_int_500_Utils, 1487, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L407", &_SCSIM_kcg_int_Utils, 1488, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L408", &_SCSIM_kcg_int_Utils, 1489, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L413", &_SCSIM_array_int_500_500_Utils, 1490, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L414", &_SCSIM_array_int_500_Utils, 1491, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L415", &_SCSIM_array_int_500_Utils, 1492, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "DataOut", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1493, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_MessageData_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_MessageData_TM_lib_internal* pContext = (outC_SEND_MessageData_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1482:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 1483:
			return &((*pContext)._L1);
		case 1484:
			return &((*pContext)._L402);
		case 1485:
			return &((*pContext)._L403);
		case 1486:
			return &((*pContext)._L404);
		case 1487:
			return &((*pContext)._L406);
		case 1488:
			return &((*pContext)._L407);
		case 1489:
			return &((*pContext)._L408);
		case 1490:
			return &((*pContext)._L413);
		case 1491:
			return &((*pContext)._L414);
		case 1492:
			return &((*pContext)._L415);
		case 1493:
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
	pSimulator->m_pfnAddOutput(pSimulator, "q_dir", &_SCSIM_Q_DIR_Utils, 1494, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "q_dir_int", &_SCSIM_kcg_int_Utils, 1495, valid, 0, 0);
	pSimulator->m_pfnPushActivateIf(pSimulator, "IfBlock1");
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1496_Utils, 1496);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1497_Utils, 1497);
	pSimulator->m_pfnPushBranch(pSimulator, "else", &_SCSIM_1498_Utils, 1498);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 1499, valid, 1498, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 1500, valid, 1498, &_SCSIM_ClockActive_kcg_false);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1501_Utils, 1501);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIR_Utils, 1502, valid, 1501, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 1503, valid, 1501, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1504_Utils, 1504);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_DIR_Utils, 1505, valid, 1504, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 1506, valid, 1504, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPushBranch(pSimulator, "then", &_SCSIM_1507_Utils, 1507);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_DIR_Utils, 1508, valid, 1507, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 1509, valid, 1507, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnPopBranch(pSimulator);
	pSimulator->m_pfnPopActivateIf(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "error", &_SCSIM_kcg_bool_Utils, 1510, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "q_dir_in", &_SCSIM_kcg_int_Utils, 1511, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 1512, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 1513, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_DeterminePacketSizeInt_TM_lib_internal("TM_lib_internal::DeterminePacketSizeInt", "1", 1514, 0, 0);
	_SCSIM_Mapping_C_P005_flatten_sections_TM_lib_internal("TM_lib_internal::C_P005_flatten_sections", "1", 1515, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "p_size", &_SCSIM_kcg_int_Utils, 1516, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_trackside_int_T_TM_Utils, 1517, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L204", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1518, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L206", &_SCSIM_kcg_int_Utils, 1519, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L209", &_SCSIM_array_int_264_Utils, 1520, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L212", &_SCSIM_kcg_int_Utils, 1521, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L213", &_SCSIM_kcg_int_Utils, 1522, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L336", &_SCSIM_kcg_int_Utils, 1523, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L219", &_SCSIM_kcg_int_Utils, 1524, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L218", &_SCSIM_kcg_int_Utils, 1525, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L217", &_SCSIM_kcg_int_Utils, 1526, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L216", &_SCSIM_kcg_int_Utils, 1527, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L215", &_SCSIM_kcg_int_Utils, 1528, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L214", &_SCSIM_kcg_bool_Utils, 1529, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L356", &_SCSIM_Q_DIR_Utils, 1530, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L371", &_SCSIM_kcg_int_Utils, 1531, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L370", &_SCSIM_kcg_int_Utils, 1532, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L369", &_SCSIM_kcg_int_Utils, 1533, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L368", &_SCSIM_kcg_int_Utils, 1534, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L367", &_SCSIM_kcg_int_Utils, 1535, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L366", &_SCSIM_kcg_int_Utils, 1536, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L365", &_SCSIM_P005_trackide_sectionlist_T_TM_Utils, 1537, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L373", &_SCSIM_array_int_4_Utils, 1538, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L375", &_SCSIM_P005_section_int_T_TM_Utils, 1539, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L376", &_SCSIM_array_int_1_Utils, 1540, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L378", &_SCSIM_kcg_int_Utils, 1541, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L379", &_SCSIM_kcg_int_Utils, 1542, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L380", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1543, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L381", &_SCSIM_array_int_5_Utils, 1544, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L383", &_SCSIM_array_int_500_Utils, 1545, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L384", &_SCSIM_array_int_236_Utils, 1546, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L386", &_SCSIM_array__5451_Utils, 1547, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L385", &_SCSIM_array__5427_Utils, 1548, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L387", &_SCSIM_kcg_int_Utils, 1549, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Header", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1550, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "P005_compressed", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1551, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_tracksim_compr_TM_conversions_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_tracksim_compr_TM_conversions* pContext = (outC_C_P005_tracksim_compr_TM_conversions*)pInstance;
	switch (nHandleIdent) {
		case 1494:
			return &((*pContext).q_dir_1);
		case 1495:
			return &((*pContext).q_dir_int_1);
		case 1496:
			return &((*pContext).IfBlock1_clock_1);
		case 1497:
			return &((*pContext)._3_else_clock_1_IfBlock1);
		case 1498:
			return &((*pContext).else_clock_1_IfBlock1);
		case 1499:
			return &((*pContext)._L2_1_IfBlock1);
		case 1500:
			return &((*pContext)._L1_1_IfBlock1);
		case 1501:
			return &((*pContext).else_clock_1_IfBlock1);
		case 1502:
			return &((*pContext)._L2_12_IfBlock1);
		case 1503:
			return &((*pContext)._L4_1_IfBlock1);
		case 1504:
			return &((*pContext)._3_else_clock_1_IfBlock1);
		case 1505:
			return &((*pContext)._L3_1_IfBlock1);
		case 1506:
			return &((*pContext)._L5_1_IfBlock1);
		case 1507:
			return &((*pContext).IfBlock1_clock_1);
		case 1508:
			return &((*pContext)._L4_14_IfBlock1);
		case 1509:
			return &((*pContext)._L5_15_IfBlock1);
		case 1510:
			return &((*pContext).error_1);
		case 1511:
			return &((*pContext).q_dir_in_1);
		case 1512:
			return &((*pContext)._L13_1);
		case 1513:
			return &((*pContext)._L12_1);
		case 1514:
			return &((*pContext)._1_Context_1);
		case 1515:
			return &((*pContext).Context_1);
		case 1516:
			return &((*pContext).p_size);
		case 1517:
			return &((*pContext)._L1);
		case 1518:
			return &((*pContext)._L204);
		case 1519:
			return &((*pContext)._L206);
		case 1520:
			return &((*pContext)._L209);
		case 1521:
			return &((*pContext)._L212);
		case 1522:
			return &((*pContext)._L213);
		case 1523:
			return &((*pContext)._L336);
		case 1524:
			return &((*pContext)._L219);
		case 1525:
			return &((*pContext)._L218);
		case 1526:
			return &((*pContext)._L217);
		case 1527:
			return &((*pContext)._L216);
		case 1528:
			return &((*pContext)._L215);
		case 1529:
			return &((*pContext)._L214);
		case 1530:
			return &((*pContext)._L356);
		case 1531:
			return &((*pContext)._L371);
		case 1532:
			return &((*pContext)._L370);
		case 1533:
			return &((*pContext)._L369);
		case 1534:
			return &((*pContext)._L368);
		case 1535:
			return &((*pContext)._L367);
		case 1536:
			return &((*pContext)._L366);
		case 1537:
			return &((*pContext)._L365);
		case 1538:
			return &((*pContext)._L373);
		case 1539:
			return &((*pContext)._L375);
		case 1540:
			return &((*pContext)._L376);
		case 1541:
			return &((*pContext)._L378);
		case 1542:
			return &((*pContext)._L379);
		case 1543:
			return &((*pContext)._L380);
		case 1544:
			return &((*pContext)._L381);
		case 1545:
			return &((*pContext)._L383);
		case 1546:
			return &((*pContext)._L384);
		case 1547:
			return &((*pContext)._L386);
		case 1548:
			return &((*pContext)._L385);
		case 1549:
			return &((*pContext)._L387);
		case 1550:
			return &((*pContext).Header);
		case 1551:
			return &((*pContext).P005_compressed);
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

static int Is1496Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 0 : 1;
}
ControlUtils _SCSIM_1496_Utils = {Is1496Active};

static int Is1507Active(void * pHandle) {
	return *((kcg_bool*)pHandle) != kcg_false  ? 1 : 0;
}
ControlUtils _SCSIM_1507_Utils = {Is1507Active};

/****************************************************************
 ** DRAFTS::SEND_FindSlot/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SEND_FindSlot_DRAFTS(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SEND_FindSlot_DRAFTS_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1552, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1553, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 1554, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 1555, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_int_Utils, 1556, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_NID_PACKET_Utils, 1557, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 1558, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_NID_PACKET_Utils, 1559, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 1560, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Acc", &_SCSIM_kcg_int_Utils, 1561, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_FindSlot_DRAFTS_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_FindSlot_DRAFTS* pContext = (outC_SEND_FindSlot_DRAFTS*)pInstance;
	switch (nHandleIdent) {
		case 1552:
			return &((*pContext)._L1);
		case 1553:
			return &((*pContext)._L2);
		case 1554:
			return &((*pContext)._L3);
		case 1555:
			return &((*pContext)._L17);
		case 1556:
			return &((*pContext)._L19);
		case 1557:
			return &((*pContext)._L27);
		case 1558:
			return &((*pContext)._L28);
		case 1559:
			return &((*pContext)._L29);
		case 1560:
			return &((*pContext).Cont);
		case 1561:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1562, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 1563, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 1564, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 1565, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 1566, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 1567, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 1568, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 1569, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 1570, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 1571, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 1572, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 1573, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 1574, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 1575, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "DataOut", &_SCSIM_kcg_int_Utils, 1576, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_WriteBaliseDataElement_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_WriteBaliseDataElement_TM_lib_internal* pContext = (outC_SEND_WriteBaliseDataElement_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1562:
			return &((*pContext)._L1);
		case 1563:
			return &((*pContext)._L2);
		case 1564:
			return &((*pContext)._L3);
		case 1565:
			return &((*pContext)._L4);
		case 1566:
			return &((*pContext)._L5);
		case 1567:
			return &((*pContext)._L6);
		case 1568:
			return &((*pContext)._L7);
		case 1569:
			return &((*pContext)._L8);
		case 1570:
			return &((*pContext)._L9);
		case 1571:
			return &((*pContext)._L10);
		case 1572:
			return &((*pContext)._L14);
		case 1573:
			return &((*pContext)._L16);
		case 1574:
			return &((*pContext)._L17);
		case 1575:
			return &((*pContext).Cont);
		case 1576:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 1577, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 1578, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1579, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 1580, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 1581, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "p_size", &_SCSIM_kcg_int_Utils, 1582, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_DeterminePacketSizeInt_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_DeterminePacketSizeInt_TM_lib_internal* pContext = (outC_DeterminePacketSizeInt_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1577:
			return &((*pContext)._L1);
		case 1578:
			return &((*pContext)._L2);
		case 1579:
			return &((*pContext)._L3);
		case 1580:
			return &((*pContext)._L6);
		case 1581:
			return &((*pContext)._L7);
		case 1582:
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
	_SCSIM_Mapping_C_P005_fs_flatten_array_TM_lib_internal("TM_lib_internal::C_P005_fs_flatten_array", "2", 1583, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnPushIterator(pSimulator, "map", 33, 33);
	_SCSIM_Mapping_C_P005_fs_struct_to_array_TM_lib_internal("TM_lib_internal::C_P005_fs_struct_to_array", "2", 1584, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L76", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1585, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L75", &_SCSIM_P005_OBU_sectionlist_int_T_TM_Utils, 1586, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L74", &_SCSIM_array_int_7_33_Utils, 1587, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L78", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1588, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L80", &_SCSIM_array_int_7_33_231_Utils, 1589, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Flattened", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1590, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_flatten_sections_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_flatten_sections_TM_lib_internal* pContext = (outC_C_P005_flatten_sections_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1583:
			if (nSize != 1)
				break;
			return &((*pContext)._1_Context_2[pIteratorFilter[0]]);
		case 1584:
			if (nSize != 1)
				break;
			return &((*pContext).Context_2[pIteratorFilter[0]]);
		case 1585:
			return &((*pContext)._L76);
		case 1586:
			return &((*pContext)._L75);
		case 1587:
			return &((*pContext)._L74);
		case 1588:
			return &((*pContext)._L78);
		case 1589:
			return &((*pContext)._L80);
		case 1590:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1591, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1592, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 1593, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 1594, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1595, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 1596, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_P005_OBU_sectionlist_array_T_TM_Utils, 1597, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 1598, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L154", &_SCSIM_kcg_int_Utils, 1599, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "flat", &_SCSIM_P005_sections_array_flat_T_TM_Utils, 1600, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_fs_flatten_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_fs_flatten_array_TM_lib_internal* pContext = (outC_C_P005_fs_flatten_array_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1591:
			return &((*pContext)._L1);
		case 1592:
			return &((*pContext)._L3);
		case 1593:
			return &((*pContext)._L5);
		case 1594:
			return &((*pContext)._L6);
		case 1595:
			return &((*pContext)._L7);
		case 1596:
			return &((*pContext)._L8);
		case 1597:
			return &((*pContext)._L2);
		case 1598:
			return &((*pContext)._L10);
		case 1599:
			return &((*pContext)._L154);
		case 1600:
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_P005_section_int_T_TM_Utils, 1601, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_array_int_7_Utils, 1602, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 1603, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 1604, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 1605, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 1606, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 1607, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 1608, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 1609, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "section_arrays", &_SCSIM_P005_section_array_T_TM_Utils, 1610, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_C_P005_fs_struct_to_array_TM_lib_internal_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_C_P005_fs_struct_to_array_TM_lib_internal* pContext = (outC_C_P005_fs_struct_to_array_TM_lib_internal*)pInstance;
	switch (nHandleIdent) {
		case 1601:
			return &((*pContext)._L1);
		case 1602:
			return &((*pContext)._L2);
		case 1603:
			return &((*pContext)._L6);
		case 1604:
			return &((*pContext)._L5);
		case 1605:
			return &((*pContext)._L4);
		case 1606:
			return &((*pContext)._L3);
		case 1607:
			return &((*pContext)._L12);
		case 1608:
			return &((*pContext)._L11);
		case 1609:
			return &((*pContext)._L10);
		case 1610:
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
