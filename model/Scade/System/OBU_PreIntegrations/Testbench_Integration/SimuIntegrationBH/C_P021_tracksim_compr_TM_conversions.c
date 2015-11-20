/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_tracksim_compr_TM_conversions.h"

/* TM_conversions::C_P021_tracksim_compr */
void C_P021_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P021_tracksim_compr::P021_from_track */ P021_trackside_int_T_TM *P021_from_track,
  /* TM_conversions::C_P021_tracksim_compr::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions::C_P021_tracksim_compr::P005_compressed */ CompressedPacketData_T_Common_Types_Pkg *P005_compressed)
{
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
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
  static kcg_bool noname_1;
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
  /* TM_conversions::C_P021_tracksim_compr::p_size */
  static kcg_int p_size;
  /* TM_conversions::C_P021_tracksim_compr::_L1 */
  static P021_trackside_int_T_TM _L1;
  /* TM_conversions::C_P021_tracksim_compr::_L204 */
  static MetadataElement_T_Common_Types_Pkg _L204;
  /* TM_conversions::C_P021_tracksim_compr::_L206 */
  static kcg_int _L206;
  /* TM_conversions::C_P021_tracksim_compr::_L209 */
  static array_int_396 _L209;
  /* TM_conversions::C_P021_tracksim_compr::_L212 */
  static kcg_int _L212;
  /* TM_conversions::C_P021_tracksim_compr::_L213 */
  static kcg_int _L213;
  /* TM_conversions::C_P021_tracksim_compr::_L336 */
  static kcg_int _L336;
  /* TM_conversions::C_P021_tracksim_compr::_L219 */
  static kcg_int _L219;
  /* TM_conversions::C_P021_tracksim_compr::_L218 */
  static kcg_int _L218;
  /* TM_conversions::C_P021_tracksim_compr::_L217 */
  static kcg_int _L217;
  /* TM_conversions::C_P021_tracksim_compr::_L216 */
  static kcg_int _L216;
  /* TM_conversions::C_P021_tracksim_compr::_L215 */
  static kcg_int _L215;
  /* TM_conversions::C_P021_tracksim_compr::_L214 */
  static kcg_bool _L214;
  /* TM_conversions::C_P021_tracksim_compr::_L356 */
  static Q_DIR _L356;
  /* TM_conversions::C_P021_tracksim_compr::_L371 */
  static kcg_int _L371;
  /* TM_conversions::C_P021_tracksim_compr::_L370 */
  static kcg_int _L370;
  /* TM_conversions::C_P021_tracksim_compr::_L369 */
  static P021_trackide_sectionlist_T_TM _L369;
  /* TM_conversions::C_P021_tracksim_compr::_L373 */
  static array_int_4 _L373;
  /* TM_conversions::C_P021_tracksim_compr::_L375 */
  static P021_section_int_T_TM _L375;
  /* TM_conversions::C_P021_tracksim_compr::_L376 */
  static P044_other_data_TM_TrainToTrack _L376;
  /* TM_conversions::C_P021_tracksim_compr::_L378 */
  static kcg_int _L378;
  /* TM_conversions::C_P021_tracksim_compr::_L379 */
  static kcg_int _L379;
  /* TM_conversions::C_P021_tracksim_compr::_L380 */
  static P021_sections_array_flat_T_TM _L380;
  /* TM_conversions::C_P021_tracksim_compr::_L381 */
  static array_int_5 _L381;
  /* TM_conversions::C_P021_tracksim_compr::_L383 */
  static CompressedPacketData_T_Common_Types_Pkg _L383;
  /* TM_conversions::C_P021_tracksim_compr::_L384 */
  static array_int_104 _L384;
  /* TM_conversions::C_P021_tracksim_compr::_L385 */
  static P021_OBU_sectionlist_int_T_TM _L385;
  /* TM_conversions::C_P021_tracksim_compr::_L387 */
  static kcg_int _L387;
  /* TM_conversions::C_P021_tracksim_compr::_L386 */
  static array_170141 _L386;
  /* TM_conversions::C_P021_tracksim_compr::_L388 */
  static nid_packet_meta_TM _L388;
  
  kcg_copy_P021_trackside_int_T_TM(&_L1, P021_from_track);
  _L387 = _L1.NID_PACKET;
  _L215 = _L1.Q_DIR;
  _L216 = _L1.L_PACKET;
  _L217 = _L1.Q_SCALE;
  _L373[0] = _L387;
  _L373[1] = _L215;
  _L373[2] = _L216;
  _L373[3] = _L217;
  _L370 = _L1.N_ITER;
  /* pow */ for (i2 = 0; i2 < 1; i2++) {
    _L376[i2] = _L370;
  }
  kcg_copy_array_int_4(&_L381[0], &_L373);
  kcg_copy_P044_other_data_TM_TrainToTrack(&_L381[4], &_L376);
  _L218 = _L1.D_GRADIENT;
  _L219 = _L1.Q_GDIR;
  _L371 = _L1.G_A;
  _L375.D_GRADIENT = _L218;
  _L375.Q_GDIR = _L219;
  _L375.G_A = _L371;
  /* pow */ for (i1 = 0; i1 < 1; i1++) {
    kcg_copy_P021_section_int_T_TM(&_L386[i1], &_L375);
  }
  kcg_copy_P021_trackide_sectionlist_T_TM(&_L369, &_L1.SECTIONS);
  kcg_copy_array_170141(&_L385[0], &_L386);
  kcg_copy_P021_trackide_sectionlist_T_TM(&_L385[1], &_L369);
  /* 1 */ C_P021_flatten_sections_TM_lib_internal(&_L385, &_L380);
  kcg_copy_array_int_5(&_L384[0], &_L381);
  kcg_copy_P021_sections_array_flat_T_TM(&_L384[5], &_L380);
  _L336 = 0;
  /* pow */ for (i = 0; i < 396; i++) {
    _L209[i] = _L336;
  }
  kcg_copy_array_int_104(&_L383[0], &_L384);
  kcg_copy_array_int_396(&_L383[104], &_L209);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(P005_compressed, &_L383);
  _L388 = /* 1 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      _L387,
      _L215,
      0,
      21,
      INT_M_VERSION_2_0_TM);
  q_dir_int_1 = _L215;
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
  _L356 = _18_q_dir_1;
  _L214 = _L1.valid;
  _L206 = 0;
  _L379 = /* 1 */ T_DeterminePacketSizeInt_TM_lib_internal(_L370, 4 + 1 + 3, 3);
  p_size = _L379;
  _L378 = p_size;
  _L213 = 1;
  _L212 = _L378 - _L213;
  _L204.nid_packet = _L388;
  _L204.q_dir = _L356;
  _L204.valid = _L214;
  _L204.startAddress = _L206;
  _L204.endAddress = _L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(Header, &_L204);
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
  noname_1 = _L13_1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P021_tracksim_compr_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

