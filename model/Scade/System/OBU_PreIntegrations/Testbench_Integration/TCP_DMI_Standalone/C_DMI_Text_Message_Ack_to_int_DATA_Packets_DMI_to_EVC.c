/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int */
void C_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int::dmi_text_message_ack_ct */DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_text_message_ack_ct,
  /* DATA::Packets::DMI_to_EVC::C_DMI_Text_Message_Ack_to_int::dmi_text_message_ack_int */DMI_Text_Message_Ack_int_array_T_DATA *dmi_text_message_ack_int)
{
  (*dmi_text_message_ack_int)[1] = (*dmi_text_message_ack_ct).systemTime;
  (*dmi_text_message_ack_int)[2] = (*dmi_text_message_ack_ct).textMessage_ID;
  (*dmi_text_message_ack_int)[0] = /* 2 */
    Bool_to_Int_Utilities((*dmi_text_message_ack_ct).valid);
  (*dmi_text_message_ack_int)[3] = /* 1 */
    Bool_to_Int_Utilities((*dmi_text_message_ack_ct).acknowledged);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

