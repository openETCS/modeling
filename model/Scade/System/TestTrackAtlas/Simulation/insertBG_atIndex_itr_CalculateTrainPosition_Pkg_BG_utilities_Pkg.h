/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::cont */ cont;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::BG_out */ BG_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::IfBlock1::then::_L2 */ _L2_IfBlock1;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::IfBlock1::else */ else_clock_IfBlock1;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::IfBlock1::else::else::_L1 */ _L13_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::IfBlock1::else::else::_L2 */ _L22_IfBlock1;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::IfBlock1::else::then::_L2 */ _L21_IfBlock1;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::IfBlock1::else::then::_L3 */ _L3_IfBlock1;
} outC_insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr */
extern void insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::iteratorIndex */kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::indexOfBG */kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::BG_toBeInserted */positionedBG_T_TrainPosition_Types_Pck *BG_toBeInserted,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::BG_in */positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr::BG_shifted_in */positionedBG_T_TrainPosition_Types_Pck *BG_shifted_in,
  outC_insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void insertBG_atIndex_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

