/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTIU_output_output_to_TIU_API_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void manageTIU_output_init_output_to_TIU_API_Pkg(
  outC_manageTIU_output_output_to_TIU_API_Pkg *outC)
{
  outC->outCommandStatusforEVC.valid = kcg_true;
  outC->outCommandStatusforEVC.emergencyBrakeActive = kcg_true;
  outC->outCommandStatusforEVC.isolationStatus = kcg_true;
  outC->outTIU_to_API.valid = kcg_true;
  outC->outTIU_to_API.info.isolation_status.valid = kcg_true;
  outC->outTIU_to_API.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->outTIU_to_API.info.brake_command.valid = kcg_true;
  outC->outTIU_to_API.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->outTIU_to_API.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->outTIU_to_API.info.brake_inhibition.valid = kcg_true;
  outC->outTIU_to_API.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->outTIU_to_API.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->outTIU_to_API.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->outTIU_to_API.info.type_I_train_commands.valid = kcg_true;
  outC->outTIU_to_API.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->outTIU_to_API.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->outTIU_to_API.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->outTIU_to_API.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->outTIU_to_API.info.change_traction_system.valid = kcg_true;
  outC->outTIU_to_API.info.change_traction_system.d_test_traction.now = 0;
  outC->outTIU_to_API.info.change_traction_system.d_test_traction.distance = 0;
  outC->outTIU_to_API.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->outTIU_to_API.info.change_traction_system.m_voltage.NID_ctraction = 0;
  outC->outTIU_to_API.info.passenger_door_control_info.valid = kcg_true;
  outC->outTIU_to_API.info.passenger_door_control_info.door_control_info = 0;
  outC->outTIU_to_API.info.change_of_allowed_current_consumption.valid =
    kcg_true;
  outC->outTIU_to_API.info.change_of_allowed_current_consumption.d_test_current.now =
    0;
  outC->outTIU_to_API.info.change_of_allowed_current_consumption.d_test_current.distance =
    0;
  outC->outTIU_to_API.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->outTIU_to_API.info.change_of_allowed_current_consumption.m_current.restriction =
    0;
  /* 1 */ handleBrakeCommand_init_output_to_TIU_API_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageTIU_output_reset_output_to_TIU_API_Pkg(
  outC_manageTIU_output_output_to_TIU_API_Pkg *outC)
{
  /* 1 */ handleBrakeCommand_reset_output_to_TIU_API_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* output_to_TIU_API_Pkg::manageTIU_output */
void manageTIU_output_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::manageTIU_output::in_IsolationStatus */ Isolation_Status_T_TIU_Types_Pkg *in_IsolationStatus,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_brake_command */ Brake_command_T_TIU_Types_Pkg *in_brake_command,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_brake_inhibition */ Brake_inhibition_command_T_TIU_Types_Pkg *in_brake_inhibition,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_train_commands */ Type_I_train_commands_T_TIU_Types_Pkg *in_train_commands,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_change_traction_system */ Change_traction_system_T_TIU_Types_Pkg *in_change_traction_system,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_passenger_door_control_info */ Passenger_door_control_info_T_TIU_Types_Pkg *in_passenger_door_control_info,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_change_of_allowed_current_consumption */ Change_of_allowed_current_consumption_T_TIU_Types_Pkg *in_change_of_allowed_current_consumption,
  outC_manageTIU_output_output_to_TIU_API_Pkg *outC)
{
  /* output_to_TIU_API_Pkg::manageTIU_output::_L1 */
  static Isolation_Status_T_TIU_Types_Pkg _L1;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L2 */
  static Brake_command_T_TIU_Types_Pkg _L2;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L3 */
  static Brake_inhibition_command_T_TIU_Types_Pkg _L3;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L4 */
  static Type_I_train_commands_T_TIU_Types_Pkg _L4;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L5 */
  static Change_traction_system_T_TIU_Types_Pkg _L5;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L6 */
  static Passenger_door_control_info_T_TIU_Types_Pkg _L6;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L7 */
  static Change_of_allowed_current_consumption_T_TIU_Types_Pkg _L7;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L8 */
  static TIU_Output_msg_API_TIU_Pkg _L8;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L9 */
  static kcg_bool _L9;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L10 */
  static Message_EVC_to_Train_Interface_T_TIU_Types_Pkg _L10;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L11 */
  static kcg_bool _L11;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L12 */
  static kcg_bool _L12;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L15 */
  static kcg_bool _L15;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L17 */
  static kcg_bool _L17;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L18 */
  static kcg_bool _L18;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L20 */
  static kcg_bool _L20;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L21 */
  static kcg_bool _L21;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L22 */
  static Isolation_Status_T_TIU_Types_Pkg _L22;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L23 */
  static Brake_command_T_TIU_Types_Pkg _L23;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L24 */
  static TIU_commandStatus_T_TIU_Types_Pkg _L24;
  /* output_to_TIU_API_Pkg::manageTIU_output::_L25 */
  static Brake_command_T_TIU_Types_Pkg _L25;
  
  kcg_copy_Isolation_Status_T_TIU_Types_Pkg(&_L1, in_IsolationStatus);
  _L9 = _L1.valid;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L2, in_brake_command);
  /* 1 */ handleBrakeCommand_output_to_TIU_API_Pkg(&_L2, &outC->Context_1);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &_L25,
    &outC->Context_1.out_brake_command);
  _L11 = _L25.valid;
  kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg(&_L3, in_brake_inhibition);
  _L12 = _L3.valid;
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(&_L4, in_train_commands);
  _L15 = _L4.valid;
  kcg_copy_Change_traction_system_T_TIU_Types_Pkg(
    &_L5,
    in_change_traction_system);
  _L17 = _L5.valid;
  kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg(
    &_L6,
    in_passenger_door_control_info);
  _L20 = _L6.valid;
  kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(
    &_L7,
    in_change_of_allowed_current_consumption);
  _L21 = _L7.valid;
  _L18 = _L9 | _L11 | _L12 | _L15 | _L17 | _L20 | _L21;
  kcg_copy_Isolation_Status_T_TIU_Types_Pkg(&_L10.isolation_status, &_L1);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L10.brake_command, &_L25);
  kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg(
    &_L10.brake_inhibition,
    &_L3);
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(
    &_L10.type_I_train_commands,
    &_L4);
  kcg_copy_Change_traction_system_T_TIU_Types_Pkg(
    &_L10.change_traction_system,
    &_L5);
  kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg(
    &_L10.passenger_door_control_info,
    &_L6);
  kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(
    &_L10.change_of_allowed_current_consumption,
    &_L7);
  _L8.valid = _L18;
  kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(&_L8.info, &_L10);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(&outC->outTIU_to_API, &_L8);
  kcg_copy_Isolation_Status_T_TIU_Types_Pkg(&_L22, in_IsolationStatus);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L23, in_brake_command);
  /* 1 */ getTIUStatusFromCommand_output_to_TIU_API_Pkg(&_L22, &_L23, &_L24);
  kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg(
    &outC->outCommandStatusforEVC,
    &_L24);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageTIU_output_output_to_TIU_API_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

