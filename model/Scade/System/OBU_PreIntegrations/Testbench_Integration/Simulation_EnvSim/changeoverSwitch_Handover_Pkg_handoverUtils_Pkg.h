/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _changeoverSwitch_Handover_Pkg_handoverUtils_Pkg_H_
#define _changeoverSwitch_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"
#include "FallingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::handingOverMobile_is_mobile_1 */ handingOverMobile_is_mobile_1;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _4_SSM_ST_SM1 /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */ SM1_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FallingEdge_digital /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch */
extern void changeoverSwitch_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::handoverInprogress */kcg_bool handoverInprogress,
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::sessionManagementAbility */abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC);

extern void changeoverSwitch_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC);

#endif /* _changeoverSwitch_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** changeoverSwitch_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */

