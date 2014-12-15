/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__IsBG_announced_CheckBGConsistency_Pkg_SubFunction_H_
#define _MLRI__IsBG_announced_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "MLRI__isStored_iter_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */


/* CheckBGConsistency_Pkg::SubFunction::IsBG_announced */
extern void MLRI__IsBG_announced_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::recivedBG_header */MLRI__BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::storedBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::isAnnounced */kcg_bool *isAnnounced,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::q_linkorintation */MLRI__Q_LINKORIENTATION *q_linkorintation);

#endif /* _MLRI__IsBG_announced_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__IsBG_announced_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

