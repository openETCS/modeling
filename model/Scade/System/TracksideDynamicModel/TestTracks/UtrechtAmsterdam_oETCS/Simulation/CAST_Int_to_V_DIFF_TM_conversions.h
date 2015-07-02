/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T00:04:39
*************************************************************$ */
#ifndef _CAST_Int_to_V_DIFF_TM_conversions_H_
#define _CAST_Int_to_V_DIFF_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_DIFF /* TM_conversions::CAST_Int_to_V_DIFF::v_diff */ v_diff;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_Int_to_V_DIFF::_L1 */ _L1;
  kcg_bool /* TM_conversions::CAST_Int_to_V_DIFF::_L9 */ _L9;
  kcg_bool /* TM_conversions::CAST_Int_to_V_DIFF::_L8 */ _L8;
  kcg_int /* TM_conversions::CAST_Int_to_V_DIFF::_L7 */ _L7;
  kcg_int /* TM_conversions::CAST_Int_to_V_DIFF::_L6 */ _L6;
  kcg_int /* TM_conversions::CAST_Int_to_V_DIFF::_L11 */ _L11;
  kcg_int /* TM_conversions::CAST_Int_to_V_DIFF::_L12 */ _L12;
} outC_CAST_Int_to_V_DIFF_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_V_DIFF */
extern void CAST_Int_to_V_DIFF_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_DIFF::v_diff_int */kcg_int v_diff_int,
  outC_CAST_Int_to_V_DIFF_TM_conversions *outC);

extern void CAST_Int_to_V_DIFF_reset_TM_conversions(
  outC_CAST_Int_to_V_DIFF_TM_conversions *outC);

#endif /* _CAST_Int_to_V_DIFF_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_DIFF_TM_conversions.h
** Generation date: 2015-07-03T00:04:39
*************************************************************$ */

