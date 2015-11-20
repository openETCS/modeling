/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack */
void C_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack::dmi_icon_ack_int */ DMI_Icon_Ack_int_array_T_DATA *dmi_icon_ack_int,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack::dmi_icon_ack_ct */ DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_icon_ack_ct)
{
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack::_L2 */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L2;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack::_L5 */
  static kcg_int _L5;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack::_L4 */
  static kcg_int _L4;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack::_L10 */
  static kcg_int _L10;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack::_L12 */
  static DMI_Icon_Ack_int_array_T_DATA _L12;
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack::_L13 */
  static kcg_bool _L13;
  
  kcg_copy_DMI_Icon_Ack_int_array_T_DATA(&_L12, dmi_icon_ack_int);
  _L5 = _L12[0];
  _L13 = /* 1 */ Int_to_Bool_Utilities(_L5);
  _L4 = _L12[1];
  _L10 = _L12[2];
  _L2.valid = _L13;
  _L2.systemTime = _L4;
  _L2.DMI_nid_icon_identifier = _L10;
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(dmi_icon_ack_ct, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

