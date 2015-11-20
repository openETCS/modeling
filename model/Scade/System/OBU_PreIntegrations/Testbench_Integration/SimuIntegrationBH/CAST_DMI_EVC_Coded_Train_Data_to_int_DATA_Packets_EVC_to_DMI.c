/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int */
void CAST_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::dmi_evc_coded_train_data_ct */ DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_coded_train_data_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::dmi_evc_coded_train_data_int */ DMI_EVC_Coded_Train_Data_int_array_T_DATA *dmi_evc_coded_train_data_int)
{
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L1 */
  static DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L1;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L10 */
  static kcg_bool _L10;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L9 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L9;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L8 */
  static DMI_train_id_T_DMI_Types_Pkg _L8;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L7 */
  static DMI_train_length_T_DMI_Types_Pkg _L7;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L6 */
  static DMI_brakeModel_id_T_DMI_Types_Pkg _L6;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L5 */
  static DMI_vMax_id_T_DMI_Types_Pkg _L5;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L4 */
  static M_AXLELOADCAT _L4;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L3 */
  static DMI_airtightSystem_T_DMI_Types_Pkg _L3;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L2 */
  static DMI_loadingGauge_T_DMI_Types_Pkg _L2;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L11 */
  static array_int_9 _L11;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L12 */
  static kcg_int _L12;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L13 */
  static DMI_train_id_INT_T_DATA _L13;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L14 */
  static DMI_train_length_INT_T_DATA _L14;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L15 */
  static DMI_brakeModel_id_INT_T_DATA _L15;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L16 */
  static DMI_vMax_id_INT_T_DATA _L16;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L17 */
  static kcg_int _L17;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L18 */
  static DMI_airtightSystem_INT_T_DATA _L18;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::_L19 */
  static DMI_loadingGauge_INT_T_DATA _L19;
  
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L1,
    dmi_evc_coded_train_data_ct);
  kcg_copy_DMI_loadingGauge_T_DMI_Types_Pkg(&_L2, &_L1.mLoadingGauge);
  kcg_copy_DMI_airtightSystem_T_DMI_Types_Pkg(&_L3, &_L1.airTightSystem);
  _L4 = _L1.mAxleLoad;
  kcg_copy_DMI_vMax_id_T_DMI_Types_Pkg(&_L5, &_L1.vmax);
  kcg_copy_DMI_brakeModel_id_T_DMI_Types_Pkg(&_L6, &_L1.brakeModel);
  kcg_copy_DMI_train_length_T_DMI_Types_Pkg(&_L7, &_L1.trainLength);
  kcg_copy_DMI_train_id_T_DMI_Types_Pkg(&_L8, &_L1.trainID);
  _L9 = _L1.system_clock;
  _L10 = _L1.valid;
  _L12 = /* 1 */ Bool_to_Int_Utilities(_L10);
  _L13 = /* 1 */ CAST_DMI_train_id_to_int_DATA_Variables(&_L8);
  _L14 = /* 1 */ CAST_DMI_train_length_to_int_DATA_Variables(&_L7);
  _L15 = /* 1 */ CAST_DMI_brakeModel_id_to_int_DATA_Variables(&_L6);
  _L16 = /* 1 */ CAST_DMI_vMax_id_to_int_DATA_Variables(&_L5);
  _L17 = /* 1 */ CAST_M_AXLELOADCAT_to_int_TM_conversions(_L4);
  _L18 = /* 1 */ CAST_DMI_airtightSystem_to_int_DATA_Variables(&_L3);
  _L19 = /* 1 */ CAST_DMI_loadingGauge_to_int_DATA_Variables(&_L2);
  _L11[0] = _L12;
  _L11[1] = _L9;
  _L11[2] = _L13;
  _L11[3] = _L14;
  _L11[4] = _L15;
  _L11[5] = _L16;
  _L11[6] = _L17;
  _L11[7] = _L18;
  _L11[8] = _L19;
  kcg_copy_DMI_EVC_Coded_Train_Data_int_array_T_DATA(
    dmi_evc_coded_train_data_int,
    &_L11);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

