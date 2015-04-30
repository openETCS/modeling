/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "bothBrakesActive_output_to_TIU_API_Pkg.h"

/* output_to_TIU_API_Pkg::bothBrakesActive */
M_brake_signal_command_T_TIU_Types_Pkg bothBrakesActive_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::bothBrakesActive::speedSupbrakeCommand */ M_brake_signal_command_T_TIU_Types_Pkg speedSupbrakeCommand,
  /* output_to_TIU_API_Pkg::bothBrakesActive::levelBrakeCommand */ M_brake_signal_command_T_TIU_Types_Pkg levelBrakeCommand)
{
  /* output_to_TIU_API_Pkg::bothBrakesActive::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* output_to_TIU_API_Pkg::bothBrakesActive::supActive */ kcg_bool supActive;
  /* output_to_TIU_API_Pkg::bothBrakesActive::levelActive */ kcg_bool levelActive;
  /* output_to_TIU_API_Pkg::bothBrakesActive::brakeCommand */ M_brake_signal_command_T_TIU_Types_Pkg brakeCommand;
  
  supActive = speedSupbrakeCommand !=
    brake_signal_command_not_defined_TIU_Types_Pkg;
  levelActive = levelBrakeCommand !=
    brake_signal_command_not_defined_TIU_Types_Pkg;
  IfBlock1_clock = supActive & levelActive;
  if (IfBlock1_clock) {
    if (speedSupbrakeCommand == levelBrakeCommand) {
      brakeCommand = levelBrakeCommand;
    }
    else {
      brakeCommand = apply_brake_TIU_Types_Pkg;
    }
  }
  else if (supActive) {
    brakeCommand = speedSupbrakeCommand;
  }
  else if (levelActive) {
    brakeCommand = levelBrakeCommand;
  }
  else {
    brakeCommand = brake_signal_command_not_defined_TIU_Types_Pkg;
  }
  return brakeCommand;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** bothBrakesActive_output_to_TIU_API_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

