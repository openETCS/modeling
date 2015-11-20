/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _handleTraction_output_to_TIU_API_Pkg_H_
#define _handleTraction_output_to_TIU_API_Pkg_H_

#include "kcg_types.h"
#include "mapModeToTractionCutOff_output_to_TIU_API_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Type_I_train_commands_T_TIU_Types_Pkg /* output_to_TIU_API_Pkg::handleTraction::outTrainCommands */ outTrainCommands;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_traction_cutoff_command_T_TIU_Types_Pkg /* output_to_TIU_API_Pkg::handleTraction::tractionCutOffStatus */ tractionCutOffStatus;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_handleTraction_output_to_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* output_to_TIU_API_Pkg::handleTraction */
extern void handleTraction_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::handleTraction::in_train_commands */ Type_I_train_commands_T_TIU_Types_Pkg *in_train_commands,
  /* output_to_TIU_API_Pkg::handleTraction::inModeLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeLevel,
  outC_handleTraction_output_to_TIU_API_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void handleTraction_reset_output_to_TIU_API_Pkg(
  outC_handleTraction_output_to_TIU_API_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void handleTraction_init_output_to_TIU_API_Pkg(
  outC_handleTraction_output_to_TIU_API_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _handleTraction_output_to_TIU_API_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** handleTraction_output_to_TIU_API_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

