/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _storeDriverInput_trainData_pkg_H_
#define _storeDriverInput_trainData_pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* trainData_pkg::storeDriverInput */
extern void storeDriverInput_trainData_pkg(
  /* trainData_pkg::storeDriverInput::fromDMI_TrainData */DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *fromDMI_TrainData,
  /* trainData_pkg::storeDriverInput::trainDataAckfromDriver */DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* trainData_pkg::storeDriverInput::originalTrainData */trainData_T_TIU_Types_Pkg *originalTrainData,
  /* trainData_pkg::storeDriverInput::actualStatus */trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::storeDriverInput::trainDataForEVC */trainData_T_TIU_Types_Pkg *trainDataForEVC,
  /* trainData_pkg::storeDriverInput::updatedStatus */trainDataStatus_T_trainData_Types_pkg *updatedStatus);

#endif /* _storeDriverInput_trainData_pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** storeDriverInput_trainData_pkg.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

