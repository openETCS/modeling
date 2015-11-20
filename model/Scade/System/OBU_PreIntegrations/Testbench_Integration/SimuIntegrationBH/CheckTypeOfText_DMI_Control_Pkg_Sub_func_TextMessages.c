/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void CheckTypeOfText_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = 0;
  outC->_L7 = kcg_true;
  outC->_L6 = 0;
  outC->_L5 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.system_clock = 0;
  outC->_L4.textMessage_ID = 0;
  outC->_L4.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L4.l_text = 0;
  for (i = 0; i < 255; i++) {
    outC->_L4.x_text[i] = ' ';
  }
  outC->_L4.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L4.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L3 = kcg_true;
  outC->_L2.present = kcg_true;
  outC->_L2.dmi_msg.valid = kcg_true;
  outC->_L2.dmi_msg.system_clock = 0;
  outC->_L2.dmi_msg.textMessage_ID = 0;
  outC->_L2.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L2.dmi_msg.l_text = 0;
  for (i1 = 0; i1 < 255; i1++) {
    outC->_L2.dmi_msg.x_text[i1] = ' ';
  }
  outC->_L2.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L2.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (i3 = 0; i3 < 5; i3++) {
    outC->_L1[i3].present = kcg_true;
    outC->_L1[i3].dmi_msg.valid = kcg_true;
    outC->_L1[i3].dmi_msg.system_clock = 0;
    outC->_L1[i3].dmi_msg.textMessage_ID = 0;
    outC->_L1[i3].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L1[i3].dmi_msg.l_text = 0;
    for (i2 = 0; i2 < 255; i2++) {
      outC->_L1[i3].dmi_msg.x_text[i2] = ' ';
    }
    outC->_L1[i3].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L1[i3].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->Output2 = kcg_true;
  outC->Output1 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void CheckTypeOfText_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}

/* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText */
void CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::Queue */ array_170229 *Queue,
  outC_CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_copy_array_170229(&outC->_L1, Queue);
  kcg_copy_MsgStructure(&outC->_L2, &outC->_L1[0]);
  outC->_L3 = outC->_L2.present;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L4,
    &outC->_L2.dmi_msg);
  outC->_L5 = outC->_L4.valid;
  outC->_L6 = outC->_L4.l_text;
  outC->_L8 = 0;
  outC->_L7 = outC->_L6 == outC->_L8;
  outC->_L11 = !outC->_L7;
  outC->_L10 = outC->_L3 & outC->_L5 & outC->_L11;
  outC->Output2 = outC->_L10;
  outC->_L9 = outC->_L3 & outC->_L5 & outC->_L7;
  outC->Output1 = outC->_L9;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

