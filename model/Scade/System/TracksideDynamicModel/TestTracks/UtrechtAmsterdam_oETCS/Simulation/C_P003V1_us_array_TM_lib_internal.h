/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-02T23:19:43
*************************************************************$ */
#ifndef _C_P003V1_us_array_TM_lib_internal_H_
#define _C_P003V1_us_array_TM_lib_internal_H_

#include "kcg_types.h"
#include "CAST_Int_to_NID_C_TM_conversions.h"
#include "C_P003V1_extract_el_section_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_lib_internal::C_P003V1_us_array::cont */ cont;
  P003V1_section_enum_T_TM_baseline2 /* TM_lib_internal::C_P003V1_us_array::sections */ sections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_NID_C_TM_conversions /* 2 */ _1_Context_2;
  outC_C_P003V1_extract_el_section_TM_lib_internal /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_C /* TM_lib_internal::C_P003V1_us_array::_L41 */ _L41;
  kcg_bool /* TM_lib_internal::C_P003V1_us_array::_L40 */ _L40;
  kcg_bool /* TM_lib_internal::C_P003V1_us_array::_L39 */ _L39;
  P003V1_section_enum_T_TM_baseline2 /* TM_lib_internal::C_P003V1_us_array::_L38 */ _L38;
  P003V1_OBU_sectionlist_int_T_TM_baseline2 /* TM_lib_internal::C_P003V1_us_array::_L37 */ _L37;
  kcg_int /* TM_lib_internal::C_P003V1_us_array::_L36 */ _L36;
  kcg_int /* TM_lib_internal::C_P003V1_us_array::_L35 */ _L35;
  kcg_int /* TM_lib_internal::C_P003V1_us_array::_L34 */ _L34;
} outC_C_P003V1_us_array_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P003V1_us_array */
extern void C_P003V1_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P003V1_us_array::i */kcg_int i,
  /* TM_lib_internal::C_P003V1_us_array::n_iter_int */kcg_int n_iter_int,
  /* TM_lib_internal::C_P003V1_us_array::flat */P003V1_OBU_sectionlist_int_T_TM_baseline2 *flat,
  outC_C_P003V1_us_array_TM_lib_internal *outC);

extern void C_P003V1_us_array_reset_TM_lib_internal(
  outC_C_P003V1_us_array_TM_lib_internal *outC);

#endif /* _C_P003V1_us_array_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003V1_us_array_TM_lib_internal.h
** Generation date: 2015-07-02T23:19:43
*************************************************************$ */

