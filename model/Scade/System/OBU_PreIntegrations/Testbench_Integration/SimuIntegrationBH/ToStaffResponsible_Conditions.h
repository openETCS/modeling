/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ToStaffResponsible_Conditions_H_
#define _ToStaffResponsible_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Conditions::ToStaffResponsible::Condition44 */ Condition44;
  kcg_bool /* Conditions::ToStaffResponsible::Condition45 */ Condition45;
  kcg_bool /* Conditions::ToStaffResponsible::Condition37 */ Condition37;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* Conditions::ToStaffResponsible::Current_Level */ rem_Current_Level;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ToStaffResponsible_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToStaffResponsible */
extern void ToStaffResponsible_Conditions(
  /* Conditions::ToStaffResponsible::Current_Level */ M_LEVEL Current_Level,
  /* Conditions::ToStaffResponsible::Driver_Req_Override */ kcg_bool Driver_Req_Override,
  /* Conditions::ToStaffResponsible::Train_Speed_Under_Override_Limit */ kcg_bool Train_Speed_Under_Override_Limit,
  /* Conditions::ToStaffResponsible::Override_Function_Active */ kcg_bool Override_Function_Active,
  /* Conditions::ToStaffResponsible::Emergency_Stop_Message_Received */ kcg_bool Emergency_Stop_Message_Received,
  outC_ToStaffResponsible_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToStaffResponsible_reset_Conditions(
  outC_ToStaffResponsible_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToStaffResponsible_init_Conditions(
  outC_ToStaffResponsible_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ToStaffResponsible_Conditions_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ToStaffResponsible_Conditions.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

