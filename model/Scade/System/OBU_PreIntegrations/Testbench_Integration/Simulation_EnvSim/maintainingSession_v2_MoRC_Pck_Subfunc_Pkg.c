/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintainingSession_v2_MoRC_Pck_Subfunc_Pkg.h"

void maintainingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
}

/* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2 */
void maintainingSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::prevSessionStatus */sessionStatus_T_RCM_Session_Types_Pkg *prevSessionStatus,
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_maintaining_RCM_Session_Types_Pkg;
  if ((*prevSessionStatus).valid) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L133,
      prevSessionStatus);
  }
  else if (outC->init) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L133,
      prevSessionStatus);
  }
  outC->init = kcg_false;
  outC->sessionStatus.nid_c = outC->_L133.nid_c;
  outC->sessionStatus.nid_rbc = outC->_L133.nid_rbc;
  outC->sessionStatus.nid_radio = outC->_L133.nid_radio;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** maintainingSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

