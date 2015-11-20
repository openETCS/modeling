/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
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
  /* digital::FallingEdge::FE_Input */kcg_bool FE_Input,
  outC_FallingEdge_digital *outC);

extern void FallingEdge_reset_digital(outC_FallingEdge_digital *outC);

#endif /* _FallingEdge_digital_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FallingEdge_digital.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

