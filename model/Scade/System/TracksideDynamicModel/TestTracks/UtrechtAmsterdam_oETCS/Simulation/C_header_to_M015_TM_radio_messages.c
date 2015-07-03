/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_header_to_M015_TM_radio_messages.h"

void C_header_to_M015_reset_TM_radio_messages(
  outC_C_header_to_M015_TM_radio_messages *outC)
{
  /* 1 */ CAST_Int_to_M_ACK_reset_TM_conversions(&outC->_4_Context_1);
  /* 1 */ CAST_Int_to_NID_LRBG_reset_TM_conversions(&outC->_3_Context_1);
  /* 1 */ CAST_Int_to_NID_EM_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ CAST_Int_to_D_REF_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_D_EMERGENCYSTOP_reset_TM_conversions(&outC->Context_1);
}

/* TM_radio_messages::C_header_to_M015 */
void C_header_to_M015_TM_radio_messages(
  /* TM_radio_messages::C_header_to_M015::header_in */M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  outC_C_header_to_M015_TM_radio_messages *outC)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _22_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _21_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _20_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _19_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _18_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _17_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _16_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _15_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _14_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _13_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _12_error_1;
  kcg_bool _11_noname_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _10_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _9_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _8_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _7_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _6_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _5_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _4_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _3_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _2_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _1_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool error_1;
  kcg_bool noname_1;
  kcg_int noname;
  
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L1, header_in);
  outC->_L13 = outC->_L1.field8;
  outC->_L12 = outC->_L1.field7;
  outC->_L11 = outC->_L1.field6;
  outC->_L10 = outC->_L1.field5;
  outC->_L9 = outC->_L1.field4;
  outC->_L8 = outC->_L1.field3;
  outC->_L7 = outC->_L1.field2;
  outC->_L6 = outC->_L1.field1;
  outC->_L5 = outC->_L1.t_train;
  outC->_L4 = outC->_L1.l_message;
  outC->_L3 = outC->_L1.nid_message;
  /* 1 */
  CAST_Int_to_D_EMERGENCYSTOP_TM_conversions(outC->_L12, &outC->Context_1);
  outC->_L33 = outC->Context_1.d_emergencystop;
  outC->q_dir_int_1 = outC->_L11;
  outC->_L12_1 = outC->q_dir_int_1;
  outC->q_dir_in_1 = outC->_L12_1;
  outC->_11_IfBlock1_clock_1 = outC->q_dir_in_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  if (outC->_11_IfBlock1_clock_1) {
    outC->_L4_119_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _22_q_dir_1 = outC->_L4_119_IfBlock1;
    outC->q_dir_1 = _22_q_dir_1;
  }
  else {
    outC->_18_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    if (outC->_18_else_clock_1_IfBlock1) {
      outC->_L3_112_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = outC->_L3_112_IfBlock1;
      _20_q_dir_1 = q_dir_1;
    }
    else {
      outC->_13_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
        INT_Q_DIR_both_TM_conversions;
      if (outC->_13_else_clock_1_IfBlock1) {
        outC->_L2_116_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _17_q_dir_1 = outC->_L2_116_IfBlock1;
        _14_q_dir_1 = _17_q_dir_1;
      }
      else {
        outC->_L2_114_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _15_q_dir_1 = outC->_L2_114_IfBlock1;
        _14_q_dir_1 = _15_q_dir_1;
      }
      _20_q_dir_1 = _14_q_dir_1;
    }
    outC->q_dir_1 = _20_q_dir_1;
  }
  outC->_L32 = outC->q_dir_1;
  /* 1 */ CAST_Int_to_D_REF_TM_conversions(outC->_L10, &outC->_1_Context_1);
  outC->_L31 = outC->_1_Context_1.d_ref;
  outC->q_scale_int_1 = outC->_L9;
  outC->_L2_1 = outC->q_scale_int_1;
  outC->q_scale_in_1 = outC->_L2_1;
  outC->IfBlock1_clock_1 = outC->q_scale_in_1 ==
    INT_Q_SCALE_10cm_TM_conversions;
  if (outC->IfBlock1_clock_1) {
    outC->_L2_18_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
    _10_q_scale_1 = outC->_L2_18_IfBlock1;
    outC->q_scale_1 = _10_q_scale_1;
  }
  else {
    outC->_7_else_clock_1_IfBlock1 = outC->q_scale_in_1 ==
      INT_Q_SCALE_1m_TM_conversions;
    if (outC->_7_else_clock_1_IfBlock1) {
      outC->_L1_1_IfBlock1 = ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_1 = outC->_L1_1_IfBlock1;
      _8_q_scale_1 = q_scale_1;
    }
    else {
      outC->else_clock_1_IfBlock1 = outC->q_scale_in_1 ==
        INT_Q_SCALE_10m_TM_conversions;
      if (outC->else_clock_1_IfBlock1) {
        outC->_L1_16_IfBlock1 = ENUM_Q_SCALE_10m_TM_conversions;
        _5_q_scale_1 = outC->_L1_16_IfBlock1;
        _2_q_scale_1 = _5_q_scale_1;
      }
      else {
        outC->_L1_15_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
        _3_q_scale_1 = outC->_L1_15_IfBlock1;
        _2_q_scale_1 = _3_q_scale_1;
      }
      _8_q_scale_1 = _2_q_scale_1;
    }
    outC->q_scale_1 = _8_q_scale_1;
  }
  outC->_L30 = outC->q_scale_1;
  /* 1 */ CAST_Int_to_NID_EM_TM_conversions(outC->_L8, &outC->_2_Context_1);
  outC->_L29 = outC->_2_Context_1.nid_em;
  noname = outC->_L13;
  /* 1 */ CAST_Int_to_NID_LRBG_TM_conversions(outC->_L7, &outC->_3_Context_1);
  outC->_L28 = outC->_3_Context_1.NID_LRBG_out;
  /* 1 */ CAST_Int_to_M_ACK_TM_conversions(outC->_L6, &outC->_4_Context_1);
  outC->_L27 = outC->_4_Context_1.m_ack;
  outC->_L2 = outC->_L1.valid;
  outC->_L26.valid = outC->_L2;
  outC->_L26.nid_message = outC->_L3;
  outC->_L26.l_message = outC->_L4;
  outC->_L26.t_train = outC->_L5;
  outC->_L26.m_ack = outC->_L27;
  outC->_L26.nid_lrbg = outC->_L28;
  outC->_L26.nid_em = outC->_L29;
  outC->_L26.q_scale = outC->_L30;
  outC->_L26.d_ref = outC->_L31;
  outC->_L26.q_dir = outC->_L32;
  outC->_L26.d_emergencystop = outC->_L33;
  kcg_copy_M_015_T_TM_radio_messages(&outC->message_out, &outC->_L26);
  if (outC->IfBlock1_clock_1) {
    outC->_L3_19_IfBlock1 = kcg_false;
    _9_error_1 = outC->_L3_19_IfBlock1;
    outC->error_1 = _9_error_1;
  }
  else {
    if (outC->_7_else_clock_1_IfBlock1) {
      outC->_L3_1_IfBlock1 = kcg_false;
      error_1 = outC->_L3_1_IfBlock1;
      _7_error_1 = error_1;
    }
    else {
      if (outC->else_clock_1_IfBlock1) {
        outC->_L4_1_IfBlock1 = kcg_false;
        _6_error_1 = outC->_L4_1_IfBlock1;
        _1_error_1 = _6_error_1;
      }
      else {
        outC->_L2_1_IfBlock1 = kcg_true;
        _4_error_1 = outC->_L2_1_IfBlock1;
        _1_error_1 = _4_error_1;
      }
      _7_error_1 = _1_error_1;
    }
    outC->error_1 = _7_error_1;
  }
  outC->_L4_1 = outC->error_1;
  noname_1 = outC->_L4_1;
  if (outC->_11_IfBlock1_clock_1) {
    outC->_L5_120_IfBlock1 = kcg_false;
    _21_error_1 = outC->_L5_120_IfBlock1;
    outC->_10_error_1 = _21_error_1;
  }
  else {
    if (outC->_18_else_clock_1_IfBlock1) {
      outC->_L5_1_IfBlock1 = kcg_false;
      _12_error_1 = outC->_L5_1_IfBlock1;
      _19_error_1 = _12_error_1;
    }
    else {
      if (outC->_13_else_clock_1_IfBlock1) {
        outC->_L4_117_IfBlock1 = kcg_false;
        _18_error_1 = outC->_L4_117_IfBlock1;
        _13_error_1 = _18_error_1;
      }
      else {
        outC->_L1_115_IfBlock1 = kcg_true;
        _16_error_1 = outC->_L1_115_IfBlock1;
        _13_error_1 = _16_error_1;
      }
      _19_error_1 = _13_error_1;
    }
    outC->_10_error_1 = _19_error_1;
  }
  outC->_L13_1 = outC->_10_error_1;
  _11_noname_1 = outC->_L13_1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_header_to_M015_TM_radio_messages.c
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */

