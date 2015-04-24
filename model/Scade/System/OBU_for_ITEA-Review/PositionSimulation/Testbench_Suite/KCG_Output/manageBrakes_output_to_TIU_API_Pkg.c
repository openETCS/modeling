/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageBrakes_output_to_TIU_API_Pkg.h"

/* output_to_TIU_API_Pkg::manageBrakes */
void manageBrakes_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::manageBrakes::SpeedSup_brakeCommand */ Brake_command_T_TIU_Types_Pkg *SpeedSup_brakeCommand,
  /* output_to_TIU_API_Pkg::manageBrakes::ModelAndLevel_brakeCommand */ Brake_command_T_TIU_Types_Pkg *ModelAndLevel_brakeCommand,
  /* output_to_TIU_API_Pkg::manageBrakes::outToBIU_brake_command */ Brake_command_T_TIU_Types_Pkg *outToBIU_brake_command)
{
  /* output_to_TIU_API_Pkg::manageBrakes::IfBlock1 */ kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (*SpeedSup_brakeCommand).valid &
    (*ModelAndLevel_brakeCommand).valid;
  if (IfBlock1_clock) {
    (*outToBIU_brake_command).valid = kcg_true;
    (*outToBIU_brake_command).m_servicebrake_cm = /* 1 */
      bothBrakesActive_output_to_TIU_API_Pkg(
        (*SpeedSup_brakeCommand).m_emergencybrake_cm,
        (*ModelAndLevel_brakeCommand).m_emergencybrake_cm);
    (*outToBIU_brake_command).m_emergencybrake_cm = /* 2 */
      bothBrakesActive_output_to_TIU_API_Pkg(
        (*SpeedSup_brakeCommand).m_servicebrake_cm,
        (*ModelAndLevel_brakeCommand).m_servicebrake_cm);
  }
  else if ((*SpeedSup_brakeCommand).valid) {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      outToBIU_brake_command,
      SpeedSup_brakeCommand);
  }
  else if ((*ModelAndLevel_brakeCommand).valid) {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      outToBIU_brake_command,
      ModelAndLevel_brakeCommand);
  }
  else {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      outToBIU_brake_command,
      (Brake_command_T_TIU_Types_Pkg *) &cEmptyBrakeCmd);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** manageBrakes_output_to_TIU_API_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

