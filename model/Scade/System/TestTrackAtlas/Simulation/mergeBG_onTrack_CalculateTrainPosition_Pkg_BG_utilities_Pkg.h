/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BGs_out */ BGs_out;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::overrun */ overrun;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _2_Context_1;
  outC_deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _1_Context_1;
  outC_indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 2 */ Context_2;
  outC_indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L3 */ _L3;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L2 */ _L2;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L1 */ _L1;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L6 */ _L6;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L5 */ _L5;
  kcg_int /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L4 */ _L4;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L7 */ _L7;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L8 */ _L8;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L9 */ _L9;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L10 */ _L10;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L11 */ _L11;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L12 */ _L12;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L13 */ _L13;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L15 */ _L15;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L16 */ _L16;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L17 */ _L17;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L18 */ _L18;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L19 */ _L19;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L20 */ _L20;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L21 */ _L21;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L22 */ _L22;
} outC_mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack */
extern void mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

extern void mergeBG_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#endif /* _mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

