/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_compr_body_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body */
void C_P027V1_tracksim_compr_body_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::P027V1_from_track */ P027V1_trackside_int_T_TM_baseline2 *P027V1_from_track,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::P027V1_body_compressed */ CompressedPacketData_T_Common_Types_Pkg *P027V1_body_compressed,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::P027V1_sections */ P027V1_OBU_sectionlist_int_T_TM_baseline2 *P027V1_sections,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::n_iter_k_out */ kcg_int *n_iter_k_out,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::meta_first_section */ kcg_int *meta_first_section,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::q_dir */ Q_DIR *q_dir)
{
  static kcg_int i1;
  static kcg_int i;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _17_q_dir_1;
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
  static kcg_bool _2_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */
  static kcg_bool _L5_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */
  static Q_DIR _L3_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _3_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _4_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */
  static Q_DIR _L2_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */
  static kcg_bool _L1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _5_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _6_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */
  static Q_DIR _L2_17_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _8_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _9_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _10_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _11_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _12_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */
  static Q_DIR _L4_113_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */
  static kcg_bool _L5_114_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _15_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _16_error_1;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::n_iter_k */
  static kcg_int n_iter_k;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::l_qdir */
  static Q_DIR l_qdir;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L1 */
  static P027V1_trackside_int_T_TM_baseline2 _L1;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L204 */
  static MetadataElement_T_Common_Types_Pkg _L204;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L206 */
  static kcg_int _L206;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L209 */
  static array_int_494 _L209;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L212 */
  static kcg_int _L212;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L213 */
  static kcg_int _L213;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L336 */
  static kcg_int _L336;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L219 */
  static kcg_int _L219;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L218 */
  static kcg_int _L218;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L217 */
  static kcg_int _L217;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L216 */
  static kcg_int _L216;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L215 */
  static kcg_int _L215;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L214 */
  static kcg_bool _L214;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L371 */
  static kcg_int _L371;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L370 */
  static kcg_int _L370;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L369 */
  static P027V1_trackside_qdifflist_T_TM_baseline2 _L369;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L368 */
  static kcg_int _L368;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L367 */
  static P027V1_trackside_sectionlist_T_TM_baseline2 _L367;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L373 */
  static array_int_6 _L373;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L383 */
  static CompressedPacketData_T_Common_Types_Pkg _L383;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L386 */
  static array_168614 _L386;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L385 */
  static P027V1_OBU_sectionlist_int_T_TM_baseline2 _L385;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L387 */
  static kcg_int _L387;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L391 */
  static kcg_int _L391;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L394 */
  static P027V1_section_int_T_TM_baseline2 _L394;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L396 */
  static kcg_int _L396;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L400 */
  static kcg_int _L400;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L403 */
  static nid_packet_meta_TM _L403;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L405 */
  static nid_packet_meta_TM _L405;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L406 */
  static Q_DIR _L406;
  
  kcg_copy_P027V1_trackside_int_T_TM_baseline2(&_L1, P027V1_from_track);
  _L387 = _L1.NID_PACKET;
  _L215 = _L1.Q_DIR;
  _L216 = _L1.L_PACKET;
  _L217 = _L1.Q_SCALE;
  _L368 = _L1.N_ITER_k;
  n_iter_k = _L368;
  _L391 = n_iter_k;
  _L405 = /* 3 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      _L387,
      _L215,
      100,
      27,
      INT_M_VERSION_1_0_TM);
  _L373[0] = _L387;
  _L373[1] = _L215;
  _L373[2] = _L216;
  _L373[3] = _L217;
  _L373[4] = _L391;
  _L373[5] = _L405;
  _L336 = 0;
  /* pow */ for (i1 = 0; i1 < 494; i1++) {
    _L209[i1] = _L336;
  }
  kcg_copy_array_int_6(&_L383[0], &_L373);
  kcg_copy_array_int_494(&_L383[6], &_L209);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    P027V1_body_compressed,
    &_L383);
  _L403 = /* 1 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      _L387,
      _L215,
      0,
      27,
      INT_M_VERSION_1_0_TM);
  q_dir_int_1 = _L215;
  _L12_1 = q_dir_int_1;
  q_dir_in_1 = _L12_1;
  IfBlock1_clock_1 = q_dir_in_1 == INT_Q_DIR_nomiinal_TM_conversions;
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    _L4_113_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _15_q_dir_1 = _L4_113_IfBlock1;
    _17_q_dir_1 = _15_q_dir_1;
  }
  else {
    _10_else_clock_1_IfBlock1 = q_dir_in_1 == INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (_10_else_clock_1_IfBlock1) {
      _L3_1_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = _L3_1_IfBlock1;
      _11_q_dir_1 = q_dir_1;
    }
    else {
      else_clock_1_IfBlock1 = q_dir_in_1 == INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        _L2_17_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _8_q_dir_1 = _L2_17_IfBlock1;
        _4_q_dir_1 = _8_q_dir_1;
      }
      else {
        _L2_1_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _5_q_dir_1 = _L2_1_IfBlock1;
        _4_q_dir_1 = _5_q_dir_1;
      }
      _11_q_dir_1 = _4_q_dir_1;
    }
    _17_q_dir_1 = _11_q_dir_1;
  }
  l_qdir = _17_q_dir_1;
  _L214 = _L1.valid;
  _L206 = 0;
  _L396 = 6;
  _L213 = 1;
  _L212 = _L396 - _L213;
  _L204.nid_packet = _L403;
  _L204.q_dir = l_qdir;
  _L204.valid = _L214;
  _L204.startAddress = _L206;
  _L204.endAddress = _L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(Header, &_L204);
  kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2(
    &_L367,
    &_L1.SECTIONS_SSP);
  kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2(
    &_L369,
    &_L1.SECTIONS_q_diff);
  _L370 = _L1.N_ITER_n;
  _L371 = _L1.Q_FRONT;
  _L219 = _L1.V_STATIC;
  _L218 = _L1.D_STATIC;
  _L394.D_STATIC = _L218;
  _L394.V_STATIC = _L219;
  _L394.Q_FRONT = _L371;
  _L394.N_ITER = _L370;
  kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2(
    &_L394.SECTIONS_q_diff,
    &_L369);
  /* pow */ for (i = 0; i < 1; i++) {
    kcg_copy_P027V1_section_int_T_TM_baseline2(&_L386[i], &_L394);
  }
  kcg_copy_array_168614(&_L385[0], &_L386);
  kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2(&_L385[1], &_L367);
  kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2(P027V1_sections, &_L385);
  _L400 = n_iter_k;
  *n_iter_k_out = _L400;
  *meta_first_section = _L405;
  _L406 = l_qdir;
  *q_dir = _L406;
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    _L5_114_IfBlock1 = kcg_false;
    _16_error_1 = _L5_114_IfBlock1;
    error_1 = _16_error_1;
  }
  else {
    /* 1_ck_anon_activ */ if (_10_else_clock_1_IfBlock1) {
      _L5_1_IfBlock1 = kcg_false;
      _2_error_1 = _L5_1_IfBlock1;
      _12_error_1 = _2_error_1;
    }
    else {
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        _L4_1_IfBlock1 = kcg_false;
        _9_error_1 = _L4_1_IfBlock1;
        _3_error_1 = _9_error_1;
      }
      else {
        _L1_1_IfBlock1 = kcg_true;
        _6_error_1 = _L1_1_IfBlock1;
        _3_error_1 = _6_error_1;
      }
      _12_error_1 = _3_error_1;
    }
    error_1 = _12_error_1;
  }
  _L13_1 = error_1;
  noname_1 = _L13_1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_tracksim_compr_body_TM_conversions_baseline2.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

