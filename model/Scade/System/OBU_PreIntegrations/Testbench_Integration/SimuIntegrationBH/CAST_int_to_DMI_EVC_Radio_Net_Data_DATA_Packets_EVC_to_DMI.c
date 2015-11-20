/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data */
void CAST_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data::dmi_evc_radio_net_data_int */ DMI_EVC_Radio_Net_Data_int_array_T_DATA *dmi_evc_radio_net_data_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data::dmi_evc_radio_net_data_ct */ DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_radio_net_data_ct)
{
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data::_L4 */
  static kcg_int _L4;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data::_L3 */
  static kcg_int _L3;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data::_L2 */
  static kcg_int _L2;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data::_L5 */
  static DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L5;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data::_L6 */
  static NID_MN _L6;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data::_L7 */
  static kcg_bool _L7;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data::_L10 */
  static DMI_EVC_Radio_Net_Data_int_array_T_DATA _L10;
  
  kcg_copy_DMI_EVC_Radio_Net_Data_int_array_T_DATA(
    &_L10,
    dmi_evc_radio_net_data_int);
  _L2 = _L10[2];
  _L3 = _L10[1];
  _L4 = _L10[0];
  _L7 = /* 1 */ Int_to_Bool_Utilities(_L4);
  _L6 = /* 1 */ CAST_Int_to_NID_MN_TM_conversions(_L2);
  _L5.valid = _L7;
  _L5.system_clock = _L3;
  _L5.nid_mn = _L6;
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    dmi_evc_radio_net_data_ct,
    &_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

