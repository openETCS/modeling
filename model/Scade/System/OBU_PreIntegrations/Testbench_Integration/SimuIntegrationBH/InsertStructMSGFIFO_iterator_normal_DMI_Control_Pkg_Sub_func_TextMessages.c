/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void InsertStructMSGFIFO_iterator_normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
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
  
  outC->_L85 = kcg_true;
  outC->_L84 = kcg_true;
  outC->_L83 = kcg_true;
  outC->_L82 = kcg_true;
  outC->_L81 = kcg_true;
  for (i1 = 0; i1 < 10; i1++) {
    outC->_L75[i1].present = kcg_true;
    outC->_L75[i1].dmi_msg.valid = kcg_true;
    outC->_L75[i1].dmi_msg.system_clock = 0;
    outC->_L75[i1].dmi_msg.textMessage_ID = 0;
    outC->_L75[i1].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L75[i1].dmi_msg.l_text = 0;
    for (i = 0; i < 255; i++) {
      outC->_L75[i1].dmi_msg.x_text[i] = ' ';
    }
    outC->_L75[i1].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L75[i1].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L76 = 0;
  outC->_L77.present = kcg_true;
  outC->_L77.dmi_msg.valid = kcg_true;
  outC->_L77.dmi_msg.system_clock = 0;
  outC->_L77.dmi_msg.textMessage_ID = 0;
  outC->_L77.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L77.dmi_msg.l_text = 0;
  for (i2 = 0; i2 < 255; i2++) {
    outC->_L77.dmi_msg.x_text[i2] = ' ';
  }
  outC->_L77.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L77.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (i4 = 0; i4 < 10; i4++) {
    outC->_L78[i4].present = kcg_true;
    outC->_L78[i4].dmi_msg.valid = kcg_true;
    outC->_L78[i4].dmi_msg.system_clock = 0;
    outC->_L78[i4].dmi_msg.textMessage_ID = 0;
    outC->_L78[i4].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L78[i4].dmi_msg.l_text = 0;
    for (i3 = 0; i3 < 255; i3++) {
      outC->_L78[i4].dmi_msg.x_text[i3] = ' ';
    }
    outC->_L78[i4].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L78[i4].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L79 = kcg_true;
  outC->_L80.valid = kcg_true;
  outC->_L80.system_clock = 0;
  outC->_L80.textMessage_ID = 0;
  outC->_L80.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L80.l_text = 0;
  for (i5 = 0; i5 < 255; i5++) {
    outC->_L80.x_text[i5] = ' ';
  }
  outC->_L80.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L80.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (i7 = 0; i7 < 10; i7++) {
    outC->_L74[i7].present = kcg_true;
    outC->_L74[i7].dmi_msg.valid = kcg_true;
    outC->_L74[i7].dmi_msg.system_clock = 0;
    outC->_L74[i7].dmi_msg.textMessage_ID = 0;
    outC->_L74[i7].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L74[i7].dmi_msg.l_text = 0;
    for (i6 = 0; i6 < 255; i6++) {
      outC->_L74[i7].dmi_msg.x_text[i6] = ' ';
    }
    outC->_L74[i7].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L74[i7].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L69 = kcg_true;
  outC->_L70 = 0;
  outC->_L72 = 0;
  for (i9 = 0; i9 < 10; i9++) {
    outC->_L63[i9].present = kcg_true;
    outC->_L63[i9].dmi_msg.valid = kcg_true;
    outC->_L63[i9].dmi_msg.system_clock = 0;
    outC->_L63[i9].dmi_msg.textMessage_ID = 0;
    outC->_L63[i9].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L63[i9].dmi_msg.l_text = 0;
    for (i8 = 0; i8 < 255; i8++) {
      outC->_L63[i9].dmi_msg.x_text[i8] = ' ';
    }
    outC->_L63[i9].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L63[i9].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L44 = 0;
  outC->_L43 = 0;
  outC->_L42 = 0;
  outC->_L41.present = kcg_true;
  outC->_L41.dmi_msg.valid = kcg_true;
  outC->_L41.dmi_msg.system_clock = 0;
  outC->_L41.dmi_msg.textMessage_ID = 0;
  outC->_L41.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L41.dmi_msg.l_text = 0;
  for (i10 = 0; i10 < 255; i10++) {
    outC->_L41.dmi_msg.x_text[i10] = ' ';
  }
  outC->_L41.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L41.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (i12 = 0; i12 < 10; i12++) {
    outC->_L40[i12].present = kcg_true;
    outC->_L40[i12].dmi_msg.valid = kcg_true;
    outC->_L40[i12].dmi_msg.system_clock = 0;
    outC->_L40[i12].dmi_msg.textMessage_ID = 0;
    outC->_L40[i12].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L40[i12].dmi_msg.l_text = 0;
    for (i11 = 0; i11 < 255; i11++) {
      outC->_L40[i12].dmi_msg.x_text[i11] = ' ';
    }
    outC->_L40[i12].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L40[i12].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L39.present = kcg_true;
  outC->_L39.dmi_msg.valid = kcg_true;
  outC->_L39.dmi_msg.system_clock = 0;
  outC->_L39.dmi_msg.textMessage_ID = 0;
  outC->_L39.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L39.dmi_msg.l_text = 0;
  for (i13 = 0; i13 < 255; i13++) {
    outC->_L39.dmi_msg.x_text[i13] = ' ';
  }
  outC->_L39.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L39.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L38 = 0;
  for (i15 = 0; i15 < 10; i15++) {
    outC->_L35[i15].present = kcg_true;
    outC->_L35[i15].dmi_msg.valid = kcg_true;
    outC->_L35[i15].dmi_msg.system_clock = 0;
    outC->_L35[i15].dmi_msg.textMessage_ID = 0;
    outC->_L35[i15].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L35[i15].dmi_msg.l_text = 0;
    for (i14 = 0; i14 < 255; i14++) {
      outC->_L35[i15].dmi_msg.x_text[i14] = ' ';
    }
    outC->_L35[i15].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L35[i15].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L29 = kcg_true;
  outC->_L30 = 0;
  outC->_L31 = kcg_true;
  outC->_L32 = 0;
  outC->_L33 = kcg_true;
  for (i17 = 0; i17 < 10; i17++) {
    outC->_L22[i17].present = kcg_true;
    outC->_L22[i17].dmi_msg.valid = kcg_true;
    outC->_L22[i17].dmi_msg.system_clock = 0;
    outC->_L22[i17].dmi_msg.textMessage_ID = 0;
    outC->_L22[i17].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L22[i17].dmi_msg.l_text = 0;
    for (i16 = 0; i16 < 255; i16++) {
      outC->_L22[i17].dmi_msg.x_text[i16] = ' ';
    }
    outC->_L22[i17].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L22[i17].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i19 = 0; i19 < 10; i19++) {
    outC->_L26[i19].present = kcg_true;
    outC->_L26[i19].dmi_msg.valid = kcg_true;
    outC->_L26[i19].dmi_msg.system_clock = 0;
    outC->_L26[i19].dmi_msg.textMessage_ID = 0;
    outC->_L26[i19].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L26[i19].dmi_msg.l_text = 0;
    for (i18 = 0; i18 < 255; i18++) {
      outC->_L26[i19].dmi_msg.x_text[i18] = ' ';
    }
    outC->_L26[i19].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L26[i19].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L20 = 0;
  for (i21 = 0; i21 < 10; i21++) {
    outC->_L19[i21].present = kcg_true;
    outC->_L19[i21].dmi_msg.valid = kcg_true;
    outC->_L19[i21].dmi_msg.system_clock = 0;
    outC->_L19[i21].dmi_msg.textMessage_ID = 0;
    outC->_L19[i21].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L19[i21].dmi_msg.l_text = 0;
    for (i20 = 0; i20 < 255; i20++) {
      outC->_L19[i21].dmi_msg.x_text[i20] = ' ';
    }
    outC->_L19[i21].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L19[i21].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L3.valid = kcg_true;
  outC->_L3.system_clock = 0;
  outC->_L3.textMessage_ID = 0;
  outC->_L3.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L3.l_text = 0;
  for (i22 = 0; i22 < 255; i22++) {
    outC->_L3.x_text[i22] = ' ';
  }
  outC->_L3.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L3.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L12.present = kcg_true;
  outC->_L12.dmi_msg.valid = kcg_true;
  outC->_L12.dmi_msg.system_clock = 0;
  outC->_L12.dmi_msg.textMessage_ID = 0;
  outC->_L12.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L12.dmi_msg.l_text = 0;
  for (i23 = 0; i23 < 255; i23++) {
    outC->_L12.dmi_msg.x_text[i23] = ' ';
  }
  outC->_L12.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L12.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L13 = kcg_true;
  for (i25 = 0; i25 < 10; i25++) {
    outC->_L14[i25].present = kcg_true;
    outC->_L14[i25].dmi_msg.valid = kcg_true;
    outC->_L14[i25].dmi_msg.system_clock = 0;
    outC->_L14[i25].dmi_msg.textMessage_ID = 0;
    outC->_L14[i25].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L14[i25].dmi_msg.l_text = 0;
    for (i24 = 0; i24 < 255; i24++) {
      outC->_L14[i25].dmi_msg.x_text[i24] = ' ';
    }
    outC->_L14[i25].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L14[i25].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i27 = 0; i27 < 10; i27++) {
    outC->_L6[i27].present = kcg_true;
    outC->_L6[i27].dmi_msg.valid = kcg_true;
    outC->_L6[i27].dmi_msg.system_clock = 0;
    outC->_L6[i27].dmi_msg.textMessage_ID = 0;
    outC->_L6[i27].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L6[i27].dmi_msg.l_text = 0;
    for (i26 = 0; i26 < 255; i26++) {
      outC->_L6[i27].dmi_msg.x_text[i26] = ' ';
    }
    outC->_L6[i27].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L6[i27].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L4 = kcg_true;
  outC->_L2 = 0;
  outC->_L1 = 0;
  outC->init = kcg_true;
  for (i29 = 0; i29 < 10; i29++) {
    outC->OutputArray[i29].present = kcg_true;
    outC->OutputArray[i29].dmi_msg.valid = kcg_true;
    outC->OutputArray[i29].dmi_msg.system_clock = 0;
    outC->OutputArray[i29].dmi_msg.textMessage_ID = 0;
    outC->OutputArray[i29].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->OutputArray[i29].dmi_msg.l_text = 0;
    for (i28 = 0; i28 < 255; i28++) {
      outC->OutputArray[i29].dmi_msg.x_text[i28] = ' ';
    }
    outC->OutputArray[i29].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->OutputArray[i29].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void InsertStructMSGFIFO_iterator_normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal */
void InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal::acc */ array_169451 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal::Position */ kcg_int Position,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal::newMsg */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *newMsg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal::isFull */ kcg_bool isFull,
  outC_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal::OutputArray */
  static array_169451 last_OutputArray;
  
  outC->_L1 = index;
  outC->_L2 = Position;
  /* last_init_ck_OutputArray */ if (outC->init) {
    kcg_copy_array_169451(
      &last_OutputArray,
      (array_169451 *) &cMsgStructQueueMax_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_169451(&last_OutputArray, &outC->OutputArray);
  }
  outC->_L4 = outC->_L1 == outC->_L2;
  outC->_L82 = isFull;
  outC->_L83 = !outC->_L82;
  outC->_L81 = outC->_L4 & outC->_L83;
  kcg_copy_array_169451(&outC->_L14, acc);
  outC->_L13 = kcg_true;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L3, newMsg);
  outC->_L12.present = outC->_L13;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L12.dmi_msg,
    &outC->_L3);
  outC->_L20 = index;
  kcg_copy_array_169451(&outC->_L19, &outC->_L14);
  if ((0 <= outC->_L20) & (outC->_L20 < 10)) {
    kcg_copy_MsgStructure(&outC->_L19[outC->_L20], &outC->_L12);
  }
  outC->_L30 = index;
  outC->_L32 = Position;
  outC->_L29 = outC->_L30 < outC->_L32;
  outC->_L33 = isFull;
  outC->_L31 = outC->_L29 & outC->_L33;
  kcg_copy_array_169451(&outC->_L22, acc);
  kcg_copy_array_169451(&outC->_L40, acc);
  kcg_copy_MsgStructure(
    &outC->_L41,
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  outC->_L42 = index;
  outC->_L44 = 1;
  outC->_L43 = outC->_L42 + outC->_L44;
  if ((0 <= outC->_L43) & (outC->_L43 < 10)) {
    kcg_copy_MsgStructure(&outC->_L39, &outC->_L40[outC->_L43]);
  }
  else {
    kcg_copy_MsgStructure(&outC->_L39, &outC->_L41);
  }
  outC->_L38 = index;
  kcg_copy_array_169451(&outC->_L26, &outC->_L22);
  if ((0 <= outC->_L38) & (outC->_L38 < 10)) {
    kcg_copy_MsgStructure(&outC->_L26[outC->_L38], &outC->_L39);
  }
  outC->_L84 = isFull;
  outC->_L70 = index;
  outC->_L72 = Position;
  outC->_L69 = outC->_L70 == outC->_L72;
  outC->_L85 = outC->_L84 & outC->_L69;
  kcg_copy_array_169451(&outC->_L75, acc);
  outC->_L79 = kcg_true;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L80, newMsg);
  outC->_L77.present = outC->_L79;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L77.dmi_msg,
    &outC->_L80);
  outC->_L76 = index;
  kcg_copy_array_169451(&outC->_L78, &outC->_L75);
  if ((0 <= outC->_L76) & (outC->_L76 < 10)) {
    kcg_copy_MsgStructure(&outC->_L78[outC->_L76], &outC->_L77);
  }
  kcg_copy_array_169451(&outC->_L63, acc);
  /* 3 */ if (outC->_L85) {
    kcg_copy_array_169451(&outC->_L74, &outC->_L78);
  }
  else {
    kcg_copy_array_169451(&outC->_L74, &outC->_L63);
  }
  /* 2 */ if (outC->_L31) {
    kcg_copy_array_169451(&outC->_L35, &outC->_L26);
  }
  else {
    kcg_copy_array_169451(&outC->_L35, &outC->_L74);
  }
  /* 1 */ if (outC->_L81) {
    kcg_copy_array_169451(&outC->_L6, &outC->_L19);
  }
  else {
    kcg_copy_array_169451(&outC->_L6, &outC->_L35);
  }
  kcg_copy_array_169451(&outC->OutputArray, &outC->_L6);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

