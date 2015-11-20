/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:03
*************************************************************$ */
#ifndef _ODO_Toolbox_TrainModules_H_
#define _ODO_Toolbox_TrainModules_H_

#include "kcg_types.h"
#include "ODO_genOdometryInaccuracies_Toolbox_Functions.h"
#include "ODO_genSpeedInaccuracies_Toolbox_Functions.h"

/* =====================  no input structure  ====================== */


/* Toolbox::TrainModules::ODO */
extern void ODO_Toolbox_TrainModules(
  /* Toolbox::TrainModules::ODO::timestamp */T_internal_Type_Obu_BasicTypes_Pkg timestamp,
  /* Toolbox::TrainModules::ODO::velocity */OdometrySpeed_T_Toolbox velocity,
  /* Toolbox::TrainModules::ODO::acceleration */A_internal_Type_Obu_BasicTypes_Pkg acceleration,
  /* Toolbox::TrainModules::ODO::position */L_internal_Type_Obu_BasicTypes_Pkg position,
  /* Toolbox::TrainModules::ODO::motionDirection */odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection,
  /* Toolbox::TrainModules::ODO::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry);

#endif /* _ODO_Toolbox_TrainModules_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_Toolbox_TrainModules.h
** Generation date: 2015-11-20T19:47:03
*************************************************************$ */

