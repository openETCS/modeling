/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data */
void C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data::dmi_radio_net_data_int */ DMI_Radio_Net_Data_int_array_T_DATA *dmi_radio_net_data_int,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data::dmi_radio_net_data_ct */ DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_radio_net_data_ct)
{
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data::_L2 */
  static DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg _L2;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data::_L4 */
  static kcg_int _L4;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data::_L3 */
  static kcg_int _L3;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data::_L5 */
  static DMI_Radio_Net_Data_int_array_T_DATA _L5;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data::_L6 */
  static kcg_bool _L6;
  
  kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA(&_L5, dmi_radio_net_data_int);
  _L4 = _L5[0];
  _L6 = /* 1 */ Int_to_Bool_Utilities(_L4);
  _L3 = _L5[1];
  _L2.valid = _L6;
  _L2.systemTime = _L3;
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    dmi_radio_net_data_ct,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

