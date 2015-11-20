/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void SliceMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i64;
  static kcg_int i63;
  static kcg_int i62;
  static kcg_int i61;
  static kcg_int i60;
  static kcg_int i59;
  static kcg_int i58;
  static kcg_int i57;
  static kcg_int i56;
  static kcg_int i55;
  static kcg_int i54;
  static kcg_int i53;
  static kcg_int i52;
  static kcg_int i51;
  static kcg_int i50;
  static kcg_int i49;
  static kcg_int i48;
  static kcg_int i47;
  static kcg_int i46;
  static kcg_int i45;
  static kcg_int i44;
  static kcg_int i43;
  static kcg_int i42;
  static kcg_int i41;
  static kcg_int i40;
  static kcg_int i39;
  static kcg_int i38;
  static kcg_int i37;
  static kcg_int i36;
  static kcg_int i35;
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
  
  for (i1 = 0; i1 < 5; i1++) {
    for (i = 0; i < 30; i++) {
      outC->_L91[i1][i] = ' ';
    }
  }
  for (i3 = 0; i3 < 5; i3++) {
    for (i2 = 0; i2 < 30; i2++) {
      outC->_L89[i3][i2] = ' ';
    }
  }
  outC->_L88.present = kcg_true;
  outC->_L88.dmi_msg.valid = kcg_true;
  outC->_L88.dmi_msg.system_clock = 0;
  outC->_L88.dmi_msg.textMessage_ID = 0;
  outC->_L88.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L88.dmi_msg.l_text = 0;
  for (i4 = 0; i4 < 255; i4++) {
    outC->_L88.dmi_msg.x_text[i4] = ' ';
  }
  outC->_L88.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L88.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L83.present = kcg_true;
  outC->_L83.dmi_msg.valid = kcg_true;
  outC->_L83.dmi_msg.system_clock = 0;
  outC->_L83.dmi_msg.textMessage_ID = 0;
  outC->_L83.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L83.dmi_msg.l_text = 0;
  for (i5 = 0; i5 < 255; i5++) {
    outC->_L83.dmi_msg.x_text[i5] = ' ';
  }
  outC->_L83.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L83.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L86 = kcg_true;
  for (i7 = 0; i7 < 5; i7++) {
    for (i6 = 0; i6 < 30; i6++) {
      outC->_L81[i7][i6] = ' ';
    }
  }
  for (i9 = 0; i9 < 5; i9++) {
    for (i8 = 0; i8 < 30; i8++) {
      outC->_L80[i9][i8] = ' ';
    }
  }
  for (i10 = 0; i10 < 30; i10++) {
    outC->_L75[i10] = ' ';
  }
  for (i11 = 0; i11 < 30; i11++) {
    outC->_L76[i11] = ' ';
  }
  for (i12 = 0; i12 < 30; i12++) {
    outC->_L77[i12] = ' ';
  }
  for (i13 = 0; i13 < 30; i13++) {
    outC->_L78[i13] = ' ';
  }
  for (i14 = 0; i14 < 30; i14++) {
    outC->_L79[i14] = ' ';
  }
  for (i15 = 0; i15 < 255; i15++) {
    outC->_L73[i15] = ' ';
  }
  outC->_L65 = 0;
  outC->_L66.present = kcg_true;
  outC->_L66.dmi_msg.valid = kcg_true;
  outC->_L66.dmi_msg.system_clock = 0;
  outC->_L66.dmi_msg.textMessage_ID = 0;
  outC->_L66.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L66.dmi_msg.l_text = 0;
  for (i16 = 0; i16 < 255; i16++) {
    outC->_L66.dmi_msg.x_text[i16] = ' ';
  }
  outC->_L66.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L66.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L67 = 0;
  outC->_L68 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L70 = kcg_true;
  outC->_L71.valid = kcg_true;
  outC->_L71.system_clock = 0;
  outC->_L71.textMessage_ID = 0;
  outC->_L71.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L71.l_text = 0;
  for (i17 = 0; i17 < 255; i17++) {
    outC->_L71.x_text[i17] = ' ';
  }
  outC->_L71.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L71.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L72 = 0;
  for (i19 = 0; i19 < 5; i19++) {
    for (i18 = 0; i18 < 30; i18++) {
      outC->_L64[i19][i18] = ' ';
    }
  }
  for (i21 = 0; i21 < 5; i21++) {
    for (i20 = 0; i20 < 30; i20++) {
      outC->_L63[i21][i20] = ' ';
    }
  }
  for (i22 = 0; i22 < 30; i22++) {
    outC->_L59[i22] = ' ';
  }
  for (i23 = 0; i23 < 30; i23++) {
    outC->_L60[i23] = ' ';
  }
  for (i24 = 0; i24 < 30; i24++) {
    outC->_L61[i24] = ' ';
  }
  for (i25 = 0; i25 < 30; i25++) {
    outC->_L62[i25] = ' ';
  }
  for (i26 = 0; i26 < 255; i26++) {
    outC->_L58[i26] = ' ';
  }
  outC->_L50 = kcg_true;
  outC->_L51 = 0;
  outC->_L52 = kcg_true;
  outC->_L53.present = kcg_true;
  outC->_L53.dmi_msg.valid = kcg_true;
  outC->_L53.dmi_msg.system_clock = 0;
  outC->_L53.dmi_msg.textMessage_ID = 0;
  outC->_L53.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L53.dmi_msg.l_text = 0;
  for (i27 = 0; i27 < 255; i27++) {
    outC->_L53.dmi_msg.x_text[i27] = ' ';
  }
  outC->_L53.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L53.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L54 = 0;
  outC->_L55 = 0;
  outC->_L56.valid = kcg_true;
  outC->_L56.system_clock = 0;
  outC->_L56.textMessage_ID = 0;
  outC->_L56.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L56.l_text = 0;
  for (i28 = 0; i28 < 255; i28++) {
    outC->_L56.x_text[i28] = ' ';
  }
  outC->_L56.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L56.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L57 = kcg_true;
  for (i30 = 0; i30 < 5; i30++) {
    for (i29 = 0; i29 < 30; i29++) {
      outC->_L49[i30][i29] = ' ';
    }
  }
  for (i32 = 0; i32 < 5; i32++) {
    for (i31 = 0; i31 < 30; i31++) {
      outC->_L48[i32][i31] = ' ';
    }
  }
  for (i33 = 0; i33 < 30; i33++) {
    outC->_L47[i33] = ' ';
  }
  for (i34 = 0; i34 < 30; i34++) {
    outC->_L46[i34] = ' ';
  }
  for (i35 = 0; i35 < 30; i35++) {
    outC->_L45[i35] = ' ';
  }
  for (i36 = 0; i36 < 255; i36++) {
    outC->_L44[i36] = ' ';
  }
  outC->_L36 = 0;
  outC->_L37.present = kcg_true;
  outC->_L37.dmi_msg.valid = kcg_true;
  outC->_L37.dmi_msg.system_clock = 0;
  outC->_L37.dmi_msg.textMessage_ID = 0;
  outC->_L37.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L37.dmi_msg.l_text = 0;
  for (i37 = 0; i37 < 255; i37++) {
    outC->_L37.dmi_msg.x_text[i37] = ' ';
  }
  outC->_L37.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L37.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L38 = kcg_true;
  outC->_L39 = 0;
  outC->_L40 = 0;
  outC->_L41 = kcg_true;
  outC->_L42.valid = kcg_true;
  outC->_L42.system_clock = 0;
  outC->_L42.textMessage_ID = 0;
  outC->_L42.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L42.l_text = 0;
  for (i38 = 0; i38 < 255; i38++) {
    outC->_L42.x_text[i38] = ' ';
  }
  outC->_L42.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L42.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L43 = kcg_true;
  for (i40 = 0; i40 < 5; i40++) {
    for (i39 = 0; i39 < 30; i39++) {
      outC->_L35[i40][i39] = ' ';
    }
  }
  for (i41 = 0; i41 < 30; i41++) {
    outC->_L34[i41] = ' ';
  }
  for (i43 = 0; i43 < 5; i43++) {
    for (i42 = 0; i42 < 30; i42++) {
      outC->_L33[i43][i42] = ' ';
    }
  }
  for (i44 = 0; i44 < 30; i44++) {
    outC->_L32[i44] = ' ';
  }
  for (i45 = 0; i45 < 255; i45++) {
    outC->_L31[i45] = ' ';
  }
  for (i47 = 0; i47 < 5; i47++) {
    for (i46 = 0; i46 < 30; i46++) {
      outC->_L30[i47][i46] = ' ';
    }
  }
  for (i48 = 0; i48 < 30; i48++) {
    outC->_L29[i48] = ' ';
  }
  for (i50 = 0; i50 < 5; i50++) {
    for (i49 = 0; i49 < 30; i49++) {
      outC->_L28[i50][i49] = ' ';
    }
  }
  outC->_L21 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L23 = 0;
  outC->_L24 = 0;
  outC->_L25 = kcg_true;
  outC->_L26 = 0;
  outC->_L19.valid = kcg_true;
  outC->_L19.system_clock = 0;
  outC->_L19.textMessage_ID = 0;
  outC->_L19.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L19.l_text = 0;
  for (i51 = 0; i51 < 255; i51++) {
    outC->_L19.x_text[i51] = ' ';
  }
  outC->_L19.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L19.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L18.present = kcg_true;
  outC->_L18.dmi_msg.valid = kcg_true;
  outC->_L18.dmi_msg.system_clock = 0;
  outC->_L18.dmi_msg.textMessage_ID = 0;
  outC->_L18.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L18.dmi_msg.l_text = 0;
  for (i52 = 0; i52 < 255; i52++) {
    outC->_L18.dmi_msg.x_text[i52] = ' ';
  }
  outC->_L18.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L18.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (i54 = 0; i54 < 5; i54++) {
    for (i53 = 0; i53 < 30; i53++) {
      outC->_L16[i54][i53] = ' ';
    }
  }
  outC->_L15 = kcg_true;
  outC->_L14 = 0;
  outC->_L13 = 0;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = 0;
  for (i55 = 0; i55 < 255; i55++) {
    outC->_L9[i55] = ' ';
  }
  outC->_L8.valid = kcg_true;
  outC->_L8.system_clock = 0;
  outC->_L8.textMessage_ID = 0;
  outC->_L8.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L8.l_text = 0;
  for (i56 = 0; i56 < 255; i56++) {
    outC->_L8.x_text[i56] = ' ';
  }
  outC->_L8.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L8.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (i57 = 0; i57 < 30; i57++) {
    outC->_L6[i57] = ' ';
  }
  for (i58 = 0; i58 < 30; i58++) {
    outC->_L5[i58] = ' ';
  }
  for (i59 = 0; i59 < 30; i59++) {
    outC->_L4[i59] = ' ';
  }
  for (i60 = 0; i60 < 30; i60++) {
    outC->_L3[i60] = ' ';
  }
  for (i61 = 0; i61 < 30; i61++) {
    outC->_L2[i61] = ' ';
  }
  outC->_L1.present = kcg_true;
  outC->_L1.dmi_msg.valid = kcg_true;
  outC->_L1.dmi_msg.system_clock = 0;
  outC->_L1.dmi_msg.textMessage_ID = 0;
  outC->_L1.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1.dmi_msg.l_text = 0;
  for (i62 = 0; i62 < 255; i62++) {
    outC->_L1.dmi_msg.x_text[i62] = ' ';
  }
  outC->_L1.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (i64 = 0; i64 < 5; i64++) {
    for (i63 = 0; i63 < 30; i63++) {
      outC->Output1[i64][i63] = ' ';
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void SliceMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}

/* DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg */
void SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg::Input */ MsgStructure *Input1,
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_copy_MsgStructure(&outC->_L1, Input1);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L8,
    &outC->_L1.dmi_msg);
  outC->_L10 = outC->_L8.l_text;
  outC->_L14 = 30;
  outC->_L11 = outC->_L10 <= outC->_L14;
  outC->_L13 = 0;
  outC->_L12 = outC->_L10 > outC->_L13;
  outC->_L15 = outC->_L11 & outC->_L12;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L9, &outC->_L8.x_text);
  kcg_copy_array_char_30(&outC->_L2, (array_char_30 *) &outC->_L9[0]);
  kcg_copy_array_char_30(
    &outC->_L29,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30(&outC->_L28[0], &outC->_L2);
  kcg_copy_array_char_30(&outC->_L28[1], &outC->_L29);
  kcg_copy_array_char_30(&outC->_L28[2], &outC->_L29);
  kcg_copy_array_char_30(&outC->_L28[3], &outC->_L29);
  kcg_copy_array_char_30(&outC->_L28[4], &outC->_L29);
  kcg_copy_MsgStructure(&outC->_L18, Input1);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L19,
    &outC->_L18.dmi_msg);
  outC->_L24 = outC->_L19.l_text;
  outC->_L26 = 60;
  outC->_L25 = outC->_L24 <= outC->_L26;
  outC->_L23 = 30;
  outC->_L22 = outC->_L24 > outC->_L23;
  outC->_L21 = outC->_L25 & outC->_L22;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L31, &outC->_L19.x_text);
  kcg_copy_array_char_30(&outC->_L32, (array_char_30 *) &outC->_L31[0]);
  kcg_copy_array_char_30(&outC->_L3, (array_char_30 *) &outC->_L31[30]);
  kcg_copy_array_char_30(
    &outC->_L34,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30(&outC->_L33[0], &outC->_L32);
  kcg_copy_array_char_30(&outC->_L33[1], &outC->_L3);
  kcg_copy_array_char_30(&outC->_L33[2], &outC->_L34);
  kcg_copy_array_char_30(&outC->_L33[3], &outC->_L34);
  kcg_copy_array_char_30(&outC->_L33[4], &outC->_L34);
  kcg_copy_MsgStructure(&outC->_L37, Input1);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L42,
    &outC->_L37.dmi_msg);
  outC->_L36 = outC->_L42.l_text;
  outC->_L40 = 90;
  outC->_L38 = outC->_L36 <= outC->_L40;
  outC->_L39 = 60;
  outC->_L43 = outC->_L36 > outC->_L39;
  outC->_L41 = outC->_L38 & outC->_L43;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L44, &outC->_L42.x_text);
  kcg_copy_array_char_30(&outC->_L45, (array_char_30 *) &outC->_L44[0]);
  kcg_copy_array_char_30(&outC->_L46, (array_char_30 *) &outC->_L44[30]);
  kcg_copy_array_char_30(&outC->_L4, (array_char_30 *) &outC->_L44[60]);
  kcg_copy_array_char_30(
    &outC->_L47,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30(&outC->_L48[0], &outC->_L45);
  kcg_copy_array_char_30(&outC->_L48[1], &outC->_L46);
  kcg_copy_array_char_30(&outC->_L48[2], &outC->_L4);
  kcg_copy_array_char_30(&outC->_L48[3], &outC->_L47);
  kcg_copy_array_char_30(&outC->_L48[4], &outC->_L47);
  kcg_copy_MsgStructure(&outC->_L53, Input1);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L56,
    &outC->_L53.dmi_msg);
  outC->_L51 = outC->_L56.l_text;
  outC->_L55 = 120;
  outC->_L50 = outC->_L51 <= outC->_L55;
  outC->_L54 = 90;
  outC->_L57 = outC->_L51 > outC->_L54;
  outC->_L52 = outC->_L50 & outC->_L57;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L58, &outC->_L56.x_text);
  kcg_copy_array_char_30(&outC->_L62, (array_char_30 *) &outC->_L58[0]);
  kcg_copy_array_char_30(&outC->_L61, (array_char_30 *) &outC->_L58[30]);
  kcg_copy_array_char_30(&outC->_L60, (array_char_30 *) &outC->_L58[60]);
  kcg_copy_array_char_30(&outC->_L5, (array_char_30 *) &outC->_L58[90]);
  kcg_copy_array_char_30(
    &outC->_L59,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30(&outC->_L63[0], &outC->_L62);
  kcg_copy_array_char_30(&outC->_L63[1], &outC->_L61);
  kcg_copy_array_char_30(&outC->_L63[2], &outC->_L60);
  kcg_copy_array_char_30(&outC->_L63[3], &outC->_L5);
  kcg_copy_array_char_30(&outC->_L63[4], &outC->_L59);
  kcg_copy_MsgStructure(&outC->_L66, Input1);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L71,
    &outC->_L66.dmi_msg);
  outC->_L67 = outC->_L71.l_text;
  outC->_L65 = 120;
  outC->_L68 = outC->_L67 <= outC->_L65;
  outC->_L72 = 90;
  outC->_L69 = outC->_L67 > outC->_L72;
  outC->_L70 = outC->_L68 & outC->_L69;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L73, &outC->_L71.x_text);
  kcg_copy_array_char_30(&outC->_L78, (array_char_30 *) &outC->_L73[0]);
  kcg_copy_array_char_30(&outC->_L76, (array_char_30 *) &outC->_L73[30]);
  kcg_copy_array_char_30(&outC->_L75, (array_char_30 *) &outC->_L73[60]);
  kcg_copy_array_char_30(&outC->_L77, (array_char_30 *) &outC->_L73[90]);
  kcg_copy_array_char_30(&outC->_L6, (array_char_30 *) &outC->_L73[120]);
  kcg_copy_array_char_30(&outC->_L80[0], &outC->_L78);
  kcg_copy_array_char_30(&outC->_L80[1], &outC->_L76);
  kcg_copy_array_char_30(&outC->_L80[2], &outC->_L75);
  kcg_copy_array_char_30(&outC->_L80[3], &outC->_L77);
  kcg_copy_array_char_30(&outC->_L80[4], &outC->_L6);
  kcg_copy_MsgStructure(&outC->_L83, Input1);
  kcg_copy_MsgStructure(
    &outC->_L88,
    (MsgStructure *) &cMsgStructure_fix_DMI_Control_Pkg);
  outC->_L86 = kcg_comp_MsgStructure(&outC->_L83, &outC->_L88);
  kcg_copy_array_char_30_5(
    &outC->_L91,
    (array_char_30_5 *) &cPlainText_fix_DMI_Control_Pkg);
  kcg_copy_array_char_30(
    &outC->_L79,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30(&outC->_L81[0], &outC->_L79);
  kcg_copy_array_char_30(&outC->_L81[1], &outC->_L79);
  kcg_copy_array_char_30(&outC->_L81[2], &outC->_L79);
  kcg_copy_array_char_30(&outC->_L81[3], &outC->_L79);
  kcg_copy_array_char_30(&outC->_L81[4], &outC->_L79);
  /* 6 */ if (outC->_L86) {
    kcg_copy_array_char_30_5(&outC->_L89, &outC->_L91);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L89, &outC->_L81);
  }
  /* 5 */ if (outC->_L70) {
    kcg_copy_array_char_30_5(&outC->_L64, &outC->_L80);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L64, &outC->_L89);
  }
  /* 4 */ if (outC->_L52) {
    kcg_copy_array_char_30_5(&outC->_L49, &outC->_L63);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L49, &outC->_L64);
  }
  /* 3 */ if (outC->_L41) {
    kcg_copy_array_char_30_5(&outC->_L35, &outC->_L48);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L35, &outC->_L49);
  }
  /* 2 */ if (outC->_L21) {
    kcg_copy_array_char_30_5(&outC->_L30, &outC->_L33);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L30, &outC->_L35);
  }
  /* 1 */ if (outC->_L15) {
    kcg_copy_array_char_30_5(&outC->_L16, &outC->_L28);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L16, &outC->_L30);
  }
  kcg_copy_array_char_30_5(&outC->Output1, &outC->_L16);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

