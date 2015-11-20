/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trainDataStorage_trainData_pkg.h"

void trainDataStorage_reset_trainData_pkg(
  outC_trainDataStorage_trainData_pkg *outC)
{
  outC->init = kcg_true;
}

/* trainData_pkg::trainDataStorage */
void trainDataStorage_trainData_pkg(
  /* trainData_pkg::trainDataStorage::reset */kcg_bool reset,
  /* trainData_pkg::trainDataStorage::trainDatafromTIU */trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainData_pkg::trainDataStorage::trainDatafromDriver */DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainDatafromDriver,
  /* trainData_pkg::trainDataStorage::trainDataAckfromDriver */DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* trainData_pkg::trainDataStorage::actualStatus */trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::trainDataStorage::eventsForTrainData */trainData_Events_T_trainData_Types_pkg *eventsForTrainData,
  outC_trainDataStorage_trainData_pkg *outC)
{
  /* trainData_pkg::trainDataStorage::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* trainData_pkg::trainDataStorage::trainData */
  static trainData_T_TIU_Types_Pkg last_trainData;
  /* trainData_pkg::trainDataStorage::dataFromTIU */
  static kcg_bool dataFromTIU;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &last_trainData,
      (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
  }
  else {
    kcg_copy_trainData_T_TIU_Types_Pkg(&last_trainData, &outC->actualTrainData);
  }
  dataFromTIU = (*trainDatafromTIU).valid & !(*actualStatus).valid;
  if (dataFromTIU) {
    /* 1 */
    storeTIUData_trainData_pkg(
      trainDatafromTIU,
      &last_trainData,
      actualStatus,
      &outC->actualTrainData,
      &outC->updatedStatus);
  }
  else {
    else_clock_IfBlock1 = (*actualStatus).valid &
      ((*trainDatafromDriver).valid | (*trainDataAckfromDriver).valid);
    if (else_clock_IfBlock1) {
      /* 1 */
      storeDriverInput_trainData_pkg(
        trainDatafromDriver,
        trainDataAckfromDriver,
        &last_trainData,
        actualStatus,
        &outC->actualTrainData,
        &outC->updatedStatus);
    }
    else if (reset) {
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &outC->updatedStatus,
        (trainDataStatus_T_trainData_Types_pkg *)
          &cNoStates_trainData_Types_pkg);
      kcg_copy_trainData_T_TIU_Types_Pkg(
        &outC->actualTrainData,
        (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
    }
    else {
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &outC->updatedStatus,
        actualStatus);
      kcg_copy_trainData_T_TIU_Types_Pkg(
        &outC->actualTrainData,
        &last_trainData);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** trainDataStorage_trainData_pkg.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

