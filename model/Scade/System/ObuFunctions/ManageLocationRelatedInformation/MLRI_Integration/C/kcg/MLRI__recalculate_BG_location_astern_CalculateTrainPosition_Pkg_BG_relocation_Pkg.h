/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _MLRI__recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "MLRI__sub_2_odoDistances_BasicLocationFunctions_Pkg.h"
#include "MLRI__sub_2_distances_BasicLocationFunctions_Pkg.h"
#include "MLRI__overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"
#include "MLRI__add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "MLRI__calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* =====================  no input structure  ====================== */


/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern */
extern void MLRI__recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::BG_in */MLRI__positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::prevLinkedBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *prevLinkedBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::refBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *refBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::sumOfBestDistances */MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfBestDistances,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::BG_out */MLRI__positionedBG_T_TrainPosition_Types_Pck *BG_out);

#endif /* _MLRI__recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

