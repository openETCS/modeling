/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int */
void C_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int::dmi_text_message_ack_ct */ DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_text_message_ack_ct,
  /* DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int::dmi_text_message_ack_int */ DMI_Text_Message_Ack_int_array_T_DATA *dmi_text_message_ack_int)
{
  /* DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int::_L2 */
  static array_int_4 _L2;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int::_L6 */
  static kcg_bool _L6;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int::_L5 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int::_L4 */
  static DMI_TextMessage_ID_T_DMI_Types_Pkg _L4;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int::_L3 */
  static kcg_bool _L3;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int::_L11 */
  static kcg_int _L11;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int::_L14 */
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L14;
  /* DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int::_L18 */
  static kcg_int _L18;
  
  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L14,
    dmi_text_message_ack_ct);
  _L6 = _L14.valid;
  _L18 = /* 2 */ Bool_to_Int_Utilities(_L6);
  _L5 = _L14.systemTime;
  _L4 = _L14.textMessage_ID;
  _L3 = _L14.acknowledged;
  _L11 = /* 1 */ Bool_to_Int_Utilities(_L3);
  _L2[0] = _L18;
  _L2[1] = _L5;
  _L2[2] = _L4;
  _L2[3] = _L11;
  kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(
    dmi_text_message_ack_int,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

