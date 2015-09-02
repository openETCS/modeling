/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _addAnnouncedBGs_CalculateTrainPosition_Pkg_H_
#define _addAnnouncedBGs_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::addAnnouncedBGs::BGs_out */ BGs_out;
  kcg_bool /* CalculateTrainPosition_Pkg::addAnnouncedBGs::overrun */ overrun;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _4_Context_1;
  outC_mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _3_Context_1;
  outC_positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _2_Context_1;
  outC_indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _1_Context_1;
  outC_NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::addAnnouncedBGs::lrbg */ lrbg;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L1 */ _L1;
  kcg_bool /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L3 */ _L3;
  LinkedBGs_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L4 */ _L4;
  LinkedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L5 */ _L5;
  kcg_bool /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L6 */ _L6;
  NID_LRBG /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L7 */ _L7;
  NID_BG /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L10 */ _L10;
  NID_C /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L9 */ _L9;
  kcg_bool /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L11 */ _L11;
  kcg_bool /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L14 */ _L14;
  kcg_bool /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L13 */ _L13;
  kcg_int /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L12 */ _L12;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L16 */ _L16;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L17 */ _L17;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L18 */ _L18;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L19 */ _L19;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L20 */ _L20;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L21 */ _L21;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L22 */ _L22;
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L23 */ _L23;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L24 */ _L24;
  trainProperties_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L25 */ _L25;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L36 */ _L36;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L35 */ _L35;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L33 */ _L33;
  kcg_bool /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L34 */ _L34;
  array__16894 /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L29 */ _L29;
  array__16944 /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L26 */ _L26;
  positionedBGs_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L41 */ _L41;
} outC_addAnnouncedBGs_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::addAnnouncedBGs */
extern void addAnnouncedBGs_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_addAnnouncedBGs_CalculateTrainPosition_Pkg *outC);

extern void addAnnouncedBGs_reset_CalculateTrainPosition_Pkg(
  outC_addAnnouncedBGs_CalculateTrainPosition_Pkg *outC);

#endif /* _addAnnouncedBGs_CalculateTrainPosition_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** addAnnouncedBGs_CalculateTrainPosition_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

