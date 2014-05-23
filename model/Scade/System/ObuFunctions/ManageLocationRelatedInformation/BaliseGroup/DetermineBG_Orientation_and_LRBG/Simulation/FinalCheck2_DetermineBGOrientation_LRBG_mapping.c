#include "FinalCheck2_DetermineBGOrientation_LRBG_mapping.h"
#include "FinalCheck2_DetermineBGOrientation_LRBG_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_FinalCheck2_DetermineBGOrientation_LRBG();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** DetermineBGOrientation_LRBG::FinalCheck2/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_FinalCheck2_DetermineBGOrientation_LRBG() {
	pSimulator->m_pfnSetRoot(pSimulator, "DetermineBGOrientation_LRBG::FinalCheck2/", &outputs_ctx, _SCSIM_Get_FinalCheck2_DetermineBGOrientation_LRBG_Handle);
	pSimulator->m_pfnPushStateMachine(pSimulator, "SM1");
	pSimulator->m_pfnPushState(pSimulator, "Initial", &_SCSIM_SSM_st_Initial_SM1_Utils, 1);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_Initial_1_SM1_Utils, 2);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_Initial_2_SM1_Utils, 2);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "Level0or1", &_SCSIM_SSM_st_Level0or1_SM1_Utils, 1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 3, valid, 1, &_SCSIM_ClockActive_SSM_st_Level0or1_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, 4, valid, 1, &_SCSIM_ClockActive_SSM_st_Level0or1_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 5, valid, 1, &_SCSIM_ClockActive_SSM_st_Level0or1_SM1);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "Level2or3", &_SCSIM_SSM_st_Level2or3_SM1_Utils, 1);
	pSimulator->m_pfnPushStateMachine(pSimulator, "SM2");
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", 0, 6, valid, 1, &_SCSIM_ClockActive_SSM_st_Level2or3_SM1);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", 0, 7, valid, 1, &_SCSIM_ClockActive_SSM_st_Level2or3_SM1);
	pSimulator->m_pfnPushState(pSimulator, "Init", &_SCSIM_SSM_st_Init_SM1_Level2or3_SM2_Utils, 8);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_Init_1_SM2_SM1_Level2or3_Utils, 9);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_Init_2_SM2_SM1_Level2or3_Utils, 9);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "Ack", &_SCSIM_SSM_st_Ack_SM1_Level2or3_SM2_Utils, 8);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils, 10, valid, 7, &_SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 11, valid, 7, &_SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 12, valid, 7, &_SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 13, valid, 7, &_SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 14, valid, 7, &_SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 15, valid, 7, &_SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 16, valid, 7, &_SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, 17, valid, 7, &_SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, 18, valid, 7, &_SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, 19, valid, 7, &_SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 20, valid, 7, &_SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 21, valid, 7, &_SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_bool_Utils, 22, valid, 7, &_SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 23, valid, 7, &_SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 24, valid, 7, &_SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 25, valid, 7, &_SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "NoAck", &_SCSIM_SSM_st_NoAck_SM1_Level2or3_SM2_Utils, 8);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 26, valid, 7, &_SCSIM_ClockActive_SSM_st_NoAck_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 27, valid, 7, &_SCSIM_ClockActive_SSM_st_NoAck_SM1_Level2or3_SM2);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, 28, valid, 7, &_SCSIM_ClockActive_SSM_st_NoAck_SM1_Level2or3_SM2);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddOutput(pSimulator, "RBCReport", &_SCSIM_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "FilteredBGMessage", &_SCSIM_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "CheckedBGMessage", &_SCSIM_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Orientation", &_SCSIM_Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "RBCOrientationReport", &_SCSIM_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport_Utils, 33, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "TrainInfo", &_SCSIM_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo_Utils, 34, valid, 0, 0);
}

void* _SCSIM_Get_FinalCheck2_DetermineBGOrientation_LRBG_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.SM1_state_act);
		case 2:
			return &(outputs_ctx.SM1_fired_strong);
		case 3:
			return &(outputs_ctx._L1_SM1_Level0or1);
		case 4:
			return &(outputs_ctx._L2_SM1_Level0or1);
		case 5:
			return &(outputs_ctx._L3_SM1_Level0or1);
		case 6:
			return &(outputs_ctx._2_SM2_clock_SM1_Level2or3);
		case 7:
			return &(outputs_ctx.SM2_clock_SM1_Level2or3);
		case 8:
			return &(outputs_ctx.SM2_state_act_SM1_Level2or3);
		case 9:
			return &(outputs_ctx.SM2_fired_strong_SM1_Level2or3);
		case 10:
			return &(outputs_ctx._L9_SM1_Level2or3_SM2_Ack);
		case 11:
			return &(outputs_ctx._L12_SM1_Level2or3_SM2_Ack);
		case 12:
			return &(outputs_ctx._L13_SM1_Level2or3_SM2_Ack);
		case 13:
			return &(outputs_ctx._L14_SM1_Level2or3_SM2_Ack);
		case 14:
			return &(outputs_ctx._L15_SM1_Level2or3_SM2_Ack);
		case 15:
			return &(outputs_ctx._L16_SM1_Level2or3_SM2_Ack);
		case 16:
			return &(outputs_ctx._L17_SM1_Level2or3_SM2_Ack);
		case 17:
			return &(outputs_ctx._L11_SM1_Level2or3_SM2_Ack);
		case 18:
			return &(outputs_ctx._L10_SM1_Level2or3_SM2_Ack);
		case 19:
			return &(outputs_ctx._L26_SM1_Level2or3_SM2_Ack);
		case 20:
			return &(outputs_ctx._L31_SM1_Level2or3_SM2_Ack);
		case 21:
			return &(outputs_ctx._L30_SM1_Level2or3_SM2_Ack);
		case 22:
			return &(outputs_ctx._L29_SM1_Level2or3_SM2_Ack);
		case 23:
			return &(outputs_ctx._L28_SM1_Level2or3_SM2_Ack);
		case 24:
			return &(outputs_ctx._L32_SM1_Level2or3_SM2_Ack);
		case 25:
			return &(outputs_ctx._L33_SM1_Level2or3_SM2_Ack);
		case 26:
			return &(outputs_ctx._L3_SM1_Level2or3_SM2_NoAck);
		case 27:
			return &(outputs_ctx._L2_SM1_Level2or3_SM2_NoAck);
		case 28:
			return &(outputs_ctx._L1_SM1_Level2or3_SM2_NoAck);
		case 29:
			return &(outputs_ctx.RBCReport);
		case 30:
			return &(outputs_ctx.FilteredBGMessage);
		case 31:
			return &(inputs_ctx.CheckedBGMessage);
		case 32:
			return &(inputs_ctx.Orientation);
		case 33:
			return &(inputs_ctx.RBCOrientationReport);
		case 34:
			return &(inputs_ctx.TrainInfo);
		default:
			break;
	}
	return 0;
}

