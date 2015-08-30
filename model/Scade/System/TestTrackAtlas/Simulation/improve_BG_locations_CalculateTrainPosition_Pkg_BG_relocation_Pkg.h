/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "_9_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "_7_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::BGs_out */ BGs_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* 1 */ _2_Context_1;
  outC__7_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg /* 1 */ _1_Context_1;
  outC__9_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::_L1 */ _L1;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::_L2 */ _L2;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::_L33 */ _L33;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::_L34 */ _L34;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::_L38 */ _L38;
  trainProperties_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::_L39 */ _L39;
} outC_improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations */
extern void improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::referenceBG */positionedBG_T_TrainPosition_Types_Pck *referenceBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

extern void improve_BG_locations_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

#endif /* _improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

