/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Train_Data_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_DMI_Train_Data_to_int */
void C_DMI_Train_Data_to_int_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::dmi_train_data_ct */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *dmi_train_data_ct,
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::dmi_train_data_int */ DMI_Train_Data_int_array_T_DATA *dmi_train_data_int)
{
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::_L2 */
  static array_int_9 _L2;
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::_L13 */
  static kcg_int _L13;
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::_L14 */
  static kcg_int _L14;
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::_L15 */
  static kcg_int _L15;
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::_L16 */
  static kcg_int _L16;
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::_L22 */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _L22;
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::_L24 */
  static M_LOADINGGAUGE _L24;
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::_L25 */
  static M_AIRTIGHT _L25;
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::_L26 */
  static M_AXLELOADCAT _L26;
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::_L27 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L27;
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::_L28 */
  static M_BRAKEPERCT_DMI_Types_Pkg _L28;
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::_L29 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L29;
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::_L30 */
  static NC_TRAIN _L30;
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::_L31 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L31;
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::_L32 */
  static kcg_bool _L32;
  /* DATA::Packets::Bothways::C_DMI_Train_Data_to_int::_L36 */
  static kcg_int _L36;
  
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&_L22, dmi_train_data_ct);
  _L32 = _L22.valid;
  _L36 = /* 1 */ Bool_to_Int_Utilities(_L32);
  _L31 = _L22.systemTime;
  _L30 = _L22.trainCategory;
  _L13 = /* 1 */ CAST_NC_TRAIN_to_int_TM_conversions(_L30);
  _L29 = _L22.l_train;
  _L28 = _L22.m_brakeperct;
  _L27 = _L22.v_maxTrain;
  _L26 = _L22.m_axleLoad;
  _L14 = /* 1 */ CAST_M_AXLELOADCAT_to_int_TM_conversions(_L26);
  _L25 = _L22.m_airTight;
  _L15 = /* 1 */ CAST_M_AIRTIGHT_to_int_TM_conversions(_L25);
  _L24 = _L22.m_loadingGauge;
  _L16 = /* 1 */ CAST_M_LOADINGGAUGE_to_int_TM_conversions(_L24);
  _L2[0] = _L36;
  _L2[1] = _L31;
  _L2[2] = _L13;
  _L2[3] = _L29;
  _L2[4] = _L28;
  _L2[5] = _L27;
  _L2[6] = _L14;
  _L2[7] = _L15;
  _L2[8] = _L16;
  kcg_copy_DMI_Train_Data_int_array_T_DATA(dmi_train_data_int, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Train_Data_to_int_DATA_Packets_Bothways.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

