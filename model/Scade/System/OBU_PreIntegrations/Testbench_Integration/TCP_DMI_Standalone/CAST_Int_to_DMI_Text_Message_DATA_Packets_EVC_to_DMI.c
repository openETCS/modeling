/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message */
void CAST_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::dmi_text_message_int */DMI_Text_Message_int_array_T_DATA *dmi_text_message_int,
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::dmi_text_message_ct */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_text_message_ct)
{
  /* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message::_L21 */ array_int_5 _L21;
  
  kcg_copy_array_int_5(&_L21, (array_int_5 *) &(*dmi_text_message_int)[0]);
  (*dmi_text_message_ct).system_clock = _L21[1];
  (*dmi_text_message_ct).textMessage_ID = _L21[2];
  (*dmi_text_message_ct).l_text = _L21[4];
  (*dmi_text_message_ct).valid = /* 1 */ Int_to_Bool_Utilities(_L21[0]);
  (*dmi_text_message_ct).q_text = /* 2 */
    CAST_int_to_DMI_Q_TEXT_DATA_Variables(_L21[3]);
  /* 1 */
  CAST_int_to_DMI_TEXT_DATA_Variables(
    (DMI_TEXT_INT_Array_T_DATA *) &(*dmi_text_message_int)[5],
    &(*dmi_text_message_ct).x_text);
  (*dmi_text_message_ct).q_textClass = /* 1 */
    CAST_Int_to_Q_TEXTCLASS_TM_conversions((*dmi_text_message_int)[260]);
  (*dmi_text_message_ct).q_textConfirm = /* 1 */
    CAST_Int_to_Q_TEXTCONFIRM_TM_conversions((*dmi_text_message_int)[261]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

