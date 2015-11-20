/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _MergeMLRequests_SDM_Commands_Pkg_H_
#define _MergeMLRequests_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SDM_Commands_Pkg::MergeMLRequests::revoked */ revoked;
  kcg_bool /* SDM_Commands_Pkg::MergeMLRequests::triggered */ triggered;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* SDM_Commands_Pkg::MergeMLRequests::req */ rem_req;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_MergeMLRequests_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::MergeMLRequests */
extern void MergeMLRequests_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::MergeMLRequests::revokedCmd */kcg_bool revokedCmd,
  /* SDM_Commands_Pkg::MergeMLRequests::req */kcg_bool req,
  /* SDM_Commands_Pkg::MergeMLRequests::triggeredCmd */kcg_bool triggeredCmd,
  outC_MergeMLRequests_SDM_Commands_Pkg *outC);

extern void MergeMLRequests_reset_SDM_Commands_Pkg(
  outC_MergeMLRequests_SDM_Commands_Pkg *outC);

#endif /* _MergeMLRequests_SDM_Commands_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergeMLRequests_SDM_Commands_Pkg.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

