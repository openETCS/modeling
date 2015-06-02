/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T15:02:42
*************************************************************$ */
#ifndef _TOOLS_evaluate_N_ITER_TM_conversions_H_
#define _TOOLS_evaluate_N_ITER_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_conversions::TOOLS_evaluate_N_ITER::valid */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::TOOLS_evaluate_N_ITER::_L1 */ _L1;
  kcg_int /* TM_conversions::TOOLS_evaluate_N_ITER::_L2 */ _L2;
  kcg_bool /* TM_conversions::TOOLS_evaluate_N_ITER::_L3 */ _L3;
  kcg_bool /* TM_conversions::TOOLS_evaluate_N_ITER::_L4 */ _L4;
  kcg_bool /* TM_conversions::TOOLS_evaluate_N_ITER::_L5 */ _L5;
} outC_TOOLS_evaluate_N_ITER_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::TOOLS_evaluate_N_ITER */
extern void TOOLS_evaluate_N_ITER_TM_conversions(
  /* TM_conversions::TOOLS_evaluate_N_ITER::valid_metadata */kcg_bool valid_metadata,
  /* TM_conversions::TOOLS_evaluate_N_ITER::n_section */kcg_int n_section,
  /* TM_conversions::TOOLS_evaluate_N_ITER::N_ITER */kcg_int N_ITER,
  outC_TOOLS_evaluate_N_ITER_TM_conversions *outC);

extern void TOOLS_evaluate_N_ITER_reset_TM_conversions(
  outC_TOOLS_evaluate_N_ITER_TM_conversions *outC);

#endif /* _TOOLS_evaluate_N_ITER_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_evaluate_N_ITER_TM_conversions.h
** Generation date: 2015-06-02T15:02:42
*************************************************************$ */

