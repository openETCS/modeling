/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _sendBrakesToDMI_manage_DMI_Output_Pkg_H_
#define _sendBrakesToDMI_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg /* manage_DMI_Output_Pkg::sendBrakesToDMI::dmi_iconRequest */ dmi_iconRequest;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  Brake_command_T_TIU_Types_Pkg /* manage_DMI_Output_Pkg::sendBrakesToDMI::brakeCommand */ rem_brakeCommand;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_sendBrakesToDMI_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::sendBrakesToDMI */
extern void sendBrakesToDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::brakeCommand */Brake_command_T_TIU_Types_Pkg *brakeCommand,
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC);

extern void sendBrakesToDMI_reset_manage_DMI_Output_Pkg(
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC);

#endif /* _sendBrakesToDMI_manage_DMI_Output_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** sendBrakesToDMI_manage_DMI_Output_Pkg.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