static int IsSSM_TR_Initial_1_SM1Active(void * pHandle) {
	return *((SSM_TR_SM1*)pHandle) == SSM_TR_Initial_1_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Initial_1_SM1_Utils = {IsSSM_TR_Initial_1_SM1Active};

static int IsSSM_TR_Initial_2_SM1Active(void * pHandle) {
	return *((SSM_TR_SM1*)pHandle) == SSM_TR_Initial_2_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Initial_2_SM1_Utils = {IsSSM_TR_Initial_2_SM1Active};

static int IsSSM_st_Initial_SM1Active(void * pHandle) {
	return *((SSM_ST_SM1*)pHandle) == SSM_st_Initial_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_Initial_SM1_Utils = {IsSSM_st_Initial_SM1Active};

static int IsSSM_st_Level0or1_SM1Active(void * pHandle) {
	return *((SSM_ST_SM1*)pHandle) == SSM_st_Level0or1_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_Level0or1_SM1_Utils = {IsSSM_st_Level0or1_SM1Active};

static int IsSSM_TR_Init_1_SM2_SM1_Level2or3Active(void * pHandle) {
	return *((SSM_TR_SM2_SM1_Level2or3*)pHandle) == SSM_TR_Init_1_SM2_SM1_Level2or3 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Init_1_SM2_SM1_Level2or3_Utils = {IsSSM_TR_Init_1_SM2_SM1_Level2or3Active};

static int IsSSM_TR_Init_2_SM2_SM1_Level2or3Active(void * pHandle) {
	return *((SSM_TR_SM2_SM1_Level2or3*)pHandle) == SSM_TR_Init_2_SM2_SM1_Level2or3 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Init_2_SM2_SM1_Level2or3_Utils = {IsSSM_TR_Init_2_SM2_SM1_Level2or3Active};

static int IsSSM_st_Init_SM1_Level2or3_SM2Active(void * pHandle) {
	return *((SSM_ST_SM2_SM1_Level2or3*)pHandle) == SSM_st_Init_SM1_Level2or3_SM2 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_Init_SM1_Level2or3_SM2_Utils = {IsSSM_st_Init_SM1_Level2or3_SM2Active};

static int IsSSM_st_Ack_SM1_Level2or3_SM2Active(void * pHandle) {
	return *((SSM_ST_SM2_SM1_Level2or3*)pHandle) == SSM_st_Ack_SM1_Level2or3_SM2 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_Ack_SM1_Level2or3_SM2_Utils = {IsSSM_st_Ack_SM1_Level2or3_SM2Active};

static int IsSSM_st_NoAck_SM1_Level2or3_SM2Active(void * pHandle) {
	return *((SSM_ST_SM2_SM1_Level2or3*)pHandle) == SSM_st_NoAck_SM1_Level2or3_SM2 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_NoAck_SM1_Level2or3_SM2_Utils = {IsSSM_st_NoAck_SM1_Level2or3_SM2Active};

static int IsSSM_st_Level2or3_SM1Active(void * pHandle) {
	return *((SSM_ST_SM1*)pHandle) == SSM_st_Level2or3_SM1 ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_Level2or3_SM1_Utils = {IsSSM_st_Level2or3_SM1Active};

static int _SCSIM_ClockActive_SSM_st_NoAck_SM1_Level2or3_SM2(void* clock) {
return *(kcg_bool*)clock == SSM_st_NoAck_SM1_Level2or3_SM2 ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_Ack_SM1_Level2or3_SM2(void* clock) {
return *(kcg_bool*)clock == SSM_st_Ack_SM1_Level2or3_SM2 ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_Level2or3_SM1(void* clock) {
return *(kcg_bool*)clock == SSM_st_Level2or3_SM1 ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_Level0or1_SM1(void* clock) {
return *(kcg_bool*)clock == SSM_st_Level0or1_SM1 ? 1 : 0;
}
