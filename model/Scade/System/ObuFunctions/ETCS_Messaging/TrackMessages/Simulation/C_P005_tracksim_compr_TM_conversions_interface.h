#ifndef C_P005_TRACKSIM_COMPR_TM_CONVERSIONS_INTERFACE
#define C_P005_TRACKSIM_COMPR_TM_CONVERSIONS_INTERFACE


#include "SmuTypes.h"
#include "kcg_types.h"
#include "C_P005_tracksim_compr_TM_conversions.h"

extern ScSimulator * pSimulator;

/*******************************
 * Simulation context
 *******************************/
extern inC_C_P005_tracksim_compr_TM_conversions inputs_ctx;
extern outC_C_P005_tracksim_compr_TM_conversions outputs_ctx;

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

#endif /*C_P005_TRACKSIM_COMPR_TM_CONVERSIONS_INTERFACE */
