/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T00:04:39
*************************************************************$ */
#ifndef _Read_P027V1_TM_baseline2_H_
#define _Read_P027V1_TM_baseline2_H_

#include "kcg_types.h"
#include "Read_P027V1_sections_TM_baseline2.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P027V1_OBU_T_TM_baseline2 /* TM_baseline2::Read_P027V1::P027V1_out */ P027V1_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P027V1_sections_TM_baseline2 /* 1 */ _1_Context_1[33];
  outC_RECV_ReadPackets_TM_lib_internal /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ _17_else_clock_1_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ _10_IfBlock1_clock_1_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */ _6_else_clock_1_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */ IfBlock1_clock_1_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 /* TM_lib_internal::C_P027V1_merge_body_sections::_L1 */ _L1_1;
  P027V1_OBU_body_enum_T_TM_baseline2 /* TM_lib_internal::C_P027V1_merge_body_sections::_L68 */ _L68_1;
  Q_SCALE /* TM_lib_internal::C_P027V1_merge_body_sections::_L71 */ _L71_1;
  Q_DIR /* TM_lib_internal::C_P027V1_merge_body_sections::_L70 */ _L70_1;
  kcg_bool /* TM_lib_internal::C_P027V1_merge_body_sections::_L69 */ _L69_1;
  P027V1_OBU_T_TM_baseline2 /* TM_lib_internal::C_P027V1_merge_body_sections::_L75 */ _L75_1;
  P027V1_OBU_T_TM_baseline2 /* TM_lib_internal::C_P027V1_merge_body_sections::P027V1_out */ P027V1_out_1;
  P027V1_OBU_body_enum_T_TM_baseline2 /* TM_lib_internal::C_P027V1_merge_body_sections::body */ body_1;
  _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 /* TM_lib_internal::C_P027V1_merge_body_sections::sections */ sections_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */ _19__L5_1_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */ _18__L4_1_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */ _16__L4_1_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */ _15__L2_1_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */ _14__L1_1_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */ _13__L2_1_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ _12_else_clock_1_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */ _11__L3_1_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */ _L5_1_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::error */ _9_error_1_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */ q_dir_in_1_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */ _L13_1_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */ _L12_1_1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ q_dir_1_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */ q_dir_int_1_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */ _8__L3_1_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */ _7__L2_1_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */ _L4_1_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */ _5__L1_1_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */ _4__L1_1_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L2 */ _L2_1_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */ else_clock_1_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L1 */ _L1_1_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L3 */ _L3_1_1_IfBlock1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_in */ q_scale_in_1_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::error */ error_1_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::_L2 */ _3__L2_1_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::_L4 */ _2__L4_1_1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ q_scale_1_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_int */ q_scale_int_1_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L1 */ _L1_1_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L5 */ _L5_1_1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L4 */ _L4_1_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L3 */ _L3_1_1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L2 */ _L2_1_1;
  NID_PACKET /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet */ nid_packet_1_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet_int */ nid_packet_int_1_1;
  kcg_int /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L14 */ _L14_1;
  kcg_int /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L15 */ _L15_1;
  kcg_int /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L16 */ _L16_1;
  P027V1_OBU_body_enum_T_TM_baseline2 /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L10 */ _L10_1;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L9 */ _L9_1;
  array_int_5 /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L6 */ _L6_1;
  kcg_int /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L18 */ _L18_1;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L20 */ _L20_1;
  kcg_int /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L21 */ _L21_1;
  kcg_bool /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L22 */ _L22_1;
  kcg_int /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L25 */ _L25_1;
  kcg_int /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L24 */ _L24_1;
  Q_DIR /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L30 */ _L30_1;
  Q_SCALE /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L29 */ _L29_1;
  NID_PACKET /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L28 */ _L28_1;
  P027V1_OBU_body_enum_T_TM_baseline2 /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::P027V1_OBU_body */ P027V1_OBU_body_1;
  kcg_int /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::meta_qdiff */ meta_qdiff_1;
  kcg_int /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::n_iter_sections */ n_iter_sections_1;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::Metadata_Element */ Metadata_Element_1;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::PacketData */ PacketData_1;
  array_int_500 /* TM_baseline2::Read_P027V1::_L5 */ _L5;
  MetadataElement_T_Common_Types_Pkg /* TM_baseline2::Read_P027V1::_L30 */ _L30;
  P027V1_OBU_body_enum_T_TM_baseline2 /* TM_baseline2::Read_P027V1::_L166 */ _L166;
  kcg_int /* TM_baseline2::Read_P027V1::_L168 */ _L168;
  kcg_int /* TM_baseline2::Read_P027V1::_L167 */ _L167;
  CompressedPackets_T_Common_Types_Pkg /* TM_baseline2::Read_P027V1::_L169 */ _L169;
  array_int_33 /* TM_baseline2::Read_P027V1::_L170 */ _L170;
  array_int_33 /* TM_baseline2::Read_P027V1::_L171 */ _L171;
  array__2251 /* TM_baseline2::Read_P027V1::_L172 */ _L172;
  P027V1_OBU_T_TM_baseline2 /* TM_baseline2::Read_P027V1::_L178 */ _L178;
  array__2223 /* TM_baseline2::Read_P027V1::_L182 */ _L182;
  kcg_int /* TM_baseline2::Read_P027V1::_L184 */ _L184;
  kcg_bool /* TM_baseline2::Read_P027V1::_L185 */ _L185;
} outC_Read_P027V1_TM_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_baseline2::Read_P027V1 */
extern void Read_P027V1_TM_baseline2(
  /* TM_baseline2::Read_P027V1::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P027V1_TM_baseline2 *outC);

extern void Read_P027V1_reset_TM_baseline2(outC_Read_P027V1_TM_baseline2 *outC);

#endif /* _Read_P027V1_TM_baseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P027V1_TM_baseline2.h
** Generation date: 2015-07-03T00:04:39
*************************************************************$ */

