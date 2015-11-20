/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P046_compr_onboard */
void C_P046_compr_onboard_TM_conversions(
  /* TM_conversions::C_P046_compr_onboard::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P046_compr_onboard::Metadata_Element */ MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions::C_P046_compr_onboard::P046_onboard */ P046_OBU_T_TM *P046_onboard)
{
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
  static kcg_int _23_noname;
  /* TM_conversions::C_P046_compr_onboard::_L13 */
  static P046_sections_array_flat_T_TM _L13;
  /* TM_conversions::C_P046_compr_onboard::_L12 */
  static NID_PACKET _L12;
  /* TM_conversions::C_P046_compr_onboard::_L11 */
  static Q_DIR _L11;
  /* TM_conversions::C_P046_compr_onboard::_L10 */
  static P046_OBU_T_TM _L10;
  /* TM_conversions::C_P046_compr_onboard::_L9 */
  static CompressedPacketData_T_Common_Types_Pkg _L9;
  /* TM_conversions::C_P046_compr_onboard::_L7 */
  static N_ITER _L7;
  /* TM_conversions::C_P046_compr_onboard::_L5 */
  static P046_OBU_sectionlist_enum_T_TM _L5;
  /* TM_conversions::C_P046_compr_onboard::_L20 */
  static MetadataElement_T_Common_Types_Pkg _L20;
  /* TM_conversions::C_P046_compr_onboard::_L21 */
  static kcg_int _L21;
  /* TM_conversions::C_P046_compr_onboard::_L22 */
  static kcg_bool _L22;
  /* TM_conversions::C_P046_compr_onboard::_L29 */
  static array_int_4 _L29;
  /* TM_conversions::C_P046_compr_onboard::_L37 */
  static kcg_int _L37;
  /* TM_conversions::C_P046_compr_onboard::_L36 */
  static kcg_int _L36;
  /* TM_conversions::C_P046_compr_onboard::_L35 */
  static kcg_int _L35;
  /* TM_conversions::C_P046_compr_onboard::_L34 */
  static kcg_int _L34;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L9, PacketData);
  kcg_copy_array_int_4(&_L29, (array_int_4 *) &_L9[0]);
  _L34 = _L29[0];
  nid_packet_int_1 = _L34;
  _L1_1 = nid_packet_int_1;
  nid_packet_1 = _L1_1;
  _L12 = nid_packet_1;
  _L21 = 46;
  _L22 = _L12 == _L21;
  _L37 = _L29[3];
  n_iter_int_1 = _L37;
  _L1_120 = n_iter_int_1;
  n_iter_1 = _L1_120;
  _L7 = n_iter_1;
  kcg_copy_P046_sections_array_flat_T_TM(
    &_L13,
    (P046_sections_array_flat_T_TM *) &_L9[4]);
  /* 1 */ C_P046_unflatten_sections_TM_lib_internal(_L22, _L7, &_L13, &_L5);
  _L35 = _L29[1];
  q_dir_int_1 = _L35;
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
  _L10.n_iter = _L7;
  kcg_copy_P046_OBU_sectionlist_enum_T_TM(&_L10.sections, &_L5);
  kcg_copy_P046_OBU_T_TM(P046_onboard, &_L10);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &_L20);
  _L36 = _L29[2];
  _23_noname = _L36;
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
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P046_compr_onboard_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

