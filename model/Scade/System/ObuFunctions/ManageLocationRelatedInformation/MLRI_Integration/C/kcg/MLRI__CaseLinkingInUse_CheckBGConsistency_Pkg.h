/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__CaseLinkingInUse_CheckBGConsistency_Pkg_H_
#define _MLRI__CaseLinkingInUse_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "MLRI__N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "MLRI__BuildPassedBG_CheckBGConsistency_Pkg_SubFunction.h"
#include "MLRI__WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"
#include "MLRI__IsBG_announced_CheckBGConsistency_Pkg_SubFunction.h"
#include "MLRI__CheckCompleteness_CheckBGConsistency_Pkg.h"

/* =====================  no input structure  ====================== */


/* CheckBGConsistency_Pkg::CaseLinkingInUse */
extern void MLRI__CaseLinkingInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::bgMessage */MLRI__BG_Message_T_BG_Types_Pkg *bgMessage,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::storedBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */MLRI__passedBG_T_BG_Types_Pkg *passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */kcg_bool *errorLinkedBG);

#endif /* _MLRI__CaseLinkingInUse_CheckBGConsistency_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CaseLinkingInUse_CheckBGConsistency_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

