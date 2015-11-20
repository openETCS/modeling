/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::send_m159_sessionEstablishedReport */ send_m159_sessionEstablishedReport;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::established */ established;
  sessionStatus_T_RCM_Session_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::sessionStatus */ sessionStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _16_SSM_ST_SM1 /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */ SM1_state_nxt;
  sessionCmd_T_RCM_Session_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::sessionEstablishCmd_mem */ sessionEstablishCmd_mem;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2 */
extern void establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::sessionEstablishCmd_in */sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::connectionStatus */mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::reset */kcg_bool reset,
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC);

extern void establishSessionFromRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC);

#endif /* _establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

