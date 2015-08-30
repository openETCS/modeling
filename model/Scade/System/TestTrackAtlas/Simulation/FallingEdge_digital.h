/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */
#ifndef _FallingEdge_digital_H_
#define _FallingEdge_digital_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* digital::FallingEdge::FE_Output */ FE_Output;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* digital::FallingEdge::_L1 */ rem__L1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* digital::FallingEdge::_L1 */ _L1;
  kcg_bool /* digital::FallingEdge::_L3 */ _L3;
  kcg_bool /* digital::FallingEdge::_L4 */ _L4;
  kcg_bool /* digital::FallingEdge::_L5 */ _L5;
} outC_FallingEdge_digital;

/* ===========  node initialization and cycle functions  =========== */
/* digital::FallingEdge */
extern void FallingEdge_digital(
  /* digital::FallingEdge::FE_Input */kcg_bool FE_Input,
  outC_FallingEdge_digital *outC);

extern void FallingEdge_reset_digital(outC_FallingEdge_digital *outC);

#endif /* _FallingEdge_digital_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FallingEdge_digital.h
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

