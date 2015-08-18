/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T10:47:32
*************************************************************$ */
#ifndef _T_Filter_Metadata_TM_lib_internal_H_
#define _T_Filter_Metadata_TM_lib_internal_H_

#include "kcg_types.h"
#include "T_Decode_metadata_new_TM_lib_internal.h"
#include "T_Filter_Metadata_Element_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_lib_internal::T_Filter_Metadata::data_match */ data_match;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_Filter_Metadata_Element_TM_lib_internal /* 1 */ _1_Context_1;
  outC_T_Filter_Metadata_Element_TM_lib_internal /* 3 */ Context_3;
  outC_T_Decode_metadata_new_TM_lib_internal /* 2 */ Context_2;
  outC_T_Decode_metadata_new_TM_lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_lib_internal::T_Filter_Metadata::_L1 */ _L1;
  kcg_int /* TM_lib_internal::T_Filter_Metadata::_L2 */ _L2;
  kcg_int /* TM_lib_internal::T_Filter_Metadata::_L6 */ _L6;
  kcg_int /* TM_lib_internal::T_Filter_Metadata::_L4 */ _L4;
  kcg_int /* TM_lib_internal::T_Filter_Metadata::_L3 */ _L3;
  kcg_int /* TM_lib_internal::T_Filter_Metadata::_L10 */ _L10;
  kcg_int /* TM_lib_internal::T_Filter_Metadata::_L8 */ _L8;
  kcg_int /* TM_lib_internal::T_Filter_Metadata::_L7 */ _L7;
  kcg_bool /* TM_lib_internal::T_Filter_Metadata::_L11 */ _L11;
  kcg_bool /* TM_lib_internal::T_Filter_Metadata::_L17 */ _L17;
  kcg_bool /* TM_lib_internal::T_Filter_Metadata::_L18 */ _L18;
  kcg_bool /* TM_lib_internal::T_Filter_Metadata::_L19 */ _L19;
  kcg_bool /* TM_lib_internal::T_Filter_Metadata::_L20 */ _L20;
  kcg_bool /* TM_lib_internal::T_Filter_Metadata::_L22 */ _L22;
} outC_T_Filter_Metadata_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::T_Filter_Metadata */
extern void T_Filter_Metadata_TM_lib_internal(
  /* TM_lib_internal::T_Filter_Metadata::Metadata_from_track */kcg_int Metadata_from_track,
  /* TM_lib_internal::T_Filter_Metadata::Metadata_looked_for */kcg_int Metadata_looked_for,
  /* TM_lib_internal::T_Filter_Metadata::F_version */kcg_bool F_version,
  /* TM_lib_internal::T_Filter_Metadata::F_id */kcg_bool F_id,
  outC_T_Filter_Metadata_TM_lib_internal *outC);

extern void T_Filter_Metadata_reset_TM_lib_internal(
  outC_T_Filter_Metadata_TM_lib_internal *outC);

#endif /* _T_Filter_Metadata_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_Filter_Metadata_TM_lib_internal.h
** Generation date: 2015-08-12T10:47:32
*************************************************************$ */

