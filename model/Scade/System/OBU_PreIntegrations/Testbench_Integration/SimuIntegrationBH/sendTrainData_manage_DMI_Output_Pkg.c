/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
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
  /* manage_DMI_Output_Pkg::sendTrainData::_L3 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* manage_DMI_Output_Pkg::sendTrainData::_L5 */
  static trainData_T_TIU_Types_Pkg _L5;
  /* manage_DMI_Output_Pkg::sendTrainData::_L6 */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _L6;
  /* manage_DMI_Output_Pkg::sendTrainData::_L7 */
  static kcg_bool _L7;
  /* manage_DMI_Output_Pkg::sendTrainData::_L8 */
  static NC_TRAIN _L8;
  /* manage_DMI_Output_Pkg::sendTrainData::_L9 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L9;
  /* manage_DMI_Output_Pkg::sendTrainData::_L10 */
  static kcg_int _L10;
  /* manage_DMI_Output_Pkg::sendTrainData::_L11 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L11;
  /* manage_DMI_Output_Pkg::sendTrainData::_L12 */
  static M_AXLELOADCAT _L12;
  /* manage_DMI_Output_Pkg::sendTrainData::_L13 */
  static M_AIRTIGHT _L13;
  /* manage_DMI_Output_Pkg::sendTrainData::_L14 */
  static M_LOADINGGAUGE _L14;
  
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L5, trainDataFromEVC);
  _L7 = _L5.valid;
  _L3 = inSystemTime;
  _L8 = _L5.trainCategory;
  _L9 = _L5.trainLength;
  _L10 = _L5.brakePerctage;
  _L11 = _L5.maxTrainSpeed;
  _L12 = _L5.axleLoadCategory;
  _L13 = _L5.airtightSystem;
  _L14 = _L5.loadingGauge;
  _L6.valid = _L7;
  _L6.systemTime = _L3;
  _L6.trainCategory = _L8;
  _L6.l_train = _L9;
  _L6.m_brakeperct = _L10;
  _L6.v_maxTrain = _L11;
  _L6.m_axleLoad = _L12;
  _L6.m_airTight = _L13;
  _L6.m_loadingGauge = _L14;
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(trainData_ForDMI, &_L6);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendTrainData_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

