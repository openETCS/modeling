/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_tracksim_compr_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P003V1_tracksim_compr */
void C_P003V1_tracksim_compr_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::P003V1_from_track */ P003V1_trackside_int_T_TM_baseline2 *P003V1_from_track,
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::P003V1_compressed */ CompressedPacketData_T_Common_Types_Pkg *P003V1_compressed)
{
  static kcg_int i;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _16_q_dir_1;
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
  static kcg_bool _1_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */
  static kcg_bool _L5_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */
  static Q_DIR _L3_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _2_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _3_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */
  static Q_DIR _L2_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */
  static kcg_bool _L1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _4_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _5_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */
  static Q_DIR _L2_16_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _7_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _8_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _9_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _10_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _11_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */
  static Q_DIR _L4_112_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */
  static kcg_bool _L5_113_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _14_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _15_error_1;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::p_size */
  static kcg_int p_size;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::sections */
  static P003V1_trackide_sectionlist_T_TM_baseline2 sections;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L1 */
  static P003V1_trackside_int_T_TM_baseline2 _L1;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L204 */
  static MetadataElement_T_Common_Types_Pkg _L204;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L206 */
  static kcg_int _L206;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L209 */
  static array_int_444 _L209;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L212 */
  static kcg_int _L212;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L213 */
  static kcg_int _L213;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L336 */
  static kcg_int _L336;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L218 */
  static kcg_int _L218;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L217 */
  static kcg_int _L217;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L216 */
  static kcg_int _L216;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L215 */
  static kcg_int _L215;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L214 */
  static kcg_bool _L214;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L356 */
  static Q_DIR _L356;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L366 */
  static kcg_int _L366;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L365 */
  static P003V1_trackide_sectionlist_T_TM_baseline2 _L365;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L373 */
  static array_int_6 _L373;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L378 */
  static kcg_int _L378;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L379 */
  static kcg_int _L379;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L381 */
  static array_int_24 _L381;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L383 */
  static CompressedPacketData_T_Common_Types_Pkg _L383;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L384 */
  static array_int_56 _L384;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L387 */
  static kcg_int _L387;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L388 */
  static kcg_int _L388;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L389 */
  static kcg_int _L389;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L390 */
  static kcg_int _L390;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L391 */
  static kcg_int _L391;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L392 */
  static kcg_int _L392;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L393 */
  static kcg_int _L393;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L394 */
  static kcg_int _L394;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L395 */
  static kcg_int _L395;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L396 */
  static kcg_int _L396;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L397 */
  static kcg_int _L397;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L398 */
  static kcg_int _L398;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L399 */
  static kcg_int _L399;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L400 */
  static kcg_int _L400;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L401 */
  static kcg_int _L401;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L402 */
  static kcg_int _L402;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L403 */
  static kcg_int _L403;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L404 */
  static kcg_int _L404;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L407 */
  static array_int_18 _L407;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L408 */
  static P003V1_trackide_sectionlist_T_TM_baseline2 _L408;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L409 */
  static kcg_int _L409;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L412 */
  static nid_packet_meta_TM _L412;
  
  kcg_copy_P003V1_trackside_int_T_TM_baseline2(&_L1, P003V1_from_track);
  _L387 = _L1.NID_PACKET;
  _L215 = _L1.Q_DIR;
  _L216 = _L1.L_PACKET;
  _L217 = _L1.Q_SCALE;
  _L218 = _L1.D_VALIDNV;
  _L366 = _L1.N_ITER;
  _L373[0] = _L387;
  _L373[1] = _L215;
  _L373[2] = _L216;
  _L373[3] = _L217;
  _L373[4] = _L218;
  _L373[5] = _L366;
  _L388 = _L1.V_NVSHUNT;
  _L389 = _L1.V_NVSTFF;
  _L390 = _L1.V_NVONSIGHT;
  _L391 = _L1.V_NVUNFIT;
  _L392 = _L1.V_NVREL;
  _L393 = _L1.D_NVROLL;
  _L394 = _L1.Q_NVSRBKTRG;
  _L409 = _L1.Q_NVEMRRLS;
  _L395 = _L1.V_NVALLOWOVTRP;
  _L396 = _L1.V_NVSUPOVTRP;
  _L397 = _L1.D_NVOVTRP;
  _L398 = _L1.T_NVOVTRP;
  _L399 = _L1.D_NVPOTRP;
  _L400 = _L1.M_NVCONTACT;
  _L401 = _L1.T_NVCONTACT;
  _L402 = _L1.M_NVDERUN;
  _L403 = _L1.D_NVSTFF;
  _L404 = _L1.Q_NVDRIVER_ADHES;
  _L407[0] = _L388;
  _L407[1] = _L389;
  _L407[2] = _L390;
  _L407[3] = _L391;
  _L407[4] = _L392;
  _L407[5] = _L393;
  _L407[6] = _L394;
  _L407[7] = _L409;
  _L407[8] = _L395;
  _L407[9] = _L396;
  _L407[10] = _L397;
  _L407[11] = _L398;
  _L407[12] = _L399;
  _L407[13] = _L400;
  _L407[14] = _L401;
  _L407[15] = _L402;
  _L407[16] = _L403;
  _L407[17] = _L404;
  kcg_copy_array_int_6(&_L381[0], &_L373);
  kcg_copy_array_int_18(&_L381[6], &_L407);
  kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(&_L365, &_L1.SECTIONS);
  kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(&sections, &_L365);
  kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(&_L408, &sections);
  kcg_copy_array_int_24(&_L384[0], &_L381);
  kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(&_L384[24], &_L408);
  _L336 = 0;
  /* pow */ for (i = 0; i < 444; i++) {
    _L209[i] = _L336;
  }
  kcg_copy_array_int_56(&_L383[0], &_L384);
  kcg_copy_array_int_444(&_L383[56], &_L209);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(P003V1_compressed, &_L383);
  _L412 = /* 2 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      _L387,
      _L215,
      0,
      3,
      INT_M_VERSION_1_0_TM);
  q_dir_int_1 = _L215;
  _L12_1 = q_dir_int_1;
  q_dir_in_1 = _L12_1;
  IfBlock1_clock_1 = q_dir_in_1 == INT_Q_DIR_nomiinal_TM_conversions;
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    _L4_112_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _14_q_dir_1 = _L4_112_IfBlock1;
    _16_q_dir_1 = _14_q_dir_1;
  }
  else {
    _9_else_clock_1_IfBlock1 = q_dir_in_1 == INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (_9_else_clock_1_IfBlock1) {
      _L3_1_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = _L3_1_IfBlock1;
      _10_q_dir_1 = q_dir_1;
    }
    else {
      else_clock_1_IfBlock1 = q_dir_in_1 == INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        _L2_16_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _7_q_dir_1 = _L2_16_IfBlock1;
        _3_q_dir_1 = _7_q_dir_1;
      }
      else {
        _L2_1_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _4_q_dir_1 = _L2_1_IfBlock1;
        _3_q_dir_1 = _4_q_dir_1;
      }
      _10_q_dir_1 = _3_q_dir_1;
    }
    _16_q_dir_1 = _10_q_dir_1;
  }
  _L356 = _16_q_dir_1;
  _L214 = _L1.valid;
  _L206 = 0;
  _L379 = /* 1 */ T_DeterminePacketSizeInt_TM_lib_internal(_L366, 6 + 17, 1);
  p_size = _L379;
  _L378 = p_size;
  _L213 = 1;
  _L212 = _L378 - _L213;
  _L204.nid_packet = _L412;
  _L204.q_dir = _L356;
  _L204.valid = _L214;
  _L204.startAddress = _L206;
  _L204.endAddress = _L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(Header, &_L204);
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    _L5_113_IfBlock1 = kcg_false;
    _15_error_1 = _L5_113_IfBlock1;
    error_1 = _15_error_1;
  }
  else {
    /* 1_ck_anon_activ */ if (_9_else_clock_1_IfBlock1) {
      _L5_1_IfBlock1 = kcg_false;
      _1_error_1 = _L5_1_IfBlock1;
      _11_error_1 = _1_error_1;
    }
    else {
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        _L4_1_IfBlock1 = kcg_false;
        _8_error_1 = _L4_1_IfBlock1;
        _2_error_1 = _8_error_1;
      }
      else {
        _L1_1_IfBlock1 = kcg_true;
        _5_error_1 = _L1_1_IfBlock1;
        _2_error_1 = _5_error_1;
      }
      _11_error_1 = _2_error_1;
    }
    error_1 = _11_error_1;
  }
  _L13_1 = error_1;
  noname_1 = _L13_1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003V1_tracksim_compr_TM_conversions_baseline2.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

