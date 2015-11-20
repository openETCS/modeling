/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P005_compr_onboard */
void C_P005_compr_onboard_TM_conversions(
  /* TM_conversions::C_P005_compr_onboard::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P005_compr_onboard::Metadata_Element */ MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions::C_P005_compr_onboard::P005_onboard */ P005_OBU_T_TM *P005_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _55_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_int */
  static kcg_int q_scale_int_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::_L4 */
  static kcg_bool _L4_129;
  /* TM_conversions::CAST_Int_to_Q_SCALE::_L2 */
  static kcg_int _L2_130;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _31_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_in */
  static kcg_int q_scale_in_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool _32_IfBlock1_clock_1;
  static kcg_bool _33_noname_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _34_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L3 */
  static kcg_bool _L3_135_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L1 */
  static Q_SCALE _L1_136_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _37_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _38_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool _39_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L2 */
  static kcg_bool _L2_140_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */
  static Q_SCALE _L1_141_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _42_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _43_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */
  static Q_SCALE _L1_144_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_145_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _46_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _47_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _48_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _49_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _50_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */
  static Q_SCALE _L2_151_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */
  static kcg_bool _L3_152_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _53_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _54_error_1;
  /* TM_conversions::CAST_Int_to_N_ITER::n_iter */
  static N_ITER n_iter_1;
  /* TM_conversions::CAST_Int_to_N_ITER::n_iter_int */
  static kcg_int n_iter_int_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L9 */
  static kcg_int _L9_124;
  /* TM_conversions::CAST_Int_to_N_ITER::_L10 */
  static kcg_bool _L10_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L11 */
  static kcg_int _L11_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L12 */
  static kcg_bool _25__L12_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L1 */
  static kcg_int _L1_126;
  static kcg_bool _27_noname_1;
  static kcg_bool _28_noname_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::l_packet */
  static L_PACKET l_packet_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::l_packet_int */
  static kcg_int l_packet_int_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L13 */
  static kcg_int _19__L13_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L12 */
  static kcg_int _20__L12_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L8 */
  static kcg_bool _L8_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L9 */
  static kcg_bool _L9_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L1 */
  static kcg_int _L1_121;
  static kcg_bool _22_noname_1;
  static kcg_bool _23_noname_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _18_q_dir_1;
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
  static kcg_bool _2_noname_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _3_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */
  static kcg_bool _L5_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */
  static Q_DIR _L3_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _4_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _5_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */
  static Q_DIR _L2_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */
  static kcg_bool _L1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _6_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _7_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */
  static Q_DIR _L2_18_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _9_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _10_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _11_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _12_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _13_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */
  static Q_DIR _L4_114_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */
  static kcg_bool _L5_115_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _16_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _17_error_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet */
  static NID_PACKET nid_packet_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet_int */
  static kcg_int nid_packet_int_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L2 */
  static kcg_bool _L2_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L3 */
  static kcg_int _L3_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L4 */
  static kcg_bool _L4_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L5 */
  static kcg_int _L5_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L1 */
  static kcg_int _L1_1;
  static kcg_bool noname_1;
  static kcg_bool _1_noname_1;
  static MetadataElement_T_Common_Types_Pkg noname;
  /* TM_conversions::C_P005_compr_onboard::_L14 */
  static kcg_int _L14;
  /* TM_conversions::C_P005_compr_onboard::_L15 */
  static kcg_int _L15;
  /* TM_conversions::C_P005_compr_onboard::_L16 */
  static kcg_int _L16;
  /* TM_conversions::C_P005_compr_onboard::_L13 */
  static P005_sections_array_flat_T_TM _L13;
  /* TM_conversions::C_P005_compr_onboard::_L12 */
  static NID_PACKET _L12;
  /* TM_conversions::C_P005_compr_onboard::_L11 */
  static Q_DIR _L11;
  /* TM_conversions::C_P005_compr_onboard::_L10 */
  static P005_OBU_T_TM _L10;
  /* TM_conversions::C_P005_compr_onboard::_L9 */
  static CompressedPacketData_T_Common_Types_Pkg _L9;
  /* TM_conversions::C_P005_compr_onboard::_L8 */
  static L_PACKET _L8;
  /* TM_conversions::C_P005_compr_onboard::_L7 */
  static N_ITER _L7;
  /* TM_conversions::C_P005_compr_onboard::_L6 */
  static array_int_3 _L6;
  /* TM_conversions::C_P005_compr_onboard::_L5 */
  static P005_OBU_sectionlist_enum_T_TM _L5;
  /* TM_conversions::C_P005_compr_onboard::_L4 */
  static Q_SCALE _L4;
  /* TM_conversions::C_P005_compr_onboard::_L2 */
  static P044_other_data_TM_TrainToTrack _L2;
  /* TM_conversions::C_P005_compr_onboard::_L1 */
  static P044_other_data_TM_TrainToTrack _L1;
  /* TM_conversions::C_P005_compr_onboard::_L17 */
  static kcg_int _L17;
  /* TM_conversions::C_P005_compr_onboard::_L18 */
  static kcg_int _L18;
  /* TM_conversions::C_P005_compr_onboard::_L20 */
  static MetadataElement_T_Common_Types_Pkg _L20;
  /* TM_conversions::C_P005_compr_onboard::_L21 */
  static kcg_int _L21;
  /* TM_conversions::C_P005_compr_onboard::_L22 */
  static kcg_bool _L22;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L9, PacketData);
  kcg_copy_P044_other_data_TM_TrainToTrack(
    &_L1,
    (P044_other_data_TM_TrainToTrack *) &_L9[0]);
  kcg_copy_P044_other_data_TM_TrainToTrack(
    &_L2,
    (P044_other_data_TM_TrainToTrack *) &_L9[4]);
  kcg_copy_array_int_3(&_L6, (array_int_3 *) &_L9[1]);
  _L16 = _L6[2];
  q_scale_int_1 = _L16;
  _L2_130 = q_scale_int_1;
  q_scale_in_1 = _L2_130;
  _32_IfBlock1_clock_1 = q_scale_in_1 == INT_Q_SCALE_10cm_TM_conversions;
  /* 1_ck_IfBlock1 */ if (_32_IfBlock1_clock_1) {
    _L2_151_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
    _53_q_scale_1 = _L2_151_IfBlock1;
    _55_q_scale_1 = _53_q_scale_1;
  }
  else {
    _48_else_clock_1_IfBlock1 = q_scale_in_1 == INT_Q_SCALE_1m_TM_conversions;
    /* 1_ck_anon_activ */ if (_48_else_clock_1_IfBlock1) {
      _L1_136_IfBlock1 = ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_1 = _L1_136_IfBlock1;
      _49_q_scale_1 = q_scale_1;
    }
    else {
      _39_else_clock_1_IfBlock1 = q_scale_in_1 ==
        INT_Q_SCALE_10m_TM_conversions;
      /* 1_ck_anon_activ */ if (_39_else_clock_1_IfBlock1) {
        _L1_144_IfBlock1 = ENUM_Q_SCALE_10m_TM_conversions;
        _46_q_scale_1 = _L1_144_IfBlock1;
        _38_q_scale_1 = _46_q_scale_1;
      }
      else {
        _L1_141_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
        _42_q_scale_1 = _L1_141_IfBlock1;
        _38_q_scale_1 = _42_q_scale_1;
      }
      _49_q_scale_1 = _38_q_scale_1;
    }
    _55_q_scale_1 = _49_q_scale_1;
  }
  _L4 = _55_q_scale_1;
  _L18 = _L1[0];
  nid_packet_int_1 = _L18;
  _L1_1 = nid_packet_int_1;
  nid_packet_1 = _L1_1;
  _L12 = nid_packet_1;
  _L21 = 5;
  _L22 = _L12 == _L21;
  _L17 = _L2[0];
  n_iter_int_1 = _L17;
  _L1_126 = n_iter_int_1;
  n_iter_1 = _L1_126;
  _L7 = n_iter_1;
  kcg_copy_P005_sections_array_flat_T_TM(
    &_L13,
    (P005_sections_array_flat_T_TM *) &_L9[5]);
  /* 1 */ C_P005_unflatten_sections_TM_lib_internal(_L22, _L7, &_L13, &_L5);
  _L15 = _L6[1];
  l_packet_int_1 = _L15;
  _L1_121 = l_packet_int_1;
  l_packet_1 = _L1_121;
  _L8 = l_packet_1;
  _L14 = _L6[0];
  q_dir_int_1 = _L14;
  _L12_1 = q_dir_int_1;
  q_dir_in_1 = _L12_1;
  IfBlock1_clock_1 = q_dir_in_1 == INT_Q_DIR_nomiinal_TM_conversions;
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    _L4_114_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _16_q_dir_1 = _L4_114_IfBlock1;
    _18_q_dir_1 = _16_q_dir_1;
  }
  else {
    _11_else_clock_1_IfBlock1 = q_dir_in_1 == INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (_11_else_clock_1_IfBlock1) {
      _L3_1_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = _L3_1_IfBlock1;
      _12_q_dir_1 = q_dir_1;
    }
    else {
      else_clock_1_IfBlock1 = q_dir_in_1 == INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        _L2_18_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _9_q_dir_1 = _L2_18_IfBlock1;
        _5_q_dir_1 = _9_q_dir_1;
      }
      else {
        _L2_1_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _6_q_dir_1 = _L2_1_IfBlock1;
        _5_q_dir_1 = _6_q_dir_1;
      }
      _12_q_dir_1 = _5_q_dir_1;
    }
    _18_q_dir_1 = _12_q_dir_1;
  }
  _L11 = _18_q_dir_1;
  _L10.valid = _L22;
  _L10.q_dir = _L11;
  _L10.l_packet = _L8;
  _L10.q_scale = _L4;
  _L10.n_iter = _L7;
  kcg_copy_P005_OBU_sectionlist_enum_T_TM(&_L10.sections, &_L5);
  kcg_copy_P005_OBU_T_TM(P005_onboard, &_L10);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &_L20);
  _L5_1 = 0;
  _L4_1 = _L1_1 < _L5_1;
  _1_noname_1 = _L4_1;
  _L3_1 = 256;
  _L2_1 = _L1_1 > _L3_1;
  noname_1 = _L2_1;
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    _L5_115_IfBlock1 = kcg_false;
    _17_error_1 = _L5_115_IfBlock1;
    error_1 = _17_error_1;
  }
  else {
    /* 1_ck_anon_activ */ if (_11_else_clock_1_IfBlock1) {
      _L5_1_IfBlock1 = kcg_false;
      _3_error_1 = _L5_1_IfBlock1;
      _13_error_1 = _3_error_1;
    }
    else {
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        _L4_1_IfBlock1 = kcg_false;
        _10_error_1 = _L4_1_IfBlock1;
        _4_error_1 = _10_error_1;
      }
      else {
        _L1_1_IfBlock1 = kcg_true;
        _7_error_1 = _L1_1_IfBlock1;
        _4_error_1 = _7_error_1;
      }
      _13_error_1 = _4_error_1;
    }
    error_1 = _13_error_1;
  }
  _L13_1 = error_1;
  _2_noname_1 = _L13_1;
  _19__L13_1 = 8191;
  _L9_1 = _L1_121 > _19__L13_1;
  _23_noname_1 = _L9_1;
  _20__L12_1 = 0;
  _L8_1 = _L1_121 < _20__L12_1;
  _22_noname_1 = _L8_1;
  _L9_124 = 31;
  _L11_1 = 0;
  _L10_1 = _L1_126 < _L11_1;
  _25__L12_1 = _L1_126 > _L9_124;
  _28_noname_1 = _25__L12_1;
  _27_noname_1 = _L10_1;
  /* 1_ck_IfBlock1 */ if (_32_IfBlock1_clock_1) {
    _L3_152_IfBlock1 = kcg_false;
    _54_error_1 = _L3_152_IfBlock1;
    _31_error_1 = _54_error_1;
  }
  else {
    /* 1_ck_anon_activ */ if (_48_else_clock_1_IfBlock1) {
      _L3_135_IfBlock1 = kcg_false;
      _34_error_1 = _L3_135_IfBlock1;
      _50_error_1 = _34_error_1;
    }
    else {
      /* 1_ck_anon_activ */ if (_39_else_clock_1_IfBlock1) {
        _L4_145_IfBlock1 = kcg_false;
        _47_error_1 = _L4_145_IfBlock1;
        _37_error_1 = _47_error_1;
      }
      else {
        _L2_140_IfBlock1 = kcg_true;
        _43_error_1 = _L2_140_IfBlock1;
        _37_error_1 = _43_error_1;
      }
      _50_error_1 = _37_error_1;
    }
    _31_error_1 = _50_error_1;
  }
  _L4_129 = _31_error_1;
  _33_noname_1 = _L4_129;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P005_compr_onboard_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

