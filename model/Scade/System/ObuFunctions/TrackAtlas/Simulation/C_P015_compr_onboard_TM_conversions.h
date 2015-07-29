/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _C_P015_compr_onboard_TM_conversions_H_
#define _C_P015_compr_onboard_TM_conversions_H_

#include "kcg_types.h"
#include "C_P015_unflatten_sections_TM_lib_internal.h"
#include "CAST_Int_to_D_DP_TM_conversions.h"
#include "CAST_Int_to_D_OL_TM_conversions.h"
#include "CAST_Int_to_V_LOA_TM_conversions.h"
#include "CAST_Int_to_T_ENDTIMER_TM_conversions.h"
#include "CAST_Int_to_T_SECTIONTIMER_TM_conversions.h"
#include "CAST_Int_to_Q_SECTIONTIMER_TM_conversions.h"
#include "CAST_Int_to_D_SECTIONTIME_TM_conversions.h"
#include "CAST_Int_to_Q_OVERLAP_TM_conversions.h"
#include "CAST_Int_to_Q_DANGERPOINT_TM_conversions.h"
#include "CAST_Int_to_T_LOA_TM_conversions.h"
#include "CAST_Int_to_T_OL_TM_conversions.h"
#include "CAST_Int_to_Q_ENDTIMER_TM_conversions.h"
#include "CAST_Int_to_V_RELEASEDP_TM_conversions.h"
#include "CAST_Int_to_L_ENDSECTION_TM_conversions.h"
#include "CAST_Int_to_V_RELEASEOL_TM_conversions.h"
#include "CAST_Int_to_D_ENDTIMERSTA_TM_conversions.h"
#include "CAST_Int_to_D_STARTOL_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P015_OBU_T_TM /* TM_conversions::C_P015_compr_onboard::P015_onboard */ P015_onboard;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_D_OL_TM_conversions /* 2 */ _16_Context_2;
  outC_CAST_Int_to_Q_OVERLAP_TM_conversions /* 2 */ _15_Context_2;
  outC_CAST_Int_to_D_DP_TM_conversions /* 2 */ _14_Context_2;
  outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions /* 2 */ _13_Context_2;
  outC_CAST_Int_to_T_ENDTIMER_TM_conversions /* 2 */ _12_Context_2;
  outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions /* 2 */ _11_Context_2;
  outC_CAST_Int_to_T_LOA_TM_conversions /* 2 */ _10_Context_2;
  outC_CAST_Int_to_V_LOA_TM_conversions /* 2 */ _9_Context_2;
  outC_CAST_Int_to_T_OL_TM_conversions /* 2 */ _8_Context_2;
  outC_CAST_Int_to_Q_ENDTIMER_TM_conversions /* 2 */ _7_Context_2;
  outC_CAST_Int_to_V_RELEASEDP_TM_conversions /* 2 */ _6_Context_2;
  outC_CAST_Int_to_L_ENDSECTION_TM_conversions /* 2 */ _5_Context_2;
  outC_CAST_Int_to_V_RELEASEOL_TM_conversions /* 2 */ _4_Context_2;
  outC_CAST_Int_to_D_ENDTIMERSTA_TM_conversions /* 2 */ _3_Context_2;
  outC_CAST_Int_to_D_STARTOL_TM_conversions /* 2 */ _2_Context_2;
  outC_CAST_Int_to_D_SECTIONTIME_TM_conversions /* 2 */ Context_2;
  outC_C_P015_unflatten_sections_TM_lib_internal /* 1 */ _1_Context_1;
  outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ _32_else_clock_2_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ _25_IfBlock1_clock_2;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */ _21_else_clock_2_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */ IfBlock1_clock_2;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */ _L5_234_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */ _L4_233_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */ _L4_231_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */ _L2_230_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */ _L1_229_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */ _L2_228_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ _27_else_clock_2_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */ _L3_226_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */ _L5_2_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::error */ _24_error_2;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */ q_dir_in_2;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */ _L13_2;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */ _L12_2;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ q_dir_2;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */ q_dir_int_2;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L1 */ _L1_3;
  kcg_bool /* TM_conversions::CAST_Int_to_N_ITER::_L12 */ _L12_3;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L11 */ _L11_3;
  kcg_bool /* TM_conversions::CAST_Int_to_N_ITER::_L10 */ _L10_3;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L9 */ _L9_3;
  N_ITER /* TM_conversions::CAST_Int_to_N_ITER::n_iter */ n_iter_3;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::n_iter_int */ n_iter_int_3;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */ _L3_223_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */ _L2_222_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */ _L4_2_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */ _L1_220_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */ _L1_219_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L2 */ _L2_2_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */ else_clock_2_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L1 */ _L1_2_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L3 */ _L3_2_IfBlock1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_in */ q_scale_in_2;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::error */ error_2;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::_L2 */ _L2_218;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::_L4 */ _L4_217;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ q_scale_2;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_int */ q_scale_int_2;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L1 */ _L1_2;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L5 */ _L5_2;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L4 */ _L4_2;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L3 */ _L3_2;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L2 */ _L2_2;
  NID_PACKET /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet */ nid_packet_2;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet_int */ nid_packet_int_2;
  N_ITER /* TM_conversions::C_P015_compr_onboard::n_iter */ n_iter;
  kcg_bool /* TM_conversions::C_P015_compr_onboard::nid_packet_ok */ nid_packet_ok;
  P015_OBU_sectionlist_enum_T_TM /* TM_conversions::C_P015_compr_onboard::sections */ sections;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L139 */ _L139;
  array_int_15 /* TM_conversions::C_P015_compr_onboard::_L138 */ _L138;
  D_SECTIONTIMERSTOPLOC /* TM_conversions::C_P015_compr_onboard::_L137 */ _L137;
  Q_DIR /* TM_conversions::C_P015_compr_onboard::_L136 */ _L136;
  N_ITER /* TM_conversions::C_P015_compr_onboard::_L135 */ _L135;
  D_STARTOL /* TM_conversions::C_P015_compr_onboard::_L134 */ _L134;
  D_ENDTIMERSTARTLOC /* TM_conversions::C_P015_compr_onboard::_L133 */ _L133;
  kcg_bool /* TM_conversions::C_P015_compr_onboard::_L132 */ _L132;
  V_RELEASEOL /* TM_conversions::C_P015_compr_onboard::_L131 */ _L131;
  Q_SCALE /* TM_conversions::C_P015_compr_onboard::_L130 */ _L130;
  L_ENDSECTION /* TM_conversions::C_P015_compr_onboard::_L129 */ _L129;
  NID_PACKET /* TM_conversions::C_P015_compr_onboard::_L128 */ _L128;
  V_RELEASEDP /* TM_conversions::C_P015_compr_onboard::_L127 */ _L127;
  Q_ENDTIMER /* TM_conversions::C_P015_compr_onboard::_L126 */ _L126;
  array_int_6 /* TM_conversions::C_P015_compr_onboard::_L125 */ _L125;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L124 */ _L124;
  T_OL /* TM_conversions::C_P015_compr_onboard::_L123 */ _L123;
  P015_OBU_T_TM /* TM_conversions::C_P015_compr_onboard::_L122 */ _L122;
  T_LOA /* TM_conversions::C_P015_compr_onboard::_L121 */ _L121;
  array_int_128 /* TM_conversions::C_P015_compr_onboard::_L120 */ _L120;
  Q_DANGERPOINT /* TM_conversions::C_P015_compr_onboard::_L119 */ _L119;
  Q_SECTIONTIMER /* TM_conversions::C_P015_compr_onboard::_L118 */ _L118;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L104 */ _L104;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L105 */ _L105;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L106 */ _L106;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L107 */ _L107;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L108 */ _L108;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L109 */ _L109;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L110 */ _L110;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L111 */ _L111;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L112 */ _L112;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L113 */ _L113;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L114 */ _L114;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L115 */ _L115;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L116 */ _L116;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L117 */ _L117;
  Q_OVERLAP /* TM_conversions::C_P015_compr_onboard::_L103 */ _L103;
  P015_OBU_sectionlist_enum_T_TM /* TM_conversions::C_P015_compr_onboard::_L102 */ _L102;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L96 */ _L96;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L97 */ _L97;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L98 */ _L98;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L99 */ _L99;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L100 */ _L100;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L101 */ _L101;
  N_ITER /* TM_conversions::C_P015_compr_onboard::_L95 */ _L95;
  T_ENDTIMER /* TM_conversions::C_P015_compr_onboard::_L94 */ _L94;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions::C_P015_compr_onboard::_L93 */ _L93;
  V_LOA /* TM_conversions::C_P015_compr_onboard::_L92 */ _L92;
  D_OL /* TM_conversions::C_P015_compr_onboard::_L91 */ _L91;
  D_DP /* TM_conversions::C_P015_compr_onboard::_L90 */ _L90;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions::C_P015_compr_onboard::_L89 */ _L89;
  kcg_bool /* TM_conversions::C_P015_compr_onboard::_L140 */ _L140;
  P015_OBU_sectionlist_enum_T_TM /* TM_conversions::C_P015_compr_onboard::_L141 */ _L141;
  kcg_int /* TM_conversions::C_P015_compr_onboard::_L142 */ _L142;
  T_SECTIONTIMER /* TM_conversions::C_P015_compr_onboard::_L143 */ _L143;
} outC_C_P015_compr_onboard_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P015_compr_onboard */
extern void C_P015_compr_onboard_TM_conversions(
  /* TM_conversions::C_P015_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P015_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P015_compr_onboard_TM_conversions *outC);

extern void C_P015_compr_onboard_reset_TM_conversions(
  outC_C_P015_compr_onboard_TM_conversions *outC);

#endif /* _C_P015_compr_onboard_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P015_compr_onboard_TM_conversions.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

