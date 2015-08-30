/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::BGs_indices */ BGs_indices;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* 1 */ _1_Context_1[8];
  outC_findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* 1 */ Context_1[8];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array__16918 /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L24 */ _L24;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L23 */ _L23;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L25 */ _L25;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L26 */ _L26;
  array__16918 /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L29 */ _L29;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L28 */ _L28;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L30 */ _L30;
  array__16918 /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L31 */ _L31;
  array__16918 /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L32 */ _L32;
} outC_findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs */
extern void findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

extern void findLinkedBGs_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

#endif /* _findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

