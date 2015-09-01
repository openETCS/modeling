#include "UtrechtAmsterdam_oETCS_newinterface.h"
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "ccbd771bbcef6b8568dbafe95a06f5d0";
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
static P027V1_OBU_T_TM_baseline2 _ctx_PacketOut_restore;
static outC_TestP027V1_Internal_Tests _ctx_mem_restore;

static void _SCSIM_RestoreInterface(void) {
	kcg_copy_struct__2401(&(PacketOut), &(_ctx_PacketOut_restore));
	Ctxt_TestP027V1_Internal_Tests = _ctx_mem_restore;
}

static void _SCSIM_ExecuteInterface(void) {
	pSimulator->m_pfnAcquireValueMutex(pSimulator);
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
	TestP027V1_reset_Internal_Tests();
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
	TestP027V1_Internal_Tests();
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
	nSize += sizeof(P027V1_OBU_T_TM_baseline2);
	nSize += sizeof(outC_TestP027V1_Internal_Tests);
#ifdef EXTENDED_SIM
	nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
	return nSize;
}

void SsmGatherDumpData(char * pData) {
	char* pCurrent = pData;
	memcpy(pCurrent, &PacketOut, sizeof(P027V1_OBU_T_TM_baseline2));
	pCurrent += sizeof(P027V1_OBU_T_TM_baseline2);
	memcpy(pCurrent, &Ctxt_TestP027V1_Internal_Tests, sizeof(outC_TestP027V1_Internal_Tests));
	pCurrent += sizeof(outC_TestP027V1_Internal_Tests);
#ifdef EXTENDED_SIM
	ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
	const char* pCurrent = pData;
	memcpy(&PacketOut, pCurrent, sizeof(P027V1_OBU_T_TM_baseline2));
	pCurrent += sizeof(P027V1_OBU_T_TM_baseline2);
	memcpy(&Ctxt_TestP027V1_Internal_Tests, pCurrent, sizeof(outC_TestP027V1_Internal_Tests));
	pCurrent += sizeof(outC_TestP027V1_Internal_Tests);
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

