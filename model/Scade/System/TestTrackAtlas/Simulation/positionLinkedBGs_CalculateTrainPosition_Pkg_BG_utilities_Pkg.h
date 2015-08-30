/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::linkedPositionedBGs */ linkedPositionedBGs;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1[4];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L1 */ _L1;
  LinkedBGs_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L2 */ _L2;
  array__16944 /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L3 */ _L3;
  array__16944 /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L4 */ _L4;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L6 */ _L6;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L7 */ _L7;
  trainProperties_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L8 */ _L8;
  array__17537 /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L9 */ _L9;
} outC_positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs */
extern void positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::passedPositionedBG */positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::linkedBGs */LinkedBGs_T_BG_Types_Pkg *linkedBGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void positionLinkedBGs_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

