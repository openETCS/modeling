/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::sumOfLinkingDistances */ sumOfLinkingDistances;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::linkedPositionedBG */ linkedPositionedBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* 1 */ _2_Context_1;
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg /* 1 */ Context_1;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* 3 */ Context_3;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* 4 */ Context_4;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* 2 */ _1_Context_2;
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L1 */ _L1;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L2 */ _L2;
  LinkedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L3 */ _L3;
  infoFromLinking_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L17 */ _L17;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L16 */ _L16;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L15 */ _L15;
  Q_LINK /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L14 */ _L14;
  NID_BG /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L13 */ _L13;
  NID_C /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L12 */ _L12;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L11 */ _L11;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L32 */ _L32;
  infoFromLinking_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L84 */ _L84;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L85 */ _L85;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L86 */ _L86;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L87 */ _L87;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L89 */ _L89;
  LinkedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L90 */ _L90;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L113 */ _L113;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L114 */ _L114;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L117 */ _L117;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L119 */ _L119;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L120 */ _L120;
  trainProperties_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L121 */ _L121;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L122 */ _L122;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L123 */ _L123;
  Q_SCALE /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L124 */ _L124;
  D_LINK /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L125 */ _L125;
  Q_LOCACC /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L126 */ _L126;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L127 */ _L127;
  NID_C /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L128 */ _L128;
  LinkedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L129 */ _L129;
  NID_BG /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L130 */ _L130;
} outC_positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr */
extern void positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::sumOfPrevLinkingDistances */LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfPrevLinkingDistances,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::passedPositionedBG */positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::linkedBG */LinkedBG_T_BG_Types_Pkg *linkedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void positionLinkedBGs_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

