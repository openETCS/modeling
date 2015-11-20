/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void TxtMsgSimulator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
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
  
  outC->_L1 = kcg_true;
  outC->clicked = kcg_true;
  outC->SM1_fired = _2_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _2_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_insert1_SM1;
  outC->SM1_state_sel = SSM_st_insert1_SM1;
  outC->_L1_SM1_State9.valid = kcg_true;
  outC->_L1_SM1_State9.system_clock = 0;
  outC->_L1_SM1_State9.textMessage_ID = 0;
  outC->_L1_SM1_State9.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_State9.l_text = 0;
  for (i = 0; i < 255; i++) {
    outC->_L1_SM1_State9.x_text[i] = ' ';
  }
  outC->_L1_SM1_State9.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_State9.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_SM1_insert6.valid = kcg_true;
  outC->_L1_SM1_insert6.system_clock = 0;
  outC->_L1_SM1_insert6.textMessage_ID = 0;
  outC->_L1_SM1_insert6.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_insert6.l_text = 0;
  for (i1 = 0; i1 < 255; i1++) {
    outC->_L1_SM1_insert6.x_text[i1] = ' ';
  }
  outC->_L1_SM1_insert6.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_insert6.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_SM1_State7.valid = kcg_true;
  outC->_L1_SM1_State7.system_clock = 0;
  outC->_L1_SM1_State7.textMessage_ID = 0;
  outC->_L1_SM1_State7.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_State7.l_text = 0;
  for (i2 = 0; i2 < 255; i2++) {
    outC->_L1_SM1_State7.x_text[i2] = ' ';
  }
  outC->_L1_SM1_State7.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_State7.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_SM1_insert5.valid = kcg_true;
  outC->_L1_SM1_insert5.system_clock = 0;
  outC->_L1_SM1_insert5.textMessage_ID = 0;
  outC->_L1_SM1_insert5.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_insert5.l_text = 0;
  for (i3 = 0; i3 < 255; i3++) {
    outC->_L1_SM1_insert5.x_text[i3] = ' ';
  }
  outC->_L1_SM1_insert5.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_insert5.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_SM1_State3.valid = kcg_true;
  outC->_L1_SM1_State3.system_clock = 0;
  outC->_L1_SM1_State3.textMessage_ID = 0;
  outC->_L1_SM1_State3.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_State3.l_text = 0;
  for (i4 = 0; i4 < 255; i4++) {
    outC->_L1_SM1_State3.x_text[i4] = ' ';
  }
  outC->_L1_SM1_State3.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_State3.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_SM1_State5.valid = kcg_true;
  outC->_L1_SM1_State5.system_clock = 0;
  outC->_L1_SM1_State5.textMessage_ID = 0;
  outC->_L1_SM1_State5.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_State5.l_text = 0;
  for (i5 = 0; i5 < 255; i5++) {
    outC->_L1_SM1_State5.x_text[i5] = ' ';
  }
  outC->_L1_SM1_State5.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_State5.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_SM1_insertAck1.valid = kcg_true;
  outC->_L1_SM1_insertAck1.system_clock = 0;
  outC->_L1_SM1_insertAck1.textMessage_ID = 0;
  outC->_L1_SM1_insertAck1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_insertAck1.l_text = 0;
  for (i6 = 0; i6 < 255; i6++) {
    outC->_L1_SM1_insertAck1.x_text[i6] = ' ';
  }
  outC->_L1_SM1_insertAck1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_insertAck1.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_SM1_insertAck2.valid = kcg_true;
  outC->_L1_SM1_insertAck2.system_clock = 0;
  outC->_L1_SM1_insertAck2.textMessage_ID = 0;
  outC->_L1_SM1_insertAck2.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_insertAck2.l_text = 0;
  for (i7 = 0; i7 < 255; i7++) {
    outC->_L1_SM1_insertAck2.x_text[i7] = ' ';
  }
  outC->_L1_SM1_insertAck2.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_insertAck2.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_SM1_State0.valid = kcg_true;
  outC->_L1_SM1_State0.system_clock = 0;
  outC->_L1_SM1_State0.textMessage_ID = 0;
  outC->_L1_SM1_State0.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_State0.l_text = 0;
  for (i8 = 0; i8 < 255; i8++) {
    outC->_L1_SM1_State0.x_text[i8] = ' ';
  }
  outC->_L1_SM1_State0.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_State0.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_SM1_State8.valid = kcg_true;
  outC->_L1_SM1_State8.system_clock = 0;
  outC->_L1_SM1_State8.textMessage_ID = 0;
  outC->_L1_SM1_State8.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_State8.l_text = 0;
  for (i9 = 0; i9 < 255; i9++) {
    outC->_L1_SM1_State8.x_text[i9] = ' ';
  }
  outC->_L1_SM1_State8.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_State8.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_SM1_insert4.valid = kcg_true;
  outC->_L1_SM1_insert4.system_clock = 0;
  outC->_L1_SM1_insert4.textMessage_ID = 0;
  outC->_L1_SM1_insert4.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_insert4.l_text = 0;
  for (i10 = 0; i10 < 255; i10++) {
    outC->_L1_SM1_insert4.x_text[i10] = ' ';
  }
  outC->_L1_SM1_insert4.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_insert4.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_SM1_State6.valid = kcg_true;
  outC->_L1_SM1_State6.system_clock = 0;
  outC->_L1_SM1_State6.textMessage_ID = 0;
  outC->_L1_SM1_State6.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_State6.l_text = 0;
  for (i11 = 0; i11 < 255; i11++) {
    outC->_L1_SM1_State6.x_text[i11] = ' ';
  }
  outC->_L1_SM1_State6.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_State6.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_SM1_insert3.valid = kcg_true;
  outC->_L1_SM1_insert3.system_clock = 0;
  outC->_L1_SM1_insert3.textMessage_ID = 0;
  outC->_L1_SM1_insert3.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_insert3.l_text = 0;
  for (i12 = 0; i12 < 255; i12++) {
    outC->_L1_SM1_insert3.x_text[i12] = ' ';
  }
  outC->_L1_SM1_insert3.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_insert3.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_SM1_State4.valid = kcg_true;
  outC->_L1_SM1_State4.system_clock = 0;
  outC->_L1_SM1_State4.textMessage_ID = 0;
  outC->_L1_SM1_State4.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_State4.l_text = 0;
  for (i13 = 0; i13 < 255; i13++) {
    outC->_L1_SM1_State4.x_text[i13] = ' ';
  }
  outC->_L1_SM1_State4.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_State4.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_SM1_insert2.valid = kcg_true;
  outC->_L1_SM1_insert2.system_clock = 0;
  outC->_L1_SM1_insert2.textMessage_ID = 0;
  outC->_L1_SM1_insert2.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_insert2.l_text = 0;
  for (i14 = 0; i14 < 255; i14++) {
    outC->_L1_SM1_insert2.x_text[i14] = ' ';
  }
  outC->_L1_SM1_insert2.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_insert2.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_SM1_State2.valid = kcg_true;
  outC->_L1_SM1_State2.system_clock = 0;
  outC->_L1_SM1_State2.textMessage_ID = 0;
  outC->_L1_SM1_State2.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_State2.l_text = 0;
  for (i15 = 0; i15 < 255; i15++) {
    outC->_L1_SM1_State2.x_text[i15] = ' ';
  }
  outC->_L1_SM1_State2.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_State2.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_SM1_insert1.valid = kcg_true;
  outC->_L1_SM1_insert1.system_clock = 0;
  outC->_L1_SM1_insert1.textMessage_ID = 0;
  outC->_L1_SM1_insert1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_SM1_insert1.l_text = 0;
  for (i16 = 0; i16 < 255; i16++) {
    outC->_L1_SM1_insert1.x_text[i16] = ' ';
  }
  outC->_L1_SM1_insert1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_SM1_insert1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = SSM_st_insert1_SM1;
  outC->txt.valid = kcg_true;
  outC->txt.system_clock = 0;
  outC->txt.textMessage_ID = 0;
  outC->txt.q_text = balise_read_error_DMI_Types_Pkg;
  outC->txt.l_text = 0;
  for (i17 = 0; i17 < 255; i17++) {
    outC->txt.x_text[i17] = ' ';
  }
  outC->txt.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->txt.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
}
#endif /* KCG_USER_DEFINED_INIT */


