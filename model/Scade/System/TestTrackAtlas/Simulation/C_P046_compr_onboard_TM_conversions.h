/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _C_P046_compr_onboard_TM_conversions_H_
#define _C_P046_compr_onboard_TM_conversions_H_

#include "kcg_types.h"
#include "C_P046_unflatten_sections_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P046_OBU_T_TM /* TM_conversions::C_P046_compr_onboard::P046_onboard */ P046_onboard;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P046_unflatten_sections_TM_lib_internal /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ _3_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ IfBlock1_clock_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L1 */ _L1_16;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L5 */ _L5_1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L4 */ _L4_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L3 */ _L3_1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L2 */ _L2_1;
  NID_PACKET /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet */ nid_packet_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet_int */ nid_packet_int_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */ _L5_15_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */ _L4_14_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */ _L4_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */ _L2_12_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */ _L1_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */ _L2_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ else_clock_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */ _L3_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */ _L5_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::error */ error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */ q_dir_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */ _L13_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */ _1__L12_1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ q_dir_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */ q_dir_int_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L1 */ _L1_1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_ITER::_L12 */ _L12_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L11 */ _L11_1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_ITER::_L10 */ _L10_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L9 */ _L9_1;
  N_ITER /* TM_conversions::CAST_Int_to_N_ITER::n_iter */ n_iter_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::n_iter_int */ n_iter_int_1;
  array_int_66 /* TM_conversions::C_P046_compr_onboard::_L13 */ _L13;
  NID_PACKET /* TM_conversions::C_P046_compr_onboard::_L12 */ _L12;
  Q_DIR /* TM_conversions::C_P046_compr_onboard::_L11 */ _L11;
  P046_OBU_T_TM /* TM_conversions::C_P046_compr_onboard::_L10 */ _L10;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions::C_P046_compr_onboard::_L9 */ _L9;
  N_ITER /* TM_conversions::C_P046_compr_onboard::_L7 */ _L7;
  P046_OBU_sectionlist_enum_T_TM /* TM_conversions::C_P046_compr_onboard::_L5 */ _L5;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions::C_P046_compr_onboard::_L20 */ _L20;
  kcg_int /* TM_conversions::C_P046_compr_onboard::_L21 */ _L21;
  kcg_bool /* TM_conversions::C_P046_compr_onboard::_L22 */ _L22;
  array_int_4 /* TM_conversions::C_P046_compr_onboard::_L29 */ _L29;
  kcg_int /* TM_conversions::C_P046_compr_onboard::_L37 */ _L37;
  kcg_int /* TM_conversions::C_P046_compr_onboard::_L36 */ _L36;
  kcg_int /* TM_conversions::C_P046_compr_onboard::_L35 */ _L35;
  kcg_int /* TM_conversions::C_P046_compr_onboard::_L34 */ _L34;
} outC_C_P046_compr_onboard_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P046_compr_onboard */
extern void C_P046_compr_onboard_TM_conversions(
  /* TM_conversions::C_P046_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P046_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P046_compr_onboard_TM_conversions *outC);

extern void C_P046_compr_onboard_reset_TM_conversions(
  outC_C_P046_compr_onboard_TM_conversions *outC);

#endif /* _C_P046_compr_onboard_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P046_compr_onboard_TM_conversions.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

