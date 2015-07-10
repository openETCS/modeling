#ifndef AMSTERDAM_UTRECHT_LIJN1_B_AMSTERDAMUTRECHTL2_AMSTERDAMUTRECHTTRACK1_INTERFACE
#define AMSTERDAM_UTRECHT_LIJN1_B_AMSTERDAMUTRECHTL2_AMSTERDAMUTRECHTTRACK1_INTERFACE


#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"

extern SimSimulator * pSimulator;

/*******************************
 * Simulation context
 *******************************/
extern kcg_real _ctx_TrainPosSim_in_buffer;
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

#endif /*AMSTERDAM_UTRECHT_LIJN1_B_AMSTERDAMUTRECHTL2_AMSTERDAMUTRECHTTRACK1_INTERFACE */
