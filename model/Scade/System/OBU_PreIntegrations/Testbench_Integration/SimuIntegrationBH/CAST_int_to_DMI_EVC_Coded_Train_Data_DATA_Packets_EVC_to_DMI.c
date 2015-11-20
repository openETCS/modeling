/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_EVC_Coded_Train_Data_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data */
void CAST_int_to_DMI_EVC_Coded_Train_Data_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::dmi_evc_coded_train_data_int */ DMI_EVC_Coded_Train_Data_int_array_T_DATA *dmi_evc_coded_train_data_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::dmi_evc_coded_train_data_ct */ DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_coded_train_data_ct)
{
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L10 */
  static kcg_int _L10;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L9 */
  static kcg_int _L9;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L8 */
  static kcg_int _L8;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L7 */
  static kcg_int _L7;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L6 */
  static kcg_int _L6;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L5 */
  static kcg_int _L5;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L4 */
  static kcg_int _L4;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L3 */
  static kcg_int _L3;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L2 */
  static kcg_int _L2;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L11 */
  static DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L11;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L12 */
  static kcg_bool _L12;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L13 */
  static DMI_train_id_T_DMI_Types_Pkg _L13;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L14 */
  static DMI_train_length_T_DMI_Types_Pkg _L14;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L15 */
  static DMI_brakeModel_id_T_DMI_Types_Pkg _L15;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L16 */
  static DMI_vMax_id_T_DMI_Types_Pkg _L16;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L17 */
  static M_AXLELOADCAT _L17;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L18 */
  static DMI_airtightSystem_T_DMI_Types_Pkg _L18;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L19 */
  static DMI_loadingGauge_T_DMI_Types_Pkg _L19;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data::_L22 */
  static DMI_EVC_Coded_Train_Data_int_array_T_DATA _L22;
  
  kcg_copy_DMI_EVC_Coded_Train_Data_int_array_T_DATA(
    &_L22,
    dmi_evc_coded_train_data_int);
  _L10 = _L22[0];
  _L12 = /* 1 */ Int_to_Bool_Utilities(_L10);
  _L9 = _L22[1];
  _L8 = _L22[2];
  /* 1 */ CAST_int_to_DMI_train_id_DATA_Variables(_L8, &_L13);
  _L7 = _L22[3];
  /* 1 */ CAST_int_to_DMI_train_length_DATA_Variables(_L7, &_L14);
  _L6 = _L22[4];
  /* 1 */ CAST_int_to_DMI_brakeModel_id_DATA_Variables(_L6, &_L15);
  _L5 = _L22[5];
  /* 2 */ CAST_int_to_DMI_vMax_id_DATA_Variables(_L5, &_L16);
  _L4 = _L22[6];
  _L17 = /* 1 */ CAST_Int_to_M_AXLELOADCAT_TM_conversions(_L4);
  _L3 = _L22[7];
  /* 1 */ CAST_int_to_DMI_airtightSystem_DATA_Variables(_L3, &_L18);
  _L2 = _L22[8];
  /* 1 */ CAST_int_to_DMI_loadingGauge_DATA_Variables(_L2, &_L19);
  _L11.valid = _L12;
  _L11.system_clock = _L9;
  kcg_copy_DMI_train_id_T_DMI_Types_Pkg(&_L11.trainID, &_L13);
  kcg_copy_DMI_train_length_T_DMI_Types_Pkg(&_L11.trainLength, &_L14);
  kcg_copy_DMI_brakeModel_id_T_DMI_Types_Pkg(&_L11.brakeModel, &_L15);
  kcg_copy_DMI_vMax_id_T_DMI_Types_Pkg(&_L11.vmax, &_L16);
  _L11.mAxleLoad = _L17;
  kcg_copy_DMI_airtightSystem_T_DMI_Types_Pkg(&_L11.airTightSystem, &_L18);
  kcg_copy_DMI_loadingGauge_T_DMI_Types_Pkg(&_L11.mLoadingGauge, &_L19);
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    dmi_evc_coded_train_data_ct,
    &_L11);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_EVC_Coded_Train_Data_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

