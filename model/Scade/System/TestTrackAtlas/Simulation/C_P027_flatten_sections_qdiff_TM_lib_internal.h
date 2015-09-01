/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T01:48:40
*************************************************************$ */
#ifndef _C_P027_flatten_sections_qdiff_TM_lib_internal_H_
#define _C_P027_flatten_sections_qdiff_TM_lib_internal_H_

#include "kcg_types.h"
#include "C_P027V1_fs_flatten_array_qdiff_TM_lib_internal.h"
#include "C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 /* TM_lib_internal::C_P027_flatten_sections_qdiff::Flattened */ Flattened;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P027V1_fs_flatten_array_qdiff_TM_lib_internal /* 1 */ _1_Context_1[32];
  outC_C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal /* 1 */ Context_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 /* TM_lib_internal::C_P027_flatten_sections_qdiff::_L76 */ _L76;
  P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 /* TM_lib_internal::C_P027_flatten_sections_qdiff::_L75 */ _L75;
  array_int_2_32 /* TM_lib_internal::C_P027_flatten_sections_qdiff::_L74 */ _L74;
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 /* TM_lib_internal::C_P027_flatten_sections_qdiff::_L83 */ _L83;
  array_int_2_32_32 /* TM_lib_internal::C_P027_flatten_sections_qdiff::_L84 */ _L84;
} outC_C_P027_flatten_sections_qdiff_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P027_flatten_sections_qdiff */
extern void C_P027_flatten_sections_qdiff_TM_lib_internal(
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::MergedSections */P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 *MergedSections,
  outC_C_P027_flatten_sections_qdiff_TM_lib_internal *outC);

extern void C_P027_flatten_sections_qdiff_reset_TM_lib_internal(
  outC_C_P027_flatten_sections_qdiff_TM_lib_internal *outC);

#endif /* _C_P027_flatten_sections_qdiff_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027_flatten_sections_qdiff_TM_lib_internal.h
** Generation date: 2015-09-02T01:48:40
*************************************************************$ */

