/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"
#include "add_odo_2_Location_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */


/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG */
extern void positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::odoPosition */ OdometryLocations_T_Obu_BasicTypes_Pkg *odoPosition,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::passedRefBG */ positionedBG_T_TrainPosition_Types_Pck *passedRefBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::position */ LocWithInAcc_T_Obu_BasicTypes_Pkg *position);

#endif /* _positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

