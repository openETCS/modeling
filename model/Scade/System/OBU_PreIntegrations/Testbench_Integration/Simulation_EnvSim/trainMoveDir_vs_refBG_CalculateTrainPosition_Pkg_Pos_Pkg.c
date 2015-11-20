/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg.h"

/* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG */
Q_DIRTRAIN trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::currentOdometry */odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::refBG */positionedBG_T_TrainPosition_Types_Pck *refBG)
{
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::direction */
  static Q_DIRTRAIN direction;
  
  if (((*currentOdometry).motionDirection ==
      unknownDirection_Obu_BasicTypes_Pkg) | !(*currentOdometry).valid |
    !(*refBG).valid | !(*refBG).infoFromPassing.valid |
    !(*refBG).infoFromPassing.BG_Header.valid |
    !(*refBG).infoFromPassing.BG_Header.bgPosition.valid) {
    direction = Q_DIRTRAIN_Unknown;
  }
  else if ((*currentOdometry).motionDirection ==
    (*refBG).infoFromPassing.BG_Header.bgPosition.motionDirection) {
    direction = (*refBG).infoFromPassing.BG_Header.trainRunningDirectionToBG;
  }
  else {
    direction = /* 1 */
      invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg(
        (*refBG).infoFromPassing.BG_Header.trainRunningDirectionToBG);
  }
  return direction;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

