/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void SortMsgTopDown_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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
    outC->_L35[i1].present = kcg_true;
    outC->_L35[i1].dmi_msg.valid = kcg_true;
    outC->_L35[i1].dmi_msg.system_clock = 0;
    outC->_L35[i1].dmi_msg.textMessage_ID = 0;
    outC->_L35[i1].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L35[i1].dmi_msg.l_text = 0;
    for (i = 0; i < 255; i++) {
      outC->_L35[i1].dmi_msg.x_text[i] = ' ';
    }
    outC->_L35[i1].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L35[i1].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L34.present = kcg_true;
  outC->_L34.dmi_msg.valid = kcg_true;
  outC->_L34.dmi_msg.system_clock = 0;
  outC->_L34.dmi_msg.textMessage_ID = 0;
  outC->_L34.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L34.dmi_msg.l_text = 0;
  for (i2 = 0; i2 < 255; i2++) {
    outC->_L34.dmi_msg.x_text[i2] = ' ';
  }
  outC->_L34.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L34.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (i4 = 0; i4 < 10; i4++) {
    outC->_L33[i4].present = kcg_true;
    outC->_L33[i4].dmi_msg.valid = kcg_true;
    outC->_L33[i4].dmi_msg.system_clock = 0;
    outC->_L33[i4].dmi_msg.textMessage_ID = 0;
    outC->_L33[i4].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L33[i4].dmi_msg.l_text = 0;
    for (i3 = 0; i3 < 255; i3++) {
      outC->_L33[i4].dmi_msg.x_text[i3] = ' ';
    }
    outC->_L33[i4].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L33[i4].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L32.present = kcg_true;
  outC->_L32.dmi_msg.valid = kcg_true;
  outC->_L32.dmi_msg.system_clock = 0;
  outC->_L32.dmi_msg.textMessage_ID = 0;
  outC->_L32.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L32.dmi_msg.l_text = 0;
  for (i5 = 0; i5 < 255; i5++) {
    outC->_L32.dmi_msg.x_text[i5] = ' ';
  }
  outC->_L32.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L32.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L31 = 0;
  outC->_L30 = 0;
  outC->_L29 = 0;
  outC->_L28 = 0;
  outC->_L27 = 0;
  for (i7 = 0; i7 < 10; i7++) {
    outC->_L26[i7].present = kcg_true;
    outC->_L26[i7].dmi_msg.valid = kcg_true;
    outC->_L26[i7].dmi_msg.system_clock = 0;
    outC->_L26[i7].dmi_msg.textMessage_ID = 0;
    outC->_L26[i7].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L26[i7].dmi_msg.l_text = 0;
    for (i6 = 0; i6 < 255; i6++) {
      outC->_L26[i7].dmi_msg.x_text[i6] = ' ';
    }
    outC->_L26[i7].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L26[i7].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L25 = kcg_true;
  outC->_L24.present = kcg_true;
  outC->_L24.dmi_msg.valid = kcg_true;
  outC->_L24.dmi_msg.system_clock = 0;
  outC->_L24.dmi_msg.textMessage_ID = 0;
  outC->_L24.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L24.dmi_msg.l_text = 0;
  for (i8 = 0; i8 < 255; i8++) {
    outC->_L24.dmi_msg.x_text[i8] = ' ';
  }
  outC->_L24.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L24.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L20.present = kcg_true;
  outC->_L20.dmi_msg.valid = kcg_true;
  outC->_L20.dmi_msg.system_clock = 0;
  outC->_L20.dmi_msg.textMessage_ID = 0;
  outC->_L20.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L20.dmi_msg.l_text = 0;
  for (i9 = 0; i9 < 255; i9++) {
    outC->_L20.dmi_msg.x_text[i9] = ' ';
  }
  outC->_L20.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L20.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (i11 = 0; i11 < 10; i11++) {
    outC->_L21[i11].present = kcg_true;
    outC->_L21[i11].dmi_msg.valid = kcg_true;
    outC->_L21[i11].dmi_msg.system_clock = 0;
    outC->_L21[i11].dmi_msg.textMessage_ID = 0;
    outC->_L21[i11].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L21[i11].dmi_msg.l_text = 0;
    for (i10 = 0; i10 < 255; i10++) {
      outC->_L21[i11].dmi_msg.x_text[i10] = ' ';
    }
    outC->_L21[i11].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L21[i11].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L22 = 0;
  outC->_L23.present = kcg_true;
  outC->_L23.dmi_msg.valid = kcg_true;
  outC->_L23.dmi_msg.system_clock = 0;
  outC->_L23.dmi_msg.textMessage_ID = 0;
  outC->_L23.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L23.dmi_msg.l_text = 0;
  for (i12 = 0; i12 < 255; i12++) {
    outC->_L23.dmi_msg.x_text[i12] = ' ';
  }
  outC->_L23.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L23.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (i14 = 0; i14 < 10; i14++) {
    outC->_L19[i14].present = kcg_true;
    outC->_L19[i14].dmi_msg.valid = kcg_true;
    outC->_L19[i14].dmi_msg.system_clock = 0;
    outC->_L19[i14].dmi_msg.textMessage_ID = 0;
    outC->_L19[i14].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L19[i14].dmi_msg.l_text = 0;
    for (i13 = 0; i13 < 255; i13++) {
      outC->_L19[i14].dmi_msg.x_text[i13] = ' ';
    }
    outC->_L19[i14].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L19[i14].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i16 = 0; i16 < 10; i16++) {
    outC->_L4[i16].present = kcg_true;
    outC->_L4[i16].dmi_msg.valid = kcg_true;
    outC->_L4[i16].dmi_msg.system_clock = 0;
    outC->_L4[i16].dmi_msg.textMessage_ID = 0;
    outC->_L4[i16].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L4[i16].dmi_msg.l_text = 0;
    for (i15 = 0; i15 < 255; i15++) {
      outC->_L4[i16].dmi_msg.x_text[i15] = ' ';
    }
    outC->_L4[i16].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L4[i16].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L2 = 0;
  for (i18 = 0; i18 < 10; i18++) {
    outC->outArray[i18].present = kcg_true;
    outC->outArray[i18].dmi_msg.valid = kcg_true;
    outC->outArray[i18].dmi_msg.system_clock = 0;
    outC->outArray[i18].dmi_msg.textMessage_ID = 0;
    outC->outArray[i18].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->outArray[i18].dmi_msg.l_text = 0;
    for (i17 = 0; i17 < 255; i17++) {
      outC->outArray[i18].dmi_msg.x_text[i17] = ' ';
    }
    outC->outArray[i18].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->outArray[i18].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void SortMsgTopDown_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}

/* DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown */
void SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown::acc */ array_169451 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown::Queue */ array_169451 *Queue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown::numE */ kcg_int numE,
  outC_SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_copy_array_169451(&outC->_L21, acc);
  kcg_copy_MsgStructure(
    &outC->_L23,
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  outC->_L22 = index;
  if ((0 <= outC->_L22) & (outC->_L22 < 10)) {
    kcg_copy_MsgStructure(&outC->_L20, &outC->_L21[outC->_L22]);
  }
  else {
    kcg_copy_MsgStructure(&outC->_L20, &outC->_L23);
  }
  kcg_copy_MsgStructure(
    &outC->_L24,
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  outC->_L25 = !kcg_comp_MsgStructure(&outC->_L20, &outC->_L24);
  kcg_copy_array_169451(&outC->_L26, acc);
  kcg_copy_array_169451(&outC->_L35, acc);
  kcg_copy_array_169451(&outC->_L33, Queue);
  kcg_copy_MsgStructure(
    &outC->_L34,
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  outC->_L27 = cDIM_MSGQueueMax_DMI_Control_Pkg;
  outC->_L29 = numE;
  outC->_L28 = outC->_L27 - outC->_L29;
  outC->_L31 = index;
  outC->_L30 = outC->_L28 + outC->_L31;
  if ((0 <= outC->_L30) & (outC->_L30 < 10)) {
    kcg_copy_MsgStructure(&outC->_L32, &outC->_L33[outC->_L30]);
  }
  else {
    kcg_copy_MsgStructure(&outC->_L32, &outC->_L34);
  }
  outC->_L2 = index;
  kcg_copy_array_169451(&outC->_L19, &outC->_L35);
  if ((0 <= outC->_L2) & (outC->_L2 < 10)) {
    kcg_copy_MsgStructure(&outC->_L19[outC->_L2], &outC->_L32);
  }
  /* 1 */ if (outC->_L25) {
    kcg_copy_array_169451(&outC->_L4, &outC->_L26);
  }
  else {
    kcg_copy_array_169451(&outC->_L4, &outC->_L19);
  }
  kcg_copy_array_169451(&outC->outArray, &outC->_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

