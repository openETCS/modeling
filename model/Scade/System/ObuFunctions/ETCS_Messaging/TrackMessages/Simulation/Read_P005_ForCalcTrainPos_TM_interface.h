#ifndef READ_P005_FORCALCTRAINPOS_TM_INTERFACE
#define READ_P005_FORCALCTRAINPOS_TM_INTERFACE


#include "SmuTypes.h"
#include "kcg_types.h"
#include "Read_P005_ForCalcTrainPos_TM.h"

extern ScSimulator * pSimulator;

/*******************************
 * Simulation context
 *******************************/
extern inC_Read_P005_ForCalcTrainPos_TM inputs_ctx;
extern outC_Read_P005_ForCalcTrainPos_TM outputs_ctx;

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

#endif /*READ_P005_FORCALCTRAINPOS_TM_INTERFACE */
