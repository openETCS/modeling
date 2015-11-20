/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int */
void Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int::dmi_text_message_ack_ct */ DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_text_message_ack_ct,
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int::dmi_text_message_ack_int */ DMI_Text_Message_Ack_int_array_T_DATA *dmi_text_message_ack_int)
{
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int */
  static DMI_Text_Message_Ack_int_array_T_DATA op_call;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int */
  static kcg_bool ck_every;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int::_L14 */
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L14;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int::_L19 */
  static DMI_Text_Message_Ack_int_array_T_DATA _L19;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int::_L20 */
  static kcg_bool _L20;
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int::_L21 */
  static DMI_Text_Message_Ack_int_array_T_DATA _L21;
  
  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L14,
    dmi_text_message_ack_ct);
  _L20 = _L14.valid;
  ck_every = _L20;
  /* ck_Write_DMI_Text_Message_Ack_to_int */ if (ck_every) {
    /* 1 */
    C_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC(&_L14, &op_call);
  }
  kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(
    &_L21,
    (DMI_Text_Message_Ack_int_array_T_DATA *)
      &cDMI_Text_Message_Ack_int_array_DATA_Packets_DMI_to_EVC);
  /* ck_Write_DMI_Text_Message_Ack_to_int */ if (ck_every) {
    kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(&_L19, &op_call);
  }
  else {
    kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(&_L19, &_L21);
  }
  kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(
    dmi_text_message_ack_int,
    &_L19);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

