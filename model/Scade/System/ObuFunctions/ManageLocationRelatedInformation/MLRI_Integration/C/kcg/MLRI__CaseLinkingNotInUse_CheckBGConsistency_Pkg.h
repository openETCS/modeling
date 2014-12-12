/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__CaseLinkingNotInUse_CheckBGConsistency_Pkg_H_
#define _MLRI__CaseLinkingNotInUse_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "MLRI__N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "MLRI__BuildPassedBG_CheckBGConsistency_Pkg_SubFunction.h"
#include "MLRI__WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"
#include "MLRI__CheckCompleteness_CheckBGConsistency_Pkg.h"

/* =====================  no input structure  ====================== */


/* CheckBGConsistency_Pkg::CaseLinkingNotInUse */
extern void MLRI__CaseLinkingNotInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::bgMessage */MLRI__BG_Message_T_BG_Types_Pkg *bgMessage,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */kcg_bool *applyServiceBrake,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */kcg_bool *badBaliseMessageToDMI,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */MLRI__passedBG_T_BG_Types_Pkg *passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */kcg_bool *errorUnlinkedBG);

#endif /* _MLRI__CaseLinkingNotInUse_CheckBGConsistency_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CaseLinkingNotInUse_CheckBGConsistency_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

