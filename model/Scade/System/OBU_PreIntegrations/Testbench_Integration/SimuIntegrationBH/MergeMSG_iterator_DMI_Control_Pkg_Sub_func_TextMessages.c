/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void MergeMSG_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
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
  
  for (i1 = 0; i1 < 10; i1++) {
    outC->_L38[i1].present = kcg_true;
    outC->_L38[i1].dmi_msg.valid = kcg_true;
    outC->_L38[i1].dmi_msg.system_clock = 0;
    outC->_L38[i1].dmi_msg.textMessage_ID = 0;
    outC->_L38[i1].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L38[i1].dmi_msg.l_text = 0;
    for (i = 0; i < 255; i++) {
      outC->_L38[i1].dmi_msg.x_text[i] = ' ';
    }
    outC->_L38[i1].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L38[i1].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i3 = 0; i3 < 10; i3++) {
    outC->_L37[i3].present = kcg_true;
    outC->_L37[i3].dmi_msg.valid = kcg_true;
    outC->_L37[i3].dmi_msg.system_clock = 0;
    outC->_L37[i3].dmi_msg.textMessage_ID = 0;
    outC->_L37[i3].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L37[i3].dmi_msg.l_text = 0;
    for (i2 = 0; i2 < 255; i2++) {
      outC->_L37[i3].dmi_msg.x_text[i2] = ' ';
    }
    outC->_L37[i3].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L37[i3].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L36.present = kcg_true;
  outC->_L36.dmi_msg.valid = kcg_true;
  outC->_L36.dmi_msg.system_clock = 0;
  outC->_L36.dmi_msg.textMessage_ID = 0;
  outC->_L36.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L36.dmi_msg.l_text = 0;
  for (i4 = 0; i4 < 255; i4++) {
    outC->_L36.dmi_msg.x_text[i4] = ' ';
  }
  outC->_L36.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L36.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L35 = kcg_true;
  outC->_L34.present = kcg_true;
  outC->_L34.dmi_msg.valid = kcg_true;
  outC->_L34.dmi_msg.system_clock = 0;
  outC->_L34.dmi_msg.textMessage_ID = 0;
  outC->_L34.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L34.dmi_msg.l_text = 0;
  for (i5 = 0; i5 < 255; i5++) {
    outC->_L34.dmi_msg.x_text[i5] = ' ';
  }
  outC->_L34.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L34.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L33 = 0;
  outC->_L32.present = kcg_true;
  outC->_L32.dmi_msg.valid = kcg_true;
  outC->_L32.dmi_msg.system_clock = 0;
  outC->_L32.dmi_msg.textMessage_ID = 0;
  outC->_L32.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L32.dmi_msg.l_text = 0;
  for (i6 = 0; i6 < 255; i6++) {
    outC->_L32.dmi_msg.x_text[i6] = ' ';
  }
  outC->_L32.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L32.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L29.present = kcg_true;
  outC->_L29.dmi_msg.valid = kcg_true;
  outC->_L29.dmi_msg.system_clock = 0;
  outC->_L29.dmi_msg.textMessage_ID = 0;
  outC->_L29.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L29.dmi_msg.l_text = 0;
  for (i7 = 0; i7 < 255; i7++) {
    outC->_L29.dmi_msg.x_text[i7] = ' ';
  }
  outC->_L29.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L29.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L25 = 0;
  for (i9 = 0; i9 < 10; i9++) {
    outC->_L24[i9].present = kcg_true;
    outC->_L24[i9].dmi_msg.valid = kcg_true;
    outC->_L24[i9].dmi_msg.system_clock = 0;
    outC->_L24[i9].dmi_msg.textMessage_ID = 0;
    outC->_L24[i9].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L24[i9].dmi_msg.l_text = 0;
    for (i8 = 0; i8 < 255; i8++) {
      outC->_L24[i9].dmi_msg.x_text[i8] = ' ';
    }
    outC->_L24[i9].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L24[i9].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L22 = 0;
  outC->_L21 = 0;
  outC->_L11.present = kcg_true;
  outC->_L11.dmi_msg.valid = kcg_true;
  outC->_L11.dmi_msg.system_clock = 0;
  outC->_L11.dmi_msg.textMessage_ID = 0;
  outC->_L11.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L11.dmi_msg.l_text = 0;
  for (i10 = 0; i10 < 255; i10++) {
    outC->_L11.dmi_msg.x_text[i10] = ' ';
  }
  outC->_L11.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L11.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (i12 = 0; i12 < 10; i12++) {
    outC->_L12[i12].present = kcg_true;
    outC->_L12[i12].dmi_msg.valid = kcg_true;
    outC->_L12[i12].dmi_msg.system_clock = 0;
    outC->_L12[i12].dmi_msg.textMessage_ID = 0;
    outC->_L12[i12].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L12[i12].dmi_msg.l_text = 0;
    for (i11 = 0; i11 < 255; i11++) {
      outC->_L12[i12].dmi_msg.x_text[i11] = ' ';
    }
    outC->_L12[i12].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L12[i12].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L13 = 0;
  for (i14 = 0; i14 < 10; i14++) {
    outC->_L15[i14].present = kcg_true;
    outC->_L15[i14].dmi_msg.valid = kcg_true;
    outC->_L15[i14].dmi_msg.system_clock = 0;
    outC->_L15[i14].dmi_msg.textMessage_ID = 0;
    outC->_L15[i14].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L15[i14].dmi_msg.l_text = 0;
    for (i13 = 0; i13 < 255; i13++) {
      outC->_L15[i14].dmi_msg.x_text[i13] = ' ';
    }
    outC->_L15[i14].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L15[i14].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i16 = 0; i16 < 10; i16++) {
    outC->_L5[i16].present = kcg_true;
    outC->_L5[i16].dmi_msg.valid = kcg_true;
    outC->_L5[i16].dmi_msg.system_clock = 0;
    outC->_L5[i16].dmi_msg.textMessage_ID = 0;
    outC->_L5[i16].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L5[i16].dmi_msg.l_text = 0;
    for (i15 = 0; i15 < 255; i15++) {
      outC->_L5[i16].dmi_msg.x_text[i15] = ' ';
    }
    outC->_L5[i16].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L5[i16].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i18 = 0; i18 < 10; i18++) {
    outC->OutputArray[i18].present = kcg_true;
    outC->OutputArray[i18].dmi_msg.valid = kcg_true;
    outC->OutputArray[i18].dmi_msg.system_clock = 0;
    outC->OutputArray[i18].dmi_msg.textMessage_ID = 0;
    outC->OutputArray[i18].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->OutputArray[i18].dmi_msg.l_text = 0;
    for (i17 = 0; i17 < 255; i17++) {
      outC->OutputArray[i18].dmi_msg.x_text[i17] = ' ';
    }
    outC->OutputArray[i18].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->OutputArray[i18].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void MergeMSG_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}

/* DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator */
void MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator::acc */ array_169451 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator::ImpmsgArray */ array_169451 *ImpmsgArray,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator::numAuxi */ kcg_int numAuxi,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator::auximsgArray */ array_169451 *auximsgArray,
  outC_MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_copy_array_169451(&outC->_L37, auximsgArray);
  kcg_copy_MsgStructure(
    &outC->_L34,
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  outC->_L33 = index;
  if ((0 <= outC->_L33) & (outC->_L33 < 10)) {
    kcg_copy_MsgStructure(&outC->_L32, &outC->_L37[outC->_L33]);
  }
  else {
    kcg_copy_MsgStructure(&outC->_L32, &outC->_L34);
  }
  kcg_copy_MsgStructure(
    &outC->_L36,
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  outC->_L35 = !kcg_comp_MsgStructure(&outC->_L32, &outC->_L36);
  kcg_copy_array_169451(&outC->_L38, acc);
  kcg_copy_array_169451(&outC->_L12, acc);
  kcg_copy_array_169451(&outC->_L24, ImpmsgArray);
  kcg_copy_MsgStructure(
    &outC->_L29,
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  outC->_L22 = index;
  outC->_L25 = numAuxi;
  outC->_L13 = outC->_L22 - outC->_L25;
  if ((0 <= outC->_L13) & (outC->_L13 < 10)) {
    kcg_copy_MsgStructure(&outC->_L11, &outC->_L24[outC->_L13]);
  }
  else {
    kcg_copy_MsgStructure(&outC->_L11, &outC->_L29);
  }
  outC->_L21 = index;
  kcg_copy_array_169451(&outC->_L15, &outC->_L12);
  if ((0 <= outC->_L21) & (outC->_L21 < 10)) {
    kcg_copy_MsgStructure(&outC->_L15[outC->_L21], &outC->_L11);
  }
  /* 1 */ if (outC->_L35) {
    kcg_copy_array_169451(&outC->_L5, &outC->_L38);
  }
  else {
    kcg_copy_array_169451(&outC->_L5, &outC->_L15);
  }
  kcg_copy_array_169451(&outC->OutputArray, &outC->_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

