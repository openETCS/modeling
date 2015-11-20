/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void DeleteAckMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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
  
  for (i = 0; i < 5; i++) {
    outC->_L109[i] = 0.0;
  }
  for (i1 = 0; i1 < 5; i1++) {
    outC->_L110[i1] = 0.0;
  }
  for (i3 = 0; i3 < 5; i3++) {
    outC->_L108[i3].present = kcg_true;
    outC->_L108[i3].dmi_msg.valid = kcg_true;
    outC->_L108[i3].dmi_msg.system_clock = 0;
    outC->_L108[i3].dmi_msg.textMessage_ID = 0;
    outC->_L108[i3].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L108[i3].dmi_msg.l_text = 0;
    for (i2 = 0; i2 < 255; i2++) {
      outC->_L108[i3].dmi_msg.x_text[i2] = ' ';
    }
    outC->_L108[i3].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L108[i3].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L107 = 0;
  outC->_L106 = 0;
  outC->_L105 = 0;
  outC->_L104 = 0;
  for (i4 = 0; i4 < 5; i4++) {
    outC->_L102[i4] = 0.0;
  }
  for (i5 = 0; i5 < 5; i5++) {
    outC->_L103[i5] = 0.0;
  }
  for (i7 = 0; i7 < 5; i7++) {
    outC->_L101[i7].present = kcg_true;
    outC->_L101[i7].dmi_msg.valid = kcg_true;
    outC->_L101[i7].dmi_msg.system_clock = 0;
    outC->_L101[i7].dmi_msg.textMessage_ID = 0;
    outC->_L101[i7].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L101[i7].dmi_msg.l_text = 0;
    for (i6 = 0; i6 < 255; i6++) {
      outC->_L101[i7].dmi_msg.x_text[i6] = ' ';
    }
    outC->_L101[i7].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L101[i7].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L97 = kcg_true;
  outC->_L96 = kcg_true;
  outC->_L94 = 0;
  outC->_L93 = kcg_true;
  outC->_L91 = 0;
  for (i8 = 0; i8 < 5; i8++) {
    outC->_L85[i8] = 0.0;
  }
  for (i9 = 0; i9 < 5; i9++) {
    outC->_L84[i9] = 0.0;
  }
  outC->_L80 = kcg_true;
  outC->_L76 = 0;
  outC->_L70 = kcg_true;
  for (i10 = 0; i10 < 5; i10++) {
    outC->_L33[i10] = 0.0;
  }
  for (i11 = 0; i11 < 5; i11++) {
    outC->_L32[i11] = 0.0;
  }
  outC->_L27 = kcg_true;
  for (i13 = 0; i13 < 5; i13++) {
    outC->_L25[i13].present = kcg_true;
    outC->_L25[i13].dmi_msg.valid = kcg_true;
    outC->_L25[i13].dmi_msg.system_clock = 0;
    outC->_L25[i13].dmi_msg.textMessage_ID = 0;
    outC->_L25[i13].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L25[i13].dmi_msg.l_text = 0;
    for (i12 = 0; i12 < 255; i12++) {
      outC->_L25[i13].dmi_msg.x_text[i12] = ' ';
    }
    outC->_L25[i13].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L25[i13].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i15 = 0; i15 < 5; i15++) {
    outC->_L19[i15].present = kcg_true;
    outC->_L19[i15].dmi_msg.valid = kcg_true;
    outC->_L19[i15].dmi_msg.system_clock = 0;
    outC->_L19[i15].dmi_msg.textMessage_ID = 0;
    outC->_L19[i15].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L19[i15].dmi_msg.l_text = 0;
    for (i14 = 0; i14 < 255; i14++) {
      outC->_L19[i15].dmi_msg.x_text[i14] = ' ';
    }
    outC->_L19[i15].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L19[i15].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L6 = 0;
  outC->LocalNum = 0;
  outC->init = kcg_true;
  for (i17 = 0; i17 < 5; i17++) {
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
  outC->ack_is_Empty = kcg_true;
  for (i18 = 0; i18 < 5; i18++) {
    outC->new_hh[i18] = 0.0;
  }
  for (i19 = 0; i19 < 5; i19++) {
    outC->new_mm[i19] = 0.0;
  }
  outC->NumE = 0;
  for (i21 = 0; i21 < 5; i21++) {
    outC->queue[i21].present = kcg_true;
    outC->queue[i21].dmi_msg.valid = kcg_true;
    outC->queue[i21].dmi_msg.system_clock = 0;
    outC->queue[i21].dmi_msg.textMessage_ID = 0;
    outC->queue[i21].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->queue[i21].dmi_msg.l_text = 0;
    for (i20 = 0; i20 < 255; i20++) {
      outC->queue[i21].dmi_msg.x_text[i20] = ' ';
    }
    outC->queue[i21].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->queue[i21].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  /* 1 */
  FIFO_delete_time_Ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_1_Context_1);
  /* 1 */
  FIFO_Delete_Op_Ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void DeleteAckMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  /* 1 */
  FIFO_delete_time_Ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_1_Context_1);
  /* 1 */
  FIFO_Delete_Op_Ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg */
void DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::localQueue */ array_170229 *localQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::Delete */ kcg_bool Delete,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::hh_array */ array_real_5 *hh_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::mm_array */ array_real_5 *mm_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::local_num_ack */ kcg_int local_num_ack,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::local_ack_empty */ kcg_bool local_ack_empty,
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::ack_is_Empty */
  static kcg_bool last_ack_is_Empty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::new_hh */
  static array_real_5 last_new_hh;
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::new_mm */
  static array_real_5 last_new_mm;
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::NumE */
  static kcg_int last_NumE;
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::queue */
  static array_170229 last_queue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::local_num_ack */
  static kcg_int last_local_num_ack;
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg::localQueue */
  static array_170229 last_localQueue;
  
  outC->_L6 = 0;
  /* last_init_ck_queue */ if (outC->init) {
    kcg_copy_array_170229(&last_queue, localQueue);
  }
  else {
    kcg_copy_array_170229(&last_queue, &outC->queue);
  }
  outC->_L27 = Delete;
  kcg_copy_array_170229(&outC->_L19, localQueue);
  /* 1 */
  FIFO_Delete_Op_Ack_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L6,
    &outC->_L19,
    &outC->Context_1);
  kcg_copy_array_170229(&outC->_L108, &outC->Context_1.Queue);
  kcg_copy_array_170229(&outC->_L101, localQueue);
  /* 1 */ if (outC->_L27) {
    kcg_copy_array_170229(&outC->_L25, &outC->_L108);
  }
  else {
    kcg_copy_array_170229(&outC->_L25, &outC->_L101);
  }
  kcg_copy_array_170229(&outC->queue, &outC->_L25);
  /* last_init_ck_new_mm */ if (outC->init) {
    kcg_copy_array_real_5(&last_new_mm, mm_array);
  }
  else {
    kcg_copy_array_real_5(&last_new_mm, &outC->new_mm);
  }
  outC->_L80 = Delete;
  kcg_copy_array_real_5(&outC->_L32, hh_array);
  kcg_copy_array_real_5(&outC->_L33, mm_array);
  /* 1 */
  FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L32,
    &outC->_L33,
    &outC->_1_Context_1);
  kcg_copy_array_real_5(&outC->_L109, &outC->_1_Context_1.new_mm_array);
  kcg_copy_array_real_5(&outC->_L110, &outC->_1_Context_1.new_hh_array);
  kcg_copy_array_real_5(&outC->_L102, mm_array);
  /* 2 */ if (outC->_L80) {
    kcg_copy_array_real_5(&outC->_L84, &outC->_L109);
  }
  else {
    kcg_copy_array_real_5(&outC->_L84, &outC->_L102);
  }
  kcg_copy_array_real_5(&outC->new_mm, &outC->_L84);
  /* last_init_ck_new_hh */ if (outC->init) {
    kcg_copy_array_real_5(&last_new_hh, hh_array);
  }
  else {
    kcg_copy_array_real_5(&last_new_hh, &outC->new_hh);
  }
  kcg_copy_array_real_5(&outC->_L103, hh_array);
  /* 2 */ if (outC->_L80) {
    kcg_copy_array_real_5(&outC->_L85, &outC->_L110);
  }
  else {
    kcg_copy_array_real_5(&outC->_L85, &outC->_L103);
  }
  kcg_copy_array_real_5(&outC->new_hh, &outC->_L85);
  /* last_init_ck_NumE */ if (outC->init) {
    last_NumE = local_num_ack;
  }
  else {
    last_NumE = outC->NumE;
  }
  outC->_L70 = Delete;
  outC->_L105 = local_num_ack;
  outC->_L107 = 1;
  outC->_L106 = outC->_L105 - outC->_L107;
  outC->_L76 = local_num_ack;
  /* 4 */ if (outC->_L70) {
    outC->_L104 = outC->_L106;
  }
  else {
    outC->_L104 = outC->_L76;
  }
  outC->NumE = outC->_L104;
  /* last_init_ck_ack_is_Empty */ if (outC->init) {
    last_ack_is_Empty = kcg_false;
  }
  else {
    last_ack_is_Empty = outC->ack_is_Empty;
  }
  outC->_L96 = local_ack_empty;
  outC->LocalNum = outC->_L104;
  outC->_L91 = outC->LocalNum;
  outC->_L94 = 0;
  outC->_L93 = outC->_L91 <= outC->_L94;
  /* 3 */ if (outC->_L96) {
    outC->_L97 = outC->_L96;
  }
  else {
    outC->_L97 = outC->_L93;
  }
  outC->ack_is_Empty = outC->_L97;
  /* last_init_ck_localQueue */ if (outC->init) {
    kcg_copy_array_170229(
      &last_localQueue,
      (array_170229 *) &cMsgStructQueue_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_170229(&last_localQueue, &outC->rem_localQueue);
  }
  /* last_init_ck_local_num_ack */ if (outC->init) {
    last_local_num_ack = 0;
  }
  else {
    last_local_num_ack = outC->rem_local_num_ack;
  }
  kcg_copy_array_170229(&outC->rem_localQueue, localQueue);
  outC->rem_local_num_ack = local_num_ack;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

