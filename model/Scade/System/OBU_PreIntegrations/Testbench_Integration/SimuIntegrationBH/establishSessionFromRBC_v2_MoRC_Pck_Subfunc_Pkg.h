/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
  sessionCmd_T_RCM_Session_Types_Pkg /* linear::Memory::_L8 */ _L8_2;
  _32_SSM_ST_SM1 /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */ SM1_state_nxt;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */ SM1_reset_act;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2 */
extern void establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::sessionEstablishCmd_in */ sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::reset */ kcg_bool reset,
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC);

extern void establishSessionFromRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void establishSessionFromRBC_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

