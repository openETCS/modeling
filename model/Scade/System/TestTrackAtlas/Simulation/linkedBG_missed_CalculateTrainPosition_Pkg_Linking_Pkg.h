/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */
#ifndef _linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg_H_
#define _linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg_H_

#include "kcg_types.h"
#include "posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"
#include "FallingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::missed */ missed;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::indexOfBG */ indexOfBG;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::BG */ BG;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L3 */ _L3;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L2 */ _L2;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::position */ rem_position;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FallingEdge_digital /* 1 */ _2_Context_1;
  outC_positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _1_Context_1;
  outC_posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1;
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L12 */ _L12_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L11 */ _L11_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L10 */ _L10_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L9 */ _L9_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L8 */ _L8_IfBlock1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L6 */ _L6_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L3 */ _L3_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L4 */ _L4_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L5 */ _L5_IfBlock1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L1 */ _L1_IfBlock1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L2 */ _L2_IfBlock1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L3 */ _L33_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L4 */ _L44_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L7 */ _L7_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L6 */ _L65_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L5 */ _L56_IfBlock1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L8 */ _L87_IfBlock1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L9 */ _L98_IfBlock1;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L10 */ _L109_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L13 */ _L13_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L12 */ _L1210_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L11 */ _L1111_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1 */ IfBlock1_clock;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::movedAhead */ movedAhead;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::weakenedPosition */ weakenedPosition;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L1 */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L5 */ _L5;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L6 */ _L6;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L7 */ _L7;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L8 */ _L8;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L10 */ _L10;
  Q_LINK /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L11 */ _L11;
  Q_LINK /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L15 */ _L15;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L16 */ _L16;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L17 */ _L17;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L18 */ _L18;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L19 */ _L19;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L51 */ _L51;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L57 */ _L57;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L56 */ _L56;
  L_internal_Type_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L55 */ _L55;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L54 */ _L54;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L53 */ _L53;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L52 */ _L52;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L58 */ _L58;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L59 */ _L59;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L60 */ _L60;
} outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed */
extern void linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::position */LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::enable */kcg_bool enable,
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);

extern void linkedBG_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);

#endif /* _linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

