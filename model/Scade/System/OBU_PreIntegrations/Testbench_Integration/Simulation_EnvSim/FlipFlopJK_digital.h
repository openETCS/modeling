/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
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
  /* digital::FlipFlopJK::Set */kcg_bool Set,
  /* digital::FlipFlopJK::Reset */kcg_bool Reset,
  /* digital::FlipFlopJK::Init */kcg_bool Init,
  outC_FlipFlopJK_digital *outC);

extern void FlipFlopJK_reset_digital(outC_FlipFlopJK_digital *outC);

#endif /* _FlipFlopJK_digital_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FlipFlopJK_digital.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

