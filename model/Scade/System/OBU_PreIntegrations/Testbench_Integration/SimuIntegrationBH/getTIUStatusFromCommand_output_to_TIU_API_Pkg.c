/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getTIUStatusFromCommand_output_to_TIU_API_Pkg.h"

/* output_to_TIU_API_Pkg::getTIUStatusFromCommand */
void getTIUStatusFromCommand_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::in_IsolationStatus */ Isolation_Status_T_TIU_Types_Pkg *in_IsolationStatus,
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::in_brake_command */ Brake_command_T_TIU_Types_Pkg *in_brake_command,
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::outStatus */ TIU_commandStatus_T_TIU_Types_Pkg *outStatus)
{
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::_L3 */
  static kcg_bool _L3;
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::_L4 */
  static TIU_commandStatus_T_TIU_Types_Pkg _L4;
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::_L8 */
  static M_Isolation_status_T_TIU_Types_Pkg _L8;
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::_L10 */
  static M_Isolation_status_T_TIU_Types_Pkg _L10;
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::_L11 */
  static Isolation_Status_T_TIU_Types_Pkg _L11;
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::_L12 */
  static Brake_command_T_TIU_Types_Pkg _L12;
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::_L14 */
  static kcg_bool _L14;
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::_L15 */
  static kcg_bool _L15;
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::_L16 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L16;
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::_L17 */
  static kcg_bool _L17;
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::_L18 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L18;
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::_L19 */
  static kcg_bool _L19;
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::_L20 */
  static kcg_bool _L20;
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::_L21 */
  static kcg_bool _L21;
  
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L12, in_brake_command);
  _L15 = _L12.valid;
  kcg_copy_Isolation_Status_T_TIU_Types_Pkg(&_L11, in_IsolationStatus);
  _L3 = _L11.valid;
  _L21 = _L15 | _L3;
  _L16 = _L12.m_emergencybrake_cm;
  _L18 = apply_brake_TIU_Types_Pkg;
  _L17 = _L16 == _L18;
  _L19 = _L15 & _L17;
  _L8 = _L11.isolation_status;
  _L10 = on_board_equipment_is_isolated_TIU_Types_Pkg;
  _L14 = _L8 == _L10;
  _L20 = _L3 & _L14;
  _L4.valid = _L21;
  _L4.emergencyBrakeActive = _L19;
  _L4.isolationStatus = _L20;
  kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg(outStatus, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getTIUStatusFromCommand_output_to_TIU_API_Pkg.c
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

