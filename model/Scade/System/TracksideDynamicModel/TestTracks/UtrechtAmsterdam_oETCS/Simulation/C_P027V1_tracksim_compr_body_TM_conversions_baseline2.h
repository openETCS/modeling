/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _C_P027V1_tracksim_compr_body_TM_conversions_baseline2_H_
#define _C_P027V1_tracksim_compr_body_TM_conversions_baseline2_H_

#include "kcg_types.h"
#include "T_Build_Metadata_Packet_ID_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::Header */ Header;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::P027V1_body_compressed */ P027V1_body_compressed;
  _2_P027V1_OBU_sectionlist_int_T_TM_baseline2 /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::P027V1_sections */ P027V1_sections;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::n_iter_k_out */ n_iter_k_out;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::meta_first_section */ meta_first_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal /* 1 */ Context_1;
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal /* 3 */ Context_3;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ _2_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ IfBlock1_clock_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */ _L5_14_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */ _L4_13_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */ _L4_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */ _L2_11_IfBlock1;
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
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::n_iter_k */ n_iter_k;
  P027V1_trackside_int_T_TM_baseline2 /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L1 */ _L1;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L204 */ _L204;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L206 */ _L206;
  array_int_494 /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L209 */ _L209;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L212 */ _L212;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L213 */ _L213;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L336 */ _L336;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L219 */ _L219;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L218 */ _L218;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L217 */ _L217;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L216 */ _L216;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L215 */ _L215;
  kcg_bool /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L214 */ _L214;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L371 */ _L371;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L370 */ _L370;
  P027V1_trackside_qdifflist_T_TM_baseline2 /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L369 */ _L369;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L368 */ _L368;
  P027V1_trackside_sectionlist_T_TM_baseline2 /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L367 */ _L367;
  array_int_6 /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L373 */ _L373;
  array_int_500 /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L383 */ _L383;
  array__30234 /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L386 */ _L386;
  array__30040 /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L385 */ _L385;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L387 */ _L387;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L391 */ _L391;
  P027V1_section_int_T_TM_baseline2 /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L394 */ _L394;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L396 */ _L396;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L400 */ _L400;
  Q_DIR /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L402 */ _L402;
  nid_packet_meta_TM /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L403 */ _L403;
  nid_packet_meta_TM /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::_L405 */ _L405;
} outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body */
extern void C_P027V1_tracksim_compr_body_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::P027V1_from_track */P027V1_trackside_int_T_TM_baseline2 *P027V1_from_track,
  outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2 *outC);

extern void C_P027V1_tracksim_compr_body_reset_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2 *outC);

#endif /* _C_P027V1_tracksim_compr_body_TM_conversions_baseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_tracksim_compr_body_TM_conversions_baseline2.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

