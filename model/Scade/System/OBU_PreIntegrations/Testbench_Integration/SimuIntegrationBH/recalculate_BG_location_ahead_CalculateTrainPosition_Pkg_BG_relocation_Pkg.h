/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"
#include "calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead */
extern void recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::BG_in */ positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::prevLinkedBG */ positionedBG_T_TrainPosition_Types_Pck *prevLinkedBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::refBG */ positionedBG_T_TrainPosition_Types_Pck *refBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::sumOfBestDistances */ LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfBestDistances,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::BG_out */ positionedBG_T_TrainPosition_Types_Pck *BG_out);

#endif /* _recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

