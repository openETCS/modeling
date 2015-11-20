/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void AckMsgManager_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i46;
  static kcg_int i47;
  static kcg_int i48;
  static kcg_int i45;
  static kcg_int i44;
  static kcg_int i43;
  static kcg_int i42;
  static kcg_int i41;
  static kcg_int i40;
  static kcg_int i39;
  static kcg_int i38;
  static kcg_int i37;
  static kcg_int i36;
  static kcg_int i35;
  static kcg_int i34;
  static kcg_int i33;
  static kcg_int i32;
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
    outC->_L61[i] = 0;
  }
  for (i1 = 0; i1 < 5; i1++) {
    outC->_L60[i1] = 0;
  }
  outC->_L59 = 0;
  outC->_L58 = 0;
  outC->_L56 = 0;
  for (i2 = 0; i2 < 5; i2++) {
    outC->_L55[i2] = 0.0;
  }
  outC->_L54 = 0;
  for (i3 = 0; i3 < 5; i3++) {
    outC->_L53[i3] = 0.0;
  }
  for (i4 = 0; i4 < 5; i4++) {
    outC->_L51[i4] = 0;
  }
  outC->_L52 = 0;
  for (i5 = 0; i5 < 5; i5++) {
    outC->_L50[i5] = 0;
  }
  outC->_L49 = 0;
  outC->_L42 = 0.0;
  outC->_L43 = 0.0;
  for (i6 = 0; i6 < 5; i6++) {
    outC->_L44[i6] = 0.0;
  }
  outC->_L45 = 0.0;
  outC->_L46 = 0.0;
  outC->_L41 = 0.0;
  outC->_L40 = 0.0;
  outC->_L34 = 0.0;
  outC->_L35 = 0.0;
  outC->_L36 = 0.0;
  outC->_L37 = 0.0;
  for (i7 = 0; i7 < 5; i7++) {
    outC->_L38[i7] = 0.0;
  }
  for (i8 = 0; i8 < 5; i8++) {
    outC->_L21[i8] = 0.0;
  }
  for (i9 = 0; i9 < 5; i9++) {
    outC->_L23[i9] = 0.0;
  }
  for (i10 = 0; i10 < 5; i10++) {
    outC->_L28[i10] = 0.0;
  }
  for (i12 = 0; i12 < 5; i12++) {
    for (i11 = 0; i11 < 5; i11++) {
      outC->_L29[i12][i11] = 0.0;
    }
  }
  for (i13 = 0; i13 < 5; i13++) {
    outC->_L31[i13] = 0.0;
  }
  for (i15 = 0; i15 < 5; i15++) {
    for (i14 = 0; i14 < 5; i14++) {
      outC->_L33[i15][i14] = 0.0;
    }
  }
  for (i16 = 0; i16 < 5; i16++) {
    outC->_L20[i16] = 0.0;
  }
  for (i17 = 0; i17 < 5; i17++) {
    outC->_L19[i17] = 0.0;
  }
  outC->_L17 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = 0;
  outC->_L12 = 0;
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  for (i19 = 0; i19 < 5; i19++) {
    outC->_L1[i19].present = kcg_true;
    outC->_L1[i19].dmi_msg.valid = kcg_true;
    outC->_L1[i19].dmi_msg.system_clock = 0;
    outC->_L1[i19].dmi_msg.textMessage_ID = 0;
    outC->_L1[i19].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L1[i19].dmi_msg.l_text = 0;
    for (i18 = 0; i18 < 255; i18++) {
      outC->_L1[i19].dmi_msg.x_text[i18] = ' ';
    }
    outC->_L1[i19].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L1[i19].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->num_hh = 0;
  outC->num_mm = 0;
  outC->PlainText = kcg_true;
  outC->FixText = kcg_true;
  for (i20 = 0; i20 < 255; i20++) {
    outC->_L26_IfBlock1[i20] = ' ';
  }
  outC->_L107_IfBlock1.present = kcg_true;
  outC->_L107_IfBlock1.dmi_msg.valid = kcg_true;
  outC->_L107_IfBlock1.dmi_msg.system_clock = 0;
  outC->_L107_IfBlock1.dmi_msg.textMessage_ID = 0;
  outC->_L107_IfBlock1.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L107_IfBlock1.dmi_msg.l_text = 0;
  for (i21 = 0; i21 < 255; i21++) {
    outC->_L107_IfBlock1.dmi_msg.x_text[i21] = ' ';
  }
  outC->_L107_IfBlock1.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L107_IfBlock1.dmi_msg.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L11_IfBlock1.valid = kcg_true;
  outC->_L11_IfBlock1.system_clock = 0;
  outC->_L11_IfBlock1.textMessage_ID = 0;
  outC->_L11_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L11_IfBlock1.l_text = 0;
  for (i22 = 0; i22 < 255; i22++) {
    outC->_L11_IfBlock1.x_text[i22] = ' ';
  }
  outC->_L11_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L11_IfBlock1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (i24 = 0; i24 < 5; i24++) {
    outC->_L128_IfBlock1[i24].present = kcg_true;
    outC->_L128_IfBlock1[i24].dmi_msg.valid = kcg_true;
    outC->_L128_IfBlock1[i24].dmi_msg.system_clock = 0;
    outC->_L128_IfBlock1[i24].dmi_msg.textMessage_ID = 0;
    outC->_L128_IfBlock1[i24].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L128_IfBlock1[i24].dmi_msg.l_text = 0;
    for (i23 = 0; i23 < 255; i23++) {
      outC->_L128_IfBlock1[i24].dmi_msg.x_text[i23] = ' ';
    }
    outC->_L128_IfBlock1[i24].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L128_IfBlock1[i24].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i25 = 0; i25 < 30; i25++) {
    outC->_L19_IfBlock1[i25] = ' ';
  }
  for (i27 = 0; i27 < 5; i27++) {
    for (i26 = 0; i26 < 30; i26++) {
      outC->_L410_IfBlock1[i27][i26] = ' ';
    }
  }
  for (i28 = 0; i28 < 30; i28++) {
    outC->_L511_IfBlock1[i28] = ' ';
  }
  for (i29 = 0; i29 < 30; i29++) {
    outC->_L6_IfBlock1[i29] = ' ';
  }
  for (i30 = 0; i30 < 30; i30++) {
    outC->_L7_IfBlock1[i30] = ' ';
  }
  for (i31 = 0; i31 < 30; i31++) {
    outC->_L812_IfBlock1[i31] = ' ';
  }
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L3_IfBlock1.valid = kcg_true;
  outC->_L3_IfBlock1.system_clock = 0;
  outC->_L3_IfBlock1.textMessage_ID = 0;
  outC->_L3_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L3_IfBlock1.l_text = 0;
  for (i32 = 0; i32 < 255; i32++) {
    outC->_L3_IfBlock1.x_text[i32] = ' ';
  }
  outC->_L3_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L3_IfBlock1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (i34 = 0; i34 < 5; i34++) {
    outC->_L2_IfBlock1[i34].present = kcg_true;
    outC->_L2_IfBlock1[i34].dmi_msg.valid = kcg_true;
    outC->_L2_IfBlock1[i34].dmi_msg.system_clock = 0;
    outC->_L2_IfBlock1[i34].dmi_msg.textMessage_ID = 0;
    outC->_L2_IfBlock1[i34].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L2_IfBlock1[i34].dmi_msg.l_text = 0;
    for (i33 = 0; i33 < 255; i33++) {
      outC->_L2_IfBlock1[i34].dmi_msg.x_text[i33] = ' ';
    }
    outC->_L2_IfBlock1[i34].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L2_IfBlock1[i34].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L1_IfBlock1.present = kcg_true;
  outC->_L1_IfBlock1.dmi_msg.valid = kcg_true;
  outC->_L1_IfBlock1.dmi_msg.system_clock = 0;
  outC->_L1_IfBlock1.dmi_msg.textMessage_ID = 0;
  outC->_L1_IfBlock1.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_IfBlock1.dmi_msg.l_text = 0;
  for (i35 = 0; i35 < 255; i35++) {
    outC->_L1_IfBlock1.dmi_msg.x_text[i35] = ' ';
  }
  outC->_L1_IfBlock1.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_IfBlock1.dmi_msg.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  for (i36 = 0; i36 < 27; i36++) {
    outC->_L8_IfBlock1[i36] = balise_read_error_DMI_Types_Pkg;
  }
  outC->_L5_IfBlock1 = kcg_true;
  for (i37 = 0; i37 < 27; i37++) {
    outC->_L4_IfBlock1[i37] = balise_read_error_DMI_Types_Pkg;
  }
  outC->_L10_IfBlock1 = balise_read_error_DMI_Types_Pkg;
  for (i38 = 0; i38 < 4; i38++) {
    outC->_L12_IfBlock1[i38] = 0;
  }
  for (i39 = 0; i39 < 5; i39++) {
    outC->_L13_IfBlock1[i39] = 0;
  }
  outC->_L14_IfBlock1 = 0;
  outC->_L15_IfBlock1 = 0;
  outC->_L16_IfBlock1 = 0;
  outC->_L17_IfBlock1 = 0;
  for (i40 = 0; i40 < 1; i40++) {
    outC->_L18_IfBlock1[i40] = 0;
  }
  outC->_L21_IfBlock1 = kcg_true;
  outC->_L23_IfBlock1 = 0;
  outC->_L24_IfBlock1 = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->FlashingBorderMsg = kcg_true;
  for (i41 = 0; i41 < 5; i41++) {
    outC->Array_mm[i41] = 0.0;
  }
  for (i42 = 0; i42 < 5; i42++) {
    outC->Array_hh[i42] = 0.0;
  }
  for (i44 = 0; i44 < 5; i44++) {
    for (i43 = 0; i43 < 30; i43++) {
      outC->ArrayPlainText[i44][i43] = ' ';
    }
  }
  for (i45 = 0; i45 < 5; i45++) {
    outC->IndexFixedMsg[i45] = 0;
  }
  for (i48 = 0; i48 < 5; i48++) {
    /* 2 */
    SortTimeTopDown_ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->_5_Context_2[i48]);
  }
  /* 2 */ Length_init_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_2);
  for (i47 = 0; i47 < 5; i47++) {
    /* 1 */
    SortTimeTopDown_ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->_4_Context_1[i47]);
  }
  /* 1 */
  Length_init_DMI_Control_Pkg_Sub_func_TextMessages(&outC->_3_Context_1);
  /* 1 */
  FlashingOperator_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_2_Context_1);
  for (i46 = 0; i46 < 27; i46++) {
    /* 1 */
    Find_Q_Text_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->_1_Context_1[i46]);
  }
  /* 1 */
  CheckTypeOfText_init_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void AckMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i;
  static kcg_int i1;
  static kcg_int i2;
  
  for (i2 = 0; i2 < 5; i2++) {
    /* 2 */
    SortTimeTopDown_ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->_5_Context_2[i2]);
  }
  /* 2 */ Length_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_2);
  for (i1 = 0; i1 < 5; i1++) {
    /* 1 */
    SortTimeTopDown_ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->_4_Context_1[i1]);
  }
  /* 1 */
  Length_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->_3_Context_1);
  /* 1 */
  FlashingOperator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_2_Context_1);
  for (i = 0; i < 27; i++) {
    /* 1 */
    Find_Q_Text_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->_1_Context_1[i]);
  }
  /* 1 */
  CheckTypeOfText_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager */
void AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::Queue */ array_170229 *Queue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::SystemTime */ kcg_int SystemTime,
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::array_hh_local */ array_real_5 *array_hh_local,
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::array_mm_local */ array_real_5 *array_mm_local,
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::numAck */ kcg_int numAck,
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i12;
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager */
  static kcg_bool acc11;
  static kcg_int i10;
  static kcg_int i9;
  static kcg_int i8;
  static kcg_int i7;
  static kcg_int i6;
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager */
  static array_real_5 acc5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager */
  static array_real_5 acc;
  static kcg_int i;
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::ArrayPlainText */
  static array_char_30_5 _14_ArrayPlainText;
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IndexFixedMsg */
  static array_int_5 _13_IndexFixedMsg;
  static kcg_bool noname;
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::ArrayPlainText */
  static array_char_30_5 ArrayPlainText;
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::IndexFixedMsg */
  static array_int_5 IndexFixedMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::ArrayPlainText */
  static array_char_30_5 _15_ArrayPlainText;
  /* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager::ArrayPlainText */
  static array_char_30_5 _16_ArrayPlainText;
  static kcg_bool _17_noname;
  static array_int_5 default_IndexFixedMsg;
  static array_real_5 default_Array_hh;
  static array_real_5 default_Array_mm;
  
  default_IndexFixedMsg[0] = 0;
  default_IndexFixedMsg[1] = 0;
  default_IndexFixedMsg[2] = 0;
  default_IndexFixedMsg[3] = 0;
  default_IndexFixedMsg[4] = 0;
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
  kcg_copy_array_170229(&outC->_L1, Queue);
  /* 1 */
  CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L1,
    &outC->Context_1);
  outC->_L17 = outC->Context_1.Output1;
  outC->_L18 = outC->Context_1.Output2;
  outC->FixText = outC->_L17;
  outC->IfBlock1_clock = outC->FixText;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    kcg_copy_Array_DMI_Q_Text(
      &outC->_L4_IfBlock1,
      (Array_DMI_Q_Text *) &ArrayEnum_Q_text_DMI_Control_Pkg);
    kcg_copy_array_170229(&outC->_L2_IfBlock1, Queue);
    kcg_copy_MsgStructure(&outC->_L1_IfBlock1, &outC->_L2_IfBlock1[0]);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L3_IfBlock1,
      &outC->_L1_IfBlock1.dmi_msg);
    outC->_L10_IfBlock1 = outC->_L3_IfBlock1.q_text;
    /* pow */ for (i12 = 0; i12 < 27; i12++) {
      outC->_L8_IfBlock1[i12] = outC->_L10_IfBlock1;
    }
    outC->_L24_IfBlock1 = kcg_true;
    outC->_L21_IfBlock1 = outC->_L5_IfBlock1;
    if (outC->_L24_IfBlock1) {
      for (i10 = 0; i10 < 27; i10++) {
        acc11 = outC->_L21_IfBlock1;
        /* 1 */
        Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
          i10,
          acc11,
          outC->_L4_IfBlock1[i10],
          outC->_L8_IfBlock1[i10],
          &outC->_1_Context_1[i10]);
        outC->_L21_IfBlock1 = outC->_1_Context_1[i10].output;
        outC->_L23_IfBlock1 = i10 + 1;
        if (!outC->_1_Context_1[i10].accout) {
          break;
        }
      }
    }
    else {
      outC->_L23_IfBlock1 = 0;
    }
    /* pow */ for (i9 = 0; i9 < 1; i9++) {
      outC->_L18_IfBlock1[i9] = outC->_L23_IfBlock1;
    }
    outC->_L14_IfBlock1 = 0;
    outC->_L15_IfBlock1 = 0;
    outC->_L16_IfBlock1 = 0;
    outC->_L17_IfBlock1 = 0;
    outC->_L12_IfBlock1[0] = outC->_L14_IfBlock1;
    outC->_L12_IfBlock1[1] = outC->_L15_IfBlock1;
    outC->_L12_IfBlock1[2] = outC->_L16_IfBlock1;
    outC->_L12_IfBlock1[3] = outC->_L17_IfBlock1;
    kcg_copy_P044_other_data_TM_TrainToTrack(
      &outC->_L13_IfBlock1[0],
      &outC->_L18_IfBlock1);
    kcg_copy_array_int_4(&outC->_L13_IfBlock1[1], &outC->_L12_IfBlock1);
    kcg_copy_array_int_5(&_13_IndexFixedMsg, &outC->_L13_IfBlock1);
    kcg_copy_array_int_5(&outC->IndexFixedMsg, &_13_IndexFixedMsg);
  }
  else {
    kcg_copy_array_int_5(&IndexFixedMsg, &default_IndexFixedMsg);
    kcg_copy_array_int_5(&outC->IndexFixedMsg, &IndexFixedMsg);
  }
  outC->PlainText = outC->_L18;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    kcg_copy_array_char_30_5(
      &_14_ArrayPlainText,
      (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
    kcg_copy_array_char_30_5(&outC->ArrayPlainText, &_14_ArrayPlainText);
    noname = outC->_L21_IfBlock1;
  }
  else {
    outC->else_clock_IfBlock1 = outC->PlainText;
    /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
      kcg_copy_array_170229(&outC->_L128_IfBlock1, Queue);
      kcg_copy_MsgStructure(&outC->_L107_IfBlock1, &outC->_L128_IfBlock1[0]);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L11_IfBlock1,
        &outC->_L107_IfBlock1.dmi_msg);
      kcg_copy_DMI_TEXT_DMI_Types_Pkg(
        &outC->_L26_IfBlock1,
        &outC->_L11_IfBlock1.x_text);
      kcg_copy_array_char_30(
        &outC->_L19_IfBlock1,
        (array_char_30 *) &outC->_L26_IfBlock1[0]);
      kcg_copy_array_char_30(
        &outC->_L812_IfBlock1,
        (array_char_30 *) &outC->_L26_IfBlock1[30]);
      kcg_copy_array_char_30(
        &outC->_L511_IfBlock1,
        (array_char_30 *) &outC->_L26_IfBlock1[60]);
      kcg_copy_array_char_30(
        &outC->_L7_IfBlock1,
        (array_char_30 *) &outC->_L26_IfBlock1[90]);
      kcg_copy_array_char_30(
        &outC->_L6_IfBlock1,
        (array_char_30 *) &outC->_L26_IfBlock1[120]);
      kcg_copy_array_char_30(&outC->_L410_IfBlock1[0], &outC->_L19_IfBlock1);
      kcg_copy_array_char_30(&outC->_L410_IfBlock1[1], &outC->_L812_IfBlock1);
      kcg_copy_array_char_30(&outC->_L410_IfBlock1[2], &outC->_L511_IfBlock1);
      kcg_copy_array_char_30(&outC->_L410_IfBlock1[3], &outC->_L7_IfBlock1);
      kcg_copy_array_char_30(&outC->_L410_IfBlock1[4], &outC->_L6_IfBlock1);
      kcg_copy_array_char_30_5(&_16_ArrayPlainText, &outC->_L410_IfBlock1);
      kcg_copy_array_char_30_5(&ArrayPlainText, &_16_ArrayPlainText);
    }
    else {
      kcg_copy_array_char_30_5(
        &_15_ArrayPlainText,
        (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
      kcg_copy_array_char_30_5(&ArrayPlainText, &_15_ArrayPlainText);
    }
    kcg_copy_array_char_30_5(&outC->ArrayPlainText, &ArrayPlainText);
  }
  outC->_L14 = kcg_true;
  outC->_L12 = SystemTime;
  outC->_L13 = cIntervalFlashingTimeMsg_DMI_Control_Pkg;
  /* 1 */
  FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L14,
    outC->_L12,
    outC->_L13,
    &outC->_2_Context_1);
  outC->_L10 = outC->_2_Context_1.flashigOut;
  outC->_L11 = outC->_2_Context_1.active;
  _17_noname = outC->_L11;
  outC->FlashingBorderMsg = outC->_L10;
  kcg_copy_array_real_5(&outC->_L19, array_hh_local);
  kcg_copy_array_real_5(&outC->_L20, array_mm_local);
  kcg_copy_array_real_5(
    &outC->_L21,
    (array_real_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
  kcg_copy_array_real_5(
    &outC->_L28,
    (array_real_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
  /* pow */ for (i8 = 0; i8 < 5; i8++) {
    kcg_copy_array_real_5(&outC->_L33[i8], &outC->_L20);
  }
  outC->_L52 = numAck;
  /* pow */ for (i7 = 0; i7 < 5; i7++) {
    outC->_L51[i7] = outC->_L52;
  }
  kcg_copy_array_real_5(&outC->_L53, array_mm_local);
  /* 1 */
  Length_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L53,
    &outC->_3_Context_1);
  outC->_L54 = outC->_3_Context_1.length;
  outC->num_mm = outC->_L54;
  outC->_L59 = outC->num_mm;
  /* pow */ for (i6 = 0; i6 < 5; i6++) {
    outC->_L61[i6] = outC->_L59;
  }
  kcg_copy_array_real_5(&outC->_L23, &outC->_L28);
  /* 1 */ for (i4 = 0; i4 < 5; i4++) {
    kcg_copy_array_real_5(&acc5, &outC->_L23);
    /* 1 */
    SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages(
      i4,
      &acc5,
      &outC->_L33[i4],
      outC->_L51[i4],
      outC->_L61[i4],
      &outC->_4_Context_1[i4]);
    kcg_copy_array_real_5(&outC->_L23, &outC->_4_Context_1[i4].outTimeArray);
  }
  /* pow */ for (i3 = 0; i3 < 5; i3++) {
    kcg_copy_array_real_5(&outC->_L29[i3], &outC->_L19);
  }
  outC->_L49 = numAck;
  /* pow */ for (i2 = 0; i2 < 5; i2++) {
    outC->_L50[i2] = outC->_L49;
  }
  kcg_copy_array_real_5(&outC->_L55, array_hh_local);
  /* 2 */
  Length_DMI_Control_Pkg_Sub_func_TextMessages(&outC->_L55, &outC->Context_2);
  outC->_L56 = outC->Context_2.length;
  outC->num_hh = outC->_L56;
  outC->_L58 = outC->num_hh;
  /* pow */ for (i1 = 0; i1 < 5; i1++) {
    outC->_L60[i1] = outC->_L58;
  }
  kcg_copy_array_real_5(&outC->_L31, &outC->_L21);
  /* 2 */ for (i = 0; i < 5; i++) {
    kcg_copy_array_real_5(&acc, &outC->_L31);
    /* 2 */
    SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &acc,
      &outC->_L29[i],
      outC->_L50[i],
      outC->_L60[i],
      &outC->_5_Context_2[i]);
    kcg_copy_array_real_5(&outC->_L31, &outC->_5_Context_2[i].outTimeArray);
  }
  outC->_L40 = outC->_L31[0];
  outC->_L35 = - 1.0;
  outC->_L36 = - 1.0;
  outC->_L37 = - 1.0;
  outC->_L34 = - 1.0;
  outC->_L38[0] = outC->_L40;
  outC->_L38[1] = outC->_L35;
  outC->_L38[2] = outC->_L36;
  outC->_L38[3] = outC->_L37;
  outC->_L38[4] = outC->_L34;
  kcg_copy_array_real_5(&outC->Array_hh, &outC->_L38);
  outC->_L41 = outC->_L23[0];
  outC->_L42 = - 1.0;
  outC->_L45 = - 1.0;
  outC->_L43 = - 1.0;
  outC->_L46 = - 1.0;
  outC->_L44[0] = outC->_L41;
  outC->_L44[1] = outC->_L42;
  outC->_L44[2] = outC->_L45;
  outC->_L44[3] = outC->_L43;
  outC->_L44[4] = outC->_L46;
  kcg_copy_array_real_5(&outC->Array_mm, &outC->_L44);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

