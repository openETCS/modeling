/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendTrainData_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::sendTrainData */
void sendTrainData_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendTrainData::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::sendTrainData::trainDataFromEVC */ trainData_T_TIU_Types_Pkg *trainDataFromEVC,
  /* manage_DMI_Output_Pkg::sendTrainData::trainData_ForDMI */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainData_ForDMI)
{
  (*trainData_ForDMI).valid = (*trainDataFromEVC).valid;
  (*trainData_ForDMI).systemTime = inSystemTime;
  (*trainData_ForDMI).trainCategory = (*trainDataFromEVC).trainCategory;
  (*trainData_ForDMI).l_train = (*trainDataFromEVC).trainLength;
  (*trainData_ForDMI).m_brakeperct = (*trainDataFromEVC).brakePerctage;
  (*trainData_ForDMI).v_maxTrain = (*trainDataFromEVC).maxTrainSpeed;
  (*trainData_ForDMI).m_axleLoad = (*trainDataFromEVC).axleLoadCategory;
  (*trainData_ForDMI).m_airTight = (*trainDataFromEVC).airtightSystem;
  (*trainData_ForDMI).m_loadingGauge = (*trainDataFromEVC).loadingGauge;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** sendTrainData_manage_DMI_Output_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

