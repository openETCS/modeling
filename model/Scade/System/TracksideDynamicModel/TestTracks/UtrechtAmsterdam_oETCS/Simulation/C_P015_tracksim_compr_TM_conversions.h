/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _C_P015_tracksim_compr_TM_conversions_H_
#define _C_P015_tracksim_compr_TM_conversions_H_

#include "kcg_types.h"
#include "T_Build_Metadata_Packet_ID_TM_lib_internal.h"
#include "T_DeterminePacketSizeInt_TM_lib_internal.h"
#include "C_P015_flatten_sections_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* TM_conversions::C_P015_tracksim_compr::Header */ Header;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions::C_P015_tracksim_compr::P015_compressed */ P015_compressed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_DeterminePacketSizeInt_TM_lib_internal /* 1 */ _2_Context_1;
  outC_C_P015_flatten_sections_TM_lib_internal /* 1 */ _1_Context_1;
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ _4_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ IfBlock1_clock_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */ _L5_16_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */ _L4_15_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */ _L4_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */ _L2_13_IfBlock1;
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
  kcg_int /* TM_conversions::C_P015_tracksim_compr::p_size */ p_size;
  P015_trackide_sectionlist_T_TM /* TM_conversions::C_P015_tracksim_compr::sections */ sections;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::n_iter */ n_iter;
  P015_trackside_int_T_TM /* TM_conversions::C_P015_tracksim_compr::_L1 */ _L1;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions::C_P015_tracksim_compr::_L204 */ _L204;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L206 */ _L206;
  array_int_351 /* TM_conversions::C_P015_tracksim_compr::_L209 */ _L209;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L212 */ _L212;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L213 */ _L213;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L336 */ _L336;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L219 */ _L219;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L218 */ _L218;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L217 */ _L217;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L216 */ _L216;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L215 */ _L215;
  kcg_bool /* TM_conversions::C_P015_tracksim_compr::_L214 */ _L214;
  Q_DIR /* TM_conversions::C_P015_tracksim_compr::_L356 */ _L356;
  P015_trackide_sectionlist_T_TM /* TM_conversions::C_P015_tracksim_compr::_L371 */ _L371;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L370 */ _L370;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L369 */ _L369;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L368 */ _L368;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L367 */ _L367;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L366 */ _L366;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L365 */ _L365;
  array_int_6 /* TM_conversions::C_P015_tracksim_compr::_L373 */ _L373;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L378 */ _L378;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L379 */ _L379;
  P015_sections_array_flat_T_TM /* TM_conversions::C_P015_tracksim_compr::_L380 */ _L380;
  array_int_20 /* TM_conversions::C_P015_tracksim_compr::_L381 */ _L381;
  array_int_500 /* TM_conversions::C_P015_tracksim_compr::_L383 */ _L383;
  array_int_149 /* TM_conversions::C_P015_tracksim_compr::_L384 */ _L384;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L387 */ _L387;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L395 */ _L395;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L394 */ _L394;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L393 */ _L393;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L392 */ _L392;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L391 */ _L391;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L390 */ _L390;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L389 */ _L389;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L388 */ _L388;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L396 */ _L396;
  P015_trackide_sectionlist_T_TM /* TM_conversions::C_P015_tracksim_compr::_L398 */ _L398;
  array_int_14 /* TM_conversions::C_P015_tracksim_compr::_L399 */ _L399;
  array_int_21 /* TM_conversions::C_P015_tracksim_compr::_L400 */ _L400;
  kcg_int /* TM_conversions::C_P015_tracksim_compr::_L402 */ _L402;
  array_int_1 /* TM_conversions::C_P015_tracksim_compr::_L403 */ _L403;
  nid_packet_meta_TM /* TM_conversions::C_P015_tracksim_compr::_L404 */ _L404;
} outC_C_P015_tracksim_compr_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P015_tracksim_compr */
extern void C_P015_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P015_tracksim_compr::P015_from_track */P015_trackside_int_T_TM *P015_from_track,
  outC_C_P015_tracksim_compr_TM_conversions *outC);

extern void C_P015_tracksim_compr_reset_TM_conversions(
  outC_C_P015_tracksim_compr_TM_conversions *outC);

#endif /* _C_P015_tracksim_compr_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P015_tracksim_compr_TM_conversions.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

