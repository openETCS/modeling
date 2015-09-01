/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:16:32
*************************************************************$ */
#ifndef _C_P015_unflatten_sections_TM_lib_internal_H_
#define _C_P015_unflatten_sections_TM_lib_internal_H_

#include "kcg_types.h"
#include "C_P015_us_array_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P015_OBU_sectionlist_enum_T_TM /* TM_lib_internal::C_P015_unflatten_sections::sections */ sections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P015_us_array_TM_lib_internal /* 1 */ Context_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P015_sections_array_flat_T_TM /* TM_lib_internal::C_P015_unflatten_sections::_L1 */ _L1;
  kcg_int /* TM_lib_internal::C_P015_unflatten_sections::_L3 */ _L3;
  array_int_32 /* TM_lib_internal::C_P015_unflatten_sections::_L5 */ _L5;
  array_int_128_32 /* TM_lib_internal::C_P015_unflatten_sections::_L6 */ _L6;
  kcg_int /* TM_lib_internal::C_P015_unflatten_sections::_L7 */ _L7;
  array__2460 /* TM_lib_internal::C_P015_unflatten_sections::_L9 */ _L9;
  kcg_bool /* TM_lib_internal::C_P015_unflatten_sections::_L11 */ _L11;
  kcg_bool /* TM_lib_internal::C_P015_unflatten_sections::_L12 */ _L12;
  kcg_int /* TM_lib_internal::C_P015_unflatten_sections::_L13 */ _L13;
  kcg_bool /* TM_lib_internal::C_P015_unflatten_sections::_L14 */ _L14;
} outC_C_P015_unflatten_sections_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P015_unflatten_sections */
extern void C_P015_unflatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P015_unflatten_sections::nid_packet_ok */kcg_bool nid_packet_ok,
  /* TM_lib_internal::C_P015_unflatten_sections::n_iter */kcg_int n_iter,
  /* TM_lib_internal::C_P015_unflatten_sections::flat */P015_sections_array_flat_T_TM *flat,
  outC_C_P015_unflatten_sections_TM_lib_internal *outC);

extern void C_P015_unflatten_sections_reset_TM_lib_internal(
  outC_C_P015_unflatten_sections_TM_lib_internal *outC);

#endif /* _C_P015_unflatten_sections_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P015_unflatten_sections_TM_lib_internal.h
** Generation date: 2015-08-27T15:16:32
*************************************************************$ */

