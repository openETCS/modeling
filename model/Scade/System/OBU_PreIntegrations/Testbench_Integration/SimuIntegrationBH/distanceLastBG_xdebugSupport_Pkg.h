/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _distanceLastBG_xdebugSupport_Pkg_H_
#define _distanceLastBG_xdebugSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* xdebugSupport_Pkg::distanceLastBG::distance */ distance;
  NID_BG /* xdebugSupport_Pkg::distanceLastBG::lastBG */ lastBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_BG /* xdebugSupport_Pkg::distanceLastBG::BG_ID */ BG_ID;
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastBG::BGLocation */ BGLocation;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* xdebugSupport_Pkg::distanceLastBG::IfBlock1::then::_L9 */ _L9_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastBG::IfBlock1::then::_L8 */ _L8_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastBG::IfBlock1::then::_L7 */ _L7_IfBlock1;
  odometry_T_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastBG::IfBlock1::then::_L6 */ _L6_IfBlock1;
  NID_BG /* xdebugSupport_Pkg::distanceLastBG::IfBlock1::then::_L4 */ _L4_IfBlock1;
  BG_Header_T_BG_Types_Pkg /* xdebugSupport_Pkg::distanceLastBG::IfBlock1::then::_L3 */ _L3_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* xdebugSupport_Pkg::distanceLastBG::IfBlock1::then::_L2 */ _L2_IfBlock1;
  kcg_real /* xdebugSupport_Pkg::distanceLastBG::IfBlock1::else::_L10 */ _L10_IfBlock1;
  kcg_real /* xdebugSupport_Pkg::distanceLastBG::IfBlock1::else::_L9 */ _L91_IfBlock1;
  kcg_real /* xdebugSupport_Pkg::distanceLastBG::IfBlock1::else::_L8 */ _L82_IfBlock1;
  kcg_int /* xdebugSupport_Pkg::distanceLastBG::IfBlock1::else::_L7 */ _L73_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastBG::IfBlock1::else::_L4 */ _L44_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastBG::IfBlock1::else::_L5 */ _L5_IfBlock1;
  odometry_T_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastBG::IfBlock1::else::_L6 */ _L65_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastBG::IfBlock1::else::_L3 */ _L36_IfBlock1;
  NID_BG /* xdebugSupport_Pkg::distanceLastBG::IfBlock1::else::_L1 */ _L1_IfBlock1;
  kcg_bool /* xdebugSupport_Pkg::distanceLastBG::IfBlock1 */ IfBlock1_clock;
  kcg_bool /* xdebugSupport_Pkg::distanceLastBG::BGPassed */ BGPassed;
  ReceivedMessage_T_Common_Types_Pkg /* xdebugSupport_Pkg::distanceLastBG::_L1 */ _L1;
  kcg_bool /* xdebugSupport_Pkg::distanceLastBG::_L2 */ _L2;
  MsgSource_T_Common_Types_Pkg /* xdebugSupport_Pkg::distanceLastBG::_L4 */ _L4;
  kcg_bool /* xdebugSupport_Pkg::distanceLastBG::_L5 */ _L5;
  MsgSource_T_Common_Types_Pkg /* xdebugSupport_Pkg::distanceLastBG::_L6 */ _L6;
  kcg_bool /* xdebugSupport_Pkg::distanceLastBG::_L7 */ _L7;
  NID_BG /* xdebugSupport_Pkg::distanceLastBG::_L8 */ _L8;
} outC_distanceLastBG_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::distanceLastBG */
extern void distanceLastBG_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::distanceLastBG::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* xdebugSupport_Pkg::distanceLastBG::msg */ ReceivedMessage_T_Common_Types_Pkg *msg,
  outC_distanceLastBG_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void distanceLastBG_reset_xdebugSupport_Pkg(
  outC_distanceLastBG_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void distanceLastBG_init_xdebugSupport_Pkg(
  outC_distanceLastBG_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _distanceLastBG_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** distanceLastBG_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

