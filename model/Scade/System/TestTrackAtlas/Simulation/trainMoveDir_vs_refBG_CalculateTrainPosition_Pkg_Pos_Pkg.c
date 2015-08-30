/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg.h"

void trainMoveDir_vs_refBG_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  /* 1 */
  invert_Q_DIRTRAIN_reset_CalculateTrainPosition_Pkg_Pos_Pkg(&outC->Context_1);
}

/* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG */
void trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::currentOdometry */odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::refBG */positionedBG_T_TrainPosition_Types_Pck *refBG,
  outC_trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  outC->_L45 = Q_DIRTRAIN_Unknown;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L15, currentOdometry);
  outC->_L16 = outC->_L15.motionDirection;
  outC->_L26 = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L27 = outC->_L16 == outC->_L26;
  outC->_L17 = outC->_L15.valid;
  outC->_L25 = !outC->_L17;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L29, refBG);
  outC->_L28 = outC->_L29.valid;
  outC->_L30 = !outC->_L28;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L31, &outC->_L29.infoFromPassing);
  outC->_L32 = outC->_L31.valid;
  outC->_L34 = !outC->_L32;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L33, &outC->_L31.BG_Header);
  outC->_L39 = outC->_L33.valid;
  outC->_L35 = !outC->_L39;
  outC->_L37 = outC->_L33.bgPosition.valid;
  outC->_L40 = !outC->_L37;
  outC->_L36 = outC->_L27 | outC->_L25 | outC->_L30 | outC->_L34 | outC->_L35 |
    outC->_L40;
  outC->currMotionDir = outC->_L16;
  outC->_L18 = outC->currMotionDir;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L7, refBG);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L9, &outC->_L7.infoFromPassing);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L10, &outC->_L9.BG_Header);
  outC->_L14 = outC->_L10.bgPosition.motionDirection;
  outC->refMotionDir = outC->_L14;
  outC->_L19 = outC->refMotionDir;
  outC->_L20 = outC->_L18 == outC->_L19;
  outC->_L13 = outC->_L10.trainRunningDirectionToBG;
  outC->refRunningDirectionToBG = outC->_L13;
  outC->_L23 = outC->refRunningDirectionToBG;
  /* 1 */
  invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg(
    outC->_L23,
    &outC->Context_1);
  outC->_L24 = outC->Context_1.out;
  if (outC->_L20) {
    outC->_L22 = outC->_L23;
  }
  else {
    outC->_L22 = outC->_L24;
  }
  if (outC->_L36) {
    outC->_L44 = outC->_L45;
  }
  else {
    outC->_L44 = outC->_L22;
  }
  outC->direction = outC->_L44;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

