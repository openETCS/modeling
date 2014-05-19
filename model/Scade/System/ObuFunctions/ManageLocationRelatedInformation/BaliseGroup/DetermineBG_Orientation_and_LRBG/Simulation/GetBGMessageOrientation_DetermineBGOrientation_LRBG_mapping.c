#include "GetBGMessageOrientation_DetermineBGOrientation_LRBG_mapping.h"
#include "GetBGMessageOrientation_DetermineBGOrientation_LRBG_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_GetBGMessageOrientation_DetermineBGOrientation_LRBG();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** DetermineBGOrientation_LRBG::GetBGMessageOrientation/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_GetBGMessageOrientation_DetermineBGOrientation_LRBG() {
	pSimulator->m_pfnSetRoot(pSimulator, "DetermineBGOrientation_LRBG::GetBGMessageOrientation/", &outputs_ctx, _SCSIM_Get_GetBGMessageOrientation_DetermineBGOrientation_LRBG_Handle);
	_SCSIM_Mapping_ArrCheck_DetermineBGOrientation_LRBG("DetermineBGOrientation_LRBG::ArrCheck", "1", 1, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L101", &_SCSIM_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L102", &_SCSIM_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L103", &_SCSIM_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L104", &_SCSIM_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L105", &_SCSIM_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L106", &_SCSIM_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L107", &_SCSIM_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L108", &_SCSIM_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L109", &_SCSIM_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L110", &_SCSIM_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L310", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L311", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L315", &_SCSIM_kcg_bool_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L316", &_SCSIM_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L317", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L318", &_SCSIM_kcg_bool_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L319", &_SCSIM_kcg_bool_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L320", &_SCSIM_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L321", &_SCSIM_kcg_bool_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L323", &_SCSIM_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L324", &_SCSIM_kcg_bool_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Orientation", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "CheckedBGMessage", &_SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 37, valid, 0, 0);
}

void* _SCSIM_Get_GetBGMessageOrientation_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.Context_1);
		case 2:
			return &(outputs_ctx._L101);
		case 3:
			return &(outputs_ctx._L102);
		case 4:
			return &(outputs_ctx._L103);
		case 5:
			return &(outputs_ctx._L104);
		case 6:
			return &(outputs_ctx._L105);
		case 7:
			return &(outputs_ctx._L106);
		case 8:
			return &(outputs_ctx._L107);
		case 9:
			return &(outputs_ctx._L108);
		case 10:
			return &(outputs_ctx._L109);
		case 11:
			return &(outputs_ctx._L110);
		case 12:
			return &(outputs_ctx._L34);
		case 13:
			return &(outputs_ctx._L35);
		case 14:
			return &(outputs_ctx._L24);
		case 15:
			return &(outputs_ctx._L25);
		case 16:
			return &(outputs_ctx._L26);
		case 17:
			return &(outputs_ctx._L27);
		case 18:
			return &(outputs_ctx._L28);
		case 19:
			return &(outputs_ctx._L29);
		case 20:
			return &(outputs_ctx._L30);
		case 21:
			return &(outputs_ctx._L31);
		case 22:
			return &(outputs_ctx._L12);
		case 23:
			return &(outputs_ctx._L13);
		case 24:
			return &(outputs_ctx._L1);
		case 25:
			return &(outputs_ctx._L310);
		case 26:
			return &(outputs_ctx._L311);
		case 27:
			return &(outputs_ctx._L315);
		case 28:
			return &(outputs_ctx._L316);
		case 29:
			return &(outputs_ctx._L317);
		case 30:
			return &(outputs_ctx._L318);
		case 31:
			return &(outputs_ctx._L319);
		case 32:
			return &(outputs_ctx._L320);
		case 33:
			return &(outputs_ctx._L321);
		case 34:
			return &(outputs_ctx._L323);
		case 35:
			return &(outputs_ctx._L324);
		case 36:
			return &(outputs_ctx.Orientation);
		case 37:
			return &(inputs_ctx.CheckedBGMessage);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** DetermineBGOrientation_LRBG::ArrCheck/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ArrCheck_DetermineBGOrientation_LRBG(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ArrCheck_DetermineBGOrientation_LRBG_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_bool_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Orientation", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ArrCheck_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ArrCheck_DetermineBGOrientation_LRBG* pContext = (outC_ArrCheck_DetermineBGOrientation_LRBG*)pInstance;
	switch (nHandleIdent) {
		case 38:
			return &((*pContext)._L13);
		case 39:
			return &((*pContext)._L17);
		case 40:
			return &((*pContext)._L20);
		case 41:
			return &((*pContext)._L34);
		case 42:
			return &((*pContext)._L38);
		case 43:
			return &((*pContext)._L37);
		case 44:
			return &((*pContext).Orientation);
		default:
			break;
	}
	return 0;
}

