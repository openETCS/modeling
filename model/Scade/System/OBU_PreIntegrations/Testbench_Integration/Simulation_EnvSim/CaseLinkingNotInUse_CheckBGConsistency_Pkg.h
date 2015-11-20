/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */
#ifndef _CaseLinkingNotInUse_CheckBGConsistency_Pkg_H_
#define _CaseLinkingNotInUse_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "CheckCompleteness_CheckBGConsistency_Pkg.h"
#include "BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */


/* CheckBGConsistency_Pkg::CaseLinkingNotInUse */
extern void CaseLinkingNotInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::trackSideForCheck */TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */kcg_bool *applyServiceBrake,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */kcg_bool *badBaliseMessageToDMI,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */ReceivedMessage_T_Common_Types_Pkg *passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */kcg_bool *errorUnlinkedBG,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_errorBG */NID_ERRORBG_BG_Types_Pkg *nid_errorBG,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_c */NID_C *nid_c);

#endif /* _CaseLinkingNotInUse_CheckBGConsistency_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CaseLinkingNotInUse_CheckBGConsistency_Pkg.h
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */

