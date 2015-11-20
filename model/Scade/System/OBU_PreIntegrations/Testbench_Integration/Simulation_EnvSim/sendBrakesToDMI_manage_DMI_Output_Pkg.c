/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendBrakesToDMI_manage_DMI_Output_Pkg.h"

void sendBrakesToDMI_reset_manage_DMI_Output_Pkg(
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
}

/* manage_DMI_Output_Pkg::sendBrakesToDMI */
void sendBrakesToDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::brakeCommand */Brake_command_T_TIU_Types_Pkg *brakeCommand,
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC)
{
  static M_brake_signal_command_T_TIU_Types_Pkg tmp;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::applyBrake */
  static kcg_bool applyBrake;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::changeBrakeCommand */
  static kcg_bool changeBrakeCommand;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = cInitBrakeCommand_manage_DMI_Output_Pkg.m_emergencybrake_cm;
  }
  else {
    tmp = outC->rem_brakeCommand.m_emergencybrake_cm;
  }
  changeBrakeCommand = (*brakeCommand).m_emergencybrake_cm != tmp;
  applyBrake = changeBrakeCommand & (apply_brake_TIU_Types_Pkg ==
      (*brakeCommand).m_emergencybrake_cm) & (*brakeCommand).valid;
  if (applyBrake) {
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->dmi_iconRequest,
      (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cIconRequestEB_manage_DMI_Output_Pkg);
    outC->dmi_iconRequest.system_clock = inSystemTime;
  }
  else {
    else_clock_IfBlock1 = (*brakeCommand).valid &
      ((*brakeCommand).m_emergencybrake_cm == release_brake_TIU_Types_Pkg) &
      changeBrakeCommand;
    if (else_clock_IfBlock1) {
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->dmi_iconRequest,
        (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cIconClearEB_manage_DMI_Output_Pkg);
      outC->dmi_iconRequest.system_clock = inSystemTime;
    }
    else {
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->dmi_iconRequest,
        (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cEmptyIconRequest_manage_DMI_Output_Pkg);
    }
  }
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->rem_brakeCommand, brakeCommand);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** sendBrakesToDMI_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

