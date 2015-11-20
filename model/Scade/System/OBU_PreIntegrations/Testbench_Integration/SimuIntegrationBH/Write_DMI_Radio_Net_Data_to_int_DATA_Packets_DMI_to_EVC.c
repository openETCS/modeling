/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_Radio_Net_Data_to_int */
void Write_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Radio_Net_Data_to_int::dmi_radio_net_data_ct */ DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_radio_net_data_ct,
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Radio_Net_Data_to_int::dmi_radio_net_data_int */ DMI_Radio_Net_Data_int_array_T_DATA *dmi_radio_net_data_int)
{
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Radio_Net_Data_to_int */
  static DMI_Radio_Net_Data_int_array_T_DATA op_call;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Radio_Net_Data_to_int */
  static kcg_bool ck_every;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Radio_Net_Data_to_int::_L9 */
  static DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg _L9;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Radio_Net_Data_to_int::_L18 */
  static DMI_Radio_Net_Data_int_array_T_DATA _L18;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Radio_Net_Data_to_int::_L19 */
  static kcg_bool _L19;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Radio_Net_Data_to_int::_L20 */
  static DMI_Radio_Net_Data_int_array_T_DATA _L20;
  
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L9,
    dmi_radio_net_data_ct);
  _L19 = _L9.valid;
  ck_every = _L19;
  /* ck_Write_DMI_Radio_Net_Data_to_int */ if (ck_every) {
    /* 1 */ C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC(&_L9, &op_call);
  }
  kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA(
    &_L20,
    (DMI_Radio_Net_Data_int_array_T_DATA *)
      &cDMI_Radio_Net_Data_int_array_DATA_Packets_DMI_to_EVC);
  /* ck_Write_DMI_Radio_Net_Data_to_int */ if (ck_every) {
    kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA(&_L18, &op_call);
  }
  else {
    kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA(&_L18, &_L20);
  }
  kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA(dmi_radio_net_data_int, &_L18);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

