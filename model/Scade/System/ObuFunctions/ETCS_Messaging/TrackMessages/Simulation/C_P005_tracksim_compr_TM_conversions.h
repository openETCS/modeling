/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-03T19:30:19
*************************************************************$ */
#ifndef _C_P005_tracksim_compr_TM_conversions_H_
#define _C_P005_tracksim_compr_TM_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_Q_DIR_TM_conversions.h"
#include "DeterminePacketSizeInt_TM_lib_internal.h"
#include "C_P005_flatten_sections_TM_lib_internal.h"

/* ========================  input structure  ====================== */
typedef struct {
  P005_trackside_TM /* TM_conversions::C_P005_tracksim_compr::P005_from_track */ P005_from_track;
} inC_C_P005_tracksim_compr_TM_conversions;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* TM_conversions::C_P005_tracksim_compr::Header */ Header;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions::C_P005_tracksim_compr::P005_compressed */ P005_compressed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_Q_DIR_TM_conversions /* 1 */ _2_Context_1;
  outC_DeterminePacketSizeInt_TM_lib_internal /* 1 */ _1_Context_1;
  outC_C_P005_flatten_sections_TM_lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::C_P005_tracksim_compr::p_size */ p_size;
  P005_trackside_TM /* TM_conversions::C_P005_tracksim_compr::_L1 */ _L1;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions::C_P005_tracksim_compr::_L204 */ _L204;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L205 */ _L205;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L206 */ _L206;
  array_int_272 /* TM_conversions::C_P005_tracksim_compr::_L209 */ _L209;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L212 */ _L212;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L213 */ _L213;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L336 */ _L336;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L219 */ _L219;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L218 */ _L218;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L217 */ _L217;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L216 */ _L216;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L215 */ _L215;
  kcg_bool /* TM_conversions::C_P005_tracksim_compr::_L214 */ _L214;
  Q_DIR /* TM_conversions::C_P005_tracksim_compr::_L356 */ _L356;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L371 */ _L371;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L370 */ _L370;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L369 */ _L369;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L368 */ _L368;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L367 */ _L367;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L366 */ _L366;
  P005_trackide_sectionlist_T_TM /* TM_conversions::C_P005_tracksim_compr::_L365 */ _L365;
  array_int_3 /* TM_conversions::C_P005_tracksim_compr::_L373 */ _L373;
  _1_P005_trackside_section_TM /* TM_conversions::C_P005_tracksim_compr::_L375 */ _L375;
  array_int_1 /* TM_conversions::C_P005_tracksim_compr::_L376 */ _L376;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L378 */ _L378;
  kcg_int /* TM_conversions::C_P005_tracksim_compr::_L379 */ _L379;
  P005_sections_array_flat_TM /* TM_conversions::C_P005_tracksim_compr::_L380 */ _L380;
  array_int_4 /* TM_conversions::C_P005_tracksim_compr::_L381 */ _L381;
  array_int_500 /* TM_conversions::C_P005_tracksim_compr::_L383 */ _L383;
  array_int_228 /* TM_conversions::C_P005_tracksim_compr::_L384 */ _L384;
  array__496 /* TM_conversions::C_P005_tracksim_compr::_L386 */ _L386;
  array__445 /* TM_conversions::C_P005_tracksim_compr::_L385 */ _L385;
} outC_C_P005_tracksim_compr_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P005_tracksim_compr */
extern void C_P005_tracksim_compr_TM_conversions(
  inC_C_P005_tracksim_compr_TM_conversions *inC,
  outC_C_P005_tracksim_compr_TM_conversions *outC);

extern void C_P005_tracksim_compr_reset_TM_conversions(
  outC_C_P005_tracksim_compr_TM_conversions *outC);

#endif /* _C_P005_tracksim_compr_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_tracksim_compr_TM_conversions.h
** Generation date: 2015-06-03T19:30:19
*************************************************************$ */

