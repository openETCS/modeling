/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void ShowMsg_FixIndexArray_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L79 = kcg_true;
  outC->_L88 = kcg_true;
  outC->_L80 = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L78.valid = kcg_true;
  outC->_L78.system_clock = 0;
  outC->_L78.textMessage_ID = 0;
  outC->_L78.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L78.l_text = 0;
  for (i = 0; i < 255; i++) {
    outC->_L78.x_text[i] = ' ';
  }
  outC->_L78.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L78.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L76 = kcg_true;
  outC->_L28.present = kcg_true;
  outC->_L28.dmi_msg.valid = kcg_true;
  outC->_L28.dmi_msg.system_clock = 0;
  outC->_L28.dmi_msg.textMessage_ID = 0;
  outC->_L28.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L28.dmi_msg.l_text = 0;
  for (i1 = 0; i1 < 255; i1++) {
    outC->_L28.dmi_msg.x_text[i1] = ' ';
  }
  outC->_L28.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L28.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L19 = kcg_true;
  outC->_L18 = 0;
  outC->_L20.valid = kcg_true;
  outC->_L20.system_clock = 0;
  outC->_L20.textMessage_ID = 0;
  outC->_L20.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L20.l_text = 0;
  for (i2 = 0; i2 < 255; i2++) {
    outC->_L20.x_text[i2] = ' ';
  }
  outC->_L20.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L20.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (i3 = 0; i3 < 27; i3++) {
    outC->_L21[i3] = balise_read_error_DMI_Types_Pkg;
  }
  outC->_L23 = balise_read_error_DMI_Types_Pkg;
  outC->_L25 = kcg_true;
  outC->_L26 = kcg_true;
  for (i4 = 0; i4 < 27; i4++) {
    outC->_L27[i4] = balise_read_error_DMI_Types_Pkg;
  }
  outC->_L6 = 0;
  outC->_L8 = 0;
  outC->_L2.present = kcg_true;
  outC->_L2.dmi_msg.valid = kcg_true;
  outC->_L2.dmi_msg.system_clock = 0;
  outC->_L2.dmi_msg.textMessage_ID = 0;
  outC->_L2.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L2.dmi_msg.l_text = 0;
  for (i5 = 0; i5 < 255; i5++) {
    outC->_L2.dmi_msg.x_text[i5] = ' ';
  }
  outC->_L2.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L2.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1 = 0;
  outC->FixIndex = 0;
  for (i6 = 0; i6 < 27; i6++) {
    /* 1 */
    Find_Q_Text_iterator_init_DMI_Control_Pkg_Utils(&outC->_1_Context_1[i6]);
  }
  /* 1 */
  CheckMsgIsFixText_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void ShowMsg_FixIndexArray_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 27; i++) {
    /* 1 */
    Find_Q_Text_iterator_reset_DMI_Control_Pkg_Utils(&outC->_1_Context_1[i]);
  }
  /* 1 */
  CheckMsgIsFixText_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray */
void ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::msg */ MsgStructure *msg,
  outC_ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray */
  static kcg_bool acc;
  static kcg_int i;
  static kcg_bool noname;
  static kcg_int _2_noname;
  static kcg_bool _3_noname;
  
  outC->_L1 = index;
  kcg_copy_MsgStructure(&outC->_L2, msg);
  /* 1 */
  CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L2,
    &outC->Context_1);
  outC->_L76 = outC->Context_1.MsgIsPlainText;
  outC->_L88 = outC->Context_1.MsgIsFixText;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L78,
    &outC->_L2.dmi_msg);
  outC->_L77 = outC->_L78.valid;
  outC->_L80 = !outC->_L77;
  outC->_L79 = outC->_L76 | outC->_L80;
  outC->_L8 = 0;
  outC->_L26 = kcg_false;
  kcg_copy_Array_DMI_Q_Text(
    &outC->_L27,
    (Array_DMI_Q_Text *) &ArrayEnum_Q_text_DMI_Control_Pkg);
  kcg_copy_MsgStructure(&outC->_L28, msg);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L20,
    &outC->_L28.dmi_msg);
  outC->_L23 = outC->_L20.q_text;
  /* pow */ for (i1 = 0; i1 < 27; i1++) {
    outC->_L21[i1] = outC->_L23;
  }
  outC->_L25 = kcg_true;
  outC->_L19 = outC->_L26;
  /* 1 */ if (outC->_L25) {
    /* 1 */ for (i = 0; i < 27; i++) {
      acc = outC->_L19;
      /* 1 */
      Find_Q_Text_iterator_DMI_Control_Pkg_Utils(
        i,
        acc,
        outC->_L27[i],
        outC->_L21[i],
        &outC->_1_Context_1[i]);
      outC->_L19 = outC->_1_Context_1[i].accout;
      outC->_L18 = i + 1;
      /* 1 */ if (!outC->_1_Context_1[i].condout) {
        break;
      }
    }
  }
  else {
    outC->_L18 = 0;
  }
  /* 1 */ if (outC->_L79) {
    outC->_L6 = outC->_L8;
  }
  else {
    outC->_L6 = outC->_L18;
  }
  outC->FixIndex = outC->_L6;
  noname = outC->_L19;
  _2_noname = outC->_L1;
  _3_noname = outC->_L88;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

