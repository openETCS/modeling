/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Train_Data_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Train_Data */
void C_int_to_DMI_Train_Data_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::dmi_train_data_int */ DMI_Train_Data_int_array_T_DATA *dmi_train_data_int,
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::dmi_train_data_ct */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *dmi_train_data_ct)
{
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::_L2 */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _L2;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::_L5 */
  static kcg_int _L5;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::_L4 */
  static kcg_int _L4;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::_L3 */
  static kcg_int _L3;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::_L12 */
  static kcg_int _L12;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::_L11 */
  static kcg_int _L11;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::_L10 */
  static kcg_int _L10;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::_L9 */
  static kcg_int _L9;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::_L8 */
  static kcg_int _L8;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::_L7 */
  static kcg_int _L7;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::_L13 */
  static NC_TRAIN _L13;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::_L14 */
  static M_AXLELOADCAT _L14;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::_L15 */
  static M_AIRTIGHT _L15;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::_L16 */
  static M_LOADINGGAUGE _L16;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::_L18 */
  static DMI_Train_Data_int_array_T_DATA _L18;
  /* DATA::Packets::Bothways::C_int_to_DMI_Train_Data::_L19 */
  static kcg_bool _L19;
  
  kcg_copy_DMI_Train_Data_int_array_T_DATA(&_L18, dmi_train_data_int);
  _L5 = _L18[0];
  _L19 = /* 1 */ Int_to_Bool_Utilities(_L5);
  _L4 = _L18[1];
  _L3 = _L18[2];
  _L13 = /* 1 */ CAST_Int_to_NC_TRAIN_TM_conversions(_L3);
  _L12 = _L18[3];
  _L11 = _L18[4];
  _L10 = _L18[5];
  _L9 = _L18[6];
  _L14 = /* 1 */ CAST_Int_to_M_AXLELOADCAT_TM_conversions(_L9);
  _L8 = _L18[7];
  _L15 = /* 1 */ CAST_Int_to_M_AIRTIGHT_TM_conversions(_L8);
  _L7 = _L18[8];
  _L16 = /* 1 */ CAST_Int_to_M_LOADINGGAUGE_TM_conversions(_L7);
  _L2.valid = _L19;
  _L2.systemTime = _L4;
  _L2.trainCategory = _L13;
  _L2.l_train = _L12;
  _L2.m_brakeperct = _L11;
  _L2.v_maxTrain = _L10;
  _L2.m_axleLoad = _L14;
  _L2.m_airTight = _L15;
  _L2.m_loadingGauge = _L16;
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(dmi_train_data_ct, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Train_Data_DATA_Packets_Bothways.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

