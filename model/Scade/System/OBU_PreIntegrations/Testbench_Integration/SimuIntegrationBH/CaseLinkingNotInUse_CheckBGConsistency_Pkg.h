/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CaseLinkingNotInUse_CheckBGConsistency_Pkg_H_
#define _CaseLinkingNotInUse_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "CheckCompleteness_CheckBGConsistency_Pkg.h"
#include "BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CheckBGConsistency_Pkg::CaseLinkingNotInUse */
extern void CaseLinkingNotInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::trackSideForCheck */ TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */ kcg_bool *_28_applyServiceBrake,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */ kcg_bool *_27_badBaliseMessageToDMI,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg *_26_passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */ kcg_bool *_25_errorUnlinkedBG,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_errorBG */ NID_ERRORBG_BG_Types_Pkg *_24_nid_errorBG,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_c */ NID_C *nid_c23);

#endif /* _CaseLinkingNotInUse_CheckBGConsistency_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CaseLinkingNotInUse_CheckBGConsistency_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

