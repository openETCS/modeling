/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "handleBrakeCommand_output_to_TIU_API_Pkg.h"

void handleBrakeCommand_reset_output_to_TIU_API_Pkg(
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC)
{
  outC->init = kcg_true;
}

/* output_to_TIU_API_Pkg::handleBrakeCommand */
void handleBrakeCommand_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::handleBrakeCommand::in_brake_command */Brake_command_T_TIU_Types_Pkg *in_brake_command,
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC)
{
  static Brake_command_T_TIU_Types_Pkg tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &tmp,
      (Brake_command_T_TIU_Types_Pkg *) &cEmptyBrakeCmd);
  }
  else {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(&tmp, &outC->rem_in_brake_command);
  }
  if ((*in_brake_command).valid & !kcg_comp_Brake_command_T_TIU_Types_Pkg(
      in_brake_command,
      &tmp)) {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &outC->out_brake_command,
      in_brake_command);
  }
  else {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &outC->out_brake_command,
      (Brake_command_T_TIU_Types_Pkg *) &cEmptyBrakeCmd);
  }
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->rem_in_brake_command,
    in_brake_command);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** handleBrakeCommand_output_to_TIU_API_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

