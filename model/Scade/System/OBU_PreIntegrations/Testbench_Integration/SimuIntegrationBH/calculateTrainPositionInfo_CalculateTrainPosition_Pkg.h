/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _calculateTrainPositionInfo_CalculateTrainPosition_Pkg_H_
#define _calculateTrainPositionInfo_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"
#include "positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg /* 1 */ _1_Context_1;
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1;
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
extern void calculateTrainPositionInfo_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::recalculateBGs */ kcg_bool recalculateBGs,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::passedBG */ positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::reset */ kcg_bool reset,
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void calculateTrainPositionInfo_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void calculateTrainPositionInfo_init_CalculateTrainPosition_Pkg(
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _calculateTrainPositionInfo_CalculateTrainPosition_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** calculateTrainPositionInfo_CalculateTrainPosition_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

