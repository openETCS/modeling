/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void FIFO_Insert_Op_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i18;
  static kcg_int i19;
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
  
  for (i1 = 0; i1 < 10; i1++) {
    outC->_L36[i1].present = kcg_true;
    outC->_L36[i1].dmi_msg.valid = kcg_true;
    outC->_L36[i1].dmi_msg.system_clock = 0;
    outC->_L36[i1].dmi_msg.textMessage_ID = 0;
    outC->_L36[i1].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L36[i1].dmi_msg.l_text = 0;
    for (i = 0; i < 255; i++) {
      outC->_L36[i1].dmi_msg.x_text[i] = ' ';
    }
    outC->_L36[i1].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L36[i1].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i3 = 0; i3 < 10; i3++) {
    outC->_L34[i3].present = kcg_true;
    outC->_L34[i3].dmi_msg.valid = kcg_true;
    outC->_L34[i3].dmi_msg.system_clock = 0;
    outC->_L34[i3].dmi_msg.textMessage_ID = 0;
    outC->_L34[i3].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L34[i3].dmi_msg.l_text = 0;
    for (i2 = 0; i2 < 255; i2++) {
      outC->_L34[i3].dmi_msg.x_text[i2] = ' ';
    }
    outC->_L34[i3].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L34[i3].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i4 = 0; i4 < 10; i4++) {
    outC->_L31[i4] = kcg_true;
  }
  outC->_L29 = kcg_true;
  outC->_L17 = 0.0;
  outC->_L18 = 0;
  for (i5 = 0; i5 < 10; i5++) {
    outC->_L19[i5] = 0.0;
  }
  outC->_L20 = 0.0;
  outC->_L21 = kcg_true;
  for (i6 = 0; i6 < 10; i6++) {
    outC->_L24[i6] = 0.0;
  }
  for (i7 = 0; i7 < 10; i7++) {
    outC->_L23[i7] = 0.0;
  }
  outC->_L22 = 0;
  for (i8 = 0; i8 < 10; i8++) {
    outC->_L25[i8] = 0.0;
  }
  for (i9 = 0; i9 < 10; i9++) {
    outC->_L26[i9] = 0;
  }
  for (i10 = 0; i10 < 10; i10++) {
    outC->_L9[i10] = 0;
  }
  for (i12 = 0; i12 < 10; i12++) {
    outC->_L7[i12].valid = kcg_true;
    outC->_L7[i12].system_clock = 0;
    outC->_L7[i12].textMessage_ID = 0;
    outC->_L7[i12].q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L7[i12].l_text = 0;
    for (i11 = 0; i11 < 255; i11++) {
      outC->_L7[i12].x_text[i11] = ' ';
    }
    outC->_L7[i12].q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L7[i12].q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L5 = 0;
  outC->_L4.valid = kcg_true;
  outC->_L4.system_clock = 0;
  outC->_L4.textMessage_ID = 0;
  outC->_L4.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L4.l_text = 0;
  for (i13 = 0; i13 < 255; i13++) {
    outC->_L4.x_text[i13] = ' ';
  }
  outC->_L4.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L4.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->init = kcg_true;
  for (i14 = 0; i14 < 10; i14++) {
    outC->mm_array[i14] = 0.0;
  }
  for (i15 = 0; i15 < 10; i15++) {
    outC->hh_array[i15] = 0.0;
  }
  for (i17 = 0; i17 < 10; i17++) {
    outC->queue[i17].present = kcg_true;
    outC->queue[i17].dmi_msg.valid = kcg_true;
    outC->queue[i17].dmi_msg.system_clock = 0;
    outC->queue[i17].dmi_msg.textMessage_ID = 0;
    outC->queue[i17].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->queue[i17].dmi_msg.l_text = 0;
    for (i16 = 0; i16 < 255; i16++) {
      outC->queue[i17].dmi_msg.x_text[i16] = ' ';
    }
    outC->queue[i17].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->queue[i17].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i19 = 0; i19 < 10; i19++) {
    /* 1 */
    InsertTime_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->_1_Context_1[i19]);
  }
  for (i18 = 0; i18 < 10; i18++) {
    /* 1 */
    InsertStructMSGFIFO_iterator_normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_1[i18]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void FIFO_Insert_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i;
  static kcg_int i1;
  
  outC->init = kcg_true;
  for (i1 = 0; i1 < 10; i1++) {
    /* 1 */
    InsertTime_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->_1_Context_1[i1]);
  }
  for (i = 0; i < 10; i++) {
    /* 1 */
    InsertStructMSGFIFO_iterator_normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_1[i]);
  }
}

