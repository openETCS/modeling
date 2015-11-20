/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P027V1_TM_baseline2.h"

/* TM_baseline2::Read_P027V1 */
void Read_P027V1_TM_baseline2(
  /* TM_baseline2::Read_P027V1::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_baseline2::Read_P027V1::received */ kcg_bool *received,
  /* TM_baseline2::Read_P027V1::P027V1_out */ P027V1_OBU_T_TM_baseline2 *P027V1_out)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* TM_baseline2::Read_P027V1 */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::P027V1_OBU_body */
  static P027V1_OBU_body_enum_T_TM_baseline2 P027V1_OBU_body_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::meta_qdiff */
  static kcg_int meta_qdiff_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::n_iter_sections */
  static kcg_int n_iter_sections_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::Metadata_Element */
  static MetadataElement_T_Common_Types_Pkg Metadata_Element_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::PacketData */
  static CompressedPacketData_T_Common_Types_Pkg PacketData_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L28 */
  static NID_PACKET _L28_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L29 */
  static Q_SCALE _L29_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L30 */
  static Q_DIR _L30_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L24 */
  static kcg_int _L24_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L25 */
  static kcg_int _L25_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L22 */
  static kcg_bool _L22_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L21 */
  static kcg_int _L21_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L20 */
  static MetadataElement_T_Common_Types_Pkg _L20_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L18 */
  static kcg_int _L18_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L6 */
  static array_int_5 _L6_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L9 */
  static CompressedPacketData_T_Common_Types_Pkg _L9_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L10 */
  static P027V1_OBU_body_enum_T_TM_baseline2 _L10_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L16 */
  static kcg_int _L16_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L15 */
  static kcg_int _L15_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L14 */
  static kcg_int _L14_1;
  static kcg_int noname_1;
  static MetadataElement_T_Common_Types_Pkg _4_noname_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool error_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR q_dir_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */
  static kcg_bool _L5_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */
  static Q_DIR _L4_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _5_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _6_q_dir_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool else_clock_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _7_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _8_q_dir_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */
  static kcg_bool _9__L4_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */
  static Q_DIR _L2_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _10_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _11_q_dir_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */
  static kcg_bool _L1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */
  static Q_DIR _12__L2_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool _13_else_clock_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _14_q_dir_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _15_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */
  static Q_DIR _L3_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */
  static kcg_bool _16__L5_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _17_q_dir_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _18_error_1_1;
  static kcg_bool noname_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _19_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */
  static kcg_int q_dir_in_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */
  static kcg_bool _L13_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */
  static kcg_int _L12_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */
  static kcg_int q_dir_int_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _20_q_dir_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _21_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE q_scale_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */
  static kcg_bool _22__L3_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */
  static Q_SCALE _23__L2_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _24_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _25_q_scale_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _26_else_clock_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _27_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _28_q_scale_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */
  static kcg_bool _29__L4_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */
  static Q_SCALE _30__L1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _31_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _32_q_scale_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */
  static Q_SCALE _33__L1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L2 */
  static kcg_bool _34__L2_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool _35_else_clock_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _36_q_scale_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _37_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L1 */
  static Q_SCALE _38__L1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L3 */
  static kcg_bool _39__L3_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _40_q_scale_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _41_error_1_1;
  static kcg_bool _42_noname_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool _43_IfBlock1_clock_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_in */
  static kcg_int q_scale_in_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _44_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::_L2 */
  static kcg_int _L2_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::_L4 */
  static kcg_bool _L4_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_int */
  static kcg_int q_scale_int_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _45_q_scale_1_1;
  static kcg_bool _46_noname_1_1;
  static kcg_bool _47_noname_1_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L1 */
  static kcg_int _L1_1_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L5 */
  static kcg_int _L5_1_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L4 */
  static kcg_bool _48__L4_1_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L3 */
  static kcg_int _L3_1_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L2 */
  static kcg_bool _49__L2_1_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet_int */
  static kcg_int nid_packet_int_1_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet */
  static NID_PACKET nid_packet_1_1;
  /* TM_lib_internal::C_P027V1_merge_body_sections::P027V1_out */
  static P027V1_OBU_T_TM_baseline2 P027V1_out_1;
  /* TM_lib_internal::C_P027V1_merge_body_sections::body */
  static P027V1_OBU_body_enum_T_TM_baseline2 body_1;
  /* TM_lib_internal::C_P027V1_merge_body_sections::sections */
  static P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections_1;
  /* TM_lib_internal::C_P027V1_merge_body_sections::_L75 */
  static P027V1_OBU_T_TM_baseline2 _L75_1;
  /* TM_lib_internal::C_P027V1_merge_body_sections::_L69 */
  static kcg_bool _L69_1;
  /* TM_lib_internal::C_P027V1_merge_body_sections::_L70 */
  static Q_DIR _L70_1;
  /* TM_lib_internal::C_P027V1_merge_body_sections::_L71 */
  static Q_SCALE _L71_1;
  /* TM_lib_internal::C_P027V1_merge_body_sections::_L68 */
  static P027V1_OBU_body_enum_T_TM_baseline2 _L68_1;
  /* TM_lib_internal::C_P027V1_merge_body_sections::_L1 */
  static P027V1_OBU_sectionlist_enum_T_TM_baseline2 _L1_1;
  static kcg_int noname;
  /* TM_baseline2::Read_P027V1::_L5 */
  static CompressedPacketData_T_Common_Types_Pkg _L5;
  /* TM_baseline2::Read_P027V1::_L30 */
  static MetadataElement_T_Common_Types_Pkg _L30;
  /* TM_baseline2::Read_P027V1::_L166 */
  static P027V1_OBU_body_enum_T_TM_baseline2 _L166;
  /* TM_baseline2::Read_P027V1::_L168 */
  static kcg_int _L168;
  /* TM_baseline2::Read_P027V1::_L167 */
  static kcg_int _L167;
  /* TM_baseline2::Read_P027V1::_L169 */
  static CompressedPackets_T_Common_Types_Pkg _L169;
  /* TM_baseline2::Read_P027V1::_L170 */
  static array_int_33 _L170;
  /* TM_baseline2::Read_P027V1::_L171 */
  static array_int_33 _L171;
  /* TM_baseline2::Read_P027V1::_L172 */
  static array_169945 _L172;
  /* TM_baseline2::Read_P027V1::_L178 */
  static P027V1_OBU_T_TM_baseline2 _L178;
  /* TM_baseline2::Read_P027V1::_L182 */
  static P027V1_OBU_sectionlist_enum_T_TM_baseline2 _L182;
  /* TM_baseline2::Read_P027V1::_L184 */
  static kcg_int _L184;
  /* TM_baseline2::Read_P027V1::_L185 */
  static kcg_bool _L185;
  /* TM_baseline2::Read_P027V1::_L186 */
  static kcg_bool _L186;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L169, Message_IN);
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    &_L169,
    NID_META_P027V1_body_TM_baseline2,
    kcg_true,
    kcg_true,
    &_L5,
    &_L30,
    &_L186);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&PacketData_1, &_L5);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L9_1, &PacketData_1);
  _L18_1 = _L9_1[0];
  nid_packet_int_1_1 = _L18_1;
  _L1_1_1 = nid_packet_int_1_1;
  nid_packet_1_1 = _L1_1_1;
  _L28_1 = nid_packet_1_1;
  _L21_1 = 27;
  _L22_1 = _L28_1 == _L21_1;
  kcg_copy_array_int_5(&_L6_1, (array_int_5 *) &_L9_1[1]);
  _L14_1 = _L6_1[0];
  q_dir_int_1_1 = _L14_1;
  _L12_1_1 = q_dir_int_1_1;
  q_dir_in_1_1 = _L12_1_1;
  IfBlock1_clock_1_1 = q_dir_in_1_1 == INT_Q_DIR_nomiinal_TM_conversions;
  /* 1_1_ck_IfBlock1 */ if (IfBlock1_clock_1_1) {
    _L4_1_1_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    q_dir_1_1 = _L4_1_1_IfBlock1;
    _20_q_dir_1_1 = q_dir_1_1;
  }
  else {
    else_clock_1_1_IfBlock1 = q_dir_in_1_1 == INT_Q_DIR_reverse_TM_conversions;
    /* 1_1_ck_anon_activ */ if (else_clock_1_1_IfBlock1) {
      _L3_1_1_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      _17_q_dir_1_1 = _L3_1_1_IfBlock1;
      _6_q_dir_1_1 = _17_q_dir_1_1;
    }
    else {
      _13_else_clock_1_1_IfBlock1 = q_dir_in_1_1 ==
        INT_Q_DIR_both_TM_conversions;
      /* 1_1_ck_anon_activ */ if (_13_else_clock_1_1_IfBlock1) {
        _L2_1_1_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _8_q_dir_1_1 = _L2_1_1_IfBlock1;
        _14_q_dir_1_1 = _8_q_dir_1_1;
      }
      else {
        _12__L2_1_1_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _11_q_dir_1_1 = _12__L2_1_1_IfBlock1;
        _14_q_dir_1_1 = _11_q_dir_1_1;
      }
      _6_q_dir_1_1 = _14_q_dir_1_1;
    }
    _20_q_dir_1_1 = _6_q_dir_1_1;
  }
  _L30_1 = _20_q_dir_1_1;
  _L16_1 = _L6_1[2];
  q_scale_int_1_1 = _L16_1;
  _L2_1_1 = q_scale_int_1_1;
  q_scale_in_1_1 = _L2_1_1;
  _43_IfBlock1_clock_1_1 = q_scale_in_1_1 == INT_Q_SCALE_10cm_TM_conversions;
  /* 1_1_ck_IfBlock1 */ if (_43_IfBlock1_clock_1_1) {
    _23__L2_1_1_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
    q_scale_1_1 = _23__L2_1_1_IfBlock1;
    _45_q_scale_1_1 = q_scale_1_1;
  }
  else {
    _26_else_clock_1_1_IfBlock1 = q_scale_in_1_1 ==
      INT_Q_SCALE_1m_TM_conversions;
    /* 1_1_ck_anon_activ */ if (_26_else_clock_1_1_IfBlock1) {
      _38__L1_1_1_IfBlock1 = ENUM_Q_SCALE_1m_TM_conversions;
      _40_q_scale_1_1 = _38__L1_1_1_IfBlock1;
      _25_q_scale_1_1 = _40_q_scale_1_1;
    }
    else {
      _35_else_clock_1_1_IfBlock1 = q_scale_in_1_1 ==
        INT_Q_SCALE_10m_TM_conversions;
      /* 1_1_ck_anon_activ */ if (_35_else_clock_1_1_IfBlock1) {
        _30__L1_1_1_IfBlock1 = ENUM_Q_SCALE_10m_TM_conversions;
        _28_q_scale_1_1 = _30__L1_1_1_IfBlock1;
        _36_q_scale_1_1 = _28_q_scale_1_1;
      }
      else {
        _33__L1_1_1_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
        _32_q_scale_1_1 = _33__L1_1_1_IfBlock1;
        _36_q_scale_1_1 = _32_q_scale_1_1;
      }
      _25_q_scale_1_1 = _36_q_scale_1_1;
    }
    _45_q_scale_1_1 = _25_q_scale_1_1;
  }
  _L29_1 = _45_q_scale_1_1;
  _L10_1.valid = _L22_1;
  _L10_1.q_dir = _L30_1;
  _L10_1.q_scale = _L29_1;
  kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2(&P027V1_OBU_body_1, &_L10_1);
  kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2(&_L166, &P027V1_OBU_body_1);
  _L24_1 = _L6_1[4];
  meta_qdiff_1 = _L24_1;
  _L168 = meta_qdiff_1;
  _L25_1 = _L6_1[3];
  n_iter_sections_1 = _L25_1;
  _L167 = n_iter_sections_1;
  /* pow */ for (i3 = 0; i3 < 33; i3++) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L172[i3], &_L169);
  }
  /* pow */ for (i2 = 0; i2 < 33; i2++) {
    _L170[i2] = _L167;
  }
  /* pow */ for (i1 = 0; i1 < 33; i1++) {
    _L171[i1] = _L168;
  }
  _L185 = kcg_true;
  if (_L185) {
    for (i = 0; i < 33; i++) {
      /* 1 */
      Read_P027V1_sections_TM_baseline2(
        i,
        &_L172[i],
        _L170[i],
        _L171[i],
        &cond_iterw,
        &_L182[i]);
      _L184 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L184 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L184; i < 33; i++) {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &_L182[i],
      (P027V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P027V1_section_enum_TM_baseline2);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2(&body_1, &_L166);
  kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2(&_L68_1, &body_1);
  _L69_1 = _L68_1.valid;
  _L70_1 = _L68_1.q_dir;
  _L71_1 = _L68_1.q_scale;
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(&sections_1, &_L182);
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(&_L1_1, &sections_1);
  _L75_1.valid = _L69_1;
  _L75_1.q_dir = _L70_1;
  _L75_1.q_scale = _L71_1;
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(&_L75_1.sections, &_L1_1);
  kcg_copy_P027V1_OBU_T_TM_baseline2(&P027V1_out_1, &_L75_1);
  kcg_copy_P027V1_OBU_T_TM_baseline2(&_L178, &P027V1_out_1);
  kcg_copy_P027V1_OBU_T_TM_baseline2(P027V1_out, &_L178);
  noname = _L184;
  *received = _L186;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&Metadata_Element_1, &_L30);
  _L15_1 = _L6_1[1];
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L20_1, &Metadata_Element_1);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_4_noname_1, &_L20_1);
  noname_1 = _L15_1;
  /* 1_1_ck_IfBlock1 */ if (IfBlock1_clock_1_1) {
    _L5_1_1_IfBlock1 = kcg_false;
    error_1_1 = _L5_1_1_IfBlock1;
    _19_error_1_1 = error_1_1;
  }
  else {
    /* 1_1_ck_anon_activ */ if (else_clock_1_1_IfBlock1) {
      _16__L5_1_1_IfBlock1 = kcg_false;
      _18_error_1_1 = _16__L5_1_1_IfBlock1;
      _5_error_1_1 = _18_error_1_1;
    }
    else {
      /* 1_1_ck_anon_activ */ if (_13_else_clock_1_1_IfBlock1) {
        _9__L4_1_1_IfBlock1 = kcg_false;
        _7_error_1_1 = _9__L4_1_1_IfBlock1;
        _15_error_1_1 = _7_error_1_1;
      }
      else {
        _L1_1_1_IfBlock1 = kcg_true;
        _10_error_1_1 = _L1_1_1_IfBlock1;
        _15_error_1_1 = _10_error_1_1;
      }
      _5_error_1_1 = _15_error_1_1;
    }
    _19_error_1_1 = _5_error_1_1;
  }
  _L13_1_1 = _19_error_1_1;
  noname_1_1 = _L13_1_1;
  /* 1_1_ck_IfBlock1 */ if (_43_IfBlock1_clock_1_1) {
    _22__L3_1_1_IfBlock1 = kcg_false;
    _21_error_1_1 = _22__L3_1_1_IfBlock1;
    _44_error_1_1 = _21_error_1_1;
  }
  else {
    /* 1_1_ck_anon_activ */ if (_26_else_clock_1_1_IfBlock1) {
      _39__L3_1_1_IfBlock1 = kcg_false;
      _41_error_1_1 = _39__L3_1_1_IfBlock1;
      _24_error_1_1 = _41_error_1_1;
    }
    else {
      /* 1_1_ck_anon_activ */ if (_35_else_clock_1_1_IfBlock1) {
        _29__L4_1_1_IfBlock1 = kcg_false;
        _27_error_1_1 = _29__L4_1_1_IfBlock1;
        _37_error_1_1 = _27_error_1_1;
      }
      else {
        _34__L2_1_1_IfBlock1 = kcg_true;
        _31_error_1_1 = _34__L2_1_1_IfBlock1;
        _37_error_1_1 = _31_error_1_1;
      }
      _24_error_1_1 = _37_error_1_1;
    }
    _44_error_1_1 = _24_error_1_1;
  }
  _L4_1_1 = _44_error_1_1;
  _42_noname_1_1 = _L4_1_1;
  _L5_1_1 = 0;
  _48__L4_1_1 = _L1_1_1 < _L5_1_1;
  _46_noname_1_1 = _48__L4_1_1;
  _L3_1_1 = 256;
  _49__L2_1_1 = _L1_1_1 > _L3_1_1;
  _47_noname_1_1 = _49__L2_1_1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P027V1_TM_baseline2.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

