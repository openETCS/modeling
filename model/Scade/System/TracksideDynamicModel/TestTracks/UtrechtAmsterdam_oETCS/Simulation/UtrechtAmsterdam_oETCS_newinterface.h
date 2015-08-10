#ifndef SENDRADIOPACKETS_LRBG_354_AMSTERDAMUTRECHTL2_SHEET06_BIJLMER_RBC_INTERFACE
#define SENDRADIOPACKETS_LRBG_354_AMSTERDAMUTRECHTL2_SHEET06_BIJLMER_RBC_INTERFACE


#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"

extern SimSimulator * pSimulator;

/*******************************
 * Simulation context
 *******************************/
extern CompressedPackets_T_Common_Types_Pkg _ctx_Radio_packets_in_buffer;
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

#endif /*SENDRADIOPACKETS_LRBG_354_AMSTERDAMUTRECHTL2_SHEET06_BIJLMER_RBC_INTERFACE */
