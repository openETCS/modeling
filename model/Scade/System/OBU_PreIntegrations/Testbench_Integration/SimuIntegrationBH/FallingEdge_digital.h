/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _FallingEdge_digital_H_
#define _FallingEdge_digital_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
} outC_FallingEdge_digital;

/* ===========  node initialization and cycle functions  =========== */
/* digital::FallingEdge */
extern void FallingEdge_digital(
  /* digital::FallingEdge::FE_Input */ kcg_bool FE_Input,
  outC_FallingEdge_digital *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FallingEdge_reset_digital(outC_FallingEdge_digital *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FallingEdge_init_digital(outC_FallingEdge_digital *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _FallingEdge_digital_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FallingEdge_digital.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

