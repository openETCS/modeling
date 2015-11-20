/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _checkOnErrors_xdebugSupport_Pkg_H_
#define _checkOnErrors_xdebugSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* xdebugSupport_Pkg::checkOnErrors::radioMsgError */ radioMsgError;
  kcg_bool /* xdebugSupport_Pkg::checkOnErrors::baliseError */ baliseError;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MSG_Errors_T_Common_Types_Pkg /* xdebugSupport_Pkg::checkOnErrors::_L1 */ _L1;
  kcg_bool /* xdebugSupport_Pkg::checkOnErrors::_L2 */ _L2;
  kcg_bool /* xdebugSupport_Pkg::checkOnErrors::_L3 */ _L3;
  kcg_bool /* xdebugSupport_Pkg::checkOnErrors::_L4 */ _L4;
  kcg_bool /* xdebugSupport_Pkg::checkOnErrors::_L5 */ _L5;
  kcg_bool /* xdebugSupport_Pkg::checkOnErrors::_L6 */ _L6;
  MSG_Errors_T_Common_Types_Pkg /* xdebugSupport_Pkg::checkOnErrors::_L12 */ _L12;
  kcg_bool /* xdebugSupport_Pkg::checkOnErrors::_L11 */ _L11;
  kcg_bool /* xdebugSupport_Pkg::checkOnErrors::_L9 */ _L9;
  kcg_bool /* xdebugSupport_Pkg::checkOnErrors::_L8 */ _L8;
  kcg_bool /* xdebugSupport_Pkg::checkOnErrors::_L7 */ _L7;
} outC_checkOnErrors_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::checkOnErrors */
extern void checkOnErrors_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::checkOnErrors::errors */ MSG_Errors_T_Common_Types_Pkg *errors,
  outC_checkOnErrors_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void checkOnErrors_reset_xdebugSupport_Pkg(
  outC_checkOnErrors_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void checkOnErrors_init_xdebugSupport_Pkg(
  outC_checkOnErrors_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _checkOnErrors_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** checkOnErrors_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

