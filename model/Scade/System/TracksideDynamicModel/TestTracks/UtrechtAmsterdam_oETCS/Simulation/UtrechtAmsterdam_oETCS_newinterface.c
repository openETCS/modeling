#include "UtrechtAmsterdam_oETCS_newinterface.h"
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "5657751fa5f7c1bfbfcb58c1dfd344b1";
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
static kcg_int _ctx_nid_BG_looked_for_restore;
kcg_int _ctx_nid_BG_looked_for_buffer;
static kcg_real _ctx_TrainPos_restore;
static outC_TriggerSpecificBalise_Internal_Tests _ctx_mem_restore;

static void _SCSIM_RestoreInterface(void) {
	_ctx_nid_BG_looked_for_buffer = _ctx_nid_BG_looked_for_restore;
	TrainPos = _ctx_TrainPos_restore;
	Ctxt_TriggerSpecificBalise_Internal_Tests = _ctx_mem_restore;
}

static void _SCSIM_ExecuteInterface(void) {
	pSimulator->m_pfnAcquireValueMutex(pSimulator);
	nid_BG_looked_for = _ctx_nid_BG_looked_for_buffer;
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
	TriggerSpecificBalise_reset_Internal_Tests();
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
	TriggerSpecificBalise_Internal_Tests();
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
	nSize += sizeof(kcg_int);
	nSize += sizeof(kcg_real);
	nSize += sizeof(outC_TriggerSpecificBalise_Internal_Tests);
#ifdef EXTENDED_SIM
	nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
	return nSize;
}

void SsmGatherDumpData(char * pData) {
	char* pCurrent = pData;
	memcpy(pCurrent, &nid_BG_looked_for, sizeof(kcg_int));
	pCurrent += sizeof(kcg_int);
	memcpy(pCurrent, &TrainPos, sizeof(kcg_real));
	pCurrent += sizeof(kcg_real);
	memcpy(pCurrent, &Ctxt_TriggerSpecificBalise_Internal_Tests, sizeof(outC_TriggerSpecificBalise_Internal_Tests));
	pCurrent += sizeof(outC_TriggerSpecificBalise_Internal_Tests);
#ifdef EXTENDED_SIM
	ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
	const char* pCurrent = pData;
	memcpy(&nid_BG_looked_for, pCurrent, sizeof(kcg_int));
	pCurrent += sizeof(kcg_int);
	memcpy(&TrainPos, pCurrent, sizeof(kcg_real));
	pCurrent += sizeof(kcg_real);
	memcpy(&Ctxt_TriggerSpecificBalise_Internal_Tests, pCurrent, sizeof(outC_TriggerSpecificBalise_Internal_Tests));
	pCurrent += sizeof(outC_TriggerSpecificBalise_Internal_Tests);
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

