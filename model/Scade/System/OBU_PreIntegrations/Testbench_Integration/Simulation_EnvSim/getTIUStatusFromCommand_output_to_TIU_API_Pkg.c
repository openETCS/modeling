/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getTIUStatusFromCommand_output_to_TIU_API_Pkg.h"

/* output_to_TIU_API_Pkg::getTIUStatusFromCommand */
void getTIUStatusFromCommand_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::in_IsolationStatus */Isolation_Status_T_TIU_Types_Pkg *in_IsolationStatus,
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::in_brake_command */Brake_command_T_TIU_Types_Pkg *in_brake_command,
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::outStatus */TIU_commandStatus_T_TIU_Types_Pkg *outStatus)
{
  (*outStatus).valid = (*in_brake_command).valid | (*in_IsolationStatus).valid;
  (*outStatus).emergencyBrakeActive = (*in_brake_command).valid &
    ((*in_brake_command).m_emergencybrake_cm == apply_brake_TIU_Types_Pkg);
  (*outStatus).isolationStatus = (*in_IsolationStatus).valid &
    ((*in_IsolationStatus).isolation_status ==
      on_board_equipment_is_isolated_TIU_Types_Pkg);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getTIUStatusFromCommand_output_to_TIU_API_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

