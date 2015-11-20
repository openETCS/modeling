/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _setProbesBalises_xdebugSupport_Pkg_H_
#define _setProbesBalises_xdebugSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  probesBalises_T_xdebugSupport_Pkg /* xdebugSupport_Pkg::setProbesBalises::baliseInformation */ baliseInformation;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_BG /* xdebugSupport_Pkg::setProbesBalises::bgID */ bgID;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_setProbesBalises_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::setProbesBalises */
extern void setProbesBalises_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::setProbesBalises::inMsg */ReceivedMessage_T_Common_Types_Pkg *inMsg,
  /* xdebugSupport_Pkg::setProbesBalises::inErrors */MSG_Errors_T_Common_Types_Pkg *inErrors,
  outC_setProbesBalises_xdebugSupport_Pkg *outC);

extern void setProbesBalises_reset_xdebugSupport_Pkg(
  outC_setProbesBalises_xdebugSupport_Pkg *outC);

#endif /* _setProbesBalises_xdebugSupport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** setProbesBalises_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

