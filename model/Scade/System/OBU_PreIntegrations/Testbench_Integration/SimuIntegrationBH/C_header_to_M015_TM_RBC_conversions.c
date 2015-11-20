/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_header_to_M015_TM_RBC_conversions.h"

/* TM_RBC_conversions::C_header_to_M015 */
void C_header_to_M015_TM_RBC_conversions(
  /* TM_RBC_conversions::C_header_to_M015::header_in */ M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  /* TM_RBC_conversions::C_header_to_M015::message_out */ M_015_T_TM_radio_messages *message_out)
{
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _41_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_int */
  static kcg_int q_scale_int_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::_L4 */
  static kcg_bool _L4_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::_L2 */
  static kcg_int _L2_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _17_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_in */
  static kcg_int q_scale_in_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool _18_IfBlock1_clock_1;
  static kcg_bool _19_noname_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _20_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L3 */
  static kcg_bool _L3_121_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L1 */
  static Q_SCALE _L1_122_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _23_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _24_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool _25_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L2 */
  static kcg_bool _L2_126_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */
  static Q_SCALE _L1_127_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _28_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _29_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */
  static Q_SCALE _L1_130_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_131_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _32_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _33_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _34_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _35_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _36_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */
  static Q_SCALE _L2_137_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */
  static kcg_bool _L3_138_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _39_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _40_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _16_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */
  static kcg_int q_dir_int_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */
  static kcg_int _L12_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */
  static kcg_bool _L13_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */
  static kcg_int q_dir_in_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  static kcg_bool noname_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _1_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */
  static kcg_bool _L5_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */
  static Q_DIR _L3_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _2_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _3_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */
  static Q_DIR _L2_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */
  static kcg_bool _L1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _4_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _5_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */
  static Q_DIR _L2_16_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _7_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _8_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _9_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _10_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _11_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */
  static Q_DIR _L4_112_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */
  static kcg_bool _L5_113_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _14_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _15_error_1;
  static kcg_int noname;
  /* TM_RBC_conversions::C_header_to_M015::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L1;
  /* TM_RBC_conversions::C_header_to_M015::_L13 */
  static kcg_int _L13;
  /* TM_RBC_conversions::C_header_to_M015::_L12 */
  static kcg_int _L12;
  /* TM_RBC_conversions::C_header_to_M015::_L11 */
  static kcg_int _L11;
  /* TM_RBC_conversions::C_header_to_M015::_L10 */
  static kcg_int _L10;
  /* TM_RBC_conversions::C_header_to_M015::_L9 */
  static kcg_int _L9;
  /* TM_RBC_conversions::C_header_to_M015::_L8 */
  static kcg_int _L8;
  /* TM_RBC_conversions::C_header_to_M015::_L7 */
  static kcg_int _L7;
  /* TM_RBC_conversions::C_header_to_M015::_L6 */
  static kcg_int _L6;
  /* TM_RBC_conversions::C_header_to_M015::_L5 */
  static kcg_int _L5;
  /* TM_RBC_conversions::C_header_to_M015::_L4 */
  static kcg_int _L4;
  /* TM_RBC_conversions::C_header_to_M015::_L3 */
  static kcg_int _L3;
  /* TM_RBC_conversions::C_header_to_M015::_L2 */
  static kcg_bool _L2;
  /* TM_RBC_conversions::C_header_to_M015::_L26 */
  static M_015_T_TM_radio_messages _L26;
  /* TM_RBC_conversions::C_header_to_M015::_L27 */
  static M_ACK _L27;
  /* TM_RBC_conversions::C_header_to_M015::_L28 */
  static NID_LRBG _L28;
  /* TM_RBC_conversions::C_header_to_M015::_L29 */
  static NID_EM _L29;
  /* TM_RBC_conversions::C_header_to_M015::_L30 */
  static Q_SCALE _L30;
  /* TM_RBC_conversions::C_header_to_M015::_L31 */
  static D_REF _L31;
  /* TM_RBC_conversions::C_header_to_M015::_L32 */
  static Q_DIR _L32;
  /* TM_RBC_conversions::C_header_to_M015::_L33 */
  static D_EMERGENCYSTOP _L33;
  /* TM_RBC_conversions::C_header_to_M015::_L37 */
  static NID_MESSAGE _L37;
  /* TM_RBC_conversions::C_header_to_M015::_L36 */
  static T_TRAIN _L36;
  /* TM_RBC_conversions::C_header_to_M015::_L35 */
  static L_MESSAGE _L35;
  
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_L1, header_in);
  _L13 = _L1.field8;
  _L12 = _L1.field7;
  _L11 = _L1.field6;
  _L10 = _L1.field5;
  _L9 = _L1.field4;
  _L8 = _L1.field3;
  _L7 = _L1.field2;
  _L6 = _L1.field1;
  _L5 = _L1.t_train;
  _L4 = _L1.l_message;
  _L3 = _L1.nid_message;
  _L2 = _L1.valid;
  _L37 = /* 1 */ CAST_Int_to_NID_MESSAGE_TM_conversions(_L3);
  _L35 = /* 1 */ CAST_Int_to_L_MESSAGE_TM_conversions(_L4);
  _L36 = /* 1 */ CAST_Int_to_T_TRAIN_TM_conversions(_L5);
  _L27 = /* 1 */ CAST_Int_to_M_ACK_TM_conversions(_L6);
  _L28 = /* 1 */ CAST_Int_to_NID_LRBG_TM_conversions(_L7);
  _L29 = /* 1 */ CAST_Int_to_NID_EM_TM_conversions(_L8);
  q_scale_int_1 = _L9;
  _L2_1 = q_scale_int_1;
  q_scale_in_1 = _L2_1;
  _18_IfBlock1_clock_1 = q_scale_in_1 == INT_Q_SCALE_10cm_TM_conversions;
  /* 1_ck_IfBlock1 */ if (_18_IfBlock1_clock_1) {
    _L2_137_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
    _39_q_scale_1 = _L2_137_IfBlock1;
    _41_q_scale_1 = _39_q_scale_1;
  }
  else {
    _34_else_clock_1_IfBlock1 = q_scale_in_1 == INT_Q_SCALE_1m_TM_conversions;
    /* 1_ck_anon_activ */ if (_34_else_clock_1_IfBlock1) {
      _L1_122_IfBlock1 = ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_1 = _L1_122_IfBlock1;
      _35_q_scale_1 = q_scale_1;
    }
    else {
      _25_else_clock_1_IfBlock1 = q_scale_in_1 ==
        INT_Q_SCALE_10m_TM_conversions;
      /* 1_ck_anon_activ */ if (_25_else_clock_1_IfBlock1) {
        _L1_130_IfBlock1 = ENUM_Q_SCALE_10m_TM_conversions;
        _32_q_scale_1 = _L1_130_IfBlock1;
        _24_q_scale_1 = _32_q_scale_1;
      }
      else {
        _L1_127_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
        _28_q_scale_1 = _L1_127_IfBlock1;
        _24_q_scale_1 = _28_q_scale_1;
      }
      _35_q_scale_1 = _24_q_scale_1;
    }
    _41_q_scale_1 = _35_q_scale_1;
  }
  _L30 = _41_q_scale_1;
  _L31 = /* 1 */ CAST_Int_to_D_REF_TM_conversions(_L10);
  q_dir_int_1 = _L11;
  _L12_1 = q_dir_int_1;
  q_dir_in_1 = _L12_1;
  IfBlock1_clock_1 = q_dir_in_1 == INT_Q_DIR_nomiinal_TM_conversions;
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    _L4_112_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _14_q_dir_1 = _L4_112_IfBlock1;
    _16_q_dir_1 = _14_q_dir_1;
  }
  else {
    _9_else_clock_1_IfBlock1 = q_dir_in_1 == INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (_9_else_clock_1_IfBlock1) {
      _L3_1_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = _L3_1_IfBlock1;
      _10_q_dir_1 = q_dir_1;
    }
    else {
      else_clock_1_IfBlock1 = q_dir_in_1 == INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        _L2_16_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _7_q_dir_1 = _L2_16_IfBlock1;
        _3_q_dir_1 = _7_q_dir_1;
      }
      else {
        _L2_1_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _4_q_dir_1 = _L2_1_IfBlock1;
        _3_q_dir_1 = _4_q_dir_1;
      }
      _10_q_dir_1 = _3_q_dir_1;
    }
    _16_q_dir_1 = _10_q_dir_1;
  }
  _L32 = _16_q_dir_1;
  _L33 = /* 1 */ CAST_Int_to_D_EMERGENCYSTOP_TM_conversions(_L12);
  _L26.valid = _L2;
  _L26.nid_message = _L37;
  _L26.l_message = _L35;
  _L26.t_train = _L36;
  _L26.m_ack = _L27;
  _L26.nid_lrbg = _L28;
  _L26.nid_em = _L29;
  _L26.q_scale = _L30;
  _L26.d_ref = _L31;
  _L26.q_dir = _L32;
  _L26.d_emergencystop = _L33;
  kcg_copy_M_015_T_TM_radio_messages(message_out, &_L26);
  noname = _L13;
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    _L5_113_IfBlock1 = kcg_false;
    _15_error_1 = _L5_113_IfBlock1;
    error_1 = _15_error_1;
  }
  else {
    /* 1_ck_anon_activ */ if (_9_else_clock_1_IfBlock1) {
      _L5_1_IfBlock1 = kcg_false;
      _1_error_1 = _L5_1_IfBlock1;
      _11_error_1 = _1_error_1;
    }
    else {
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        _L4_1_IfBlock1 = kcg_false;
        _8_error_1 = _L4_1_IfBlock1;
        _2_error_1 = _8_error_1;
      }
      else {
        _L1_1_IfBlock1 = kcg_true;
        _5_error_1 = _L1_1_IfBlock1;
        _2_error_1 = _5_error_1;
      }
      _11_error_1 = _2_error_1;
    }
    error_1 = _11_error_1;
  }
  _L13_1 = error_1;
  noname_1 = _L13_1;
  /* 1_ck_IfBlock1 */ if (_18_IfBlock1_clock_1) {
    _L3_138_IfBlock1 = kcg_false;
    _40_error_1 = _L3_138_IfBlock1;
    _17_error_1 = _40_error_1;
  }
  else {
    /* 1_ck_anon_activ */ if (_34_else_clock_1_IfBlock1) {
      _L3_121_IfBlock1 = kcg_false;
      _20_error_1 = _L3_121_IfBlock1;
      _36_error_1 = _20_error_1;
    }
    else {
      /* 1_ck_anon_activ */ if (_25_else_clock_1_IfBlock1) {
        _L4_131_IfBlock1 = kcg_false;
        _33_error_1 = _L4_131_IfBlock1;
        _23_error_1 = _33_error_1;
      }
      else {
        _L2_126_IfBlock1 = kcg_true;
        _29_error_1 = _L2_126_IfBlock1;
        _23_error_1 = _29_error_1;
      }
      _36_error_1 = _23_error_1;
    }
    _17_error_1 = _36_error_1;
  }
  _L4_1 = _17_error_1;
  _19_noname_1 = _L4_1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_header_to_M015_TM_RBC_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

