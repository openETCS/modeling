/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _MLRI__calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "MLRI__add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "MLRI__scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */


/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies */
extern void MLRI__calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::BG_in */MLRI__positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::localInaccuracies */MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *localInaccuracies);

#endif /* _MLRI__calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

