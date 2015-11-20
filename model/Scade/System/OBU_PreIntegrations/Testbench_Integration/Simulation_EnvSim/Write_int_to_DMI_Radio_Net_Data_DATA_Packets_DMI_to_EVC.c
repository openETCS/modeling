/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data */
void Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data::dmi_radio_net_data_int */DMI_Radio_Net_Data_int_array_T_DATA *dmi_radio_net_data_int,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data::dmi_radio_net_data_ct */DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_radio_net_data_ct)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data::_L9 */
  static kcg_bool _L9;
  
  _L9 = 1 == (*dmi_radio_net_data_int)[0];
  if (_L9) {
    /* 1 */
    C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC(
      dmi_radio_net_data_int,
      dmi_radio_net_data_ct);
  }
  else {
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      dmi_radio_net_data_ct,
      (DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

