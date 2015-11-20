/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _ToSystemNational_Conditions_H_
#define _ToSystemNational_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Conditions::ToSystemNational::Condition56 */ Condition56;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* Conditions::ToSystemNational::Current_Level */ rem_Current_Level;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ToSystemNational_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToSystemNational */
extern void ToSystemNational_Conditions(
  /* Conditions::ToSystemNational::Current_Level */M_LEVEL Current_Level,
  outC_ToSystemNational_Conditions *outC);

extern void ToSystemNational_reset_Conditions(
  outC_ToSystemNational_Conditions *outC);

#endif /* _ToSystemNational_Conditions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ToSystemNational_Conditions.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

