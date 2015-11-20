/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "handleBrakeCommand_output_to_TIU_API_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void handleBrakeCommand_init_output_to_TIU_API_Pkg(
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_in_brake_command.valid = kcg_true;
  outC->rem_in_brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->rem_in_brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->out_brake_command.valid = kcg_true;
  outC->out_brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->out_brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void handleBrakeCommand_reset_output_to_TIU_API_Pkg(
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* output_to_TIU_API_Pkg::handleBrakeCommand */
void handleBrakeCommand_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::handleBrakeCommand::in_brake_command */ Brake_command_T_TIU_Types_Pkg *in_brake_command,
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC)
{
  /* output_to_TIU_API_Pkg::handleBrakeCommand::in_brake_command */
  static Brake_command_T_TIU_Types_Pkg last_in_brake_command;
  /* output_to_TIU_API_Pkg::handleBrakeCommand::_L1 */
  static Brake_command_T_TIU_Types_Pkg _L1;
  /* output_to_TIU_API_Pkg::handleBrakeCommand::_L2 */
  static Brake_command_T_TIU_Types_Pkg _L2;
  /* output_to_TIU_API_Pkg::handleBrakeCommand::_L3 */
  static kcg_bool _L3;
  /* output_to_TIU_API_Pkg::handleBrakeCommand::_L4 */
  static kcg_bool _L4;
  /* output_to_TIU_API_Pkg::handleBrakeCommand::_L6 */
  static kcg_bool _L6;
  /* output_to_TIU_API_Pkg::handleBrakeCommand::_L7 */
  static Brake_command_T_TIU_Types_Pkg _L7;
  /* output_to_TIU_API_Pkg::handleBrakeCommand::_L8 */
  static Brake_command_T_TIU_Types_Pkg _L8;
  /* output_to_TIU_API_Pkg::handleBrakeCommand::_L9 */
  static Brake_command_T_TIU_Types_Pkg _L9;
  
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L1, in_brake_command);
  /* last_init_ck_in_brake_command */ if (outC->init) {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &last_in_brake_command,
      (Brake_command_T_TIU_Types_Pkg *) &cEmptyBrakeCmd);
  }
  else {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &last_in_brake_command,
      &outC->rem_in_brake_command);
  }
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L2, &last_in_brake_command);
  _L3 = !kcg_comp_Brake_command_T_TIU_Types_Pkg(&_L1, &_L2);
  _L6 = _L1.valid;
  _L4 = _L6 & _L3;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L8, in_brake_command);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &_L9,
    (Brake_command_T_TIU_Types_Pkg *) &cEmptyBrakeCmd);
  /* 1 */ if (_L4) {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L7, &_L8);
  }
  else {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L7, &_L9);
  }
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->out_brake_command, &_L7);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->rem_in_brake_command,
    in_brake_command);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** handleBrakeCommand_output_to_TIU_API_Pkg.c
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

