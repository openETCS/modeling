/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _distanceLastBG_xdebugSupport_Pkg_H_
#define _distanceLastBG_xdebugSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* xdebugSupport_Pkg::distanceLastBG::distance */ distance;
  NID_BG /* xdebugSupport_Pkg::distanceLastBG::lastBG */ lastBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastBG::BGLocation */ BGLocation;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_distanceLastBG_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::distanceLastBG */
extern void distanceLastBG_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::distanceLastBG::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* xdebugSupport_Pkg::distanceLastBG::msg */ReceivedMessage_T_Common_Types_Pkg *msg,
  outC_distanceLastBG_xdebugSupport_Pkg *outC);

extern void distanceLastBG_reset_xdebugSupport_Pkg(
  outC_distanceLastBG_xdebugSupport_Pkg *outC);

#endif /* _distanceLastBG_xdebugSupport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** distanceLastBG_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

