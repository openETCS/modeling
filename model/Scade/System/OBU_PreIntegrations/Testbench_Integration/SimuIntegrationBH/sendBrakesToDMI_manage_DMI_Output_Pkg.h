/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _sendBrakesToDMI_manage_DMI_Output_Pkg_H_
#define _sendBrakesToDMI_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg /* manage_DMI_Output_Pkg::sendBrakesToDMI::dmi_iconRequest */ dmi_iconRequest;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  Brake_command_T_TIU_Types_Pkg /* manage_DMI_Output_Pkg::sendBrakesToDMI::loc_brakeCommand */ loc_brakeCommand;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_sendBrakesToDMI_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::sendBrakesToDMI */
extern void sendBrakesToDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::brakeCommand */ Brake_command_T_TIU_Types_Pkg *brakeCommand,
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void sendBrakesToDMI_reset_manage_DMI_Output_Pkg(
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void sendBrakesToDMI_init_manage_DMI_Output_Pkg(
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _sendBrakesToDMI_manage_DMI_Output_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** sendBrakesToDMI_manage_DMI_Output_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

