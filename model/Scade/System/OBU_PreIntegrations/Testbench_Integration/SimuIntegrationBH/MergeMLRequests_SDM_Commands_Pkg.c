/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMLRequests_SDM_Commands_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void MergeMLRequests_init_SDM_Commands_Pkg(
  outC_MergeMLRequests_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_sbr = kcg_true;
  outC->triggeredSB = kcg_true;
  outC->revokedSB = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MergeMLRequests_reset_SDM_Commands_Pkg(
  outC_MergeMLRequests_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_Commands_Pkg::MergeMLRequests */
void MergeMLRequests_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::MergeMLRequests::revokedSBcmd */ kcg_bool revokedSBcmd,
  /* SDM_Commands_Pkg::MergeMLRequests::sbr */ kcg_bool sbr,
  /* SDM_Commands_Pkg::MergeMLRequests::triggeredSBcmd */ kcg_bool triggeredSBcmd,
  outC_MergeMLRequests_SDM_Commands_Pkg *outC)
{
  /* SDM_Commands_Pkg::MergeMLRequests::triggeredSB */
  static kcg_bool last_triggeredSB;
  /* SDM_Commands_Pkg::MergeMLRequests::revokedSB */
  static kcg_bool last_revokedSB;
  /* SDM_Commands_Pkg::MergeMLRequests::sbr */
  static kcg_bool last_sbr;
  /* SDM_Commands_Pkg::MergeMLRequests::_L2 */
  static kcg_bool _L2;
  /* SDM_Commands_Pkg::MergeMLRequests::_L54 */
  static kcg_bool _L54;
  /* SDM_Commands_Pkg::MergeMLRequests::_L57 */
  static kcg_bool _L57;
  /* SDM_Commands_Pkg::MergeMLRequests::_L58 */
  static kcg_bool _L58;
  /* SDM_Commands_Pkg::MergeMLRequests::_L59 */
  static kcg_bool _L59;
  /* SDM_Commands_Pkg::MergeMLRequests::_L61 */
  static kcg_bool _L61;
  /* SDM_Commands_Pkg::MergeMLRequests::_L62 */
  static kcg_bool _L62;
  /* SDM_Commands_Pkg::MergeMLRequests::_L64 */
  static kcg_bool _L64;
  /* SDM_Commands_Pkg::MergeMLRequests::_L76 */
  static kcg_bool _L76;
  /* SDM_Commands_Pkg::MergeMLRequests::_L77 */
  static kcg_bool _L77;
  
  _L2 = sbr;
  _L77 = triggeredSBcmd;
  _L54 = _L77 | _L2;
  _L57 = !_L77;
  /* last_init_ck_sbr */ if (outC->init) {
    last_sbr = kcg_false;
  }
  else {
    last_sbr = outC->rem_sbr;
  }
  _L62 = last_sbr;
  _L61 = _L2 ^ _L62;
  _L64 = _L61 & _L62;
  _L58 = _L57 & _L64;
  _L76 = revokedSBcmd;
  _L59 = _L76 | _L58;
  /* last_init_ck_revokedSB */ if (outC->init) {
    last_revokedSB = kcg_false;
  }
  else {
    last_revokedSB = outC->revokedSB;
  }
  outC->revokedSB = _L59;
  /* last_init_ck_triggeredSB */ if (outC->init) {
    last_triggeredSB = kcg_false;
  }
  else {
    last_triggeredSB = outC->triggeredSB;
  }
  outC->triggeredSB = _L54;
  outC->rem_sbr = sbr;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MergeMLRequests_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

