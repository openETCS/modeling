#include "UtrechtAmsterdam_oETCS_newinterface.h"
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "712267d95b8b0e9f9a9feef332c04792";
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
static CompressedPackets_T_Common_Types_Pkg _ctx_Radio_packets_in_restore;
CompressedPackets_T_Common_Types_Pkg _ctx_Radio_packets_in_buffer;
static CompressedPackets_T_Common_Types_Pkg _ctx_Radio_packets_out_restore;
static outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC _ctx_mem_restore;

static void _SCSIM_RestoreInterface(void) {
	kcg_copy_struct__2946(&(_ctx_Radio_packets_in_buffer), &(_ctx_Radio_packets_in_restore));
	kcg_copy_struct__2946(&(Radio_packets_out), &(_ctx_Radio_packets_out_restore));
	Ctxt_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC = _ctx_mem_restore;
}

static void _SCSIM_ExecuteInterface(void) {
	pSimulator->m_pfnAcquireValueMutex(pSimulator);
	kcg_copy_struct__2946(&(Radio_packets_in), &(_ctx_Radio_packets_in_buffer));
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
	SendRadioPackets_LRBG_354_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC();
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
	SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC();
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
	nSize += sizeof(CompressedPackets_T_Common_Types_Pkg);
	nSize += sizeof(CompressedPackets_T_Common_Types_Pkg);
	nSize += sizeof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC);
#ifdef EXTENDED_SIM
	nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
	return nSize;
}

void SsmGatherDumpData(char * pData) {
	char* pCurrent = pData;
	memcpy(pCurrent, &Radio_packets_in, sizeof(CompressedPackets_T_Common_Types_Pkg));
	pCurrent += sizeof(CompressedPackets_T_Common_Types_Pkg);
	memcpy(pCurrent, &Radio_packets_out, sizeof(CompressedPackets_T_Common_Types_Pkg));
	pCurrent += sizeof(CompressedPackets_T_Common_Types_Pkg);
	memcpy(pCurrent, &Ctxt_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, sizeof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC));
	pCurrent += sizeof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC);
#ifdef EXTENDED_SIM
	ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
	const char* pCurrent = pData;
	memcpy(&Radio_packets_in, pCurrent, sizeof(CompressedPackets_T_Common_Types_Pkg));
	pCurrent += sizeof(CompressedPackets_T_Common_Types_Pkg);
	memcpy(&Radio_packets_out, pCurrent, sizeof(CompressedPackets_T_Common_Types_Pkg));
	pCurrent += sizeof(CompressedPackets_T_Common_Types_Pkg);
	memcpy(&Ctxt_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, pCurrent, sizeof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC));
	pCurrent += sizeof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC);
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

