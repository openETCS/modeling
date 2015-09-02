/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_tracksim_compr_TM_conversions.h"

void C_P015_tracksim_compr_reset_TM_conversions(
  outC_C_P015_tracksim_compr_TM_conversions *outC)
{
  /* 1 */ T_DeterminePacketSizeInt_reset_TM_lib_internal(&outC->_2_Context_1);
  /* 1 */ C_P015_flatten_sections_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ T_Build_Metadata_Packet_ID_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_conversions::C_P015_tracksim_compr */
void C_P015_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P015_tracksim_compr::P015_from_track */P015_trackside_int_T_TM *P015_from_track,
  outC_C_P015_tracksim_compr_TM_conversions *outC)
{
  kcg_int i1;
  kcg_int i;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _11_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _10_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _9_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _8_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _7_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _6_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _5_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _4_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _3_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _2_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool error_1;
  kcg_bool noname_1;
  
  kcg_copy_P015_trackside_int_T_TM(&outC->_L1, P015_from_track);
  outC->_L388 = outC->_L1.V_RELEASEOL;
  outC->_L389 = outC->_L1.D_OL;
  outC->_L390 = outC->_L1.T_OL;
  outC->_L391 = outC->_L1.D_STARTOL;
  outC->_L392 = outC->_L1.Q_OVERLAP;
  outC->_L393 = outC->_L1.V_RELEASEDP;
  outC->_L394 = outC->_L1.D_DP;
  outC->_L395 = outC->_L1.Q_DANGERPOINT;
  outC->_L365 = outC->_L1.D_ENDTIMERSTARTLOC;
  outC->_L366 = outC->_L1.T_ENDTIMER;
  outC->_L367 = outC->_L1.Q_ENDTIMER;
  outC->_L368 = outC->_L1.D_SECTIONTIMERSTOPLOC;
  outC->_L405 = outC->_L1.T_SECTIONTIMER;
  outC->_L369 = outC->_L1.Q_SECTIONTIMER;
  outC->_L370 = outC->_L1.L_ENDSECTION;
  kcg_copy_P015_trackide_sectionlist_T_TM(&outC->_L371, &outC->_L1.SECTIONS);
  outC->_L396 = outC->_L1.N_ITER;
  outC->_L219 = outC->_L1.T_LOA;
  outC->_L218 = outC->_L1.V_LOA;
  outC->_L217 = outC->_L1.Q_SCALE;
  outC->_L216 = outC->_L1.L_PACKET;
  outC->_L215 = outC->_L1.Q_DIR;
  outC->_L387 = outC->_L1.NID_PACKET;
  /* 1 */
  T_Build_Metadata_Packet_ID_TM_lib_internal(
    outC->_L387,
    outC->_L215,
    0,
    15,
    INT_M_VERSION_2_0_TM,
    &outC->Context_1);
  outC->_L404 = outC->Context_1.nid_packet_meta;
  outC->n_iter = outC->_L396;
  outC->_L402 = outC->n_iter;
  for (i1 = 0; i1 < 1; i1++) {
    outC->_L403[i1] = outC->_L402;
  }
  outC->_L373[0] = outC->_L387;
  outC->_L373[1] = outC->_L215;
  outC->_L373[2] = outC->_L216;
  outC->_L373[3] = outC->_L217;
  outC->_L373[4] = outC->_L218;
  outC->_L373[5] = outC->_L219;
  outC->_L399[0] = outC->_L370;
  outC->_L399[1] = outC->_L369;
  outC->_L399[2] = outC->_L405;
  outC->_L399[3] = outC->_L368;
  outC->_L399[4] = outC->_L367;
  outC->_L399[5] = outC->_L366;
  outC->_L399[6] = outC->_L365;
  outC->_L399[7] = outC->_L395;
  outC->_L399[8] = outC->_L394;
  outC->_L399[9] = outC->_L393;
  outC->_L399[10] = outC->_L392;
  outC->_L399[11] = outC->_L391;
  outC->_L399[12] = outC->_L390;
  outC->_L399[13] = outC->_L389;
  outC->_L399[14] = outC->_L388;
  kcg_copy_array_int_6(&outC->_L381[0], &outC->_L373);
  kcg_copy_array_int_15(&outC->_L381[6], &outC->_L399);
  kcg_copy_array_int_21(&outC->_L400[0], &outC->_L381);
  kcg_copy_array_int_1(&outC->_L400[21], &outC->_L403);
  kcg_copy_P015_trackide_sectionlist_T_TM(&outC->sections, &outC->_L371);
  kcg_copy_P015_trackide_sectionlist_T_TM(&outC->_L398, &outC->sections);
  /* 1 */
  C_P015_flatten_sections_TM_lib_internal(&outC->_L398, &outC->_1_Context_1);
  kcg_copy_P015_sections_array_flat_T_TM(
    &outC->_L380,
    &outC->_1_Context_1.Flattened);
  kcg_copy_array_int_22(&outC->_L384[0], &outC->_L400);
  kcg_copy_P015_sections_array_flat_T_TM(&outC->_L384[22], &outC->_L380);
  outC->_L336 = 0;
  for (i = 0; i < 350; i++) {
    outC->_L209[i] = outC->_L336;
  }
  kcg_copy_array_int_150(&outC->_L383[0], &outC->_L384);
  kcg_copy_array_int_350(&outC->_L383[150], &outC->_L209);
  /* 1 */
  T_DeterminePacketSizeInt_TM_lib_internal(
    outC->_L396,
    6 + 1 + 15,
    4,
    &outC->_2_Context_1);
  outC->_L379 = outC->_2_Context_1.p_size;
  outC->p_size = outC->_L379;
  outC->_L378 = outC->p_size;
  outC->q_dir_int_1 = outC->_L215;
  outC->_L12_1 = outC->q_dir_int_1;
  outC->q_dir_in_1 = outC->_L12_1;
  outC->IfBlock1_clock_1 = outC->q_dir_in_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  if (outC->IfBlock1_clock_1) {
    outC->_L4_15_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _11_q_dir_1 = outC->_L4_15_IfBlock1;
    outC->q_dir_1 = _11_q_dir_1;
  }
  else {
    outC->_4_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    if (outC->_4_else_clock_1_IfBlock1) {
      outC->_L3_1_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = outC->_L3_1_IfBlock1;
      _9_q_dir_1 = q_dir_1;
    }
    else {
      outC->else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
        INT_Q_DIR_both_TM_conversions;
      if (outC->else_clock_1_IfBlock1) {
        outC->_L2_13_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _6_q_dir_1 = outC->_L2_13_IfBlock1;
        _3_q_dir_1 = _6_q_dir_1;
      }
      else {
        outC->_L2_1_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _4_q_dir_1 = outC->_L2_1_IfBlock1;
        _3_q_dir_1 = _4_q_dir_1;
      }
      _9_q_dir_1 = _3_q_dir_1;
    }
    outC->q_dir_1 = _9_q_dir_1;
  }
  outC->_L356 = outC->q_dir_1;
  outC->_L214 = outC->_L1.valid;
  outC->_L213 = 1;
  outC->_L212 = outC->_L378 - outC->_L213;
  outC->_L206 = 0;
  outC->_L204.nid_packet = outC->_L404;
  outC->_L204.q_dir = outC->_L356;
  outC->_L204.valid = outC->_L214;
  outC->_L204.startAddress = outC->_L206;
  outC->_L204.endAddress = outC->_L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L204);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P015_compressed,
    &outC->_L383);
  if (outC->IfBlock1_clock_1) {
    outC->_L5_16_IfBlock1 = kcg_false;
    _10_error_1 = outC->_L5_16_IfBlock1;
    outC->error_1 = _10_error_1;
  }
  else {
    if (outC->_4_else_clock_1_IfBlock1) {
      outC->_L5_1_IfBlock1 = kcg_false;
      error_1 = outC->_L5_1_IfBlock1;
      _8_error_1 = error_1;
    }
    else {
      if (outC->else_clock_1_IfBlock1) {
        outC->_L4_1_IfBlock1 = kcg_false;
        _7_error_1 = outC->_L4_1_IfBlock1;
        _2_error_1 = _7_error_1;
      }
      else {
        outC->_L1_1_IfBlock1 = kcg_true;
        _5_error_1 = outC->_L1_1_IfBlock1;
        _2_error_1 = _5_error_1;
      }
      _8_error_1 = _2_error_1;
    }
    outC->error_1 = _8_error_1;
  }
  outC->_L13_1 = outC->error_1;
  noname_1 = outC->_L13_1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P015_tracksim_compr_TM_conversions.c
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */

