#include "Balise_Group_364_FirstTest_InfraLib_mapping.h"
#include "Balise_Group_364_FirstTest_InfraLib_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_Balise_Group_364_FirstTest_InfraLib();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** FirstTest::InfraLib::Balise_Group_364/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_364_FirstTest_InfraLib() {
	pSimulator->m_pfnSetRoot(pSimulator, "FirstTest::InfraLib::Balise_Group_364/", &outputs_ctx, _SCSIM_Get_Balise_Group_364_FirstTest_InfraLib_Handle);
	_SCSIM_Mapping_Balise_364_1_FirstTest_InfraLib("FirstTest::InfraLib::Balise_364_1", "1", 1, 0, 0);
	/*<< Inlined FirstTest::InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Balise", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Balise", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Balise", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Balise", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Balise", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Balise*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Balise", "7", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Header", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PIG_nom", &_SCSIM_kcg_int_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Balise_Group_Init_FirstTest_InfraLib("FirstTest::InfraLib::Balise_Group_Init", "1", 44, 0, 0);
	_SCSIM_Mapping_Balise_Group_Close_FirstTest_InfraLib("FirstTest::InfraLib::Balise_Group_Close", "1", 45, 0, 0);
	_SCSIM_Mapping_Balise_364_0_FirstTest_InfraLib("FirstTest::InfraLib::Balise_364_0", "1", 46, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataIn", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 47, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "BaliseDataOut", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_TM_CompressedBaliseMessage_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 60, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_TM_BaliseGroupData_Utils, 61, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_int_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_int_Utils, 66, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_int_Utils, 67, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_int_Utils, 68, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_int_Utils, 69, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 70, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_real_Utils, 71, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_TM_CompressedBaliseMessage_Utils, 72, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_TM_CompressedBaliseMessage_Utils, 73, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "BG_message_in", &_SCSIM_TM_CompressedBaliseMessage_Utils, 74, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "TrainPos", &_SCSIM_kcg_real_Utils, 75, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Engineering_Data", &_SCSIM_TM_BaliseGroupData_Utils, 76, valid, 0, 0);
}

void* _SCSIM_Get_Balise_Group_364_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._2_Context_1);
		case 2:
			return &(outputs_ctx.B_data_out_2);
		case 3:
			return &(outputs_ctx.B_data_in_2);
		case 4:
			return &(outputs_ctx.Header_2);
		case 5:
			return &(outputs_ctx.PIG_nom_2);
		case 6:
			return &(outputs_ctx._L1_2);
		case 7:
			return &(outputs_ctx._L2_2);
		case 8:
			return &(outputs_ctx._L3_2);
		case 9:
			return &(outputs_ctx.B_data_out_3);
		case 10:
			return &(outputs_ctx.B_data_in_3);
		case 11:
			return &(outputs_ctx.Header_3);
		case 12:
			return &(outputs_ctx.PIG_nom_3);
		case 13:
			return &(outputs_ctx._L1_3);
		case 14:
			return &(outputs_ctx._L2_3);
		case 15:
			return &(outputs_ctx._L3_3);
		case 16:
			return &(outputs_ctx.B_data_out_4);
		case 17:
			return &(outputs_ctx.B_data_in_4);
		case 18:
			return &(outputs_ctx.Header_4);
		case 19:
			return &(outputs_ctx.PIG_nom_4);
		case 20:
			return &(outputs_ctx._L1_4);
		case 21:
			return &(outputs_ctx._L2_4);
		case 22:
			return &(outputs_ctx._L3_4);
		case 23:
			return &(outputs_ctx.B_data_out_5);
		case 24:
			return &(outputs_ctx.B_data_in_5);
		case 25:
			return &(outputs_ctx.Header_5);
		case 26:
			return &(outputs_ctx.PIG_nom_5);
		case 27:
			return &(outputs_ctx._L1_5);
		case 28:
			return &(outputs_ctx._L2_5);
		case 29:
			return &(outputs_ctx._L3_5);
		case 30:
			return &(outputs_ctx.B_data_out_6);
		case 31:
			return &(outputs_ctx.B_data_in_6);
		case 32:
			return &(outputs_ctx.Header_6);
		case 33:
			return &(outputs_ctx.PIG_nom_6);
		case 34:
			return &(outputs_ctx._L1_6);
		case 35:
			return &(outputs_ctx._L2_6);
		case 36:
			return &(outputs_ctx._L3_6);
		case 37:
			return &(outputs_ctx.B_data_out_7);
		case 38:
			return &(outputs_ctx.B_data_in_7);
		case 39:
			return &(outputs_ctx.Header_7);
		case 40:
			return &(outputs_ctx.PIG_nom_7);
		case 41:
			return &(outputs_ctx._L1_7);
		case 42:
			return &(outputs_ctx._L2_7);
		case 43:
			return &(outputs_ctx._L3_7);
		case 44:
			return &(outputs_ctx.Context_1);
		case 45:
			return &(outputs_ctx._3_Context_1);
		case 46:
			return &(outputs_ctx._1_Context_1);
		case 47:
			return &(outputs_ctx.BaliseDataIn);
		case 48:
			return &(outputs_ctx.BaliseDataOut);
		case 49:
			return &(outputs_ctx._L1);
		case 50:
			return &(outputs_ctx._L2);
		case 51:
			return &(outputs_ctx._L3);
		case 52:
			return &(outputs_ctx._L4);
		case 53:
			return &(outputs_ctx._L5);
		case 54:
			return &(outputs_ctx._L6);
		case 55:
			return &(outputs_ctx._L7);
		case 56:
			return &(outputs_ctx._L9);
		case 57:
			return &(outputs_ctx._L11);
		case 58:
			return &(outputs_ctx._L13);
		case 59:
			return &(outputs_ctx._L14);
		case 60:
			return &(outputs_ctx._L16);
		case 61:
			return &(outputs_ctx._L19);
		case 62:
			return &(outputs_ctx._L20);
		case 63:
			return &(outputs_ctx._L21);
		case 64:
			return &(outputs_ctx._L22);
		case 65:
			return &(outputs_ctx._L23);
		case 66:
			return &(outputs_ctx._L24);
		case 67:
			return &(outputs_ctx._L25);
		case 68:
			return &(outputs_ctx._L26);
		case 69:
			return &(outputs_ctx._L27);
		case 70:
			return &(outputs_ctx._L8);
		case 71:
			return &(outputs_ctx._L28);
		case 72:
			return &(outputs_ctx._L29);
		case 73:
			return &(outputs_ctx.BG_message_out);
		case 74:
			return &(inputs_ctx.BG_message_in);
		case 75:
			return &(inputs_ctx.TrainPos);
		case 76:
			return &(inputs_ctx.Engineering_Data);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLib::Balise_364_1/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_364_1_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_364_1_FirstTest_InfraLib_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLib("FirstTest::InfraLib::Balise_Localisation", "1", 77, 0, 0);
	_SCSIM_Mapping_Balise_Packets_364_FirstTest_InfraLib("FirstTest::InfraLib::Balise_Packets_364", "1", 78, 79, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 80, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 81, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 82, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 83, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 84, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 85, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 86, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 87, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 88, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 89, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 79, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 90, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_364_1_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_364_1_FirstTest_InfraLib* pContext = (outC_Balise_364_1_FirstTest_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 77:
			return &((*pContext).Context_1);
		case 78:
			return &((*pContext)._1_Context_1);
		case 80:
			return &((*pContext)._L2);
		case 81:
			return &((*pContext)._L4);
		case 82:
			return &((*pContext)._L5);
		case 83:
			return &((*pContext)._L15);
		case 84:
			return &((*pContext)._L17);
		case 85:
			return &((*pContext)._L19);
		case 86:
			return &((*pContext)._L20);
		case 87:
			return &((*pContext)._L21);
		case 88:
			return &((*pContext)._L23);
		case 89:
			return &((*pContext)._L25);
		case 79:
			return &((*pContext).tmp);
		case 90:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLib::Balise_Group_Init/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_Init_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_Init_FirstTest_InfraLib_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_TM_BaliseGroupData_Utils, 91, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 92, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 93, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 94, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 95, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_int_Utils, 96, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_real_Utils, 97, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_bool_Utils, 98, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_internal_out", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 99, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_Init_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_Init_FirstTest_InfraLib* pContext = (outC_Balise_Group_Init_FirstTest_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 91:
			return &((*pContext)._L2);
		case 92:
			return &((*pContext)._L14);
		case 93:
			return &((*pContext)._L26);
		case 94:
			return &((*pContext)._L27);
		case 95:
			return &((*pContext)._L28);
		case 96:
			return &((*pContext)._L29);
		case 97:
			return &((*pContext)._L30);
		case 98:
			return &((*pContext)._L31);
		case 99:
			return &((*pContext).BG_internal_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLib::Balise_Group_Close/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Group_Close_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Group_Close_FirstTest_InfraLib_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_TM_CompressedBaliseMessage_Utils, 100, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_TM_CompressedBaliseMessage_Utils, 101, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 102, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 103, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 104, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_TM_CompressedBaliseMessage_Utils, 105, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 106, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_bool_Utils, 107, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Error_out", &_SCSIM_kcg_bool_Utils, 108, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "BG_message_out", &_SCSIM_TM_CompressedBaliseMessage_Utils, 109, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Group_Close_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Group_Close_FirstTest_InfraLib* pContext = (outC_Balise_Group_Close_FirstTest_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 100:
			return &((*pContext)._L2);
		case 101:
			return &((*pContext)._L20);
		case 102:
			return &((*pContext)._L21);
		case 103:
			return &((*pContext)._L22);
		case 104:
			return &((*pContext)._L23);
		case 105:
			return &((*pContext)._L24);
		case 106:
			return &((*pContext)._L25);
		case 107:
			return &((*pContext)._L26);
		case 108:
			return &((*pContext).Error_out);
		case 109:
			return &((*pContext).BG_message_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLib::Balise_364_0/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_364_0_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_364_0_FirstTest_InfraLib_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLib("FirstTest::InfraLib::Balise_Localisation", "1", 110, 0, 0);
	_SCSIM_Mapping_Balise_Packets_364_FirstTest_InfraLib("FirstTest::InfraLib::Balise_Packets_364", "1", 111, 112, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 113, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 114, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 115, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 116, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 117, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 118, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_int_Utils, 119, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 120, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 121, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 122, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 112, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 123, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_364_0_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_364_0_FirstTest_InfraLib* pContext = (outC_Balise_364_0_FirstTest_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 110:
			return &((*pContext).Context_1);
		case 111:
			return &((*pContext)._1_Context_1);
		case 113:
			return &((*pContext)._L2);
		case 114:
			return &((*pContext)._L4);
		case 115:
			return &((*pContext)._L5);
		case 116:
			return &((*pContext)._L15);
		case 117:
			return &((*pContext)._L17);
		case 118:
			return &((*pContext)._L19);
		case 119:
			return &((*pContext)._L20);
		case 120:
			return &((*pContext)._L21);
		case 121:
			return &((*pContext)._L23);
		case 122:
			return &((*pContext)._L25);
		case 112:
			return &((*pContext).tmp);
		case 123:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLib::Balise_Localisation/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Localisation_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Localisation_FirstTest_InfraLib_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L73", &_SCSIM_kcg_real_Utils, 124, valid, 0, 0);
	_SCSIM_Mapping_Balise_Interdistance_FirstTest_InfraLib("FirstTest::InfraLib::Balise_Interdistance", "1", 125, 0, 0);
	_SCSIM_Mapping_TOOLS_convert_engineering("TOOLS_convert_engineering_location", "1", 126, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 127, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 128, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_kcg_int_Utils, 129, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_kcg_int_Utils, 130, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_kcg_bool_Utils, 131, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L51", &_SCSIM_kcg_int_Utils, 132, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L52", &_SCSIM_kcg_int_Utils, 133, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L65", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 134, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L66", &_SCSIM_kcg_int_Utils, 135, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L72", &_SCSIM_kcg_bool_Utils, 136, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L71", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 137, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L70", &_SCSIM_kcg_real_Utils, 138, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L69", &_SCSIM_kcg_bool_Utils, 139, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L68", &_SCSIM_kcg_int_Utils, 140, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L67", &_SCSIM_kcg_bool_Utils, 141, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L75", &_SCSIM_kcg_real_Utils, 142, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L76", &_SCSIM_kcg_real_Utils, 143, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L77", &_SCSIM_kcg_real_Utils, 144, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "PIG_0_out", &_SCSIM_kcg_int_Utils, 145, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TrainPass", &_SCSIM_kcg_bool_Utils, 146, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Localisation_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Localisation_FirstTest_InfraLib* pContext = (outC_Balise_Localisation_FirstTest_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 124:
			return &((*pContext)._L73);
		case 125:
			return &((*pContext)._1_Context_1);
		case 126:
			return &((*pContext).Context_1);
		case 127:
			return &((*pContext)._L15);
		case 128:
			return &((*pContext)._L16);
		case 129:
			return &((*pContext)._L47);
		case 130:
			return &((*pContext)._L48);
		case 131:
			return &((*pContext)._L50);
		case 132:
			return &((*pContext)._L51);
		case 133:
			return &((*pContext)._L52);
		case 134:
			return &((*pContext)._L65);
		case 135:
			return &((*pContext)._L66);
		case 136:
			return &((*pContext)._L72);
		case 137:
			return &((*pContext)._L71);
		case 138:
			return &((*pContext)._L70);
		case 139:
			return &((*pContext)._L69);
		case 140:
			return &((*pContext)._L68);
		case 141:
			return &((*pContext)._L67);
		case 142:
			return &((*pContext)._L75);
		case 143:
			return &((*pContext)._L76);
		case 144:
			return &((*pContext)._L77);
		case 145:
			return &((*pContext).PIG_0_out);
		case 146:
			return &((*pContext).TrainPass);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLib::Balise_Packets_364/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Packets_364_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Packets_364_FirstTest_InfraLib_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "21", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 147, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 148, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 149, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "22", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 150, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 151, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 152, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "23", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 153, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 154, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 155, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 156, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 157, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 158, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 159, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 160, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 161, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 162, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 163, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 164, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "7", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 165, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 166, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 167, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "8", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 168, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 169, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 170, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "9", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 171, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 172, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 173, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	_SCSIM_Mapping_Send_364_P005_FirstTest_InfraLib("FirstTest::InfraLib::Send_364_P005", "2", 174, 0, 0);
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "11", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 175, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 176, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 177, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "12", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 178, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 179, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 180, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "13", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 181, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 182, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 183, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "14", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 184, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 185, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 186, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "15", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 187, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 188, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 189, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "16", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 190, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 191, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 192, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "17", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 193, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 194, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 195, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "18", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 196, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 197, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 198, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "19", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 199, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 200, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 201, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined FirstTest::InfraLib::No_Packet*/
	pSimulator->m_pfnPushInstance(pSimulator, "FirstTest::InfraLib::No_Packet", "20", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 202, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 203, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 204, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "B_data_in", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 205, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 206, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "B_data_link", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 207, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 208, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 209, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 210, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 211, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 212, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 213, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 214, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 215, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 216, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 217, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 218, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 219, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 220, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 221, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 222, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 223, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 224, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 225, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 226, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 227, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 228, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 229, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 230, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 231, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_TM_BaliseTelegramHeader_int_T_Utils, 232, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 233, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 234, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 235, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Balise_data_out", &_SCSIM_B_data_internal_FirstTest_InfraLib_Utils, 236, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Packets_364_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Packets_364_FirstTest_InfraLib* pContext = (outC_Balise_Packets_364_FirstTest_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 147:
			return &((*pContext).B_data_out_21);
		case 148:
			return &((*pContext).B_data_in_21);
		case 149:
			return &((*pContext)._L1_21);
		case 150:
			return &((*pContext).B_data_out_22);
		case 151:
			return &((*pContext).B_data_in_22);
		case 152:
			return &((*pContext)._L1_22);
		case 153:
			return &((*pContext).B_data_out_23);
		case 154:
			return &((*pContext).B_data_in_23);
		case 155:
			return &((*pContext)._L1_23);
		case 156:
			return &((*pContext).B_data_out_4);
		case 157:
			return &((*pContext).B_data_in_4);
		case 158:
			return &((*pContext)._L1_4);
		case 159:
			return &((*pContext).B_data_out_5);
		case 160:
			return &((*pContext).B_data_in_5);
		case 161:
			return &((*pContext)._L1_5);
		case 162:
			return &((*pContext).B_data_out_6);
		case 163:
			return &((*pContext).B_data_in_6);
		case 164:
			return &((*pContext)._L1_6);
		case 165:
			return &((*pContext).B_data_out_7);
		case 166:
			return &((*pContext).B_data_in_7);
		case 167:
			return &((*pContext)._L1_7);
		case 168:
			return &((*pContext).B_data_out_8);
		case 169:
			return &((*pContext).B_data_in_8);
		case 170:
			return &((*pContext)._L1_8);
		case 171:
			return &((*pContext).B_data_out_9);
		case 172:
			return &((*pContext).B_data_in_9);
		case 173:
			return &((*pContext)._L1_9);
		case 174:
			return &((*pContext).Context_2);
		case 175:
			return &((*pContext).B_data_out_11);
		case 176:
			return &((*pContext).B_data_in_11);
		case 177:
			return &((*pContext)._L1_11);
		case 178:
			return &((*pContext).B_data_out_12);
		case 179:
			return &((*pContext).B_data_in_12);
		case 180:
			return &((*pContext)._L1_12);
		case 181:
			return &((*pContext).B_data_out_13);
		case 182:
			return &((*pContext).B_data_in_13);
		case 183:
			return &((*pContext)._L1_13);
		case 184:
			return &((*pContext).B_data_out_14);
		case 185:
			return &((*pContext).B_data_in_14);
		case 186:
			return &((*pContext)._L1_14);
		case 187:
			return &((*pContext).B_data_out_15);
		case 188:
			return &((*pContext).B_data_in_15);
		case 189:
			return &((*pContext)._L1_15);
		case 190:
			return &((*pContext).B_data_out_16);
		case 191:
			return &((*pContext).B_data_in_16);
		case 192:
			return &((*pContext)._L1_16);
		case 193:
			return &((*pContext).B_data_out_17);
		case 194:
			return &((*pContext).B_data_in_17);
		case 195:
			return &((*pContext)._L1_17);
		case 196:
			return &((*pContext).B_data_out_18);
		case 197:
			return &((*pContext).B_data_in_18);
		case 198:
			return &((*pContext)._L1_18);
		case 199:
			return &((*pContext).B_data_out_19);
		case 200:
			return &((*pContext).B_data_in_19);
		case 201:
			return &((*pContext)._L1_19);
		case 202:
			return &((*pContext).B_data_out_20);
		case 203:
			return &((*pContext).B_data_in_20);
		case 204:
			return &((*pContext)._L1_20);
		case 205:
			return &((*pContext).B_data_in);
		case 206:
			return &((*pContext).B_data_out);
		case 207:
			return &((*pContext).B_data_link);
		case 208:
			return &((*pContext)._L2);
		case 209:
			return &((*pContext)._L3);
		case 210:
			return &((*pContext)._L4);
		case 211:
			return &((*pContext)._L5);
		case 212:
			return &((*pContext)._L6);
		case 213:
			return &((*pContext)._L7);
		case 214:
			return &((*pContext)._L8);
		case 215:
			return &((*pContext)._L9);
		case 216:
			return &((*pContext)._L10);
		case 217:
			return &((*pContext)._L11);
		case 218:
			return &((*pContext)._L21);
		case 219:
			return &((*pContext)._L20);
		case 220:
			return &((*pContext)._L19);
		case 221:
			return &((*pContext)._L18);
		case 222:
			return &((*pContext)._L17);
		case 223:
			return &((*pContext)._L16);
		case 224:
			return &((*pContext)._L15);
		case 225:
			return &((*pContext)._L14);
		case 226:
			return &((*pContext)._L13);
		case 227:
			return &((*pContext)._L12);
		case 228:
			return &((*pContext)._L22);
		case 229:
			return &((*pContext)._L24);
		case 230:
			return &((*pContext)._L25);
		case 231:
			return &((*pContext)._L26);
		case 232:
			return &((*pContext)._L28);
		case 233:
			return &((*pContext)._L29);
		case 234:
			return &((*pContext)._L30);
		case 235:
			return &((*pContext)._L31);
		case 236:
			return &((*pContext).Balise_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLib::Balise_Interdistance/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Balise_Interdistance_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Balise_Interdistance_FirstTest_InfraLib_Handle, nClockHandleIdent, pfnClockActive);
	/*<< Inlined math::Abs*/
	pSimulator->m_pfnPushInstance(pSimulator, "math::Abs", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "A_Output", &_SCSIM_kcg_int_Utils, 237, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "A_Input", &_SCSIM_kcg_int_Utils, 238, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 239, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 240, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 241, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 242, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 243, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_real_Utils, 244, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 245, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 246, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 247, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_real_Utils, 248, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 249, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 250, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 251, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 252, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_int_Utils, 253, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_real_Utils, 254, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 255, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_real_Utils, 256, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "distance_BB", &_SCSIM_kcg_real_Utils, 257, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Balise_Interdistance_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Balise_Interdistance_FirstTest_InfraLib* pContext = (outC_Balise_Interdistance_FirstTest_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 237:
			return &((*pContext).A_Output_1);
		case 238:
			return &((*pContext).A_Input_1);
		case 239:
			return &((*pContext)._L1_1);
		case 240:
			return &((*pContext)._L2_1);
		case 241:
			return &((*pContext)._L3_1);
		case 242:
			return &((*pContext)._L5_1);
		case 243:
			return &((*pContext)._L8_1);
		case 244:
			return &((*pContext)._L1);
		case 245:
			return &((*pContext)._L2);
		case 246:
			return &((*pContext)._L3);
		case 247:
			return &((*pContext)._L4);
		case 248:
			return &((*pContext)._L5);
		case 249:
			return &((*pContext)._L6);
		case 250:
			return &((*pContext)._L8);
		case 251:
			return &((*pContext)._L9);
		case 252:
			return &((*pContext)._L10);
		case 253:
			return &((*pContext)._L11);
		case 254:
			return &((*pContext)._L12);
		case 255:
			return &((*pContext)._L13);
		case 256:
			return &((*pContext)._L14);
		case 257:
			return &((*pContext).distance_BB);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TOOLS_convert_engineering_location/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_TOOLS_convert_engineering(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_TOOLS_convert_engineering_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 258, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_real_Utils, 259, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 260, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_real_Utils, 261, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Loc_real", &_SCSIM_kcg_real_Utils, 262, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_TOOLS_convert_engineering_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_TOOLS_convert_engineering* pContext = (outC_TOOLS_convert_engineering*)pInstance;
	switch (nHandleIdent) {
		case 258:
			return &((*pContext)._L1);
		case 259:
			return &((*pContext)._L2);
		case 260:
			return &((*pContext)._L3);
		case 261:
			return &((*pContext)._L4);
		case 262:
			return &((*pContext).Loc_real);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** FirstTest::InfraLib::Send_364_P005/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_Send_364_P005_FirstTest_InfraLib(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_Send_364_P005_FirstTest_InfraLib_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_SEND_WritePacket005_IT("SEND_WritePacket005_IT", "1", 263, 264, &_SCSIM_ClockActive_kcg_true);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 265, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_TM_P005_Utils, 266, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 267, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 268, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 269, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 270, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 264, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "B_data_out", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 271, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_Send_364_P005_FirstTest_InfraLib_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_Send_364_P005_FirstTest_InfraLib* pContext = (outC_Send_364_P005_FirstTest_InfraLib*)pInstance;
	switch (nHandleIdent) {
		case 263:
			return &((*pContext).Context_1);
		case 265:
			return &((*pContext)._L3);
		case 266:
			return &((*pContext)._L4);
		case 267:
			return &((*pContext)._L8);
		case 268:
			return &((*pContext)._L6);
		case 269:
			return &((*pContext)._L7);
		case 270:
			return &((*pContext)._L5);
		case 264:
			return &((*pContext).tmp);
		case 271:
			return &((*pContext).B_data_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** SEND_WritePacket005_IT/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SEND_WritePacket005_IT(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SEND_WritePacket005_IT_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_SEND_ConvertP005forWrite_IT("SEND_ConvertP005forWrite_IT", "1", 272, 0, 0);
	_SCSIM_Mapping_SIM_SEND_WriteRadioMessag("SIM_SEND_WriteRadioMessageHeader", "1", 273, 0, 0);
	_SCSIM_Mapping_SIM_SEND_WriteRadioMessageData("SIM_SEND_WriteRadioMessageData", "1", 274, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_TM_P005_Utils, 275, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 276, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 277, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 278, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 279, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 280, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_int_Utils, 281, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 282, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 283, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 284, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 285, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 286, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Error", &_SCSIM_kcg_bool_Utils, 287, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "RadioPacketsOut", &_SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils, 288, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_WritePacket005_IT_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_WritePacket005_IT* pContext = (outC_SEND_WritePacket005_IT*)pInstance;
	switch (nHandleIdent) {
		case 272:
			return &((*pContext).Context_1);
		case 273:
			return &((*pContext)._1_Context_1);
		case 274:
			return &((*pContext)._2_Context_1);
		case 275:
			return &((*pContext)._L1);
		case 276:
			return &((*pContext)._L3);
		case 277:
			return &((*pContext)._L2);
		case 278:
			return &((*pContext)._L4);
		case 279:
			return &((*pContext)._L10);
		case 280:
			return &((*pContext)._L18);
		case 281:
			return &((*pContext)._L21);
		case 282:
			return &((*pContext)._L22);
		case 283:
			return &((*pContext)._L39);
		case 284:
			return &((*pContext)._L40);
		case 285:
			return &((*pContext)._L42);
		case 286:
			return &((*pContext)._L41);
		case 287:
			return &((*pContext).Error);
		case 288:
			return &((*pContext).RadioPacketsOut);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** SEND_ConvertP005forWrite_IT/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SEND_ConvertP005forWrite_IT(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SEND_ConvertP005forWrite_IT_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_TOOLS_Int_to_Q_DIR("TOOLS_Int_to_Q_DIR", "1", 289, 0, 0);
	_SCSIM_Mapping_SEND_ConvertP005forWriteS("SEND_ConvertP005forWriteSection_IT", "1", 290, 0, 0);
	_SCSIM_Mapping_SEND_ConvertP005forWriteS("SEND_ConvertP005forWriteSection_IT", "2", 291, 0, 0);
	_SCSIM_Mapping_SEND_ConvertP005forWriteS("SEND_ConvertP005forWriteSection_IT", "3", 292, 0, 0);
	_SCSIM_Mapping_SEND_ConvertP005forWriteS("SEND_ConvertP005forWriteSection_IT", "4", 293, 0, 0);
	_SCSIM_Mapping_SEND_ConvertP005forWriteS("SEND_ConvertP005forWriteSection_IT", "5", 294, 0, 0);
	_SCSIM_Mapping_TOOLS_calculate_L_PACKET("TOOLS_calculate_L_PACKET", "1", 295, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_TM_P005_Utils, 296, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L204", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 297, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L205", &_SCSIM_kcg_int_Utils, 298, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L206", &_SCSIM_kcg_int_Utils, 299, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L209", &_SCSIM_array_int_461_Utils, 300, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L211", &_SCSIM_array_int_500_Utils, 301, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L212", &_SCSIM_kcg_int_Utils, 302, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L213", &_SCSIM_kcg_int_Utils, 303, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L230", &_SCSIM_TM_P005E_T_Utils, 304, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L229", &_SCSIM_TM_P005E_T_Utils, 305, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L228", &_SCSIM_TM_P005E_T_Utils, 306, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L227", &_SCSIM_TM_P005E_T_Utils, 307, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L226", &_SCSIM_TM_P005E_T_Utils, 308, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L325", &_SCSIM_array_int_11_Utils, 309, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L327", &_SCSIM_array_int_18_Utils, 310, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L328", &_SCSIM_array_int_25_Utils, 311, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L329", &_SCSIM_array_int_32_Utils, 312, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L330", &_SCSIM_array_int_39_Utils, 313, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L336", &_SCSIM_kcg_int_Utils, 314, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L355", &_SCSIM_array_int_4_Utils, 315, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L219", &_SCSIM_TM_P05Es_T_Utils, 316, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L218", &_SCSIM_kcg_int_Utils, 317, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L217", &_SCSIM_kcg_int_Utils, 318, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L216", &_SCSIM_kcg_int_Utils, 319, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L215", &_SCSIM_kcg_int_Utils, 320, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L214", &_SCSIM_kcg_bool_Utils, 321, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L356", &_SCSIM_Q_DIR_Utils, 322, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L357", &_SCSIM_TM_P005E_array_T_Utils, 323, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L358", &_SCSIM_TM_P005E_array_T_Utils, 324, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L359", &_SCSIM_TM_P005E_array_T_Utils, 325, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L360", &_SCSIM_TM_P005E_array_T_Utils, 326, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L361", &_SCSIM_TM_P005E_array_T_Utils, 327, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L364", &_SCSIM_kcg_int_Utils, 328, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L363", &_SCSIM_kcg_int_Utils, 329, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Header", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 330, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "RM05_out", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 331, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_ConvertP005forWrite_IT_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_ConvertP005forWrite_IT* pContext = (outC_SEND_ConvertP005forWrite_IT*)pInstance;
	switch (nHandleIdent) {
		case 289:
			return &((*pContext)._2_Context_1);
		case 290:
			return &((*pContext)._1_Context_1);
		case 291:
			return &((*pContext).Context_2);
		case 292:
			return &((*pContext).Context_3);
		case 293:
			return &((*pContext).Context_4);
		case 294:
			return &((*pContext).Context_5);
		case 295:
			return &((*pContext).Context_1);
		case 296:
			return &((*pContext)._L1);
		case 297:
			return &((*pContext)._L204);
		case 298:
			return &((*pContext)._L205);
		case 299:
			return &((*pContext)._L206);
		case 300:
			return &((*pContext)._L209);
		case 301:
			return &((*pContext)._L211);
		case 302:
			return &((*pContext)._L212);
		case 303:
			return &((*pContext)._L213);
		case 304:
			return &((*pContext)._L230);
		case 305:
			return &((*pContext)._L229);
		case 306:
			return &((*pContext)._L228);
		case 307:
			return &((*pContext)._L227);
		case 308:
			return &((*pContext)._L226);
		case 309:
			return &((*pContext)._L325);
		case 310:
			return &((*pContext)._L327);
		case 311:
			return &((*pContext)._L328);
		case 312:
			return &((*pContext)._L329);
		case 313:
			return &((*pContext)._L330);
		case 314:
			return &((*pContext)._L336);
		case 315:
			return &((*pContext)._L355);
		case 316:
			return &((*pContext)._L219);
		case 317:
			return &((*pContext)._L218);
		case 318:
			return &((*pContext)._L217);
		case 319:
			return &((*pContext)._L216);
		case 320:
			return &((*pContext)._L215);
		case 321:
			return &((*pContext)._L214);
		case 322:
			return &((*pContext)._L356);
		case 323:
			return &((*pContext)._L357);
		case 324:
			return &((*pContext)._L358);
		case 325:
			return &((*pContext)._L359);
		case 326:
			return &((*pContext)._L360);
		case 327:
			return &((*pContext)._L361);
		case 328:
			return &((*pContext)._L364);
		case 329:
			return &((*pContext)._L363);
		case 330:
			return &((*pContext).Header);
		case 331:
			return &((*pContext).RM05_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** SIM_SEND_WriteRadioMessageHeader/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SIM_SEND_WriteRadioMessag(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SIM_SEND_WriteRadioMessag_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "foldw", 30, 30);
	_SCSIM_Mapping_SEND_FindSlot("SEND_FindSlot", "1", 332, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 333, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 334, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 335, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 336, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 337, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 338, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 339, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 340, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 341, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 342, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_int_Utils, 343, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 344, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 345, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 346, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 347, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_int_Utils, 348, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_int_Utils, 349, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_int_Utils, 350, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_int_Utils, 351, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_kcg_int_Utils, 352, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 353, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 354, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "HeadersOut", &_SCSIM_Metadata_T_Common_Types_Pkg_Utils, 355, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NewStartAddr", &_SCSIM_kcg_int_Utils, 356, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NewEndAddr", &_SCSIM_kcg_int_Utils, 357, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SIM_SEND_WriteRadioMessag_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SIM_SEND_WriteRadioMessag* pContext = (outC_SIM_SEND_WriteRadioMessag*)pInstance;
	switch (nHandleIdent) {
		case 332:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 333:
			return &((*pContext)._L1);
		case 334:
			return &((*pContext)._L3);
		case 335:
			return &((*pContext)._L4);
		case 336:
			return &((*pContext)._L5);
		case 337:
			return &((*pContext)._L7);
		case 338:
			return &((*pContext)._L8);
		case 339:
			return &((*pContext)._L9);
		case 340:
			return &((*pContext)._L16);
		case 341:
			return &((*pContext)._L17);
		case 342:
			return &((*pContext)._L18);
		case 343:
			return &((*pContext)._L22);
		case 344:
			return &((*pContext)._L23);
		case 345:
			return &((*pContext)._L24);
		case 346:
			return &((*pContext)._L31);
		case 347:
			return &((*pContext)._L32);
		case 348:
			return &((*pContext)._L33);
		case 349:
			return &((*pContext)._L34);
		case 350:
			return &((*pContext)._L35);
		case 351:
			return &((*pContext)._L36);
		case 352:
			return &((*pContext)._L37);
		case 353:
			return &((*pContext)._L43);
		case 354:
			return &((*pContext)._L44);
		case 355:
			return &((*pContext).HeadersOut);
		case 356:
			return &((*pContext).NewStartAddr);
		case 357:
			return &((*pContext).NewEndAddr);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** SIM_SEND_WriteRadioMessageData/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SIM_SEND_WriteRadioMessageData(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SIM_SEND_WriteRadioMessageData_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnPushIterator(pSimulator, "mapwi", 500, 500);
	_SCSIM_Mapping_SIM_SEND_WriteBaliseDataE("SIM_SEND_WriteBaliseDataElement", "1", 358, 0, 0);
	pSimulator->m_pfnPopIterator(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 359, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L402", &_SCSIM_kcg_int_Utils, 360, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L403", &_SCSIM_kcg_bool_Utils, 361, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L404", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 362, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L406", &_SCSIM_array_int_500_Utils, 363, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L407", &_SCSIM_kcg_int_Utils, 364, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L408", &_SCSIM_kcg_int_Utils, 365, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L413", &_SCSIM_array_int_500_500_Utils, 366, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L414", &_SCSIM_array_int_500_Utils, 367, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L415", &_SCSIM_array_int_500_Utils, 368, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "DataOut", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 369, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SIM_SEND_WriteRadioMessageData_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SIM_SEND_WriteRadioMessageData* pContext = (outC_SIM_SEND_WriteRadioMessageData*)pInstance;
	switch (nHandleIdent) {
		case 358:
			if (nSize != 1)
				break;
			return &((*pContext).Context_1[pIteratorFilter[0]]);
		case 359:
			return &((*pContext)._L1);
		case 360:
			return &((*pContext)._L402);
		case 361:
			return &((*pContext)._L403);
		case 362:
			return &((*pContext)._L404);
		case 363:
			return &((*pContext)._L406);
		case 364:
			return &((*pContext)._L407);
		case 365:
			return &((*pContext)._L408);
		case 366:
			return &((*pContext)._L413);
		case 367:
			return &((*pContext)._L414);
		case 368:
			return &((*pContext)._L415);
		case 369:
			return &((*pContext).DataOut);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TOOLS_Int_to_Q_DIR/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_TOOLS_Int_to_Q_DIR(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_TOOLS_Int_to_Q_DIR_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 370, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Q_DIR_Utils, 371, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 372, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 373, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_Q_DIR_Utils, 374, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 375, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_Q_DIR_Utils, 376, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 377, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_Q_DIR_Utils, 378, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_Q_DIR_Utils, 379, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "QDIR", &_SCSIM_Q_DIR_Utils, 380, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_TOOLS_Int_to_Q_DIR_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_TOOLS_Int_to_Q_DIR* pContext = (outC_TOOLS_Int_to_Q_DIR*)pInstance;
	switch (nHandleIdent) {
		case 370:
			return &((*pContext)._L2);
		case 371:
			return &((*pContext)._L3);
		case 372:
			return &((*pContext)._L4);
		case 373:
			return &((*pContext)._L5);
		case 374:
			return &((*pContext)._L6);
		case 375:
			return &((*pContext)._L7);
		case 376:
			return &((*pContext)._L8);
		case 377:
			return &((*pContext)._L9);
		case 378:
			return &((*pContext)._L10);
		case 379:
			return &((*pContext)._L11);
		case 380:
			return &((*pContext).QDIR);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** SEND_ConvertP005forWriteSection_IT/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SEND_ConvertP005forWriteS(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SEND_ConvertP005forWriteS_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L365", &_SCSIM_TM_P005E_T_Utils, 381, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L374", &_SCSIM_kcg_int_Utils, 382, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L373", &_SCSIM_kcg_int_Utils, 383, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L372", &_SCSIM_kcg_int_Utils, 384, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L371", &_SCSIM_kcg_int_Utils, 385, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L370", &_SCSIM_kcg_int_Utils, 386, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L369", &_SCSIM_kcg_int_Utils, 387, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L368", &_SCSIM_kcg_int_Utils, 388, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L367", &_SCSIM_kcg_bool_Utils, 389, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L383", &_SCSIM_array_int_7_Utils, 390, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SectionArray", &_SCSIM_TM_P005E_array_T_Utils, 391, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_ConvertP005forWriteS_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_ConvertP005forWriteS* pContext = (outC_SEND_ConvertP005forWriteS*)pInstance;
	switch (nHandleIdent) {
		case 381:
			return &((*pContext)._L365);
		case 382:
			return &((*pContext)._L374);
		case 383:
			return &((*pContext)._L373);
		case 384:
			return &((*pContext)._L372);
		case 385:
			return &((*pContext)._L371);
		case 386:
			return &((*pContext)._L370);
		case 387:
			return &((*pContext)._L369);
		case 388:
			return &((*pContext)._L368);
		case 389:
			return &((*pContext)._L367);
		case 390:
			return &((*pContext)._L383);
		case 391:
			return &((*pContext).SectionArray);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TOOLS_calculate_L_PACKET/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_TOOLS_calculate_L_PACKET(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_TOOLS_calculate_L_PACKET_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 392, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 393, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 394, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 395, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 396, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 397, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 398, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "L_PACKET", &_SCSIM_kcg_int_Utils, 399, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "N_ITER_out", &_SCSIM_kcg_int_Utils, 400, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_TOOLS_calculate_L_PACKET_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_TOOLS_calculate_L_PACKET* pContext = (outC_TOOLS_calculate_L_PACKET*)pInstance;
	switch (nHandleIdent) {
		case 392:
			return &((*pContext)._L1);
		case 393:
			return &((*pContext)._L2);
		case 394:
			return &((*pContext)._L3);
		case 395:
			return &((*pContext)._L4);
		case 396:
			return &((*pContext)._L5);
		case 397:
			return &((*pContext)._L6);
		case 398:
			return &((*pContext)._L7);
		case 399:
			return &((*pContext).L_PACKET);
		case 400:
			return &((*pContext).N_ITER_out);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** SEND_FindSlot/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SEND_FindSlot(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SEND_FindSlot_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 401, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 402, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_MetadataElement_T_Common_Types_Pkg_Utils, 403, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 404, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_int_Utils, 405, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_NID_PACKET_Utils, 406, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 407, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_NID_PACKET_Utils, 408, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 409, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Acc", &_SCSIM_kcg_int_Utils, 410, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SEND_FindSlot_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SEND_FindSlot* pContext = (outC_SEND_FindSlot*)pInstance;
	switch (nHandleIdent) {
		case 401:
			return &((*pContext)._L1);
		case 402:
			return &((*pContext)._L2);
		case 403:
			return &((*pContext)._L3);
		case 404:
			return &((*pContext)._L17);
		case 405:
			return &((*pContext)._L19);
		case 406:
			return &((*pContext)._L27);
		case 407:
			return &((*pContext)._L28);
		case 408:
			return &((*pContext)._L29);
		case 409:
			return &((*pContext).Cont);
		case 410:
			return &((*pContext).Acc);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** SIM_SEND_WriteBaliseDataElement/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_SIM_SEND_WriteBaliseDataE(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_SIM_SEND_WriteBaliseDataE_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 411, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 412, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils, 413, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 414, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 415, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 416, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 417, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 418, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_int_Utils, 419, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 420, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 421, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_int_Utils, 422, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_int_Utils, 423, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Cont", &_SCSIM_kcg_bool_Utils, 424, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "DataOut", &_SCSIM_kcg_int_Utils, 425, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_SIM_SEND_WriteBaliseDataE_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_SIM_SEND_WriteBaliseDataE* pContext = (outC_SIM_SEND_WriteBaliseDataE*)pInstance;
	switch (nHandleIdent) {
		case 411:
			return &((*pContext)._L1);
		case 412:
			return &((*pContext)._L2);
		case 413:
			return &((*pContext)._L3);
		case 414:
			return &((*pContext)._L4);
		case 415:
			return &((*pContext)._L5);
		case 416:
			return &((*pContext)._L6);
		case 417:
			return &((*pContext)._L7);
		case 418:
			return &((*pContext)._L8);
		case 419:
			return &((*pContext)._L9);
		case 420:
			return &((*pContext)._L10);
		case 421:
			return &((*pContext)._L14);
		case 422:
			return &((*pContext)._L16);
		case 423:
			return &((*pContext)._L17);
		case 424:
			return &((*pContext).Cont);
		case 425:
			return &((*pContext).DataOut);
		default:
			break;
	}
	return 0;
}

static int _SCSIM_ClockActive_kcg_true(void* clock) {
return *(kcg_bool*)clock == kcg_true ? 1 : 0;
}
