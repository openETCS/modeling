#include "UtrechtAmsterdam_oETCS_newinterface.h"
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "ba214ce4769eaf9a5dbc105a66d2cb68";
const char* _SCSIM_SmuTypesCheckSum = "f79c40cc4a28a84eb05b013596813063";

/*******************************
 * Validity
 *******************************/
int valid(void * pHandle) {
	return 1;
}
int notvalid(void * pHandle) {
	return 0;
}

/*******************************
 * Simulation context
 *******************************/
static kcg_real _ctx_TrainPos_restore;
kcg_real _ctx_TrainPos_buffer;
static kcg_int _ctx_Trigger_in_restore;
kcg_int _ctx_Trigger_in_buffer;
static CompressedPackets_T_Common_Types_Pkg _ctx_Balise_Packets_restore;
static TelegramHeader_T_BG_Types_Pkg _ctx_Balise_Header_restore;
static Radio_TrackTrain_Header_T_Radio_Types_Pkg _ctx_RadioTrackTrainHeader_out_restore;
static CompressedPackets_T_Common_Types_Pkg _ctx_Compressed_Packets_out_restore;
static CompressedRadioMessage_TM _ctx_Compressed_Radio_Message_out_restore;
static outC_Amsterdam_Utrecht_US_Integration_June _ctx_mem_restore;

static void _SCSIM_RestoreInterface(void) {
	_ctx_TrainPos_buffer = _ctx_TrainPos_restore;
	_ctx_Trigger_in_buffer = _ctx_Trigger_in_restore;
	kcg_copy_struct__29638(&(Balise_Packets), &(_ctx_Balise_Packets_restore));
	kcg_copy_struct__29611(&(Balise_Header), &(_ctx_Balise_Header_restore));
	kcg_copy_struct__29593(&(RadioTrackTrainHeader_out), &(_ctx_RadioTrackTrainHeader_out_restore));
	kcg_copy_struct__29638(&(Compressed_Packets_out), &(_ctx_Compressed_Packets_out_restore));
	kcg_copy_struct__29674(&(Compressed_Radio_Message_out), &(_ctx_Compressed_Radio_Message_out_restore));
	Ctxt_Amsterdam_Utrecht_US_Integration_June = _ctx_mem_restore;
}

static void _SCSIM_ExecuteInterface(void) {
	pSimulator->m_pfnAcquireValueMutex(pSimulator);
	TrainPos = _ctx_TrainPos_buffer;
	Trigger_in = _ctx_Trigger_in_buffer;
	pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

/*******************************
 * Init/Reset function encapsulation
 *******************************/
int SimInit(void) {
	int nRet=0;
	_SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
	BeforeSimInit();
#endif /* EXTENDED_SIM */
	nRet=0;
#ifdef EXTENDED_SIM
	AfterSimInit();
#endif /* EXTENDED_SIM */
	return nRet;
}

int SimReset(void) {
	int nRet=0;
	_SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
	BeforeSimInit();
#endif /* EXTENDED_SIM */
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
	Amsterdam_Utrecht_reset_US_Integration_June();
	nRet=1;
#else /* KCG_NO_EXTERN_CALL_TO_RESET */
	nRet=0;
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */
#ifdef EXTENDED_SIM
	AfterSimInit();
#endif /* EXTENDED_SIM */
	return nRet;
}

#ifdef EXTENDED_SIM
int GraphicalInputsConnected = 1;
#endif /* EXTENDED_SIM */
/*******************************
 * Cyclic function encapsulation
 *******************************/
int SimStep(void) {
#ifdef EXTENDED_SIM
	if (GraphicalInputsConnected)
		BeforeSimStep();
#endif /* EXTENDED_SIM */
	_SCSIM_ExecuteInterface();
	Amsterdam_Utrecht_US_Integration_June();
#ifdef EXTENDED_SIM
	AfterSimStep();
#endif /* EXTENDED_SIM */
	return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
	ExtendedSimStop();
#endif /* EXTENDED_SIM */
	return 1;
}

int SsmGetDumpSize(void) {
	int nSize = 0;
	nSize += sizeof(kcg_real);
	nSize += sizeof(kcg_int);
	nSize += sizeof(CompressedPackets_T_Common_Types_Pkg);
	nSize += sizeof(TelegramHeader_T_BG_Types_Pkg);
	nSize += sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg);
	nSize += sizeof(CompressedPackets_T_Common_Types_Pkg);
	nSize += sizeof(CompressedRadioMessage_TM);
	nSize += sizeof(outC_Amsterdam_Utrecht_US_Integration_June);
#ifdef EXTENDED_SIM
	nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
	return nSize;
}

