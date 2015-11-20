/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P001_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_compr_P001 */
void C_compr_P001_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P001::P001_in */ P001_TrainTrack_int_TM_TrainToTrack *P001_in,
  /* TM_TrainToTrack::C_compr_P001::P001_out */ P001_TM_TrainToTrack *P001_out)
{
  /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet */
  static NID_PACKET nid_packet_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet_int */
  static kcg_int nid_packet_int_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L2 */
  static kcg_bool _L2_120;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L3 */
  static kcg_int _L3_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L4 */
  static kcg_bool _L4_121;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L5 */
  static kcg_int _L5_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L1 */
  static kcg_int _L1_122;
  static kcg_bool _23_noname_1;
  static kcg_bool _24_noname_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::l_packet */
  static L_PACKET l_packet_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::l_packet_int */
  static kcg_int l_packet_int_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L13 */
  static kcg_int _L13_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L12 */
  static kcg_int _L12_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L8 */
  static kcg_bool _L8_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L9 */
  static kcg_bool _L9_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L1 */
  static kcg_int _L1_1;
  static kcg_bool _18_noname_1;
  static kcg_bool _19_noname_1;
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
  /* TM_TrainToTrack::C_compr_P001::_L1 */
  static P001_TrainTrack_int_TM_TrainToTrack _L1;
  /* TM_TrainToTrack::C_compr_P001::_L16 */
  static kcg_int _L16;
  /* TM_TrainToTrack::C_compr_P001::_L15 */
  static kcg_int _L15;
  /* TM_TrainToTrack::C_compr_P001::_L14 */
  static kcg_int _L14;
  /* TM_TrainToTrack::C_compr_P001::_L13 */
  static kcg_int _L13;
  /* TM_TrainToTrack::C_compr_P001::_L12 */
  static kcg_int _L12;
  /* TM_TrainToTrack::C_compr_P001::_L11 */
  static kcg_int _L11;
  /* TM_TrainToTrack::C_compr_P001::_L10 */
  static kcg_int _L10;
  /* TM_TrainToTrack::C_compr_P001::_L9 */
  static kcg_int _L9;
  /* TM_TrainToTrack::C_compr_P001::_L8 */
  static kcg_int _L8;
  /* TM_TrainToTrack::C_compr_P001::_L7 */
  static kcg_int _L7;
  /* TM_TrainToTrack::C_compr_P001::_L6 */
  static kcg_int _L6;
  /* TM_TrainToTrack::C_compr_P001::_L5 */
  static kcg_int _L5;
  /* TM_TrainToTrack::C_compr_P001::_L4 */
  static kcg_int _L4;
  /* TM_TrainToTrack::C_compr_P001::_L3 */
  static kcg_int _L3;
  /* TM_TrainToTrack::C_compr_P001::_L2 */
  static kcg_int _L2;
  /* TM_TrainToTrack::C_compr_P001::_L69 */
  static NID_PACKET _L69;
  /* TM_TrainToTrack::C_compr_P001::_L70 */
  static L_PACKET _L70;
  /* TM_TrainToTrack::C_compr_P001::_L71 */
  static Q_SCALE _L71;
  /* TM_TrainToTrack::C_compr_P001::_L72 */
  static NID_LRBG _L72;
  /* TM_TrainToTrack::C_compr_P001::_L74 */
  static Q_DIRLRBG _L74;
  /* TM_TrainToTrack::C_compr_P001::_L75 */
  static Q_DLRBG _L75;
  /* TM_TrainToTrack::C_compr_P001::_L77 */
  static L_DOUBTOVER _L77;
  /* TM_TrainToTrack::C_compr_P001::_L78 */
  static L_DOUBTUNDER _L78;
  /* TM_TrainToTrack::C_compr_P001::_L79 */
  static Q_LENGTH _L79;
  /* TM_TrainToTrack::C_compr_P001::_L80 */
  static L_TRAININT _L80;
  /* TM_TrainToTrack::C_compr_P001::_L81 */
  static V_TRAIN _L81;
  /* TM_TrainToTrack::C_compr_P001::_L82 */
  static Q_DIRTRAIN _L82;
  /* TM_TrainToTrack::C_compr_P001::_L83 */
  static M_MODE _L83;
  /* TM_TrainToTrack::C_compr_P001::_L84 */
  static M_LEVEL _L84;
  /* TM_TrainToTrack::C_compr_P001::_L85 */
  static NID_NTC _L85;
  /* TM_TrainToTrack::C_compr_P001::_L86 */
  static P001_TM_TrainToTrack _L86;
  /* TM_TrainToTrack::C_compr_P001::_L88 */
  static kcg_bool _L88;
  /* TM_TrainToTrack::C_compr_P001::_L90 */
  static kcg_int _L90;
  /* TM_TrainToTrack::C_compr_P001::_L91 */
  static kcg_int _L91;
  /* TM_TrainToTrack::C_compr_P001::_L93 */
  static kcg_int _L93;
  /* TM_TrainToTrack::C_compr_P001::_L92 */
  static kcg_int _L92;
  /* TM_TrainToTrack::C_compr_P001::_L95 */
  static kcg_int _L95;
  /* TM_TrainToTrack::C_compr_P001::_L94 */
  static kcg_int _L94;
  /* TM_TrainToTrack::C_compr_P001::_L97 */
  static kcg_int _L97;
  /* TM_TrainToTrack::C_compr_P001::_L96 */
  static kcg_int _L96;
  /* TM_TrainToTrack::C_compr_P001::_L99 */
  static kcg_int _L99;
  /* TM_TrainToTrack::C_compr_P001::_L98 */
  static kcg_int _L98;
  /* TM_TrainToTrack::C_compr_P001::_L101 */
  static kcg_int _L101;
  /* TM_TrainToTrack::C_compr_P001::_L100 */
  static kcg_int _L100;
  /* TM_TrainToTrack::C_compr_P001::_L103 */
  static kcg_int _L103;
  /* TM_TrainToTrack::C_compr_P001::_L102 */
  static kcg_int _L102;
  /* TM_TrainToTrack::C_compr_P001::_L104 */
  static kcg_int _L104;
  /* TM_TrainToTrack::C_compr_P001::_L105 */
  static kcg_int _L105;
  /* TM_TrainToTrack::C_compr_P001::_L106 */
  static kcg_int _L106;
  /* TM_TrainToTrack::C_compr_P001::_L107 */
  static D_LRBG _L107;
  /* TM_TrainToTrack::C_compr_P001::_L108 */
  static kcg_int _L108;
  /* TM_TrainToTrack::C_compr_P001::_L109 */
  static kcg_int _L109;
  /* TM_TrainToTrack::C_compr_P001::_L110 */
  static NID_PRVLRBG _L110;
  
  kcg_copy_P001_TrainTrack_int_TM_TrainToTrack(&_L1, P001_in);
  _L2 = _L1[0];
  _L88 = /* 1 */ Decode_NID_PACKET_TM_TrainToTrack(_L2, 1);
  _L90 = /* 1 */ Filter_Variable_TM_TrainToTrack(_L88, _L2);
  nid_packet_int_1 = _L90;
  _L1_122 = nid_packet_int_1;
  nid_packet_1 = _L1_122;
  _L69 = nid_packet_1;
  _L3 = _L1[1];
  _L91 = /* 2 */ Filter_Variable_TM_TrainToTrack(_L88, _L3);
  l_packet_int_1 = _L91;
  _L1_1 = l_packet_int_1;
  l_packet_1 = _L1_1;
  _L70 = l_packet_1;
  _L4 = _L1[2];
  _L92 = /* 3 */ Filter_Variable_TM_TrainToTrack(_L88, _L4);
  q_scale_int_1 = _L92;
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
  _L71 = _17_q_scale_1;
  _L5 = _L1[3];
  _L93 = /* 4 */ Filter_Variable_TM_TrainToTrack(_L88, _L5);
  _L72 = /* 1 */ CAST_Int_to_NID_LRBG_TM_conversions(_L93);
  _L6 = _L1[4];
  _L109 = /* 17 */ Filter_Variable_TM_TrainToTrack(_L88, _L6);
  _L110 = /* 1 */ CAST_Int_to_NID_PRVLRBG_TM_conversions(_L109);
  _L7 = _L1[5];
  _L106 = /* 16 */ Filter_Variable_TM_TrainToTrack(_L88, _L7);
  _L107 = /* 1 */ CAST_Int_to_D_LRBG_TM_conversions(_L106);
  _L8 = _L1[6];
  _L95 = /* 6 */ Filter_Variable_TM_TrainToTrack(_L88, _L8);
  _L74 = /* 1 */ CAST_Int_to_Q_DIRLRBG_TM_conversions(_L95);
  _L9 = _L1[7];
  _L94 = /* 5 */ Filter_Variable_TM_TrainToTrack(_L88, _L9);
  _L75 = /* 1 */ CAST_Int_to_Q_DRLRBG_TM_conversions(_L94);
  _L10 = _L1[8];
  _L96 = /* 7 */ Filter_Variable_TM_TrainToTrack(_L88, _L10);
  _L77 = /* 1 */ CAST_Int_to_L_DOUBTOVER_TM_conversions(_L96);
  _L11 = _L1[9];
  _L97 = /* 8 */ Filter_Variable_TM_TrainToTrack(_L88, _L11);
  _L78 = /* 1 */ CAST_Int_to_L_DOUBTUNDER_TM_conversions(_L97);
  _L12 = _L1[10];
  _L98 = /* 9 */ Filter_Variable_TM_TrainToTrack(_L88, _L12);
  _L79 = /* 1 */ CAST_Int_to_Q_LENGTH_TM_conversions(_L98);
  _L13 = _L1[11];
  _L99 = /* 10 */ Filter_Variable_TM_TrainToTrack(_L88, _L13);
  _L80 = /* 1 */ CAST_Int_to_L_TRAININT_TM_conversions(_L99);
  _L14 = _L1[12];
  _L100 = /* 11 */ Filter_Variable_TM_TrainToTrack(_L88, _L14);
  _L81 = /* 1 */ CAST_Int_to_V_TRAIN_TM_conversions(_L100);
  _L15 = _L1[13];
  _L101 = /* 12 */ Filter_Variable_TM_TrainToTrack(_L88, _L15);
  _L82 = /* 1 */ CAST_Int_to_Q_DIRTRAIN_TM_conversions(_L101);
  _L16 = _L1[14];
  _L103 = /* 14 */ Filter_Variable_TM_TrainToTrack(_L88, _L16);
  _L83 = /* 1 */ CAST_Int_to_M_MODE_TM_conversions(_L103);
  _L105 = _L1[15];
  _L102 = /* 13 */ Filter_Variable_TM_TrainToTrack(_L88, _L105);
  _L84 = /* 1 */ CAST_Int_to_M_LEVEL_TM_conversions(_L102);
  _L108 = _L1[16];
  _L104 = /* 15 */ Filter_Variable_TM_TrainToTrack(_L88, _L108);
  _L85 = /* 1 */ CAST_Int_to_NID_NTC_TM_conversions(_L104);
  _L86.valid = _L88;
  _L86.nid_packet = _L69;
  _L86.l_packet = _L70;
  _L86.q_scale = _L71;
  _L86.nid_lrbg = _L72;
  _L86.nid_prvlrbg = _L110;
  _L86.d_lrbg = _L107;
  _L86.q_dirlrbg = _L74;
  _L86.q_dlrbg = _L75;
  _L86.l_doubtover = _L77;
  _L86.l_doubtunder = _L78;
  _L86.q_length = _L79;
  _L86.l_trainint = _L80;
  _L86.v_train = _L81;
  _L86.q_dirtrain = _L82;
  _L86.m_mode = _L83;
  _L86.m_level = _L84;
  _L86.nid_ntc = _L85;
  kcg_copy_P001_TM_TrainToTrack(P001_out, &_L86);
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
  _L13_1 = 8191;
  _L9_1 = _L1_1 > _L13_1;
  _19_noname_1 = _L9_1;
  _L12_1 = 0;
  _L8_1 = _L1_1 < _L12_1;
  _18_noname_1 = _L8_1;
  _L5_1 = 0;
  _L4_121 = _L1_122 < _L5_1;
  _24_noname_1 = _L4_121;
  _L3_1 = 256;
  _L2_120 = _L1_122 > _L3_1;
  _23_noname_1 = _L2_120;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_compr_P001_TM_TrainToTrack.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

