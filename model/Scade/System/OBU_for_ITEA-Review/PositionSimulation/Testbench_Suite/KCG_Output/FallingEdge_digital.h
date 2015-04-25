/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
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
  kcg_bool /* digital::FallingEdge::FE_Input */ rem_FE_Input;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_FallingEdge_digital;

/* ===========  node initialization and cycle functions  =========== */
/* digital::FallingEdge */
extern void FallingEdge_digital(
  /* digital::FallingEdge::FE_Input */ kcg_bool FE_Input,
  outC_FallingEdge_digital *outC);

extern void FallingEdge_reset_digital(outC_FallingEdge_digital *outC);
extern void FallingEdge_init_digital(outC_FallingEdge_digital *outC);

#endif /* _FallingEdge_digital_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** FallingEdge_digital.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