/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal */
void FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::Pos */ kcg_int Pos,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::Messaggio */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *Messaggio,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::new_mm */ kcg_real new_mm,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::new_hh */ kcg_real new_hh,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::isFull */ kcg_bool isFull,
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal */
  static array_169451 acc;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  static kcg_int noname;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::mm_array */
  static array_real_10 last_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::hh_array */
  static array_real_10 last_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal::queue */
  static array_169451 last_queue;
  
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L4,
    Messaggio);
  outC->_L5 = Pos;
  /* last_init_ck_queue */ if (outC->init) {
    kcg_copy_array_169451(
      &last_queue,
      (array_169451 *) &cMsgStructQueueMax_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_169451(&last_queue, &outC->queue);
  }
  kcg_copy_array_169451(&outC->_L36, &last_queue);
  /* pow */ for (i7 = 0; i7 < 10; i7++) {
    outC->_L9[i7] = outC->_L5;
  }
  /* pow */ for (i6 = 0; i6 < 10; i6++) {
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L7[i6],
      &outC->_L4);
  }
  outC->_L29 = isFull;
  /* pow */ for (i5 = 0; i5 < 10; i5++) {
    outC->_L31[i5] = outC->_L29;
  }
  kcg_copy_array_169451(&outC->_L34, &outC->_L36);
  /* 1 */ for (i4 = 0; i4 < 10; i4++) {
    kcg_copy_array_169451(&acc, &outC->_L34);
    /* 1 */
    InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages(
      i4,
      &acc,
      outC->_L9[i4],
      &outC->_L7[i4],
      outC->_L31[i4],
      &outC->Context_1[i4]);
    kcg_copy_array_169451(&outC->_L34, &outC->Context_1[i4].OutputArray);
  }
  kcg_copy_array_169451(&outC->queue, &outC->_L34);
  outC->_L17 = new_mm;
  outC->_L18 = Pos;
  /* pow */ for (i3 = 0; i3 < 10; i3++) {
    outC->_L19[i3] = outC->_L17;
  }
  /* pow */ for (i2 = 0; i2 < 10; i2++) {
    outC->_L26[i2] = outC->_L18;
  }
  outC->_L20 = new_hh;
  /* pow */ for (i1 = 0; i1 < 10; i1++) {
    outC->_L25[i1] = outC->_L20;
  }
  outC->_L21 = kcg_true;
  /* 2 */ if (outC->_L21) {
    /* 2 */ for (i = 0; i < 10; i++) {
      /* 1 */
      InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
        i,
        outC->_L26[i],
        outC->_L25[i],
        outC->_L19[i],
        &outC->_1_Context_1[i]);
      outC->_L23[i] = outC->_1_Context_1[i].hh;
      outC->_L24[i] = outC->_1_Context_1[i].mm;
      outC->_L22 = i + 1;
      /* 2 */ if (!outC->_1_Context_1[i].condition) {
        break;
      }
    }
  }
  else {
    outC->_L22 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 2 */ for (i = outC->_L22; i < 10; i++) {
    outC->_L23[i] = - 1.0;
    outC->_L24[i] = - 1.0;
  }
#endif /* KCG_MAPW_CPY */
  
  noname = outC->_L22;
  /* last_init_ck_hh_array */ if (outC->init) {
    kcg_copy_array_real_10(
      &last_hh_array,
      (array_real_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_10(&last_hh_array, &outC->hh_array);
  }
  kcg_copy_array_real_10(&outC->hh_array, &outC->_L23);
  /* last_init_ck_mm_array */ if (outC->init) {
    kcg_copy_array_real_10(
      &last_mm_array,
      (array_real_10 *) &cArray_mm_leer_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_10(&last_mm_array, &outC->mm_array);
  }
  kcg_copy_array_real_10(&outC->mm_array, &outC->_L24);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

