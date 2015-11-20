/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_tracksim_compr_TM_conversions.h"

/* TM_conversions::C_P015_tracksim_compr */
void C_P015_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P015_tracksim_compr::P015_from_track */ P015_trackside_int_T_TM *P015_from_track,
  /* TM_conversions::C_P015_tracksim_compr::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions::C_P015_tracksim_compr::P015_compressed */ CompressedPacketData_T_Common_Types_Pkg *P015_compressed)
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
  /* TM_conversions::C_P015_tracksim_compr::p_size */
  static kcg_int p_size;
  /* TM_conversions::C_P015_tracksim_compr::sections */
  static P015_trackide_sectionlist_T_TM sections;
  /* TM_conversions::C_P015_tracksim_compr::n_iter */
  static kcg_int n_iter;
  /* TM_conversions::C_P015_tracksim_compr::_L1 */
  static P015_trackside_int_T_TM _L1;
  /* TM_conversions::C_P015_tracksim_compr::_L204 */
  static MetadataElement_T_Common_Types_Pkg _L204;
  /* TM_conversions::C_P015_tracksim_compr::_L206 */
  static kcg_int _L206;
  /* TM_conversions::C_P015_tracksim_compr::_L209 */
  static array_int_350 _L209;
  /* TM_conversions::C_P015_tracksim_compr::_L212 */
  static kcg_int _L212;
  /* TM_conversions::C_P015_tracksim_compr::_L213 */
  static kcg_int _L213;
  /* TM_conversions::C_P015_tracksim_compr::_L336 */
  static kcg_int _L336;
  /* TM_conversions::C_P015_tracksim_compr::_L219 */
  static kcg_int _L219;
  /* TM_conversions::C_P015_tracksim_compr::_L218 */
  static kcg_int _L218;
  /* TM_conversions::C_P015_tracksim_compr::_L217 */
  static kcg_int _L217;
  /* TM_conversions::C_P015_tracksim_compr::_L216 */
  static kcg_int _L216;
  /* TM_conversions::C_P015_tracksim_compr::_L215 */
  static kcg_int _L215;
  /* TM_conversions::C_P015_tracksim_compr::_L214 */
  static kcg_bool _L214;
  /* TM_conversions::C_P015_tracksim_compr::_L356 */
  static Q_DIR _L356;
  /* TM_conversions::C_P015_tracksim_compr::_L371 */
  static P015_trackide_sectionlist_T_TM _L371;
  /* TM_conversions::C_P015_tracksim_compr::_L370 */
  static kcg_int _L370;
  /* TM_conversions::C_P015_tracksim_compr::_L369 */
  static kcg_int _L369;
  /* TM_conversions::C_P015_tracksim_compr::_L368 */
  static kcg_int _L368;
  /* TM_conversions::C_P015_tracksim_compr::_L367 */
  static kcg_int _L367;
  /* TM_conversions::C_P015_tracksim_compr::_L366 */
  static kcg_int _L366;
  /* TM_conversions::C_P015_tracksim_compr::_L365 */
  static kcg_int _L365;
  /* TM_conversions::C_P015_tracksim_compr::_L373 */
  static array_int_6 _L373;
  /* TM_conversions::C_P015_tracksim_compr::_L378 */
  static kcg_int _L378;
  /* TM_conversions::C_P015_tracksim_compr::_L379 */
  static kcg_int _L379;
  /* TM_conversions::C_P015_tracksim_compr::_L380 */
  static P015_sections_array_flat_T_TM _L380;
  /* TM_conversions::C_P015_tracksim_compr::_L381 */
  static array_int_21 _L381;
  /* TM_conversions::C_P015_tracksim_compr::_L383 */
  static CompressedPacketData_T_Common_Types_Pkg _L383;
  /* TM_conversions::C_P015_tracksim_compr::_L384 */
  static array_int_150 _L384;
  /* TM_conversions::C_P015_tracksim_compr::_L387 */
  static kcg_int _L387;
  /* TM_conversions::C_P015_tracksim_compr::_L395 */
  static kcg_int _L395;
  /* TM_conversions::C_P015_tracksim_compr::_L394 */
  static kcg_int _L394;
  /* TM_conversions::C_P015_tracksim_compr::_L393 */
  static kcg_int _L393;
  /* TM_conversions::C_P015_tracksim_compr::_L392 */
  static kcg_int _L392;
  /* TM_conversions::C_P015_tracksim_compr::_L391 */
  static kcg_int _L391;
  /* TM_conversions::C_P015_tracksim_compr::_L390 */
  static kcg_int _L390;
  /* TM_conversions::C_P015_tracksim_compr::_L389 */
  static kcg_int _L389;
  /* TM_conversions::C_P015_tracksim_compr::_L388 */
  static kcg_int _L388;
  /* TM_conversions::C_P015_tracksim_compr::_L396 */
  static kcg_int _L396;
  /* TM_conversions::C_P015_tracksim_compr::_L398 */
  static P015_trackide_sectionlist_T_TM _L398;
  /* TM_conversions::C_P015_tracksim_compr::_L399 */
  static array_int_15 _L399;
  /* TM_conversions::C_P015_tracksim_compr::_L400 */
  static array_int_22 _L400;
  /* TM_conversions::C_P015_tracksim_compr::_L402 */
  static kcg_int _L402;
  /* TM_conversions::C_P015_tracksim_compr::_L403 */
  static P044_other_data_TM_TrainToTrack _L403;
  /* TM_conversions::C_P015_tracksim_compr::_L404 */
  static nid_packet_meta_TM _L404;
  /* TM_conversions::C_P015_tracksim_compr::_L405 */
  static kcg_int _L405;
  
  kcg_copy_P015_trackside_int_T_TM(&_L1, P015_from_track);
  _L387 = _L1.NID_PACKET;
  _L215 = _L1.Q_DIR;
  _L216 = _L1.L_PACKET;
  _L217 = _L1.Q_SCALE;
  _L218 = _L1.V_LOA;
  _L219 = _L1.T_LOA;
  _L373[0] = _L387;
  _L373[1] = _L215;
  _L373[2] = _L216;
  _L373[3] = _L217;
  _L373[4] = _L218;
  _L373[5] = _L219;
  _L370 = _L1.L_ENDSECTION;
  _L369 = _L1.Q_SECTIONTIMER;
  _L405 = _L1.T_SECTIONTIMER;
  _L368 = _L1.D_SECTIONTIMERSTOPLOC;
  _L367 = _L1.Q_ENDTIMER;
  _L366 = _L1.T_ENDTIMER;
  _L365 = _L1.D_ENDTIMERSTARTLOC;
  _L395 = _L1.Q_DANGERPOINT;
  _L394 = _L1.D_DP;
  _L393 = _L1.V_RELEASEDP;
  _L392 = _L1.Q_OVERLAP;
  _L391 = _L1.D_STARTOL;
  _L390 = _L1.T_OL;
  _L389 = _L1.D_OL;
  _L388 = _L1.V_RELEASEOL;
  _L399[0] = _L370;
  _L399[1] = _L369;
  _L399[2] = _L405;
  _L399[3] = _L368;
  _L399[4] = _L367;
  _L399[5] = _L366;
  _L399[6] = _L365;
  _L399[7] = _L395;
  _L399[8] = _L394;
  _L399[9] = _L393;
  _L399[10] = _L392;
  _L399[11] = _L391;
  _L399[12] = _L390;
  _L399[13] = _L389;
  _L399[14] = _L388;
  kcg_copy_array_int_6(&_L381[0], &_L373);
  kcg_copy_array_int_15(&_L381[6], &_L399);
  _L396 = _L1.N_ITER;
  n_iter = _L396;
  _L402 = n_iter;
  /* pow */ for (i1 = 0; i1 < 1; i1++) {
    _L403[i1] = _L402;
  }
  kcg_copy_array_int_21(&_L400[0], &_L381);
  kcg_copy_P044_other_data_TM_TrainToTrack(&_L400[21], &_L403);
  kcg_copy_P015_trackide_sectionlist_T_TM(&_L371, &_L1.SECTIONS);
  kcg_copy_P015_trackide_sectionlist_T_TM(&sections, &_L371);
  kcg_copy_P015_trackide_sectionlist_T_TM(&_L398, &sections);
  /* 1 */ C_P015_flatten_sections_TM_lib_internal(&_L398, &_L380);
  kcg_copy_array_int_22(&_L384[0], &_L400);
  kcg_copy_P015_sections_array_flat_T_TM(&_L384[22], &_L380);
  _L336 = 0;
  /* pow */ for (i = 0; i < 350; i++) {
    _L209[i] = _L336;
  }
  kcg_copy_array_int_150(&_L383[0], &_L384);
  kcg_copy_array_int_350(&_L383[150], &_L209);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(P015_compressed, &_L383);
  _L404 = /* 1 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      _L387,
      _L215,
      0,
      15,
      INT_M_VERSION_2_0_TM);
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
  _L356 = _17_q_dir_1;
  _L214 = _L1.valid;
  _L206 = 0;
  _L379 = /* 1 */
    T_DeterminePacketSizeInt_TM_lib_internal(_L396, 6 + 1 + 15, 4);
  p_size = _L379;
  _L378 = p_size;
  _L213 = 1;
  _L212 = _L378 - _L213;
  _L204.nid_packet = _L404;
  _L204.q_dir = _L356;
  _L204.valid = _L214;
  _L204.startAddress = _L206;
  _L204.endAddress = _L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(Header, &_L204);
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
** C_P015_tracksim_compr_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

