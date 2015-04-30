#include "TrackDiscontinuity_InfraLib_interface.h"
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "2ba75987d687bccfeec8b634c7834b27";
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
inC_TrackDiscontinuity_InfraLib inputs_ctx;
static inC_TrackDiscontinuity_InfraLib inputs_ctx_restore;
static inC_TrackDiscontinuity_InfraLib inputs_ctx_execute;
outC_TrackDiscontinuity_InfraLib outputs_ctx;
static outC_TrackDiscontinuity_InfraLib outputs_ctx_restore;

/* separate_io: inputs instanciation */

/* separate_io: outputs instanciation */

static void _SCSIM_RestoreInterface(void) {
	kcg_copy_struct__340(&(inputs_ctx.SectionData_in), &(inputs_ctx_restore.SectionData_in));
	inputs_ctx.StartSection = inputs_ctx_restore.StartSection;
	inputs_ctx.EndSection = inputs_ctx_restore.EndSection;
	outputs_ctx = outputs_ctx_restore;

	/* separate_io: outputs restore */
}

static void _SCSIM_ExecuteInterface(void) {
	pSimulator->m_pfnAcquireValueMutex(pSimulator);
	kcg_copy_struct__340(&(inputs_ctx_execute.SectionData_in), &(inputs_ctx.SectionData_in));
	inputs_ctx_execute.StartSection = inputs_ctx.StartSection;
	inputs_ctx_execute.EndSection = inputs_ctx.EndSection;
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
	TrackDiscontinuity_reset_InfraLib(&outputs_ctx);
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
	TrackDiscontinuity_InfraLib(&inputs_ctx_execute, &outputs_ctx);
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
	nSize += sizeof(inC_TrackDiscontinuity_InfraLib);

/* separate_io: add (not in ctx) inputs size */

/* separate_io: add (not in ctx) outputs size */
	nSize += sizeof(outC_TrackDiscontinuity_InfraLib);
#ifdef EXTENDED_SIM
	nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
	return nSize;
}

void SsmGatherDumpData(char * pData) {
	char* pCurrent = pData;
	memcpy(pCurrent, &inputs_ctx, sizeof(inC_TrackDiscontinuity_InfraLib));
	pCurrent += sizeof(inC_TrackDiscontinuity_InfraLib);

	/* separate_io: dump (not in ctx) inputs */

	/* separate_io: dump (not in ctx) outputs */
	memcpy(pCurrent, &outputs_ctx, sizeof(outC_TrackDiscontinuity_InfraLib));
	pCurrent += sizeof(outC_TrackDiscontinuity_InfraLib);
#ifdef EXTENDED_SIM
	ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
	const char* pCurrent = pData;
	memcpy(&inputs_ctx, pCurrent, sizeof(inC_TrackDiscontinuity_InfraLib));
	pCurrent += sizeof(inC_TrackDiscontinuity_InfraLib);

	/* separate_io: restore (not in ctx) inputs */

	/* separate_io: restore (not in ctx) outputs */
	memcpy(&outputs_ctx, pCurrent, sizeof(outC_TrackDiscontinuity_InfraLib));
	pCurrent += sizeof(outC_TrackDiscontinuity_InfraLib);
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

