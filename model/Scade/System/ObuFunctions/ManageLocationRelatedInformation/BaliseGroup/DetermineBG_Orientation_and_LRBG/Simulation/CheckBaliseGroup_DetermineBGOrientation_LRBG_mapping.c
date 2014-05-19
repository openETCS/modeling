#include "CheckBaliseGroup_DetermineBGOrientation_LRBG_mapping.h"
#include "CheckBaliseGroup_DetermineBGOrientation_LRBG_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_CheckBaliseGroup_DetermineBGOrientation_LRBG();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** DetermineBGOrientation_LRBG::CheckBaliseGroup/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_CheckBaliseGroup_DetermineBGOrientation_LRBG() {
	pSimulator->m_pfnSetRoot(pSimulator, "DetermineBGOrientation_LRBG::CheckBaliseGroup/", &outputs_ctx, _SCSIM_Get_CheckBaliseGroup_DetermineBGOrientation_LRBG_Handle);
	_SCSIM_Mapping_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG("DetermineBGOrientation_LRBG::CheckSingleBaliseGroup", "1", 1, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_LCurrentLRBG", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_LListOfBGs", &_SCSIM_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_LBGOOrientationAndType", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_LTrainInfo", &_SCSIM_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_Lchecksinglebalisegroup_Orientation", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Orientation", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "CurrentLRBG", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "ListOfBGs", &_SCSIM_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "BGOOrientationAndType", &_SCSIM_Orientation_DetermineBGOrientation_LRBG_DataDctionary_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "TrainInfo", &_SCSIM_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, 19, valid, 0, 0);
}

