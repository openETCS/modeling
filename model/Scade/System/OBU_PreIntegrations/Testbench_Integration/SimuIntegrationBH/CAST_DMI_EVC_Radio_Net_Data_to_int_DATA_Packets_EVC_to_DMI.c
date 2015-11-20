/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_EVC_Radio_Net_Data_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int */
void CAST_DMI_EVC_Radio_Net_Data_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int::dmi_evc_radio_net_data_ct */ DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_radio_net_data_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int::dmi_evc_radio_net_data_int */ DMI_EVC_Radio_Net_Data_int_array_T_DATA *dmi_evc_radio_net_data_int)
{
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int::_L4 */
  static kcg_bool _L4;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int::_L3 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int::_L2 */
  static NID_MN _L2;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int::_L5 */
  static array_int_3 _L5;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int::_L6 */
  static kcg_int _L6;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int::_L7 */
  static kcg_int _L7;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Radio_Net_Data_to_int::_L8 */
  static DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L8;
  
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L8,
    dmi_evc_radio_net_data_ct);
  _L2 = _L8.nid_mn;
  _L3 = _L8.system_clock;
  _L4 = _L8.valid;
  _L7 = /* 1 */ Bool_to_Int_Utilities(_L4);
  _L6 = /* 1 */ CAST_NID_MN_to_int_TM_conversions(_L2);
  _L5[0] = _L7;
  _L5[1] = _L3;
  _L5[2] = _L6;
  kcg_copy_DMI_EVC_Radio_Net_Data_int_array_T_DATA(
    dmi_evc_radio_net_data_int,
    &_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_EVC_Radio_Net_Data_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

