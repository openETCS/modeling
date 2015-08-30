/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg_H_
#define _frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg_H_

#include "kcg_types.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_DLRBG /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::nominalOrReverseToLRBG */ nominalOrReverseToLRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* 1 */ _1_Context_1;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_DLRBG /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::then::_L6 */ _L6_IfBlock1;
  Q_DLRBG /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::then::_L5 */ _L5_IfBlock1;
  Q_DLRBG /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::then::_L3 */ _L3_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::then::_L2 */ _L2_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else */ else_clock_IfBlock1;
  Q_DLRBG /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else::else::_L1 */ _L14_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else::then::_L10 */ _L10_IfBlock1;
  Q_DLRBG /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else::then::_L9 */ _L9_IfBlock1;
  Q_DLRBG /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else::then::_L8 */ _L8_IfBlock1;
  Q_DLRBG /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else::then::_L7 */ _L7_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else::then::_L6 */ _L63_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else::then::_L5 */ _L52_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::estimated_d_LRBGToFrontend */ estimated_d_LRBGToFrontend;
  Q_DIRLRBG /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::trainOrientationToLRBG */ trainOrientationToLRBG;
  trainPositionInfo_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L1 */ _L1;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L2 */ _L2;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L3 */ _L3;
  trainProperties_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L4 */ _L4;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L5 */ _L5;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L6 */ _L6;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L7 */ _L7;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L8 */ _L8;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L9 */ _L9;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L10 */ _L10;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L11 */ _L11;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L12 */ _L12;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L13 */ _L13;
  Q_DIRLRBG /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L14 */ _L14;
  Q_DIRLRBG /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L17 */ _L17;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L18 */ _L18;
  Q_DIRLRBG /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L19 */ _L19;
} outC_frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG */
extern void frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::LRBG */positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::trainPositionInfo */trainPositionInfo_T_TrainPosition_Types_Pck *trainPositionInfo,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC);

extern void frontendToLRBG_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC);

#endif /* _frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

