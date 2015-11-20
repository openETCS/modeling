/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _changeoverSwitch_Handover_Pkg_handoverUtils_Pkg_H_
#define _changeoverSwitch_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"
#include "FallingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::handingOverMobile_is_mobile_1 */ handingOverMobile_is_mobile_1;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _20_SSM_ST_SM1 /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */ SM1_state_nxt;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */ SM1_reset_act;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FallingEdge_digital /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch */
extern void changeoverSwitch_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::handoverInprogress */ kcg_bool handoverInprogress,
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void changeoverSwitch_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void changeoverSwitch_init_Handover_Pkg_handoverUtils_Pkg(
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _changeoverSwitch_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** changeoverSwitch_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

