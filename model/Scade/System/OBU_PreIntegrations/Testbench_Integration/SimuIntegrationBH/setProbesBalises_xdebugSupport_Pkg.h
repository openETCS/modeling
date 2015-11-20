/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _setProbesBalises_xdebugSupport_Pkg_H_
#define _setProbesBalises_xdebugSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  probesBalises_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::setProbesBalises::baliseInformation */ baliseInformation;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  probesBalises_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::setProbesBalises::baliseInfo */ baliseInfo;
  NID_BG /* xdebugSupport_Pkg::setProbesBalises::bgID */ bgID;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MSG_Errors_T_Common_Types_Pkg /* xdebugSupport_Pkg::setProbesBalises::IfBlock1::then::_L9 */ _L9_IfBlock1;
  NID_C /* xdebugSupport_Pkg::setProbesBalises::IfBlock1::then::_L8 */ _L8_IfBlock1;
  NID_BG /* xdebugSupport_Pkg::setProbesBalises::IfBlock1::then::_L7 */ _L7_IfBlock1;
  BG_Header_T_BG_Types_Pkg /* xdebugSupport_Pkg::setProbesBalises::IfBlock1::then::_L6 */ _L6_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* xdebugSupport_Pkg::setProbesBalises::IfBlock1::then::_L5 */ _L5_IfBlock1;
  kcg_bool /* xdebugSupport_Pkg::setProbesBalises::IfBlock1::then::_L4 */ _L4_IfBlock1;
  probesBalises_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::setProbesBalises::IfBlock1::then::_L3 */ _L3_IfBlock1;
  NID_BG /* xdebugSupport_Pkg::setProbesBalises::IfBlock1::else::_L4 */ _L41_IfBlock1;
  kcg_bool /* xdebugSupport_Pkg::setProbesBalises::IfBlock1::else::_L3 */ _L32_IfBlock1;
  probesBalises_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::setProbesBalises::IfBlock1::else::_L2 */ _L2_IfBlock1;
  probesBalises_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::setProbesBalises::IfBlock1::else::_L1 */ _L1_IfBlock1;
  kcg_bool /* xdebugSupport_Pkg::setProbesBalises::IfBlock1 */ IfBlock1_clock;
  kcg_bool /* xdebugSupport_Pkg::setProbesBalises::changedBG */ changedBG;
  ReceivedMessage_T_Common_Types_Pkg /* xdebugSupport_Pkg::setProbesBalises::_L1 */ _L1;
  kcg_bool /* xdebugSupport_Pkg::setProbesBalises::_L20 */ _L20;
  kcg_bool /* xdebugSupport_Pkg::setProbesBalises::_L23 */ _L23;
  kcg_bool /* xdebugSupport_Pkg::setProbesBalises::_L28 */ _L28;
  probesBalises_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::setProbesBalises::_L31 */ _L31;
  MsgSource_T_Common_Types_Pkg /* xdebugSupport_Pkg::setProbesBalises::_L43 */ _L43;
  kcg_bool /* xdebugSupport_Pkg::setProbesBalises::_L45 */ _L45;
  MsgSource_T_Common_Types_Pkg /* xdebugSupport_Pkg::setProbesBalises::_L46 */ _L46;
  kcg_bool /* xdebugSupport_Pkg::setProbesBalises::_L47 */ _L47;
  kcg_bool /* xdebugSupport_Pkg::setProbesBalises::_L48 */ _L48;
  BG_Header_T_BG_Types_Pkg /* xdebugSupport_Pkg::setProbesBalises::_L49 */ _L49;
  NID_BG /* xdebugSupport_Pkg::setProbesBalises::_L50 */ _L50;
  NID_BG /* xdebugSupport_Pkg::setProbesBalises::_L51 */ _L51;
} outC_setProbesBalises_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::setProbesBalises */
extern void setProbesBalises_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::setProbesBalises::inMsg */ ReceivedMessage_T_Common_Types_Pkg *inMsg,
  /* xdebugSupport_Pkg::setProbesBalises::inErrors */ MSG_Errors_T_Common_Types_Pkg *inErrors,
  outC_setProbesBalises_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void setProbesBalises_reset_xdebugSupport_Pkg(
  outC_setProbesBalises_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void setProbesBalises_init_xdebugSupport_Pkg(
  outC_setProbesBalises_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _setProbesBalises_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** setProbesBalises_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

