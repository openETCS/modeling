/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-11T08:52:56
*************************************************************$ */
#ifndef _C_P041_compr_onboard_TM_conversions_H_
#define _C_P041_compr_onboard_TM_conversions_H_

#include "kcg_types.h"
#include "C_P041_unflatten_sections_TM_lib_internal.h"
#include "CAST_Int_to_D_LEVELTR_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P041_OBU_T_TM /* TM_conversions::C_P041_compr_onboard::P041_onboard */ P041_onboard;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P041_unflatten_sections_TM_lib_internal /* 1 */ _1_Context_1;
  outC_CAST_Int_to_D_LEVELTR_TM_conversions /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ _16_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ _9_IfBlock1_clock_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */ _4_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */ IfBlock1_clock_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L1 */ _L1_121;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L5 */ _L5_1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L4 */ _L4_120;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L3 */ _L3_1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L2 */ _L2_119;
  NID_PACKET /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet */ nid_packet_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet_int */ nid_packet_int_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */ _L5_118_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */ _L4_117_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */ _L4_115_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */ _L2_114_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */ _L1_113_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */ _L2_112_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ _11_else_clock_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */ _L3_110_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */ _L5_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::error */ _8_error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */ q_dir_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */ _L13_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */ _7__L12_1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ q_dir_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */ q_dir_int_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L1 */ _L1_1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_ITER::_L12 */ _L12_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L11 */ _L11_1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_ITER::_L10 */ _L10_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L9 */ _L9_1;
  N_ITER /* TM_conversions::CAST_Int_to_N_ITER::n_iter */ n_iter_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::n_iter_int */ n_iter_int_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */ _L3_16_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */ _L2_15_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */ _L4_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */ _L1_13_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */ _L1_12_IfBlock1;
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
  array_int_99 /* TM_conversions::C_P041_compr_onboard::_L13 */ _L13;
  NID_PACKET /* TM_conversions::C_P041_compr_onboard::_L12 */ _L12;
  Q_DIR /* TM_conversions::C_P041_compr_onboard::_L11 */ _L11;
  P041_OBU_T_TM /* TM_conversions::C_P041_compr_onboard::_L10 */ _L10;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions::C_P041_compr_onboard::_L9 */ _L9;
  N_ITER /* TM_conversions::C_P041_compr_onboard::_L7 */ _L7;
  P041_OBU_sectionlist_enum_T_TM /* TM_conversions::C_P041_compr_onboard::_L5 */ _L5;
  Q_SCALE /* TM_conversions::C_P041_compr_onboard::_L4 */ _L4;
  kcg_int /* TM_conversions::C_P041_compr_onboard::_L17 */ _L17;
  kcg_int /* TM_conversions::C_P041_compr_onboard::_L18 */ _L18;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions::C_P041_compr_onboard::_L20 */ _L20;
  kcg_int /* TM_conversions::C_P041_compr_onboard::_L21 */ _L21;
  kcg_bool /* TM_conversions::C_P041_compr_onboard::_L22 */ _L22;
  kcg_int /* TM_conversions::C_P041_compr_onboard::_L25 */ _L25;
  kcg_int /* TM_conversions::C_P041_compr_onboard::_L26 */ _L26;
  kcg_int /* TM_conversions::C_P041_compr_onboard::_L27 */ _L27;
  D_LEVELTR /* TM_conversions::C_P041_compr_onboard::_L28 */ _L28;
} outC_C_P041_compr_onboard_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P041_compr_onboard */
extern void C_P041_compr_onboard_TM_conversions(
  /* TM_conversions::C_P041_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P041_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P041_compr_onboard_TM_conversions *outC);

extern void C_P041_compr_onboard_reset_TM_conversions(
  outC_C_P041_compr_onboard_TM_conversions *outC);

#endif /* _C_P041_compr_onboard_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P041_compr_onboard_TM_conversions.h
** Generation date: 2015-08-11T08:52:56
*************************************************************$ */

