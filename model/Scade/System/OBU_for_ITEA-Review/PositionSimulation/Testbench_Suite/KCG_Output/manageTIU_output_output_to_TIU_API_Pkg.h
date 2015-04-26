/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _manageTIU_output_output_to_TIU_API_Pkg_H_
#define _manageTIU_output_output_to_TIU_API_Pkg_H_

#include "kcg_types.h"
#include "getTIUStatusFromCommand_output_to_TIU_API_Pkg.h"

/* =====================  no input structure  ====================== */


/* output_to_TIU_API_Pkg::manageTIU_output */
extern void manageTIU_output_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::manageTIU_output::in_IsolationStatus */ Isolation_Status_T_TIU_Types_Pkg *in_IsolationStatus,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_brake_command */ Brake_command_T_TIU_Types_Pkg *in_brake_command,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_brake_inhibition */ Brake_inhibition_command_T_TIU_Types_Pkg *in_brake_inhibition,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_train_commands */ Type_I_train_commands_T_TIU_Types_Pkg *in_train_commands,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_change_traction_system */ Change_traction_system_T_TIU_Types_Pkg *in_change_traction_system,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_passenger_door_control_info */ Passenger_door_control_info_T_TIU_Types_Pkg *in_passenger_door_control_info,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_change_of_allowed_current_consumption */ Change_of_allowed_current_consumption_T_TIU_Types_Pkg *in_change_of_allowed_current_consumption,
  /* output_to_TIU_API_Pkg::manageTIU_output::outTIU_to_API */ TIU_Output_msg_API_TIU_Pkg *outTIU_to_API,
  /* output_to_TIU_API_Pkg::manageTIU_output::outCommandStatusforEVC */ TIU_commandStatus_T_TIU_Types_Pkg *outCommandStatusforEVC);

#endif /* _manageTIU_output_output_to_TIU_API_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** manageTIU_output_output_to_TIU_API_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

