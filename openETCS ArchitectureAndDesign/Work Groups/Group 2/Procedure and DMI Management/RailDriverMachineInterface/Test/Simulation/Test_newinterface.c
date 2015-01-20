#include "Test_newinterface.h"
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "b6caad8a24791a22a9a3e67288458ee3";
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
inC_Test_DMI inputs_ctx;
static inC_Test_DMI inputs_ctx_restore;
static inC_Test_DMI inputs_ctx_execute;
outC_Test_DMI outputs_ctx;
static outC_Test_DMI outputs_ctx_restore;

/* separate_io: inputs instanciation */

/* separate_io: outputs instanciation */

static void _SCSIM_RestoreInterface(void) {
	inputs_ctx.RP_SpeedTarget = inputs_ctx_restore.RP_SpeedTarget;
	inputs_ctx.RP_SpeedPermitted = inputs_ctx_restore.RP_SpeedPermitted;
	inputs_ctx.RP_SpeedRelease = inputs_ctx_restore.RP_SpeedRelease;
	inputs_ctx.OverA = inputs_ctx_restore.OverA;
	inputs_ctx.MousePressed = inputs_ctx_restore.MousePressed;
	kcg_copy_array_bool_12(&(inputs_ctx.VisibleGradients), &(inputs_ctx_restore.VisibleGradients));
	inputs_ctx.Brake = inputs_ctx_restore.Brake;
	inputs_ctx.lala = inputs_ctx_restore.lala;
	inputs_ctx.insideButton = inputs_ctx_restore.insideButton;
	kcg_copy_array_bool_12(&(inputs_ctx.arraykey), &(inputs_ctx_restore.arraykey));
	outputs_ctx = outputs_ctx_restore;

	/* separate_io: outputs restore */
}

static void _SCSIM_ExecuteInterface(void) {
	pSimulator->m_pfnAcquireValueMutex(pSimulator);
	inputs_ctx_execute.RP_SpeedTarget = inputs_ctx.RP_SpeedTarget;
	inputs_ctx_execute.RP_SpeedPermitted = inputs_ctx.RP_SpeedPermitted;
	inputs_ctx_execute.RP_SpeedRelease = inputs_ctx.RP_SpeedRelease;
	inputs_ctx_execute.OverA = inputs_ctx.OverA;
	inputs_ctx_execute.MousePressed = inputs_ctx.MousePressed;
	kcg_copy_array_bool_12(&(inputs_ctx_execute.VisibleGradients), &(inputs_ctx.VisibleGradients));
	inputs_ctx_execute.Brake = inputs_ctx.Brake;
	inputs_ctx_execute.lala = inputs_ctx.lala;
	inputs_ctx_execute.insideButton = inputs_ctx.insideButton;
	kcg_copy_array_bool_12(&(inputs_ctx_execute.arraykey), &(inputs_ctx.arraykey));
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
	Test_DMI_init(&outputs_ctx);
	Test_DMI_reset(&outputs_ctx);
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
	Test_DMI(&inputs_ctx_execute, &outputs_ctx);
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
	nSize += sizeof(inC_Test_DMI);

/* separate_io: add (not in ctx) inputs size */

/* separate_io: add (not in ctx) outputs size */
	nSize += sizeof(outC_Test_DMI);
#ifdef EXTENDED_SIM
	nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
	return nSize;
}

void SsmGatherDumpData(char * pData) {
	char* pCurrent = pData;
	memcpy(pCurrent, &inputs_ctx, sizeof(inC_Test_DMI));
	pCurrent += sizeof(inC_Test_DMI);

	/* separate_io: dump (not in ctx) inputs */

	/* separate_io: dump (not in ctx) outputs */
	memcpy(pCurrent, &outputs_ctx, sizeof(outC_Test_DMI));
	pCurrent += sizeof(outC_Test_DMI);
#ifdef EXTENDED_SIM
	ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
	const char* pCurrent = pData;
	memcpy(&inputs_ctx, pCurrent, sizeof(inC_Test_DMI));
	pCurrent += sizeof(inC_Test_DMI);

	/* separate_io: restore (not in ctx) inputs */

	/* separate_io: restore (not in ctx) outputs */
	memcpy(&outputs_ctx, pCurrent, sizeof(outC_Test_DMI));
	pCurrent += sizeof(outC_Test_DMI);
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