void* _SCSIM_Get_CheckBaliseGroup_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.Context_1);
		case 2:
			return &(outputs_ctx._LCurrentLRBG);
		case 3:
			return &(outputs_ctx._LListOfBGs);
		case 4:
			return &(outputs_ctx._LBGOOrientationAndType);
		case 5:
			return &(outputs_ctx._LTrainInfo);
		case 6:
			return &(outputs_ctx._Lchecksinglebalisegroup_Orientation);
		case 7:
			return &(outputs_ctx._L1);
		case 8:
			return &(outputs_ctx._L2);
		case 9:
			return &(outputs_ctx._L3);
		case 10:
			return &(outputs_ctx._L8);
		case 11:
			return &(outputs_ctx._L6);
		case 12:
			return &(outputs_ctx._L7);
		case 13:
			return &(outputs_ctx._L5);
		case 14:
			return &(outputs_ctx._L4);
		case 15:
			return &(outputs_ctx.Orientation);
		case 16:
			return &(inputs_ctx.CurrentLRBG);
		case 17:
			return &(inputs_ctx.ListOfBGs);
		case 18:
			return &(inputs_ctx.BGOOrientationAndType);
		case 19:
			return &(inputs_ctx.TrainInfo);
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
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L57", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L56", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L55", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L54", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L53", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L52", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L51", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L49", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L48", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L47", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 35, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 36, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 37, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 38, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 39, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 40, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 41, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L79", &_SCSIM_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 42, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L81", &_SCSIM_kcg_bool_Utils, 43, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L82", &_SCSIM_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 44, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L125", &_SCSIM_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 45, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L124", &_SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, 46, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L126", &_SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, 47, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L127", &_SCSIM_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG_Utils, 48, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L131", &_SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 49, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L130", &_SCSIM_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 50, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L132", &_SCSIM_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 51, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L133", &_SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 52, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L135", &_SCSIM_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 53, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L173", &_SCSIM_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 54, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L172", &_SCSIM_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 55, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L174", &_SCSIM_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, 56, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L175", &_SCSIM_kcg_bool_Utils, 57, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L176", &_SCSIM_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 58, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L178", &_SCSIM_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 59, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L179", &_SCSIM_kcg_bool_Utils, 60, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L183", &_SCSIM_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, 61, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L182", &_SCSIM_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 62, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L199", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 63, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L198", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 64, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L197", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 65, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L196", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 66, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L195", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 67, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L194", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 68, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L193", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 69, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L192", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 70, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L203", &_SCSIM_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 71, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L202", &_SCSIM_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, 72, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L225", &_SCSIM_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 73, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L224", &_SCSIM_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 74, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L223", &_SCSIM_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 75, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L222", &_SCSIM_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 76, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L221", &_SCSIM_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 77, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L220", &_SCSIM_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 78, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L219", &_SCSIM_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 79, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L218", &_SCSIM_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 80, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L217", &_SCSIM_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 81, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L216", &_SCSIM_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 82, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L226", &_SCSIM_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 83, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L251", &_SCSIM_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 84, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L252", &_SCSIM_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 85, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L253", &_SCSIM_kcg_bool_Utils, 86, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L274", &_SCSIM_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 87, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L275", &_SCSIM_AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, 88, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L264", &_SCSIM_M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 89, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L265", &_SCSIM_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 90, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L266", &_SCSIM_N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 91, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L267", &_SCSIM_Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 92, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L268", &_SCSIM_Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 93, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L269", &_SCSIM_Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 94, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L270", &_SCSIM_NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 95, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L271", &_SCSIM_NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 96, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L272", &_SCSIM_M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 97, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L273", &_SCSIM_M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 98, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L256", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 99, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L257", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 100, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L258", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 101, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L259", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 102, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L260", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 103, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L261", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 104, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L262", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 105, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L263", &_SCSIM_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 106, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L254", &_SCSIM_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM_Utils, 107, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L255", &_SCSIM_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 108, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L276", &_SCSIM_kcg_bool_Utils, 109, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L277", &_SCSIM_N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 110, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L278", &_SCSIM_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 111, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L282", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 112, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L283", &_SCSIM_kcg_bool_Utils, 113, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L286", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 114, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L287", &_SCSIM_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 115, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L299", &_SCSIM_Q_DIRLRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 116, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L298", &_SCSIM_kcg_bool_Utils, 117, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L297", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 118, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L296", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 119, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L300", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 120, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Orientation", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 121, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG* pContext = (outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG*)pInstance;
	switch (nHandleIdent) {
		case 20:
			return &((*pContext)._L1);
		case 21:
			return &((*pContext)._L2);
		case 22:
			return &((*pContext)._L57);
		case 23:
			return &((*pContext)._L56);
		case 24:
			return &((*pContext)._L55);
		case 25:
			return &((*pContext)._L54);
		case 26:
			return &((*pContext)._L53);
		case 27:
			return &((*pContext)._L52);
		case 28:
			return &((*pContext)._L51);
		case 29:
			return &((*pContext)._L50);
		case 30:
			return &((*pContext)._L49);
		case 31:
			return &((*pContext)._L48);
		case 32:
			return &((*pContext)._L47);
		case 33:
			return &((*pContext)._L46);
		case 34:
			return &((*pContext)._L45);
		case 35:
			return &((*pContext)._L44);
		case 36:
			return &((*pContext)._L43);
		case 37:
			return &((*pContext)._L42);
		case 38:
			return &((*pContext)._L41);
		case 39:
			return &((*pContext)._L40);
		case 40:
			return &((*pContext)._L39);
		case 41:
			return &((*pContext)._L38);
		case 42:
			return &((*pContext)._L79);
		case 43:
			return &((*pContext)._L81);
		case 44:
			return &((*pContext)._L82);
		case 45:
			return &((*pContext)._L125);
		case 46:
			return &((*pContext)._L124);
		case 47:
			return &((*pContext)._L126);
		case 48:
			return &((*pContext)._L127);
		case 49:
			return &((*pContext)._L131);
		case 50:
			return &((*pContext)._L130);
		case 51:
			return &((*pContext)._L132);
		case 52:
			return &((*pContext)._L133);
		case 53:
			return &((*pContext)._L135);
		case 54:
			return &((*pContext)._L173);
		case 55:
			return &((*pContext)._L172);
		case 56:
			return &((*pContext)._L174);
		case 57:
			return &((*pContext)._L175);
		case 58:
			return &((*pContext)._L176);
		case 59:
			return &((*pContext)._L178);
		case 60:
			return &((*pContext)._L179);
		case 61:
			return &((*pContext)._L183);
		case 62:
			return &((*pContext)._L182);
		case 63:
			return &((*pContext)._L199);
		case 64:
			return &((*pContext)._L198);
		case 65:
			return &((*pContext)._L197);
		case 66:
			return &((*pContext)._L196);
		case 67:
			return &((*pContext)._L195);
		case 68:
			return &((*pContext)._L194);
		case 69:
			return &((*pContext)._L193);
		case 70:
			return &((*pContext)._L192);
		case 71:
			return &((*pContext)._L203);
		case 72:
			return &((*pContext)._L202);
		case 73:
			return &((*pContext)._L225);
		case 74:
			return &((*pContext)._L224);
		case 75:
			return &((*pContext)._L223);
		case 76:
			return &((*pContext)._L222);
		case 77:
			return &((*pContext)._L221);
		case 78:
			return &((*pContext)._L220);
		case 79:
			return &((*pContext)._L219);
		case 80:
			return &((*pContext)._L218);
		case 81:
			return &((*pContext)._L217);
		case 82:
			return &((*pContext)._L216);
		case 83:
			return &((*pContext)._L226);
		case 84:
			return &((*pContext)._L251);
		case 85:
			return &((*pContext)._L252);
		case 86:
			return &((*pContext)._L253);
		case 87:
			return &((*pContext)._L274);
		case 88:
			return &((*pContext)._L275);
		case 89:
			return &((*pContext)._L264);
		case 90:
			return &((*pContext)._L265);
		case 91:
			return &((*pContext)._L266);
		case 92:
			return &((*pContext)._L267);
		case 93:
			return &((*pContext)._L268);
		case 94:
			return &((*pContext)._L269);
		case 95:
			return &((*pContext)._L270);
		case 96:
			return &((*pContext)._L271);
		case 97:
			return &((*pContext)._L272);
		case 98:
			return &((*pContext)._L273);
		case 99:
			return &((*pContext)._L256);
		case 100:
			return &((*pContext)._L257);
		case 101:
			return &((*pContext)._L258);
		case 102:
			return &((*pContext)._L259);
		case 103:
			return &((*pContext)._L260);
		case 104:
			return &((*pContext)._L261);
		case 105:
			return &((*pContext)._L262);
		case 106:
			return &((*pContext)._L263);
		case 107:
			return &((*pContext)._L254);
		case 108:
			return &((*pContext)._L255);
		case 109:
			return &((*pContext)._L276);
		case 110:
			return &((*pContext)._L277);
		case 111:
			return &((*pContext)._L278);
		case 112:
			return &((*pContext)._L282);
		case 113:
			return &((*pContext)._L283);
		case 114:
			return &((*pContext)._L286);
		case 115:
			return &((*pContext)._L287);
		case 116:
			return &((*pContext)._L299);
		case 117:
			return &((*pContext)._L298);
		case 118:
			return &((*pContext)._L297);
		case 119:
			return &((*pContext)._L296);
		case 120:
			return &((*pContext)._L300);
		case 121:
			return &((*pContext).Orientation);
		default:
			break;
	}
	return 0;
}

