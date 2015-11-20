/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Icon_Ack_to_int */
void C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_DMI_Icon_Ack_to_int::dmi_icon_ack_ct */ DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_icon_ack_ct,
  /* DATA::Packets::DMI_to_EVC::C_DMI_Icon_Ack_to_int::dmi_icon_ack_int */ DMI_Icon_Ack_int_array_T_DATA *dmi_icon_ack_int)
{
  static kcg_bool noname;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Icon_Ack_to_int::_L2 */
  static array_int_3 _L2;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Icon_Ack_to_int::_L5 */
  static kcg_bool _L5;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Icon_Ack_to_int::_L4 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Icon_Ack_to_int::_L10 */
  static kcg_int _L10;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Icon_Ack_to_int::_L17 */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L17;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Icon_Ack_to_int::_L25 */
  static kcg_int _L25;
  
  _L25 = 1;
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(&_L17, dmi_icon_ack_ct);
  _L4 = _L17.systemTime;
  _L10 = _L17.DMI_nid_icon_identifier;
  _L2[0] = _L25;
  _L2[1] = _L4;
  _L2[2] = _L10;
  _L5 = _L17.valid;
  kcg_copy_DMI_Icon_Ack_int_array_T_DATA(dmi_icon_ack_int, &_L2);
  noname = _L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

