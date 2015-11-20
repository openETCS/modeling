/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMLRequests_SDM_Commands_Pkg.h"

void MergeMLRequests_reset_SDM_Commands_Pkg(
  outC_MergeMLRequests_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
}

/* SDM_Commands_Pkg::MergeMLRequests */
void MergeMLRequests_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::MergeMLRequests::revokedCmd */kcg_bool revokedCmd,
  /* SDM_Commands_Pkg::MergeMLRequests::req */kcg_bool req,
  /* SDM_Commands_Pkg::MergeMLRequests::triggeredCmd */kcg_bool triggeredCmd,
  outC_MergeMLRequests_SDM_Commands_Pkg *outC)
{
  /* SDM_Commands_Pkg::MergeMLRequests::_L62 */
  static kcg_bool _L62;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L62 = kcg_false;
  }
  else {
    _L62 = outC->rem_req;
  }
  outC->revoked = revokedCmd | (!triggeredCmd & ((req ^ _L62) & _L62));
  outC->triggered = triggeredCmd | req;
  outC->rem_req = req;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergeMLRequests_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

