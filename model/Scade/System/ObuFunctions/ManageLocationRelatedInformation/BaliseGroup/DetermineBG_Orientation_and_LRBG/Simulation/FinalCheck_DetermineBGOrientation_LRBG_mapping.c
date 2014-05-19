#include "FinalCheck_DetermineBGOrientation_LRBG_mapping.h"
#include "FinalCheck_DetermineBGOrientation_LRBG_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_FinalCheck_DetermineBGOrientation_LRBG();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** DetermineBGOrientation_LRBG::FinalCheck/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_FinalCheck_DetermineBGOrientation_LRBG() {
	pSimulator->m_pfnSetRoot(pSimulator, "DetermineBGOrientation_LRBG::FinalCheck/", &outputs_ctx, _SCSIM_Get_FinalCheck_DetermineBGOrientation_LRBG_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L54", &_SCSIM_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L58", &_SCSIM_M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L57", &_SCSIM_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L60", &_SCSIM_kcg_bool_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L61", &_SCSIM_kcg_bool_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L62", &_SCSIM_kcg_bool_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L63", &_SCSIM_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L64", &_SCSIM_M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L66", &_SCSIM_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L90", &_SCSIM_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L89", &_SCSIM_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L88", &_SCSIM_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L87", &_SCSIM_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L86", &_SCSIM_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L85", &_SCSIM_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L91", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L92", &_SCSIM_kcg_bool_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L93", &_SCSIM_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L95", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L96", &_SCSIM_kcg_bool_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L97", &_SCSIM_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L98", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L99", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "RBCReport", &_SCSIM_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "FilteredBGMessage", &_SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "CheckedBGMessage", &_SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Orientation", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "RBCOrientationReport", &_SCSIM_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils, 34, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "TrainInfo", &_SCSIM_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, 35, valid, 0, 0);
}

void* _SCSIM_Get_FinalCheck_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx._L1);
		case 2:
			return &(outputs_ctx._L2);
		case 3:
			return &(outputs_ctx._L3);
		case 4:
			return &(outputs_ctx._L27);
		case 5:
			return &(outputs_ctx._L28);
		case 6:
			return &(outputs_ctx._L29);
		case 7:
			return &(outputs_ctx._L54);
		case 8:
			return &(outputs_ctx._L58);
		case 9:
			return &(outputs_ctx._L57);
		case 10:
			return &(outputs_ctx._L60);
		case 11:
			return &(outputs_ctx._L61);
		case 12:
			return &(outputs_ctx._L62);
		case 13:
			return &(outputs_ctx._L63);
		case 14:
			return &(outputs_ctx._L64);
		case 15:
			return &(outputs_ctx._L66);
		case 16:
			return &(outputs_ctx._L90);
		case 17:
			return &(outputs_ctx._L89);
		case 18:
			return &(outputs_ctx._L88);
		case 19:
			return &(outputs_ctx._L87);
		case 20:
			return &(outputs_ctx._L86);
		case 21:
			return &(outputs_ctx._L85);
		case 22:
			return &(outputs_ctx._L91);
		case 23:
			return &(outputs_ctx._L92);
		case 24:
			return &(outputs_ctx._L93);
		case 25:
			return &(outputs_ctx._L95);
		case 26:
			return &(outputs_ctx._L96);
		case 27:
			return &(outputs_ctx._L97);
		case 28:
			return &(outputs_ctx._L98);
		case 29:
			return &(outputs_ctx._L99);
		case 30:
			return &(outputs_ctx.RBCReport);
		case 31:
			return &(outputs_ctx.FilteredBGMessage);
		case 32:
			return &(inputs_ctx.CheckedBGMessage);
		case 33:
			return &(inputs_ctx.Orientation);
		case 34:
			return &(inputs_ctx.RBCOrientationReport);
		case 35:
			return &(inputs_ctx.TrainInfo);
		default:
			break;
	}
	return 0;
}

