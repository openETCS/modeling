/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _distanceLastMSG_xdebugSupport_Pkg_H_
#define _distanceLastMSG_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "countPacketsMsg_xdebugSupport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* xdebugSupport_Pkg::distanceLastMSG::distance */ distance;
  NID_BG /* xdebugSupport_Pkg::distanceLastMSG::lastMSG */ lastMSG;
  NID_LRBG /* xdebugSupport_Pkg::distanceLastMSG::lastLRBG */ lastLRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_BG /* xdebugSupport_Pkg::distanceLastMSG::MSG_ID */ MSG_ID;
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastMSG::MSGLocation */ MSGLocation;
  NID_LRBG /* xdebugSupport_Pkg::distanceLastMSG::LRBG */ LRBG;
  kcg_bool /* xdebugSupport_Pkg::distanceLastMSG::showGeneral */ rem_showGeneral;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countPacketsMsg_xdebugSupport_Pkg /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* xdebugSupport_Pkg::distanceLastMSG */ ck_every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_LRBG /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::then::_L10 */ _L10_IfBlock1;
  kcg_real /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::then::_L9 */ _L9_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::then::_L8 */ _L8_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::then::_L7 */ _L7_IfBlock1;
  odometry_T_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::then::_L6 */ _L6_IfBlock1;
  NID_MESSAGE /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::then::_L4 */ _L4_IfBlock1;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::then::_L3 */ _L3_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::then::_L2 */ _L2_IfBlock1;
  kcg_real /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::else::_L16 */ _L16_IfBlock1;
  kcg_real /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::else::_L15 */ _L15_IfBlock1;
  kcg_int /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::else::_L14 */ _L14_IfBlock1;
  kcg_bool /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::else::_L13 */ _L13_IfBlock1;
  NID_BG /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::else::_L12 */ _L12_IfBlock1;
  NID_LRBG /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::else::_L11 */ _L11_IfBlock1;
  kcg_real /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::else::_L10 */ _L101_IfBlock1;
  kcg_real /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::else::_L9 */ _L92_IfBlock1;
  kcg_real /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::else::_L8 */ _L83_IfBlock1;
  kcg_int /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::else::_L7 */ _L74_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::else::_L4 */ _L45_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::else::_L5 */ _L5_IfBlock1;
  odometry_T_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::else::_L6 */ _L66_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::else::_L3 */ _L37_IfBlock1;
  NID_BG /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1::else::_L1 */ _L1_IfBlock1;
  kcg_bool /* xdebugSupport_Pkg::distanceLastMSG::IfBlock1 */ IfBlock1_clock;
  kcg_bool /* xdebugSupport_Pkg::distanceLastMSG::MSGReceived */ MSGReceived;
  ReceivedMessage_T_Common_Types_Pkg /* xdebugSupport_Pkg::distanceLastMSG::_L1 */ _L1;
  kcg_bool /* xdebugSupport_Pkg::distanceLastMSG::_L2 */ _L2;
  MsgSource_T_Common_Types_Pkg /* xdebugSupport_Pkg::distanceLastMSG::_L4 */ _L4;
  kcg_bool /* xdebugSupport_Pkg::distanceLastMSG::_L5 */ _L5;
  MsgSource_T_Common_Types_Pkg /* xdebugSupport_Pkg::distanceLastMSG::_L6 */ _L6;
  kcg_bool /* xdebugSupport_Pkg::distanceLastMSG::_L7 */ _L7;
  NID_BG /* xdebugSupport_Pkg::distanceLastMSG::_L8 */ _L8;
  kcg_bool /* xdebugSupport_Pkg::distanceLastMSG::_L9 */ _L9;
  kcg_bool /* xdebugSupport_Pkg::distanceLastMSG::_L11 */ _L11;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* xdebugSupport_Pkg::distanceLastMSG::_L10 */ _L10;
  NID_MESSAGE /* xdebugSupport_Pkg::distanceLastMSG::_L12 */ _L12;
  NID_MESSAGE /* xdebugSupport_Pkg::distanceLastMSG::_L13 */ _L13;
  kcg_bool /* xdebugSupport_Pkg::distanceLastMSG::_L14 */ _L14;
  kcg_bool /* xdebugSupport_Pkg::distanceLastMSG::_L15 */ _L15;
  kcg_int /* xdebugSupport_Pkg::distanceLastMSG::_L16 */ _L16;
  kcg_bool /* xdebugSupport_Pkg::distanceLastMSG::_L17 */ _L17;
  kcg_int /* xdebugSupport_Pkg::distanceLastMSG::_L18 */ _L18;
  kcg_bool /* xdebugSupport_Pkg::distanceLastMSG::_L19 */ _L19;
  kcg_int /* xdebugSupport_Pkg::distanceLastMSG::_L20 */ _L20;
  NID_LRBG /* xdebugSupport_Pkg::distanceLastMSG::_L21 */ _L21;
} outC_distanceLastMSG_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::distanceLastMSG */
extern void distanceLastMSG_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::distanceLastMSG::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* xdebugSupport_Pkg::distanceLastMSG::msg */ ReceivedMessage_T_Common_Types_Pkg *msg,
  /* xdebugSupport_Pkg::distanceLastMSG::showGeneral */ kcg_bool showGeneral,
  outC_distanceLastMSG_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void distanceLastMSG_reset_xdebugSupport_Pkg(
  outC_distanceLastMSG_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void distanceLastMSG_init_xdebugSupport_Pkg(
  outC_distanceLastMSG_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _distanceLastMSG_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** distanceLastMSG_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

