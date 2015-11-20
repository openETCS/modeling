/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons */
void CAST_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::dmi_icons_int */ DMI_Icons_int_array_T_DATA *dmi_icons_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::dmi_icons_ct */ DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_icons_ct)
{
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::_L10 */
  static kcg_int _L10;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::_L9 */
  static kcg_int _L9;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::_L8 */
  static kcg_int _L8;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::_L7 */
  static kcg_int _L7;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::_L6 */
  static kcg_int _L6;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::_L5 */
  static kcg_int _L5;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::_L4 */
  static kcg_int _L4;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::_L3 */
  static kcg_int _L3;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::_L2 */
  static kcg_int _L2;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::_L11 */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg _L11;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::_L22 */
  static kcg_bool _L22;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::_L23 */
  static Icon_control_flag_T_DMI_Types_Pkg _L23;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::_L24 */
  static kcg_real _L24;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::_L25 */
  static Icon_group_T_DMI_Types_Pkg _L25;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::_L26 */
  static Area_group_T_DMI_Types_Pkg _L26;
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons::_L29 */
  static DMI_Icons_int_array_T_DATA _L29;
  
  kcg_copy_DMI_Icons_int_array_T_DATA(&_L29, dmi_icons_int);
  _L2 = _L29[8];
  _L3 = _L29[7];
  _L4 = _L29[6];
  _L5 = _L29[5];
  _L6 = _L29[4];
  _L7 = _L29[3];
  _L8 = _L29[2];
  _L9 = _L29[1];
  _L10 = _L29[0];
  _L22 = /* 1 */ Int_to_Bool_Utilities(_L10);
  _L23 = /* 1 */ CAST_int_to_Icon_control_flag_DATA_Variables(_L8);
  _L24 = /* 1 */ CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables(_L7);
  _L25 = /* 1 */ CAST_int_to_Icon_group_DATA_Variables(_L6);
  _L26 = /* 1 */ CAST_int_to_Area_group_DATA_Variables(_L4);
  _L11.valid = _L22;
  _L11.system_clock = _L9;
  _L11.DMI_m_icon_control_flag = _L23;
  _L11.DMI_m_icon_flashing_freq = _L24;
  _L11.DMI_nid_icon_group = _L25;
  _L11.DMI_nid_icon_rank = _L5;
  _L11.DMI_nid_area_group = _L26;
  _L11.DMI_nid_area_rank = _L3;
  _L11.DMI_nid_icon_identifier = _L2;
  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(dmi_icons_ct, &_L11);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

