#include "DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG_mapping.h"
#include "DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG() {
	pSimulator->m_pfnSetRoot(pSimulator, "DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG/", &outputs_ctx, _SCSIM_Get_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG_Handle);
	_SCSIM_Mapping_CheckBaliseGroup_DetermineBGOrientation_LRBG("DetermineBGOrientation_LRBG::CheckBaliseGroup", "1", 1, 0, 0);
	_SCSIM_Mapping_FinalCheck3_DetermineBGOrientation_LRBG("DetermineBGOrientation_LRBG::FinalCheck3", "1", 2, 0, 0);
	_SCSIM_Mapping_GetBGMessageOrientation_DetermineBGOrientation_LRBG("DetermineBGOrientation_LRBG::GetBGMessageOrientation", "1", 3, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_LCurrentLRBG", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_LCheckedBGMessage", &_SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_LListOfBGs", &_SCSIM_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_LTrainInfo", &_SCSIM_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_LRBCOrientationReport", &_SCSIM_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_Lchecksinglebalisegroup_Orientation", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_Lfinalcheck_RBCReport", &_SCSIM_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_Lgetbgmessageorientation_BGOOrientationAndType", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_Lfinalcheck_FilteredBGMessage", &_SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "FilterBGMessage", &_SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "RBCReport", &_SCSIM_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "CurrentLRBG", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "CheckedBGMessage", &_SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "ListOfBGs", &_SCSIM_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "TrainInfo", &_SCSIM_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "RBCOrientationReport", &_SCSIM_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils, 19, valid, 0, 0);
}

