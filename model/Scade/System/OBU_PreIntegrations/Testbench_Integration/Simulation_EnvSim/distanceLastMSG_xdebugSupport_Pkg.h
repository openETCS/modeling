/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _distanceLastMSG_xdebugSupport_Pkg_H_
#define _distanceLastMSG_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "countPacketsMsg_xdebugSupport_Pkg.h"

/* =====================  no input structure  ====================== */

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
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastMSG::MSGLocation */ MSGLocation;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_distanceLastMSG_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::distanceLastMSG */
extern void distanceLastMSG_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::distanceLastMSG::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* xdebugSupport_Pkg::distanceLastMSG::msg */ReceivedMessage_T_Common_Types_Pkg *msg,
  /* xdebugSupport_Pkg::distanceLastMSG::showGeneral */kcg_bool showGeneral,
  outC_distanceLastMSG_xdebugSupport_Pkg *outC);

extern void distanceLastMSG_reset_xdebugSupport_Pkg(
  outC_distanceLastMSG_xdebugSupport_Pkg *outC);

#endif /* _distanceLastMSG_xdebugSupport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** distanceLastMSG_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

