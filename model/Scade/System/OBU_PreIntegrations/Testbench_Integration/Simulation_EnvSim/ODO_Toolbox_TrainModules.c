/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_Toolbox_TrainModules.h"

/* Toolbox::TrainModules::ODO */
void ODO_Toolbox_TrainModules(
  /* Toolbox::TrainModules::ODO::timestamp */T_internal_Type_Obu_BasicTypes_Pkg timestamp,
  /* Toolbox::TrainModules::ODO::velocity */OdometrySpeed_T_Toolbox velocity,
  /* Toolbox::TrainModules::ODO::acceleration */A_internal_Type_Obu_BasicTypes_Pkg acceleration,
  /* Toolbox::TrainModules::ODO::position */L_internal_Type_Obu_BasicTypes_Pkg position,
  /* Toolbox::TrainModules::ODO::motionDirection */odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection,
  /* Toolbox::TrainModules::ODO::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry)
{
  (*odometry).valid = kcg_true;
  (*odometry).timestamp = timestamp;
  (*odometry).acceleration = acceleration;
  (*odometry).motionDirection = motionDirection;
  /* 1 */
  ODO_genOdometryInaccuracies_Toolbox_Functions(
    position,
    (odometryFactors_T_Toolbox *) &cOdometryFactors_Toolbox,
    &(*odometry).odo);
  /* 1 */
  ODO_genSpeedInaccuracies_Toolbox_Functions(
    velocity,
    (odometryFactors_T_Toolbox *) &cOdometryFactors_Toolbox,
    &(*odometry).speed);
  if (velocity > 0) {
    (*odometry).motionState = Motion_Obu_BasicTypes_Pkg;
  }
  else {
    (*odometry).motionState = noMotion_Obu_BasicTypes_Pkg;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_Toolbox_TrainModules.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

