/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void TextMessagesDipatcher_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
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
  
  outC->_L14 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L9 = 0;
  outC->_L10 = 0;
  outC->_L11 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = 0;
  outC->_L1.textMessage_ID = 0;
  outC->_L1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1.l_text = 0;
  for (i = 0; i < 255; i++) {
    outC->_L1.x_text[i] = ' ';
  }
  outC->_L1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->timeExpired = kcg_true;
  outC->ImportantMsg = kcg_true;
  outC->AckMsg = kcg_true;
  outC->AuxiMsg = kcg_true;
  outC->_L42_IfBlock5 = 0;
  for (i1 = 0; i1 < 10; i1++) {
    outC->_L41_IfBlock5[i1] = 0.0;
  }
  for (i2 = 0; i2 < 10; i2++) {
    outC->_L40_IfBlock5[i2] = 0.0;
  }
  outC->_L39_IfBlock5 = kcg_true;
  outC->_L33_IfBlock5 = kcg_true;
  outC->_L34_IfBlock5 = kcg_true;
  outC->_L35_IfBlock5 = 0;
  for (i4 = 0; i4 < 10; i4++) {
    outC->_L36_IfBlock5[i4].present = kcg_true;
    outC->_L36_IfBlock5[i4].dmi_msg.valid = kcg_true;
    outC->_L36_IfBlock5[i4].dmi_msg.system_clock = 0;
    outC->_L36_IfBlock5[i4].dmi_msg.textMessage_ID = 0;
    outC->_L36_IfBlock5[i4].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L36_IfBlock5[i4].dmi_msg.l_text = 0;
    for (i3 = 0; i3 < 255; i3++) {
      outC->_L36_IfBlock5[i4].dmi_msg.x_text[i3] = ' ';
    }
    outC->_L36_IfBlock5[i4].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L36_IfBlock5[i4].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L27_IfBlock5.valid = kcg_true;
  outC->_L27_IfBlock5.system_clock = 0;
  outC->_L27_IfBlock5.textMessage_ID = 0;
  outC->_L27_IfBlock5.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L27_IfBlock5.l_text = 0;
  for (i5 = 0; i5 < 255; i5++) {
    outC->_L27_IfBlock5.x_text[i5] = ' ';
  }
  outC->_L27_IfBlock5.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L27_IfBlock5.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L47_IfBlock5 = kcg_true;
  for (i6 = 0; i6 < 10; i6++) {
    outC->_L45_IfBlock5[i6] = 0.0;
  }
  for (i7 = 0; i7 < 10; i7++) {
    outC->_L44_IfBlock5[i7] = 0.0;
  }
  outC->_L43_IfBlock5 = 0;
  for (i9 = 0; i9 < 10; i9++) {
    outC->_L344_IfBlock5[i9].present = kcg_true;
    outC->_L344_IfBlock5[i9].dmi_msg.valid = kcg_true;
    outC->_L344_IfBlock5[i9].dmi_msg.system_clock = 0;
    outC->_L344_IfBlock5[i9].dmi_msg.textMessage_ID = 0;
    outC->_L344_IfBlock5[i9].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L344_IfBlock5[i9].dmi_msg.l_text = 0;
    for (i8 = 0; i8 < 255; i8++) {
      outC->_L344_IfBlock5[i9].dmi_msg.x_text[i8] = ' ';
    }
    outC->_L344_IfBlock5[i9].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L344_IfBlock5[i9].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L30_IfBlock5 = 0;
  for (i10 = 0; i10 < 10; i10++) {
    outC->_L31_IfBlock5[i10] = 0.0;
  }
  for (i11 = 0; i11 < 10; i11++) {
    outC->_L32_IfBlock5[i11] = 0.0;
  }
  outC->_L335_IfBlock5 = kcg_true;
  for (i13 = 0; i13 < 5; i13++) {
    outC->_L286_IfBlock5[i13].present = kcg_true;
    outC->_L286_IfBlock5[i13].dmi_msg.valid = kcg_true;
    outC->_L286_IfBlock5[i13].dmi_msg.system_clock = 0;
    outC->_L286_IfBlock5[i13].dmi_msg.textMessage_ID = 0;
    outC->_L286_IfBlock5[i13].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L286_IfBlock5[i13].dmi_msg.l_text = 0;
    for (i12 = 0; i12 < 255; i12++) {
      outC->_L286_IfBlock5[i13].dmi_msg.x_text[i12] = ' ';
    }
    outC->_L286_IfBlock5[i13].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L286_IfBlock5[i13].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L24_IfBlock5 = kcg_true;
  outC->_L23_IfBlock5 = kcg_true;
  outC->_L11_IfBlock5 = 0;
  for (i15 = 0; i15 < 10; i15++) {
    outC->_L12_IfBlock5[i15].present = kcg_true;
    outC->_L12_IfBlock5[i15].dmi_msg.valid = kcg_true;
    outC->_L12_IfBlock5[i15].dmi_msg.system_clock = 0;
    outC->_L12_IfBlock5[i15].dmi_msg.textMessage_ID = 0;
    outC->_L12_IfBlock5[i15].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L12_IfBlock5[i15].dmi_msg.l_text = 0;
    for (i14 = 0; i14 < 255; i14++) {
      outC->_L12_IfBlock5[i15].dmi_msg.x_text[i14] = ' ';
    }
    outC->_L12_IfBlock5[i15].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L12_IfBlock5[i15].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L1_IfBlock5 = kcg_true;
  for (i16 = 0; i16 < 5; i16++) {
    outC->_L2_IfBlock5[i16] = 0.0;
  }
  for (i17 = 0; i17 < 5; i17++) {
    outC->_L3_IfBlock5[i17] = 0.0;
  }
  outC->_L9_IfBlock5 = kcg_true;
  for (i18 = 0; i18 < 5; i18++) {
    outC->_L8_IfBlock5[i18] = 0.0;
  }
  for (i19 = 0; i19 < 5; i19++) {
    outC->_L7_IfBlock5[i19] = 0.0;
  }
  outC->_L6_IfBlock5 = 0;
  for (i21 = 0; i21 < 5; i21++) {
    outC->_L57_IfBlock5[i21].present = kcg_true;
    outC->_L57_IfBlock5[i21].dmi_msg.valid = kcg_true;
    outC->_L57_IfBlock5[i21].dmi_msg.system_clock = 0;
    outC->_L57_IfBlock5[i21].dmi_msg.textMessage_ID = 0;
    outC->_L57_IfBlock5[i21].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L57_IfBlock5[i21].dmi_msg.l_text = 0;
    for (i20 = 0; i20 < 255; i20++) {
      outC->_L57_IfBlock5[i21].dmi_msg.x_text[i20] = ' ';
    }
    outC->_L57_IfBlock5[i21].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L57_IfBlock5[i21].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L10_IfBlock5 = 0;
  for (i23 = 0; i23 < 5; i23++) {
    outC->_L5_IfBlock5[i23].present = kcg_true;
    outC->_L5_IfBlock5[i23].dmi_msg.valid = kcg_true;
    outC->_L5_IfBlock5[i23].dmi_msg.system_clock = 0;
    outC->_L5_IfBlock5[i23].dmi_msg.textMessage_ID = 0;
    outC->_L5_IfBlock5[i23].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L5_IfBlock5[i23].dmi_msg.l_text = 0;
    for (i22 = 0; i22 < 255; i22++) {
      outC->_L5_IfBlock5[i23].dmi_msg.x_text[i22] = ' ';
    }
    outC->_L5_IfBlock5[i23].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L5_IfBlock5[i23].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L13_IfBlock5.valid = kcg_true;
  outC->_L13_IfBlock5.system_clock = 0;
  outC->_L13_IfBlock5.textMessage_ID = 0;
  outC->_L13_IfBlock5.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L13_IfBlock5.l_text = 0;
  for (i24 = 0; i24 < 255; i24++) {
    outC->_L13_IfBlock5.x_text[i24] = ' ';
  }
  outC->_L13_IfBlock5.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L13_IfBlock5.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L28_IfBlock5 = 0;
  outC->_L48_IfBlock5 = kcg_true;
  for (i25 = 0; i25 < 5; i25++) {
    outC->_L50_IfBlock5[i25] = 0.0;
  }
  for (i26 = 0; i26 < 5; i26++) {
    outC->_L51_IfBlock5[i26] = 0.0;
  }
  outC->_L49_IfBlock5 = kcg_true;
  outC->_L52_IfBlock5 = 0;
  outC->IfBlock5_clock = kcg_true;
  outC->else_clock_IfBlock5 = kcg_true;
  outC->debugExpired = kcg_true;
  outC->init = kcg_true;
  for (i27 = 0; i27 < 10; i27++) {
    outC->hh_local_array[i27] = 0.0;
  }
  outC->Local_isEmpty = kcg_true;
  for (i28 = 0; i28 < 10; i28++) {
    outC->mm_local_array[i28] = 0.0;
  }
  outC->Local_ack_empty = kcg_true;
  for (i30 = 0; i30 < 10; i30++) {
    outC->Local_NormaliMsgQueue[i30].present = kcg_true;
    outC->Local_NormaliMsgQueue[i30].dmi_msg.valid = kcg_true;
    outC->Local_NormaliMsgQueue[i30].dmi_msg.system_clock = 0;
    outC->Local_NormaliMsgQueue[i30].dmi_msg.textMessage_ID = 0;
    outC->Local_NormaliMsgQueue[i30].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->Local_NormaliMsgQueue[i30].dmi_msg.l_text = 0;
    for (i29 = 0; i29 < 255; i29++) {
      outC->Local_NormaliMsgQueue[i30].dmi_msg.x_text[i29] = ' ';
    }
    outC->Local_NormaliMsgQueue[i30].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->Local_NormaliMsgQueue[i30].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->numNormalMsg = 0;
  for (i32 = 0; i32 < 5; i32++) {
    outC->Local_AckMsgQueue[i32].present = kcg_true;
    outC->Local_AckMsgQueue[i32].dmi_msg.valid = kcg_true;
    outC->Local_AckMsgQueue[i32].dmi_msg.system_clock = 0;
    outC->Local_AckMsgQueue[i32].dmi_msg.textMessage_ID = 0;
    outC->Local_AckMsgQueue[i32].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->Local_AckMsgQueue[i32].dmi_msg.l_text = 0;
    for (i31 = 0; i31 < 255; i31++) {
      outC->Local_AckMsgQueue[i32].dmi_msg.x_text[i31] = ' ';
    }
    outC->Local_AckMsgQueue[i32].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->Local_AckMsgQueue[i32].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i33 = 0; i33 < 5; i33++) {
    outC->hh_local_array_ack[i33] = 0.0;
  }
  for (i34 = 0; i34 < 5; i34++) {
    outC->mm_local_array_ack[i34] = 0.0;
  }
  outC->numAckMsg = 0;
  for (i35 = 0; i35 < 5; i35++) {
    outC->ack_mm_array[i35] = 0.0;
  }
  for (i36 = 0; i36 < 5; i36++) {
    outC->ack_hh_array[i36] = 0.0;
  }
  for (i37 = 0; i37 < 10; i37++) {
    outC->mm_array[i37] = 0.0;
  }
  for (i38 = 0; i38 < 10; i38++) {
    outC->hh_array[i38] = 0.0;
  }
  outC->NumAckMsg = 0;
  outC->isEmpty = kcg_true;
  outC->AckisEmpty = kcg_true;
  outC->NumE = 0;
  for (i40 = 0; i40 < 10; i40++) {
    outC->MsgQueue[i40].present = kcg_true;
    outC->MsgQueue[i40].dmi_msg.valid = kcg_true;
    outC->MsgQueue[i40].dmi_msg.system_clock = 0;
    outC->MsgQueue[i40].dmi_msg.textMessage_ID = 0;
    outC->MsgQueue[i40].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->MsgQueue[i40].dmi_msg.l_text = 0;
    for (i39 = 0; i39 < 255; i39++) {
      outC->MsgQueue[i40].dmi_msg.x_text[i39] = ' ';
    }
    outC->MsgQueue[i40].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->MsgQueue[i40].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i42 = 0; i42 < 5; i42++) {
    outC->AckMsgQueue[i42].present = kcg_true;
    outC->AckMsgQueue[i42].dmi_msg.valid = kcg_true;
    outC->AckMsgQueue[i42].dmi_msg.system_clock = 0;
    outC->AckMsgQueue[i42].dmi_msg.textMessage_ID = 0;
    outC->AckMsgQueue[i42].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->AckMsgQueue[i42].dmi_msg.l_text = 0;
    for (i41 = 0; i41 < 255; i41++) {
      outC->AckMsgQueue[i42].dmi_msg.x_text[i41] = ' ';
    }
    outC->AckMsgQueue[i42].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->AckMsgQueue[i42].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  /* 1 */
  MSGQueue_normalMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_3_Context_1);
  /* 3 */
  MSGQueue_AcklMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_3);
  /* 1 */
  DeleteNormalMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_2_Context_1);
  /* 1 */ countDownTimer_init_MoRC_Pck_Utils(&outC->_1_Context_1);
  /* 2 */
  DeleteAckMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_2);
  /* 1 */
  CheckAckOrNot_init_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void TextMessagesDipatcher_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  /* 1 */
  MSGQueue_normalMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_3_Context_1);
  /* 3 */
  MSGQueue_AcklMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_3);
  /* 1 */
  DeleteNormalMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_2_Context_1);
  /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->_1_Context_1);
  /* 2 */
  DeleteAckMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_2);
  /* 1 */
  CheckAckOrNot_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher */
void TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::dmi_txt_msg */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_txt_msg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::SystemTime */ kcg_int SystemTime,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::delete */ kcg_bool delete,
  outC_TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_local_array */
  static array_real_10 _20_hh_local_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_isEmpty */
  static kcg_bool _19_Local_isEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_local_array */
  static array_real_10 _18_mm_local_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_ack_empty */
  static kcg_bool _17_Local_ack_empty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_NormaliMsgQueue */
  static array_169451 _16_Local_NormaliMsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::numNormalMsg */
  static kcg_int _15_numNormalMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_AckMsgQueue */
  static array_170229 _14_Local_AckMsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_local_array_ack */
  static array_real_5 _13_hh_local_array_ack;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_local_array_ack */
  static array_real_5 _12_mm_local_array_ack;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::numAckMsg */
  static kcg_int _11_numAckMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ack_mm_array */
  static array_real_5 _10_ack_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ack_hh_array */
  static array_real_5 _9_ack_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_array */
  static array_real_10 _8_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_array */
  static array_real_10 _7_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::NumAckMsg */
  static kcg_int _6_NumAckMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::isEmpty */
  static kcg_bool _5_isEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckisEmpty */
  static kcg_bool _4_AckisEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::NumE */
  static kcg_int NumE3;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::MsgQueue */
  static array_169451 _2_MsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckMsgQueue */
  static array_170229 _1_AckMsgQueue;
  static kcg_bool _61_noname;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_local_array */
  static array_real_10 hh_local_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_isEmpty */
  static kcg_bool Local_isEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_local_array */
  static array_real_10 mm_local_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_ack_empty */
  static kcg_bool Local_ack_empty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_NormaliMsgQueue */
  static array_169451 Local_NormaliMsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::numNormalMsg */
  static kcg_int numNormalMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_AckMsgQueue */
  static array_170229 Local_AckMsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_local_array_ack */
  static array_real_5 hh_local_array_ack;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_local_array_ack */
  static array_real_5 mm_local_array_ack;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::numAckMsg */
  static kcg_int numAckMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ack_mm_array */
  static array_real_5 ack_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ack_hh_array */
  static array_real_5 ack_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_array */
  static array_real_10 mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_array */
  static array_real_10 hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::NumAckMsg */
  static kcg_int NumAckMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::isEmpty */
  static kcg_bool isEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckisEmpty */
  static kcg_bool AckisEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::NumE */
  static kcg_int NumE;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::MsgQueue */
  static array_169451 MsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckMsgQueue */
  static array_170229 AckMsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckMsgQueue */
  static array_170229 _21_AckMsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::MsgQueue */
  static array_169451 _22_MsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::NumE */
  static kcg_int NumE23;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckisEmpty */
  static kcg_bool _24_AckisEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::isEmpty */
  static kcg_bool _25_isEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::NumAckMsg */
  static kcg_int _26_NumAckMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_array */
  static array_real_10 _27_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_array */
  static array_real_10 _28_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ack_hh_array */
  static array_real_5 _29_ack_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ack_mm_array */
  static array_real_5 _30_ack_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::numAckMsg */
  static kcg_int _31_numAckMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_local_array_ack */
  static array_real_5 _32_mm_local_array_ack;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_local_array_ack */
  static array_real_5 _33_hh_local_array_ack;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_AckMsgQueue */
  static array_170229 _34_Local_AckMsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::numNormalMsg */
  static kcg_int _35_numNormalMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_NormaliMsgQueue */
  static array_169451 _36_Local_NormaliMsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_ack_empty */
  static kcg_bool _37_Local_ack_empty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_local_array */
  static array_real_10 _38_mm_local_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_isEmpty */
  static kcg_bool _39_Local_isEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_local_array */
  static array_real_10 _40_hh_local_array;
  static kcg_bool noname;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckMsgQueue */
  static array_170229 _41_AckMsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::MsgQueue */
  static array_169451 _42_MsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::NumE */
  static kcg_int NumE43;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckisEmpty */
  static kcg_bool _44_AckisEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::isEmpty */
  static kcg_bool _45_isEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::NumAckMsg */
  static kcg_int _46_NumAckMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_array */
  static array_real_10 _47_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_array */
  static array_real_10 _48_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ack_hh_array */
  static array_real_5 _49_ack_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ack_mm_array */
  static array_real_5 _50_ack_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::numAckMsg */
  static kcg_int _51_numAckMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_local_array_ack */
  static array_real_5 _52_mm_local_array_ack;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_local_array_ack */
  static array_real_5 _53_hh_local_array_ack;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_AckMsgQueue */
  static array_170229 _54_Local_AckMsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::numNormalMsg */
  static kcg_int _55_numNormalMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_NormaliMsgQueue */
  static array_169451 _56_Local_NormaliMsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_ack_empty */
  static kcg_bool _57_Local_ack_empty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_local_array */
  static array_real_10 _58_mm_local_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_isEmpty */
  static kcg_bool _59_Local_isEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_local_array */
  static array_real_10 _60_hh_local_array;
  static kcg_bool _62_noname;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_local_array */
  static array_real_10 last_hh_local_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_isEmpty */
  static kcg_bool last_Local_isEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_local_array */
  static array_real_10 last_mm_local_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_ack_empty */
  static kcg_bool last_Local_ack_empty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_NormaliMsgQueue */
  static array_169451 last_Local_NormaliMsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::numNormalMsg */
  static kcg_int last_numNormalMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::Local_AckMsgQueue */
  static array_170229 last_Local_AckMsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_local_array_ack */
  static array_real_5 last_hh_local_array_ack;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_local_array_ack */
  static array_real_5 last_mm_local_array_ack;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::numAckMsg */
  static kcg_int last_numAckMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ack_mm_array */
  static array_real_5 last_ack_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::ack_hh_array */
  static array_real_5 last_ack_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::mm_array */
  static array_real_10 last_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::hh_array */
  static array_real_10 last_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::NumAckMsg */
  static kcg_int last_NumAckMsg;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::isEmpty */
  static kcg_bool last_isEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckisEmpty */
  static kcg_bool last_AckisEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::NumE */
  static kcg_int last_NumE;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::MsgQueue */
  static array_169451 last_MsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TextMessagesDipatcher::AckMsgQueue */
  static array_170229 last_AckMsgQueue;
  
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    dmi_txt_msg);
  /* 1 */
  CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L1,
    &outC->Context_1);
  outC->_L2 = outC->Context_1.Output1;
  outC->_L3 = outC->Context_1.Output2;
  outC->_L4 = outC->Context_1.Output3;
  outC->AuxiMsg = outC->_L3;
  outC->AckMsg = outC->_L2;
  outC->ImportantMsg = outC->_L4;
  outC->IfBlock5_clock = outC->AckMsg;
  /* last_init_ck_AckMsgQueue */ if (outC->init) {
    kcg_copy_array_170229(
      &last_AckMsgQueue,
      (array_170229 *) &cMsgStructQueue_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_170229(&last_AckMsgQueue, &outC->AckMsgQueue);
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
  }
  else {
    outC->else_clock_IfBlock5 = outC->AuxiMsg | outC->ImportantMsg;
  }
  /* last_init_ck_Local_AckMsgQueue */ if (outC->init) {
    kcg_copy_array_170229(
      &last_Local_AckMsgQueue,
      (array_170229 *) &cMsgStructQueue_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_170229(&last_Local_AckMsgQueue, &outC->Local_AckMsgQueue);
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
  }
  else /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
  }
  else {
    kcg_copy_array_170229(&outC->_L286_IfBlock5, &last_Local_AckMsgQueue);
    outC->_L1_IfBlock5 = delete;
  }
  /* last_init_ck_hh_local_array_ack */ if (outC->init) {
    kcg_copy_array_real_5(
      &last_hh_local_array_ack,
      (array_real_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_5(&last_hh_local_array_ack, &outC->hh_local_array_ack);
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
  }
  else /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
  }
  else {
    kcg_copy_array_real_5(&outC->_L2_IfBlock5, &last_hh_local_array_ack);
  }
  /* last_init_ck_mm_local_array_ack */ if (outC->init) {
    kcg_copy_array_real_5(
      &last_mm_local_array_ack,
      (array_real_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_5(&last_mm_local_array_ack, &outC->mm_local_array_ack);
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
  }
  else /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
  }
  else {
    kcg_copy_array_real_5(&outC->_L3_IfBlock5, &last_mm_local_array_ack);
  }
  /* last_init_ck_numAckMsg */ if (outC->init) {
    last_numAckMsg = 0;
  }
  else {
    last_numAckMsg = outC->numAckMsg;
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
  }
  else /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
  }
  else {
    outC->_L10_IfBlock5 = last_numAckMsg;
  }
  /* last_init_ck_Local_ack_empty */ if (outC->init) {
    last_Local_ack_empty = kcg_true;
  }
  else {
    last_Local_ack_empty = outC->Local_ack_empty;
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
    kcg_copy_array_170229(&_1_AckMsgQueue, &last_AckMsgQueue);
    kcg_copy_array_170229(&outC->AckMsgQueue, &_1_AckMsgQueue);
  }
  else {
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      kcg_copy_array_170229(&_41_AckMsgQueue, &last_AckMsgQueue);
      kcg_copy_array_170229(&AckMsgQueue, &_41_AckMsgQueue);
    }
    else {
      outC->_L24_IfBlock5 = last_Local_ack_empty;
      /* 2 */
      DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages(
        &outC->_L286_IfBlock5,
        outC->_L1_IfBlock5,
        &outC->_L2_IfBlock5,
        &outC->_L3_IfBlock5,
        outC->_L10_IfBlock5,
        outC->_L24_IfBlock5,
        &outC->Context_2);
      kcg_copy_array_170229(&outC->_L57_IfBlock5, &outC->Context_2.queue);
      outC->_L6_IfBlock5 = outC->Context_2.NumE;
      kcg_copy_array_real_5(&outC->_L7_IfBlock5, &outC->Context_2.new_mm);
      kcg_copy_array_real_5(&outC->_L8_IfBlock5, &outC->Context_2.new_hh);
      outC->_L9_IfBlock5 = outC->Context_2.ack_is_Empty;
      kcg_copy_array_170229(&_21_AckMsgQueue, &outC->_L57_IfBlock5);
      kcg_copy_array_170229(&AckMsgQueue, &_21_AckMsgQueue);
    }
    kcg_copy_array_170229(&outC->AckMsgQueue, &AckMsgQueue);
  }
  /* last_init_ck_MsgQueue */ if (outC->init) {
    kcg_copy_array_169451(
      &last_MsgQueue,
      (array_169451 *) &cMsgStructQueueMax_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_169451(&last_MsgQueue, &outC->MsgQueue);
  }
  /* last_init_ck_Local_NormaliMsgQueue */ if (outC->init) {
    kcg_copy_array_169451(
      &last_Local_NormaliMsgQueue,
      (array_169451 *) &cMsgStructQueueMax_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_169451(
      &last_Local_NormaliMsgQueue,
      &outC->Local_NormaliMsgQueue);
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
  }
  else /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
  }
  else {
    kcg_copy_array_169451(&outC->_L12_IfBlock5, &last_Local_NormaliMsgQueue);
  }
  /* last_init_ck_hh_local_array */ if (outC->init) {
    kcg_copy_array_real_10(
      &last_hh_local_array,
      (array_real_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_10(&last_hh_local_array, &outC->hh_local_array);
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
  }
  else /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
  }
  else {
    kcg_copy_array_real_10(&outC->_L44_IfBlock5, &last_hh_local_array);
  }
  /* last_init_ck_mm_local_array */ if (outC->init) {
    kcg_copy_array_real_10(
      &last_mm_local_array,
      (array_real_10 *) &cArray_mm_leer_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_10(&last_mm_local_array, &outC->mm_local_array);
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
  }
  else /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
  }
  else {
    kcg_copy_array_real_10(&outC->_L45_IfBlock5, &last_mm_local_array);
  }
  /* last_init_ck_numNormalMsg */ if (outC->init) {
    last_numNormalMsg = 0;
  }
  else {
    last_numNormalMsg = outC->numNormalMsg;
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
  }
  else /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
  }
  else {
    outC->_L43_IfBlock5 = last_numNormalMsg;
  }
  /* last_init_ck_Local_isEmpty */ if (outC->init) {
    last_Local_isEmpty = kcg_true;
  }
  else {
    last_Local_isEmpty = outC->Local_isEmpty;
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
  }
  else /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
  }
  else {
    outC->_L47_IfBlock5 = last_Local_isEmpty;
  }
  outC->_L11 = kcg_false;
  /* last_init_ck_isEmpty */ if (outC->init) {
    last_isEmpty = kcg_true;
  }
  else {
    last_isEmpty = outC->isEmpty;
  }
  outC->_L14 = last_isEmpty;
  outC->_L9 = SystemTime;
  outC->_L5 = kcg_true;
  outC->_L10 = 1000;
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(
    outC->_L11,
    outC->_L14,
    outC->_L9,
    outC->_L5,
    outC->_L10,
    &outC->_1_Context_1);
  outC->_L7 = outC->_1_Context_1.expired;
  outC->_L8 = outC->_1_Context_1.started;
  outC->timeExpired = outC->_L7;
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
    kcg_copy_array_169451(&_2_MsgQueue, &last_MsgQueue);
    kcg_copy_array_169451(&outC->MsgQueue, &_2_MsgQueue);
  }
  else {
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      kcg_copy_array_169451(&_42_MsgQueue, &last_MsgQueue);
      kcg_copy_array_169451(&MsgQueue, &_42_MsgQueue);
    }
    else {
      outC->_L23_IfBlock5 = outC->timeExpired;
      outC->_L11_IfBlock5 = last_numNormalMsg;
      /* 1 */
      DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages(
        &outC->_L12_IfBlock5,
        &outC->_L44_IfBlock5,
        &outC->_L45_IfBlock5,
        outC->_L43_IfBlock5,
        outC->_L47_IfBlock5,
        outC->_L23_IfBlock5,
        outC->_L11_IfBlock5,
        &outC->_2_Context_1);
      outC->_L30_IfBlock5 = outC->_2_Context_1.NumE;
      kcg_copy_array_real_10(&outC->_L31_IfBlock5, &outC->_2_Context_1.new_mm);
      kcg_copy_array_real_10(&outC->_L32_IfBlock5, &outC->_2_Context_1.new_hh);
      outC->_L335_IfBlock5 = outC->_2_Context_1.msg_is_Empty;
      kcg_copy_array_169451(
        &outC->_L344_IfBlock5,
        &outC->_2_Context_1.MsgQueue);
      kcg_copy_array_169451(&_22_MsgQueue, &outC->_L344_IfBlock5);
      kcg_copy_array_169451(&MsgQueue, &_22_MsgQueue);
    }
    kcg_copy_array_169451(&outC->MsgQueue, &MsgQueue);
  }
  /* last_init_ck_NumE */ if (outC->init) {
    last_NumE = 0;
  }
  else {
    last_NumE = outC->NumE;
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
    NumE3 = last_NumE;
    outC->NumE = NumE3;
  }
  else {
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      NumE43 = last_NumE;
      NumE = NumE43;
    }
    else {
      NumE23 = outC->_L30_IfBlock5;
      NumE = NumE23;
    }
    outC->NumE = NumE;
  }
  /* last_init_ck_AckisEmpty */ if (outC->init) {
    last_AckisEmpty = kcg_true;
  }
  else {
    last_AckisEmpty = outC->AckisEmpty;
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
    _4_AckisEmpty = last_AckisEmpty;
    outC->AckisEmpty = _4_AckisEmpty;
    _5_isEmpty = last_isEmpty;
    outC->isEmpty = _5_isEmpty;
  }
  else {
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      _44_AckisEmpty = last_AckisEmpty;
      AckisEmpty = _44_AckisEmpty;
    }
    else {
      _24_AckisEmpty = outC->_L9_IfBlock5;
      AckisEmpty = _24_AckisEmpty;
    }
    outC->AckisEmpty = AckisEmpty;
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      _45_isEmpty = last_isEmpty;
      isEmpty = _45_isEmpty;
    }
    else {
      _25_isEmpty = outC->_L335_IfBlock5;
      isEmpty = _25_isEmpty;
    }
    outC->isEmpty = isEmpty;
  }
  /* last_init_ck_NumAckMsg */ if (outC->init) {
    last_NumAckMsg = 0;
  }
  else {
    last_NumAckMsg = outC->NumAckMsg;
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
    _6_NumAckMsg = last_NumAckMsg;
    outC->NumAckMsg = _6_NumAckMsg;
  }
  else {
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      _46_NumAckMsg = last_NumAckMsg;
      NumAckMsg = _46_NumAckMsg;
    }
    else {
      _26_NumAckMsg = outC->_L6_IfBlock5;
      NumAckMsg = _26_NumAckMsg;
    }
    outC->NumAckMsg = NumAckMsg;
  }
  /* last_init_ck_hh_array */ if (outC->init) {
    kcg_copy_array_real_10(
      &last_hh_array,
      (array_real_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_10(&last_hh_array, &outC->hh_array);
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
    kcg_copy_array_real_10(&_7_hh_array, &last_hh_array);
    kcg_copy_array_real_10(&outC->hh_array, &_7_hh_array);
  }
  else {
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      kcg_copy_array_real_10(&_47_hh_array, &last_hh_array);
      kcg_copy_array_real_10(&hh_array, &_47_hh_array);
    }
    else {
      kcg_copy_array_real_10(&_27_hh_array, &outC->_L32_IfBlock5);
      kcg_copy_array_real_10(&hh_array, &_27_hh_array);
    }
    kcg_copy_array_real_10(&outC->hh_array, &hh_array);
  }
  /* last_init_ck_mm_array */ if (outC->init) {
    kcg_copy_array_real_10(
      &last_mm_array,
      (array_real_10 *) &cArray_mm_leer_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_10(&last_mm_array, &outC->mm_array);
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
    kcg_copy_array_real_10(&_8_mm_array, &last_mm_array);
    kcg_copy_array_real_10(&outC->mm_array, &_8_mm_array);
  }
  else {
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      kcg_copy_array_real_10(&_48_mm_array, &last_mm_array);
      kcg_copy_array_real_10(&mm_array, &_48_mm_array);
    }
    else {
      kcg_copy_array_real_10(&_28_mm_array, &outC->_L31_IfBlock5);
      kcg_copy_array_real_10(&mm_array, &_28_mm_array);
    }
    kcg_copy_array_real_10(&outC->mm_array, &mm_array);
  }
  /* last_init_ck_ack_hh_array */ if (outC->init) {
    kcg_copy_array_real_5(
      &last_ack_hh_array,
      (array_real_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_5(&last_ack_hh_array, &outC->ack_hh_array);
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
    kcg_copy_array_real_5(&_9_ack_hh_array, &last_ack_hh_array);
    kcg_copy_array_real_5(&outC->ack_hh_array, &_9_ack_hh_array);
  }
  else {
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      kcg_copy_array_real_5(&_49_ack_hh_array, &last_ack_hh_array);
      kcg_copy_array_real_5(&ack_hh_array, &_49_ack_hh_array);
    }
    else {
      kcg_copy_array_real_5(&_29_ack_hh_array, &outC->_L8_IfBlock5);
      kcg_copy_array_real_5(&ack_hh_array, &_29_ack_hh_array);
    }
    kcg_copy_array_real_5(&outC->ack_hh_array, &ack_hh_array);
  }
  /* last_init_ck_ack_mm_array */ if (outC->init) {
    kcg_copy_array_real_5(
      &last_ack_mm_array,
      (array_real_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_5(&last_ack_mm_array, &outC->ack_mm_array);
  }
  /* ck_IfBlock5 */ if (outC->IfBlock5_clock) {
    kcg_copy_array_real_5(&_10_ack_mm_array, &last_ack_mm_array);
    kcg_copy_array_real_5(&outC->ack_mm_array, &_10_ack_mm_array);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L13_IfBlock5,
      dmi_txt_msg);
    outC->_L52_IfBlock5 = last_numAckMsg;
    /* 3 */
    MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->_L13_IfBlock5,
      outC->_L52_IfBlock5,
      &outC->Context_3);
    kcg_copy_array_170229(&outC->_L5_IfBlock5, &outC->Context_3.queue);
    outC->_L28_IfBlock5 = outC->Context_3.NumE;
    outC->_L48_IfBlock5 = outC->Context_3.AckisFull;
    outC->_L49_IfBlock5 = outC->Context_3.AckisEmpty;
    kcg_copy_array_real_5(&outC->_L50_IfBlock5, &outC->Context_3.hh_array);
    kcg_copy_array_real_5(&outC->_L51_IfBlock5, &outC->Context_3.mm_array);
    _11_numAckMsg = outC->_L28_IfBlock5;
    outC->numAckMsg = _11_numAckMsg;
    kcg_copy_array_real_5(&_12_mm_local_array_ack, &outC->_L51_IfBlock5);
    kcg_copy_array_real_5(&outC->mm_local_array_ack, &_12_mm_local_array_ack);
    kcg_copy_array_real_5(&_13_hh_local_array_ack, &outC->_L50_IfBlock5);
    kcg_copy_array_real_5(&outC->hh_local_array_ack, &_13_hh_local_array_ack);
    kcg_copy_array_170229(&_14_Local_AckMsgQueue, &outC->_L5_IfBlock5);
    kcg_copy_array_170229(&outC->Local_AckMsgQueue, &_14_Local_AckMsgQueue);
    _15_numNormalMsg = last_numNormalMsg;
    outC->numNormalMsg = _15_numNormalMsg;
    kcg_copy_array_169451(
      &_16_Local_NormaliMsgQueue,
      &last_Local_NormaliMsgQueue);
    kcg_copy_array_169451(
      &outC->Local_NormaliMsgQueue,
      &_16_Local_NormaliMsgQueue);
    _17_Local_ack_empty = outC->_L49_IfBlock5;
    outC->Local_ack_empty = _17_Local_ack_empty;
    kcg_copy_array_real_10(&_18_mm_local_array, &last_mm_local_array);
    kcg_copy_array_real_10(&outC->mm_local_array, &_18_mm_local_array);
    _19_Local_isEmpty = last_Local_isEmpty;
    outC->Local_isEmpty = _19_Local_isEmpty;
    kcg_copy_array_real_10(&_20_hh_local_array, &last_hh_local_array);
    kcg_copy_array_real_10(&outC->hh_local_array, &_20_hh_local_array);
    _61_noname = outC->_L48_IfBlock5;
  }
  else {
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      kcg_copy_array_real_5(&_50_ack_mm_array, &last_ack_mm_array);
      kcg_copy_array_real_5(&ack_mm_array, &_50_ack_mm_array);
    }
    else {
      kcg_copy_array_real_5(&_30_ack_mm_array, &outC->_L7_IfBlock5);
      kcg_copy_array_real_5(&ack_mm_array, &_30_ack_mm_array);
    }
    kcg_copy_array_real_5(&outC->ack_mm_array, &ack_mm_array);
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      _51_numAckMsg = last_numAckMsg;
      numAckMsg = _51_numAckMsg;
    }
    else {
      _31_numAckMsg = outC->_L6_IfBlock5;
      numAckMsg = _31_numAckMsg;
    }
    outC->numAckMsg = numAckMsg;
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      kcg_copy_array_real_5(&_52_mm_local_array_ack, &last_mm_local_array_ack);
      kcg_copy_array_real_5(&mm_local_array_ack, &_52_mm_local_array_ack);
    }
    else {
      kcg_copy_array_real_5(&_32_mm_local_array_ack, &outC->_L7_IfBlock5);
      kcg_copy_array_real_5(&mm_local_array_ack, &_32_mm_local_array_ack);
    }
    kcg_copy_array_real_5(&outC->mm_local_array_ack, &mm_local_array_ack);
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      kcg_copy_array_real_5(&_53_hh_local_array_ack, &last_hh_local_array_ack);
      kcg_copy_array_real_5(&hh_local_array_ack, &_53_hh_local_array_ack);
    }
    else {
      kcg_copy_array_real_5(&_33_hh_local_array_ack, &outC->_L8_IfBlock5);
      kcg_copy_array_real_5(&hh_local_array_ack, &_33_hh_local_array_ack);
    }
    kcg_copy_array_real_5(&outC->hh_local_array_ack, &hh_local_array_ack);
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      kcg_copy_array_170229(&_54_Local_AckMsgQueue, &last_Local_AckMsgQueue);
      kcg_copy_array_170229(&Local_AckMsgQueue, &_54_Local_AckMsgQueue);
    }
    else {
      kcg_copy_array_170229(&_34_Local_AckMsgQueue, &outC->_L57_IfBlock5);
      kcg_copy_array_170229(&Local_AckMsgQueue, &_34_Local_AckMsgQueue);
    }
    kcg_copy_array_170229(&outC->Local_AckMsgQueue, &Local_AckMsgQueue);
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L27_IfBlock5,
        dmi_txt_msg);
      outC->_L39_IfBlock5 = outC->ImportantMsg;
      outC->_L42_IfBlock5 = last_numNormalMsg;
      /* 1 */
      MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages(
        &outC->_L27_IfBlock5,
        outC->_L39_IfBlock5,
        outC->_L42_IfBlock5,
        &outC->_3_Context_1);
      outC->_L33_IfBlock5 = outC->_3_Context_1.isFull;
      outC->_L34_IfBlock5 = outC->_3_Context_1.isEmpty;
      outC->_L35_IfBlock5 = outC->_3_Context_1.NumE;
      kcg_copy_array_169451(&outC->_L36_IfBlock5, &outC->_3_Context_1.queue);
      kcg_copy_array_real_10(
        &outC->_L40_IfBlock5,
        &outC->_3_Context_1.mm_array);
      kcg_copy_array_real_10(
        &outC->_L41_IfBlock5,
        &outC->_3_Context_1.hh_array);
      _55_numNormalMsg = outC->_L35_IfBlock5;
      numNormalMsg = _55_numNormalMsg;
    }
    else {
      _35_numNormalMsg = outC->_L30_IfBlock5;
      numNormalMsg = _35_numNormalMsg;
    }
    outC->numNormalMsg = numNormalMsg;
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      kcg_copy_array_169451(&_56_Local_NormaliMsgQueue, &outC->_L36_IfBlock5);
      kcg_copy_array_169451(&Local_NormaliMsgQueue, &_56_Local_NormaliMsgQueue);
    }
    else {
      kcg_copy_array_169451(&_36_Local_NormaliMsgQueue, &outC->_L344_IfBlock5);
      kcg_copy_array_169451(&Local_NormaliMsgQueue, &_36_Local_NormaliMsgQueue);
    }
    kcg_copy_array_169451(&outC->Local_NormaliMsgQueue, &Local_NormaliMsgQueue);
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      _57_Local_ack_empty = last_Local_ack_empty;
      Local_ack_empty = _57_Local_ack_empty;
    }
    else {
      _37_Local_ack_empty = outC->_L9_IfBlock5;
      Local_ack_empty = _37_Local_ack_empty;
    }
    outC->Local_ack_empty = Local_ack_empty;
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      kcg_copy_array_real_10(&_58_mm_local_array, &outC->_L40_IfBlock5);
      kcg_copy_array_real_10(&mm_local_array, &_58_mm_local_array);
    }
    else {
      kcg_copy_array_real_10(&_38_mm_local_array, &outC->_L31_IfBlock5);
      kcg_copy_array_real_10(&mm_local_array, &_38_mm_local_array);
    }
    kcg_copy_array_real_10(&outC->mm_local_array, &mm_local_array);
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      _59_Local_isEmpty = outC->_L34_IfBlock5;
      Local_isEmpty = _59_Local_isEmpty;
    }
    else {
      _39_Local_isEmpty = outC->_L335_IfBlock5;
      Local_isEmpty = _39_Local_isEmpty;
    }
    outC->Local_isEmpty = Local_isEmpty;
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      kcg_copy_array_real_10(&_60_hh_local_array, &outC->_L41_IfBlock5);
      kcg_copy_array_real_10(&hh_local_array, &_60_hh_local_array);
    }
    else {
      kcg_copy_array_real_10(&_40_hh_local_array, &outC->_L32_IfBlock5);
      kcg_copy_array_real_10(&hh_local_array, &_40_hh_local_array);
    }
    kcg_copy_array_real_10(&outC->hh_local_array, &hh_local_array);
    /* ck_anon_activ */ if (outC->else_clock_IfBlock5) {
      noname = outC->_L33_IfBlock5;
    }
  }
  _62_noname = outC->_L8;
  outC->debugExpired = outC->_L7;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TextMessagesDipatcher_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

