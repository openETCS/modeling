/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_compr_onboard_TM_conversions.h"

void C_P015_compr_onboard_reset_TM_conversions(
  outC_C_P015_compr_onboard_TM_conversions *outC)
{
  /* 2 */ CAST_Int_to_D_OL_reset_TM_conversions(&outC->_16_Context_2);
  /* 2 */ CAST_Int_to_Q_OVERLAP_reset_TM_conversions(&outC->_15_Context_2);
  /* 2 */ CAST_Int_to_D_DP_reset_TM_conversions(&outC->_14_Context_2);
  /* 2 */ CAST_Int_to_Q_DANGERPOINT_reset_TM_conversions(&outC->_13_Context_2);
  /* 2 */ CAST_Int_to_T_ENDTIMER_reset_TM_conversions(&outC->_12_Context_2);
  /* 2 */ CAST_Int_to_Q_SECTIONTIMER_reset_TM_conversions(&outC->_11_Context_2);
  /* 2 */ CAST_Int_to_T_LOA_reset_TM_conversions(&outC->_10_Context_2);
  /* 2 */ CAST_Int_to_V_LOA_reset_TM_conversions(&outC->_9_Context_2);
  /* 2 */ CAST_Int_to_T_OL_reset_TM_conversions(&outC->_8_Context_2);
  /* 2 */ CAST_Int_to_Q_ENDTIMER_reset_TM_conversions(&outC->_7_Context_2);
  /* 2 */ CAST_Int_to_V_RELEASEDP_reset_TM_conversions(&outC->_6_Context_2);
  /* 2 */ CAST_Int_to_L_ENDSECTION_reset_TM_conversions(&outC->_5_Context_2);
  /* 2 */ CAST_Int_to_V_RELEASEOL_reset_TM_conversions(&outC->_4_Context_2);
  /* 2 */
  CAST_Int_to_D_ENDTIMERSTARTLOC_reset_TM_conversions(&outC->_3_Context_2);
  /* 2 */ CAST_Int_to_D_STARTOL_reset_TM_conversions(&outC->_2_Context_2);
  /* 2 */
  CAST_Int_to_D_SECTIONTIMERSTOPLOC_reset_TM_conversions(&outC->Context_2);
  /* 1 */ C_P015_unflatten_sections_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_T_SECTIONTIMER_reset_TM_conversions(&outC->Context_1);
}