void TxtMsgSimulator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator */
void TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::MousePressed */ kcg_bool MousePressed,
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 _64_SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool _63_SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 _62_SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt61;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::insert1 */
  static kcg_bool br_1_guard_SM1_insert1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 _60_SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool _59_SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 _58_SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt57;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State2 */
  static kcg_bool br_1_guard_SM1_State2;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 _56_SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool _55_SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 _54_SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt53;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::insert2 */
  static kcg_bool br_1_guard_SM1_insert2;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 _52_SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool _51_SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 _50_SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt49;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State4 */
  static kcg_bool br_1_guard_SM1_State4;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 _48_SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool _47_SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 _46_SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt45;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::insert3 */
  static kcg_bool br_1_guard_SM1_insert3;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 _44_SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool _43_SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 _42_SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt41;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State6 */
  static kcg_bool br_1_guard_SM1_State6;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 _40_SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool _39_SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 _38_SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt37;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::insert4 */
  static kcg_bool br_1_guard_SM1_insert4;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 _36_SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool _35_SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 _34_SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt33;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State8 */
  static kcg_bool br_1_guard_SM1_State8;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 _32_SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool _31_SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 _30_SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt29;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State0 */
  static kcg_bool br_1_guard_SM1_State0;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 _28_SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool _27_SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 _26_SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt25;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::insertAck2 */
  static kcg_bool br_1_guard_SM1_insertAck2;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 _24_SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool _23_SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 _22_SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt21;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::insertAck1 */
  static kcg_bool br_1_guard_SM1_insertAck1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 _20_SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool _19_SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 _18_SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt17;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State5 */
  static kcg_bool br_1_guard_SM1_State5;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 _16_SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool _15_SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 _14_SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt13;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State3 */
  static kcg_bool br_1_guard_SM1_State3;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 _12_SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool _11_SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 _10_SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt9;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::insert5 */
  static kcg_bool br_1_guard_SM1_insert5;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 _8_SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool _7_SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 _6_SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt5;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::State7 */
  static kcg_bool br_1_guard_SM1_State7;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 _4_SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool _3_SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 _2_SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1::insert6 */
  static kcg_bool br_1_guard_SM1_insert6;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _3_SSM_TR_SM1 SM1_fired;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool SM1_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static _1_SSM_ST_SM1 SM1_state_nxt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::txt */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg txt;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool SM1_reset_sel;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
  static kcg_bool SM1_reset_prv;
  
  /* init_SM1 */ if (outC->init) {
    outC->SM1_state_sel = SSM_st_State0_SM1;
  }
  else {
    outC->SM1_state_sel = outC->SM1_state_nxt;
  }
  /* init_SM1 */ if (outC->init) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  /* init_SM1 */ if (outC->init) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  outC->SM1_state_act = outC->SM1_state_sel;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_fired_strong = _2_SSM_TR_no_trans_SM1;
  /* act_SM1 */ switch (outC->SM1_state_act) {
    case SSM_st_insert1_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_insert1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_important1_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt61,
        &outC->_L1_SM1_insert1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt61);
      break;
    case SSM_st_State2_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_State2,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt57,
        &outC->_L1_SM1_State2);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt57);
      break;
    case SSM_st_insert2_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_insert2,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_important1_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt53,
        &outC->_L1_SM1_insert2);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt53);
      break;
    case SSM_st_State4_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_State4,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt49,
        &outC->_L1_SM1_State4);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt49);
      break;
    case SSM_st_insert3_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_insert3,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_important3_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt45,
        &outC->_L1_SM1_insert3);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt45);
      break;
    case SSM_st_State6_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_State6,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt41,
        &outC->_L1_SM1_State6);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt41);
      break;
    case SSM_st_insert4_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_insert4,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_auxi1_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt37,
        &outC->_L1_SM1_insert4);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt37);
      break;
    case SSM_st_State8_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_State8,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt33,
        &outC->_L1_SM1_State8);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt33);
      break;
    case SSM_st_State0_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_State0,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt29,
        &outC->_L1_SM1_State0);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt29);
      break;
    case SSM_st_insertAck2_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_insertAck2,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_ack2_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt25,
        &outC->_L1_SM1_insertAck2);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt25);
      break;
    case SSM_st_insertAck1_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_insertAck1,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_ack1_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt21,
        &outC->_L1_SM1_insertAck1);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt21);
      break;
    case SSM_st_State5_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_State5,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt17,
        &outC->_L1_SM1_State5);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt17);
      break;
    case SSM_st_State3_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_State3,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt13,
        &outC->_L1_SM1_State3);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt13);
      break;
    case SSM_st_insert5_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_insert5,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_auxi3_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt9,
        &outC->_L1_SM1_insert5);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt9);
      break;
    case SSM_st_State7_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_State7,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt5,
        &outC->_L1_SM1_State7);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt5);
      break;
    case SSM_st_insert6_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_insert6,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_important1_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt1,
        &outC->_L1_SM1_insert6);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        &txt1);
      br_1_guard_SM1_insert6 = kcg_true;
      if (br_1_guard_SM1_insert6) {
        _2_SM1_state_nxt = SSM_st_State9_SM1;
      }
      else {
        _2_SM1_state_nxt = SSM_st_insert6_SM1;
      }
      break;
    case SSM_st_State9_SM1 :
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_SM1_State9,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &txt,
        &outC->_L1_SM1_State9);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->txt, &txt);
      SM1_state_nxt = SSM_st_State9_SM1;
      break;
    
  }
  outC->_L1 = MousePressed;
  outC->clicked = outC->_L1;
  /* act_SM1 */ switch (outC->SM1_state_act) {
    case SSM_st_insert1_SM1 :
      br_1_guard_SM1_insert1 = kcg_true;
      if (br_1_guard_SM1_insert1) {
        _62_SM1_state_nxt = SSM_st_State2_SM1;
      }
      else {
        _62_SM1_state_nxt = SSM_st_insert1_SM1;
      }
      outC->SM1_state_nxt = _62_SM1_state_nxt;
      _63_SM1_reset_nxt = br_1_guard_SM1_insert1;
      outC->SM1_reset_nxt = _63_SM1_reset_nxt;
      if (br_1_guard_SM1_insert1) {
        _64_SM1_fired = SSM_TR_insert1_1_SM1;
      }
      else {
        _64_SM1_fired = _2_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired = _64_SM1_fired;
      break;
    case SSM_st_State2_SM1 :
      br_1_guard_SM1_State2 = outC->clicked;
      if (br_1_guard_SM1_State2) {
        _58_SM1_state_nxt = SSM_st_insert2_SM1;
      }
      else {
        _58_SM1_state_nxt = SSM_st_State2_SM1;
      }
      outC->SM1_state_nxt = _58_SM1_state_nxt;
      _59_SM1_reset_nxt = br_1_guard_SM1_State2;
      outC->SM1_reset_nxt = _59_SM1_reset_nxt;
      if (br_1_guard_SM1_State2) {
        _60_SM1_fired = SSM_TR_State2_1_SM1;
      }
      else {
        _60_SM1_fired = _2_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired = _60_SM1_fired;
      break;
    case SSM_st_insert2_SM1 :
      br_1_guard_SM1_insert2 = kcg_true;
      if (br_1_guard_SM1_insert2) {
        _54_SM1_state_nxt = SSM_st_State4_SM1;
      }
      else {
        _54_SM1_state_nxt = SSM_st_insert2_SM1;
      }
      outC->SM1_state_nxt = _54_SM1_state_nxt;
      _55_SM1_reset_nxt = br_1_guard_SM1_insert2;
      outC->SM1_reset_nxt = _55_SM1_reset_nxt;
      if (br_1_guard_SM1_insert2) {
        _56_SM1_fired = SSM_TR_insert2_1_SM1;
      }
      else {
        _56_SM1_fired = _2_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired = _56_SM1_fired;
      break;
    case SSM_st_State4_SM1 :
      br_1_guard_SM1_State4 = outC->clicked;
      if (br_1_guard_SM1_State4) {
        _50_SM1_state_nxt = SSM_st_insert3_SM1;
      }
      else {
        _50_SM1_state_nxt = SSM_st_State4_SM1;
      }
      outC->SM1_state_nxt = _50_SM1_state_nxt;
      _51_SM1_reset_nxt = br_1_guard_SM1_State4;
      outC->SM1_reset_nxt = _51_SM1_reset_nxt;
      if (br_1_guard_SM1_State4) {
        _52_SM1_fired = SSM_TR_State4_1_SM1;
      }
      else {
        _52_SM1_fired = _2_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired = _52_SM1_fired;
      break;
    case SSM_st_insert3_SM1 :
      br_1_guard_SM1_insert3 = kcg_true;
      if (br_1_guard_SM1_insert3) {
        _46_SM1_state_nxt = SSM_st_State6_SM1;
      }
      else {
        _46_SM1_state_nxt = SSM_st_insert3_SM1;
      }
      outC->SM1_state_nxt = _46_SM1_state_nxt;
      _47_SM1_reset_nxt = br_1_guard_SM1_insert3;
      outC->SM1_reset_nxt = _47_SM1_reset_nxt;
      if (br_1_guard_SM1_insert3) {
        _48_SM1_fired = SSM_TR_insert3_1_SM1;
      }
      else {
        _48_SM1_fired = _2_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired = _48_SM1_fired;
      break;
    case SSM_st_State6_SM1 :
      br_1_guard_SM1_State6 = outC->clicked;
      if (br_1_guard_SM1_State6) {
        _42_SM1_state_nxt = SSM_st_insert4_SM1;
      }
      else {
        _42_SM1_state_nxt = SSM_st_State6_SM1;
      }
      outC->SM1_state_nxt = _42_SM1_state_nxt;
      _43_SM1_reset_nxt = br_1_guard_SM1_State6;
      outC->SM1_reset_nxt = _43_SM1_reset_nxt;
      if (br_1_guard_SM1_State6) {
        _44_SM1_fired = SSM_TR_State6_1_SM1;
      }
      else {
        _44_SM1_fired = _2_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired = _44_SM1_fired;
      break;
    case SSM_st_insert4_SM1 :
      br_1_guard_SM1_insert4 = kcg_true;
      if (br_1_guard_SM1_insert4) {
        _38_SM1_state_nxt = SSM_st_State8_SM1;
      }
      else {
        _38_SM1_state_nxt = SSM_st_insert4_SM1;
      }
      outC->SM1_state_nxt = _38_SM1_state_nxt;
      _39_SM1_reset_nxt = br_1_guard_SM1_insert4;
      outC->SM1_reset_nxt = _39_SM1_reset_nxt;
      if (br_1_guard_SM1_insert4) {
        _40_SM1_fired = SSM_TR_insert4_1_SM1;
      }
      else {
        _40_SM1_fired = _2_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired = _40_SM1_fired;
      break;
    case SSM_st_State8_SM1 :
      br_1_guard_SM1_State8 = outC->clicked;
      if (br_1_guard_SM1_State8) {
        _34_SM1_state_nxt = SSM_st_insertAck1_SM1;
      }
      else {
        _34_SM1_state_nxt = SSM_st_State8_SM1;
      }
      outC->SM1_state_nxt = _34_SM1_state_nxt;
      _35_SM1_reset_nxt = br_1_guard_SM1_State8;
      outC->SM1_reset_nxt = _35_SM1_reset_nxt;
      if (br_1_guard_SM1_State8) {
        _36_SM1_fired = SSM_TR_State8_1_SM1;
      }
      else {
        _36_SM1_fired = _2_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired = _36_SM1_fired;
      break;
    case SSM_st_State0_SM1 :
      br_1_guard_SM1_State0 = outC->clicked;
      if (br_1_guard_SM1_State0) {
        _30_SM1_state_nxt = SSM_st_insert1_SM1;
      }
      else {
        _30_SM1_state_nxt = SSM_st_State0_SM1;
      }
      outC->SM1_state_nxt = _30_SM1_state_nxt;
      _31_SM1_reset_nxt = br_1_guard_SM1_State0;
      outC->SM1_reset_nxt = _31_SM1_reset_nxt;
      if (br_1_guard_SM1_State0) {
        _32_SM1_fired = SSM_TR_State0_1_SM1;
      }
      else {
        _32_SM1_fired = _2_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired = _32_SM1_fired;
      break;
    case SSM_st_insertAck2_SM1 :
      br_1_guard_SM1_insertAck2 = kcg_true;
      if (br_1_guard_SM1_insertAck2) {
        _26_SM1_state_nxt = SSM_st_State5_SM1;
      }
      else {
        _26_SM1_state_nxt = SSM_st_insertAck2_SM1;
      }
      outC->SM1_state_nxt = _26_SM1_state_nxt;
      _27_SM1_reset_nxt = br_1_guard_SM1_insertAck2;
      outC->SM1_reset_nxt = _27_SM1_reset_nxt;
      if (br_1_guard_SM1_insertAck2) {
        _28_SM1_fired = SSM_TR_insertAck2_1_SM1;
      }
      else {
        _28_SM1_fired = _2_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired = _28_SM1_fired;
      break;
    case SSM_st_insertAck1_SM1 :
      br_1_guard_SM1_insertAck1 = kcg_true;
      if (br_1_guard_SM1_insertAck1) {
        _22_SM1_state_nxt = SSM_st_State3_SM1;
      }
      else {
        _22_SM1_state_nxt = SSM_st_insertAck1_SM1;
      }
      outC->SM1_state_nxt = _22_SM1_state_nxt;
      _23_SM1_reset_nxt = br_1_guard_SM1_insertAck1;
      outC->SM1_reset_nxt = _23_SM1_reset_nxt;
      if (br_1_guard_SM1_insertAck1) {
        _24_SM1_fired = SSM_TR_insertAck1_1_SM1;
      }
      else {
        _24_SM1_fired = _2_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired = _24_SM1_fired;
      break;
    case SSM_st_State5_SM1 :
      br_1_guard_SM1_State5 = outC->clicked;
      if (br_1_guard_SM1_State5) {
        _18_SM1_state_nxt = SSM_st_insert5_SM1;
      }
      else {
        _18_SM1_state_nxt = SSM_st_State5_SM1;
      }
      outC->SM1_state_nxt = _18_SM1_state_nxt;
      _19_SM1_reset_nxt = br_1_guard_SM1_State5;
      outC->SM1_reset_nxt = _19_SM1_reset_nxt;
      if (br_1_guard_SM1_State5) {
        _20_SM1_fired = SSM_TR_State5_1_SM1;
      }
      else {
        _20_SM1_fired = _2_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired = _20_SM1_fired;
      break;
    case SSM_st_State3_SM1 :
      br_1_guard_SM1_State3 = outC->clicked;
      if (br_1_guard_SM1_State3) {
        _14_SM1_state_nxt = SSM_st_insertAck2_SM1;
      }
      else {
        _14_SM1_state_nxt = SSM_st_State3_SM1;
      }
      outC->SM1_state_nxt = _14_SM1_state_nxt;
      _15_SM1_reset_nxt = br_1_guard_SM1_State3;
      outC->SM1_reset_nxt = _15_SM1_reset_nxt;
      if (br_1_guard_SM1_State3) {
        _16_SM1_fired = SSM_TR_State3_1_SM1;
      }
      else {
        _16_SM1_fired = _2_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired = _16_SM1_fired;
      break;
    case SSM_st_insert5_SM1 :
      br_1_guard_SM1_insert5 = kcg_true;
      if (br_1_guard_SM1_insert5) {
        _10_SM1_state_nxt = SSM_st_State7_SM1;
      }
      else {
        _10_SM1_state_nxt = SSM_st_insert5_SM1;
      }
      outC->SM1_state_nxt = _10_SM1_state_nxt;
      _11_SM1_reset_nxt = br_1_guard_SM1_insert5;
      outC->SM1_reset_nxt = _11_SM1_reset_nxt;
      if (br_1_guard_SM1_insert5) {
        _12_SM1_fired = SSM_TR_insert5_1_SM1;
      }
      else {
        _12_SM1_fired = _2_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired = _12_SM1_fired;
      break;
    case SSM_st_State7_SM1 :
      br_1_guard_SM1_State7 = outC->clicked;
      if (br_1_guard_SM1_State7) {
        _6_SM1_state_nxt = SSM_st_insert6_SM1;
      }
      else {
        _6_SM1_state_nxt = SSM_st_State7_SM1;
      }
      outC->SM1_state_nxt = _6_SM1_state_nxt;
      _7_SM1_reset_nxt = br_1_guard_SM1_State7;
      outC->SM1_reset_nxt = _7_SM1_reset_nxt;
      if (br_1_guard_SM1_State7) {
        _8_SM1_fired = SSM_TR_State7_1_SM1;
      }
      else {
        _8_SM1_fired = _2_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired = _8_SM1_fired;
      break;
    case SSM_st_insert6_SM1 :
      outC->SM1_state_nxt = _2_SM1_state_nxt;
      _3_SM1_reset_nxt = br_1_guard_SM1_insert6;
      outC->SM1_reset_nxt = _3_SM1_reset_nxt;
      if (br_1_guard_SM1_insert6) {
        _4_SM1_fired = SSM_TR_insert6_1_SM1;
      }
      else {
        _4_SM1_fired = _2_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired = _4_SM1_fired;
      break;
    case SSM_st_State9_SM1 :
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      SM1_fired = outC->SM1_fired_strong;
      outC->SM1_fired = SM1_fired;
      break;
    
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

