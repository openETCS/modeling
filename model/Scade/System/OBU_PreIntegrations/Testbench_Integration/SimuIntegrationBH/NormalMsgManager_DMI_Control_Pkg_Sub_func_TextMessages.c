/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void NormalMsgManager_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i32;
  static kcg_int i33;
  static kcg_int i31;
  static kcg_int i30;
  static kcg_int i29;
  static kcg_int i28;
  static kcg_int i27;
  static kcg_int i26;
  static kcg_int i25;
  static kcg_int i24;
  static kcg_int i23;
  static kcg_int i22;
  static kcg_int i21;
  static kcg_int i20;
  static kcg_int i19;
  static kcg_int i18;
  static kcg_int i17;
  static kcg_int i16;
  static kcg_int i15;
  static kcg_int i14;
  static kcg_int i13;
  static kcg_int i12;
  static kcg_int i11;
  static kcg_int i10;
  static kcg_int i9;
  static kcg_int i8;
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  for (i = 0; i < 5; i++) {
    outC->_L219[i] = 0.0;
  }
  for (i1 = 0; i1 < 5; i1++) {
    outC->_L218[i1] = 0.0;
  }
  for (i2 = 0; i2 < 10; i2++) {
    outC->_L217[i2] = 0;
  }
  outC->_L211 = 0;
  outC->_L210 = 0;
  outC->_L207 = 0;
  for (i3 = 0; i3 < 10; i3++) {
    outC->_L206[i3] = 0.0;
  }
  for (i4 = 0; i4 < 5; i4++) {
    outC->_L205[i4] = 0;
  }
  for (i5 = 0; i5 < 10; i5++) {
    outC->_L67[i5] = 0.0;
  }
  for (i7 = 0; i7 < 5; i7++) {
    for (i6 = 0; i6 < 30; i6++) {
      outC->_L198[i7][i6] = ' ';
    }
  }
  outC->_L204 = kcg_true;
  outC->_L197 = 0;
  outC->_L195 = kcg_true;
  outC->_L190 = 0;
  outC->_L189 = kcg_true;
  outC->_L188 = kcg_true;
  outC->_L176 = 0;
  for (i8 = 0; i8 < 10; i8++) {
    outC->_L172[i8] = 0;
  }
  for (i10 = 0; i10 < 10; i10++) {
    outC->_L162[i10].present = kcg_true;
    outC->_L162[i10].dmi_msg.valid = kcg_true;
    outC->_L162[i10].dmi_msg.system_clock = 0;
    outC->_L162[i10].dmi_msg.textMessage_ID = 0;
    outC->_L162[i10].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L162[i10].dmi_msg.l_text = 0;
    for (i9 = 0; i9 < 255; i9++) {
      outC->_L162[i10].dmi_msg.x_text[i9] = ' ';
    }
    outC->_L162[i10].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L162[i10].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i12 = 0; i12 < 10; i12++) {
    outC->_L28[i12].present = kcg_true;
    outC->_L28[i12].dmi_msg.valid = kcg_true;
    outC->_L28[i12].dmi_msg.system_clock = 0;
    outC->_L28[i12].dmi_msg.textMessage_ID = 0;
    outC->_L28[i12].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L28[i12].dmi_msg.l_text = 0;
    for (i11 = 0; i11 < 255; i11++) {
      outC->_L28[i12].dmi_msg.x_text[i11] = ' ';
    }
    outC->_L28[i12].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L28[i12].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L19 = kcg_true;
  for (i14 = 0; i14 < 10; i14++) {
    outC->_L20[i14].present = kcg_true;
    outC->_L20[i14].dmi_msg.valid = kcg_true;
    outC->_L20[i14].dmi_msg.system_clock = 0;
    outC->_L20[i14].dmi_msg.textMessage_ID = 0;
    outC->_L20[i14].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L20[i14].dmi_msg.l_text = 0;
    for (i13 = 0; i13 < 255; i13++) {
      outC->_L20[i14].dmi_msg.x_text[i13] = ' ';
    }
    outC->_L20[i14].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L20[i14].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i16 = 0; i16 < 10; i16++) {
    outC->_L21[i16].present = kcg_true;
    outC->_L21[i16].dmi_msg.valid = kcg_true;
    outC->_L21[i16].dmi_msg.system_clock = 0;
    outC->_L21[i16].dmi_msg.textMessage_ID = 0;
    outC->_L21[i16].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L21[i16].dmi_msg.l_text = 0;
    for (i15 = 0; i15 < 255; i15++) {
      outC->_L21[i16].dmi_msg.x_text[i15] = ' ';
    }
    outC->_L21[i16].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L21[i16].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i19 = 0; i19 < 10; i19++) {
    for (i18 = 0; i18 < 10; i18++) {
      outC->_L22[i19][i18].present = kcg_true;
      outC->_L22[i19][i18].dmi_msg.valid = kcg_true;
      outC->_L22[i19][i18].dmi_msg.system_clock = 0;
      outC->_L22[i19][i18].dmi_msg.textMessage_ID = 0;
      outC->_L22[i19][i18].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
      outC->_L22[i19][i18].dmi_msg.l_text = 0;
      for (i17 = 0; i17 < 255; i17++) {
        outC->_L22[i19][i18].dmi_msg.x_text[i17] = ' ';
      }
      outC->_L22[i19][i18].dmi_msg.q_textClass =
        Q_TEXTCLASS_Auxiliary_Information;
      outC->_L22[i19][i18].dmi_msg.q_textConfirm =
        Q_TEXTCONFIRM_No_confirmation_required;
    }
  }
  for (i20 = 0; i20 < 10; i20++) {
    outC->_L23[i20] = 0;
  }
  for (i22 = 0; i22 < 10; i22++) {
    outC->_L24[i22].present = kcg_true;
    outC->_L24[i22].dmi_msg.valid = kcg_true;
    outC->_L24[i22].dmi_msg.system_clock = 0;
    outC->_L24[i22].dmi_msg.textMessage_ID = 0;
    outC->_L24[i22].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L24[i22].dmi_msg.l_text = 0;
    for (i21 = 0; i21 < 255; i21++) {
      outC->_L24[i22].dmi_msg.x_text[i21] = ' ';
    }
    outC->_L24[i22].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L24[i22].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i24 = 0; i24 < 10; i24++) {
    outC->_L26[i24].present = kcg_true;
    outC->_L26[i24].dmi_msg.valid = kcg_true;
    outC->_L26[i24].dmi_msg.system_clock = 0;
    outC->_L26[i24].dmi_msg.textMessage_ID = 0;
    outC->_L26[i24].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L26[i24].dmi_msg.l_text = 0;
    for (i23 = 0; i23 < 255; i23++) {
      outC->_L26[i24].dmi_msg.x_text[i23] = ' ';
    }
    outC->_L26[i24].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L26[i24].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i26 = 0; i26 < 10; i26++) {
    outC->LocalArray[i26].present = kcg_true;
    outC->LocalArray[i26].dmi_msg.valid = kcg_true;
    outC->LocalArray[i26].dmi_msg.system_clock = 0;
    outC->LocalArray[i26].dmi_msg.textMessage_ID = 0;
    outC->LocalArray[i26].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->LocalArray[i26].dmi_msg.l_text = 0;
    for (i25 = 0; i25 < 255; i25++) {
      outC->LocalArray[i26].dmi_msg.x_text[i25] = ' ';
    }
    outC->LocalArray[i26].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->LocalArray[i26].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->init = kcg_true;
  outC->scrollLevel = 0;
  outC->isMoreThanFive = kcg_true;
  outC->ScrollDownEnableIndex_toDisplay = 0;
  outC->ScrollUpEnableIndex_toDisplay = 0;
  outC->isImportantMsg = kcg_true;
  for (i27 = 0; i27 < 5; i27++) {
    outC->Array_mm[i27] = 0.0;
  }
  for (i28 = 0; i28 < 5; i28++) {
    outC->Array_hh[i28] = 0.0;
  }
  for (i30 = 0; i30 < 5; i30++) {
    for (i29 = 0; i29 < 30; i29++) {
      outC->ArrayPlainText[i30][i29] = ' ';
    }
  }
  for (i31 = 0; i31 < 5; i31++) {
    outC->IndexFixedMsg[i31] = 0;
  }
  /* 1 */
  ScrollController_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_3_Context_1);
  for (i33 = 0; i33 < 10; i33++) {
    /* 1 */
    ShowMsg_FixIndexArray_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->_2_Context_1[i33]);
  }
  /* 1 */
  ShowMsg_Plain_init_DMI_Control_Pkg_Sub_func_TextMessages(&outC->_1_Context_1);
  for (i32 = 0; i32 < 10; i32++) {
    /* 1 */
    SortMsgTopDown_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_1[i32]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void NormalMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i;
  static kcg_int i1;
  
  outC->init = kcg_true;
  /* 1 */
  ScrollController_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_3_Context_1);
  for (i1 = 0; i1 < 10; i1++) {
    /* 1 */
    ShowMsg_FixIndexArray_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->_2_Context_1[i1]);
  }
  /* 1 */
  ShowMsg_Plain_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_1_Context_1);
  for (i = 0; i < 10; i++) {
    /* 1 */
    SortMsgTopDown_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_1[i]);
  }
}

/* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager */
void NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::Queue */ array_169451 *Queue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::hh_array */ array_real_10 *hh_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::mm_array */ array_real_10 *mm_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::numE */ kcg_int numE,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::scrollUp */ kcg_bool scrollUp,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::scrollDown */ kcg_bool scrollDown,
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager */
  static array_169451 acc;
  static kcg_int i1;
  static kcg_int i;
  static array_int_10 noname;
  static array_int_10 _5_noname;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::scrollLevel */
  static kcg_int last_scrollLevel;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::isMoreThanFive */
  static kcg_bool last_isMoreThanFive;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::ScrollDownEnableIndex_toDisplay */
  static kcg_int last_ScrollDownEnableIndex_toDisplay;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::ScrollUpEnableIndex_toDisplay */
  static kcg_int last_ScrollUpEnableIndex_toDisplay;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::ArrayPlainText */
  static array_char_30_5 last_ArrayPlainText;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::IndexFixedMsg */
  static array_int_5 last_IndexFixedMsg;
  static array_real_5 default_Array_hh;
  static array_real_5 default_Array_mm;
  
  default_Array_hh[0] = - 1.0;
  default_Array_hh[1] = - 1.0;
  default_Array_hh[2] = - 1.0;
  default_Array_hh[3] = - 1.0;
  default_Array_hh[4] = - 1.0;
  default_Array_mm[0] = - 1.0;
  default_Array_mm[1] = - 1.0;
  default_Array_mm[2] = - 1.0;
  default_Array_mm[3] = - 1.0;
  default_Array_mm[4] = - 1.0;
  kcg_copy_array_169451(
    &outC->_L24,
    (array_169451 *) &cMsgStructQueueMax_DMI_Control_Pkg);
  kcg_copy_array_169451(&outC->_L26, Queue);
  for (i4 = 0; i4 < 10; i4++) {
    kcg_copy_MsgStructure(&outC->_L21[i4], &outC->_L26[9 - i4]);
  }
  /* pow */ for (i3 = 0; i3 < 10; i3++) {
    kcg_copy_array_169451(&outC->_L22[i3], &outC->_L21);
  }
  outC->_L176 = numE;
  /* pow */ for (i2 = 0; i2 < 10; i2++) {
    outC->_L23[i2] = outC->_L176;
  }
  kcg_copy_array_169451(&outC->_L20, &outC->_L24);
  /* 1 */ for (i1 = 0; i1 < 10; i1++) {
    kcg_copy_array_169451(&acc, &outC->_L20);
    /* 1 */
    SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages(
      i1,
      &acc,
      &outC->_L22[i1],
      outC->_L23[i1],
      &outC->Context_1[i1]);
    kcg_copy_array_169451(&outC->_L20, &outC->Context_1[i1].outArray);
  }
  kcg_copy_array_169451(&outC->LocalArray, &outC->_L20);
  outC->_L19 = kcg_true;
  outC->isImportantMsg = outC->_L19;
  kcg_copy_array_169451(&outC->_L28, &outC->LocalArray);
  kcg_copy_array_real_10(&outC->_L206, hh_array);
  kcg_copy_array_real_5(&outC->_L218, (array_real_5 *) &outC->_L206[0]);
  kcg_copy_array_real_5(&outC->Array_hh, &outC->_L218);
  kcg_copy_array_real_10(&outC->_L67, mm_array);
  kcg_copy_array_real_5(&outC->_L219, (array_real_5 *) &outC->_L67[0]);
  kcg_copy_array_real_5(&outC->Array_mm, &outC->_L219);
  /* last_init_ck_ArrayPlainText */ if (outC->init) {
    kcg_copy_array_char_30_5(
      &last_ArrayPlainText,
      (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_char_30_5(&last_ArrayPlainText, &outC->ArrayPlainText);
  }
  kcg_copy_array_169451(&outC->_L162, &outC->LocalArray);
  /* last_init_ck_scrollLevel */ if (outC->init) {
    last_scrollLevel = 0;
  }
  else {
    last_scrollLevel = outC->scrollLevel;
  }
  outC->_L207 = last_scrollLevel;
  /* 1 */
  ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L162,
    outC->_L207,
    &outC->_1_Context_1);
  kcg_copy_array_char_30_5(&outC->_L198, &outC->_1_Context_1.PlainText);
  outC->_L204 = outC->_1_Context_1.isMoreThanFive;
  kcg_copy_array_int_10(&outC->_L217, &outC->_1_Context_1.MsgNumArray);
  kcg_copy_array_char_30_5(&outC->ArrayPlainText, &outC->_L198);
  /* last_init_ck_IndexFixedMsg */ if (outC->init) {
    last_IndexFixedMsg[0] = 0;
    last_IndexFixedMsg[1] = 0;
    last_IndexFixedMsg[2] = 0;
    last_IndexFixedMsg[3] = 0;
    last_IndexFixedMsg[4] = 0;
  }
  else {
    kcg_copy_array_int_5(&last_IndexFixedMsg, &outC->IndexFixedMsg);
  }
  outC->_L205[0] = 0;
  outC->_L205[1] = 0;
  outC->_L205[2] = 0;
  outC->_L205[3] = 0;
  outC->_L205[4] = 0;
  kcg_copy_array_int_5(&outC->IndexFixedMsg, &outC->_L205);
  /* 2 */ for (i = 0; i < 10; i++) {
    /* 1 */
    ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &outC->_L28[i],
      &outC->_2_Context_1[i]);
    outC->_L172[i] = outC->_2_Context_1[i].FixIndex;
  }
  outC->_L188 = scrollUp;
  outC->_L189 = scrollDown;
  /* last_init_ck_isMoreThanFive */ if (outC->init) {
    last_isMoreThanFive = kcg_false;
  }
  else {
    last_isMoreThanFive = outC->isMoreThanFive;
  }
  outC->_L195 = last_isMoreThanFive;
  outC->_L210 = numE;
  /* 1 */
  ScrollController_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L188,
    outC->_L189,
    outC->_L195,
    outC->_L210,
    &outC->_3_Context_1);
  outC->_L190 = outC->_3_Context_1.scrollUpTypeIndex;
  outC->_L197 = outC->_3_Context_1.scrollLevel;
  outC->_L211 = outC->_3_Context_1.scrollDownTypeIndex;
  /* last_init_ck_ScrollUpEnableIndex_toDisplay */ if (outC->init) {
    last_ScrollUpEnableIndex_toDisplay = 0;
  }
  else {
    last_ScrollUpEnableIndex_toDisplay = outC->ScrollUpEnableIndex_toDisplay;
  }
  outC->ScrollUpEnableIndex_toDisplay = outC->_L190;
  outC->isMoreThanFive = outC->_L204;
  outC->scrollLevel = outC->_L197;
  kcg_copy_array_int_10(&noname, &outC->_L172);
  /* last_init_ck_ScrollDownEnableIndex_toDisplay */ if (outC->init) {
    last_ScrollDownEnableIndex_toDisplay = 0;
  }
  else {
    last_ScrollDownEnableIndex_toDisplay =
      outC->ScrollDownEnableIndex_toDisplay;
  }
  outC->ScrollDownEnableIndex_toDisplay = outC->_L211;
  kcg_copy_array_int_10(&_5_noname, &outC->_L217);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