/* TM_conversions::C_P015_compr_onboard */
void C_P015_compr_onboard_TM_conversions(
  /* TM_conversions::C_P015_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P015_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P015_compr_onboard_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _25_q_dir_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _24_error_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _23_q_dir_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _22_error_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _21_error_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _20_q_dir_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _19_error_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _18_q_dir_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _17_q_dir_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _16_error_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _15_error_2;
  kcg_bool _14_noname_2;
  kcg_bool _13_noname_3;
  kcg_bool noname_3;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _12_q_scale_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _11_error_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _10_q_scale_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _9_error_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _8_error_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _7_q_scale_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _6_error_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _5_q_scale_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _4_q_scale_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _3_error_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE q_scale_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool error_2;
  kcg_bool _2_noname_2;
  kcg_bool _1_noname_2;
  kcg_bool noname_2;
  MetadataElement_T_Common_Types_Pkg noname;
  kcg_int _26_noname;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L93, PacketData);
  kcg_copy_array_int_6(&outC->_L125, (array_int_6 *) &outC->_L93[0]);
  outC->_L101 = outC->_L125[5];
  outC->_L100 = outC->_L125[4];
  outC->_L99 = outC->_L125[3];
  outC->_L98 = outC->_L125[2];
  outC->_L97 = outC->_L125[1];
  kcg_copy_array_int_15(&outC->_L138, (array_int_15 *) &outC->_L93[6]);
  outC->_L142 = outC->_L138[14];
  outC->_L117 = outC->_L138[13];
  outC->_L116 = outC->_L138[12];
  outC->_L115 = outC->_L138[11];
  outC->_L114 = outC->_L138[10];
  outC->_L113 = outC->_L138[9];
  outC->_L112 = outC->_L138[8];
  outC->_L111 = outC->_L138[7];
  outC->_L110 = outC->_L138[6];
  outC->_L109 = outC->_L138[5];
  outC->_L108 = outC->_L138[4];
  outC->_L107 = outC->_L138[3];
  outC->_L106 = outC->_L138[2];
  outC->_L105 = outC->_L138[1];
  /* 1 */
  CAST_Int_to_T_SECTIONTIMER_TM_conversions(outC->_L106, &outC->Context_1);
  outC->_L143 = outC->Context_1.t_sectiontimer;
  outC->_L124 = 15;
  outC->_L96 = outC->_L125[0];
  outC->nid_packet_int_2 = outC->_L96;
  outC->_L1_2 = outC->nid_packet_int_2;
  outC->nid_packet_2 = outC->_L1_2;
  outC->_L128 = outC->nid_packet_2;
  outC->_L132 = outC->_L124 == outC->_L128;
  outC->nid_packet_ok = outC->_L132;
  outC->_L140 = outC->nid_packet_ok;
  outC->_L139 = outC->_L93[21];
  outC->n_iter_int_3 = outC->_L139;
  outC->_L1_3 = outC->n_iter_int_3;
  outC->n_iter_3 = outC->_L1_3;
  outC->_L135 = outC->n_iter_3;
  kcg_copy_array_int_128(&outC->_L120, (array_int_128 *) &outC->_L93[22]);
  /* 1 */
  C_P015_unflatten_sections_TM_lib_internal(
    outC->_L140,
    outC->_L135,
    &outC->_L120,
    &outC->_1_Context_1);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(
    &outC->_L102,
    &outC->_1_Context_1.sections);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->sections, &outC->_L102);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->_L141, &outC->sections);
  /* 2 */
  CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions(
    outC->_L107,
    &outC->Context_2);
  outC->_L137 = outC->Context_2.d_sectiontimerstoploc;
  outC->q_dir_int_2 = outC->_L97;
  outC->_L12_2 = outC->q_dir_int_2;
  outC->q_dir_in_2 = outC->_L12_2;
  outC->_25_IfBlock1_clock_2 = outC->q_dir_in_2 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  if (outC->_25_IfBlock1_clock_2) {
    outC->_L4_233_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _25_q_dir_2 = outC->_L4_233_IfBlock1;
    outC->q_dir_2 = _25_q_dir_2;
  }
  else {
    outC->_32_else_clock_2_IfBlock1 = outC->q_dir_in_2 ==
      INT_Q_DIR_reverse_TM_conversions;
    if (outC->_32_else_clock_2_IfBlock1) {
      outC->_L3_226_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_2 = outC->_L3_226_IfBlock1;
      _23_q_dir_2 = q_dir_2;
    }
    else {
      outC->_27_else_clock_2_IfBlock1 = outC->q_dir_in_2 ==
        INT_Q_DIR_both_TM_conversions;
      if (outC->_27_else_clock_2_IfBlock1) {
        outC->_L2_230_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _20_q_dir_2 = outC->_L2_230_IfBlock1;
        _17_q_dir_2 = _20_q_dir_2;
      }
      else {
        outC->_L2_228_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _18_q_dir_2 = outC->_L2_228_IfBlock1;
        _17_q_dir_2 = _18_q_dir_2;
      }
      _23_q_dir_2 = _17_q_dir_2;
    }
    outC->q_dir_2 = _23_q_dir_2;
  }
  outC->_L136 = outC->q_dir_2;
  /* 2 */
  CAST_Int_to_D_STARTOL_TM_conversions(outC->_L115, &outC->_2_Context_2);
  outC->_L134 = outC->_2_Context_2.d_startol;
  /* 2 */
  CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions(
    outC->_L110,
    &outC->_3_Context_2);
  outC->_L133 = outC->_3_Context_2.d_endtimerstartloc;
  outC->n_iter = outC->_L135;
  /* 2 */
  CAST_Int_to_V_RELEASEOL_TM_conversions(outC->_L142, &outC->_4_Context_2);
  outC->_L131 = outC->_4_Context_2.v_releaseol;
  outC->q_scale_int_2 = outC->_L99;
  outC->_L2_218 = outC->q_scale_int_2;
  outC->q_scale_in_2 = outC->_L2_218;
  outC->IfBlock1_clock_2 = outC->q_scale_in_2 ==
    INT_Q_SCALE_10cm_TM_conversions;
  if (outC->IfBlock1_clock_2) {
    outC->_L2_222_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
    _12_q_scale_2 = outC->_L2_222_IfBlock1;
    outC->q_scale_2 = _12_q_scale_2;
  }
  else {
    outC->_21_else_clock_2_IfBlock1 = outC->q_scale_in_2 ==
      INT_Q_SCALE_1m_TM_conversions;
    if (outC->_21_else_clock_2_IfBlock1) {
      outC->_L1_2_IfBlock1 = ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_2 = outC->_L1_2_IfBlock1;
      _10_q_scale_2 = q_scale_2;
    }
    else {
      outC->else_clock_2_IfBlock1 = outC->q_scale_in_2 ==
        INT_Q_SCALE_10m_TM_conversions;
      if (outC->else_clock_2_IfBlock1) {
        outC->_L1_220_IfBlock1 = ENUM_Q_SCALE_10m_TM_conversions;
        _7_q_scale_2 = outC->_L1_220_IfBlock1;
        _4_q_scale_2 = _7_q_scale_2;
      }
      else {
        outC->_L1_219_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
        _5_q_scale_2 = outC->_L1_219_IfBlock1;
        _4_q_scale_2 = _5_q_scale_2;
      }
      _10_q_scale_2 = _4_q_scale_2;
    }
    outC->q_scale_2 = _10_q_scale_2;
  }
  outC->_L130 = outC->q_scale_2;
  outC->_L104 = outC->_L138[0];
  /* 2 */
  CAST_Int_to_L_ENDSECTION_TM_conversions(outC->_L104, &outC->_5_Context_2);
  outC->_L129 = outC->_5_Context_2.l_endsection;
  _26_noname = outC->_L98;
  /* 2 */
  CAST_Int_to_V_RELEASEDP_TM_conversions(outC->_L113, &outC->_6_Context_2);
  outC->_L127 = outC->_6_Context_2.v_releasedp;
  /* 2 */
  CAST_Int_to_Q_ENDTIMER_TM_conversions(outC->_L108, &outC->_7_Context_2);
  outC->_L126 = outC->_7_Context_2.q_endtimer;
  /* 2 */ CAST_Int_to_T_OL_TM_conversions(outC->_L116, &outC->_8_Context_2);
  outC->_L123 = outC->_8_Context_2.t_ol;
  /* 2 */ CAST_Int_to_V_LOA_TM_conversions(outC->_L100, &outC->_9_Context_2);
  outC->_L92 = outC->_9_Context_2.v_loa;
  /* 2 */ CAST_Int_to_T_LOA_TM_conversions(outC->_L101, &outC->_10_Context_2);
  outC->_L121 = outC->_10_Context_2.t_loa;
  outC->_L95 = outC->n_iter;
  /* 2 */
  CAST_Int_to_Q_SECTIONTIMER_TM_conversions(outC->_L105, &outC->_11_Context_2);
  outC->_L118 = outC->_11_Context_2.q_sectiontimer;
  /* 2 */
  CAST_Int_to_T_ENDTIMER_TM_conversions(outC->_L109, &outC->_12_Context_2);
  outC->_L94 = outC->_12_Context_2.t_endtimer;
  /* 2 */
  CAST_Int_to_Q_DANGERPOINT_TM_conversions(outC->_L111, &outC->_13_Context_2);
  outC->_L119 = outC->_13_Context_2.q_dangerpoint;
  /* 2 */ CAST_Int_to_D_DP_TM_conversions(outC->_L112, &outC->_14_Context_2);
  outC->_L90 = outC->_14_Context_2.d_dp;
  /* 2 */
  CAST_Int_to_Q_OVERLAP_TM_conversions(outC->_L114, &outC->_15_Context_2);
  outC->_L103 = outC->_15_Context_2.q_overlap;
  /* 2 */ CAST_Int_to_D_OL_TM_conversions(outC->_L117, &outC->_16_Context_2);
  outC->_L91 = outC->_16_Context_2.d_ol;
  outC->_L122.valid = outC->_L132;
  outC->_L122.q_dir = outC->_L136;
  outC->_L122.q_scale = outC->_L130;
  outC->_L122.v_loa = outC->_L92;
  outC->_L122.t_loa = outC->_L121;
  outC->_L122.n_iter = outC->_L95;
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->_L122.sections, &outC->_L141);
  outC->_L122.l_endsection = outC->_L129;
  outC->_L122.q_sectiontimer = outC->_L118;
  outC->_L122.t_sectiontimer = outC->_L143;
  outC->_L122.d_sectiontimerstoploc = outC->_L137;
  outC->_L122.q_endtimer = outC->_L126;
  outC->_L122.t_endtimer = outC->_L94;
  outC->_L122.d_endtimerstartloc = outC->_L133;
  outC->_L122.q_dangerpoint = outC->_L119;
  outC->_L122.d_dp = outC->_L90;
  outC->_L122.v_releasedp = outC->_L127;
  outC->_L122.q_overlap = outC->_L103;
  outC->_L122.d_startol = outC->_L134;
  outC->_L122.t_ol = outC->_L123;
  outC->_L122.d_ol = outC->_L91;
  outC->_L122.v_releaseol = outC->_L131;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L89, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L89);
  kcg_copy_P015_OBU_T_TM(&outC->P015_onboard, &outC->_L122);
  outC->_L5_2 = 0;
  outC->_L4_2 = outC->_L1_2 < outC->_L5_2;
  outC->_L3_2 = 256;
  outC->_L2_2 = outC->_L1_2 > outC->_L3_2;
  noname_2 = outC->_L2_2;
  _1_noname_2 = outC->_L4_2;
  if (outC->IfBlock1_clock_2) {
    outC->_L3_223_IfBlock1 = kcg_false;
    _11_error_2 = outC->_L3_223_IfBlock1;
    outC->error_2 = _11_error_2;
  }
  else {
    if (outC->_21_else_clock_2_IfBlock1) {
      outC->_L3_2_IfBlock1 = kcg_false;
      error_2 = outC->_L3_2_IfBlock1;
      _9_error_2 = error_2;
    }
    else {
      if (outC->else_clock_2_IfBlock1) {
        outC->_L4_2_IfBlock1 = kcg_false;
        _8_error_2 = outC->_L4_2_IfBlock1;
        _3_error_2 = _8_error_2;
      }
      else {
        outC->_L2_2_IfBlock1 = kcg_true;
        _6_error_2 = outC->_L2_2_IfBlock1;
        _3_error_2 = _6_error_2;
      }
      _9_error_2 = _3_error_2;
    }
    outC->error_2 = _9_error_2;
  }
  outC->_L4_217 = outC->error_2;
  _2_noname_2 = outC->_L4_217;
  outC->_L11_3 = 0;
  outC->_L10_3 = outC->_L1_3 < outC->_L11_3;
  noname_3 = outC->_L10_3;
  outC->_L9_3 = 31;
  outC->_L12_3 = outC->_L1_3 > outC->_L9_3;
  _13_noname_3 = outC->_L12_3;
  if (outC->_25_IfBlock1_clock_2) {
    outC->_L5_234_IfBlock1 = kcg_false;
    _24_error_2 = outC->_L5_234_IfBlock1;
    outC->_24_error_2 = _24_error_2;
  }
  else {
    if (outC->_32_else_clock_2_IfBlock1) {
      outC->_L5_2_IfBlock1 = kcg_false;
      _15_error_2 = outC->_L5_2_IfBlock1;
      _22_error_2 = _15_error_2;
    }
    else {
      if (outC->_27_else_clock_2_IfBlock1) {
        outC->_L4_231_IfBlock1 = kcg_false;
        _21_error_2 = outC->_L4_231_IfBlock1;
        _16_error_2 = _21_error_2;
      }
      else {
        outC->_L1_229_IfBlock1 = kcg_true;
        _19_error_2 = outC->_L1_229_IfBlock1;
        _16_error_2 = _19_error_2;
      }
      _22_error_2 = _16_error_2;
    }
    outC->_24_error_2 = _22_error_2;
  }
  outC->_L13_2 = outC->_24_error_2;
  _14_noname_2 = outC->_L13_2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P015_compr_onboard_TM_conversions.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

