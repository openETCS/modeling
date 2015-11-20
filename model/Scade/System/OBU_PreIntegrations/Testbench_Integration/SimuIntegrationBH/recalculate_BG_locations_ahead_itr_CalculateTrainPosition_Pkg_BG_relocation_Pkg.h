/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"
#include "positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr */
extern void recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refBGs_in */ refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *refBGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::BG_in */ positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refBGs_out */ refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *refBGs_out,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::BG_out */ positionedBG_T_TrainPosition_Types_Pck *BG_out);

#endif /* _recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

