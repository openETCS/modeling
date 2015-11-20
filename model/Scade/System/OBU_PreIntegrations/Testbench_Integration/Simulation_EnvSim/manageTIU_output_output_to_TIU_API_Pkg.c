/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTIU_output_output_to_TIU_API_Pkg.h"

void manageTIU_output_reset_output_to_TIU_API_Pkg(
  outC_manageTIU_output_output_to_TIU_API_Pkg *outC)
{
  /* 1 */ handleBrakeCommand_reset_output_to_TIU_API_Pkg(&outC->Context_1);
}

/* output_to_TIU_API_Pkg::manageTIU_output */
void manageTIU_output_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::manageTIU_output::in_IsolationStatus */Isolation_Status_T_TIU_Types_Pkg *in_IsolationStatus,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_brake_command */Brake_command_T_TIU_Types_Pkg *in_brake_command,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_brake_inhibition */Brake_inhibition_command_T_TIU_Types_Pkg *in_brake_inhibition,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_train_commands */Type_I_train_commands_T_TIU_Types_Pkg *in_train_commands,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_change_traction_system */Change_traction_system_T_TIU_Types_Pkg *in_change_traction_system,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_passenger_door_control_info */Passenger_door_control_info_T_TIU_Types_Pkg *in_passenger_door_control_info,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_change_of_allowed_current_consumption */Change_of_allowed_current_consumption_T_TIU_Types_Pkg *in_change_of_allowed_current_consumption,
  outC_manageTIU_output_output_to_TIU_API_Pkg *outC)
{
  /* 1 */
  handleBrakeCommand_output_to_TIU_API_Pkg(in_brake_command, &outC->Context_1);
  outC->outTIU_to_API.valid = (*in_IsolationStatus).valid |
    outC->Context_1.out_brake_command.valid | (*in_brake_inhibition).valid |
    (*in_train_commands).valid | (*in_change_traction_system).valid |
    (*in_passenger_door_control_info).valid |
    (*in_change_of_allowed_current_consumption).valid;
  kcg_copy_Isolation_Status_T_TIU_Types_Pkg(
    &outC->outTIU_to_API.info.isolation_status,
    in_IsolationStatus);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->outTIU_to_API.info.brake_command,
    &outC->Context_1.out_brake_command);
  kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg(
    &outC->outTIU_to_API.info.brake_inhibition,
    in_brake_inhibition);
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(
    &outC->outTIU_to_API.info.type_I_train_commands,
    in_train_commands);
  kcg_copy_Change_traction_system_T_TIU_Types_Pkg(
    &outC->outTIU_to_API.info.change_traction_system,
    in_change_traction_system);
  kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg(
    &outC->outTIU_to_API.info.passenger_door_control_info,
    in_passenger_door_control_info);
  kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(
    &outC->outTIU_to_API.info.change_of_allowed_current_consumption,
    in_change_of_allowed_current_consumption);
  /* 1 */
  getTIUStatusFromCommand_output_to_TIU_API_Pkg(
    in_IsolationStatus,
    in_brake_command,
    &outC->outCommandStatusforEVC);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** manageTIU_output_output_to_TIU_API_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

