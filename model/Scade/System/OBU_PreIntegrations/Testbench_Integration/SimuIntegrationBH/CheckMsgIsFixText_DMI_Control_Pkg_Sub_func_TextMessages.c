/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void CheckMsgIsFixText_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L16 = kcg_true;
  outC->_L14 = 0;
  outC->_L13.present = kcg_true;
  outC->_L13.dmi_msg.valid = kcg_true;
  outC->_L13.dmi_msg.system_clock = 0;
  outC->_L13.dmi_msg.textMessage_ID = 0;
  outC->_L13.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L13.dmi_msg.l_text = 0;
  for (i = 0; i < 255; i++) {
    outC->_L13.dmi_msg.x_text[i] = ' ';
  }
  outC->_L13.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L13.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1 = 0;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L10.valid = kcg_true;
  outC->_L10.system_clock = 0;
  outC->_L10.textMessage_ID = 0;
  outC->_L10.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L10.l_text = 0;
  for (i1 = 0; i1 < 255; i1++) {
    outC->_L10.x_text[i1] = ' ';
  }
  outC->_L10.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L10.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L11 = kcg_true;
  outC->MsgIsFixText = kcg_true;
  outC->MsgIsPlainText = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void CheckMsgIsFixText_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}

/* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText */
void CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::msg */ MsgStructure *msg,
  outC_CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L1 = 0;
  kcg_copy_MsgStructure(&outC->_L13, msg);
  outC->_L2 = outC->_L13.present;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L10,
    &outC->_L13.dmi_msg);
  outC->_L3 = outC->_L10.valid;
  outC->_L14 = outC->_L10.l_text;
  outC->_L7 = outC->_L14 == outC->_L1;
  outC->_L11 = !outC->_L7;
  outC->_L5 = outC->_L3 & outC->_L2 & outC->_L11;
  outC->MsgIsPlainText = outC->_L5;
  outC->_L16 = outC->_L3 & outC->_L2 & outC->_L7;
  outC->MsgIsFixText = outC->_L16;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

