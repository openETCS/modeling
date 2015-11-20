/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Radio_Net_Data_to_int */
void C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_DMI_Radio_Net_Data_to_int::dmi_radio_net_data_ct */ DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_radio_net_data_ct,
  /* DATA::Packets::DMI_to_EVC::C_DMI_Radio_Net_Data_to_int::dmi_radio_net_data_int */ DMI_Radio_Net_Data_int_array_T_DATA *dmi_radio_net_data_int)
{
  /* DATA::Packets::DMI_to_EVC::C_DMI_Radio_Net_Data_to_int::_L2 */
  static array_int_2 _L2;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Radio_Net_Data_to_int::_L9 */
  static DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg _L9;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Radio_Net_Data_to_int::_L13 */
  static kcg_bool _L13;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Radio_Net_Data_to_int::_L12 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L12;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Radio_Net_Data_to_int::_L17 */
  static kcg_int _L17;
  
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L9,
    dmi_radio_net_data_ct);
  _L13 = _L9.valid;
  _L17 = /* 1 */ Bool_to_Int_Utilities(_L13);
  _L12 = _L9.systemTime;
  _L2[0] = _L17;
  _L2[1] = _L12;
  kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA(dmi_radio_net_data_int, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

