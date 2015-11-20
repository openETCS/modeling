/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendTrainData_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::sendTrainData */
void sendTrainData_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendTrainData::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::sendTrainData::trainDataFromEVC */trainData_T_TIU_Types_Pkg *trainDataFromEVC,
  /* manage_DMI_Output_Pkg::sendTrainData::trainData_ForDMI */DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainData_ForDMI)
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** sendTrainData_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

