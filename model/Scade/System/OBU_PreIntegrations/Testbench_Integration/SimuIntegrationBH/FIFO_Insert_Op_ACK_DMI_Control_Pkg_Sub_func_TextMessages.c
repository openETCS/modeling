/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void FIFO_Insert_Op_ACK_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i4;
  static kcg_int i5;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 5; i++) {
    outC->mm_array[i] = 0.0;
  }
  for (i1 = 0; i1 < 5; i1++) {
    outC->hh_array[i1] = 0.0;
  }
  for (i3 = 0; i3 < 5; i3++) {
    outC->queue[i3].present = kcg_true;
    outC->queue[i3].dmi_msg.valid = kcg_true;
    outC->queue[i3].dmi_msg.system_clock = 0;
    outC->queue[i3].dmi_msg.textMessage_ID = 0;
    outC->queue[i3].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->queue[i3].dmi_msg.l_text = 0;
    for (i2 = 0; i2 < 255; i2++) {
      outC->queue[i3].dmi_msg.x_text[i2] = ' ';
    }
    outC->queue[i3].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->queue[i3].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i5 = 0; i5 < 5; i5++) {
    /* 1 */
    InsertTime_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->_1_Context_1[i5]);
  }
  for (i4 = 0; i4 < 5; i4++) {
    /* 1 */
    InsertStructMSGFIFO_iterator_ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_1[i4]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void FIFO_Insert_Op_ACK_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i;
  static kcg_int i1;
  
  outC->init = kcg_true;
  for (i1 = 0; i1 < 5; i1++) {
    /* 1 */
    InsertTime_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->_1_Context_1[i1]);
  }
  for (i = 0; i < 5; i++) {
    /* 1 */
    InsertStructMSGFIFO_iterator_ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_1[i]);
  }
}

/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK */
void FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::Pos */ kcg_int Pos,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::Messaggio */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *Messaggio,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::new_mm */ kcg_real new_mm,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::new_hh */ kcg_real new_hh,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::isFull */ kcg_bool isFull,
  outC_FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK */
  static array_170229 acc;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  static kcg_int noname;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::mm_array */
  static array_real_5 last_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::hh_array */
  static array_real_5 last_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::queue */
  static array_170229 last_queue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L4 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L4;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L5 */
  static kcg_int _L5;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L7 */
  static array_169437 _L7;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L9 */
  static array_int_5 _L9;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L26 */
  static array_int_5 _L26;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L25 */
  static array_real_5 _L25;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L21 */
  static kcg_bool _L21;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L20 */
  static kcg_real _L20;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L19 */
  static array_real_5 _L19;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L18 */
  static kcg_int _L18;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L17 */
  static kcg_real _L17;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L29 */
  static kcg_bool _L29;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L31 */
  static array_bool_5 _L31;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L34 */
  static array_170229 _L34;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L36 */
  static array_170229 _L36;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L24 */
  static array_real_5 _L24;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L23 */
  static array_real_5 _L23;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK::_L22 */
  static kcg_int _L22;
  
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&_L4, Messaggio);
  _L5 = Pos;
  /* last_init_ck_queue */ if (outC->init) {
    kcg_copy_array_170229(
      &last_queue,
      (array_170229 *) &cMsgStructQueue_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_170229(&last_queue, &outC->queue);
  }
  kcg_copy_array_170229(&_L36, &last_queue);
  /* pow */ for (i7 = 0; i7 < 5; i7++) {
    _L9[i7] = _L5;
  }
  /* pow */ for (i6 = 0; i6 < 5; i6++) {
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&_L7[i6], &_L4);
  }
  _L29 = isFull;
  /* pow */ for (i5 = 0; i5 < 5; i5++) {
    _L31[i5] = _L29;
  }
  kcg_copy_array_170229(&_L34, &_L36);
  /* 1 */ for (i4 = 0; i4 < 5; i4++) {
    kcg_copy_array_170229(&acc, &_L34);
    /* 1 */
    InsertStructMSGFIFO_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages(
      i4,
      &acc,
      _L9[i4],
      &_L7[i4],
      _L31[i4],
      &outC->Context_1[i4]);
    kcg_copy_array_170229(&_L34, &outC->Context_1[i4].OutputArray);
  }
  kcg_copy_array_170229(&outC->queue, &_L34);
  _L17 = new_mm;
  _L18 = Pos;
  /* pow */ for (i3 = 0; i3 < 5; i3++) {
    _L19[i3] = _L17;
  }
  /* pow */ for (i2 = 0; i2 < 5; i2++) {
    _L26[i2] = _L18;
  }
  _L20 = new_hh;
  /* pow */ for (i1 = 0; i1 < 5; i1++) {
    _L25[i1] = _L20;
  }
  _L21 = kcg_true;
  /* 2 */ if (_L21) {
    /* 2 */ for (i = 0; i < 5; i++) {
      /* 1 */
      InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
        i,
        _L26[i],
        _L25[i],
        _L19[i],
        &outC->_1_Context_1[i]);
      _L23[i] = outC->_1_Context_1[i].hh;
      _L24[i] = outC->_1_Context_1[i].mm;
      _L22 = i + 1;
      /* 2 */ if (!outC->_1_Context_1[i].condition) {
        break;
      }
    }
  }
  else {
    _L22 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 2 */ for (i = _L22; i < 5; i++) {
    _L23[i] = - 1.0;
    _L24[i] = - 1.0;
  }
#endif /* KCG_MAPW_CPY */
  
  noname = _L22;
  /* last_init_ck_hh_array */ if (outC->init) {
    kcg_copy_array_real_5(
      &last_hh_array,
      (array_real_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_5(&last_hh_array, &outC->hh_array);
  }
  kcg_copy_array_real_5(&outC->hh_array, &_L23);
  /* last_init_ck_mm_array */ if (outC->init) {
    kcg_copy_array_real_5(
      &last_mm_array,
      (array_real_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_5(&last_mm_array, &outC->mm_array);
  }
  kcg_copy_array_real_5(&outC->mm_array, &_L24);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

