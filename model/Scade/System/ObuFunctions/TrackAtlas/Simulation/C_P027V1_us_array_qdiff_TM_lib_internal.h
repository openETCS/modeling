/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _C_P027V1_us_array_qdiff_TM_lib_internal_H_
#define _C_P027V1_us_array_qdiff_TM_lib_internal_H_

#include "kcg_types.h"
#include "C_P027V1_extract_el_section_TM_lib_internal.h"
#include "CAST_Int_to_NC_DIFF_TM_conversions.h"
#include "CAST_Int_to_V_DIFF_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_lib_internal::C_P027V1_us_array_qdiff::cont */ cont;
  P027V1_section_enum_qdiff_T_TM_baseline2 /* TM_lib_internal::C_P027V1_us_array_qdiff::sections */ sections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_NC_DIFF_TM_conversions /* 1 */ _2_Context_1;
  outC_C_P027V1_extract_el_section_TM_lib_internal /* 1 */ _1_Context_1;
  outC_CAST_Int_to_V_DIFF_TM_conversions /* 1 */ Context_1;
  outC_C_P027V1_extract_el_section_TM_lib_internal /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 /* TM_lib_internal::C_P027V1_us_array_qdiff::_L1 */ _L1;
  kcg_int /* TM_lib_internal::C_P027V1_us_array_qdiff::_L3 */ _L3;
  P027V1_section_enum_qdiff_T_TM_baseline2 /* TM_lib_internal::C_P027V1_us_array_qdiff::_L4 */ _L4;
  kcg_int /* TM_lib_internal::C_P027V1_us_array_qdiff::_L5 */ _L5;
  kcg_int /* TM_lib_internal::C_P027V1_us_array_qdiff::_L15 */ _L15;
  kcg_int /* TM_lib_internal::C_P027V1_us_array_qdiff::_L16 */ _L16;
  kcg_int /* TM_lib_internal::C_P027V1_us_array_qdiff::_L18 */ _L18;
  kcg_int /* TM_lib_internal::C_P027V1_us_array_qdiff::_L19 */ _L19;
  NC_DIFF /* TM_lib_internal::C_P027V1_us_array_qdiff::_L25 */ _L25;
  V_DIFF /* TM_lib_internal::C_P027V1_us_array_qdiff::_L28 */ _L28;
  kcg_bool /* TM_lib_internal::C_P027V1_us_array_qdiff::_L32 */ _L32;
  kcg_bool /* TM_lib_internal::C_P027V1_us_array_qdiff::_L33 */ _L33;
} outC_C_P027V1_us_array_qdiff_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P027V1_us_array_qdiff */
extern void C_P027V1_us_array_qdiff_TM_lib_internal(
  /* TM_lib_internal::C_P027V1_us_array_qdiff::i */kcg_int i,
  /* TM_lib_internal::C_P027V1_us_array_qdiff::n_iter_int */kcg_int n_iter_int,
  /* TM_lib_internal::C_P027V1_us_array_qdiff::flat */P027V1_sections_array_flat_qdiff_T_TM_baseline2 *flat,
  outC_C_P027V1_us_array_qdiff_TM_lib_internal *outC);

extern void C_P027V1_us_array_qdiff_reset_TM_lib_internal(
  outC_C_P027V1_us_array_qdiff_TM_lib_internal *outC);

#endif /* _C_P027V1_us_array_qdiff_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_us_array_qdiff_TM_lib_internal.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

