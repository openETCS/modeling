/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */
#ifndef _C_P041_fs_struct_to_array_TM_lib_internal_H_
#define _C_P041_fs_struct_to_array_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P041_section_array_T_TM /* TM_lib_internal::C_P041_fs_struct_to_array::section_arrays */ section_arrays;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P041_section_int_T_TM /* TM_lib_internal::C_P041_fs_struct_to_array::_L1 */ _L1;
  kcg_int /* TM_lib_internal::C_P041_fs_struct_to_array::_L4 */ _L4;
  kcg_int /* TM_lib_internal::C_P041_fs_struct_to_array::_L3 */ _L3;
  array_int_3 /* TM_lib_internal::C_P041_fs_struct_to_array::_L10 */ _L10;
  kcg_int /* TM_lib_internal::C_P041_fs_struct_to_array::_L11 */ _L11;
} outC_C_P041_fs_struct_to_array_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P041_fs_struct_to_array */
extern void C_P041_fs_struct_to_array_TM_lib_internal(
  /* TM_lib_internal::C_P041_fs_struct_to_array::section */P041_section_int_T_TM *section,
  outC_C_P041_fs_struct_to_array_TM_lib_internal *outC);

extern void C_P041_fs_struct_to_array_reset_TM_lib_internal(
  outC_C_P041_fs_struct_to_array_TM_lib_internal *outC);

#endif /* _C_P041_fs_struct_to_array_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P041_fs_struct_to_array_TM_lib_internal.h
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */

