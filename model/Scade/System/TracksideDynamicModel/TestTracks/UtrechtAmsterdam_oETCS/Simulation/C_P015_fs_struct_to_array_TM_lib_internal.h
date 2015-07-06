/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */
#ifndef _C_P015_fs_struct_to_array_TM_lib_internal_H_
#define _C_P015_fs_struct_to_array_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P015_section_array_T_TM /* TM_lib_internal::C_P015_fs_struct_to_array::section_arrays */ section_arrays;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P015_section_int_T_TM /* TM_lib_internal::C_P015_fs_struct_to_array::_L1 */ _L1;
  array_int_4 /* TM_lib_internal::C_P015_fs_struct_to_array::_L2 */ _L2;
  kcg_int /* TM_lib_internal::C_P015_fs_struct_to_array::_L6 */ _L6;
  kcg_int /* TM_lib_internal::C_P015_fs_struct_to_array::_L5 */ _L5;
  kcg_int /* TM_lib_internal::C_P015_fs_struct_to_array::_L4 */ _L4;
  kcg_int /* TM_lib_internal::C_P015_fs_struct_to_array::_L3 */ _L3;
} outC_C_P015_fs_struct_to_array_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P015_fs_struct_to_array */
extern void C_P015_fs_struct_to_array_TM_lib_internal(
  /* TM_lib_internal::C_P015_fs_struct_to_array::section */P015_section_int_T_TM *section,
  outC_C_P015_fs_struct_to_array_TM_lib_internal *outC);

extern void C_P015_fs_struct_to_array_reset_TM_lib_internal(
  outC_C_P015_fs_struct_to_array_TM_lib_internal *outC);

#endif /* _C_P015_fs_struct_to_array_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P015_fs_struct_to_array_TM_lib_internal.h
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

