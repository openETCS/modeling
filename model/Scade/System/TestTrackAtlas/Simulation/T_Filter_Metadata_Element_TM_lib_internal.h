/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */
#ifndef _T_Filter_Metadata_Element_TM_lib_internal_H_
#define _T_Filter_Metadata_Element_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_lib_internal::T_Filter_Metadata_Element::data_match */ data_match;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_lib_internal::T_Filter_Metadata_Element::_L6 */ _L6;
  kcg_int /* TM_lib_internal::T_Filter_Metadata_Element::_L5 */ _L5;
  kcg_bool /* TM_lib_internal::T_Filter_Metadata_Element::_L4 */ _L4;
  kcg_bool /* TM_lib_internal::T_Filter_Metadata_Element::_L3 */ _L3;
  kcg_bool /* TM_lib_internal::T_Filter_Metadata_Element::_L2 */ _L2;
  kcg_int /* TM_lib_internal::T_Filter_Metadata_Element::_L1 */ _L1;
} outC_T_Filter_Metadata_Element_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::T_Filter_Metadata_Element */
extern void T_Filter_Metadata_Element_TM_lib_internal(
  /* TM_lib_internal::T_Filter_Metadata_Element::value2 */kcg_int value2,
  /* TM_lib_internal::T_Filter_Metadata_Element::value1 */kcg_int value1,
  /* TM_lib_internal::T_Filter_Metadata_Element::do_filter */kcg_bool do_filter,
  outC_T_Filter_Metadata_Element_TM_lib_internal *outC);

extern void T_Filter_Metadata_Element_reset_TM_lib_internal(
  outC_T_Filter_Metadata_Element_TM_lib_internal *outC);

#endif /* _T_Filter_Metadata_Element_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_Filter_Metadata_Element_TM_lib_internal.h
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */

