/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _countBasics_xdebugSupport_Pkg_H_
#define _countBasics_xdebugSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* xdebugSupport_Pkg::countBasics::continue */ _1_continue;
  kcg_int /* xdebugSupport_Pkg::countBasics::count */ count;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* xdebugSupport_Pkg::countBasics::_L1 */ _L1;
  kcg_bool /* xdebugSupport_Pkg::countBasics::_L2 */ _L2;
  kcg_int /* xdebugSupport_Pkg::countBasics::_L5 */ _L5;
  kcg_int /* xdebugSupport_Pkg::countBasics::_L4 */ _L4;
  kcg_int /* xdebugSupport_Pkg::countBasics::_L3 */ _L3;
  kcg_int /* xdebugSupport_Pkg::countBasics::_L6 */ _L6;
  kcg_int /* xdebugSupport_Pkg::countBasics::_L7 */ _L7;
  NID_PACKET /* xdebugSupport_Pkg::countBasics::_L8 */ _L8;
  kcg_int /* xdebugSupport_Pkg::countBasics::_L9 */ _L9;
  kcg_bool /* xdebugSupport_Pkg::countBasics::_L10 */ _L10;
} outC_countBasics_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::countBasics */
extern void countBasics_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::countBasics::accu */ kcg_int accu,
  /* xdebugSupport_Pkg::countBasics::element */ MetadataElement_T_Common_Types_Pkg *element,
  outC_countBasics_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void countBasics_reset_xdebugSupport_Pkg(
  outC_countBasics_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void countBasics_init_xdebugSupport_Pkg(
  outC_countBasics_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _countBasics_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** countBasics_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

