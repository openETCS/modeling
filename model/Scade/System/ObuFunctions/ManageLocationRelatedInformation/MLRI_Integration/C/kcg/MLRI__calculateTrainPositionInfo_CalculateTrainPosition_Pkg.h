/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__calculateTrainPositionInfo_CalculateTrainPosition_Pkg_H_
#define _MLRI__calculateTrainPositionInfo_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "MLRI__overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"
#include "MLRI__positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "MLRI__indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MLRI__trainPositionInfo_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::trainPositionInfo */ trainPositionInfo;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::positionCalculationNotConsistent */ positionCalculationNotConsistent;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L17 */ _L17;
  kcg_int /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L23 */ _L23;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
extern void MLRI__calculateTrainPositionInfo_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::currentOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::BGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::recalculateBGs */kcg_bool recalculateBGs,
  MLRI__outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC);

extern void MLRI__calculateTrainPositionInfo_reset_CalculateTrainPosition_Pkg(
  MLRI__outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC);

#endif /* _MLRI__calculateTrainPositionInfo_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__calculateTrainPositionInfo_CalculateTrainPosition_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

