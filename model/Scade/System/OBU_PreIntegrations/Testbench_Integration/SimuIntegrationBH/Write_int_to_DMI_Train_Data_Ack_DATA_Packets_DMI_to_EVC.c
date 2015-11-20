/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack */
void Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack::dmi_train_data_ack_int */ DMI_Train_Data_Ack_int_array_T_DATA *dmi_train_data_ack_int,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack::dmi_train_data_ack_ct */ DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_train_data_ack_ct)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack */
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg op_call;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack */
  static kcg_bool ck_every;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack::_L8 */
  static DMI_Train_Data_Ack_int_array_T_DATA _L8;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack::_L14 */
  static kcg_int _L14;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack::_L13 */
  static kcg_int _L13;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack::_L12 */
  static kcg_bool _L12;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack::_L15 */
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L15;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack::_L16 */
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L16;
  
  _L14 = 1;
  kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA(&_L8, dmi_train_data_ack_int);
  _L13 = _L8[0];
  _L12 = _L14 == _L13;
  ck_every = _L12;
  /* ck_Write_int_to_DMI_Train_Data_Ack */ if (ck_every) {
    /* 1 */
    C_int_to_DMI_Train_Data_Ack1_DATA_Packets_DMI_to_EVC(&_L8, &op_call);
  }
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L16,
    (DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &cDMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC);
  /* ck_Write_int_to_DMI_Train_Data_Ack */ if (ck_every) {
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(&_L15, &op_call);
  }
  else {
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(&_L15, &_L16);
  }
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    dmi_train_data_ack_ct,
    &_L15);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

