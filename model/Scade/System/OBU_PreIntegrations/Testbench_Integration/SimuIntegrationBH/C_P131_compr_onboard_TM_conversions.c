/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P131_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P131_compr_onboard */
void C_P131_compr_onboard_TM_conversions(
  /* TM_conversions::C_P131_compr_onboard::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P131_compr_onboard::Metadata_Element */ MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions::C_P131_compr_onboard::P131_onboard */ P131_OBU_T_TM *P131_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _45_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */
  static kcg_int q_dir_int_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */
  static kcg_int _L12_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */
  static kcg_bool _L13_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */
  static kcg_int q_dir_in_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _22_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool _23_IfBlock1_clock_1;
  static kcg_bool _24_noname_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _25_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */
  static kcg_bool _L5_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */
  static Q_DIR _L3_126_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _27_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _28_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool _29_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */
  static Q_DIR _L2_130_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */
  static kcg_bool _L1_131_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _32_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _33_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */
  static Q_DIR _L2_134_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_135_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _36_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _37_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _38_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _39_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _40_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */
  static Q_DIR _L4_141_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */
  static kcg_bool _L5_142_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _43_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _44_error_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet */
  static NID_PACKET nid_packet_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet_int */
  static kcg_int nid_packet_int_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L2 */
  static kcg_bool _L2_118;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L3 */
  static kcg_int _L3_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L4 */
  static kcg_bool _L4_119;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L5 */
  static kcg_int _L5_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L1 */
  static kcg_int _L1_1;
  static kcg_bool _20_noname_1;
  static kcg_bool _21_noname_1;
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
  static MetadataElement_T_Common_Types_Pkg noname;
  static kcg_int _46_noname;
  /* TM_conversions::C_P131_compr_onboard::_L12 */
  static NID_PACKET _L12;
  /* TM_conversions::C_P131_compr_onboard::_L11 */
  static Q_DIR _L11;
  /* TM_conversions::C_P131_compr_onboard::_L10 */
  static P131_OBU_T_TM _L10;
  /* TM_conversions::C_P131_compr_onboard::_L9 */
  static CompressedPacketData_T_Common_Types_Pkg _L9;
  /* TM_conversions::C_P131_compr_onboard::_L4 */
  static D_RBCTR _L4;
  /* TM_conversions::C_P131_compr_onboard::_L20 */
  static MetadataElement_T_Common_Types_Pkg _L20;
  /* TM_conversions::C_P131_compr_onboard::_L21 */
  static kcg_int _L21;
  /* TM_conversions::C_P131_compr_onboard::_L22 */
  static kcg_bool _L22;
  /* TM_conversions::C_P131_compr_onboard::_L27 */
  static NID_C _L27;
  /* TM_conversions::C_P131_compr_onboard::_L29 */
  static NID_RBC _L29;
  /* TM_conversions::C_P131_compr_onboard::_L31 */
  static NID_RADIO _L31;
  /* TM_conversions::C_P131_compr_onboard::_L33 */
  static Q_SLEEPSESSION _L33;
  /* TM_conversions::C_P131_compr_onboard::_L34 */
  static array_int_9 _L34;
  /* TM_conversions::C_P131_compr_onboard::_L43 */
  static kcg_int _L43;
  /* TM_conversions::C_P131_compr_onboard::_L42 */
  static kcg_int _L42;
  /* TM_conversions::C_P131_compr_onboard::_L41 */
  static kcg_int _L41;
  /* TM_conversions::C_P131_compr_onboard::_L40 */
  static kcg_int _L40;
  /* TM_conversions::C_P131_compr_onboard::_L39 */
  static kcg_int _L39;
  /* TM_conversions::C_P131_compr_onboard::_L38 */
  static kcg_int _L38;
  /* TM_conversions::C_P131_compr_onboard::_L37 */
  static kcg_int _L37;
  /* TM_conversions::C_P131_compr_onboard::_L36 */
  static kcg_int _L36;
  /* TM_conversions::C_P131_compr_onboard::_L35 */
  static kcg_int _L35;
  /* TM_conversions::C_P131_compr_onboard::_L44 */
  static Q_SCALE _L44;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L9, PacketData);
  kcg_copy_array_int_9(&_L34, (array_int_9 *) &_L9[0]);
  _L39 = _L34[4];
  _L4 = /* 1 */ CAST_Int_to_D_RBCTR_TM_conversions(_L39);
  _L43 = _L34[0];
  nid_packet_int_1 = _L43;
  _L1_1 = nid_packet_int_1;
  nid_packet_1 = _L1_1;
  _L12 = nid_packet_1;
  _L21 = 131;
  _L22 = _L12 == _L21;
  _L42 = _L34[1];
  q_dir_int_1 = _L42;
  _L12_1 = q_dir_int_1;
  q_dir_in_1 = _L12_1;
  _23_IfBlock1_clock_1 = q_dir_in_1 == INT_Q_DIR_nomiinal_TM_conversions;
  /* 1_ck_IfBlock1 */ if (_23_IfBlock1_clock_1) {
    _L4_141_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _43_q_dir_1 = _L4_141_IfBlock1;
    _45_q_dir_1 = _43_q_dir_1;
  }
  else {
    _38_else_clock_1_IfBlock1 = q_dir_in_1 == INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (_38_else_clock_1_IfBlock1) {
      _L3_126_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = _L3_126_IfBlock1;
      _39_q_dir_1 = q_dir_1;
    }
    else {
      _29_else_clock_1_IfBlock1 = q_dir_in_1 == INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (_29_else_clock_1_IfBlock1) {
        _L2_134_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _36_q_dir_1 = _L2_134_IfBlock1;
        _28_q_dir_1 = _36_q_dir_1;
      }
      else {
        _L2_130_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _32_q_dir_1 = _L2_130_IfBlock1;
        _28_q_dir_1 = _32_q_dir_1;
      }
      _39_q_dir_1 = _28_q_dir_1;
    }
    _45_q_dir_1 = _39_q_dir_1;
  }
  _L11 = _45_q_dir_1;
  _L40 = _L34[3];
  q_scale_int_1 = _L40;
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
  _L44 = _17_q_scale_1;
  _L38 = _L34[5];
  _L27 = /* 1 */ CAST_Int_to_NID_C_TM_conversions(_L38);
  _L37 = _L34[6];
  _L29 = /* 1 */ CAST_Int_to_NID_RBC_TM_conversions(_L37);
  _L36 = _L34[7];
  _L31 = /* 1 */ CAST_Int_to_NID_RADIO_TM_conversions(_L36);
  _L35 = _L34[8];
  _L33 = /* 1 */ CAST_Int_to_Q_SLEEPSESSION_TM_conversions(_L35);
  _L10.valid = _L22;
  _L10.q_dir = _L11;
  _L10.q_scale = _L44;
  _L10.d_rbctr = _L4;
  _L10.nid_c = _L27;
  _L10.nid_rbc = _L29;
  _L10.nid_radio = _L31;
  _L10.q_sleepsession = _L33;
  kcg_copy_P131_OBU_T_TM(P131_onboard, &_L10);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &_L20);
  _L41 = _L34[2];
  _46_noname = _L41;
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
  _L5_1 = 0;
  _L4_119 = _L1_1 < _L5_1;
  _21_noname_1 = _L4_119;
  _L3_1 = 256;
  _L2_118 = _L1_1 > _L3_1;
  _20_noname_1 = _L2_118;
  /* 1_ck_IfBlock1 */ if (_23_IfBlock1_clock_1) {
    _L5_142_IfBlock1 = kcg_false;
    _44_error_1 = _L5_142_IfBlock1;
    _22_error_1 = _44_error_1;
  }
  else {
    /* 1_ck_anon_activ */ if (_38_else_clock_1_IfBlock1) {
      _L5_1_IfBlock1 = kcg_false;
      _25_error_1 = _L5_1_IfBlock1;
      _40_error_1 = _25_error_1;
    }
    else {
      /* 1_ck_anon_activ */ if (_29_else_clock_1_IfBlock1) {
        _L4_135_IfBlock1 = kcg_false;
        _37_error_1 = _L4_135_IfBlock1;
        _27_error_1 = _37_error_1;
      }
      else {
        _L1_131_IfBlock1 = kcg_true;
        _33_error_1 = _L1_131_IfBlock1;
        _27_error_1 = _33_error_1;
      }
      _40_error_1 = _27_error_1;
    }
    _22_error_1 = _40_error_1;
  }
  _L13_1 = _22_error_1;
  _24_noname_1 = _L13_1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P131_compr_onboard_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

