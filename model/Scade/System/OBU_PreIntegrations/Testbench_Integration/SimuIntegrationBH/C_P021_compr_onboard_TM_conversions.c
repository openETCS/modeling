/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P021_compr_onboard */
void C_P021_compr_onboard_TM_conversions(
  /* TM_conversions::C_P021_compr_onboard::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P021_compr_onboard::Metadata_Element */ MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions::C_P021_compr_onboard::P021_onboard */ P021_OBU_T_TM *P021_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _49_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_int */
  static kcg_int q_scale_int_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::_L4 */
  static kcg_bool _L4_123;
  /* TM_conversions::CAST_Int_to_Q_SCALE::_L2 */
  static kcg_int _L2_124;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _25_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_in */
  static kcg_int q_scale_in_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool _26_IfBlock1_clock_1;
  static kcg_bool _27_noname_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _28_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L3 */
  static kcg_bool _L3_129_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L1 */
  static Q_SCALE _L1_130_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _31_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _32_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool _33_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L2 */
  static kcg_bool _L2_134_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */
  static Q_SCALE _L1_135_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _36_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _37_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */
  static Q_SCALE _L1_138_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_139_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _40_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _41_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _42_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _43_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _44_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */
  static Q_SCALE _L2_145_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */
  static kcg_bool _L3_146_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _47_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _48_error_1;
  /* TM_conversions::CAST_Int_to_N_ITER::n_iter */
  static N_ITER n_iter_1;
  /* TM_conversions::CAST_Int_to_N_ITER::n_iter_int */
  static kcg_int n_iter_int_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L9 */
  static kcg_int _L9_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L10 */
  static kcg_bool _L10_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L11 */
  static kcg_int _L11_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L12 */
  static kcg_bool _19__L12_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L1 */
  static kcg_int _L1_120;
  static kcg_bool _21_noname_1;
  static kcg_bool _22_noname_1;
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
  static kcg_int _50_noname;
  /* TM_conversions::C_P021_compr_onboard::_L12 */
  static NID_PACKET _L12;
  /* TM_conversions::C_P021_compr_onboard::_L11 */
  static Q_DIR _L11;
  /* TM_conversions::C_P021_compr_onboard::_L10 */
  static P021_OBU_T_TM _L10;
  /* TM_conversions::C_P021_compr_onboard::_L9 */
  static CompressedPacketData_T_Common_Types_Pkg _L9;
  /* TM_conversions::C_P021_compr_onboard::_L7 */
  static N_ITER _L7;
  /* TM_conversions::C_P021_compr_onboard::_L5 */
  static P021_OBU_sectionlist_enum_T_TM _L5;
  /* TM_conversions::C_P021_compr_onboard::_L4 */
  static Q_SCALE _L4;
  /* TM_conversions::C_P021_compr_onboard::_L1 */
  static array_int_5 _L1;
  /* TM_conversions::C_P021_compr_onboard::_L20 */
  static MetadataElement_T_Common_Types_Pkg _L20;
  /* TM_conversions::C_P021_compr_onboard::_L21 */
  static kcg_int _L21;
  /* TM_conversions::C_P021_compr_onboard::_L22 */
  static kcg_bool _L22;
  /* TM_conversions::C_P021_compr_onboard::_L30 */
  static kcg_int _L30;
  /* TM_conversions::C_P021_compr_onboard::_L29 */
  static kcg_int _L29;
  /* TM_conversions::C_P021_compr_onboard::_L28 */
  static kcg_int _L28;
  /* TM_conversions::C_P021_compr_onboard::_L27 */
  static kcg_int _L27;
  /* TM_conversions::C_P021_compr_onboard::_L31 */
  static kcg_int _L31;
  /* TM_conversions::C_P021_compr_onboard::_L32 */
  static array_int_99 _L32;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L9, PacketData);
  kcg_copy_array_int_5(&_L1, (array_int_5 *) &_L9[0]);
  _L30 = _L1[3];
  q_scale_int_1 = _L30;
  _L2_124 = q_scale_int_1;
  q_scale_in_1 = _L2_124;
  _26_IfBlock1_clock_1 = q_scale_in_1 == INT_Q_SCALE_10cm_TM_conversions;
  /* 1_ck_IfBlock1 */ if (_26_IfBlock1_clock_1) {
    _L2_145_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
    _47_q_scale_1 = _L2_145_IfBlock1;
    _49_q_scale_1 = _47_q_scale_1;
  }
  else {
    _42_else_clock_1_IfBlock1 = q_scale_in_1 == INT_Q_SCALE_1m_TM_conversions;
    /* 1_ck_anon_activ */ if (_42_else_clock_1_IfBlock1) {
      _L1_130_IfBlock1 = ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_1 = _L1_130_IfBlock1;
      _43_q_scale_1 = q_scale_1;
    }
    else {
      _33_else_clock_1_IfBlock1 = q_scale_in_1 ==
        INT_Q_SCALE_10m_TM_conversions;
      /* 1_ck_anon_activ */ if (_33_else_clock_1_IfBlock1) {
        _L1_138_IfBlock1 = ENUM_Q_SCALE_10m_TM_conversions;
        _40_q_scale_1 = _L1_138_IfBlock1;
        _32_q_scale_1 = _40_q_scale_1;
      }
      else {
        _L1_135_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
        _36_q_scale_1 = _L1_135_IfBlock1;
        _32_q_scale_1 = _36_q_scale_1;
      }
      _43_q_scale_1 = _32_q_scale_1;
    }
    _49_q_scale_1 = _43_q_scale_1;
  }
  _L4 = _49_q_scale_1;
  _L27 = _L1[0];
  nid_packet_int_1 = _L27;
  _L1_1 = nid_packet_int_1;
  nid_packet_1 = _L1_1;
  _L12 = nid_packet_1;
  _L21 = 21;
  _L22 = _L12 == _L21;
  _L31 = _L1[4];
  n_iter_int_1 = _L31;
  _L1_120 = n_iter_int_1;
  n_iter_1 = _L1_120;
  _L7 = n_iter_1;
  kcg_copy_array_int_99(&_L32, (array_int_99 *) &_L9[5]);
  /* 1 */ C_P021_unflatten_sections_TM_lib_internal(_L22, _L7, &_L32, &_L5);
  _L28 = _L1[1];
  q_dir_int_1 = _L28;
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
  _L10.q_scale = _L4;
  _L10.n_iter = _L7;
  kcg_copy_P021_OBU_sectionlist_enum_T_TM(&_L10.sections, &_L5);
  kcg_copy_P021_OBU_T_TM(P021_onboard, &_L10);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &_L20);
  _L29 = _L1[2];
  _50_noname = _L29;
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
  _L9_1 = 31;
  _L11_1 = 0;
  _L10_1 = _L1_120 < _L11_1;
  _19__L12_1 = _L1_120 > _L9_1;
  _22_noname_1 = _19__L12_1;
  _21_noname_1 = _L10_1;
  /* 1_ck_IfBlock1 */ if (_26_IfBlock1_clock_1) {
    _L3_146_IfBlock1 = kcg_false;
    _48_error_1 = _L3_146_IfBlock1;
    _25_error_1 = _48_error_1;
  }
  else {
    /* 1_ck_anon_activ */ if (_42_else_clock_1_IfBlock1) {
      _L3_129_IfBlock1 = kcg_false;
      _28_error_1 = _L3_129_IfBlock1;
      _44_error_1 = _28_error_1;
    }
    else {
      /* 1_ck_anon_activ */ if (_33_else_clock_1_IfBlock1) {
        _L4_139_IfBlock1 = kcg_false;
        _41_error_1 = _L4_139_IfBlock1;
        _31_error_1 = _41_error_1;
      }
      else {
        _L2_134_IfBlock1 = kcg_true;
        _37_error_1 = _L2_134_IfBlock1;
        _31_error_1 = _37_error_1;
      }
      _44_error_1 = _31_error_1;
    }
    _25_error_1 = _44_error_1;
  }
  _L4_123 = _25_error_1;
  _27_noname_1 = _L4_123;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P021_compr_onboard_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

