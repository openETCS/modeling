/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ODO_Toolbox_TrainModules_H_
#define _ODO_Toolbox_TrainModules_H_

#include "kcg_types.h"
#include "ODO_genOdometryInaccuracies_Toolbox_Functions.h"
#include "ODO_genSpeedInaccuracies_Toolbox_Functions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Toolbox::TrainModules::ODO */
extern void ODO_Toolbox_TrainModules(
  /* Toolbox::TrainModules::ODO::timestamp */ T_internal_Type_Obu_BasicTypes_Pkg timestamp,
  /* Toolbox::TrainModules::ODO::velocity */ OdometrySpeed_T_Toolbox velocity,
  /* Toolbox::TrainModules::ODO::acceleration */ A_internal_Type_Obu_BasicTypes_Pkg acceleration,
  /* Toolbox::TrainModules::ODO::position */ L_internal_Type_Obu_BasicTypes_Pkg position,
  /* Toolbox::TrainModules::ODO::motionDirection */ odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection,
  /* Toolbox::TrainModules::ODO::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry);

#endif /* _ODO_Toolbox_TrainModules_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_Toolbox_TrainModules.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

