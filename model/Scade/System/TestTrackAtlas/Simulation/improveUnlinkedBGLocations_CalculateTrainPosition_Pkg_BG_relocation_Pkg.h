/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "_6_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::BGs_out */ BGs_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__6_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* 1 */ _1_Context_1[8];
  outC_findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::_L2 */ _L2;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::_L3 */ _L3;
  array__16894 /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::_L5 */ _L5;
  kcg_int /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::_L6 */ _L6;
  array__17552 /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::_L8 */ _L8;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::_L12 */ _L12;
} outC_improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations */
extern void improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

extern void improveUnlinkedBGLocations_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

#endif /* _improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

