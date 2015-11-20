/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control */
void CAST_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control::dmi_display_control_int */ DMI_Display_Control_int_array_T_DATA *dmi_display_control_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control::dmi_display_control_ct */ DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_display_control_ct)
{
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control::_L14 */
  static kcg_bool _L14;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control::_L13 */
  static kcg_bool _L13;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control::_L10 */
  static kcg_int _L10;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control::_L11 */
  static kcg_int _L11;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control::_L12 */
  static kcg_int _L12;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control::_L9 */
  static DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg _L9;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control::_L15 */
  static DMI_Display_Control_int_array_T_DATA _L15;
  
  kcg_copy_DMI_Display_Control_int_array_T_DATA(&_L15, dmi_display_control_int);
  _L10 = _L15[0];
  _L13 = /* 1 */ Int_to_Bool_Utilities(_L10);
  _L11 = _L15[1];
  _L14 = /* 2 */ Int_to_Bool_Utilities(_L11);
  _L12 = _L15[2];
  _L9.valid = _L13;
  _L9.cab_is_active = _L14;
  _L9.system_clock = _L12;
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    dmi_display_control_ct,
    &_L9);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

