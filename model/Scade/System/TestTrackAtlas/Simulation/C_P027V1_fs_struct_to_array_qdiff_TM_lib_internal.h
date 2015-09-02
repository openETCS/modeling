/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */
#ifndef _C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal_H_
#define _C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P027V1_section_array_qdiff_T_TM_baseline2 /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::section_arrays */ section_arrays;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_section_int_qdiff_T_TM_baseline2 /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::_L1 */ _L1;
  array_int_2 /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::_L2 */ _L2;
  kcg_int /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::_L4 */ _L4;
  kcg_int /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::_L3 */ _L3;
} outC_C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff */
extern void C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal(
  /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::section */P027V1_section_int_qdiff_T_TM_baseline2 *section,
  outC_C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal *outC);

extern void C_P027V1_fs_struct_to_array_qdiff_reset_TM_lib_internal(
  outC_C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal *outC);

#endif /* _C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal.h
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

