/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ToUnfitted_Conditions_H_
#define _ToUnfitted_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
  /* Conditions::ToUnfitted::Current_Level */ M_LEVEL Current_Level,
  outC_ToUnfitted_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToUnfitted_reset_Conditions(outC_ToUnfitted_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToUnfitted_init_Conditions(outC_ToUnfitted_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ToUnfitted_Conditions_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ToUnfitted_Conditions.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

