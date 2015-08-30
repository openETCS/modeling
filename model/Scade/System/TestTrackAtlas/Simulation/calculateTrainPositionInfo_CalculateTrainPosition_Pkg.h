/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _calculateTrainPositionInfo_CalculateTrainPosition_Pkg_H_
#define _calculateTrainPositionInfo_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainPositionInfo_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::trainPositionInfo */ trainPositionInfo;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::positionCalculationNotConsistent */ positionCalculationNotConsistent;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L62 */ _L62;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L61 */ _L61;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L70 */ _L70;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L71 */ _L71;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* 1 */ _4_Context_1;
  outC_positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 2 */ _3_Context_2;
  outC_positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _2_Context_1;
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg /* 1 */ _1_Context_1;
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 2 */ Context_2;
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  kcg_bool tmp5;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L1 */ _L1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L7 */ _L7;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L8 */ _L8;
  trainPositionInfo_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L9 */ _L9;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L10 */ _L10;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L11 */ _L11;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L12 */ _L12;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L13 */ _L13;
  T_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L14 */ _L14;
  V_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L15 */ _L15;
  odometry_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L28 */ _L28;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L56 */ _L56;
  odometry_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L57 */ _L57;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L58 */ _L58;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L59 */ _L59;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L68 */ _L68;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L67 */ _L67;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L66 */ _L66;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L65 */ _L65;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L64 */ _L64;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L63 */ _L63;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L76 */ _L76;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L75 */ _L75;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L74 */ _L74;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L73 */ _L73;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L72 */ _L72;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L69 */ _L69;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L77 */ _L77;
} outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
extern void calculateTrainPositionInfo_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::currentOdometry */odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::recalculateBGs */kcg_bool recalculateBGs,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::passedBG */positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::reset */kcg_bool reset,
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC);

extern void calculateTrainPositionInfo_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC);

#endif /* _calculateTrainPositionInfo_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculateTrainPositionInfo_CalculateTrainPosition_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

