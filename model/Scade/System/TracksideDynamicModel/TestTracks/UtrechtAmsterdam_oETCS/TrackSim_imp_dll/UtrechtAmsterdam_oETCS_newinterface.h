#ifndef UAB_AMSTERDAM_UTRECHT_LIJN1_BALISES_INTERFACE
#define UAB_AMSTERDAM_UTRECHT_LIJN1_BALISES_INTERFACE


#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "UAB_Amsterdam_Utrecht_Lijn1_balises.h"

extern SimSimulator * pSimulator;

extern kcg_real _ctx_UAB_TrainPosSim_in_buffer;
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

#endif /*UAB_AMSTERDAM_UTRECHT_LIJN1_BALISES_INTERFACE */
