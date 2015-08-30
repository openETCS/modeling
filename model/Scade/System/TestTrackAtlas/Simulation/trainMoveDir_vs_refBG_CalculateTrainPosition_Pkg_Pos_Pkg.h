/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg_H_
#define _trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg_H_

#include "kcg_types.h"
#include "invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_DIRTRAIN /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::direction */ direction;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::refMotionDir */ refMotionDir;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::currMotionDir */ currMotionDir;
  Q_DIRTRAIN /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::refRunningDirectionToBG */ refRunningDirectionToBG;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L7 */ _L7;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L9 */ _L9;
  BG_Header_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L10 */ _L10;
  Q_DIRTRAIN /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L13 */ _L13;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L14 */ _L14;
  odometry_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L15 */ _L15;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L16 */ _L16;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L17 */ _L17;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L18 */ _L18;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L19 */ _L19;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L20 */ _L20;
  Q_DIRTRAIN /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L22 */ _L22;
  Q_DIRTRAIN /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L23 */ _L23;
  Q_DIRTRAIN /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L24 */ _L24;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L25 */ _L25;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L26 */ _L26;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L27 */ _L27;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L29 */ _L29;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L28 */ _L28;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L30 */ _L30;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L31 */ _L31;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L32 */ _L32;
  BG_Header_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L33 */ _L33;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L34 */ _L34;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L35 */ _L35;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L36 */ _L36;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L37 */ _L37;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L39 */ _L39;
  kcg_bool /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L40 */ _L40;
  Q_DIRTRAIN /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L44 */ _L44;
  Q_DIRTRAIN /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L45 */ _L45;
} outC_trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG */
extern void trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::currentOdometry */odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::refBG */positionedBG_T_TrainPosition_Types_Pck *refBG,
  outC_trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC);

extern void trainMoveDir_vs_refBG_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC);

#endif /* _trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

