/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendBrakesToDMI_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::sendBrakesToDMI */
void sendBrakesToDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::brakeCommand */ Brake_command_T_TIU_Types_Pkg *brakeCommand,
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::dmi_iconRequest */ DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_iconRequest)
{
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::applyBrake */ kcg_bool applyBrake;
  
  applyBrake = (apply_brake_TIU_Types_Pkg ==
      (*brakeCommand).m_emergencybrake_cm) & (*brakeCommand).valid;
  if (applyBrake) {
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
      dmi_iconRequest,
      (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cIconRequestEB_manage_DMI_Output_Pkg);
    (*dmi_iconRequest).system_clock = inSystemTime;
  }
  else {
    else_clock_IfBlock1 = (*brakeCommand).valid &
      ((*brakeCommand).m_emergencybrake_cm == release_brake_TIU_Types_Pkg);
    if (else_clock_IfBlock1) {
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        dmi_iconRequest,
        (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cIconClearEB_manage_DMI_Output_Pkg);
      (*dmi_iconRequest).system_clock = inSystemTime;
    }
    else {
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        dmi_iconRequest,
        (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cEmptyIconRequest_manage_DMI_Output_Pkg);
    }
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** sendBrakesToDMI_manage_DMI_Output_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

