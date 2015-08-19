#ifndef DECODE_NID_LRBG_TM_CONVERSIONS_INTERFACE
#define DECODE_NID_LRBG_TM_CONVERSIONS_INTERFACE


#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "DECODE_NID_LRBG_TM_conversions.h"

extern SimSimulator * pSimulator;

/*******************************
 * Simulation context
 *******************************/
extern inC_DECODE_NID_LRBG_TM_conversions inputs_ctx;
extern outC_DECODE_NID_LRBG_TM_conversions outputs_ctx;

/* separate_io: inputs declaration */

/* separate_io: outputs declaration */
/*******************************
 * Validity
 *******************************/
extern int valid(void*);
extern int notvalid(void*);

#ifdef EXTENDED_SIM
void BeforeSimInit();
void AfterSimInit();
void BeforeSimStep();
void AfterSimStep();
void ExtendedSimStop();
void ExtendedGatherDumpData(char * pData);
void ExtendedRestoreDumpData(const char * pData);
int ExtendedGetDumpSize();
void UpdateValues();
extern void UpdateSimulatorValues();
extern int GraphicalInputsConnected;
#endif /* EXTENDED_SIM */

#define SIM_INFO    1
#define SIM_WARNING 2
#define SIM_ERROR   3
extern void SsmOutputMessage(int level, const char* str);

#endif /*DECODE_NID_LRBG_TM_CONVERSIONS_INTERFACE */
