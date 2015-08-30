/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _passedBG_2_positionedBG_CalculateTrainPosition_Pkg_H_
#define _passedBG_2_positionedBG_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"
#include "add_odo_2_Location_BasicLocationFunctions_Pkg.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedPositionedBG */ passedPositionedBG;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */ foundNotWhereAnnounced;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::BGpassedInUnexpectedDirection */ BGpassedInUnexpectedDirection;
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::linkedBGs */ linkedBGs;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1;
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* 4 */ Context_4;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* 9 */ Context_9;
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg /* 8 */ Context_8;
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* 5 */ _2_Context_5;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* 13 */ Context_13;
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg /* 5 */ Context_5;
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* 6 */ _1_Context_6;
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* 3 */ Context_3;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* 14 */ Context_14;
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg /* 6 */ Context_6;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else */ _3_else_clock_ifAnnouncedOrABGWasPreviouslyPassed;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else */ else_clock_ifAnnouncedOrABGWasPreviouslyPassed;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed */ ifAnnouncedOrABGWasPreviouslyPassed_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L26 */ _L26_ifAnnouncedOrABGWasPreviouslyPassed;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L27 */ _L27_ifAnnouncedOrABGWasPreviouslyPassed;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L20 */ _L20_ifAnnouncedOrABGWasPreviouslyPassed;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L21 */ _L21_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L22 */ _L22_ifAnnouncedOrABGWasPreviouslyPassed;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L23 */ _L23_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L24 */ _L24_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L25 */ _L25_ifAnnouncedOrABGWasPreviouslyPassed;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::then::_L1 */ _L1_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::then::_L2 */ _L2_ifAnnouncedOrABGWasPreviouslyPassed;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L16 */ _L16_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L15 */ _L154_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L1 */ _L17_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L2 */ _L28_ifAnnouncedOrABGWasPreviouslyPassed;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L3 */ _L3_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L4 */ _L4_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L5 */ _L5_ifAnnouncedOrABGWasPreviouslyPassed;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L6 */ _L69_ifAnnouncedOrABGWasPreviouslyPassed;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L7 */ _L710_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L8 */ _L811_ifAnnouncedOrABGWasPreviouslyPassed;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L10 */ _L1012_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L9 */ _L913_ifAnnouncedOrABGWasPreviouslyPassed;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L11 */ _L1114_ifAnnouncedOrABGWasPreviouslyPassed;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L12 */ _L1215_ifAnnouncedOrABGWasPreviouslyPassed;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L13 */ _L1316_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L14 */ _L1417_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L13 */ _L13_ifAnnouncedOrABGWasPreviouslyPassed;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L12 */ _L12_ifAnnouncedOrABGWasPreviouslyPassed;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L11 */ _L11_ifAnnouncedOrABGWasPreviouslyPassed;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L10 */ _L10_ifAnnouncedOrABGWasPreviouslyPassed;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L9 */ _L9_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L8 */ _L8_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L7 */ _L7_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L6 */ _L6_ifAnnouncedOrABGWasPreviouslyPassed;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L14 */ _L14_ifAnnouncedOrABGWasPreviouslyPassed;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L15 */ _L15_ifAnnouncedOrABGWasPreviouslyPassed;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::BG_wasAnnounced */ BG_wasAnnounced;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::location */ location;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedPositionedBG_loc */ passedPositionedBG_loc;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced_loc */ foundNotWhereAnnounced_loc;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::BGpassedInUnexpectedDirection_loc */ BGpassedInUnexpectedDirection_loc;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L14 */ _L14;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L15 */ _L15;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L16 */ _L16;
  NID_C /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L37 */ _L37;
  NID_BG /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L38 */ _L38;
  Q_LINK /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L39 */ _L39;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L40 */ _L40;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L41 */ _L41;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L56 */ _L56;
  NID_BG /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L57 */ _L57;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L58 */ _L58;
  NID_BG /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L59 */ _L59;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L60 */ _L60;
  NID_C /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L61 */ _L61;
  NID_C /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L62 */ _L62;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L63 */ _L63;
  Q_LINK /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L64 */ _L64;
  Q_LINK /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L65 */ _L65;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L66 */ _L66;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L67 */ _L67;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L68 */ _L68;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L181 */ _L181;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L182 */ _L182;
  infoFromLinking_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L183 */ _L183;
  infoFromLinking_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L184 */ _L184;
  infoFromLinking_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L185 */ _L185;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L262 */ _L262;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L264 */ _L264;
  LinkedBGs_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L263 */ _L263;
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L265 */ _L265;
  kcg_int /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L281 */ _L281;
  trainProperties_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L282 */ _L282;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L283 */ _L283;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L284 */ _L284;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L285 */ _L285;
  BG_Header_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L295 */ _L295;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L296 */ _L296;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L297 */ _L297;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L301 */ _L301;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L302 */ _L302;
  Q_LINK /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L303 */ _L303;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L305 */ _L305;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L306 */ _L306;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L307 */ _L307;
  Q_DIRLRBG /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L308 */ _L308;
  Q_LINKORIENTATION /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L309 */ _L309;
  Q_LINKORIENTATION /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L310 */ _L310;
  Q_LINKORIENTATION /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L311 */ _L311;
  Q_DIRLRBG /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L312 */ _L312;
  Q_DIRLRBG /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L313 */ _L313;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L315 */ _L315;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L316 */ _L316;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L317 */ _L317;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L318 */ _L318;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L319 */ _L319;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L320 */ _L320;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L321 */ _L321;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L322 */ _L322;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L325 */ _L325;
  kcg_bool /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L326 */ _L326;
} outC_passedBG_2_positionedBG_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::passedBG_2_positionedBG */
extern void passedBG_2_positionedBG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBG_asAnnounced */positionedBG_T_TrainPosition_Types_Pck *passedBG_asAnnounced,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::previouslyPassedLinkedBG */positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBGSeqNo */kcg_int passedBGSeqNo,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_passedBG_2_positionedBG_CalculateTrainPosition_Pkg *outC);

extern void passedBG_2_positionedBG_reset_CalculateTrainPosition_Pkg(
  outC_passedBG_2_positionedBG_CalculateTrainPosition_Pkg *outC);

#endif /* _passedBG_2_positionedBG_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** passedBG_2_positionedBG_CalculateTrainPosition_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

