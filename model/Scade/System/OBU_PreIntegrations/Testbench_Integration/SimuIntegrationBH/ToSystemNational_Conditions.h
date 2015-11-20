/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ToSystemNational_Conditions_H_
#define _ToSystemNational_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
  /* Conditions::ToSystemNational::Current_Level */ M_LEVEL Current_Level,
  outC_ToSystemNational_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToSystemNational_reset_Conditions(
  outC_ToSystemNational_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToSystemNational_init_Conditions(
  outC_ToSystemNational_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ToSystemNational_Conditions_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ToSystemNational_Conditions.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

