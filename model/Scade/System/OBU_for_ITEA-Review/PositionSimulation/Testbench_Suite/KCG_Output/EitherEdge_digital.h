/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _EitherEdge_digital_H_
#define _EitherEdge_digital_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* digital::EitherEdge::EE_Output */ EE_Output;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* digital::EitherEdge::EE_Input */ rem_EE_Input;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_EitherEdge_digital;

/* ===========  node initialization and cycle functions  =========== */
/* digital::EitherEdge */
extern void EitherEdge_digital(
  /* digital::EitherEdge::EE_Input */ kcg_bool EE_Input,
  outC_EitherEdge_digital *outC);

extern void EitherEdge_reset_digital(outC_EitherEdge_digital *outC);
extern void EitherEdge_init_digital(outC_EitherEdge_digital *outC);

#endif /* _EitherEdge_digital_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** EitherEdge_digital.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

