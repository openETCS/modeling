/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _calculateTrainpositionAttributes_CalculateTrainPosition_Pkg_H_
#define _calculateTrainpositionAttributes_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg.h"
#include "trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg.h"

/* =====================  no input structure  ====================== */


/* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes */
extern void calculateTrainpositionAttributes_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPositionInfo */trainPositionInfo_T_TrainPosition_Types_Pck *trainPositionInfo,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::currentOdometry */odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition);

#endif /* _calculateTrainpositionAttributes_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculateTrainpositionAttributes_CalculateTrainPosition_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

