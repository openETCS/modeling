/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void MSGQueue_normalMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
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
  
  outC->_L110 = 0;
  outC->_L109 = 0;
  outC->_L108 = 0;
  outC->_L107 = kcg_true;
  outC->_L106 = kcg_true;
  outC->_L105 = kcg_true;
  outC->_L102.valid = kcg_true;
  outC->_L102.system_clock = 0;
  outC->_L102.textMessage_ID = 0;
  outC->_L102.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L102.l_text = 0;
  for (i = 0; i < 255; i++) {
    outC->_L102.x_text[i] = ' ';
  }
  outC->_L102.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L102.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L101 = kcg_true;
  outC->_L100 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L78 = 0.0;
  outC->_L77 = 0.0;
  outC->_L73 = kcg_true;
  outC->_L70 = 0.0;
  outC->_L71 = 0.0;
  outC->_L54 = kcg_true;
  outC->_L37 = 0;
  outC->_L33 = 0;
  outC->_L32 = 0;
  outC->_L22 = kcg_true;
  outC->_L16 = 0;
  outC->_L4 = 0;
  outC->_L7 = 0;
  outC->_L9 = kcg_true;
  outC->_L13 = kcg_true;
  outC->countCommand_hh = 0.0;
  outC->countCommand_mm = 0.0;
  outC->insertAuxiMsg = kcg_true;
  outC->CountCommand_auxi = 0;
  outC->CountCommand_imp = 0;
  outC->insertImpMsg = kcg_true;
  outC->ins = kcg_true;
  outC->CountCommand = 0;
  outC->NumElem = 0;
  outC->_L113_StatusQueue_IfBlock = kcg_true;
  outC->_L114_StatusQueue_IfBlock = kcg_true;
  outC->else_clock_StatusQueue_IfBlock = kcg_true;
  outC->_L1_StatusQueue_IfBlock = kcg_true;
  outC->_L3_OperationQueue_IfBlock = 0.0;
  outC->_L2_OperationQueue_IfBlock = 0;
  outC->_L1_OperationQueue_IfBlock = 0.0;
  outC->_L19_OperationQueue_IfBlock_IfBlock1 = kcg_true;
  outC->_L15_OperationQueue_IfBlock_IfBlock1 = 0.0;
  outC->_L14_OperationQueue_IfBlock_IfBlock1 = 0.0;
  for (i1 = 0; i1 < 10; i1++) {
    outC->_L11_OperationQueue_IfBlock_IfBlock1[i1] = 0.0;
  }
  for (i2 = 0; i2 < 10; i2++) {
    outC->_L10_OperationQueue_IfBlock_IfBlock1[i2] = 0.0;
  }
  outC->_L2_OperationQueue_IfBlock_IfBlock1 = 0;
  outC->_L9_OperationQueue_IfBlock_IfBlock1 = 0;
  outC->_L8_OperationQueue_IfBlock_IfBlock1 = 0;
  outC->_L3_OperationQueue_IfBlock_IfBlock1 = 0;
  outC->_L5_OperationQueue_IfBlock_IfBlock1.valid = kcg_true;
  outC->_L5_OperationQueue_IfBlock_IfBlock1.system_clock = 0;
  outC->_L5_OperationQueue_IfBlock_IfBlock1.textMessage_ID = 0;
  outC->_L5_OperationQueue_IfBlock_IfBlock1.q_text =
    balise_read_error_DMI_Types_Pkg;
  outC->_L5_OperationQueue_IfBlock_IfBlock1.l_text = 0;
  for (i3 = 0; i3 < 255; i3++) {
    outC->_L5_OperationQueue_IfBlock_IfBlock1.x_text[i3] = ' ';
  }
  outC->_L5_OperationQueue_IfBlock_IfBlock1.q_textClass =
    Q_TEXTCLASS_Auxiliary_Information;
  outC->_L5_OperationQueue_IfBlock_IfBlock1.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L6_OperationQueue_IfBlock_IfBlock1 = 0;
  for (i5 = 0; i5 < 10; i5++) {
    outC->_L7_OperationQueue_IfBlock_IfBlock1[i5].present = kcg_true;
    outC->_L7_OperationQueue_IfBlock_IfBlock1[i5].dmi_msg.valid = kcg_true;
    outC->_L7_OperationQueue_IfBlock_IfBlock1[i5].dmi_msg.system_clock = 0;
    outC->_L7_OperationQueue_IfBlock_IfBlock1[i5].dmi_msg.textMessage_ID = 0;
    outC->_L7_OperationQueue_IfBlock_IfBlock1[i5].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L7_OperationQueue_IfBlock_IfBlock1[i5].dmi_msg.l_text = 0;
    for (i4 = 0; i4 < 255; i4++) {
      outC->_L7_OperationQueue_IfBlock_IfBlock1[i5].dmi_msg.x_text[i4] = ' ';
    }
    outC->_L7_OperationQueue_IfBlock_IfBlock1[i5].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L7_OperationQueue_IfBlock_IfBlock1[i5].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L17_OperationQueue_IfBlock_IfBlock1 = kcg_true;
  outC->_L145_OperationQueue_IfBlock_IfBlock1 = 0.0;
  outC->_L13_OperationQueue_IfBlock_IfBlock1 = 0.0;
  for (i6 = 0; i6 < 10; i6++) {
    outC->_L106_OperationQueue_IfBlock_IfBlock1[i6] = 0.0;
  }
  for (i7 = 0; i7 < 10; i7++) {
    outC->_L97_OperationQueue_IfBlock_IfBlock1[i7] = 0.0;
  }
  outC->_L88_OperationQueue_IfBlock_IfBlock1 = 0;
  outC->_L79_OperationQueue_IfBlock_IfBlock1 = 0;
  for (i9 = 0; i9 < 10; i9++) {
    outC->_L210_OperationQueue_IfBlock_IfBlock1[i9].present = kcg_true;
    outC->_L210_OperationQueue_IfBlock_IfBlock1[i9].dmi_msg.valid = kcg_true;
    outC->_L210_OperationQueue_IfBlock_IfBlock1[i9].dmi_msg.system_clock = 0;
    outC->_L210_OperationQueue_IfBlock_IfBlock1[i9].dmi_msg.textMessage_ID = 0;
    outC->_L210_OperationQueue_IfBlock_IfBlock1[i9].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L210_OperationQueue_IfBlock_IfBlock1[i9].dmi_msg.l_text = 0;
    for (i8 = 0; i8 < 255; i8++) {
      outC->_L210_OperationQueue_IfBlock_IfBlock1[i9].dmi_msg.x_text[i8] = ' ';
    }
    outC->_L210_OperationQueue_IfBlock_IfBlock1[i9].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L210_OperationQueue_IfBlock_IfBlock1[i9].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L311_OperationQueue_IfBlock_IfBlock1 = 0;
  outC->_L4_OperationQueue_IfBlock_IfBlock1 = 0;
  outC->_L612_OperationQueue_IfBlock_IfBlock1.valid = kcg_true;
  outC->_L612_OperationQueue_IfBlock_IfBlock1.system_clock = 0;
  outC->_L612_OperationQueue_IfBlock_IfBlock1.textMessage_ID = 0;
  outC->_L612_OperationQueue_IfBlock_IfBlock1.q_text =
    balise_read_error_DMI_Types_Pkg;
  outC->_L612_OperationQueue_IfBlock_IfBlock1.l_text = 0;
  for (i10 = 0; i10 < 255; i10++) {
    outC->_L612_OperationQueue_IfBlock_IfBlock1.x_text[i10] = ' ';
  }
  outC->_L612_OperationQueue_IfBlock_IfBlock1.q_textClass =
    Q_TEXTCLASS_Auxiliary_Information;
  outC->_L612_OperationQueue_IfBlock_IfBlock1.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_OperationQueue_IfBlock_IfBlock1 = 0;
  outC->_L52_OperationQueue_IfBlock = 0;
  for (i12 = 0; i12 < 10; i12++) {
    outC->_L144_OperationQueue_IfBlock[i12].present = kcg_true;
    outC->_L144_OperationQueue_IfBlock[i12].dmi_msg.valid = kcg_true;
    outC->_L144_OperationQueue_IfBlock[i12].dmi_msg.system_clock = 0;
    outC->_L144_OperationQueue_IfBlock[i12].dmi_msg.textMessage_ID = 0;
    outC->_L144_OperationQueue_IfBlock[i12].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L144_OperationQueue_IfBlock[i12].dmi_msg.l_text = 0;
    for (i11 = 0; i11 < 255; i11++) {
      outC->_L144_OperationQueue_IfBlock[i12].dmi_msg.x_text[i11] = ' ';
    }
    outC->_L144_OperationQueue_IfBlock[i12].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L144_OperationQueue_IfBlock[i12].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i14 = 0; i14 < 10; i14++) {
    outC->_L143_OperationQueue_IfBlock[i14].present = kcg_true;
    outC->_L143_OperationQueue_IfBlock[i14].dmi_msg.valid = kcg_true;
    outC->_L143_OperationQueue_IfBlock[i14].dmi_msg.system_clock = 0;
    outC->_L143_OperationQueue_IfBlock[i14].dmi_msg.textMessage_ID = 0;
    outC->_L143_OperationQueue_IfBlock[i14].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L143_OperationQueue_IfBlock[i14].dmi_msg.l_text = 0;
    for (i13 = 0; i13 < 255; i13++) {
      outC->_L143_OperationQueue_IfBlock[i14].dmi_msg.x_text[i13] = ' ';
    }
    outC->_L143_OperationQueue_IfBlock[i14].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L143_OperationQueue_IfBlock[i14].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i16 = 0; i16 < 10; i16++) {
    outC->_L142_OperationQueue_IfBlock[i16].present = kcg_true;
    outC->_L142_OperationQueue_IfBlock[i16].dmi_msg.valid = kcg_true;
    outC->_L142_OperationQueue_IfBlock[i16].dmi_msg.system_clock = 0;
    outC->_L142_OperationQueue_IfBlock[i16].dmi_msg.textMessage_ID = 0;
    outC->_L142_OperationQueue_IfBlock[i16].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L142_OperationQueue_IfBlock[i16].dmi_msg.l_text = 0;
    for (i15 = 0; i15 < 255; i15++) {
      outC->_L142_OperationQueue_IfBlock[i16].dmi_msg.x_text[i15] = ' ';
    }
    outC->_L142_OperationQueue_IfBlock[i16].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L142_OperationQueue_IfBlock[i16].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L141_OperationQueue_IfBlock = 0;
  for (i17 = 0; i17 < 10; i17++) {
    outC->_L174_OperationQueue_IfBlock[i17] = 0.0;
  }
  for (i18 = 0; i18 < 10; i18++) {
    outC->_L175_OperationQueue_IfBlock[i18] = 0.0;
  }
  for (i19 = 0; i19 < 10; i19++) {
    outC->_L176_OperationQueue_IfBlock[i19] = 0.0;
  }
  outC->_L177_OperationQueue_IfBlock = 0;
  for (i20 = 0; i20 < 10; i20++) {
    outC->_L181_OperationQueue_IfBlock[i20] = 0.0;
  }
  outC->_L178_OperationQueue_IfBlock = 0;
  for (i21 = 0; i21 < 10; i21++) {
    outC->_L182_OperationQueue_IfBlock[i21] = 0.0;
  }
  for (i22 = 0; i22 < 10; i22++) {
    outC->_L183_OperationQueue_IfBlock[i22] = 0.0;
  }
  outC->_L185_OperationQueue_IfBlock = 0.0;
  outC->_L187_OperationQueue_IfBlock = 0.0;
  outC->StatusQueue_IfBlock_clock = kcg_true;
  outC->OperationQueue_IfBlock_clock = kcg_true;
  outC->IfBlock1_clock_OperationQueue_IfBlock = kcg_true;
  outC->init = kcg_true;
  for (i23 = 0; i23 < 10; i23++) {
    outC->Local_mm_array_auxi[i23] = 0.0;
  }
  for (i24 = 0; i24 < 10; i24++) {
    outC->Local_hh_array_auxi[i24] = 0.0;
  }
  for (i25 = 0; i25 < 10; i25++) {
    outC->Local_hh_array_imp[i25] = 0.0;
  }
  for (i26 = 0; i26 < 10; i26++) {
    outC->Local_mm_array_imp[i26] = 0.0;
  }
  outC->Local_hh = 0.0;
  outC->Local_mm = 0.0;
  for (i28 = 0; i28 < 10; i28++) {
    outC->auxiQueue[i28].present = kcg_true;
    outC->auxiQueue[i28].dmi_msg.valid = kcg_true;
    outC->auxiQueue[i28].dmi_msg.system_clock = 0;
    outC->auxiQueue[i28].dmi_msg.textMessage_ID = 0;
    outC->auxiQueue[i28].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->auxiQueue[i28].dmi_msg.l_text = 0;
    for (i27 = 0; i27 < 255; i27++) {
      outC->auxiQueue[i28].dmi_msg.x_text[i27] = ' ';
    }
    outC->auxiQueue[i28].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->auxiQueue[i28].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i30 = 0; i30 < 10; i30++) {
    outC->impQueue[i30].present = kcg_true;
    outC->impQueue[i30].dmi_msg.valid = kcg_true;
    outC->impQueue[i30].dmi_msg.system_clock = 0;
    outC->impQueue[i30].dmi_msg.textMessage_ID = 0;
    outC->impQueue[i30].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->impQueue[i30].dmi_msg.l_text = 0;
    for (i29 = 0; i29 < 255; i29++) {
      outC->impQueue[i30].dmi_msg.x_text[i29] = ' ';
    }
    outC->impQueue[i30].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->impQueue[i30].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->NumAuxi = 0;
  outC->NumImp = 0;
  for (i31 = 0; i31 < 10; i31++) {
    outC->hh_array[i31] = 0.0;
  }
  for (i32 = 0; i32 < 10; i32++) {
    outC->mm_array[i32] = 0.0;
  }
  for (i34 = 0; i34 < 10; i34++) {
    outC->queue[i34].present = kcg_true;
    outC->queue[i34].dmi_msg.valid = kcg_true;
    outC->queue[i34].dmi_msg.system_clock = 0;
    outC->queue[i34].dmi_msg.textMessage_ID = 0;
    outC->queue[i34].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->queue[i34].dmi_msg.l_text = 0;
    for (i33 = 0; i33 < 255; i33++) {
      outC->queue[i34].dmi_msg.x_text[i33] = ' ';
    }
    outC->queue[i34].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->queue[i34].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->NumE = 0;
  outC->isEmpty = kcg_true;
  outC->isFull = kcg_true;
  /* 1 */
  MergeTime_init_DMI_Control_Pkg_Sub_func_TextMessages(&outC->_4_Context_1);
  /* 2 */
  MergeTime_init_DMI_Control_Pkg_Sub_func_TextMessages(&outC->_3_Context_2);
  /* 9 */ MergeMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_9);
  /* 24 */
  FIFO_Insert_Op_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_24);
  /* 25 */
  FIFO_Insert_Op_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_25);
  /* 1 */
  TimeCounter_init_DMI_Control_Pkg_Sub_func_TextMessages(&outC->_2_Context_1);
  /* 2 */
  NormalMSGQueueCounter_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_2);
  /* 3 */
  NormalMSGQueueCounter_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_3);
  /* 1 */
  NormalMSGQueueCounter_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_1_Context_1);
  /* 1 */
  CheckMsgInsertOrDelete_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void MSGQueue_normalMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  /* 1 */
  MergeTime_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->_4_Context_1);
  /* 2 */
  MergeTime_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->_3_Context_2);
  /* 9 */
  MergeMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_9);
  /* 24 */
  FIFO_Insert_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_24);
  /* 25 */
  FIFO_Insert_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_25);
  /* 1 */
  TimeCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->_2_Context_1);
  /* 2 */
  NormalMSGQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_2);
  /* 3 */
  NormalMSGQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_3);
  /* 1 */
  NormalMSGQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_1_Context_1);
  /* 1 */
  CheckMsgInsertOrDelete_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG */
void MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::msg */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isImportant */ kcg_bool isImportant,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::num_last */ kcg_int num_last,
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::countCommand_hh */
  static kcg_real _14_countCommand_hh;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::countCommand_mm */
  static kcg_real _13_countCommand_mm;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm_array_auxi */
  static array_real_10 _12_Local_mm_array_auxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh_array_auxi */
  static array_real_10 _11_Local_hh_array_auxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh_array_imp */
  static array_real_10 _10_Local_hh_array_imp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm_array_imp */
  static array_real_10 _9_Local_mm_array_imp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::auxiQueue */
  static array_169451 _8_auxiQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::impQueue */
  static array_169451 _7_impQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::CountCommand_auxi */
  static kcg_int _6_CountCommand_auxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::CountCommand_imp */
  static kcg_int _5_CountCommand_imp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::CountCommand */
  static kcg_int _4_CountCommand;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::hh_array */
  static array_real_10 _3_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::mm_array */
  static array_real_10 _2_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::queue */
  static array_169451 queue1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::CountCommand_imp */
  static kcg_int _15_CountCommand_imp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::CountCommand_auxi */
  static kcg_int _16_CountCommand_auxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::impQueue */
  static array_169451 _17_impQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::auxiQueue */
  static array_169451 _18_auxiQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm_array_imp */
  static array_real_10 _19_Local_mm_array_imp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh_array_imp */
  static array_real_10 _20_Local_hh_array_imp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh_array_auxi */
  static array_real_10 _21_Local_hh_array_auxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm_array_auxi */
  static array_real_10 _22_Local_mm_array_auxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::CountCommand_imp */
  static kcg_int _23_CountCommand_imp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::CountCommand_auxi */
  static kcg_int _24_CountCommand_auxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::impQueue */
  static array_169451 _25_impQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::auxiQueue */
  static array_169451 _26_auxiQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm_array_imp */
  static array_real_10 _27_Local_mm_array_imp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh_array_imp */
  static array_real_10 _28_Local_hh_array_imp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh_array_auxi */
  static array_real_10 _29_Local_hh_array_auxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm_array_auxi */
  static array_real_10 _30_Local_mm_array_auxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::countCommand_hh */
  static kcg_real countCommand_hh;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::countCommand_mm */
  static kcg_real countCommand_mm;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm_array_auxi */
  static array_real_10 Local_mm_array_auxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh_array_auxi */
  static array_real_10 Local_hh_array_auxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh_array_imp */
  static array_real_10 Local_hh_array_imp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm_array_imp */
  static array_real_10 Local_mm_array_imp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::auxiQueue */
  static array_169451 auxiQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::impQueue */
  static array_169451 impQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::CountCommand_auxi */
  static kcg_int CountCommand_auxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::CountCommand_imp */
  static kcg_int CountCommand_imp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::CountCommand */
  static kcg_int CountCommand;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::hh_array */
  static array_real_10 hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::mm_array */
  static array_real_10 mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::queue */
  static array_169451 queue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isEmpty */
  static kcg_bool _32_isEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isFull */
  static kcg_bool _31_isFull;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isEmpty */
  static kcg_bool isEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isFull */
  static kcg_bool isFull;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isFull */
  static kcg_bool _33_isFull;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isEmpty */
  static kcg_bool _34_isEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isFull */
  static kcg_bool _35_isFull;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isEmpty */
  static kcg_bool _36_isEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm_array_auxi */
  static array_real_10 last_Local_mm_array_auxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh_array_auxi */
  static array_real_10 last_Local_hh_array_auxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh_array_imp */
  static array_real_10 last_Local_hh_array_imp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm_array_imp */
  static array_real_10 last_Local_mm_array_imp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh */
  static kcg_real last_Local_hh;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm */
  static kcg_real last_Local_mm;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::auxiQueue */
  static array_169451 last_auxiQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::impQueue */
  static array_169451 last_impQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::NumAuxi */
  static kcg_int last_NumAuxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::NumImp */
  static kcg_int last_NumImp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::hh_array */
  static array_real_10 last_hh_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::mm_array */
  static array_real_10 last_mm_array;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::queue */
  static array_169451 last_queue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isEmpty */
  static kcg_bool last_isEmpty;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isFull */
  static kcg_bool last_isFull;
  
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L102, msg);
  outC->_L94 = isImportant;
  /* 1 */
  CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L102,
    outC->_L94,
    &outC->Context_1);
  outC->_L99 = outC->Context_1.insert;
  outC->_L100 = outC->Context_1.insertAuxi;
  outC->_L101 = outC->Context_1.insertImp;
  outC->ins = outC->_L99;
  outC->_L9 = outC->ins;
  /* last_init_ck_isFull */ if (outC->init) {
    last_isFull = kcg_false;
  }
  else {
    last_isFull = outC->isFull;
  }
  outC->_L13 = last_isFull;
  outC->OperationQueue_IfBlock_clock = outC->ins;
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    outC->_L52_OperationQueue_IfBlock = 1;
    _4_CountCommand = outC->_L52_OperationQueue_IfBlock;
    outC->CountCommand = _4_CountCommand;
  }
  else {
    outC->_L2_OperationQueue_IfBlock = 0;
    CountCommand = outC->_L2_OperationQueue_IfBlock;
    outC->CountCommand = CountCommand;
  }
  outC->_L4 = outC->CountCommand;
  outC->_L108 = num_last;
  /* 1 */
  NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L9,
    outC->_L13,
    outC->_L4,
    outC->_L108,
    &outC->_1_Context_1);
  outC->_L7 = outC->_1_Context_1.NumElem;
  outC->NumE = outC->_L7;
  outC->NumElem = outC->_L7;
  outC->StatusQueue_IfBlock_clock = outC->NumElem >=
    cDIM_MSGQueueMax_DMI_Control_Pkg;
  /* ck_StatusQueue_IfBlock */ if (outC->StatusQueue_IfBlock_clock) {
    outC->_L1_StatusQueue_IfBlock = kcg_true;
    _31_isFull = outC->_L1_StatusQueue_IfBlock;
    outC->isFull = _31_isFull;
  }
  else {
    outC->else_clock_StatusQueue_IfBlock = outC->NumElem <= 0;
    /* ck_anon_activ */ if (outC->else_clock_StatusQueue_IfBlock) {
      _35_isFull = last_isFull;
      isFull = _35_isFull;
    }
    else {
      outC->_L114_StatusQueue_IfBlock = kcg_false;
      _33_isFull = outC->_L114_StatusQueue_IfBlock;
      isFull = _33_isFull;
    }
    outC->isFull = isFull;
  }
  /* last_init_ck_isEmpty */ if (outC->init) {
    last_isEmpty = kcg_false;
  }
  else {
    last_isEmpty = outC->isEmpty;
  }
  /* ck_StatusQueue_IfBlock */ if (outC->StatusQueue_IfBlock_clock) {
    _32_isEmpty = kcg_false;
    outC->isEmpty = _32_isEmpty;
  }
  else {
    /* ck_anon_activ */ if (outC->else_clock_StatusQueue_IfBlock) {
      outC->_L113_StatusQueue_IfBlock = kcg_true;
      _36_isEmpty = outC->_L113_StatusQueue_IfBlock;
      isEmpty = _36_isEmpty;
    }
    else {
      _34_isEmpty = outC->_L114_StatusQueue_IfBlock;
      isEmpty = _34_isEmpty;
    }
    outC->isEmpty = isEmpty;
  }
  /* last_init_ck_queue */ if (outC->init) {
    kcg_copy_array_169451(
      &last_queue,
      (array_169451 *) &cMsgStructQueueMax_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_169451(&last_queue, &outC->queue);
  }
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
  }
  else {
    kcg_copy_array_169451(&queue, &last_queue);
  }
  /* last_init_ck_NumAuxi */ if (outC->init) {
    last_NumAuxi = 0;
  }
  else {
    last_NumAuxi = outC->NumAuxi;
  }
  outC->insertAuxiMsg = outC->_L100;
  outC->_L54 = outC->insertAuxiMsg;
  outC->_L107 = last_isFull;
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
  }
  else {
    CountCommand_auxi = outC->_L2_OperationQueue_IfBlock;
  }
  outC->insertImpMsg = outC->_L101;
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    outC->IfBlock1_clock_OperationQueue_IfBlock = outC->insertImpMsg;
    /* ck_IfBlock1 */ if (outC->IfBlock1_clock_OperationQueue_IfBlock) {
      outC->_L9_OperationQueue_IfBlock_IfBlock1 = 0;
      _24_CountCommand_auxi = outC->_L9_OperationQueue_IfBlock_IfBlock1;
      _6_CountCommand_auxi = _24_CountCommand_auxi;
    }
    else {
      outC->_L88_OperationQueue_IfBlock_IfBlock1 = 1;
      _16_CountCommand_auxi = outC->_L88_OperationQueue_IfBlock_IfBlock1;
      _6_CountCommand_auxi = _16_CountCommand_auxi;
    }
    outC->CountCommand_auxi = _6_CountCommand_auxi;
  }
  else {
    outC->CountCommand_auxi = CountCommand_auxi;
  }
  outC->_L37 = outC->CountCommand_auxi;
  outC->_L110 = last_NumAuxi;
  /* 3 */
  NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L54,
    outC->_L107,
    outC->_L37,
    outC->_L110,
    &outC->Context_3);
  outC->_L33 = outC->Context_3.NumElem;
  outC->NumAuxi = outC->_L33;
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    outC->_L141_OperationQueue_IfBlock = outC->NumAuxi;
  }
  /* last_init_ck_impQueue */ if (outC->init) {
    kcg_copy_array_169451(
      &last_impQueue,
      (array_169451 *) &cMsgStructQueueMax_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_169451(&last_impQueue, &outC->impQueue);
  }
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    /* ck_IfBlock1 */ if (outC->IfBlock1_clock_OperationQueue_IfBlock) {
    }
    else {
      kcg_copy_array_169451(&_17_impQueue, &last_impQueue);
    }
  }
  /* last_init_ck_NumImp */ if (outC->init) {
    last_NumImp = 0;
  }
  else {
    last_NumImp = outC->NumImp;
  }
  outC->_L22 = outC->insertImpMsg;
  outC->_L106 = last_isFull;
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    /* ck_IfBlock1 */ if (outC->IfBlock1_clock_OperationQueue_IfBlock) {
      outC->_L2_OperationQueue_IfBlock_IfBlock1 = 1;
      _23_CountCommand_imp = outC->_L2_OperationQueue_IfBlock_IfBlock1;
      _5_CountCommand_imp = _23_CountCommand_imp;
    }
    else {
      outC->_L1_OperationQueue_IfBlock_IfBlock1 = 0;
      _15_CountCommand_imp = outC->_L1_OperationQueue_IfBlock_IfBlock1;
      _5_CountCommand_imp = _15_CountCommand_imp;
    }
    outC->CountCommand_imp = _5_CountCommand_imp;
  }
  else {
    CountCommand_imp = outC->_L2_OperationQueue_IfBlock;
    outC->CountCommand_imp = CountCommand_imp;
  }
  outC->_L32 = outC->CountCommand_imp;
  outC->_L109 = last_NumImp;
  /* 2 */
  NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L22,
    outC->_L106,
    outC->_L32,
    outC->_L109,
    &outC->Context_2);
  outC->_L16 = outC->Context_2.NumElem;
  outC->NumImp = outC->_L16;
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    /* ck_IfBlock1 */ if (outC->IfBlock1_clock_OperationQueue_IfBlock) {
      outC->_L8_OperationQueue_IfBlock_IfBlock1 = outC->NumImp;
      outC->_L6_OperationQueue_IfBlock_IfBlock1 = 1;
      outC->_L3_OperationQueue_IfBlock_IfBlock1 =
        outC->_L8_OperationQueue_IfBlock_IfBlock1 -
        outC->_L6_OperationQueue_IfBlock_IfBlock1;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L5_OperationQueue_IfBlock_IfBlock1,
        msg);
    }
  }
  /* last_init_ck_Local_mm */ if (outC->init) {
    last_Local_mm = 10.0;
  }
  else {
    last_Local_mm = outC->Local_mm;
  }
  outC->_L73 = outC->ins;
  outC->_L105 = last_isFull;
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    outC->_L185_OperationQueue_IfBlock = 10.0;
    _13_countCommand_mm = outC->_L185_OperationQueue_IfBlock;
    outC->countCommand_mm = _13_countCommand_mm;
  }
  else {
    outC->_L3_OperationQueue_IfBlock = 0.0;
    countCommand_mm = outC->_L3_OperationQueue_IfBlock;
    outC->countCommand_mm = countCommand_mm;
  }
  outC->_L78 = outC->countCommand_mm;
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    outC->_L187_OperationQueue_IfBlock = 1.0;
    _14_countCommand_hh = outC->_L187_OperationQueue_IfBlock;
    outC->countCommand_hh = _14_countCommand_hh;
  }
  else {
    outC->_L1_OperationQueue_IfBlock = 0.0;
    countCommand_hh = outC->_L1_OperationQueue_IfBlock;
    outC->countCommand_hh = countCommand_hh;
  }
  outC->_L77 = outC->countCommand_hh;
  /* 1 */
  TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L73,
    outC->_L105,
    outC->_L78,
    outC->_L77,
    &outC->_2_Context_1);
  outC->_L70 = outC->_2_Context_1.mm;
  outC->_L71 = outC->_2_Context_1.hh;
  outC->Local_mm = outC->_L70;
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    /* ck_IfBlock1 */ if (outC->IfBlock1_clock_OperationQueue_IfBlock) {
      outC->_L15_OperationQueue_IfBlock_IfBlock1 = outC->Local_mm;
    }
  }
  /* last_init_ck_Local_hh */ if (outC->init) {
    last_Local_hh = 17.0;
  }
  else {
    last_Local_hh = outC->Local_hh;
  }
  outC->Local_hh = outC->_L71;
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    /* ck_IfBlock1 */ if (outC->IfBlock1_clock_OperationQueue_IfBlock) {
      outC->_L14_OperationQueue_IfBlock_IfBlock1 = outC->Local_hh;
      outC->_L19_OperationQueue_IfBlock_IfBlock1 = last_isFull;
      /* 25 */
      FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
        outC->_L3_OperationQueue_IfBlock_IfBlock1,
        &outC->_L5_OperationQueue_IfBlock_IfBlock1,
        outC->_L15_OperationQueue_IfBlock_IfBlock1,
        outC->_L14_OperationQueue_IfBlock_IfBlock1,
        outC->_L19_OperationQueue_IfBlock_IfBlock1,
        &outC->Context_25);
      kcg_copy_array_169451(
        &outC->_L7_OperationQueue_IfBlock_IfBlock1,
        &outC->Context_25.queue);
      kcg_copy_array_real_10(
        &outC->_L10_OperationQueue_IfBlock_IfBlock1,
        &outC->Context_25.hh_array);
      kcg_copy_array_real_10(
        &outC->_L11_OperationQueue_IfBlock_IfBlock1,
        &outC->Context_25.mm_array);
      kcg_copy_array_169451(
        &_25_impQueue,
        &outC->_L7_OperationQueue_IfBlock_IfBlock1);
      kcg_copy_array_169451(&_7_impQueue, &_25_impQueue);
    }
    else {
      kcg_copy_array_169451(&_7_impQueue, &_17_impQueue);
    }
    kcg_copy_array_169451(&outC->_L144_OperationQueue_IfBlock, &_7_impQueue);
    /* ck_IfBlock1 */ if (outC->IfBlock1_clock_OperationQueue_IfBlock) {
    }
    else {
      outC->_L79_OperationQueue_IfBlock_IfBlock1 = outC->NumAuxi;
      outC->_L311_OperationQueue_IfBlock_IfBlock1 = 1;
      outC->_L4_OperationQueue_IfBlock_IfBlock1 =
        outC->_L79_OperationQueue_IfBlock_IfBlock1 -
        outC->_L311_OperationQueue_IfBlock_IfBlock1;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L612_OperationQueue_IfBlock_IfBlock1,
        msg);
      outC->_L13_OperationQueue_IfBlock_IfBlock1 = outC->Local_mm;
      outC->_L145_OperationQueue_IfBlock_IfBlock1 = outC->Local_hh;
      outC->_L17_OperationQueue_IfBlock_IfBlock1 = last_isFull;
      /* 24 */
      FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
        outC->_L4_OperationQueue_IfBlock_IfBlock1,
        &outC->_L612_OperationQueue_IfBlock_IfBlock1,
        outC->_L13_OperationQueue_IfBlock_IfBlock1,
        outC->_L145_OperationQueue_IfBlock_IfBlock1,
        outC->_L17_OperationQueue_IfBlock_IfBlock1,
        &outC->Context_24);
      kcg_copy_array_169451(
        &outC->_L210_OperationQueue_IfBlock_IfBlock1,
        &outC->Context_24.queue);
      kcg_copy_array_real_10(
        &outC->_L97_OperationQueue_IfBlock_IfBlock1,
        &outC->Context_24.hh_array);
      kcg_copy_array_real_10(
        &outC->_L106_OperationQueue_IfBlock_IfBlock1,
        &outC->Context_24.mm_array);
      kcg_copy_array_169451(
        &_18_auxiQueue,
        &outC->_L210_OperationQueue_IfBlock_IfBlock1);
    }
  }
  /* last_init_ck_auxiQueue */ if (outC->init) {
    kcg_copy_array_169451(
      &last_auxiQueue,
      (array_169451 *) &cMsgStructQueueMax_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_169451(&last_auxiQueue, &outC->auxiQueue);
  }
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    /* ck_IfBlock1 */ if (outC->IfBlock1_clock_OperationQueue_IfBlock) {
      kcg_copy_array_169451(&_26_auxiQueue, &last_auxiQueue);
      kcg_copy_array_169451(&_8_auxiQueue, &_26_auxiQueue);
    }
    else {
      kcg_copy_array_169451(&_8_auxiQueue, &_18_auxiQueue);
    }
    kcg_copy_array_169451(&outC->_L143_OperationQueue_IfBlock, &_8_auxiQueue);
    /* 9 */
    MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages(
      outC->_L141_OperationQueue_IfBlock,
      &outC->_L144_OperationQueue_IfBlock,
      &outC->_L143_OperationQueue_IfBlock,
      &outC->Context_9);
    kcg_copy_array_169451(
      &outC->_L142_OperationQueue_IfBlock,
      &outC->Context_9.OutQueue);
    kcg_copy_array_169451(&queue1, &outC->_L142_OperationQueue_IfBlock);
    kcg_copy_array_169451(&outC->queue, &queue1);
  }
  else {
    kcg_copy_array_169451(&outC->queue, &queue);
  }
  /* last_init_ck_mm_array */ if (outC->init) {
    kcg_copy_array_real_10(
      &last_mm_array,
      (array_real_10 *) &cArray_mm_leer_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_10(&last_mm_array, &outC->mm_array);
  }
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    outC->_L178_OperationQueue_IfBlock = outC->NumAuxi;
    /* ck_IfBlock1 */ if (outC->IfBlock1_clock_OperationQueue_IfBlock) {
    }
    else {
      kcg_copy_array_real_10(
        &_22_Local_mm_array_auxi,
        &outC->_L106_OperationQueue_IfBlock_IfBlock1);
    }
  }
  else {
    kcg_copy_array_real_10(&mm_array, &last_mm_array);
  }
  /* last_init_ck_Local_mm_array_auxi */ if (outC->init) {
    kcg_copy_array_real_10(
      &last_Local_mm_array_auxi,
      (array_real_10 *) &cArray_mm_leer_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_10(
      &last_Local_mm_array_auxi,
      &outC->Local_mm_array_auxi);
  }
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    /* ck_IfBlock1 */ if (outC->IfBlock1_clock_OperationQueue_IfBlock) {
      kcg_copy_array_real_10(
        &_30_Local_mm_array_auxi,
        &last_Local_mm_array_auxi);
      kcg_copy_array_real_10(
        &_12_Local_mm_array_auxi,
        &_30_Local_mm_array_auxi);
    }
    else {
      kcg_copy_array_real_10(
        &_12_Local_mm_array_auxi,
        &_22_Local_mm_array_auxi);
    }
    kcg_copy_array_real_10(
      &outC->_L182_OperationQueue_IfBlock,
      &_12_Local_mm_array_auxi);
  }
  /* last_init_ck_Local_mm_array_imp */ if (outC->init) {
    kcg_copy_array_real_10(
      &last_Local_mm_array_imp,
      (array_real_10 *) &cArray_mm_leer_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_10(&last_Local_mm_array_imp, &outC->Local_mm_array_imp);
  }
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    /* ck_IfBlock1 */ if (outC->IfBlock1_clock_OperationQueue_IfBlock) {
      kcg_copy_array_real_10(
        &_27_Local_mm_array_imp,
        &outC->_L11_OperationQueue_IfBlock_IfBlock1);
      kcg_copy_array_real_10(&_9_Local_mm_array_imp, &_27_Local_mm_array_imp);
    }
    else {
      kcg_copy_array_real_10(&_19_Local_mm_array_imp, &last_Local_mm_array_imp);
      kcg_copy_array_real_10(&_9_Local_mm_array_imp, &_19_Local_mm_array_imp);
    }
    kcg_copy_array_real_10(
      &outC->_L183_OperationQueue_IfBlock,
      &_9_Local_mm_array_imp);
    /* 2 */
    MergeTime_DMI_Control_Pkg_Sub_func_TextMessages(
      outC->_L178_OperationQueue_IfBlock,
      &outC->_L182_OperationQueue_IfBlock,
      &outC->_L183_OperationQueue_IfBlock,
      &outC->_3_Context_2);
    kcg_copy_array_real_10(
      &outC->_L181_OperationQueue_IfBlock,
      &outC->_3_Context_2.OutQueue);
    kcg_copy_array_real_10(&_2_mm_array, &outC->_L181_OperationQueue_IfBlock);
    kcg_copy_array_real_10(&outC->mm_array, &_2_mm_array);
  }
  else {
    kcg_copy_array_real_10(&outC->mm_array, &mm_array);
  }
  /* last_init_ck_hh_array */ if (outC->init) {
    kcg_copy_array_real_10(
      &last_hh_array,
      (array_real_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_10(&last_hh_array, &outC->hh_array);
  }
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    outC->_L177_OperationQueue_IfBlock = outC->NumAuxi;
    /* ck_IfBlock1 */ if (outC->IfBlock1_clock_OperationQueue_IfBlock) {
    }
    else {
      kcg_copy_array_real_10(
        &_21_Local_hh_array_auxi,
        &outC->_L97_OperationQueue_IfBlock_IfBlock1);
    }
  }
  else {
    kcg_copy_array_real_10(&hh_array, &last_hh_array);
  }
  /* last_init_ck_Local_hh_array_auxi */ if (outC->init) {
    kcg_copy_array_real_10(
      &last_Local_hh_array_auxi,
      (array_real_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_10(
      &last_Local_hh_array_auxi,
      &outC->Local_hh_array_auxi);
  }
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    /* ck_IfBlock1 */ if (outC->IfBlock1_clock_OperationQueue_IfBlock) {
      kcg_copy_array_real_10(
        &_29_Local_hh_array_auxi,
        &last_Local_hh_array_auxi);
      kcg_copy_array_real_10(
        &_11_Local_hh_array_auxi,
        &_29_Local_hh_array_auxi);
    }
    else {
      kcg_copy_array_real_10(
        &_11_Local_hh_array_auxi,
        &_21_Local_hh_array_auxi);
    }
    kcg_copy_array_real_10(
      &outC->_L175_OperationQueue_IfBlock,
      &_11_Local_hh_array_auxi);
  }
  /* last_init_ck_Local_hh_array_imp */ if (outC->init) {
    kcg_copy_array_real_10(
      &last_Local_hh_array_imp,
      (array_real_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_10(&last_Local_hh_array_imp, &outC->Local_hh_array_imp);
  }
  /* ck_OperationQueue_IfBlock */ if (outC->OperationQueue_IfBlock_clock) {
    /* ck_IfBlock1 */ if (outC->IfBlock1_clock_OperationQueue_IfBlock) {
      kcg_copy_array_real_10(
        &_28_Local_hh_array_imp,
        &outC->_L10_OperationQueue_IfBlock_IfBlock1);
      kcg_copy_array_real_10(&_10_Local_hh_array_imp, &_28_Local_hh_array_imp);
    }
    else {
      kcg_copy_array_real_10(&_20_Local_hh_array_imp, &last_Local_hh_array_imp);
      kcg_copy_array_real_10(&_10_Local_hh_array_imp, &_20_Local_hh_array_imp);
    }
    kcg_copy_array_real_10(
      &outC->_L174_OperationQueue_IfBlock,
      &_10_Local_hh_array_imp);
    /* 1 */
    MergeTime_DMI_Control_Pkg_Sub_func_TextMessages(
      outC->_L177_OperationQueue_IfBlock,
      &outC->_L175_OperationQueue_IfBlock,
      &outC->_L174_OperationQueue_IfBlock,
      &outC->_4_Context_1);
    kcg_copy_array_real_10(
      &outC->_L176_OperationQueue_IfBlock,
      &outC->_4_Context_1.OutQueue);
    kcg_copy_array_real_10(&_3_hh_array, &outC->_L176_OperationQueue_IfBlock);
    kcg_copy_array_real_10(&outC->hh_array, &_3_hh_array);
    kcg_copy_array_169451(&outC->impQueue, &_7_impQueue);
    kcg_copy_array_169451(&outC->auxiQueue, &_8_auxiQueue);
    kcg_copy_array_real_10(&outC->Local_mm_array_imp, &_9_Local_mm_array_imp);
    kcg_copy_array_real_10(&outC->Local_hh_array_imp, &_10_Local_hh_array_imp);
    kcg_copy_array_real_10(
      &outC->Local_hh_array_auxi,
      &_11_Local_hh_array_auxi);
    kcg_copy_array_real_10(
      &outC->Local_mm_array_auxi,
      &_12_Local_mm_array_auxi);
  }
  else {
    kcg_copy_array_real_10(&outC->hh_array, &hh_array);
    kcg_copy_array_169451(&impQueue, &last_impQueue);
    kcg_copy_array_169451(&outC->impQueue, &impQueue);
    kcg_copy_array_169451(&auxiQueue, &last_auxiQueue);
    kcg_copy_array_169451(&outC->auxiQueue, &auxiQueue);
    kcg_copy_array_real_10(&Local_mm_array_imp, &last_Local_mm_array_imp);
    kcg_copy_array_real_10(&outC->Local_mm_array_imp, &Local_mm_array_imp);
    kcg_copy_array_real_10(&Local_hh_array_imp, &last_Local_hh_array_imp);
    kcg_copy_array_real_10(&outC->Local_hh_array_imp, &Local_hh_array_imp);
    kcg_copy_array_real_10(&Local_hh_array_auxi, &last_Local_hh_array_auxi);
    kcg_copy_array_real_10(&outC->Local_hh_array_auxi, &Local_hh_array_auxi);
    kcg_copy_array_real_10(&Local_mm_array_auxi, &last_Local_mm_array_auxi);
    kcg_copy_array_real_10(&outC->Local_mm_array_auxi, &Local_mm_array_auxi);
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