void SsmGatherDumpData(char * pData) {
	char* pCurrent = pData;
	memcpy(pCurrent, &TrainPos, sizeof(kcg_real));
	pCurrent += sizeof(kcg_real);
	memcpy(pCurrent, &Trigger_in, sizeof(kcg_int));
	pCurrent += sizeof(kcg_int);
	memcpy(pCurrent, &Balise_Packets, sizeof(CompressedPackets_T_Common_Types_Pkg));
	pCurrent += sizeof(CompressedPackets_T_Common_Types_Pkg);
	memcpy(pCurrent, &Balise_Header, sizeof(TelegramHeader_T_BG_Types_Pkg));
	pCurrent += sizeof(TelegramHeader_T_BG_Types_Pkg);
	memcpy(pCurrent, &RadioTrackTrainHeader_out, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg));
	pCurrent += sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg);
	memcpy(pCurrent, &Compressed_Packets_out, sizeof(CompressedPackets_T_Common_Types_Pkg));
	pCurrent += sizeof(CompressedPackets_T_Common_Types_Pkg);
	memcpy(pCurrent, &Compressed_Radio_Message_out, sizeof(CompressedRadioMessage_TM));
	pCurrent += sizeof(CompressedRadioMessage_TM);
	memcpy(pCurrent, &Ctxt_Amsterdam_Utrecht_US_Integration_June, sizeof(outC_Amsterdam_Utrecht_US_Integration_June));
	pCurrent += sizeof(outC_Amsterdam_Utrecht_US_Integration_June);
#ifdef EXTENDED_SIM
	ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
	const char* pCurrent = pData;
	memcpy(&TrainPos, pCurrent, sizeof(kcg_real));
	pCurrent += sizeof(kcg_real);
	memcpy(&Trigger_in, pCurrent, sizeof(kcg_int));
	pCurrent += sizeof(kcg_int);
	memcpy(&Balise_Packets, pCurrent, sizeof(CompressedPackets_T_Common_Types_Pkg));
	pCurrent += sizeof(CompressedPackets_T_Common_Types_Pkg);
	memcpy(&Balise_Header, pCurrent, sizeof(TelegramHeader_T_BG_Types_Pkg));
	pCurrent += sizeof(TelegramHeader_T_BG_Types_Pkg);
	memcpy(&RadioTrackTrainHeader_out, pCurrent, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg));
	pCurrent += sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg);
	memcpy(&Compressed_Packets_out, pCurrent, sizeof(CompressedPackets_T_Common_Types_Pkg));
	pCurrent += sizeof(CompressedPackets_T_Common_Types_Pkg);
	memcpy(&Compressed_Radio_Message_out, pCurrent, sizeof(CompressedRadioMessage_TM));
	pCurrent += sizeof(CompressedRadioMessage_TM);
	memcpy(&Ctxt_Amsterdam_Utrecht_US_Integration_June, pCurrent, sizeof(outC_Amsterdam_Utrecht_US_Integration_June));
	pCurrent += sizeof(outC_Amsterdam_Utrecht_US_Integration_June);
#ifdef EXTENDED_SIM
	ExtendedRestoreDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

const char * SsmGetCheckSum() {
	return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
	return _SCSIM_SmuTypesCheckSum;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
	UpdateValues();
#endif /* EXTENDED_SIM */
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
	GraphicalInputsConnected = bConnect;
#endif /* EXTENDED_SIM */
}

