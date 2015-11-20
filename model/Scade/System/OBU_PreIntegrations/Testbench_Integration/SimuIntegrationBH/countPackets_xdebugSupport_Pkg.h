/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _countPackets_xdebugSupport_Pkg_H_
#define _countPackets_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "countBasics_xdebugSupport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* xdebugSupport_Pkg::countPackets::count */ count;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countBasics_xdebugSupport_Pkg /* 1 */ Context_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* xdebugSupport_Pkg::countPackets::_L1 */ _L1;
  Metadata_T_Common_Types_Pkg /* xdebugSupport_Pkg::countPackets::_L2 */ _L2;
  kcg_int /* xdebugSupport_Pkg::countPackets::_L3 */ _L3;
  kcg_int /* xdebugSupport_Pkg::countPackets::_L5 */ _L5;
  kcg_int /* xdebugSupport_Pkg::countPackets::_L6 */ _L6;
  kcg_bool /* xdebugSupport_Pkg::countPackets::_L7 */ _L7;
  CompressedPackets_T_Common_Types_Pkg /* xdebugSupport_Pkg::countPackets::_L10 */ _L10;
  kcg_int /* xdebugSupport_Pkg::countPackets::_L11 */ _L11;
  kcg_int /* xdebugSupport_Pkg::countPackets::_L12 */ _L12;
} outC_countPackets_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::countPackets */
extern void countPackets_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::countPackets::msg */ API_TrackSideInput_T_API_Msg_Pkg *msg,
  outC_countPackets_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void countPackets_reset_xdebugSupport_Pkg(
  outC_countPackets_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void countPackets_init_xdebugSupport_Pkg(
  outC_countPackets_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _countPackets_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** countPackets_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

