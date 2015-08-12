/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T18:07:48
*************************************************************$ */
#ifndef _C_P046_fs_flatten_array_TM_lib_internal_H_
#define _C_P046_fs_flatten_array_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P046_sections_array_flat_T_TM /* TM_lib_internal::C_P046_fs_flatten_array::flat */ flat;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P046_sections_array_flat_T_TM /* TM_lib_internal::C_P046_fs_flatten_array::_L1 */ _L1;
  kcg_int /* TM_lib_internal::C_P046_fs_flatten_array::_L3 */ _L3;
  kcg_int /* TM_lib_internal::C_P046_fs_flatten_array::_L5 */ _L5;
  kcg_int /* TM_lib_internal::C_P046_fs_flatten_array::_L6 */ _L6;
  P046_sections_array_flat_T_TM /* TM_lib_internal::C_P046_fs_flatten_array::_L7 */ _L7;
  kcg_int /* TM_lib_internal::C_P046_fs_flatten_array::_L8 */ _L8;
  P046_OBU_sectionlist_array_T_TM /* TM_lib_internal::C_P046_fs_flatten_array::_L2 */ _L2;
  kcg_int /* TM_lib_internal::C_P046_fs_flatten_array::_L10 */ _L10;
  kcg_int /* TM_lib_internal::C_P046_fs_flatten_array::_L154 */ _L154;
} outC_C_P046_fs_flatten_array_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P046_fs_flatten_array */
extern void C_P046_fs_flatten_array_TM_lib_internal(
  /* TM_lib_internal::C_P046_fs_flatten_array::i */kcg_int i,
  /* TM_lib_internal::C_P046_fs_flatten_array::Acc */P046_sections_array_flat_T_TM *Acc,
  /* TM_lib_internal::C_P046_fs_flatten_array::section_arrays */P046_OBU_sectionlist_array_T_TM *section_arrays,
  outC_C_P046_fs_flatten_array_TM_lib_internal *outC);

extern void C_P046_fs_flatten_array_reset_TM_lib_internal(
  outC_C_P046_fs_flatten_array_TM_lib_internal *outC);

#endif /* _C_P046_fs_flatten_array_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P046_fs_flatten_array_TM_lib_internal.h
** Generation date: 2015-08-12T18:07:48
*************************************************************$ */

