/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BGs_out */ BGs_out;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::overrun */ overrun;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _1_Context_1[8];
  outC_positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L1 */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L2 */ _L2;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L3 */ _L3;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L4 */ _L4;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L5 */ _L5;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L6 */ _L6;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L7 */ _L7;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L8 */ _L8;
  array_int_8 /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L9 */ _L9;
  array__17543 /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L10 */ _L10;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L11 */ _L11;
  array__17546 /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L12 */ _L12;
  array__16894 /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L13 */ _L13;
  array__16894 /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L15 */ _L15;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L16 */ _L16;
  array__16894 /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L17 */ _L17;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L18 */ _L18;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L19 */ _L19;
  array__16894 /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L20 */ _L20;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L21 */ _L21;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L22 */ _L22;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L23 */ _L23;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L25 */ _L25;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L26 */ _L26;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L27 */ _L27;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L28 */ _L28;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L29 */ _L29;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L30 */ _L30;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L31 */ _L31;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L32 */ _L32;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L33 */ _L33;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L34 */ _L34;
} outC_insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex */
extern void insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::indexOfBG */kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::insert */kcg_bool insert,
  outC_insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void insertBG_atIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

