/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void MSGQueue_AcklMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
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
  
  outC->_L97 = 0;
  outC->_L96 = 0;
  outC->_L95 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L93 = kcg_true;
  outC->_L88 = kcg_true;
  outC->_L89.valid = kcg_true;
  outC->_L89.system_clock = 0;
  outC->_L89.textMessage_ID = 0;
  outC->_L89.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L89.l_text = 0;
  for (i = 0; i < 255; i++) {
    outC->_L89.x_text[i] = ' ';
  }
  outC->_L89.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L89.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L82 = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L86 = kcg_true;
  outC->_L79 = 0.0;
  outC->_L81 = 0.0;
  outC->_L80 = 0.0;
  outC->_L83 = 0.0;
  outC->_L77 = 0;
  outC->_L55 = kcg_true;
  outC->ins = kcg_true;
  outC->countCommand_mm = 0.0;
  outC->countCommand_hh = 0.0;
  outC->CountCommand = 0;
  outC->NumElem = 0;
  outC->_L3_OperationQueue_IfBlock = 0.0;
  outC->_L25_OperationQueue_IfBlock = 0;
  outC->_L1_OperationQueue_IfBlock = 0.0;
  outC->_L7_OperationQueue_IfBlock = 0;
  outC->_L6_OperationQueue_IfBlock = 0;
  outC->_L5_OperationQueue_IfBlock = 0;
  outC->_L2_OperationQueue_IfBlock.valid = kcg_true;
  outC->_L2_OperationQueue_IfBlock.system_clock = 0;
  outC->_L2_OperationQueue_IfBlock.textMessage_ID = 0;
  outC->_L2_OperationQueue_IfBlock.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L2_OperationQueue_IfBlock.l_text = 0;
  for (i1 = 0; i1 < 255; i1++) {
    outC->_L2_OperationQueue_IfBlock.x_text[i1] = ' ';
  }
  outC->_L2_OperationQueue_IfBlock.q_textClass =
    Q_TEXTCLASS_Auxiliary_Information;
  outC->_L2_OperationQueue_IfBlock.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L23_OperationQueue_IfBlock = 0;
  outC->_L26_OperationQueue_IfBlock = 0.0;
  outC->_L27_OperationQueue_IfBlock = 0.0;
  outC->_L30_OperationQueue_IfBlock = 0.0;
  outC->_L29_OperationQueue_IfBlock = 0.0;
  outC->_L31_OperationQueue_IfBlock = kcg_true;
  for (i2 = 0; i2 < 5; i2++) {
    outC->_L34_OperationQueue_IfBlock[i2] = 0.0;
  }
  for (i3 = 0; i3 < 5; i3++) {
    outC->_L33_OperationQueue_IfBlock[i3] = 0.0;
  }
  for (i5 = 0; i5 < 5; i5++) {
    outC->_L32_OperationQueue_IfBlock[i5].present = kcg_true;
    outC->_L32_OperationQueue_IfBlock[i5].dmi_msg.valid = kcg_true;
    outC->_L32_OperationQueue_IfBlock[i5].dmi_msg.system_clock = 0;
    outC->_L32_OperationQueue_IfBlock[i5].dmi_msg.textMessage_ID = 0;
    outC->_L32_OperationQueue_IfBlock[i5].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L32_OperationQueue_IfBlock[i5].dmi_msg.l_text = 0;
    for (i4 = 0; i4 < 255; i4++) {
      outC->_L32_OperationQueue_IfBlock[i5].dmi_msg.x_text[i4] = ' ';
    }
    outC->_L32_OperationQueue_IfBlock[i5].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L32_OperationQueue_IfBlock[i5].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L13_StatusQueue_IfBlock = kcg_true;
  outC->_L14_StatusQueue_IfBlock = kcg_true;
  outC->else_clock_StatusQueue_IfBlock = kcg_true;
  outC->_L1_StatusQueue_IfBlock = kcg_true;
  outC->OperationQueue_IfBlock_clock = kcg_true;
  outC->StatusQueue_IfBlock_clock = kcg_true;
  outC->init = kcg_true;
  outC->Local_hh = 0.0;
  outC->Local_mm = 0.0;
  for (i6 = 0; i6 < 5; i6++) {
    outC->mm_array[i6] = 0.0;
  }
  for (i7 = 0; i7 < 5; i7++) {
    outC->hh_array[i7] = 0.0;
  }
  outC->AckisEmpty = kcg_true;
  outC->AckisFull = kcg_true;
  outC->NumE = 0;
  for (i9 = 0; i9 < 5; i9++) {
    outC->queue[i9].present = kcg_true;
    outC->queue[i9].dmi_msg.valid = kcg_true;
    outC->queue[i9].dmi_msg.system_clock = 0;
    outC->queue[i9].dmi_msg.textMessage_ID = 0;
    outC->queue[i9].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->queue[i9].dmi_msg.l_text = 0;
    for (i8 = 0; i8 < 255; i8++) {
      outC->queue[i9].dmi_msg.x_text[i8] = ' ';
    }
    outC->queue[i9].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->queue[i9].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  /* 1 */
  FIFO_Insert_Op_ACK_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_2_Context_1);
  /* 1 */
  TimeCounter_init_DMI_Control_Pkg_Sub_func_TextMessages(&outC->_1_Context_1);
  /* 1 */
  ACKMsgQueueCounter_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void MSGQueue_AcklMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  /* 1 */
  FIFO_Insert_Op_ACK_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_2_Context_1);
  /* 1 */
  TimeCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->_1_Context_1);
  /* 1 */
  ACKMsgQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG */
void MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::msg */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::last_num */ kcg_int last_num,
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::AckisEmpty */
  static kcg_bool _2_AckisEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::AckisFull */
  static kcg_bool _1_AckisFull;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::AckisEmpty */
  static kcg_bool AckisEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::AckisFull */
  static kcg_bool AckisFull;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::AckisFull */
  static kcg_bool _3_AckisFull;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::AckisEmpty */
  static kcg_bool _4_AckisEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::AckisFull */
  static kcg_bool _5_AckisFull;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::AckisEmpty */
  static kcg_bool _6_AckisEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::countCommand_mm */
  static kcg_real _12_countCommand_mm;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::countCommand_hh */
  static kcg_real _11_countCommand_hh;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::CountCommand */
  static kcg_int _10_CountCommand;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::mm_array */
  static array_real_5 _9_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::hh_array */
  static array_real_5 _8_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::queue */
  static array_170229 queue7;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::countCommand_mm */
  static kcg_real countCommand_mm;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::countCommand_hh */
  static kcg_real countCommand_hh;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::CountCommand */
  static kcg_int CountCommand;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::mm_array */
  static array_real_5 mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::hh_array */
  static array_real_5 hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::queue */
  static array_170229 queue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::Local_hh */
  static kcg_real last_Local_hh;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::Local_mm */
  static kcg_real last_Local_mm;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::mm_array */
  static array_real_5 last_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::hh_array */
  static array_real_5 last_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::AckisEmpty */
  static kcg_bool last_AckisEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::AckisFull */
  static kcg_bool last_AckisFull;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG::queue */
  static array_170229 last_queue;
  
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L89, msg);
  outC->_L88 = outC->_L89.valid;
  outC->_L94 = kcg_true;
  outC->_L95 = kcg_false;
  /* 1 */ if (outC->_L88) {
    outC->_L93 = outC->_L94;
  }
  else {
    outC->_L93 = outC->_L95;
  }
  outC->ins = outC->_L93;
  outC->OperationQueue_IfBlock_clock = outC->ins;
  /* last_init_ck_queue */ if (outC->init) {
    kcg_copy_array_170229(
      &last_queue,
      (array_170229 *) &cListMsgStructure_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_170229(&last_queue, &outC->queue);
  }
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
  }
  else {
    kcg_copy_array_170229(
      &queue,
      (array_170229 *) &cListMsgStructure_DMI_Control_Pkg);
  }
  outC->_L76 = outC->ins;
  /* last_init_ck_AckisFull */ if (outC->init) {
    last_AckisFull = kcg_false;
  }
  else {
    last_AckisFull = outC->AckisFull;
  }
  outC->_L55 = last_AckisFull;
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    outC->_L23_OperationQueue_IfBlock = 1;
    _10_CountCommand = outC->_L23_OperationQueue_IfBlock;
    outC->CountCommand = _10_CountCommand;
  }
  else {
    outC->_L25_OperationQueue_IfBlock = 0;
    CountCommand = outC->_L25_OperationQueue_IfBlock;
    outC->CountCommand = CountCommand;
  }
  outC->_L77 = outC->CountCommand;
  outC->_L96 = last_num;
  /* 1 */
  ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L76,
    outC->_L55,
    outC->_L77,
    outC->_L96,
    &outC->Context_1);
  outC->_L97 = outC->Context_1.NumElem;
  outC->NumElem = outC->_L97;
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    outC->_L7_OperationQueue_IfBlock = outC->NumElem;
    outC->_L5_OperationQueue_IfBlock = 1;
    outC->_L6_OperationQueue_IfBlock = outC->_L7_OperationQueue_IfBlock -
      outC->_L5_OperationQueue_IfBlock;
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L2_OperationQueue_IfBlock,
      msg);
  }
  /* last_init_ck_Local_mm */ if (outC->init) {
    last_Local_mm = 10.0;
  }
  else {
    last_Local_mm = outC->Local_mm;
  }
  outC->_L82 = outC->ins;
  outC->_L86 = last_AckisFull;
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    outC->_L29_OperationQueue_IfBlock = 10.0;
    _12_countCommand_mm = outC->_L29_OperationQueue_IfBlock;
    outC->countCommand_mm = _12_countCommand_mm;
  }
  else {
    outC->_L3_OperationQueue_IfBlock = 0.0;
    countCommand_mm = outC->_L3_OperationQueue_IfBlock;
    outC->countCommand_mm = countCommand_mm;
  }
  outC->_L83 = outC->countCommand_mm;
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    outC->_L30_OperationQueue_IfBlock = 1.0;
    _11_countCommand_hh = outC->_L30_OperationQueue_IfBlock;
    outC->countCommand_hh = _11_countCommand_hh;
  }
  else {
    outC->_L1_OperationQueue_IfBlock = 0.0;
    countCommand_hh = outC->_L1_OperationQueue_IfBlock;
    outC->countCommand_hh = countCommand_hh;
  }
  outC->_L79 = outC->countCommand_hh;
  /* 1 */
  TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L82,
    outC->_L86,
    outC->_L83,
    outC->_L79,
    &outC->_1_Context_1);
  outC->_L80 = outC->_1_Context_1.mm;
  outC->_L81 = outC->_1_Context_1.hh;
  outC->Local_mm = outC->_L80;
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    outC->_L26_OperationQueue_IfBlock = outC->Local_mm;
  }
  /* last_init_ck_Local_hh */ if (outC->init) {
    last_Local_hh = 17.0;
  }
  else {
    last_Local_hh = outC->Local_hh;
  }
  outC->Local_hh = outC->_L81;
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    outC->_L27_OperationQueue_IfBlock = outC->Local_hh;
    outC->_L31_OperationQueue_IfBlock = last_AckisFull;
    /* 1 */
    FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages(
      outC->_L6_OperationQueue_IfBlock,
      &outC->_L2_OperationQueue_IfBlock,
      outC->_L26_OperationQueue_IfBlock,
      outC->_L27_OperationQueue_IfBlock,
      outC->_L31_OperationQueue_IfBlock,
      &outC->_2_Context_1);
    kcg_copy_array_170229(
      &outC->_L32_OperationQueue_IfBlock,
      &outC->_2_Context_1.queue);
    kcg_copy_array_real_5(
      &outC->_L33_OperationQueue_IfBlock,
      &outC->_2_Context_1.hh_array);
    kcg_copy_array_real_5(
      &outC->_L34_OperationQueue_IfBlock,
      &outC->_2_Context_1.mm_array);
    kcg_copy_array_170229(&queue7, &outC->_L32_OperationQueue_IfBlock);
    kcg_copy_array_170229(&outC->queue, &queue7);
  }
  else {
    kcg_copy_array_170229(&outC->queue, &queue);
  }
  /* last_init_ck_hh_array */ if (outC->init) {
    kcg_copy_array_real_5(
      &last_hh_array,
      (array_real_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_5(&last_hh_array, &outC->hh_array);
  }
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    kcg_copy_array_real_5(&_8_hh_array, &outC->_L33_OperationQueue_IfBlock);
    kcg_copy_array_real_5(&outC->hh_array, &_8_hh_array);
  }
  else {
    kcg_copy_array_real_5(
      &hh_array,
      (array_real_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
    kcg_copy_array_real_5(&outC->hh_array, &hh_array);
  }
  /* last_init_ck_mm_array */ if (outC->init) {
    kcg_copy_array_real_5(
      &last_mm_array,
      (array_real_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_5(&last_mm_array, &outC->mm_array);
  }
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    kcg_copy_array_real_5(&_9_mm_array, &outC->_L34_OperationQueue_IfBlock);
    kcg_copy_array_real_5(&outC->mm_array, &_9_mm_array);
  }
  else {
    kcg_copy_array_real_5(
      &mm_array,
      (array_real_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
    kcg_copy_array_real_5(&outC->mm_array, &mm_array);
  }
  outC->NumE = outC->_L97;
  outC->StatusQueue_IfBlock_clock = outC->NumElem >=
    cDIM_MSGQueue_DMI_Control_Pkg;
  /* ck_StatusQueue_IfBlock */ if (outC->StatusQueue_IfBlock_clock) {
    outC->_L1_StatusQueue_IfBlock = kcg_true;
    _1_AckisFull = outC->_L1_StatusQueue_IfBlock;
    outC->AckisFull = _1_AckisFull;
  }
  else {
    outC->else_clock_StatusQueue_IfBlock = outC->NumElem <= 0;
    /* ck_anon_activ */ if (outC->else_clock_StatusQueue_IfBlock) {
      _5_AckisFull = last_AckisFull;
      AckisFull = _5_AckisFull;
    }
    else {
      outC->_L14_StatusQueue_IfBlock = kcg_false;
      _3_AckisFull = outC->_L14_StatusQueue_IfBlock;
      AckisFull = _3_AckisFull;
    }
    outC->AckisFull = AckisFull;
  }
  /* last_init_ck_AckisEmpty */ if (outC->init) {
    last_AckisEmpty = kcg_false;
  }
  else {
    last_AckisEmpty = outC->AckisEmpty;
  }
  /* ck_StatusQueue_IfBlock */ if (outC->StatusQueue_IfBlock_clock) {
    _2_AckisEmpty = kcg_false;
    outC->AckisEmpty = _2_AckisEmpty;
  }
  else {
    /* ck_anon_activ */ if (outC->else_clock_StatusQueue_IfBlock) {
      outC->_L13_StatusQueue_IfBlock = kcg_true;
      _6_AckisEmpty = outC->_L13_StatusQueue_IfBlock;
      AckisEmpty = _6_AckisEmpty;
    }
    else {
      _4_AckisEmpty = outC->_L14_StatusQueue_IfBlock;
      AckisEmpty = _4_AckisEmpty;
    }
    outC->AckisEmpty = AckisEmpty;
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

