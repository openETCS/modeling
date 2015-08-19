#include "TrackAtlas_newinterface.h"
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "cedd9843bbddad949625ab2db64dfb86";
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
inC_TrackAtlas_TrackAtlas inputs_ctx;
static inC_TrackAtlas_TrackAtlas inputs_ctx_restore;
static inC_TrackAtlas_TrackAtlas inputs_ctx_execute;
outC_TrackAtlas_TrackAtlas outputs_ctx;
static outC_TrackAtlas_TrackAtlas outputs_ctx_restore;

/* separate_io: inputs instanciation */

/* separate_io: outputs instanciation */

static void _SCSIM_RestoreInterface(void) {
	kcg_copy_struct__10082(&(inputs_ctx.MessageIn), &(inputs_ctx_restore.MessageIn));
	kcg_copy_struct__10134(&(inputs_ctx.ModeAndLevel_in), &(inputs_ctx_restore.ModeAndLevel_in));
	inputs_ctx.TrainData_in = inputs_ctx_restore.TrainData_in;
	kcg_copy_struct__9994(&(inputs_ctx.TrainPositionIn), &(inputs_ctx_restore.TrainPositionIn));
	inputs_ctx.train_length_TOBEREPLACED = inputs_ctx_restore.train_length_TOBEREPLACED;
	inputs_ctx.SystemTime = inputs_ctx_restore.SystemTime;
	inputs_ctx.preindicationLocation = inputs_ctx_restore.preindicationLocation;
	kcg_copy_struct__9949(&(inputs_ctx.odometry), &(inputs_ctx_restore.odometry));
	kcg_copy_struct__10011(&(inputs_ctx.fromDriverToMA_R), &(inputs_ctx_restore.fromDriverToMA_R));
	kcg_copy_struct__10016(&(inputs_ctx.trainProps), &(inputs_ctx_restore.trainProps));
	kcg_copy_struct__9763(&(inputs_ctx.packet0), &(inputs_ctx_restore.packet0));
	kcg_copy_struct__9739(&(inputs_ctx.packet1), &(inputs_ctx_restore.packet1));
	inputs_ctx.t_train = inputs_ctx_restore.t_train;
	kcg_copy_struct__10320(&(inputs_ctx.P203V1_onboard), &(inputs_ctx_restore.P203V1_onboard));
	kcg_copy_struct__10351(&(inputs_ctx.PermanentDataP003), &(inputs_ctx_restore.PermanentDataP003));
	outputs_ctx = outputs_ctx_restore;

	/* separate_io: outputs restore */
}

static void _SCSIM_ExecuteInterface(void) {
	pSimulator->m_pfnAcquireValueMutex(pSimulator);
	kcg_copy_struct__10082(&(inputs_ctx_execute.MessageIn), &(inputs_ctx.MessageIn));
	kcg_copy_struct__10134(&(inputs_ctx_execute.ModeAndLevel_in), &(inputs_ctx.ModeAndLevel_in));
	inputs_ctx_execute.TrainData_in = inputs_ctx.TrainData_in;
	kcg_copy_struct__9994(&(inputs_ctx_execute.TrainPositionIn), &(inputs_ctx.TrainPositionIn));
	inputs_ctx_execute.train_length_TOBEREPLACED = inputs_ctx.train_length_TOBEREPLACED;
	inputs_ctx_execute.SystemTime = inputs_ctx.SystemTime;
	inputs_ctx_execute.preindicationLocation = inputs_ctx.preindicationLocation;
	kcg_copy_struct__9949(&(inputs_ctx_execute.odometry), &(inputs_ctx.odometry));
	kcg_copy_struct__10011(&(inputs_ctx_execute.fromDriverToMA_R), &(inputs_ctx.fromDriverToMA_R));
	kcg_copy_struct__10016(&(inputs_ctx_execute.trainProps), &(inputs_ctx.trainProps));
	kcg_copy_struct__9763(&(inputs_ctx_execute.packet0), &(inputs_ctx.packet0));
	kcg_copy_struct__9739(&(inputs_ctx_execute.packet1), &(inputs_ctx.packet1));
	inputs_ctx_execute.t_train = inputs_ctx.t_train;
	kcg_copy_struct__10320(&(inputs_ctx_execute.P203V1_onboard), &(inputs_ctx.P203V1_onboard));
	kcg_copy_struct__10351(&(inputs_ctx_execute.PermanentDataP003), &(inputs_ctx.PermanentDataP003));
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
	TrackAtlas_reset_TrackAtlas(&outputs_ctx);
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
	TrackAtlas_TrackAtlas(&inputs_ctx_execute, &outputs_ctx);
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
	nSize += sizeof(inC_TrackAtlas_TrackAtlas);

/* separate_io: add (not in ctx) inputs size */

/* separate_io: add (not in ctx) outputs size */
	nSize += sizeof(outC_TrackAtlas_TrackAtlas);
#ifdef EXTENDED_SIM
	nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
	return nSize;
}

void SsmGatherDumpData(char * pData) {
	char* pCurrent = pData;
	memcpy(pCurrent, &inputs_ctx, sizeof(inC_TrackAtlas_TrackAtlas));
	pCurrent += sizeof(inC_TrackAtlas_TrackAtlas);

	/* separate_io: dump (not in ctx) inputs */

	/* separate_io: dump (not in ctx) outputs */
	memcpy(pCurrent, &outputs_ctx, sizeof(outC_TrackAtlas_TrackAtlas));
	pCurrent += sizeof(outC_TrackAtlas_TrackAtlas);
#ifdef EXTENDED_SIM
	ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
	const char* pCurrent = pData;
	memcpy(&inputs_ctx, pCurrent, sizeof(inC_TrackAtlas_TrackAtlas));
	pCurrent += sizeof(inC_TrackAtlas_TrackAtlas);

	/* separate_io: restore (not in ctx) inputs */

	/* separate_io: restore (not in ctx) outputs */
	memcpy(&outputs_ctx, pCurrent, sizeof(outC_TrackAtlas_TrackAtlas));
	pCurrent += sizeof(outC_TrackAtlas_TrackAtlas);
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

