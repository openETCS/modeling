/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _CAST_NID_EM_to_int_TM_conversions_H_
#define _CAST_NID_EM_to_int_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_conversions::CAST_NID_EM_to_int::nid_em_int */ nid_em_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_EM /* TM_conversions::CAST_NID_EM_to_int::_L1 */ _L1;
  kcg_bool /* TM_conversions::CAST_NID_EM_to_int::_L9 */ _L9;
  kcg_bool /* TM_conversions::CAST_NID_EM_to_int::_L8 */ _L8;
  kcg_int /* TM_conversions::CAST_NID_EM_to_int::_L10 */ _L10;
  kcg_int /* TM_conversions::CAST_NID_EM_to_int::_L11 */ _L11;
} outC_CAST_NID_EM_to_int_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_NID_EM_to_int */
extern void CAST_NID_EM_to_int_TM_conversions(
  /* TM_conversions::CAST_NID_EM_to_int::nid_em */NID_EM nid_em,
  outC_CAST_NID_EM_to_int_TM_conversions *outC);

extern void CAST_NID_EM_to_int_reset_TM_conversions(
  outC_CAST_NID_EM_to_int_TM_conversions *outC);

#endif /* _CAST_NID_EM_to_int_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_NID_EM_to_int_TM_conversions.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

