/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _countPacketsMsg_xdebugSupport_Pkg_H_
#define _countPacketsMsg_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "countBasics_xdebugSupport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* xdebugSupport_Pkg::countPacketsMsg::count */ count;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countBasics_xdebugSupport_Pkg /* 1 */ Context_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Metadata_T_Common_Types_Pkg /* xdebugSupport_Pkg::countPacketsMsg::_L2 */ _L2;
  kcg_int /* xdebugSupport_Pkg::countPacketsMsg::_L3 */ _L3;
  kcg_int /* xdebugSupport_Pkg::countPacketsMsg::_L5 */ _L5;
  kcg_int /* xdebugSupport_Pkg::countPacketsMsg::_L6 */ _L6;
  kcg_bool /* xdebugSupport_Pkg::countPacketsMsg::_L7 */ _L7;
  CompressedPackets_T_Common_Types_Pkg /* xdebugSupport_Pkg::countPacketsMsg::_L10 */ _L10;
  ReceivedMessage_T_Common_Types_Pkg /* xdebugSupport_Pkg::countPacketsMsg::_L13 */ _L13;
} outC_countPacketsMsg_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::countPacketsMsg */
extern void countPacketsMsg_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::countPacketsMsg::Message */ ReceivedMessage_T_Common_Types_Pkg *Message,
  outC_countPacketsMsg_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void countPacketsMsg_reset_xdebugSupport_Pkg(
  outC_countPacketsMsg_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void countPacketsMsg_init_xdebugSupport_Pkg(
  outC_countPacketsMsg_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _countPacketsMsg_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** countPacketsMsg_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

