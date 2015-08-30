/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg_H_
#define _linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg_H_

#include "kcg_types.h"
#include "positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::linkingIsUsed */ linkingIsUsed;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L8 */ _L8;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L7 */ _L7;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L6 */ _L6;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L11 */ _L11;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L10 */ _L10;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L9 */ _L9;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _2_Context_1;
  outC_indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _1_Context_1;
  outC_indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  kcg_bool tmp3;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::lastLinkedBG */ lastLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::lastPassedLinkedBG */ lastPassedLinkedBG;
  odometry_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L1 */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L2 */ _L2;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L3 */ _L3;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L18 */ _L18;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L19 */ _L19;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L22 */ _L22;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L21 */ _L21;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L24 */ _L24;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L23 */ _L23;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L26 */ _L26;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L27 */ _L27;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L28 */ _L28;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L29 */ _L29;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L30 */ _L30;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L33 */ _L33;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L34 */ _L34;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L37 */ _L37;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L40 */ _L40;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L39 */ _L39;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L38 */ _L38;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L41 */ _L41;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L46 */ _L46;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L47 */ _L47;
} outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
extern void linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::currentOdometry */odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::recalculateBGs */kcg_bool recalculateBGs,
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);

extern void linkingIsUsed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);

#endif /* _linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

