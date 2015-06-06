#include "UtrechtAmsterdam_oETCS_newinterface.h"
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "22b4b7637a51bb7e9532c10da23c6589";
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
inC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel inputs_ctx;
static inC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel inputs_ctx_restore;
static inC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel inputs_ctx_execute;
outC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel outputs_ctx;
static outC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel outputs_ctx_restore;

/* separate_io: inputs instanciation */

/* separate_io: outputs instanciation */

static void _SCSIM_RestoreInterface(void) {
	kcg_copy_struct__1384(&(inputs_ctx.SectionData_in), &(inputs_ctx_restore.SectionData_in));
	outputs_ctx = outputs_ctx_restore;

	/* separate_io: outputs restore */
}

static void _SCSIM_ExecuteInterface(void) {
	pSimulator->m_pfnAcquireValueMutex(pSimulator);
	kcg_copy_struct__1384(&(inputs_ctx_execute.SectionData_in), &(inputs_ctx.SectionData_in));
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
	Sheet05_Amstel_reset_AmsterdamUtrechtL1_Sheet05_Amstel(&outputs_ctx);
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
	Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel(&inputs_ctx_execute, &outputs_ctx);
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
	nSize += sizeof(inC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel);

/* separate_io: add (not in ctx) inputs size */

/* separate_io: add (not in ctx) outputs size */
	nSize += sizeof(outC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel);
#ifdef EXTENDED_SIM
	nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
	return nSize;
}

void SsmGatherDumpData(char * pData) {
	char* pCurrent = pData;
	memcpy(pCurrent, &inputs_ctx, sizeof(inC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel));
	pCurrent += sizeof(inC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel);

	/* separate_io: dump (not in ctx) inputs */

	/* separate_io: dump (not in ctx) outputs */
	memcpy(pCurrent, &outputs_ctx, sizeof(outC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel));
	pCurrent += sizeof(outC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel);
#ifdef EXTENDED_SIM
	ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
	const char* pCurrent = pData;
	memcpy(&inputs_ctx, pCurrent, sizeof(inC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel));
	pCurrent += sizeof(inC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel);

	/* separate_io: restore (not in ctx) inputs */

	/* separate_io: restore (not in ctx) outputs */
	memcpy(&outputs_ctx, pCurrent, sizeof(outC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel));
	pCurrent += sizeof(outC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel);
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

