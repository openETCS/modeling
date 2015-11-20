/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int */
void CAST_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::dmi_text_message_ct */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_text_message_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::dmi_text_message_int */DMI_Text_Message_int_array_T_DATA *dmi_text_message_int)
{
  (&(&(*dmi_text_message_int)[0])[0])[1] = (*dmi_text_message_ct).system_clock;
  (&(&(*dmi_text_message_int)[0])[0])[2] =
    (*dmi_text_message_ct).textMessage_ID;
  (&(&(*dmi_text_message_int)[0])[0])[4] = (*dmi_text_message_ct).l_text;
  (&(&(*dmi_text_message_int)[0])[0])[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_text_message_ct).valid);
  (&(&(*dmi_text_message_int)[0])[0])[3] = /* 1 */
    CAST_DMI_Q_TEXT_to_int_DATA_Variables((*dmi_text_message_ct).q_text);
  /* 1 */
  CAST_DMI_TEXT_to_int_DATA_Variables(
    &(*dmi_text_message_ct).x_text,
    (DMI_TEXT_INT_Array_T_DATA *) &(&(*dmi_text_message_int)[0])[5]);
  (&(*dmi_text_message_int)[260])[0] = /* 1 */
    CAST_Q_TEXTCLASS_to_int_TM_conversions((*dmi_text_message_ct).q_textClass);
  (&(*dmi_text_message_int)[260])[1] = /* 1 */
    CAST_Q_TEXTCONFIRM_to_int_TM_conversions(
      (*dmi_text_message_ct).q_textConfirm);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

