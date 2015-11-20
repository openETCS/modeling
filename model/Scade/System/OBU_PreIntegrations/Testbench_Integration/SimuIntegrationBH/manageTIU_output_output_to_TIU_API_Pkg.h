/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _manageTIU_output_output_to_TIU_API_Pkg_H_
#define _manageTIU_output_output_to_TIU_API_Pkg_H_

#include "kcg_types.h"
#include "getTIUStatusFromCommand_output_to_TIU_API_Pkg.h"
#include "handleBrakeCommand_output_to_TIU_API_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TIU_Output_msg_API_TIU_Pkg /* output_to_TIU_API_Pkg::manageTIU_output::outTIU_to_API */ outTIU_to_API;
  TIU_commandStatus_T_TIU_Types_Pkg /* output_to_TIU_API_Pkg::manageTIU_output::outCommandStatusforEVC */ outCommandStatusforEVC;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_handleBrakeCommand_output_to_TIU_API_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_manageTIU_output_output_to_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* output_to_TIU_API_Pkg::manageTIU_output */
extern void manageTIU_output_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::manageTIU_output::in_IsolationStatus */ Isolation_Status_T_TIU_Types_Pkg *in_IsolationStatus,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_brake_command */ Brake_command_T_TIU_Types_Pkg *in_brake_command,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_brake_inhibition */ Brake_inhibition_command_T_TIU_Types_Pkg *in_brake_inhibition,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_train_commands */ Type_I_train_commands_T_TIU_Types_Pkg *in_train_commands,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_change_traction_system */ Change_traction_system_T_TIU_Types_Pkg *in_change_traction_system,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_passenger_door_control_info */ Passenger_door_control_info_T_TIU_Types_Pkg *in_passenger_door_control_info,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_change_of_allowed_current_consumption */ Change_of_allowed_current_consumption_T_TIU_Types_Pkg *in_change_of_allowed_current_consumption,
  outC_manageTIU_output_output_to_TIU_API_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void manageTIU_output_reset_output_to_TIU_API_Pkg(
  outC_manageTIU_output_output_to_TIU_API_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void manageTIU_output_init_output_to_TIU_API_Pkg(
  outC_manageTIU_output_output_to_TIU_API_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _manageTIU_output_output_to_TIU_API_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** manageTIU_output_output_to_TIU_API_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

