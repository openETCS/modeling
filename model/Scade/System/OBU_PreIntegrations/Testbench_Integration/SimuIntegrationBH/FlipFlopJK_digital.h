/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _FlipFlopJK_digital_H_
#define _FlipFlopJK_digital_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* digital::FlipFlopJK::FFJK_Output */ FFJK_Output;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* digital::FlipFlopJK::_L2 */ _L2;
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

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FlipFlopJK_reset_digital(outC_FlipFlopJK_digital *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FlipFlopJK_init_digital(outC_FlipFlopJK_digital *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _FlipFlopJK_digital_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FlipFlopJK_digital.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

