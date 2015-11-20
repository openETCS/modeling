/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void MergeMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
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
  
  for (i2 = 0; i2 < 10; i2++) {
    for (i1 = 0; i1 < 10; i1++) {
      outC->_L47[i2][i1].present = kcg_true;
      outC->_L47[i2][i1].dmi_msg.valid = kcg_true;
      outC->_L47[i2][i1].dmi_msg.system_clock = 0;
      outC->_L47[i2][i1].dmi_msg.textMessage_ID = 0;
      outC->_L47[i2][i1].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
      outC->_L47[i2][i1].dmi_msg.l_text = 0;
      for (i = 0; i < 255; i++) {
        outC->_L47[i2][i1].dmi_msg.x_text[i] = ' ';
      }
      outC->_L47[i2][i1].dmi_msg.q_textClass =
        Q_TEXTCLASS_Auxiliary_Information;
      outC->_L47[i2][i1].dmi_msg.q_textConfirm =
        Q_TEXTCONFIRM_No_confirmation_required;
    }
  }
  for (i3 = 0; i3 < 10; i3++) {
    outC->_L46[i3] = 0;
  }
  for (i6 = 0; i6 < 10; i6++) {
    for (i5 = 0; i5 < 10; i5++) {
      outC->_L40[i6][i5].present = kcg_true;
      outC->_L40[i6][i5].dmi_msg.valid = kcg_true;
      outC->_L40[i6][i5].dmi_msg.system_clock = 0;
      outC->_L40[i6][i5].dmi_msg.textMessage_ID = 0;
      outC->_L40[i6][i5].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
      outC->_L40[i6][i5].dmi_msg.l_text = 0;
      for (i4 = 0; i4 < 255; i4++) {
        outC->_L40[i6][i5].dmi_msg.x_text[i4] = ' ';
      }
      outC->_L40[i6][i5].dmi_msg.q_textClass =
        Q_TEXTCLASS_Auxiliary_Information;
      outC->_L40[i6][i5].dmi_msg.q_textConfirm =
        Q_TEXTCONFIRM_No_confirmation_required;
    }
  }
  outC->_L45 = 0;
  for (i8 = 0; i8 < 10; i8++) {
    outC->_L43[i8].present = kcg_true;
    outC->_L43[i8].dmi_msg.valid = kcg_true;
    outC->_L43[i8].dmi_msg.system_clock = 0;
    outC->_L43[i8].dmi_msg.textMessage_ID = 0;
    outC->_L43[i8].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L43[i8].dmi_msg.l_text = 0;
    for (i7 = 0; i7 < 255; i7++) {
      outC->_L43[i8].dmi_msg.x_text[i7] = ' ';
    }
    outC->_L43[i8].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L43[i8].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i10 = 0; i10 < 10; i10++) {
    outC->_L39[i10].present = kcg_true;
    outC->_L39[i10].dmi_msg.valid = kcg_true;
    outC->_L39[i10].dmi_msg.system_clock = 0;
    outC->_L39[i10].dmi_msg.textMessage_ID = 0;
    outC->_L39[i10].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L39[i10].dmi_msg.l_text = 0;
    for (i9 = 0; i9 < 255; i9++) {
      outC->_L39[i10].dmi_msg.x_text[i9] = ' ';
    }
    outC->_L39[i10].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L39[i10].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i12 = 0; i12 < 10; i12++) {
    outC->_L14[i12].present = kcg_true;
    outC->_L14[i12].dmi_msg.valid = kcg_true;
    outC->_L14[i12].dmi_msg.system_clock = 0;
    outC->_L14[i12].dmi_msg.textMessage_ID = 0;
    outC->_L14[i12].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L14[i12].dmi_msg.l_text = 0;
    for (i11 = 0; i11 < 255; i11++) {
      outC->_L14[i12].dmi_msg.x_text[i11] = ' ';
    }
    outC->_L14[i12].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L14[i12].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i14 = 0; i14 < 10; i14++) {
    outC->OutQueue[i14].present = kcg_true;
    outC->OutQueue[i14].dmi_msg.valid = kcg_true;
    outC->OutQueue[i14].dmi_msg.system_clock = 0;
    outC->OutQueue[i14].dmi_msg.textMessage_ID = 0;
    outC->OutQueue[i14].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->OutQueue[i14].dmi_msg.l_text = 0;
    for (i13 = 0; i13 < 255; i13++) {
      outC->OutQueue[i14].dmi_msg.x_text[i13] = ' ';
    }
    outC->OutQueue[i14].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->OutQueue[i14].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (i15 = 0; i15 < 10; i15++) {
    /* 1 */
    MergeMSG_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_1[i15]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void MergeMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 10; i++) {
    /* 1 */
    MergeMSG_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_1[i]);
  }
}

/* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg */
void MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::num */ kcg_int num,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::impQueue */ array_169451 *impQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg::AuxiQueue */ array_169451 *AuxiQueue,
  outC_MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg */
  static array_169451 acc;
  static kcg_int i;
  
  kcg_copy_array_169451(&outC->_L14, impQueue);
  kcg_copy_array_169451(&outC->_L43, AuxiQueue);
  /* pow */ for (i3 = 0; i3 < 10; i3++) {
    kcg_copy_array_169451(&outC->_L40[i3], &outC->_L14);
  }
  outC->_L45 = num;
  /* pow */ for (i2 = 0; i2 < 10; i2++) {
    outC->_L46[i2] = outC->_L45;
  }
  /* pow */ for (i1 = 0; i1 < 10; i1++) {
    kcg_copy_array_169451(&outC->_L47[i1], &outC->_L43);
  }
  kcg_copy_array_169451(&outC->_L39, &outC->_L43);
  /* 1 */ for (i = 0; i < 10; i++) {
    kcg_copy_array_169451(&acc, &outC->_L39);
    /* 1 */
    MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &acc,
      &outC->_L40[i],
      outC->_L46[i],
      &outC->_L47[i],
      &outC->Context_1[i]);
    kcg_copy_array_169451(&outC->_L39, &outC->Context_1[i].OutputArray);
  }
  kcg_copy_array_169451(&outC->OutQueue, &outC->_L39);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

