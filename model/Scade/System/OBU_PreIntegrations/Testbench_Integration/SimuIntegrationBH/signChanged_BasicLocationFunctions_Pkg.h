/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _signChanged_BasicLocationFunctions_Pkg_H_
#define _signChanged_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* BasicLocationFunctions_Pkg::signChanged::change */ change;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* BasicLocationFunctions_Pkg::signChanged::val */ rem_val;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_signChanged_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::signChanged */
extern void signChanged_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::signChanged::val */ kcg_int val,
  outC_signChanged_BasicLocationFunctions_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void signChanged_reset_BasicLocationFunctions_Pkg(
  outC_signChanged_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void signChanged_init_BasicLocationFunctions_Pkg(
  outC_signChanged_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _signChanged_BasicLocationFunctions_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** signChanged_BasicLocationFunctions_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

