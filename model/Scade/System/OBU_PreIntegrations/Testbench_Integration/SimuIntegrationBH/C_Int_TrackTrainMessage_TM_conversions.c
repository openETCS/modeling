/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_Int_TrackTrainMessage_TM_conversions.h"

/* TM_conversions::C_Int_TrackTrainMessage */
void C_Int_TrackTrainMessage_TM_conversions(
  /* TM_conversions::C_Int_TrackTrainMessage::Message_In */ Radio_TrackTrain_Header_T_TM *Message_In,
  /* TM_conversions::C_Int_TrackTrainMessage::Message_Out */ Radio_TrackTrain_Header_T_TM_transitional *Message_Out)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _41_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */
  static kcg_int q_dir_int_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */
  static kcg_int _L12_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */
  static kcg_bool _L13_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */
  static kcg_int q_dir_in_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _18_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool _19_IfBlock1_clock_1;
  static kcg_bool _20_noname_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _21_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */
  static kcg_bool _L5_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */
  static Q_DIR _L3_122_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _23_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _24_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool _25_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */
  static Q_DIR _L2_126_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */
  static kcg_bool _L1_127_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _28_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _29_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */
  static Q_DIR _L2_130_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_131_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _32_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _33_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _34_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _35_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _36_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */
  static Q_DIR _L4_137_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */
  static kcg_bool _L5_138_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _39_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _40_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _17_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_int */
  static kcg_int q_scale_int_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::_L4 */
  static kcg_bool _L4_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::_L2 */
  static kcg_int _L2_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_in */
  static kcg_int q_scale_in_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  static kcg_bool noname_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _1_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L3 */
  static kcg_bool _L3_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L1 */
  static Q_SCALE _L1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _2_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _3_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L2 */
  static kcg_bool _L2_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */
  static Q_SCALE _L1_14_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _5_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _6_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */
  static Q_SCALE _L1_17_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _8_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _9_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _10_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _11_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _12_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */
  static Q_SCALE _L2_113_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */
  static kcg_bool _L3_114_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _15_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _16_error_1;
  /* TM_conversions::C_Int_TrackTrainMessage::_L31 */
  static Q_SCALE _L31;
  /* TM_conversions::C_Int_TrackTrainMessage::_L30 */
  static Radio_TrackTrain_Header_T_TM_transitional _L30;
  /* TM_conversions::C_Int_TrackTrainMessage::_L29 */
  static T_TRAIN _L29;
  /* TM_conversions::C_Int_TrackTrainMessage::_L28 */
  static Radio_TrackTrain_Header_T_TM _L28;
  /* TM_conversions::C_Int_TrackTrainMessage::_L27 */
  static NID_LRBG _L27;
  /* TM_conversions::C_Int_TrackTrainMessage::_L26 */
  static D_REF _L26;
  /* TM_conversions::C_Int_TrackTrainMessage::_L11 */
  static kcg_int _L11;
  /* TM_conversions::C_Int_TrackTrainMessage::_L12 */
  static kcg_int _L12;
  /* TM_conversions::C_Int_TrackTrainMessage::_L13 */
  static kcg_int _L13;
  /* TM_conversions::C_Int_TrackTrainMessage::_L14 */
  static kcg_int _L14;
  /* TM_conversions::C_Int_TrackTrainMessage::_L15 */
  static kcg_int _L15;
  /* TM_conversions::C_Int_TrackTrainMessage::_L16 */
  static kcg_int _L16;
  /* TM_conversions::C_Int_TrackTrainMessage::_L17 */
  static kcg_int _L17;
  /* TM_conversions::C_Int_TrackTrainMessage::_L18 */
  static kcg_int _L18;
  /* TM_conversions::C_Int_TrackTrainMessage::_L19 */
  static kcg_int _L19;
  /* TM_conversions::C_Int_TrackTrainMessage::_L20 */
  static kcg_int _L20;
  /* TM_conversions::C_Int_TrackTrainMessage::_L21 */
  static kcg_int _L21;
  /* TM_conversions::C_Int_TrackTrainMessage::_L22 */
  static kcg_int _L22;
  /* TM_conversions::C_Int_TrackTrainMessage::_L23 */
  static kcg_int _L23;
  /* TM_conversions::C_Int_TrackTrainMessage::_L24 */
  static kcg_int _L24;
  /* TM_conversions::C_Int_TrackTrainMessage::_L25 */
  static kcg_int _L25;
  /* TM_conversions::C_Int_TrackTrainMessage::_L10 */
  static D_EMERGENCYSTOP _L10;
  /* TM_conversions::C_Int_TrackTrainMessage::_L9 */
  static T_TRAIN _L9;
  /* TM_conversions::C_Int_TrackTrainMessage::_L8 */
  static T_TRAIN _L8;
  /* TM_conversions::C_Int_TrackTrainMessage::_L7 */
  static M_VERSION _L7;
  /* TM_conversions::C_Int_TrackTrainMessage::_L6 */
  static Q_DIR _L6;
  /* TM_conversions::C_Int_TrackTrainMessage::_L5 */
  static NID_EM _L5;
  /* TM_conversions::C_Int_TrackTrainMessage::_L4 */
  static M_ACK _L4;
  /* TM_conversions::C_Int_TrackTrainMessage::_L3 */
  static NID_MESSAGE _L3;
  /* TM_conversions::C_Int_TrackTrainMessage::_L2 */
  static D_SR _L2;
  
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L28, Message_In);
  _L11 = _L28.radioDevice;
  _L12 = _L28.receivedSystemTime;
  _L13 = _L28.nid_message;
  _L3 = /* 1 */ CAST_Int_to_NID_MESSAGE_TM_conversions(_L13);
  _L14 = _L28.t_train;
  _L8 = /* 1 */ CAST_Int_to_T_TRAIN_TM_conversions(_L14);
  _L15 = _L28.m_ack;
  _L4 = /* 1 */ CAST_Int_to_M_ACK_TM_conversions(_L15);
  _L16 = _L28.nid_lrbg;
  _L27 = /* 1 */ CAST_Int_to_NID_LRBG_TM_conversions(_L16);
  _L17 = _L28.t_train_reference;
  _L29 = /* 2 */ CAST_Int_to_T_TRAIN_TM_conversions(_L17);
  _L18 = _L28.nid_em;
  _L5 = /* 1 */ CAST_Int_to_NID_EM_TM_conversions(_L18);
  _L19 = _L28.q_scale;
  q_scale_int_1 = _L19;
  _L2_1 = q_scale_int_1;
  q_scale_in_1 = _L2_1;
  IfBlock1_clock_1 = q_scale_in_1 == INT_Q_SCALE_10cm_TM_conversions;
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    _L2_113_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
    _15_q_scale_1 = _L2_113_IfBlock1;
    _17_q_scale_1 = _15_q_scale_1;
  }
  else {
    _10_else_clock_1_IfBlock1 = q_scale_in_1 == INT_Q_SCALE_1m_TM_conversions;
    /* 1_ck_anon_activ */ if (_10_else_clock_1_IfBlock1) {
      _L1_1_IfBlock1 = ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_1 = _L1_1_IfBlock1;
      _11_q_scale_1 = q_scale_1;
    }
    else {
      else_clock_1_IfBlock1 = q_scale_in_1 == INT_Q_SCALE_10m_TM_conversions;
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        _L1_17_IfBlock1 = ENUM_Q_SCALE_10m_TM_conversions;
        _8_q_scale_1 = _L1_17_IfBlock1;
        _3_q_scale_1 = _8_q_scale_1;
      }
      else {
        _L1_14_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
        _5_q_scale_1 = _L1_14_IfBlock1;
        _3_q_scale_1 = _5_q_scale_1;
      }
      _11_q_scale_1 = _3_q_scale_1;
    }
    _17_q_scale_1 = _11_q_scale_1;
  }
  _L31 = _17_q_scale_1;
  _L20 = _L28.d_sr;
  _L2 = /* 1 */ CAST_Int_to_D_SR_TM_conversions(_L20);
  _L21 = _L28.t_sh_rqst;
  _L9 = /* 3 */ CAST_Int_to_T_TRAIN_TM_conversions(_L21);
  _L22 = _L28.d_ref;
  _L26 = /* 1 */ CAST_Int_to_D_REF_TM_conversions(_L22);
  _L23 = _L28.q_dir;
  q_dir_int_1 = _L23;
  _L12_1 = q_dir_int_1;
  q_dir_in_1 = _L12_1;
  _19_IfBlock1_clock_1 = q_dir_in_1 == INT_Q_DIR_nomiinal_TM_conversions;
  /* 1_ck_IfBlock1 */ if (_19_IfBlock1_clock_1) {
    _L4_137_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _39_q_dir_1 = _L4_137_IfBlock1;
    _41_q_dir_1 = _39_q_dir_1;
  }
  else {
    _34_else_clock_1_IfBlock1 = q_dir_in_1 == INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (_34_else_clock_1_IfBlock1) {
      _L3_122_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = _L3_122_IfBlock1;
      _35_q_dir_1 = q_dir_1;
    }
    else {
      _25_else_clock_1_IfBlock1 = q_dir_in_1 == INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (_25_else_clock_1_IfBlock1) {
        _L2_130_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _32_q_dir_1 = _L2_130_IfBlock1;
        _24_q_dir_1 = _32_q_dir_1;
      }
      else {
        _L2_126_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _28_q_dir_1 = _L2_126_IfBlock1;
        _24_q_dir_1 = _28_q_dir_1;
      }
      _35_q_dir_1 = _24_q_dir_1;
    }
    _41_q_dir_1 = _35_q_dir_1;
  }
  _L6 = _41_q_dir_1;
  _L24 = _L28.d_emergencystop;
  _L10 = /* 1 */ CAST_Int_to_D_EMERGENCYSTOP_TM_conversions(_L24);
  _L25 = _L28.m_version;
  _L7 = /* 1 */ CAST_Int_to_M_VERSION_TM_conversions(_L25);
  _L30.radioDevice = _L11;
  _L30.receivedSystemTime = _L12;
  _L30.nid_message = _L3;
  _L30.t_train = _L8;
  _L30.m_ack = _L4;
  _L30.nid_lrbg = _L27;
  _L30.t_train_reference = _L29;
  _L30.nid_em = _L5;
  _L30.q_scale = _L31;
  _L30.d_sr = _L2;
  _L30.t_sh_rqst = _L9;
  _L30.d_ref = _L26;
  _L30.q_dir = _L6;
  _L30.d_emergencystop = _L10;
  _L30.m_version = _L7;
  kcg_copy_Radio_TrackTrain_Header_T_TM_transitional(Message_Out, &_L30);
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    _L3_114_IfBlock1 = kcg_false;
    _16_error_1 = _L3_114_IfBlock1;
    error_1 = _16_error_1;
  }
  else {
    /* 1_ck_anon_activ */ if (_10_else_clock_1_IfBlock1) {
      _L3_1_IfBlock1 = kcg_false;
      _1_error_1 = _L3_1_IfBlock1;
      _12_error_1 = _1_error_1;
    }
    else {
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        _L4_1_IfBlock1 = kcg_false;
        _9_error_1 = _L4_1_IfBlock1;
        _2_error_1 = _9_error_1;
      }
      else {
        _L2_1_IfBlock1 = kcg_true;
        _6_error_1 = _L2_1_IfBlock1;
        _2_error_1 = _6_error_1;
      }
      _12_error_1 = _2_error_1;
    }
    error_1 = _12_error_1;
  }
  _L4_1 = error_1;
  noname_1 = _L4_1;
  /* 1_ck_IfBlock1 */ if (_19_IfBlock1_clock_1) {
    _L5_138_IfBlock1 = kcg_false;
    _40_error_1 = _L5_138_IfBlock1;
    _18_error_1 = _40_error_1;
  }
  else {
    /* 1_ck_anon_activ */ if (_34_else_clock_1_IfBlock1) {
      _L5_1_IfBlock1 = kcg_false;
      _21_error_1 = _L5_1_IfBlock1;
      _36_error_1 = _21_error_1;
    }
    else {
      /* 1_ck_anon_activ */ if (_25_else_clock_1_IfBlock1) {
        _L4_131_IfBlock1 = kcg_false;
        _33_error_1 = _L4_131_IfBlock1;
        _23_error_1 = _33_error_1;
      }
      else {
        _L1_127_IfBlock1 = kcg_true;
        _29_error_1 = _L1_127_IfBlock1;
        _23_error_1 = _29_error_1;
      }
      _36_error_1 = _23_error_1;
    }
    _18_error_1 = _36_error_1;
  }
  _L13_1 = _18_error_1;
  _20_noname_1 = _L13_1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_Int_TrackTrainMessage_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

