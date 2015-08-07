/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Decode_P015_TA_MA.h"

void Decode_P015_reset_TA_MA(outC_Decode_P015_TA_MA *outC)
{
  /* 1 */ EVAL_T_LOA_reset_TA_Lib_internal(&outC->_6_Context_1);
  /* 1 */ EVAL_Q_DANGERPOINT_reset_TA_Lib_internal(&outC->_5_Context_1);
  /* 1 */ EVAL_Q_OVERLAP_reset_TA_Lib_internal(&outC->_4_Context_1);
  /* 1 */ Eval_Q_SCALE_reset_TA_MRSP(&outC->_3_Context_1);
  /* 1 */ DecodeMASection_reset_TA_MA(&outC->_2_Context_1);
  /* 1 */ EVAL_V_Release_reset_TA_Lib_internal(&outC->Context_1);
  /* 2 */ Eval_Q_SCALE_reset_TA_MRSP(&outC->_1_Context_2);
  /* 2 */ EVAL_V_Release_reset_TA_Lib_internal(&outC->Context_2);
  /* 3 */ Eval_Q_SCALE_reset_TA_MRSP(&outC->Context_3);
}

/* TA_MA::Decode_P015 */
void Decode_P015_TA_MA(
  /* TA_MA::Decode_P015::MA_onboard_in */P015_OBU_T_TM *MA_onboard_in,
  /* TA_MA::Decode_P015::NV_in */P003V1_OBU_T_TM_baseline2 *NV_in,
  outC_Decode_P015_TA_MA *outC)
{
  Q_SECTIONTIMER noname;
  T_SECTIONTIMER _1_noname;
  D_SECTIONTIMERSTOPLOC _2_noname;
  Q_ENDTIMER _3_noname;
  T_ENDTIMER _4_noname;
  D_ENDTIMERSTARTLOC _5_noname;
  T_OL _6_noname;
  V_NVREL _7_noname;
  L_internal_Type_Obu_BasicTypes_Pkg _8_noname;
  MovementAuthoritySection_t_TrackAtlasTypes _9_noname;
  D_STARTOL _10_noname;
  
  kcg_copy_P015_OBU_T_TM(&outC->_L1, MA_onboard_in);
  outC->_L169 = outC->_L1.v_releaseol;
  outC->_L22 = outC->_L1.d_ol;
  outC->_L21 = outC->_L1.t_ol;
  outC->_L20 = outC->_L1.d_startol;
  outC->_L19 = outC->_L1.q_overlap;
  outC->_L18 = outC->_L1.v_releasedp;
  outC->_L17 = outC->_L1.d_dp;
  outC->_L16 = outC->_L1.q_dangerpoint;
  outC->_L15 = outC->_L1.d_endtimerstartloc;
  outC->_L14 = outC->_L1.t_endtimer;
  outC->_L13 = outC->_L1.q_endtimer;
  outC->_L12 = outC->_L1.d_sectiontimerstoploc;
  outC->_L11 = outC->_L1.t_sectiontimer;
  outC->_L10 = outC->_L1.q_sectiontimer;
  outC->_L9 = outC->_L1.l_endsection;
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->_L8, &outC->_L1.sections);
  outC->_L7 = outC->_L1.n_iter;
  outC->_L6 = outC->_L1.t_loa;
  outC->_L5 = outC->_L1.v_loa;
  outC->_L4 = outC->_L1.q_scale;
  outC->_L3 = outC->_L1.q_dir;
  _10_noname = outC->_L20;
  /* 3 */ Eval_Q_SCALE_TA_MRSP(outC->_L4, outC->_L22, &outC->Context_3);
  outC->_L58 = outC->Context_3.d_out;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L162, NV_in);
  outC->_L161 = outC->_L162.v_nvrel;
  /* 2 */
  EVAL_V_Release_TA_Lib_internal(outC->_L161, outC->_L169, &outC->Context_2);
  outC->_L59 = outC->Context_2.V_out;
  outC->_L180 = outC->Context_2.calc_onboard;
  outC->_L182.d_DP_or_OL = outC->_L58;
  outC->_L182.v_release = outC->_L59;
  outC->_L182.calc_v_release_onboard = outC->_L180;
  /* 2 */ Eval_Q_SCALE_TA_MRSP(outC->_L4, outC->_L17, &outC->_1_Context_2);
  outC->_L46 = outC->_1_Context_2.d_out;
  /* 1 */
  EVAL_V_Release_TA_Lib_internal(outC->_L161, outC->_L18, &outC->Context_1);
  outC->_L56 = outC->Context_1.V_out;
  outC->_L179 = outC->Context_1.calc_onboard;
  outC->_L178.d_DP_or_OL = outC->_L46;
  outC->_L178.v_release = outC->_L56;
  outC->_L178.calc_v_release_onboard = outC->_L179;
  /* 1 */ DecodeMASection_TA_MA(&outC->_L8, &outC->_2_Context_1);
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
    &outC->_L53,
    &outC->_2_Context_1.MA_section_out);
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&_9_noname, &outC->_L53);
  kcg_copy__4_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L168,
    (_4_MovementAuthoritySectionlist_t_TrackAtlasTypes *)
      &DEFAULT_MA_sectionlist_TrackAtlasTypes);
  /* 1 */ Eval_Q_SCALE_TA_MRSP(outC->_L4, outC->_L9, &outC->_3_Context_1);
  outC->_L45 = outC->_3_Context_1.d_out;
  _8_noname = outC->_L45;
  kcg_copy_Endtimer_t_TrackAtlasTypes(
    &outC->_L166,
    (Endtimer_t_TrackAtlasTypes *) &DEFAULT_Endtimer_TrackAtlasTypes);
  outC->_L165 = kcg_false;
  outC->_L164 = DEFAULT_MA_level_23_TrackAtlasTypes;
  outC->_L163 = 0;
  _7_noname = outC->_L161;
  _6_noname = outC->_L21;
  _5_noname = outC->_L15;
  /* 1 */ EVAL_Q_OVERLAP_TA_Lib_internal(outC->_L19, &outC->_4_Context_1);
  outC->_L57 = outC->_4_Context_1.q_dp_bool;
  /* 1 */ EVAL_Q_DANGERPOINT_TA_Lib_internal(outC->_L16, &outC->_5_Context_1);
  outC->_L54 = outC->_5_Context_1.q_dp_bool;
  _4_noname = outC->_L14;
  _3_noname = outC->_L13;
  outC->_L2 = outC->_L1.valid;
  /* 1 */ EVAL_T_LOA_TA_Lib_internal(outC->_L6, &outC->_6_Context_1);
  outC->_L47 = outC->_6_Context_1.t_loa_unlimited;
  outC->_L48 = outC->_6_Context_1.t_loa_out;
  outC->_L49.valid = outC->_L2;
  outC->_L49.Level = outC->_L164;
  outC->_L49.q_dir = outC->_L3;
  outC->_L49.v_main = outC->_L163;
  outC->_L49.v_loa = outC->_L5;
  outC->_L49.t_loa_unlimited = outC->_L47;
  outC->_L49.t_loa = outC->_L48;
  outC->_L49.n_iter = outC->_L7;
  kcg_copy__4_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L49.sections,
    &outC->_L168);
  outC->_L49.q_dangerpoint = outC->_L54;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L49.dangerpoint, &outC->_L178);
  outC->_L49.q_overlap = outC->_L57;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L49.overlap, &outC->_L182);
  outC->_L49.q_endtimer = outC->_L165;
  kcg_copy_Endtimer_t_TrackAtlasTypes(&outC->_L49.endtimer_t, &outC->_L166);
  _2_noname = outC->_L12;
  _1_noname = outC->_L11;
  noname = outC->_L10;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_decoded_out,
    &outC->_L49);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Decode_P015_TA_MA.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

