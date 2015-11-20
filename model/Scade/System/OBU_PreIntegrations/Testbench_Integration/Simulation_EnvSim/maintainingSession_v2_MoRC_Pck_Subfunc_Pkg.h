/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _maintainingSession_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _maintainingSession_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  sessionStatus_T_RCM_Session_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::sessionStatus */ sessionStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  sessionStatus_T_RCM_Session_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::_L133 */ _L133;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2 */
extern void maintainingSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::prevSessionStatus */sessionStatus_T_RCM_Session_Types_Pkg *prevSessionStatus,
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

extern void maintainingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

#endif /* _maintainingSession_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** maintainingSession_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

