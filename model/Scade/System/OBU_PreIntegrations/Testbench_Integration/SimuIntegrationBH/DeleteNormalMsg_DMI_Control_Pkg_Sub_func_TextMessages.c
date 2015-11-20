/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void DeleteNormalMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
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
  
  for (i = 0; i < 10; i++) {
    outC->_L139[i] = 0.0;
  }
  for (i1 = 0; i1 < 10; i1++) {
    outC->_L140[i1] = 0.0;
  }
  for (i3 = 0; i3 < 10; i3++) {
    outC->_L138[i3].present = kcg_true;
    outC->_L138[i3].dmi_msg.valid = kcg_true;
    outC->_L138[i3].dmi_msg.system_clock = 0;
    outC->_L138[i3].dmi_msg.textMessage_ID = 0;
    outC->_L138[i3].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L138[i3].dmi_msg.l_text = 0;
    for (i2 = 0; i2 < 255; i2++) {
      outC->_L138[i3].dmi_msg.x_text[i2] = ' ';
    }
    outC->_L138[i3].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L138[i3].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L137 = kcg_true;
  for (i4 = 0; i4 < 10; i4++) {
    outC->_L128[i4] = 0.0;
  }
  for (i5 = 0; i5 < 10; i5++) {
    outC->_L129[i5] = 0.0;
  }
  for (i6 = 0; i6 < 10; i6++) {
    outC->_L130[i6] = 0.0;
  }
  for (i7 = 0; i7 < 10; i7++) {
    outC->_L131[i7] = 0.0;
  }
  for (i8 = 0; i8 < 10; i8++) {
    outC->_L135[i8] = 0.0;
  }
  for (i9 = 0; i9 < 10; i9++) {
    outC->_L134[i9] = 0.0;
  }
  for (i11 = 0; i11 < 10; i11++) {
    outC->_L126[i11].present = kcg_true;
    outC->_L126[i11].dmi_msg.valid = kcg_true;
    outC->_L126[i11].dmi_msg.system_clock = 0;
    outC->_L126[i11].dmi_msg.textMessage_ID = 0;
    outC->_L126[i11].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L126[i11].dmi_msg.l_text = 0;
    for (i10 = 0; i10 < 255; i10++) {
      outC->_L126[i11].dmi_msg.x_text[i10] = ' ';
    }
    outC->_L126[i11].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L126[i11].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i13 = 0; i13 < 10; i13++) {
    outC->_L125[i13].present = kcg_true;
    outC->_L125[i13].dmi_msg.valid = kcg_true;
    outC->_L125[i13].dmi_msg.system_clock = 0;
    outC->_L125[i13].dmi_msg.textMessage_ID = 0;
    outC->_L125[i13].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L125[i13].dmi_msg.l_text = 0;
    for (i12 = 0; i12 < 255; i12++) {
      outC->_L125[i13].dmi_msg.x_text[i12] = ' ';
    }
    outC->_L125[i13].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L125[i13].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L123 = 0;
  outC->_L121 = 0;
  outC->_L119 = kcg_true;
  outC->_L110 = 0;
  outC->_L111 = 0;
  outC->_L113 = 0;
  for (i15 = 0; i15 < 10; i15++) {
    outC->_L112[i15].present = kcg_true;
    outC->_L112[i15].dmi_msg.valid = kcg_true;
    outC->_L112[i15].dmi_msg.system_clock = 0;
    outC->_L112[i15].dmi_msg.textMessage_ID = 0;
    outC->_L112[i15].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L112[i15].dmi_msg.l_text = 0;
    for (i14 = 0; i14 < 255; i14++) {
      outC->_L112[i15].dmi_msg.x_text[i14] = ' ';
    }
    outC->_L112[i15].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L112[i15].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L118 = 0;
  outC->_L97 = kcg_true;
  outC->_L96 = kcg_true;
  outC->_L94 = 0;
  outC->_L93 = kcg_true;
  outC->_L91 = 0;
  outC->LocalNum = 0;
  outC->init = kcg_true;
  for (i17 = 0; i17 < 10; i17++) {
    outC->rem_localQueue[i17].present = kcg_true;
    outC->rem_localQueue[i17].dmi_msg.valid = kcg_true;
    outC->rem_localQueue[i17].dmi_msg.system_clock = 0;
    outC->rem_localQueue[i17].dmi_msg.textMessage_ID = 0;
    outC->rem_localQueue[i17].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->rem_localQueue[i17].dmi_msg.l_text = 0;
    for (i16 = 0; i16 < 255; i16++) {
      outC->rem_localQueue[i17].dmi_msg.x_text[i16] = ' ';
    }
    outC->rem_localQueue[i17].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->rem_localQueue[i17].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->rem_local_num_ack = 0;
  for (i19 = 0; i19 < 10; i19++) {
    outC->MsgQueue[i19].present = kcg_true;
    outC->MsgQueue[i19].dmi_msg.valid = kcg_true;
    outC->MsgQueue[i19].dmi_msg.system_clock = 0;
    outC->MsgQueue[i19].dmi_msg.textMessage_ID = 0;
    outC->MsgQueue[i19].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->MsgQueue[i19].dmi_msg.l_text = 0;
    for (i18 = 0; i18 < 255; i18++) {
      outC->MsgQueue[i19].dmi_msg.x_text[i18] = ' ';
    }
    outC->MsgQueue[i19].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->MsgQueue[i19].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->msg_is_Empty = kcg_true;
  for (i20 = 0; i20 < 10; i20++) {
    outC->new_hh[i20] = 0.0;
  }
  for (i21 = 0; i21 < 10; i21++) {
    outC->new_mm[i21] = 0.0;
  }
  outC->NumE = 0;
  /* 1 */
  FIFO_delete_time_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_1_Context_1);
  /* 1 */
  FIFO_Delete_Op_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void DeleteNormalMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  /* 1 */
  FIFO_delete_time_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_1_Context_1);
  /* 1 */
  FIFO_Delete_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg */
void DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::localQueue */ array_169451 *localQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::hh_array */ array_real_10 *hh_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::mm_array */ array_real_10 *mm_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::local_num_ack */ kcg_int local_num_ack,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::is_empty */ kcg_bool is_empty,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::delete */ kcg_bool delete,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::num */ kcg_int num,
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::MsgQueue */
  static array_169451 last_MsgQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::msg_is_Empty */
  static kcg_bool last_msg_is_Empty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::new_hh */
  static array_real_10 last_new_hh;
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::new_mm */
  static array_real_10 last_new_mm;
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::NumE */
  static kcg_int last_NumE;
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::local_num_ack */
  static kcg_int last_local_num_ack;
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg::localQueue */
  static array_169451 last_localQueue;
  
  /* last_init_ck_msg_is_Empty */ if (outC->init) {
    last_msg_is_Empty = kcg_false;
  }
  else {
    last_msg_is_Empty = outC->msg_is_Empty;
  }
  outC->_L96 = is_empty;
  outC->_L119 = delete;
  outC->_L121 = num;
  outC->_L110 = 1;
  outC->_L118 = outC->_L121 - outC->_L110;
  outC->_L123 = num;
  /* 2 */ if (outC->_L119) {
    outC->_L113 = outC->_L118;
  }
  else {
    outC->_L113 = outC->_L123;
  }
  outC->LocalNum = outC->_L113;
  outC->_L91 = outC->LocalNum;
  outC->_L94 = 0;
  outC->_L93 = outC->_L91 <= outC->_L94;
  /* 1 */ if (outC->_L96) {
    outC->_L97 = outC->_L96;
  }
  else {
    outC->_L97 = outC->_L93;
  }
  outC->msg_is_Empty = outC->_L97;
  /* last_init_ck_MsgQueue */ if (outC->init) {
    kcg_copy_array_169451(
      &last_MsgQueue,
      (array_169451 *) &cMsgStructQueueMax_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_169451(&last_MsgQueue, &outC->MsgQueue);
  }
  outC->_L111 = 0;
  kcg_copy_array_169451(&outC->_L125, localQueue);
  /* 1 */
  FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L111,
    &outC->_L125,
    &outC->Context_1);
  kcg_copy_array_169451(&outC->_L138, &outC->Context_1.Queue);
  kcg_copy_array_169451(&outC->_L126, localQueue);
  /* 2 */ if (outC->_L119) {
    kcg_copy_array_169451(&outC->_L112, &outC->_L138);
  }
  else {
    kcg_copy_array_169451(&outC->_L112, &outC->_L126);
  }
  kcg_copy_array_169451(&outC->MsgQueue, &outC->_L112);
  /* last_init_ck_NumE */ if (outC->init) {
    last_NumE = local_num_ack;
  }
  else {
    last_NumE = outC->NumE;
  }
  outC->NumE = outC->_L113;
  kcg_copy_array_real_10(&outC->_L128, mm_array);
  kcg_copy_array_real_10(&outC->_L129, hh_array);
  kcg_copy_array_real_10(&outC->_L130, hh_array);
  /* last_init_ck_new_hh */ if (outC->init) {
    kcg_copy_array_real_10(&last_new_hh, hh_array);
  }
  else {
    kcg_copy_array_real_10(&last_new_hh, &outC->new_hh);
  }
  outC->_L137 = delete;
  kcg_copy_array_real_10(&outC->_L131, mm_array);
  /* 1 */
  FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L130,
    &outC->_L131,
    &outC->_1_Context_1);
  kcg_copy_array_real_10(&outC->_L139, &outC->_1_Context_1.new_mm_array);
  kcg_copy_array_real_10(&outC->_L140, &outC->_1_Context_1.new_hh_array);
  /* 3 */ if (outC->_L137) {
    kcg_copy_array_real_10(&outC->_L135, &outC->_L140);
  }
  else {
    kcg_copy_array_real_10(&outC->_L135, &outC->_L129);
  }
  kcg_copy_array_real_10(&outC->new_hh, &outC->_L135);
  /* 3 */ if (outC->_L137) {
    kcg_copy_array_real_10(&outC->_L134, &outC->_L139);
  }
  else {
    kcg_copy_array_real_10(&outC->_L134, &outC->_L128);
  }
  /* last_init_ck_new_mm */ if (outC->init) {
    kcg_copy_array_real_10(&last_new_mm, mm_array);
  }
  else {
    kcg_copy_array_real_10(&last_new_mm, &outC->new_mm);
  }
  kcg_copy_array_real_10(&outC->new_mm, &outC->_L134);
  /* last_init_ck_localQueue */ if (outC->init) {
    kcg_copy_array_169451(
      &last_localQueue,
      (array_169451 *) &cMsgStructQueueMax_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_169451(&last_localQueue, &outC->rem_localQueue);
  }
  /* last_init_ck_local_num_ack */ if (outC->init) {
    last_local_num_ack = 0;
  }
  else {
    last_local_num_ack = outC->rem_local_num_ack;
  }
  kcg_copy_array_169451(&outC->rem_localQueue, localQueue);
  outC->rem_local_num_ack = local_num_ack;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

