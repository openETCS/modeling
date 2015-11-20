/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _storeDriverInput_trainData_pkg_H_
#define _storeDriverInput_trainData_pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* trainData_pkg::storeDriverInput */
extern void storeDriverInput_trainData_pkg(
  /* trainData_pkg::storeDriverInput::fromDMI_TrainData */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *fromDMI_TrainData,
  /* trainData_pkg::storeDriverInput::trainDataAckfromDriver */ DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* trainData_pkg::storeDriverInput::originalTrainData */ trainData_T_TIU_Types_Pkg *originalTrainData,
  /* trainData_pkg::storeDriverInput::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::storeDriverInput::trainDataForEVC */ trainData_T_TIU_Types_Pkg *_2_trainDataForEVC,
  /* trainData_pkg::storeDriverInput::updatedStatus */ trainDataStatus_T_trainData_Types_pkg *updatedStatus);

#endif /* _storeDriverInput_trainData_pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** storeDriverInput_trainData_pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

