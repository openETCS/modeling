#ifndef C_P005_UNFLATTEN_SECTIONS_TM_LIB_INTERNAL_INTERFACE
#define C_P005_UNFLATTEN_SECTIONS_TM_LIB_INTERNAL_INTERFACE


#include "SmuTypes.h"
#include "kcg_types.h"
#include "C_P005_unflatten_sections_TM_lib_internal.h"

extern ScSimulator * pSimulator;

/*******************************
 * Simulation context
 *******************************/
extern inC_C_P005_unflatten_sections_TM_lib_internal inputs_ctx;
extern outC_C_P005_unflatten_sections_TM_lib_internal outputs_ctx;

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

#endif /*C_P005_UNFLATTEN_SECTIONS_TM_LIB_INTERNAL_INTERFACE */
