/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _signChanged_BasicLocationFunctions_Pkg_H_
#define _signChanged_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

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
  /* BasicLocationFunctions_Pkg::signChanged::val */kcg_int val,
  outC_signChanged_BasicLocationFunctions_Pkg *outC);

extern void signChanged_reset_BasicLocationFunctions_Pkg(
  outC_signChanged_BasicLocationFunctions_Pkg *outC);

#endif /* _signChanged_BasicLocationFunctions_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** signChanged_BasicLocationFunctions_Pkg.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */

