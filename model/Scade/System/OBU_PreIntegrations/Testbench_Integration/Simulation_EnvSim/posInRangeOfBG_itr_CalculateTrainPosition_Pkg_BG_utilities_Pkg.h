/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */


/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr */
extern void posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::iteratorIndex */kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::prevIndex */kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::position */LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::cont */kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::indexOfBG */kcg_int *indexOfBG);

#endif /* _posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

