/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */
#ifndef _MoRC_EitherEdge_digital_H_
#define _MoRC_EitherEdge_digital_H_

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
} MoRC_outC_EitherEdge_digital;

/* ===========  node initialization and cycle functions  =========== */
/* digital::EitherEdge */
extern void MoRC_EitherEdge_digital(
  /* digital::EitherEdge::EE_Input */ kcg_bool EE_Input,
  MoRC_outC_EitherEdge_digital *outC);

extern void MoRC_EitherEdge_reset_digital(MoRC_outC_EitherEdge_digital *outC);
extern void MoRC_EitherEdge_init_digital(MoRC_outC_EitherEdge_digital *outC);

#endif /* _MoRC_EitherEdge_digital_H_ */
/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_EitherEdge_digital.h
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

