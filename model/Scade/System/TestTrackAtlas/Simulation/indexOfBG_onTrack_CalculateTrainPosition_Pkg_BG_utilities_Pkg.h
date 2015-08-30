/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::indexOfBG */ indexOfBG;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BG_found */ BG_found;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::indexValid */ indexValid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _1_Context_1;
  outC_indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1[8];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::_L1 */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::_L2 */ _L2;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::_L3 */ _L3;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::_L6 */ _L6;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::_L8 */ _L8;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::_L9 */ _L9;
  array__16894 /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::_L11 */ _L11;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::_L12 */ _L12;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::_L17 */ _L17;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::_L18 */ _L18;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::_L19 */ _L19;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::_L20 */ _L20;
} outC_indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack */
extern void indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::enable */kcg_bool enable,
  outC_indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void indexOfBG_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
