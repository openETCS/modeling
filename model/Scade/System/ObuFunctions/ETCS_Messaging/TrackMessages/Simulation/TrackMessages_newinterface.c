#include "TrackMessages_newinterface.h"
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "d272c58271924af2a7ad1678324b1041";
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
inC_SendRadioMessage_TrainToTrack_TM_radio_messages inputs_ctx;
static inC_SendRadioMessage_TrainToTrack_TM_radio_messages inputs_ctx_restore;
static inC_SendRadioMessage_TrainToTrack_TM_radio_messages inputs_ctx_execute;
outC_SendRadioMessage_TrainToTrack_TM_radio_messages outputs_ctx;
static outC_SendRadioMessage_TrainToTrack_TM_radio_messages outputs_ctx_restore;

/* separate_io: inputs instanciation */

/* separate_io: outputs instanciation */

static void _SCSIM_RestoreInterface(void) {
	kcg_copy_struct__244(&(inputs_ctx.New_Message), &(inputs_ctx_restore.New_Message));
	kcg_copy_struct__244(&(inputs_ctx.MessageBus), &(inputs_ctx_restore.MessageBus));
	outputs_ctx = outputs_ctx_restore;

	/* separate_io: outputs restore */
}

static void _SCSIM_ExecuteInterface(void) {
	pSimulator->m_pfnAcquireValueMutex(pSimulator);
	kcg_copy_struct__244(&(inputs_ctx_execute.New_Message), &(inputs_ctx.New_Message));
	kcg_copy_struct__244(&(inputs_ctx_execute.MessageBus), &(inputs_ctx.MessageBus));
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
	SendRadioMessage_TrainToTrack_reset_TM_radio_messages(&outputs_ctx);
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
	SendRadioMessage_TrainToTrack_TM_radio_messages(&inputs_ctx_execute, &outputs_ctx);
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
	nSize += sizeof(inC_SendRadioMessage_TrainToTrack_TM_radio_messages);

/* separate_io: add (not in ctx) inputs size */

/* separate_io: add (not in ctx) outputs size */
	nSize += sizeof(outC_SendRadioMessage_TrainToTrack_TM_radio_messages);
#ifdef EXTENDED_SIM
	nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
	return nSize;
}

void SsmGatherDumpData(char * pData) {
	char* pCurrent = pData;
	memcpy(pCurrent, &inputs_ctx, sizeof(inC_SendRadioMessage_TrainToTrack_TM_radio_messages));
	pCurrent += sizeof(inC_SendRadioMessage_TrainToTrack_TM_radio_messages);

	/* separate_io: dump (not in ctx) inputs */

	/* separate_io: dump (not in ctx) outputs */
	memcpy(pCurrent, &outputs_ctx, sizeof(outC_SendRadioMessage_TrainToTrack_TM_radio_messages));
	pCurrent += sizeof(outC_SendRadioMessage_TrainToTrack_TM_radio_messages);
#ifdef EXTENDED_SIM
	ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
	const char* pCurrent = pData;
	memcpy(&inputs_ctx, pCurrent, sizeof(inC_SendRadioMessage_TrainToTrack_TM_radio_messages));
	pCurrent += sizeof(inC_SendRadioMessage_TrainToTrack_TM_radio_messages);

	/* separate_io: restore (not in ctx) inputs */

	/* separate_io: restore (not in ctx) outputs */
	memcpy(&outputs_ctx, pCurrent, sizeof(outC_SendRadioMessage_TrainToTrack_TM_radio_messages));
	pCurrent += sizeof(outC_SendRadioMessage_TrainToTrack_TM_radio_messages);
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

