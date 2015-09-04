/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _C_P139_compr_onboard_TM_conversions_H_
#define _C_P139_compr_onboard_TM_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_D_REVERSE_TM_conversions.h"
#include "CAST_Int_to_V_REVERSE_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P139_OBU_T_TM /* TM_conversions::C_P139_compr_onboard::P139_onboard */ P139_onboard;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_D_REVERSE_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_Int_to_V_REVERSE_TM_conversions /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */ _17_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */ _9_IfBlock1_clock_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ _3_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ IfBlock1_clock_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */ _L3_119_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */ _L2_118_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */ _L4_116_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */ _L1_115_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */ _L1_114_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L2 */ _L2_113_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */ _12_else_clock_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L1 */ _L1_111_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L3 */ _L3_110_IfBlock1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_in */ q_scale_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::error */ _8_error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::_L2 */ _L2_17;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::_L4 */ _L4_16;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ q_scale_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_int */ q_scale_int_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L1 */ _L1_1;
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
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */ _L12_1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ q_dir_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */ q_dir_int_1;
  NID_PACKET /* TM_conversions::C_P139_compr_onboard::_L12 */ _L12;
  P139_OBU_T_TM /* TM_conversions::C_P139_compr_onboard::_L10 */ _L10;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions::C_P139_compr_onboard::_L9 */ _L9;
  Q_DIR /* TM_conversions::C_P139_compr_onboard::_L4 */ _L4;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions::C_P139_compr_onboard::_L20 */ _L20;
  kcg_int /* TM_conversions::C_P139_compr_onboard::_L21 */ _L21;
  kcg_bool /* TM_conversions::C_P139_compr_onboard::_L22 */ _L22;
  Q_SCALE /* TM_conversions::C_P139_compr_onboard::_L29 */ _L29;
  D_REVERSE /* TM_conversions::C_P139_compr_onboard::_L31 */ _L31;
  V_REVERSE /* TM_conversions::C_P139_compr_onboard::_L33 */ _L33;
  array_int_6 /* TM_conversions::C_P139_compr_onboard::_L45 */ _L45;
  kcg_int /* TM_conversions::C_P139_compr_onboard::_L62 */ _L62;
  kcg_int /* TM_conversions::C_P139_compr_onboard::_L61 */ _L61;
  kcg_int /* TM_conversions::C_P139_compr_onboard::_L60 */ _L60;
  kcg_int /* TM_conversions::C_P139_compr_onboard::_L59 */ _L59;
  kcg_int /* TM_conversions::C_P139_compr_onboard::_L58 */ _L58;
  kcg_int /* TM_conversions::C_P139_compr_onboard::_L57 */ _L57;
} outC_C_P139_compr_onboard_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P139_compr_onboard */
extern void C_P139_compr_onboard_TM_conversions(
  /* TM_conversions::C_P139_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P139_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P139_compr_onboard_TM_conversions *outC);

extern void C_P139_compr_onboard_reset_TM_conversions(
  outC_C_P139_compr_onboard_TM_conversions *outC);

#endif /* _C_P139_compr_onboard_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P139_compr_onboard_TM_conversions.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

