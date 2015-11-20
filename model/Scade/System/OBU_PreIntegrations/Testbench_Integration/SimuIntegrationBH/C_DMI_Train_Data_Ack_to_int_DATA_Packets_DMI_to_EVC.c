/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Train_Data_Ack_to_int */
void C_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_DMI_Train_Data_Ack_to_int::dmi_train_data_ack_ct */ DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_train_data_ack_ct,
  /* DATA::Packets::DMI_to_EVC::C_DMI_Train_Data_Ack_to_int::dmi_train_data_ack_int */ DMI_Train_Data_Ack_int_array_T_DATA *dmi_train_data_ack_int)
{
  /* DATA::Packets::DMI_to_EVC::C_DMI_Train_Data_Ack_to_int::_L2 */
  static array_int_3 _L2;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Train_Data_Ack_to_int::_L5 */
  static kcg_bool _L5;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Train_Data_Ack_to_int::_L4 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Train_Data_Ack_to_int::_L3 */
  static kcg_bool _L3;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Train_Data_Ack_to_int::_L11 */
  static kcg_int _L11;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Train_Data_Ack_to_int::_L16 */
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L16;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Train_Data_Ack_to_int::_L20 */
  static kcg_int _L20;
  
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L16,
    dmi_train_data_ack_ct);
  _L5 = _L16.valid;
  _L20 = /* 2 */ Bool_to_Int_Utilities(_L5);
  _L4 = _L16.systemTime;
  _L3 = _L16.acknowledged;
  _L11 = /* 1 */ Bool_to_Int_Utilities(_L3);
  _L2[0] = _L20;
  _L2[1] = _L4;
  _L2[2] = _L11;
  kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA(dmi_train_data_ack_int, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

