/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P012_compr_onboard_TM_conversions.h"

void C_P012_compr_onboard_reset_TM_conversions(
  outC_C_P012_compr_onboard_TM_conversions *outC)
{
  /* 1 */ CAST_Int_to_D_OL_reset_TM_conversions(&outC->_18_Context_1);
  /* 1 */ CAST_Int_to_Q_OVERLAP_reset_TM_conversions(&outC->_17_Context_1);
  /* 1 */ CAST_Int_to_D_DP_reset_TM_conversions(&outC->_16_Context_1);
  /* 1 */ CAST_Int_to_Q_DANGERPOINT_reset_TM_conversions(&outC->_15_Context_1);
  /* 1 */ CAST_Int_to_T_ENDTIMER_reset_TM_conversions(&outC->_14_Context_1);
  /* 1 */ CAST_Int_to_Q_SECTIONTIMER_reset_TM_conversions(&outC->_13_Context_1);
  /* 1 */ CAST_Int_to_T_LOA_reset_TM_conversions(&outC->_12_Context_1);
  /* 1 */ CAST_Int_to_V_LOA_reset_TM_conversions(&outC->_11_Context_1);
  /* 1 */ CAST_Int_to_T_OL_reset_TM_conversions(&outC->_10_Context_1);
  /* 1 */ CAST_Int_to_Q_ENDTIMER_reset_TM_conversions(&outC->_9_Context_1);
  /* 1 */ CAST_Int_to_V_RELEASEDP_reset_TM_conversions(&outC->_8_Context_1);
  /* 1 */ CAST_Int_to_L_ENDSECTION_reset_TM_conversions(&outC->_7_Context_1);
  /* 1 */ CAST_Int_to_V_RELEASEOL_reset_TM_conversions(&outC->_6_Context_1);
  /* 1 */
  CAST_Int_to_D_ENDTIMERSTARTLOC_reset_TM_conversions(&outC->_5_Context_1);
  /* 1 */ CAST_Int_to_D_STARTOL_reset_TM_conversions(&outC->_4_Context_1);
  /* 1 */
  CAST_Int_to_D_SECTIONTIMERSTOPLOC_reset_TM_conversions(&outC->_3_Context_1);
  /* 1 */ C_P012_unflatten_sections_reset_TM_lib_internal(&outC->_2_Context_1);
  /* 1 */ CAST_Int_to_T_SECTIONTIMER_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_V_MAIN_reset_TM_conversions(&outC->Context_1);
}

