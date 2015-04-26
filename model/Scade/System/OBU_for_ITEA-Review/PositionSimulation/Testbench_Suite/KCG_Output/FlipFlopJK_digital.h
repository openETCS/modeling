/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _FlipFlopJK_digital_H_
#define _FlipFlopJK_digital_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* digital::FlipFlopJK::FFJK_Output */ FFJK_Output;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_FlipFlopJK_digital;

/* ===========  node initialization and cycle functions  =========== */
/* digital::FlipFlopJK */
extern void FlipFlopJK_digital(
  /* digital::FlipFlopJK::Set */ kcg_bool Set,
  /* digital::FlipFlopJK::Reset */ kcg_bool Reset,
  /* digital::FlipFlopJK::Init */ kcg_bool Init,
  outC_FlipFlopJK_digital *outC);

extern void FlipFlopJK_reset_digital(outC_FlipFlopJK_digital *outC);
extern void FlipFlopJK_init_digital(outC_FlipFlopJK_digital *outC);

#endif /* _FlipFlopJK_digital_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** FlipFlopJK_digital.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

