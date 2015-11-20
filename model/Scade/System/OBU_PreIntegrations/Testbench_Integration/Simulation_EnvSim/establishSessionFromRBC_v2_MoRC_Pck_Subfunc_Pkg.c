/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg.h"

void establishSessionFromRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
}

/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2 */
void establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::sessionEstablishCmd_in */sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::connectionStatus */mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::reset */kcg_bool reset,
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static _16_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static _16_SSM_ST_SM1 SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::initiatedByRBC */
  static kcg_bool initiatedByRBC;
  
  outC->sessionStatus.valid = kcg_true;
  if (outC->init) {
    SM1_state_sel = _15_SSM_st_idle_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  initiatedByRBC = (*sessionEstablishCmd_in).valid &
    (*sessionEstablishCmd_in).initiatedByRBC &
    (*sessionEstablishCmd_in).m38.valid & ((*connectionStatus).valid &
      ((*connectionStatus).status == mcs_connected_RCM_Types_Pkg));
  switch (SM1_state_sel) {
    case SSM_st_sessionEstablished_SM1 :
      outC->send_m159_sessionEstablishedReport = kcg_false;
      if (reset) {
        SM1_state_act = _15_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = SSM_st_sessionEstablished_SM1;
      }
      break;
    case _15_SSM_st_idle_SM1 :
      if (initiatedByRBC) {
        outC->send_m159_sessionEstablishedReport = kcg_true;
        SM1_state_act = SSM_st_sessionEstablished_SM1;
      }
      else {
        outC->send_m159_sessionEstablishedReport = kcg_false;
        SM1_state_act = _15_SSM_st_idle_SM1;
      }
      break;
    
  }
  outC->established = outC->send_m159_sessionEstablishedReport;
  if (reset) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->sessionEstablishCmd_mem,
      (sessionCmd_T_RCM_Session_Types_Pkg *)
        &cNoSessionCmd_RCM_Session_Types_Pkg);
  }
  else if (initiatedByRBC) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->sessionEstablishCmd_mem,
      sessionEstablishCmd_in);
  }
  else if (outC->init) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->sessionEstablishCmd_mem,
      (sessionCmd_T_RCM_Session_Types_Pkg *)
        &cNoSessionCmd_RCM_Session_Types_Pkg);
  }
  outC->init = kcg_false;
  outC->sessionStatus.nid_c = outC->sessionEstablishCmd_mem.nid_c;
  outC->sessionStatus.nid_rbc = outC->sessionEstablishCmd_mem.nid_rbc;
  outC->sessionStatus.nid_radio = outC->sessionEstablishCmd_mem.nid_radio;
  switch (SM1_state_act) {
    case SSM_st_sessionEstablished_SM1 :
      outC->sessionStatus.phase = sp_establishing_RCM_Session_Types_Pkg;
      outC->SM1_state_nxt = SSM_st_sessionEstablished_SM1;
      break;
    case _15_SSM_st_idle_SM1 :
      outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
      outC->SM1_state_nxt = _15_SSM_st_idle_SM1;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

