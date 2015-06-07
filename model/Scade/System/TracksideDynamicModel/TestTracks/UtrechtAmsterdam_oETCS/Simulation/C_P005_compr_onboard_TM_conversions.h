/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */
#ifndef _C_P005_compr_onboard_TM_conversions_H_
#define _C_P005_compr_onboard_TM_conversions_H_

#include "kcg_types.h"
#include "C_P005_unflatten_sections_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P005_OBU_T_TM /* TM_conversions::C_P005_compr_onboard::P005_onboard */ P005_onboard;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P005_unflatten_sections_TM_lib_internal /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ _19_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ _12_IfBlock1_clock_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */ _3_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */ IfBlock1_clock_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L1 */ _L1_124;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L5 */ _L5_1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L4 */ _L4_123;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L3 */ _L3_1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L2 */ _L2_122;
  NID_PACKET /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet */ nid_packet_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet_int */ nid_packet_int_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */ _L5_121_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */ _L4_120_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */ _L4_118_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */ _L2_117_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */ _L1_116_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */ _L2_115_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ _14_else_clock_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */ _L3_113_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */ _L5_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::error */ _11_error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */ q_dir_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */ _10__L13_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */ _9__L12_1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ q_dir_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */ q_dir_int_1;
  kcg_int /* TM_conversions::CAST_Int_to_L_PACKET::_L1 */ _L1_18;
  kcg_bool /* TM_conversions::CAST_Int_to_L_PACKET::_L9 */ _L9_17;
  kcg_bool /* TM_conversions::CAST_Int_to_L_PACKET::_L8 */ _L8_1;
  kcg_int /* TM_conversions::CAST_Int_to_L_PACKET::_L12 */ _6__L12_1;
  kcg_int /* TM_conversions::CAST_Int_to_L_PACKET::_L13 */ _L13_1;
  L_PACKET /* TM_conversions::CAST_Int_to_L_PACKET::l_packet */ l_packet_1;
  kcg_int /* TM_conversions::CAST_Int_to_L_PACKET::l_packet_int */ l_packet_int_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L1 */ _L1_1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_ITER::_L12 */ _L12_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L11 */ _L11_1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_ITER::_L10 */ _L10_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L9 */ _L9_1;
  N_ITER /* TM_conversions::CAST_Int_to_N_ITER::n_iter */ n_iter_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::n_iter_int */ n_iter_int_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */ _L3_15_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */ _L2_14_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */ _L4_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */ _L1_12_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */ _L1_11_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L2 */ _L2_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */ else_clock_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L1 */ _L1_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L3 */ _L3_1_IfBlock1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_in */ q_scale_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::error */ error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::_L2 */ _L2_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::_L4 */ _L4_1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ q_scale_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_int */ q_scale_int_1;
  kcg_int /* TM_conversions::C_P005_compr_onboard::_L14 */ _L14;
  kcg_int /* TM_conversions::C_P005_compr_onboard::_L15 */ _L15;
  kcg_int /* TM_conversions::C_P005_compr_onboard::_L16 */ _L16;
  array_int_224 /* TM_conversions::C_P005_compr_onboard::_L13 */ _L13;
  NID_PACKET /* TM_conversions::C_P005_compr_onboard::_L12 */ _L12;
  Q_DIR /* TM_conversions::C_P005_compr_onboard::_L11 */ _L11;
  P005_OBU_T_TM /* TM_conversions::C_P005_compr_onboard::_L10 */ _L10;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions::C_P005_compr_onboard::_L9 */ _L9;
  L_PACKET /* TM_conversions::C_P005_compr_onboard::_L8 */ _L8;
  N_ITER /* TM_conversions::C_P005_compr_onboard::_L7 */ _L7;
  array_int_3 /* TM_conversions::C_P005_compr_onboard::_L6 */ _L6;
  P005_OBU_sectionlist_enum_T_TM /* TM_conversions::C_P005_compr_onboard::_L5 */ _L5;
  Q_SCALE /* TM_conversions::C_P005_compr_onboard::_L4 */ _L4;
  array_int_1 /* TM_conversions::C_P005_compr_onboard::_L2 */ _L2;
  array_int_1 /* TM_conversions::C_P005_compr_onboard::_L1 */ _L1;
  kcg_int /* TM_conversions::C_P005_compr_onboard::_L17 */ _L17;
  kcg_int /* TM_conversions::C_P005_compr_onboard::_L18 */ _L18;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions::C_P005_compr_onboard::_L20 */ _L20;
  kcg_int /* TM_conversions::C_P005_compr_onboard::_L21 */ _L21;
  kcg_bool /* TM_conversions::C_P005_compr_onboard::_L22 */ _L22;
} outC_C_P005_compr_onboard_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P005_compr_onboard */
extern void C_P005_compr_onboard_TM_conversions(
  /* TM_conversions::C_P005_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P005_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P005_compr_onboard_TM_conversions *outC);

extern void C_P005_compr_onboard_reset_TM_conversions(
  outC_C_P005_compr_onboard_TM_conversions *outC);

#endif /* _C_P005_compr_onboard_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_compr_onboard_TM_conversions.h
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */

