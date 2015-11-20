/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "storeTIUData_trainData_pkg.h"

/* trainData_pkg::storeTIUData */
void storeTIUData_trainData_pkg(
  /* trainData_pkg::storeTIUData::trainDatafromTIU */trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainData_pkg::storeTIUData::originalTrainData */trainData_T_TIU_Types_Pkg *originalTrainData,
  /* trainData_pkg::storeTIUData::actualStatus */trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::storeTIUData::actualTrainData */trainData_T_TIU_Types_Pkg *actualTrainData,
  /* trainData_pkg::storeTIUData::updatedStatus */trainDataStatus_T_trainData_Types_pkg *updatedStatus)
{
  kcg_copy_trainData_T_TIU_Types_Pkg(actualTrainData, trainDatafromTIU);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    updatedStatus,
    (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
  (*updatedStatus).valid = kcg_true;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** storeTIUData_trainData_pkg.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

