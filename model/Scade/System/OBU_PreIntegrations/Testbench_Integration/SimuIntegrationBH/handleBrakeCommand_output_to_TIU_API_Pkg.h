/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _handleBrakeCommand_output_to_TIU_API_Pkg_H_
#define _handleBrakeCommand_output_to_TIU_API_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Brake_command_T_TIU_Types_Pkg /* output_to_TIU_API_Pkg::handleBrakeCommand::out_brake_command */ out_brake_command;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  Brake_command_T_TIU_Types_Pkg /* output_to_TIU_API_Pkg::handleBrakeCommand::in_brake_command */ rem_in_brake_command;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_handleBrakeCommand_output_to_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* output_to_TIU_API_Pkg::handleBrakeCommand */
extern void handleBrakeCommand_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::handleBrakeCommand::in_brake_command */ Brake_command_T_TIU_Types_Pkg *in_brake_command,
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void handleBrakeCommand_reset_output_to_TIU_API_Pkg(
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void handleBrakeCommand_init_output_to_TIU_API_Pkg(
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _handleBrakeCommand_output_to_TIU_API_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** handleBrakeCommand_output_to_TIU_API_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

