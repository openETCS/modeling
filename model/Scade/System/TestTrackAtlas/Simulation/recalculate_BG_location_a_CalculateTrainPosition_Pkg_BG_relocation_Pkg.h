/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _recalculate_BG_location_a_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _recalculate_BG_location_a_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::BG_out */ BG_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* 1 */ _5_Context_1;
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* 3 */ _4_Context_3;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* 3 */ Context_3;
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg /* 1 */ _3_Context_1;
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* 1 */ _2_Context_1;
  outC_calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg /* 1 */ _1_Context_1;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L162 */ _L162;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L164 */ _L164;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L165 */ _L165;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L166 */ _L166;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L168 */ _L168;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L171 */ _L171;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L172 */ _L172;
  Q_LINK /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L176 */ _L176;
  Q_LINK /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L175 */ _L175;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L174 */ _L174;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L177 */ _L177;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L178 */ _L178;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L179 */ _L179;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L180 */ _L180;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L181 */ _L181;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L182 */ _L182;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L183 */ _L183;
  trainProperties_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L184 */ _L184;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L185 */ _L185;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L186 */ _L186;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L187 */ _L187;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L188 */ _L188;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L189 */ _L189;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L190 */ _L190;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L191 */ _L191;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L194 */ _L194;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L193 */ _L193;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L192 */ _L192;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L195 */ _L195;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L196 */ _L196;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L197 */ _L197;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L198 */ _L198;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L199 */ _L199;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L200 */ _L200;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L203 */ _L203;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L204 */ _L204;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L205 */ _L205;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L208 */ _L208;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L210 */ _L210;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L212 */ _L212;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L211 */ _L211;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L213 */ _L213;
  kcg_bool /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L214 */ _L214;
} outC_recalculate_BG_location_a_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern */
extern void recalculate_BG_location_a_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::BG_in */positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::prevLinkedBG */positionedBG_T_TrainPosition_Types_Pck *prevLinkedBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::refBG */positionedBG_T_TrainPosition_Types_Pck *refBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::sumOfBestDistances */LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfBestDistances,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_recalculate_BG_location_a_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

extern void recalculate_BG_location_a_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_location_a_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC);

#endif /* _recalculate_BG_location_a_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** recalculate_BG_location_a_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

