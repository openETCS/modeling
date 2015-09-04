/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */
#ifndef _C_P021_unflatten_sections_TM_lib_internal_H_
#define _C_P021_unflatten_sections_TM_lib_internal_H_

#include "kcg_types.h"
#include "C_P021_us_array_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P021_OBU_sectionlist_enum_T_TM /* TM_lib_internal::C_P021_unflatten_sections::sections */ sections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P021_us_array_TM_lib_internal /* 1 */ Context_1[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P021_sections_array_flat_T_TM /* TM_lib_internal::C_P021_unflatten_sections::_L1 */ _L1;
  kcg_int /* TM_lib_internal::C_P021_unflatten_sections::_L3 */ _L3;
  array_int_33 /* TM_lib_internal::C_P021_unflatten_sections::_L5 */ _L5;
  array_int_99_33 /* TM_lib_internal::C_P021_unflatten_sections::_L6 */ _L6;
  kcg_int /* TM_lib_internal::C_P021_unflatten_sections::_L7 */ _L7;
  array__11091 /* TM_lib_internal::C_P021_unflatten_sections::_L9 */ _L9;
  kcg_bool /* TM_lib_internal::C_P021_unflatten_sections::_L11 */ _L11;
} outC_C_P021_unflatten_sections_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P021_unflatten_sections */
extern void C_P021_unflatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P021_unflatten_sections::nid_packet_ok */kcg_bool nid_packet_ok,
  /* TM_lib_internal::C_P021_unflatten_sections::n_iter */kcg_int n_iter,
  /* TM_lib_internal::C_P021_unflatten_sections::flat */P021_sections_array_flat_T_TM *flat,
  outC_C_P021_unflatten_sections_TM_lib_internal *outC);

extern void C_P021_unflatten_sections_reset_TM_lib_internal(
  outC_C_P021_unflatten_sections_TM_lib_internal *outC);

#endif /* _C_P021_unflatten_sections_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P021_unflatten_sections_TM_lib_internal.h
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */

