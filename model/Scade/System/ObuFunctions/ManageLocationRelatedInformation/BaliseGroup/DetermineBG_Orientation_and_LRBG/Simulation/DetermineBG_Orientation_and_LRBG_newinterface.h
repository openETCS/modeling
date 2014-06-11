#ifndef DETERMINEBGORIENTATION_LRBG_DETERMINEBGORIENTATION_LRBG_INTERFACE
#define DETERMINEBGORIENTATION_LRBG_DETERMINEBGORIENTATION_LRBG_INTERFACE


#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG.h"

extern SimSimulator * pSimulator;

/*******************************
 * Simulation context
 *******************************/
extern inC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG inputs_ctx;
extern outC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG outputs_ctx;

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

#endif /*DETERMINEBGORIENTATION_LRBG_DETERMINEBGORIENTATION_LRBG_INTERFACE */
