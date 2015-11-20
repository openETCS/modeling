/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _getP41Level_xdebugSupport_Pkg_H_
#define _getP41Level_xdebugSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_LEVEL /* xdebugSupport_Pkg::getP41Level::p41_level */ p41_level;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::getP41Level::_L1 */ _L1;
  P41_LevelTransitionOrder_T_Packet_Types_Pkg /* xdebugSupport_Pkg::getP41Level::_L2 */ _L2;
  kcg_int /* xdebugSupport_Pkg::getP41Level::_L3 */ _L3;
  M_LEVELTR /* xdebugSupport_Pkg::getP41Level::_L5 */ _L5;
  P41_LevelTransitionOrder_T_Packet_Types_Pkg /* xdebugSupport_Pkg::getP41Level::_L8 */ _L8;
  M_LEVEL /* xdebugSupport_Pkg::getP41Level::_L9 */ _L9;
  M_LEVEL /* xdebugSupport_Pkg::getP41Level::_L10 */ _L10;
  M_LEVEL /* xdebugSupport_Pkg::getP41Level::_L11 */ _L11;
  M_LEVEL /* xdebugSupport_Pkg::getP41Level::_L12 */ _L12;
  M_LEVEL /* xdebugSupport_Pkg::getP41Level::_L13 */ _L13;
  M_LEVEL /* xdebugSupport_Pkg::getP41Level::_L14 */ _L14;
} outC_getP41Level_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::getP41Level */
extern void getP41Level_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::getP41Level::p41 */ P41_LevelTransistionOrders_T_Packet_Types_Pkg *p41,
  outC_getP41Level_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getP41Level_reset_xdebugSupport_Pkg(
  outC_getP41Level_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getP41Level_init_xdebugSupport_Pkg(
  outC_getP41Level_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _getP41Level_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** getP41Level_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