void* _SCSIM_Get_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._1_Context_1);
		case 2:
			return &(outputs_ctx._2_Context_1);
		case 3:
			return &(outputs_ctx.Context_1);
		case 4:
			return &(outputs_ctx._LCurrentLRBG);
		case 5:
			return &(outputs_ctx._LCheckedBGMessage);
		case 6:
			return &(outputs_ctx._LListOfBGs);
		case 7:
			return &(outputs_ctx._LTrainInfo);
		case 8:
			return &(outputs_ctx._LRBCOrientationReport);
		case 9:
			return &(outputs_ctx._Lchecksinglebalisegroup_Orientation);
		case 10:
			return &(outputs_ctx._Lfinalcheck_RBCReport);
		case 11:
			return &(outputs_ctx._Lgetbgmessageorientation_BGOOrientationAndType);
		case 12:
			return &(outputs_ctx._Lfinalcheck_FilteredBGMessage);
		case 13:
			return &(outputs_ctx.FilterBGMessage);
		case 14:
			return &(outputs_ctx.RBCReport);
		case 15:
			return &(inputs_ctx.CurrentLRBG);
		case 16:
			return &(inputs_ctx.CheckedBGMessage);
		case 17:
			return &(inputs_ctx.ListOfBGs);
		case 18:
			return &(inputs_ctx.TrainInfo);
		case 19:
			return &(inputs_ctx.RBCOrientationReport);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** DetermineBGOrientation_LRBG::CheckBaliseGroup/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CheckBaliseGroup_DetermineBGOrientation_LRBG(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CheckBaliseGroup_DetermineBGOrientation_LRBG_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG("DetermineBGOrientation_LRBG::CheckSingleBaliseGroup", "1", 20, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_LCurrentLRBG", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_LListOfBGs", &_SCSIM_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_LBGOOrientationAndType", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_LTrainInfo", &_SCSIM_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_Lchecksinglebalisegroup_Orientation", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Orientation", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CheckBaliseGroup_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CheckBaliseGroup_DetermineBGOrientation_LRBG* pContext = (outC_CheckBaliseGroup_DetermineBGOrientation_LRBG*)pInstance;
	switch (nHandleIdent) {
		case 20:
			return &((*pContext).Context_1);
		case 21:
			return &((*pContext)._LCurrentLRBG);
		case 22:
			return &((*pContext)._LListOfBGs);
		case 23:
			return &((*pContext)._LBGOOrientationAndType);
		case 24:
			return &((*pContext)._LTrainInfo);
		case 25:
			return &((*pContext)._Lchecksinglebalisegroup_Orientation);
		case 26:
			return &((*pContext)._L1);
		case 27:
			return &((*pContext)._L2);
		case 28:
			return &((*pContext)._L3);
		case 29:
			return &((*pContext)._L8);
		case 30:
			return &((*pContext)._L6);
		case 31:
			return &((*pContext)._L7);
		case 32:
			return &((*pContext)._L5);
		case 33:
			return &((*pContext)._L4);
		case 34:
			return &((*pContext).Orientation);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** DetermineBGOrientation_LRBG::FinalCheck3/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_FinalCheck3_DetermineBGOrientation_LRBG(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_FinalCheck3_DetermineBGOrientation_LRBG_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L54", &_SCSIM_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L58", &_SCSIM_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L57", &_SCSIM_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L60", &_SCSIM_kcg_bool_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L61", &_SCSIM_kcg_bool_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L62", &_SCSIM_kcg_bool_Utils, 46, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L63", &_SCSIM_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 47, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L64", &_SCSIM_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L66", &_SCSIM_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L90", &_SCSIM_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L89", &_SCSIM_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L88", &_SCSIM_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L87", &_SCSIM_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L86", &_SCSIM_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L85", &_SCSIM_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L91", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L92", &_SCSIM_kcg_bool_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L93", &_SCSIM_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L95", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L96", &_SCSIM_kcg_bool_Utils, 60, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L97", &_SCSIM_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 61, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L98", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L99", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "RBCReport", &_SCSIM_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "FilteredBGMessage", &_SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_FinalCheck3_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_FinalCheck3_DetermineBGOrientation_LRBG* pContext = (outC_FinalCheck3_DetermineBGOrientation_LRBG*)pInstance;
	switch (nHandleIdent) {
		case 35:
			return &((*pContext)._L1);
		case 36:
			return &((*pContext)._L2);
		case 37:
			return &((*pContext)._L3);
		case 38:
			return &((*pContext)._L27);
		case 39:
			return &((*pContext)._L28);
		case 40:
			return &((*pContext)._L29);
		case 41:
			return &((*pContext)._L54);
		case 42:
			return &((*pContext)._L58);
		case 43:
			return &((*pContext)._L57);
		case 44:
			return &((*pContext)._L60);
		case 45:
			return &((*pContext)._L61);
		case 46:
			return &((*pContext)._L62);
		case 47:
			return &((*pContext)._L63);
		case 48:
			return &((*pContext)._L64);
		case 49:
			return &((*pContext)._L66);
		case 50:
			return &((*pContext)._L90);
		case 51:
			return &((*pContext)._L89);
		case 52:
			return &((*pContext)._L88);
		case 53:
			return &((*pContext)._L87);
		case 54:
			return &((*pContext)._L86);
		case 55:
			return &((*pContext)._L85);
		case 56:
			return &((*pContext)._L91);
		case 57:
			return &((*pContext)._L92);
		case 58:
			return &((*pContext)._L93);
		case 59:
			return &((*pContext)._L95);
		case 60:
			return &((*pContext)._L96);
		case 61:
			return &((*pContext)._L97);
		case 62:
			return &((*pContext)._L98);
		case 63:
			return &((*pContext)._L99);
		case 64:
			return &((*pContext).RBCReport);
		case 65:
			return &((*pContext).FilteredBGMessage);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** DetermineBGOrientation_LRBG::GetBGMessageOrientation/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_GetBGMessageOrientation_DetermineBGOrientation_LRBG(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_GetBGMessageOrientation_DetermineBGOrientation_LRBG_Handle, nClockHandleIdent, pfnClockActive);
	_SCSIM_Mapping_ArrCheck_DetermineBGOrientation_LRBG("DetermineBGOrientation_LRBG::ArrCheck", "1", 66, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L101", &_SCSIM_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 67, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L102", &_SCSIM_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 68, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L103", &_SCSIM_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 69, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L104", &_SCSIM_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 70, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L105", &_SCSIM_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 71, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L106", &_SCSIM_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 72, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L107", &_SCSIM_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 73, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L108", &_SCSIM_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 74, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L109", &_SCSIM_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 75, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L110", &_SCSIM_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 76, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, 77, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 78, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 79, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 80, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 81, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 82, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 83, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 84, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 85, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 86, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 87, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, 88, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 89, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L310", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 90, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L311", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 91, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L315", &_SCSIM_kcg_bool_Utils, 92, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L316", &_SCSIM_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 93, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L317", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 94, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L318", &_SCSIM_kcg_bool_Utils, 95, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L319", &_SCSIM_kcg_bool_Utils, 96, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L320", &_SCSIM_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 97, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L321", &_SCSIM_kcg_bool_Utils, 98, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L323", &_SCSIM_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 99, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L324", &_SCSIM_kcg_bool_Utils, 100, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Orientation", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 101, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_GetBGMessageOrientation_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG* pContext = (outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG*)pInstance;
	switch (nHandleIdent) {
		case 66:
			return &((*pContext).Context_1);
		case 67:
			return &((*pContext)._L101);
		case 68:
			return &((*pContext)._L102);
		case 69:
			return &((*pContext)._L103);
		case 70:
			return &((*pContext)._L104);
		case 71:
			return &((*pContext)._L105);
		case 72:
			return &((*pContext)._L106);
		case 73:
			return &((*pContext)._L107);
		case 74:
			return &((*pContext)._L108);
		case 75:
			return &((*pContext)._L109);
		case 76:
			return &((*pContext)._L110);
		case 77:
			return &((*pContext)._L34);
		case 78:
			return &((*pContext)._L35);
		case 79:
			return &((*pContext)._L24);
		case 80:
			return &((*pContext)._L25);
		case 81:
			return &((*pContext)._L26);
		case 82:
			return &((*pContext)._L27);
		case 83:
			return &((*pContext)._L28);
		case 84:
			return &((*pContext)._L29);
		case 85:
			return &((*pContext)._L30);
		case 86:
			return &((*pContext)._L31);
		case 87:
			return &((*pContext)._L12);
		case 88:
			return &((*pContext)._L13);
		case 89:
			return &((*pContext)._L1);
		case 90:
			return &((*pContext)._L310);
		case 91:
			return &((*pContext)._L311);
		case 92:
			return &((*pContext)._L315);
		case 93:
			return &((*pContext)._L316);
		case 94:
			return &((*pContext)._L317);
		case 95:
			return &((*pContext)._L318);
		case 96:
			return &((*pContext)._L319);
		case 97:
			return &((*pContext)._L320);
		case 98:
			return &((*pContext)._L321);
		case 99:
			return &((*pContext)._L323);
		case 100:
			return &((*pContext)._L324);
		case 101:
			return &((*pContext).Orientation);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** DetermineBGOrientation_LRBG::CheckSingleBaliseGroup/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 102, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils, 103, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L57", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 104, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L56", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 105, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L55", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 106, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L54", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 107, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L53", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 108, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L52", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 109, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L51", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 110, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 111, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L49", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 112, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 113, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 114, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 115, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 116, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 117, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 118, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 119, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 120, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 121, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 122, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 123, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L79", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 124, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L81", &_SCSIM_kcg_bool_Utils, 125, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L82", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 126, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L125", &_SCSIM_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 127, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L124", &_SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, 128, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L126", &_SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, 129, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L127", &_SCSIM_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 130, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L131", &_SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 131, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L130", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 132, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L132", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 133, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L133", &_SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 134, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L135", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 135, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L173", &_SCSIM_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 136, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L172", &_SCSIM_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 137, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L174", &_SCSIM_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, 138, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L178", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 139, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L179", &_SCSIM_kcg_bool_Utils, 140, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L183", &_SCSIM_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, 141, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L182", &_SCSIM_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 142, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L199", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 143, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L198", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 144, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L197", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 145, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L196", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 146, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L195", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 147, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L194", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 148, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L193", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 149, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L192", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 150, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L203", &_SCSIM_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 151, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L202", &_SCSIM_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, 152, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L225", &_SCSIM_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 153, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L224", &_SCSIM_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 154, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L223", &_SCSIM_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 155, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L222", &_SCSIM_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 156, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L221", &_SCSIM_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 157, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L220", &_SCSIM_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 158, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L219", &_SCSIM_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 159, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L218", &_SCSIM_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 160, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L217", &_SCSIM_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 161, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L216", &_SCSIM_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 162, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L226", &_SCSIM_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 163, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L252", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 164, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L253", &_SCSIM_kcg_bool_Utils, 165, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L274", &_SCSIM_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 166, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L275", &_SCSIM_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, 167, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L264", &_SCSIM_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 168, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L265", &_SCSIM_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 169, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L266", &_SCSIM_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 170, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L267", &_SCSIM_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 171, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L268", &_SCSIM_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 172, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L269", &_SCSIM_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 173, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L270", &_SCSIM_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 174, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L271", &_SCSIM_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 175, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L272", &_SCSIM_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 176, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L273", &_SCSIM_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 177, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L256", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 178, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L257", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 179, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L258", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 180, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L259", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 181, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L260", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 182, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L261", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 183, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L262", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 184, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L263", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 185, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L254", &_SCSIM_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, 186, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L255", &_SCSIM_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 187, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L276", &_SCSIM_kcg_bool_Utils, 188, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L277", &_SCSIM_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 189, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L278", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 190, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L282", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 191, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L283", &_SCSIM_kcg_bool_Utils, 192, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L286", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 193, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L287", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 194, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L299", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 195, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L298", &_SCSIM_kcg_bool_Utils, 196, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L297", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 197, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L296", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 198, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L300", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 199, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L251", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 200, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L176", &_SCSIM_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 201, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L175", &_SCSIM_kcg_bool_Utils, 202, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L306", &_SCSIM_kcg_bool_Utils, 203, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L307", &_SCSIM_kcg_bool_Utils, 204, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L308", &_SCSIM_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 205, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Orientation", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 206, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG* pContext = (outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG*)pInstance;
	switch (nHandleIdent) {
		case 102:
			return &((*pContext)._L1);
		case 103:
			return &((*pContext)._L2);
		case 104:
			return &((*pContext)._L57);
		case 105:
			return &((*pContext)._L56);
		case 106:
			return &((*pContext)._L55);
		case 107:
			return &((*pContext)._L54);
		case 108:
			return &((*pContext)._L53);
		case 109:
			return &((*pContext)._L52);
		case 110:
			return &((*pContext)._L51);
		case 111:
			return &((*pContext)._L50);
		case 112:
			return &((*pContext)._L49);
		case 113:
			return &((*pContext)._L48);
		case 114:
			return &((*pContext)._L47);
		case 115:
			return &((*pContext)._L46);
		case 116:
			return &((*pContext)._L45);
		case 117:
			return &((*pContext)._L44);
		case 118:
			return &((*pContext)._L43);
		case 119:
			return &((*pContext)._L42);
		case 120:
			return &((*pContext)._L41);
		case 121:
			return &((*pContext)._L40);
		case 122:
			return &((*pContext)._L39);
		case 123:
			return &((*pContext)._L38);
		case 124:
			return &((*pContext)._L79);
		case 125:
			return &((*pContext)._L81);
		case 126:
			return &((*pContext)._L82);
		case 127:
			return &((*pContext)._L125);
		case 128:
			return &((*pContext)._L124);
		case 129:
			return &((*pContext)._L126);
		case 130:
			return &((*pContext)._L127);
		case 131:
			return &((*pContext)._L131);
		case 132:
			return &((*pContext)._L130);
		case 133:
			return &((*pContext)._L132);
		case 134:
			return &((*pContext)._L133);
		case 135:
			return &((*pContext)._L135);
		case 136:
			return &((*pContext)._L173);
		case 137:
			return &((*pContext)._L172);
		case 138:
			return &((*pContext)._L174);
		case 139:
			return &((*pContext)._L178);
		case 140:
			return &((*pContext)._L179);
		case 141:
			return &((*pContext)._L183);
		case 142:
			return &((*pContext)._L182);
		case 143:
			return &((*pContext)._L199);
		case 144:
			return &((*pContext)._L198);
		case 145:
			return &((*pContext)._L197);
		case 146:
			return &((*pContext)._L196);
		case 147:
			return &((*pContext)._L195);
		case 148:
			return &((*pContext)._L194);
		case 149:
			return &((*pContext)._L193);
		case 150:
			return &((*pContext)._L192);
		case 151:
			return &((*pContext)._L203);
		case 152:
			return &((*pContext)._L202);
		case 153:
			return &((*pContext)._L225);
		case 154:
			return &((*pContext)._L224);
		case 155:
			return &((*pContext)._L223);
		case 156:
			return &((*pContext)._L222);
		case 157:
			return &((*pContext)._L221);
		case 158:
			return &((*pContext)._L220);
		case 159:
			return &((*pContext)._L219);
		case 160:
			return &((*pContext)._L218);
		case 161:
			return &((*pContext)._L217);
		case 162:
			return &((*pContext)._L216);
		case 163:
			return &((*pContext)._L226);
		case 164:
			return &((*pContext)._L252);
		case 165:
			return &((*pContext)._L253);
		case 166:
			return &((*pContext)._L274);
		case 167:
			return &((*pContext)._L275);
		case 168:
			return &((*pContext)._L264);
		case 169:
			return &((*pContext)._L265);
		case 170:
			return &((*pContext)._L266);
		case 171:
			return &((*pContext)._L267);
		case 172:
			return &((*pContext)._L268);
		case 173:
			return &((*pContext)._L269);
		case 174:
			return &((*pContext)._L270);
		case 175:
			return &((*pContext)._L271);
		case 176:
			return &((*pContext)._L272);
		case 177:
			return &((*pContext)._L273);
		case 178:
			return &((*pContext)._L256);
		case 179:
			return &((*pContext)._L257);
		case 180:
			return &((*pContext)._L258);
		case 181:
			return &((*pContext)._L259);
		case 182:
			return &((*pContext)._L260);
		case 183:
			return &((*pContext)._L261);
		case 184:
			return &((*pContext)._L262);
		case 185:
			return &((*pContext)._L263);
		case 186:
			return &((*pContext)._L254);
		case 187:
			return &((*pContext)._L255);
		case 188:
			return &((*pContext)._L276);
		case 189:
			return &((*pContext)._L277);
		case 190:
			return &((*pContext)._L278);
		case 191:
			return &((*pContext)._L282);
		case 192:
			return &((*pContext)._L283);
		case 193:
			return &((*pContext)._L286);
		case 194:
			return &((*pContext)._L287);
		case 195:
			return &((*pContext)._L299);
		case 196:
			return &((*pContext)._L298);
		case 197:
			return &((*pContext)._L297);
		case 198:
			return &((*pContext)._L296);
		case 199:
			return &((*pContext)._L300);
		case 200:
			return &((*pContext)._L251);
		case 201:
			return &((*pContext)._L176);
		case 202:
			return &((*pContext)._L175);
		case 203:
			return &((*pContext)._L306);
		case 204:
			return &((*pContext)._L307);
		case 205:
			return &((*pContext)._L308);
		case 206:
			return &((*pContext).Orientation);
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 207, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 208, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_bool_Utils, 209, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 210, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 211, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 212, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Orientation", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 213, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ArrCheck_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ArrCheck_DetermineBGOrientation_LRBG* pContext = (outC_ArrCheck_DetermineBGOrientation_LRBG*)pInstance;
	switch (nHandleIdent) {
		case 207:
			return &((*pContext)._L13);
		case 208:
			return &((*pContext)._L17);
		case 209:
			return &((*pContext)._L20);
		case 210:
			return &((*pContext)._L34);
		case 211:
			return &((*pContext)._L38);
		case 212:
			return &((*pContext)._L37);
		case 213:
			return &((*pContext).Orientation);
		default:
			break;
	}
	return 0;
}

