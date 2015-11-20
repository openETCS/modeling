#ifndef ROOT_INTEGRATION_TESTBENCH_INTEGRATION_INTERFACE
#define ROOT_INTEGRATION_TESTBENCH_INTEGRATION_INTERFACE


#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "ROOT_Integration_Testbench_Integration.h"

extern SimSimulator * pSimulator;

/*******************************
 * Simulation context
 *******************************/
extern kcg_bool _ctx_GUI_reset_buffer;
extern kcg_real _ctx_GUI_targetSpeed_buffer;
extern kcg_real _ctx_GUI_traction_buffer;
extern kcg_real _ctx_GUI_brake_buffer;
extern kcg_real _ctx_GUI_initialPosition_buffer;
extern kcg_real _ctx_GUI_initialVelocity_buffer;
extern kcg_int _ctx_GUI_mode_buffer;
extern kcg_int _ctx_GUI_level_buffer;
extern kcg_int _ctx_GUI_mobileHWStatus_buffer;
extern kcg_bool _ctx_GUI_openDesk_buffer;
extern kcg_bool _ctx_DMI_MousePressed_buffer;
extern kcg_bool _ctx_DMI_startRequest_buffer;
extern kcg_bool _ctx_DMI_openTrainRN_buffer;
extern kcg_bool _ctx_DMI_traindataYesAck_buffer;
extern kcg_bool _ctx_DMI_TrainRN_Ack_buffer;
extern array_bool_12 _ctx_DMI_keypad_buffer;
extern kcg_bool _ctx_DMI_openTrainDataWindow_buffer;
extern kcg_bool _ctx_DMI_openDriverID_buffer;
extern kcg_bool _ctx_DMI_DriverID_Ack_buffer;
extern kcg_bool _ctx_DMI_traindataNoAck_buffer;
extern kcg_bool _ctx_DMI_traindataAck_buffer;
extern kcg_bool _ctx_DMI_OverD9_fromDisplay_buffer;
extern kcg_bool _ctx_DMI_closeButton_buffer;
extern kcg_bool _ctx_DMI_confirmTrainData_buffer;
extern kcg_bool _ctx_DMI_textMsgAck_buffer;
extern kcg_bool _ctx_DMI_openLevelMenu_buffer;
extern kcg_bool _ctx_DMI_InputFieldAck_buffer;
extern kcg_bool _ctx_DMI_openMainMenu_fromDisplay_buffer;
extern kcg_bool _ctx_DMI_OverD12_frpmDisplay_buffer;
extern kcg_bool _ctx_DMI_HidePlanningArea_fromDisplay_buffer;
extern kcg_bool _ctx_DMI_ShowPlanningArea_fromDisplay_buffer;
extern kcg_bool _ctx_DMI_closeButtonMain_buffer;
extern kcg_bool _ctx_DMI_C1AreaAck_buffer;
extern kcg_bool _ctx_DMI_ScrollUp_buffer;
extern kcg_bool _ctx_DMI_ScrollDown_buffer;
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

#endif /*ROOT_INTEGRATION_TESTBENCH_INTEGRATION_INTERFACE */
