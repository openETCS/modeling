/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::p42_establishSessionCmd */ p42_establishSessionCmd;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::send_m155_initiationOfACommunicationSession */ send_m155_initiationOfACommunicationSession;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::send_m159_sessionEstablishedReport */ send_m159_sessionEstablishedReport;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::send_m154_noCompatibleVersionSupported */ send_m154_noCompatibleVersionSupported;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::requestSafeRadioConnectionSetup */ requestSafeRadioConnectionSetup;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::terminateCommunicationSession */ terminateCommunicationSession;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::infomDriverNoCompatibleVersionSupported */ infomDriverNoCompatibleVersionSupported;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::established */ established;
  sessionStatus_T_RCM_Session_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sessionStatus */ sessionStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  sessionCmd_T_RCM_Session_Types_Pkg /* linear::Memory::_L8 */ _L8_1;
  _38_SSM_ST_SM1 /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */ SM1_state_nxt;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */ SM1_reset_act;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2 */
extern void establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sessionEstablishCmd_in */ sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::m32_SystemVersion */ m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::reset */ kcg_bool reset,
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC);

extern void establishSessionFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void establishSessionFromOBU_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

