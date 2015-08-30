/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _genPassedBG_SeqNo_CalculateTrainPosition_Pkg_H_
#define _genPassedBG_SeqNo_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::seqNo */ seqNo;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg /* 1 */ _1_Context_1;
  outC_indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::keepPassedBGSeqNo */ keepPassedBGSeqNo;
  kcg_bool /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::incrPassedBGSeqNo */ incrPassedBGSeqNo;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L1 */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L2 */ _L2;
  kcg_bool /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L3 */ _L3;
  kcg_bool /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L6 */ _L6;
  kcg_bool /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L5 */ _L5;
  kcg_int /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L4 */ _L4;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L8 */ _L8;
  kcg_bool /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L9 */ _L9;
  kcg_bool /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L10 */ _L10;
  kcg_bool /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L11 */ _L11;
  kcg_bool /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L12 */ _L12;
  kcg_bool /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L13 */ _L13;
  kcg_bool /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L14 */ _L14;
  kcg_bool /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L15 */ _L15;
  kcg_bool /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L16 */ _L16;
  kcg_bool /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L17 */ _L17;
  kcg_bool /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L18 */ _L18;
  kcg_int /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L19 */ _L19;
  kcg_int /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L20 */ _L20;
  kcg_int /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L21 */ _L21;
  kcg_bool /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L22 */ _L22;
} outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::genPassedBG_SeqNo */
extern void genPassedBG_SeqNo_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::reset */kcg_bool reset,
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC);

extern void genPassedBG_SeqNo_reset_CalculateTrainPosition_Pkg(
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC);

#endif /* _genPassedBG_SeqNo_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** genPassedBG_SeqNo_CalculateTrainPosition_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

