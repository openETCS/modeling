/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-04T14:43:42
*************************************************************$ */
#ifndef _C_P005_unflatten_sections_TM_lib_internal_H_
#define _C_P005_unflatten_sections_TM_lib_internal_H_

#include "kcg_types.h"
#include "C_P005_us_array_TM_lib_internal.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int /* TM_lib_internal::C_P005_unflatten_sections::n_iter */ n_iter;
  P005_sections_array_flat_TM /* TM_lib_internal::C_P005_unflatten_sections::flat */ flat;
} inC_C_P005_unflatten_sections_TM_lib_internal;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P005_OBU_sectionlist_TM /* TM_lib_internal::C_P005_unflatten_sections::sections */ sections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P005_us_array_TM_lib_internal /* 1 */ Context_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P005_sections_array_flat_TM /* TM_lib_internal::C_P005_unflatten_sections::_L1 */ _L1;
  kcg_int /* TM_lib_internal::C_P005_unflatten_sections::_L3 */ _L3;
  array_int_32 /* TM_lib_internal::C_P005_unflatten_sections::_L5 */ _L5;
  array_int_224_32 /* TM_lib_internal::C_P005_unflatten_sections::_L6 */ _L6;
  kcg_int /* TM_lib_internal::C_P005_unflatten_sections::_L7 */ _L7;
  array__543 /* TM_lib_internal::C_P005_unflatten_sections::_L9 */ _L9;
  kcg_bool /* TM_lib_internal::C_P005_unflatten_sections::_L10 */ _L10;
} outC_C_P005_unflatten_sections_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P005_unflatten_sections */
extern void C_P005_unflatten_sections_TM_lib_internal(
  inC_C_P005_unflatten_sections_TM_lib_internal *inC,
  outC_C_P005_unflatten_sections_TM_lib_internal *outC);

extern void C_P005_unflatten_sections_reset_TM_lib_internal(
  outC_C_P005_unflatten_sections_TM_lib_internal *outC);

#endif /* _C_P005_unflatten_sections_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_unflatten_sections_TM_lib_internal.h
** Generation date: 2015-06-04T14:43:42
*************************************************************$ */

