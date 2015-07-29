#include "Root_SDM_interface.h"
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "6eef4b6310df836f5edd7dc75c883b90";
const char* _SCSIM_SmuTypesCheckSum = "28e18c1b393c1cd143584174bcc1ba87";

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
inC_Root_SDM inputs_ctx;
static inC_Root_SDM inputs_ctx_restore;
static inC_Root_SDM inputs_ctx_execute;
outC_Root_SDM outputs_ctx;
static outC_Root_SDM outputs_ctx_restore;

/* separate_io: inputs instanciation */

/* separate_io: outputs instanciation */

static void _SCSIM_RestoreInterface(void) {
	kcg_copy_array__1614(&(inputs_ctx.SSP), &(inputs_ctx_restore.SSP));
	kcg_copy_array__1611(&(inputs_ctx.TSR_1), &(inputs_ctx_restore.TSR_1));
	kcg_copy_array__1611(&(inputs_ctx.TSR_2), &(inputs_ctx_restore.TSR_2));
	kcg_copy_array__1611(&(inputs_ctx.TSR_3), &(inputs_ctx_restore.TSR_3));
	kcg_copy_struct__1606(&(inputs_ctx.MA_EOA), &(inputs_ctx_restore.MA_EOA));
	kcg_copy_array__1614(&(inputs_ctx.Gradient), &(inputs_ctx_restore.Gradient));
	kcg_copy_array__1647(&(inputs_ctx.Adh), &(inputs_ctx_restore.Adh));
	outputs_ctx = outputs_ctx_restore;

	/* separate_io: outputs restore */
}

static void _SCSIM_ExecuteInterface(void) {
	pSimulator->m_pfnAcquireValueMutex(pSimulator);
	kcg_copy_array__1614(&(inputs_ctx_execute.SSP), &(inputs_ctx.SSP));
	kcg_copy_array__1611(&(inputs_ctx_execute.TSR_1), &(inputs_ctx.TSR_1));
	kcg_copy_array__1611(&(inputs_ctx_execute.TSR_2), &(inputs_ctx.TSR_2));
	kcg_copy_array__1611(&(inputs_ctx_execute.TSR_3), &(inputs_ctx.TSR_3));
	kcg_copy_struct__1606(&(inputs_ctx_execute.MA_EOA), &(inputs_ctx.MA_EOA));
	kcg_copy_array__1614(&(inputs_ctx_execute.Gradient), &(inputs_ctx.Gradient));
	kcg_copy_array__1647(&(inputs_ctx_execute.Adh), &(inputs_ctx.Adh));
	pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

extern void _SCSIM_Mapping_Create();

/*******************************
 * Cyclic function encapsulation
 *******************************/
void SimInit(void) {
	/* Context initialization */
	_SCSIM_Mapping_Create();
	_SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
	BeforeSimInit();
#endif /* EXTENDED_SIM */
	Root_SDM_reset(&outputs_ctx);
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
	Root_SDM(&inputs_ctx_execute, &outputs_ctx);
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
	nSize += sizeof(inC_Root_SDM);

/* separate_io: add (not in ctx) inputs size */

/* separate_io: add (not in ctx) outputs size */
	nSize += sizeof(outC_Root_SDM);
#ifdef EXTENDED_SIM
	nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
	return nSize;
}

void SsmGatherDumpData(char * pData) {
	char* pCurrent = pData;
	memcpy(pCurrent, &inputs_ctx, sizeof(inC_Root_SDM));
	pCurrent += sizeof(inC_Root_SDM);

	/* separate_io: dump (not in ctx) inputs */

	/* separate_io: dump (not in ctx) outputs */
	memcpy(pCurrent, &outputs_ctx, sizeof(outC_Root_SDM));
	pCurrent += sizeof(outC_Root_SDM);
#ifdef EXTENDED_SIM
	ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
	const char* pCurrent = pData;
	memcpy(&inputs_ctx, pCurrent, sizeof(inC_Root_SDM));
	pCurrent += sizeof(inC_Root_SDM);

	/* separate_io: restore (not in ctx) inputs */

	/* separate_io: restore (not in ctx) outputs */
	memcpy(&outputs_ctx, pCurrent, sizeof(outC_Root_SDM));
	pCurrent += sizeof(outC_Root_SDM);
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

