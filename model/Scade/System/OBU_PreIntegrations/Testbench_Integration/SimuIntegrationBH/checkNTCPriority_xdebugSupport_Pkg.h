/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _checkNTCPriority_xdebugSupport_Pkg_H_
#define _checkNTCPriority_xdebugSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* xdebugSupport_Pkg::checkNTCPriority::isNTC */ isNTC;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::checkNTCPriority::_L1 */ _L1;
  P41_LevelTransitionOrder_T_Packet_Types_Pkg /* xdebugSupport_Pkg::checkNTCPriority::_L2 */ _L2;
  kcg_int /* xdebugSupport_Pkg::checkNTCPriority::_L3 */ _L3;
  M_LEVELTR /* xdebugSupport_Pkg::checkNTCPriority::_L5 */ _L5;
  M_LEVELTR /* xdebugSupport_Pkg::checkNTCPriority::_L6 */ _L6;
  kcg_bool /* xdebugSupport_Pkg::checkNTCPriority::_L7 */ _L7;
  P41_LevelTransitionOrder_T_Packet_Types_Pkg /* xdebugSupport_Pkg::checkNTCPriority::_L8 */ _L8;
} outC_checkNTCPriority_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::checkNTCPriority */
extern void checkNTCPriority_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::checkNTCPriority::p41 */ P41_LevelTransistionOrders_T_Packet_Types_Pkg *p41,
  outC_checkNTCPriority_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void checkNTCPriority_reset_xdebugSupport_Pkg(
  outC_checkNTCPriority_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void checkNTCPriority_init_xdebugSupport_Pkg(
  outC_checkNTCPriority_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _checkNTCPriority_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** checkNTCPriority_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

