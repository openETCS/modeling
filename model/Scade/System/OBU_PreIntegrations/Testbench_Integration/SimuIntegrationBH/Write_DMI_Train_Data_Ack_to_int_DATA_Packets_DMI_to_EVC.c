/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int */
void Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int::dmi_train_data_ack_ct */ DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_train_data_ack_ct,
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int::dmi_train_data_ack_int */ DMI_Train_Data_Ack_int_array_T_DATA *dmi_train_data_ack_int)
{
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int */
  static DMI_Train_Data_Ack_int_array_T_DATA op_call;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int */
  static kcg_bool ck_every;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int::_L16 */
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L16;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int::_L21 */
  static DMI_Train_Data_Ack_int_array_T_DATA _L21;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int::_L22 */
  static kcg_bool _L22;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int::_L23 */
  static DMI_Train_Data_Ack_int_array_T_DATA _L23;
  
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L16,
    dmi_train_data_ack_ct);
  _L22 = _L16.valid;
  ck_every = _L22;
  /* ck_Write_DMI_Train_Data_Ack_to_int */ if (ck_every) {
    /* 1 */
    C_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC(&_L16, &op_call);
  }
  kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA(
    &_L23,
    (DMI_Train_Data_Ack_int_array_T_DATA *)
      &cDMI_Train_Data_Ack_int_array_DATA_Packets_DMI_to_EVC);
  /* ck_Write_DMI_Train_Data_Ack_to_int */ if (ck_every) {
    kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA(&_L21, &op_call);
  }
  else {
    kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA(&_L21, &_L23);
  }
  kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA(dmi_train_data_ack_int, &_L21);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

