/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeTrainData_input_from_TIU_API_Pkg.h"

/* input_from_TIU_API_Pkg::mergeTrainData */
void mergeTrainData_input_from_TIU_API_Pkg(
  /* input_from_TIU_API_Pkg::mergeTrainData::newTIUTrainData */ trainData_T_TIU_Types_Pkg *newTIUTrainData,
  /* input_from_TIU_API_Pkg::mergeTrainData::newDMITrainData */ trainData_T_TIU_Types_Pkg *newDMITrainData,
  /* input_from_TIU_API_Pkg::mergeTrainData::oldTrainData */ trainData_T_TIU_Types_Pkg *oldTrainData,
  /* input_from_TIU_API_Pkg::mergeTrainData::outTrainData */ trainData_T_TIU_Types_Pkg *outTrainData)
{
  if ((*newDMITrainData).valid & (*newDMITrainData).acknowledgedByDriver) {
    kcg_copy_trainData_T_TIU_Types_Pkg(outTrainData, newDMITrainData);
  }
  else if ((*newTIUTrainData).valid) {
    kcg_copy_trainData_T_TIU_Types_Pkg(outTrainData, newTIUTrainData);
  }
  else if ((*newDMITrainData).valid) {
    kcg_copy_trainData_T_TIU_Types_Pkg(outTrainData, newDMITrainData);
  }
  else {
    kcg_copy_trainData_T_TIU_Types_Pkg(outTrainData, oldTrainData);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** mergeTrainData_input_from_TIU_API_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

