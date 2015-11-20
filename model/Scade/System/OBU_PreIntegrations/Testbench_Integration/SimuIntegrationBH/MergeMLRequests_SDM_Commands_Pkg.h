/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _MergeMLRequests_SDM_Commands_Pkg_H_
#define _MergeMLRequests_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SDM_Commands_Pkg::MergeMLRequests::revokedSB */ revokedSB;
  kcg_bool /* SDM_Commands_Pkg::MergeMLRequests::triggeredSB */ triggeredSB;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* SDM_Commands_Pkg::MergeMLRequests::sbr */ rem_sbr;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_MergeMLRequests_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::MergeMLRequests */
extern void MergeMLRequests_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::MergeMLRequests::revokedSBcmd */ kcg_bool revokedSBcmd,
  /* SDM_Commands_Pkg::MergeMLRequests::sbr */ kcg_bool sbr,
  /* SDM_Commands_Pkg::MergeMLRequests::triggeredSBcmd */ kcg_bool triggeredSBcmd,
  outC_MergeMLRequests_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MergeMLRequests_reset_SDM_Commands_Pkg(
  outC_MergeMLRequests_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MergeMLRequests_init_SDM_Commands_Pkg(
  outC_MergeMLRequests_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _MergeMLRequests_SDM_Commands_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MergeMLRequests_SDM_Commands_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

