/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CaseLinkingInUse_CheckBGConsistency_Pkg_H_
#define _CaseLinkingInUse_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "CheckCompleteness_CheckBGConsistency_Pkg.h"
#include "BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"
#include "IsBG_announced_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */ passedBG_out;
  kcg_bool /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */ errorLinkedBG;
  NID_ERRORBG_BG_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_errorBG */ nid_errorBG;
  NID_C /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_c */ nid_c;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBGlocal */ passedBGlocal;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_CaseLinkingInUse_CheckBGConsistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::CaseLinkingInUse */
extern void CaseLinkingInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::storedBGs */ positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::trackSideForCheck */ TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CaseLinkingInUse_reset_CheckBGConsistency_Pkg(
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CaseLinkingInUse_init_CheckBGConsistency_Pkg(
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CaseLinkingInUse_CheckBGConsistency_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CaseLinkingInUse_CheckBGConsistency_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

