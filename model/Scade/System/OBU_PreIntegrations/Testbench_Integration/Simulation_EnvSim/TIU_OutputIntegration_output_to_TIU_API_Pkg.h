/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _TIU_OutputIntegration_output_to_TIU_API_Pkg_H_
#define _TIU_OutputIntegration_output_to_TIU_API_Pkg_H_

#include "kcg_types.h"
#include "manageTIU_output_output_to_TIU_API_Pkg.h"
#include "handleTraction_output_to_TIU_API_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TIU_Output_msg_API_TIU_Pkg /* output_to_TIU_API_Pkg::TIU_OutputIntegration::outTIU_to_API */ outTIU_to_API;
  TIU_commandStatus_T_TIU_Types_Pkg /* output_to_TIU_API_Pkg::TIU_OutputIntegration::outCommandStatusforEVC */ outCommandStatusforEVC;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_handleTraction_output_to_TIU_API_Pkg /* 1 */ _1_Context_1;
  outC_manageTIU_output_output_to_TIU_API_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_TIU_OutputIntegration_output_to_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* output_to_TIU_API_Pkg::TIU_OutputIntegration */
extern void TIU_OutputIntegration_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_IsolationStatus */Isolation_Status_T_TIU_Types_Pkg *in_IsolationStatus,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::SpeedSup_brakeCommand */Brake_command_T_TIU_Types_Pkg *SpeedSup_brakeCommand,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_brake_inhibition */Brake_inhibition_command_T_TIU_Types_Pkg *in_brake_inhibition,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_train_commands */Type_I_train_commands_T_TIU_Types_Pkg *in_train_commands,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_change_traction_system */Change_traction_system_T_TIU_Types_Pkg *in_change_traction_system,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_passenger_door_control_info */Passenger_door_control_info_T_TIU_Types_Pkg *in_passenger_door_control_info,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_change_of_allowed_current_consumption */Change_of_allowed_current_consumption_T_TIU_Types_Pkg *in_change_of_allowed_current_consumption,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::inModeAndLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg *outC);

extern void TIU_OutputIntegration_reset_output_to_TIU_API_Pkg(
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg *outC);

#endif /* _TIU_OutputIntegration_output_to_TIU_API_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TIU_OutputIntegration_output_to_TIU_API_Pkg.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

