/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "buildOdometryPacket.h"

/* buildOdometryPacket */
void buildOdometryPacket(
  /* buildOdometryPacket::timestamp */ T_internal_Type_Obu_BasicTypes_Pkg timestamp,
  /* buildOdometryPacket::velocity */ Speed_T_Obu_BasicTypes_Pkg velocity,
  /* buildOdometryPacket::acceleration */ A_internal_Type_Obu_BasicTypes_Pkg acceleration,
  /* buildOdometryPacket::position */ L_internal_Type_Obu_BasicTypes_Pkg position,
  /* buildOdometryPacket::motionDirection */ odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection,
  /* buildOdometryPacket::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry)
{
  (*odometry).valid = kcg_true;
  (*odometry).timestamp = timestamp;
  (*odometry).acceleration = acceleration;
  (*odometry).motionDirection = motionDirection;
  /* 1 */
  genOdometryLocations(
    position,
    (odometryFactors_T *) &cOdometryFactors,
    &(*odometry).odo);
  /* 1 */
  genSpeedInaccuracies(
    velocity,
    (odometryFactors_T *) &cOdometryFactors,
    &(*odometry).speed);
  if (velocity > 0) {
    (*odometry).motionState = Motion_Obu_BasicTypes_Pkg;
  }
  else {
    (*odometry).motionState = noMotion_Obu_BasicTypes_Pkg;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** buildOdometryPacket.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

