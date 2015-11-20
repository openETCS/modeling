/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data */
void Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data::dmi_radio_net_data_int */ DMI_Radio_Net_Data_int_array_T_DATA *dmi_radio_net_data_int,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data::dmi_radio_net_data_ct */ DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_radio_net_data_ct)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data */
  static DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg op_call;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data */
  static kcg_bool ck_every;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data::_L5 */
  static DMI_Radio_Net_Data_int_array_T_DATA _L5;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data::_L7 */
  static DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg _L7;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data::_L11 */
  static kcg_int _L11;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data::_L10 */
  static kcg_int _L10;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data::_L9 */
  static kcg_bool _L9;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data::_L12 */
  static DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg _L12;
  
  _L11 = 1;
  kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA(&_L5, dmi_radio_net_data_int);
  _L10 = _L5[0];
  _L9 = _L11 == _L10;
  ck_every = _L9;
  /* ck_Write_int_to_DMI_Radio_Net_Data */ if (ck_every) {
    /* 1 */ C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC(&_L5, &op_call);
  }
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L12,
    (DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &cDMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC);
  /* ck_Write_int_to_DMI_Radio_Net_Data */ if (ck_every) {
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(&_L7, &op_call);
  }
  else {
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(&_L7, &_L12);
  }
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    dmi_radio_net_data_ct,
    &_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

