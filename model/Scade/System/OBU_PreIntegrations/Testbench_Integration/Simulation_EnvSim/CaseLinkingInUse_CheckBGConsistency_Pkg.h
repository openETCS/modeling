/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:56
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


/* CheckBGConsistency_Pkg::CaseLinkingInUse */
extern void CaseLinkingInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::storedBGs */positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::trackSideForCheck */TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */ReceivedMessage_T_Common_Types_Pkg *passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */kcg_bool *errorLinkedBG,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_errorBG */NID_ERRORBG_BG_Types_Pkg *nid_errorBG,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_c */NID_C *nid_c);

#endif /* _CaseLinkingInUse_CheckBGConsistency_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CaseLinkingInUse_CheckBGConsistency_Pkg.h
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */

