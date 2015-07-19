#ifndef SENDRADIOMESSAGE_TRAINTOTRACK_TM_RADIO_MESSAGES_INTERFACE
#define SENDRADIOMESSAGE_TRAINTOTRACK_TM_RADIO_MESSAGES_INTERFACE


#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "SendRadioMessage_TrainToTrack_TM_radio_messages.h"

extern SimSimulator * pSimulator;

/*******************************
 * Simulation context
 *******************************/
extern inC_SendRadioMessage_TrainToTrack_TM_radio_messages inputs_ctx;
extern outC_SendRadioMessage_TrainToTrack_TM_radio_messages outputs_ctx;

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

#endif /*SENDRADIOMESSAGE_TRAINTOTRACK_TM_RADIO_MESSAGES_INTERFACE */
