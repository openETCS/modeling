/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg.h"

void frontendToLRBG_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  /* 1 */ sub_2_distances_reset_BasicLocationFunctions_Pkg(&outC->_1_Context_1);
  /* 1 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->Context_1);
}

/* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG */
void frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::LRBG */positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::trainPositionInfo */trainPositionInfo_T_TrainPosition_Types_Pck *trainPositionInfo,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::nominalOrReverseToLRBG */ Q_DLRBG _1_nominalOrReverseToLRBG;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::nominalOrReverseToLRBG */ Q_DLRBG nominalOrReverseToLRBG;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::nominalOrReverseToLRBG */ Q_DLRBG _2_nominalOrReverseToLRBG;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::nominalOrReverseToLRBG */ Q_DLRBG _3_nominalOrReverseToLRBG;
  
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &outC->_L1,
    trainPositionInfo);
  outC->_L2 = outC->_L1.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L7, LRBG);
  outC->_L8 = outC->_L7.valid;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L12, &outC->_L7.infoFromPassing);
  outC->_L13 = outC->_L12.valid;
  outC->_L18 = outC->_L2 & outC->_L8 & outC->_L13;
  outC->_L14 = outC->_L12.BG_Header.trainOrientationToBG;
  outC->_L17 = Q_DIRLRBG_Unknown;
  if (outC->_L18) {
    outC->_L19 = outC->_L14;
  }
  else {
    outC->_L19 = outC->_L17;
  }
  outC->trainOrientationToLRBG = outC->_L19;
  outC->IfBlock1_clock = outC->trainOrientationToLRBG == Q_DIRLRBG_Nominal;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L3,
    &outC->_L1.trainPosition);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L4,
    trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L5,
    &outC->_L4.d_baliseAntenna_2_frontend);
  /* 1 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L3,
    &outC->_L5,
    &outC->Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L6,
    &outC->Context_1.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L9, &outC->_L7.location);
  /* 1 */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L6,
    &outC->_L9,
    &outC->_1_Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L10,
    &outC->_1_Context_1.distance);
  outC->_L11 = outC->_L10.nominal;
  outC->estimated_d_LRBGToFrontend = outC->_L11;
  if (outC->IfBlock1_clock) {
    outC->_L1_IfBlock1 = outC->estimated_d_LRBGToFrontend;
    outC->_L3_IfBlock1 = 0;
    outC->_L2_IfBlock1 = outC->_L1_IfBlock1 > outC->_L3_IfBlock1;
    outC->_L5_IfBlock1 = Q_DLRBG_Nominal;
    outC->_L6_IfBlock1 = Q_DLRBG_Reverse;
    if (outC->_L2_IfBlock1) {
      outC->_L4_IfBlock1 = outC->_L5_IfBlock1;
    }
    else {
      outC->_L4_IfBlock1 = outC->_L6_IfBlock1;
    }
    _1_nominalOrReverseToLRBG = outC->_L4_IfBlock1;
    outC->nominalOrReverseToLRBG = _1_nominalOrReverseToLRBG;
  }
  else {
    outC->else_clock_IfBlock1 = outC->trainOrientationToLRBG ==
      Q_DIRLRBG_Reverse;
    if (outC->else_clock_IfBlock1) {
      outC->_L52_IfBlock1 = outC->estimated_d_LRBGToFrontend;
      outC->_L63_IfBlock1 = 0;
      outC->_L10_IfBlock1 = outC->_L52_IfBlock1 > outC->_L63_IfBlock1;
      outC->_L9_IfBlock1 = Q_DLRBG_Reverse;
      outC->_L8_IfBlock1 = Q_DLRBG_Nominal;
      if (outC->_L10_IfBlock1) {
        outC->_L7_IfBlock1 = outC->_L9_IfBlock1;
      }
      else {
        outC->_L7_IfBlock1 = outC->_L8_IfBlock1;
      }
      _3_nominalOrReverseToLRBG = outC->_L7_IfBlock1;
      nominalOrReverseToLRBG = _3_nominalOrReverseToLRBG;
    }
    else {
      outC->_L14_IfBlock1 = Q_DLRBG_Unknown;
      _2_nominalOrReverseToLRBG = outC->_L14_IfBlock1;
      nominalOrReverseToLRBG = _2_nominalOrReverseToLRBG;
    }
    outC->nominalOrReverseToLRBG = nominalOrReverseToLRBG;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

