/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Radio_Net_Data_to_int */
void C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_DMI_Radio_Net_Data_to_int::dmi_radio_net_data_ct */DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_radio_net_data_ct,
  /* DATA::Packets::DMI_to_EVC::C_DMI_Radio_Net_Data_to_int::dmi_radio_net_data_int */DMI_Radio_Net_Data_int_array_T_DATA *dmi_radio_net_data_int)
{
  (*dmi_radio_net_data_int)[1] = (*dmi_radio_net_data_ct).systemTime;
  (*dmi_radio_net_data_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_radio_net_data_ct).valid);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

