/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-17T13:54:12
*************************************************************$ */
#ifndef _C_P005_us_array_TM_lib_internal_H_
#define _C_P005_us_array_TM_lib_internal_H_

#include "kcg_types.h"
#include "C_P005_extract_el_section_TM_lib_internal.h"
#include "CAST_Int_to_D_LINK_TM_conversions.h"
#include "CAST_Int_to_NID_C_TM_conversions.h"
#include "CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.h"
#include "CAST_Int_to_Q_LOCACC_TM_conversions.h"
#include "CAST_Int_to_Q_LINKREACTION_TM_conversions.h"
#include "CAST_Int_to_Q_LINKORIENTATION_TM_conversions.h"
#include "CAST_Int_to_NID_BG_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_lib_internal::C_P005_us_array::cont */ cont;
  P005_section_enum_T_TM /* TM_lib_internal::C_P005_us_array::sections */ sections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_D_LINK_TM_conversions /* 1 */ _7_Context_1;
  outC_C_P005_extract_el_section_TM_lib_internal /* 1 */ _6_Context_1;
  outC_CAST_Int_to_NID_C_TM_conversions /* 1 */ _5_Context_1;
  outC_C_P005_extract_el_section_TM_lib_internal /* 3 */ Context_3;
  outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions /* 1 */ _4_Context_1;
  outC_C_P005_extract_el_section_TM_lib_internal /* 2 */ Context_2;
  outC_CAST_Int_to_Q_LOCACC_TM_conversions /* 1 */ _3_Context_1;
  outC_CAST_Int_to_Q_LINKREACTION_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_Int_to_NID_BG_TM_conversions /* 1 */ Context_1;
  outC_C_P005_extract_el_section_TM_lib_internal /* 7 */ Context_7;
  outC_C_P005_extract_el_section_TM_lib_internal /* 6 */ Context_6;
  outC_C_P005_extract_el_section_TM_lib_internal /* 5 */ Context_5;
  outC_C_P005_extract_el_section_TM_lib_internal /* 4 */ Context_4;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P005_sections_array_flat_T_TM /* TM_lib_internal::C_P005_us_array::_L1 */ _L1;
  kcg_int /* TM_lib_internal::C_P005_us_array::_L3 */ _L3;
  P005_section_enum_T_TM /* TM_lib_internal::C_P005_us_array::_L4 */ _L4;
  kcg_int /* TM_lib_internal::C_P005_us_array::_L5 */ _L5;
  kcg_int /* TM_lib_internal::C_P005_us_array::_L15 */ _L15;
  kcg_int /* TM_lib_internal::C_P005_us_array::_L16 */ _L16;
  kcg_int /* TM_lib_internal::C_P005_us_array::_L18 */ _L18;
  kcg_int /* TM_lib_internal::C_P005_us_array::_L19 */ _L19;
  kcg_int /* TM_lib_internal::C_P005_us_array::_L20 */ _L20;
  D_LINK /* TM_lib_internal::C_P005_us_array::_L25 */ _L25;
  NID_C /* TM_lib_internal::C_P005_us_array::_L26 */ _L26;
  Q_NEWCOUNTRY /* TM_lib_internal::C_P005_us_array::_L28 */ _L28;
  kcg_bool /* TM_lib_internal::C_P005_us_array::_L32 */ _L32;
  kcg_bool /* TM_lib_internal::C_P005_us_array::_L33 */ _L33;
  Q_LOCACC /* TM_lib_internal::C_P005_us_array::_L31 */ _L31;
  Q_LINKREACTION /* TM_lib_internal::C_P005_us_array::_L30 */ _L30;
  Q_LINKORIENTATION /* TM_lib_internal::C_P005_us_array::_L29 */ _L29;
  NID_BG /* TM_lib_internal::C_P005_us_array::_L27 */ _L27;
  kcg_int /* TM_lib_internal::C_P005_us_array::_L24 */ _L24;
  kcg_int /* TM_lib_internal::C_P005_us_array::_L23 */ _L23;
  kcg_int /* TM_lib_internal::C_P005_us_array::_L22 */ _L22;
  kcg_int /* TM_lib_internal::C_P005_us_array::_L21 */ _L21;
} outC_C_P005_us_array_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P005_us_array */
extern void C_P005_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P005_us_array::i */kcg_int i,
  /* TM_lib_internal::C_P005_us_array::n_iter_int */kcg_int n_iter_int,
  /* TM_lib_internal::C_P005_us_array::flat */P005_sections_array_flat_T_TM *flat,
  outC_C_P005_us_array_TM_lib_internal *outC);

extern void C_P005_us_array_reset_TM_lib_internal(
  outC_C_P005_us_array_TM_lib_internal *outC);

#endif /* _C_P005_us_array_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_us_array_TM_lib_internal.h
** Generation date: 2015-08-17T13:54:12
*************************************************************$ */

