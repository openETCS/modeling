/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_out */ BGs_out;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::overrun */ overrun;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1[8];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L1 */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L2 */ _L2;
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L7 */ _L7;
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L8 */ _L8;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L9 */ _L9;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L13 */ _L13;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L12 */ _L12;
} outC_mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack */
extern void mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_1 */positionedBGs_T_TrainPosition_Types_Pck *BGs_1,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_2 */positionedBGs_T_TrainPosition_Types_Pck *BGs_2,
  outC_mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void mergeBGs_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

