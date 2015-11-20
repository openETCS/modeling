/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TIU_OutputIntegration_output_to_TIU_API_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void TIU_OutputIntegration_init_output_to_TIU_API_Pkg(
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg *outC)
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
  /* 1 */ manageTIU_output_init_output_to_TIU_API_Pkg(&outC->_1_Context_1);
  /* 1 */ handleTraction_init_output_to_TIU_API_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TIU_OutputIntegration_reset_output_to_TIU_API_Pkg(
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg *outC)
{
  /* 1 */ manageTIU_output_reset_output_to_TIU_API_Pkg(&outC->_1_Context_1);
  /* 1 */ handleTraction_reset_output_to_TIU_API_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* output_to_TIU_API_Pkg::TIU_OutputIntegration */
void TIU_OutputIntegration_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_IsolationStatus */ Isolation_Status_T_TIU_Types_Pkg *in_IsolationStatus,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::SpeedSup_brakeCommand */ Brake_command_T_TIU_Types_Pkg *SpeedSup_brakeCommand,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_brake_inhibition */ Brake_inhibition_command_T_TIU_Types_Pkg *in_brake_inhibition,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_train_commands */ Type_I_train_commands_T_TIU_Types_Pkg *in_train_commands,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_change_traction_system */ Change_traction_system_T_TIU_Types_Pkg *in_change_traction_system,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_passenger_door_control_info */ Passenger_door_control_info_T_TIU_Types_Pkg *in_passenger_door_control_info,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_change_of_allowed_current_consumption */ Change_of_allowed_current_consumption_T_TIU_Types_Pkg *in_change_of_allowed_current_consumption,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg *outC)
{
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::_L2 */
  static TIU_commandStatus_T_TIU_Types_Pkg _L2;
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::_L1 */
  static TIU_Output_msg_API_TIU_Pkg _L1;
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::_L3 */
  static Isolation_Status_T_TIU_Types_Pkg _L3;
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::_L4 */
  static Brake_command_T_TIU_Types_Pkg _L4;
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::_L6 */
  static Brake_inhibition_command_T_TIU_Types_Pkg _L6;
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::_L7 */
  static Type_I_train_commands_T_TIU_Types_Pkg _L7;
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::_L8 */
  static Change_traction_system_T_TIU_Types_Pkg _L8;
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::_L9 */
  static Passenger_door_control_info_T_TIU_Types_Pkg _L9;
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::_L10 */
  static Change_of_allowed_current_consumption_T_TIU_Types_Pkg _L10;
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::_L12 */
  static Type_I_train_commands_T_TIU_Types_Pkg _L12;
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::_L13 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L13;
  
  kcg_copy_Isolation_Status_T_TIU_Types_Pkg(&_L3, in_IsolationStatus);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L4, SpeedSup_brakeCommand);
  kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg(&_L6, in_brake_inhibition);
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(&_L7, in_train_commands);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L13, inModeAndLevel);
  /* 1 */ handleTraction_output_to_TIU_API_Pkg(&_L7, &_L13, &outC->Context_1);
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(
    &_L12,
    &outC->Context_1.outTrainCommands);
  kcg_copy_Change_traction_system_T_TIU_Types_Pkg(
    &_L8,
    in_change_traction_system);
  kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg(
    &_L9,
    in_passenger_door_control_info);
  kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(
    &_L10,
    in_change_of_allowed_current_consumption);
  /* 1 */
  manageTIU_output_output_to_TIU_API_Pkg(
    &_L3,
    &_L4,
    &_L6,
    &_L12,
    &_L8,
    &_L9,
    &_L10,
    &outC->_1_Context_1);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(&_L1, &outC->_1_Context_1.outTIU_to_API);
  kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg(
    &_L2,
    &outC->_1_Context_1.outCommandStatusforEVC);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(&outC->outTIU_to_API, &_L1);
  kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg(
    &outC->outCommandStatusforEVC,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TIU_OutputIntegration_output_to_TIU_API_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

