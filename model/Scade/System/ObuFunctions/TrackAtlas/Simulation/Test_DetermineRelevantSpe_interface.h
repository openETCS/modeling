#ifndef TEST_DETERMINERELEVANTSPE_INTERFACE
#define TEST_DETERMINERELEVANTSPE_INTERFACE


#include "SmuTypes.h"
#include "kcg_types.h"
#include "Test_DetermineRelevantSpe.h"

extern ScSimulator * pSimulator;

/*******************************
 * Simulation context
 *******************************/
extern inC_Test_DetermineRelevantSpe inputs_ctx;
extern outC_Test_DetermineRelevantSpe outputs_ctx;

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

#endif /*TEST_DETERMINERELEVANTSPE_INTERFACE */
