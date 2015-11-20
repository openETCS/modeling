/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_header_to_M002_TM_RBC_conversions.h"

/* TM_RBC_conversions::C_header_to_M002 */
void C_header_to_M002_TM_RBC_conversions(
  /* TM_RBC_conversions::C_header_to_M002::header_in */ M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  /* TM_RBC_conversions::C_header_to_M002::message_out */ M_002_T_TM_radio_messages *message_out)
{
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
  static kcg_int noname;
  static kcg_int _18_noname;
  static kcg_int _19_noname;
  static kcg_int _20_noname;
  /* TM_RBC_conversions::C_header_to_M002::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L1;
  /* TM_RBC_conversions::C_header_to_M002::_L13 */
  static kcg_int _L13;
  /* TM_RBC_conversions::C_header_to_M002::_L12 */
  static kcg_int _L12;
  /* TM_RBC_conversions::C_header_to_M002::_L11 */
  static kcg_int _L11;
  /* TM_RBC_conversions::C_header_to_M002::_L10 */
  static kcg_int _L10;
  /* TM_RBC_conversions::C_header_to_M002::_L9 */
  static kcg_int _L9;
  /* TM_RBC_conversions::C_header_to_M002::_L8 */
  static kcg_int _L8;
  /* TM_RBC_conversions::C_header_to_M002::_L7 */
  static kcg_int _L7;
  /* TM_RBC_conversions::C_header_to_M002::_L6 */
  static kcg_int _L6;
  /* TM_RBC_conversions::C_header_to_M002::_L5 */
  static kcg_int _L5;
  /* TM_RBC_conversions::C_header_to_M002::_L4 */
  static kcg_int _L4;
  /* TM_RBC_conversions::C_header_to_M002::_L3 */
  static kcg_int _L3;
  /* TM_RBC_conversions::C_header_to_M002::_L2 */
  static kcg_bool _L2;
  /* TM_RBC_conversions::C_header_to_M002::_L26 */
  static M_002_T_TM_radio_messages _L26;
  /* TM_RBC_conversions::C_header_to_M002::_L27 */
  static M_ACK _L27;
  /* TM_RBC_conversions::C_header_to_M002::_L28 */
  static NID_LRBG _L28;
  /* TM_RBC_conversions::C_header_to_M002::_L29 */
  static Q_SCALE _L29;
  /* TM_RBC_conversions::C_header_to_M002::_L30 */
  static D_SR _L30;
  /* TM_RBC_conversions::C_header_to_M002::_L32 */
  static NID_MESSAGE _L32;
  /* TM_RBC_conversions::C_header_to_M002::_L33 */
  static L_MESSAGE _L33;
  /* TM_RBC_conversions::C_header_to_M002::_L34 */
  static T_TRAIN _L34;
  
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
  _L32 = /* 1 */ CAST_Int_to_NID_MESSAGE_TM_conversions(_L3);
  _L33 = /* 1 */ CAST_Int_to_L_MESSAGE_TM_conversions(_L4);
  _L34 = /* 1 */ CAST_Int_to_T_TRAIN_TM_conversions(_L5);
  _L27 = /* 1 */ CAST_Int_to_M_ACK_TM_conversions(_L6);
  _L28 = /* 1 */ CAST_Int_to_NID_LRBG_TM_conversions(_L7);
  q_scale_int_1 = _L8;
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
  _L29 = _17_q_scale_1;
  _L30 = /* 1 */ CAST_Int_to_D_SR_TM_conversions(_L9);
  _L26.valid = _L2;
  _L26.nid_message = _L32;
  _L26.l_message = _L33;
  _L26.t_train = _L34;
  _L26.m_ack = _L27;
  _L26.nid_lrbg = _L28;
  _L26.q_scale = _L29;
  _L26.d_sr = _L30;
  kcg_copy_M_002_T_TM_radio_messages(message_out, &_L26);
  noname = _L10;
  _18_noname = _L11;
  _19_noname = _L12;
  _20_noname = _L13;
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
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_header_to_M002_TM_RBC_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

