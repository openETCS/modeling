/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _ToUnfitted_Conditions_H_
#define _ToUnfitted_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Conditions::ToUnfitted::Condition21 */ Condition21;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* Conditions::ToUnfitted::Current_Level */ rem_Current_Level;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ToUnfitted_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToUnfitted */
extern void ToUnfitted_Conditions(
  /* Conditions::ToUnfitted::Current_Level */M_LEVEL Current_Level,
  outC_ToUnfitted_Conditions *outC);

extern void ToUnfitted_reset_Conditions(outC_ToUnfitted_Conditions *outC);

#endif /* _ToUnfitted_Conditions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ToUnfitted_Conditions.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

