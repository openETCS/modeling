/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-02T23:19:43
*************************************************************$ */
#ifndef _C_P003V1_compr_onboard_TM_conversions_baseline2_H_
#define _C_P003V1_compr_onboard_TM_conversions_baseline2_H_

#include "kcg_types.h"
#include "CAST_Int_to_D_VALIDNV_TM_conversions.h"
#include "CAST_Int_to_V_NVSHUNT_TM_conversions.h"
#include "CAST_Int_to_V_NVSTFF_TM_conversions.h"
#include "CAST_Int_to_V_NVONSIGHT_TM_conversions.h"
#include "CAST_Int_to_V_NVUNFIT_TM_conversions.h"
#include "CAST_Int_to_V_NVREL_TM_conversions.h"
#include "CAST_Int_to_D_NVROLL_TM_conversions.h"
#include "CAST_Int_to_Q_NVSBTSMPERM_TM_conversions.h"
#include "CAST_Int_to_V_NVALLOWOVTRP_TM_conversions.h"
#include "CAST_Int_to_V_NVSUPOVTRP_TM_conversions.h"
#include "CAST_Int_to_D_NVOVTRP_TM_conversions.h"
#include "CAST_Int_to_T_NVOVTRP_TM_conversions.h"
#include "CAST_Int_to_Q_NVEMRRLS_TM_conversions.h"
#include "CAST_Int_to_D_NVPOTRP_TM_conversions.h"
#include "CAST_Int_to_M_NVCONTACT_TM_conversions.h"
#include "CAST_Int_to_T_NVCONTACT_TM_conversions.h"
#include "CAST_Int_to_M_NVDERUN_TM_conversions.h"
#include "CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions.h"
#include "CAST_Int_to_D_NVSTFF_TM_conversions.h"
#include "C_P003V1_unflatten_sections_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P003V1_OBU_T_TM_baseline2 /* TM_conversions_baseline2::C_P003V1_compr_onboard::P003V1_onboard */ P003V1_onboard;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P003V1_unflatten_sections_TM_lib_internal /* 1 */ _18_Context_1;
  outC_CAST_Int_to_D_VALIDNV_TM_conversions /* 1 */ _17_Context_1;
  outC_CAST_Int_to_V_NVSHUNT_TM_conversions /* 1 */ _16_Context_1;
  outC_CAST_Int_to_V_NVSTFF_TM_conversions /* 1 */ _15_Context_1;
  outC_CAST_Int_to_V_NVONSIGHT_TM_conversions /* 1 */ _14_Context_1;
  outC_CAST_Int_to_V_NVUNFIT_TM_conversions /* 1 */ _13_Context_1;
  outC_CAST_Int_to_V_NVREL_TM_conversions /* 1 */ _12_Context_1;
  outC_CAST_Int_to_D_NVROLL_TM_conversions /* 1 */ _11_Context_1;
  outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions /* 1 */ _10_Context_1;
  outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions /* 1 */ _9_Context_1;
  outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions /* 2 */ _8_Context_2;
  outC_CAST_Int_to_D_NVOVTRP_TM_conversions /* 1 */ _7_Context_1;
  outC_CAST_Int_to_T_NVOVTRP_TM_conversions /* 1 */ _6_Context_1;
  outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions /* 1 */ _5_Context_1;
  outC_CAST_Int_to_D_NVPOTRP_TM_conversions /* 2 */ Context_2;
  outC_CAST_Int_to_M_NVCONTACT_TM_conversions /* 1 */ _4_Context_1;
  outC_CAST_Int_to_T_NVCONTACT_TM_conversions /* 1 */ _3_Context_1;
  outC_CAST_Int_to_M_NVDERUN_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_Int_to_D_NVSTFF_TM_conversions /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ _33_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ _26_IfBlock1_clock_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */ _21_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */ IfBlock1_clock_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L1 */ _L1_138;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L5 */ _L5_1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L4 */ _L4_137;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L3 */ _L3_1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L2 */ _L2_136;
  NID_PACKET /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet */ nid_packet_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet_int */ nid_packet_int_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */ _L5_135_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */ _L4_134_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */ _L4_132_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */ _L2_131_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */ _L1_130_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */ _L2_129_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ _28_else_clock_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */ _L3_127_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */ _L5_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::error */ _25_error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */ q_dir_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */ _L13_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */ _24__L12_1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ q_dir_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */ q_dir_int_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L1 */ _L1_1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_ITER::_L12 */ _L12_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L11 */ _L11_1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_ITER::_L10 */ _L10_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L9 */ _L9_1;
  N_ITER /* TM_conversions::CAST_Int_to_N_ITER::n_iter */ n_iter_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::n_iter_int */ n_iter_int_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */ _L3_123_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */ _L2_122_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */ _L4_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */ _L1_120_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */ _L1_119_IfBlock1;
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
  N_ITER /* TM_conversions_baseline2::C_P003V1_compr_onboard::n_iter */ n_iter;
  array_int_32 /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L13 */ _L13;
  NID_PACKET /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L12 */ _L12;
  Q_DIR /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L11 */ _L11;
  P003V1_OBU_T_TM_baseline2 /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L10 */ _L10;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L9 */ _L9;
  N_ITER /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L7 */ _L7;
  P003V1_sectionlist_enum_T_TM_baseline2 /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L5 */ _L5;
  Q_SCALE /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L4 */ _L4;
  array_int_24 /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L1 */ _L1;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L20 */ _L20;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L21 */ _L21;
  kcg_bool /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L22 */ _L22;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L16 */ _L16;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L15 */ _L15;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L14 */ _L14;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L42 */ _L42;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L41 */ _L41;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L40 */ _L40;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L39 */ _L39;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L38 */ _L38;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L37 */ _L37;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L36 */ _L36;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L35 */ _L35;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L34 */ _L34;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L33 */ _L33;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L32 */ _L32;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L31 */ _L31;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L30 */ _L30;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L29 */ _L29;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L28 */ _L28;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L27 */ _L27;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L26 */ _L26;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L25 */ _L25;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L24 */ _L24;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L23 */ _L23;
  D_VALIDNV /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L43 */ _L43;
  N_ITER /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L45 */ _L45;
  N_ITER /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L46 */ _L46;
  V_NVSHUNT /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L47 */ _L47;
  V_NVSTFF /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L48 */ _L48;
  V_NVONSIGHT /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L49 */ _L49;
  V_NVUNFIT /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L50 */ _L50;
  V_NVREL /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L51 */ _L51;
  D_NVROLL /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L52 */ _L52;
  Q_NVSBTSMPERM /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L53 */ _L53;
  V_NVALLOWOVTRP /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L54 */ _L54;
  V_NVSUPOVTRP /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L56 */ _L56;
  D_NVOVTRP /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L57 */ _L57;
  T_NVOVTRP /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L58 */ _L58;
  kcg_int /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L59 */ _L59;
  Q_NVEMRRLS /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L60 */ _L60;
  D_NVPOTRP /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L62 */ _L62;
  M_NVCONTACT /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L63 */ _L63;
  T_NVCONTACT /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L64 */ _L64;
  M_NVDERUN /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L65 */ _L65;
  Q_NVDRIVER_ADHES /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L66 */ _L66;
  D_NVSTFF /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L67 */ _L67;
} outC_C_P003V1_compr_onboard_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P003V1_compr_onboard */
extern void C_P003V1_compr_onboard_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P003V1_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions_baseline2::C_P003V1_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P003V1_compr_onboard_TM_conversions_baseline2 *outC);

extern void C_P003V1_compr_onboard_reset_TM_conversions_baseline2(
  outC_C_P003V1_compr_onboard_TM_conversions_baseline2 *outC);

#endif /* _C_P003V1_compr_onboard_TM_conversions_baseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003V1_compr_onboard_TM_conversions_baseline2.h
** Generation date: 2015-07-02T23:19:43
*************************************************************$ */

