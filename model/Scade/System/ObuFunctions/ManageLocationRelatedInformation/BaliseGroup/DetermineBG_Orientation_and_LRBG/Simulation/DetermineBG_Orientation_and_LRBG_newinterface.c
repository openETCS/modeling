#include "DetermineBG_Orientation_and_LRBG_newinterface.h"
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "3cf4b851ff09e795b48417e653d33582";
const char* _SCSIM_SmuTypesCheckSum = "d5b51fa9eff9683da46173266ac496c5";

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
inC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG inputs_ctx;
static inC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG inputs_ctx_restore;
static inC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG inputs_ctx_execute;
outC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG outputs_ctx;
static outC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG outputs_ctx_restore;

/* separate_io: inputs instanciation */

/* separate_io: outputs instanciation */

static void _SCSIM_RestoreInterface(void) {
	kcg_copy_struct__818(&(inputs_ctx.CurrentLRBG), &(inputs_ctx_restore.CurrentLRBG));
	kcg_copy_struct__804(&(inputs_ctx.CheckedBGMessage), &(inputs_ctx_restore.CheckedBGMessage));
	kcg_copy_array__823(&(inputs_ctx.ListOfBGs), &(inputs_ctx_restore.ListOfBGs));
	kcg_copy_struct__774(&(inputs_ctx.TrainInfo), &(inputs_ctx_restore.TrainInfo));
	kcg_copy_struct__764(&(inputs_ctx.RBCOrientationReport), &(inputs_ctx_restore.RBCOrientationReport));
	outputs_ctx = outputs_ctx_restore;

	/* separate_io: outputs restore */
}

static void _SCSIM_ExecuteInterface(void) {
	pSimulator->m_pfnAcquireValueMutex(pSimulator);
	kcg_copy_struct__818(&(inputs_ctx_execute.CurrentLRBG), &(inputs_ctx.CurrentLRBG));
	kcg_copy_struct__804(&(inputs_ctx_execute.CheckedBGMessage), &(inputs_ctx.CheckedBGMessage));
	kcg_copy_array__823(&(inputs_ctx_execute.ListOfBGs), &(inputs_ctx.ListOfBGs));
	kcg_copy_struct__774(&(inputs_ctx_execute.TrainInfo), &(inputs_ctx.TrainInfo));
	kcg_copy_struct__764(&(inputs_ctx_execute.RBCOrientationReport), &(inputs_ctx.RBCOrientationReport));
	pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

/*******************************
 * Cyclic function encapsulation
 *******************************/
void SimInit(void) {
	/* Context initialization */
	_SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
	BeforeSimInit();
#endif /* EXTENDED_SIM */
	DetermineBGOrientation_LRBG_reset_DetermineBGOrientation_LRBG(&outputs_ctx);
#ifdef EXTENDED_SIM
	AfterSimInit();
#endif /* EXTENDED_SIM */
}

#ifdef EXTENDED_SIM
int GraphicalInputsConnected = 1;
#endif /* EXTENDED_SIM */
int SimStep(void) {
#ifdef EXTENDED_SIM
	if (GraphicalInputsConnected)
		BeforeSimStep();
#endif /* EXTENDED_SIM */
	_SCSIM_ExecuteInterface();
	DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
	AfterSimStep();
#endif /* EXTENDED_SIM */
	return 1;
}

void SimStop(void) {
#ifdef EXTENDED_SIM
	ExtendedSimStop();
#endif /* EXTENDED_SIM */
}

int SsmGetDumpSize(void) {
	int nSize = 0;
	nSize += sizeof(inC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG);

/* separate_io: add (not in ctx) inputs size */

/* separate_io: add (not in ctx) outputs size */
	nSize += sizeof(outC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG);
#ifdef EXTENDED_SIM
	nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
	return nSize;
}

void SsmGatherDumpData(char * pData) {
	char* pCurrent = pData;
	memcpy(pCurrent, &inputs_ctx, sizeof(inC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG));
	pCurrent += sizeof(inC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG);

	/* separate_io: dump (not in ctx) inputs */

	/* separate_io: dump (not in ctx) outputs */
	memcpy(pCurrent, &outputs_ctx, sizeof(outC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG));
	pCurrent += sizeof(outC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG);
#ifdef EXTENDED_SIM
	ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
	const char* pCurrent = pData;
	memcpy(&inputs_ctx, pCurrent, sizeof(inC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG));
	pCurrent += sizeof(inC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG);

	/* separate_io: restore (not in ctx) inputs */

	/* separate_io: restore (not in ctx) outputs */
	memcpy(&outputs_ctx, pCurrent, sizeof(outC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG));
	pCurrent += sizeof(outC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG);
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

