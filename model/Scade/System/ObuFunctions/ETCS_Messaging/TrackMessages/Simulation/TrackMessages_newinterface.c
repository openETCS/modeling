#include "TrackMessages_newinterface.h"
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "8012ca146cd01df2562df731a9fc2fe2";
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
inC_INFRA_Balise_Localisation inputs_ctx;
static inC_INFRA_Balise_Localisation inputs_ctx_restore;
static inC_INFRA_Balise_Localisation inputs_ctx_execute;
outC_INFRA_Balise_Localisation outputs_ctx;
static outC_INFRA_Balise_Localisation outputs_ctx_restore;

/* separate_io: inputs instanciation */

/* separate_io: outputs instanciation */

static void _SCSIM_RestoreInterface(void) {
	inputs_ctx.Loc = inputs_ctx_restore.Loc;
	inputs_ctx.TrainPos = inputs_ctx_restore.TrainPos;
	inputs_ctx.accuracy = inputs_ctx_restore.accuracy;
	outputs_ctx = outputs_ctx_restore;

	/* separate_io: outputs restore */
}

static void _SCSIM_ExecuteInterface(void) {
	pSimulator->m_pfnAcquireValueMutex(pSimulator);
	inputs_ctx_execute.Loc = inputs_ctx.Loc;
	inputs_ctx_execute.TrainPos = inputs_ctx.TrainPos;
	inputs_ctx_execute.accuracy = inputs_ctx.accuracy;
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
	INFRA_Balise_Localisation_reset(&outputs_ctx);
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
	INFRA_Balise_Localisation(&inputs_ctx_execute, &outputs_ctx);
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
	nSize += sizeof(inC_INFRA_Balise_Localisation);

/* separate_io: add (not in ctx) inputs size */

/* separate_io: add (not in ctx) outputs size */
	nSize += sizeof(outC_INFRA_Balise_Localisation);
#ifdef EXTENDED_SIM
	nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
	return nSize;
}

void SsmGatherDumpData(char * pData) {
	char* pCurrent = pData;
	memcpy(pCurrent, &inputs_ctx, sizeof(inC_INFRA_Balise_Localisation));
	pCurrent += sizeof(inC_INFRA_Balise_Localisation);

	/* separate_io: dump (not in ctx) inputs */

	/* separate_io: dump (not in ctx) outputs */
	memcpy(pCurrent, &outputs_ctx, sizeof(outC_INFRA_Balise_Localisation));
	pCurrent += sizeof(outC_INFRA_Balise_Localisation);
#ifdef EXTENDED_SIM
	ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
	const char* pCurrent = pData;
	memcpy(&inputs_ctx, pCurrent, sizeof(inC_INFRA_Balise_Localisation));
	pCurrent += sizeof(inC_INFRA_Balise_Localisation);

	/* separate_io: restore (not in ctx) inputs */

	/* separate_io: restore (not in ctx) outputs */
	memcpy(&outputs_ctx, pCurrent, sizeof(outC_INFRA_Balise_Localisation));
	pCurrent += sizeof(outC_INFRA_Balise_Localisation);
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

