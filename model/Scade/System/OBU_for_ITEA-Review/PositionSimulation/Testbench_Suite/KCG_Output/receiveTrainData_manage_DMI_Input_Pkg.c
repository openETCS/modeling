/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "receiveTrainData_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::receiveTrainData */
void receiveTrainData_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::receiveTrainData::fromDMI_TrainData */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *fromDMI_TrainData,
  /* manage_DMI_Input_Pkg::receiveTrainData::DMI_EVC_Status */ DMI_EVC_status_T_DMI_Types_Pkg *DMI_EVC_Status,
  /* manage_DMI_Input_Pkg::receiveTrainData::trainDataForEVC */ trainData_T_TIU_Types_Pkg *trainDataForEVC)
{
  (*trainDataForEVC).valid = (*fromDMI_TrainData).valid;
  (*trainDataForEVC).acknowledgedByDriver =
    (*DMI_EVC_Status).DMI_TrainDataValidated;
  (*trainDataForEVC).trainCategory = (*fromDMI_TrainData).trainCategory;
  (*trainDataForEVC).trainLength = (*fromDMI_TrainData).l_train;
  (*trainDataForEVC).brakePerctage = (*fromDMI_TrainData).m_brakeperct;
  (*trainDataForEVC).maxTrainSpeed = (*fromDMI_TrainData).v_maxTrain;
  (*trainDataForEVC).loadingGauge = (*fromDMI_TrainData).m_loadingGauge;
  (*trainDataForEVC).axleLoadCategory = (*fromDMI_TrainData).m_axleLoad;
  (*trainDataForEVC).airtightSystem = (*fromDMI_TrainData).m_airTight;
  (*trainDataForEVC).axleNumber = 0;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** receiveTrainData_manage_DMI_Input_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