/* TM_conversions::C_P012_compr_onboard */
void C_P012_compr_onboard_TM_conversions(
  /* TM_conversions::C_P012_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P012_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P012_compr_onboard_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _26_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _25_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _24_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _23_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _22_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _21_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _20_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _19_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _18_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _17_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _16_error_1;
  kcg_bool _15_noname_1;
  kcg_bool _14_noname_1;
  kcg_bool _13_noname_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _12_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _11_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _10_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _9_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _8_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _7_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _6_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _5_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _4_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _3_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool error_1;
  kcg_bool _2_noname_1;
  kcg_bool _1_noname_1;
  kcg_bool noname_1;
  MetadataElement_T_Common_Types_Pkg noname;
  kcg_int _27_noname;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L93, PacketData);
  kcg_copy_array_int_7(&outC->_L125, (array_int_7 *) &outC->_L93[0]);
  outC->_L146 = outC->_L125[6];
  outC->_L101 = outC->_L125[5];
  outC->_L100 = outC->_L125[4];
  outC->_L99 = outC->_L125[3];
  outC->_L98 = outC->_L125[2];
  outC->_L97 = outC->_L125[1];
  kcg_copy_array_int_15(&outC->_L138, (array_int_15 *) &outC->_L93[7]);
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
  /* 1 */ CAST_Int_to_V_MAIN_TM_conversions(outC->_L100, &outC->Context_1);
  outC->_L145 = outC->Context_1.v_main;
  kcg_copy_array_int_128(&outC->_L144, (array_int_128 *) &outC->_L93[23]);
  /* 1 */
  CAST_Int_to_T_SECTIONTIMER_TM_conversions(outC->_L106, &outC->_1_Context_1);
  outC->_L143 = outC->_1_Context_1.t_sectiontimer;
  outC->_L124 = 12;
  outC->_L96 = outC->_L125[0];
  outC->nid_packet_int_1 = outC->_L96;
  outC->_L1_1 = outC->nid_packet_int_1;
  outC->nid_packet_1 = outC->_L1_1;
  outC->_L128 = outC->nid_packet_1;
  outC->_L132 = outC->_L124 == outC->_L128;
  outC->nid_packet_ok = outC->_L132;
  outC->_L140 = outC->nid_packet_ok;
  outC->_L139 = outC->_L93[22];
  outC->n_iter_int_1 = outC->_L139;
  outC->_L1_126 = outC->n_iter_int_1;
  outC->n_iter_1 = outC->_L1_126;
  outC->_L135 = outC->n_iter_1;
  /* 1 */
  C_P012_unflatten_sections_TM_lib_internal(
    outC->_L140,
    outC->_L135,
    &outC->_L144,
    &outC->_2_Context_1);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(
    &outC->_L102,
    &outC->_2_Context_1.sections);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->sections, &outC->_L102);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->_L141, &outC->sections);
  /* 1 */
  CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions(
    outC->_L107,
    &outC->_3_Context_1);
  outC->_L137 = outC->_3_Context_1.d_sectiontimerstoploc;
  outC->q_dir_int_1 = outC->_L97;
  outC->_27__L12_1 = outC->q_dir_int_1;
  outC->q_dir_in_1 = outC->_27__L12_1;
  outC->_29_IfBlock1_clock_1 = outC->q_dir_in_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  if (outC->_29_IfBlock1_clock_1) {
    outC->_L4_137_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _26_q_dir_1 = outC->_L4_137_IfBlock1;
    outC->q_dir_1 = _26_q_dir_1;
  }
  else {
    outC->_36_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    if (outC->_36_else_clock_1_IfBlock1) {
      outC->_L3_130_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = outC->_L3_130_IfBlock1;
      _24_q_dir_1 = q_dir_1;
    }
    else {
      outC->_31_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
        INT_Q_DIR_both_TM_conversions;
      if (outC->_31_else_clock_1_IfBlock1) {
        outC->_L2_134_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _21_q_dir_1 = outC->_L2_134_IfBlock1;
        _18_q_dir_1 = _21_q_dir_1;
      }
      else {
        outC->_L2_132_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _19_q_dir_1 = outC->_L2_132_IfBlock1;
        _18_q_dir_1 = _19_q_dir_1;
      }
      _24_q_dir_1 = _18_q_dir_1;
    }
    outC->q_dir_1 = _24_q_dir_1;
  }
  outC->_L136 = outC->q_dir_1;
  /* 1 */
  CAST_Int_to_D_STARTOL_TM_conversions(outC->_L115, &outC->_4_Context_1);
  outC->_L134 = outC->_4_Context_1.d_startol;
  /* 1 */
  CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions(
    outC->_L110,
    &outC->_5_Context_1);
  outC->_L133 = outC->_5_Context_1.d_endtimerstartloc;
  outC->n_iter = outC->_L135;
  /* 1 */
  CAST_Int_to_V_RELEASEOL_TM_conversions(outC->_L142, &outC->_6_Context_1);
  outC->_L131 = outC->_6_Context_1.v_releaseol;
  outC->q_scale_int_1 = outC->_L99;
  outC->_L2_120 = outC->q_scale_int_1;
  outC->q_scale_in_1 = outC->_L2_120;
  outC->IfBlock1_clock_1 = outC->q_scale_in_1 ==
    INT_Q_SCALE_10cm_TM_conversions;
  if (outC->IfBlock1_clock_1) {
    outC->_L2_124_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
    _12_q_scale_1 = outC->_L2_124_IfBlock1;
    outC->q_scale_1 = _12_q_scale_1;
  }
  else {
    outC->_23_else_clock_1_IfBlock1 = outC->q_scale_in_1 ==
      INT_Q_SCALE_1m_TM_conversions;
    if (outC->_23_else_clock_1_IfBlock1) {
      outC->_L1_1_IfBlock1 = ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_1 = outC->_L1_1_IfBlock1;
      _10_q_scale_1 = q_scale_1;
    }
    else {
      outC->else_clock_1_IfBlock1 = outC->q_scale_in_1 ==
        INT_Q_SCALE_10m_TM_conversions;
      if (outC->else_clock_1_IfBlock1) {
        outC->_L1_122_IfBlock1 = ENUM_Q_SCALE_10m_TM_conversions;
        _7_q_scale_1 = outC->_L1_122_IfBlock1;
        _4_q_scale_1 = _7_q_scale_1;
      }
      else {
        outC->_L1_121_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
        _5_q_scale_1 = outC->_L1_121_IfBlock1;
        _4_q_scale_1 = _5_q_scale_1;
      }
      _10_q_scale_1 = _4_q_scale_1;
    }
    outC->q_scale_1 = _10_q_scale_1;
  }
  outC->_L130 = outC->q_scale_1;
  outC->_L104 = outC->_L138[0];
  /* 1 */
  CAST_Int_to_L_ENDSECTION_TM_conversions(outC->_L104, &outC->_7_Context_1);
  outC->_L129 = outC->_7_Context_1.l_endsection;
  _27_noname = outC->_L98;
  /* 1 */
  CAST_Int_to_V_RELEASEDP_TM_conversions(outC->_L113, &outC->_8_Context_1);
  outC->_L127 = outC->_8_Context_1.v_releasedp;
  /* 1 */
  CAST_Int_to_Q_ENDTIMER_TM_conversions(outC->_L108, &outC->_9_Context_1);
  outC->_L126 = outC->_9_Context_1.q_endtimer;
  /* 1 */ CAST_Int_to_T_OL_TM_conversions(outC->_L116, &outC->_10_Context_1);
  outC->_L123 = outC->_10_Context_1.t_ol;
  /* 1 */ CAST_Int_to_V_LOA_TM_conversions(outC->_L101, &outC->_11_Context_1);
  outC->_L92 = outC->_11_Context_1.v_loa;
  /* 1 */ CAST_Int_to_T_LOA_TM_conversions(outC->_L146, &outC->_12_Context_1);
  outC->_L121 = outC->_12_Context_1.t_loa;
  outC->_L95 = outC->n_iter;
  /* 1 */
  CAST_Int_to_Q_SECTIONTIMER_TM_conversions(outC->_L105, &outC->_13_Context_1);
  outC->_L118 = outC->_13_Context_1.q_sectiontimer;
  /* 1 */
  CAST_Int_to_T_ENDTIMER_TM_conversions(outC->_L109, &outC->_14_Context_1);
  outC->_L94 = outC->_14_Context_1.t_endtimer;
  /* 1 */
  CAST_Int_to_Q_DANGERPOINT_TM_conversions(outC->_L111, &outC->_15_Context_1);
  outC->_L119 = outC->_15_Context_1.q_dangerpoint;
  /* 1 */ CAST_Int_to_D_DP_TM_conversions(outC->_L112, &outC->_16_Context_1);
  outC->_L90 = outC->_16_Context_1.d_dp;
  /* 1 */
  CAST_Int_to_Q_OVERLAP_TM_conversions(outC->_L114, &outC->_17_Context_1);
  outC->_L103 = outC->_17_Context_1.q_overlap;
  /* 1 */ CAST_Int_to_D_OL_TM_conversions(outC->_L117, &outC->_18_Context_1);
  outC->_L91 = outC->_18_Context_1.d_ol;
  outC->_L122.valid = outC->_L132;
  outC->_L122.q_dir = outC->_L136;
  outC->_L122.q_scale = outC->_L130;
  outC->_L122.v_main = outC->_L145;
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
  kcg_copy_P012_OBU_T_TM(&outC->P012_onboard, &outC->_L122);
  outC->_L5_1 = 0;
  outC->_L4_1 = outC->_L1_1 < outC->_L5_1;
  outC->_L3_1 = 256;
  outC->_L2_1 = outC->_L1_1 > outC->_L3_1;
  noname_1 = outC->_L2_1;
  _1_noname_1 = outC->_L4_1;
  if (outC->IfBlock1_clock_1) {
    outC->_L3_125_IfBlock1 = kcg_false;
    _11_error_1 = outC->_L3_125_IfBlock1;
    outC->error_1 = _11_error_1;
  }
  else {
    if (outC->_23_else_clock_1_IfBlock1) {
      outC->_L3_1_IfBlock1 = kcg_false;
      error_1 = outC->_L3_1_IfBlock1;
      _9_error_1 = error_1;
    }
    else {
      if (outC->else_clock_1_IfBlock1) {
        outC->_L4_1_IfBlock1 = kcg_false;
        _8_error_1 = outC->_L4_1_IfBlock1;
        _3_error_1 = _8_error_1;
      }
      else {
        outC->_L2_1_IfBlock1 = kcg_true;
        _6_error_1 = outC->_L2_1_IfBlock1;
        _3_error_1 = _6_error_1;
      }
      _9_error_1 = _3_error_1;
    }
    outC->error_1 = _9_error_1;
  }
  outC->_L4_119 = outC->error_1;
  _2_noname_1 = outC->_L4_119;
  outC->_L11_1 = 0;
  outC->_L10_1 = outC->_L1_126 < outC->_L11_1;
  _13_noname_1 = outC->_L10_1;
  outC->_L9_1 = 31;
  outC->_L12_1 = outC->_L1_126 > outC->_L9_1;
  _14_noname_1 = outC->_L12_1;
  if (outC->_29_IfBlock1_clock_1) {
    outC->_L5_138_IfBlock1 = kcg_false;
    _25_error_1 = outC->_L5_138_IfBlock1;
    outC->_28_error_1 = _25_error_1;
  }
  else {
    if (outC->_36_else_clock_1_IfBlock1) {
      outC->_L5_1_IfBlock1 = kcg_false;
      _16_error_1 = outC->_L5_1_IfBlock1;
      _23_error_1 = _16_error_1;
    }
    else {
      if (outC->_31_else_clock_1_IfBlock1) {
        outC->_L4_135_IfBlock1 = kcg_false;
        _22_error_1 = outC->_L4_135_IfBlock1;
        _17_error_1 = _22_error_1;
      }
      else {
        outC->_L1_133_IfBlock1 = kcg_true;
        _20_error_1 = outC->_L1_133_IfBlock1;
        _17_error_1 = _20_error_1;
      }
      _23_error_1 = _17_error_1;
    }
    outC->_28_error_1 = _23_error_1;
  }
  outC->_L13_1 = outC->_28_error_1;
  _15_noname_1 = outC->_L13_1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P012_compr_onboard_TM_conversions.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

