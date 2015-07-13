#ifndef CONVERT_P27_TO_DISTANCEPR_TA_SSP_INTERFACE
#define CONVERT_P27_TO_DISTANCEPR_TA_SSP_INTERFACE


#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "Convert_P27_to_DistancePr_TA_SSP.h"

extern SimSimulator * pSimulator;

/*******************************
 * Simulation context
 *******************************/
extern inC_Convert_P27_to_DistancePr_TA_SSP inputs_ctx;
extern outC_Convert_P27_to_DistancePr_TA_SSP outputs_ctx;

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

#endif /*CONVERT_P27_TO_DISTANCEPR_TA_SSP_INTERFACE */
