/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__CheckBGConsistency_CheckBGConsistency_Pkg_H_
#define _MLRI__CheckBGConsistency_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "MLRI__CheckMode_CheckBGConsistency_Pkg_SubFunction.h"
#include "MLRI__CaseLinkingNotInUse_CheckBGConsistency_Pkg.h"
#include "MLRI__CaseLinkingInUse_CheckBGConsistency_Pkg.h"

/* =====================  no input structure  ====================== */


/* CheckBGConsistency_Pkg::CheckBGConsistency */
extern void MLRI__CheckBGConsistency_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckBGConsistency::bgMessage */MLRI__BG_Message_T_BG_Types_Pkg *bgMessage,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::storedBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainPosition */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *trainStatus,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::passedBG_out */MLRI__passedBG_T_BG_Types_Pkg *passedBG_out,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::applyServiceBrake */kcg_bool *applyServiceBrake,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::badBaliseMessageToDMI */kcg_bool *badBaliseMessageToDMI,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorLinkedBG */kcg_bool *errorLinkedBG,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorUnlinkedBG */kcg_bool *errorUnlinkedBG);

#endif /* _MLRI__CheckBGConsistency_CheckBGConsistency_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CheckBGConsistency_CheckBGConsistency_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

