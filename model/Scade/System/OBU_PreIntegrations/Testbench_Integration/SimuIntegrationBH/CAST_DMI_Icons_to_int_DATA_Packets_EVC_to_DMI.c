/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Icons_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int */
void CAST_DMI_Icons_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::dmi_icons_ct */ DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_icons_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::dmi_icons_int */ DMI_Icons_int_array_T_DATA *dmi_icons_int)
{
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::_L10 */
  static kcg_bool _L10;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::_L9 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L9;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::_L8 */
  static Icon_control_flag_T_DMI_Types_Pkg _L8;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::_L7 */
  static kcg_real _L7;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::_L6 */
  static Icon_group_T_DMI_Types_Pkg _L6;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::_L5 */
  static kcg_int _L5;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::_L4 */
  static Area_group_T_DMI_Types_Pkg _L4;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::_L3 */
  static kcg_int _L3;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::_L2 */
  static kcg_int _L2;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::_L11 */
  static array_int_9 _L11;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::_L22 */
  static kcg_int _L22;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::_L23 */
  static Icon_control_flag_INT_T_DATA _L23;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::_L24 */
  static DMI_m_icon_flashing_freq_INT_T_DATA _L24;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::_L25 */
  static Icon_group_INT_T_DATA _L25;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::_L26 */
  static Area_group_INT_T_DATA _L26;
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int::_L27 */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg _L27;
  
  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(&_L27, dmi_icons_ct);
  _L2 = _L27.DMI_nid_icon_identifier;
  _L3 = _L27.DMI_nid_area_rank;
  _L4 = _L27.DMI_nid_area_group;
  _L5 = _L27.DMI_nid_icon_rank;
  _L6 = _L27.DMI_nid_icon_group;
  _L7 = _L27.DMI_m_icon_flashing_freq;
  _L8 = _L27.DMI_m_icon_control_flag;
  _L9 = _L27.system_clock;
  _L10 = _L27.valid;
  _L22 = /* 1 */ Bool_to_Int_Utilities(_L10);
  _L23 = /* 2 */ CAST_Icon_control_flag_to_int_DATA_Variables(_L8);
  _L24 = /* 2 */ CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables(_L7);
  _L25 = /* 1 */ CAST_Icon_group_to_int_DATA_Variables(_L6);
  _L26 = /* 1 */ CAST_Area_group_to_int_DATA_Variables(_L4);
  _L11[0] = _L22;
  _L11[1] = _L9;
  _L11[2] = _L23;
  _L11[3] = _L24;
  _L11[4] = _L25;
  _L11[5] = _L5;
  _L11[6] = _L26;
  _L11[7] = _L3;
  _L11[8] = _L2;
  kcg_copy_DMI_Icons_int_array_T_DATA(dmi_icons_int, &_L11);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Icons_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

