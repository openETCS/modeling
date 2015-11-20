/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg.h"

void establishSessionFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
}

/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2 */
void establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sessionEstablishCmd_in */sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::m32_SystemVersion */m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::connectionStatus */mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::reset */kcg_bool reset,
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::idle */
  static kcg_bool br_1_guard_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSafeRadioConnectionSetUp */
  static kcg_bool br_1_guard_SM1_waitForSafeRadioConnectionSetUp;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSystemVersion */
  static kcg_bool br_1_guard_SM1_waitForSystemVersion;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _22_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _22_SSM_ST_SM1 SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::systemVersionSupported */
  static kcg_bool systemVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::systemVersionNotSupported */
  static kcg_bool systemVersionNotSupported;
  
  outC->sessionStatus.valid = kcg_true;
  if (outC->init) {
    SM1_state_sel = _21_SSM_st_idle_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  systemVersionSupported = (*m32_SystemVersion).valid &
    (*m32_SystemVersion).versionSupported;
  switch (SM1_state_sel) {
    case _20_SSM_st_sessionEstablished_SM1 :
      outC->send_m159_sessionEstablishedReport = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      br_1_guard_SM1_waitForSystemVersion = reset;
      if (br_1_guard_SM1_waitForSystemVersion) {
        outC->send_m159_sessionEstablishedReport = kcg_false;
      }
      else {
        br_1_guard_SM1_idle = systemVersionSupported;
        if (br_1_guard_SM1_idle) {
          outC->send_m159_sessionEstablishedReport = kcg_true;
        }
        else {
          outC->send_m159_sessionEstablishedReport = kcg_false;
        }
      }
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      outC->send_m159_sessionEstablishedReport = kcg_false;
      break;
    case _21_SSM_st_idle_SM1 :
      outC->send_m159_sessionEstablishedReport = kcg_false;
      break;
    
  }
  outC->established = outC->send_m159_sessionEstablishedReport;
  systemVersionNotSupported = (*m32_SystemVersion).valid &
    !(*m32_SystemVersion).versionSupported;
  switch (SM1_state_sel) {
    case _20_SSM_st_sessionEstablished_SM1 :
      outC->send_m154_noCompatibleVersionSupported = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      if (br_1_guard_SM1_waitForSystemVersion) {
        outC->send_m154_noCompatibleVersionSupported = kcg_false;
      }
      else if (br_1_guard_SM1_idle) {
        outC->send_m154_noCompatibleVersionSupported = kcg_false;
      }
      else if (systemVersionNotSupported) {
        outC->send_m154_noCompatibleVersionSupported = kcg_true;
      }
      else {
        outC->send_m154_noCompatibleVersionSupported = kcg_false;
      }
      outC->requestSafeRadioConnectionSetup = kcg_false;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      outC->send_m154_noCompatibleVersionSupported = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      break;
    case _21_SSM_st_idle_SM1 :
      outC->send_m154_noCompatibleVersionSupported = kcg_false;
      br_1_guard_SM1_idle = (*sessionEstablishCmd_in).valid &
        (*sessionEstablishCmd_in).initiatedByOBU;
      if (br_1_guard_SM1_idle) {
        outC->requestSafeRadioConnectionSetup = kcg_true;
      }
      else {
        outC->requestSafeRadioConnectionSetup = kcg_false;
      }
      break;
    
  }
  outC->terminateCommunicationSession =
    outC->send_m154_noCompatibleVersionSupported;
  outC->infomDriverNoCompatibleVersionSupported =
    outC->terminateCommunicationSession;
  if (outC->terminateCommunicationSession | reset) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->sessionEstablishCmd_mem,
      (sessionCmd_T_RCM_Session_Types_Pkg *)
        &cNoSessionCmd_RCM_Session_Types_Pkg);
  }
  else if ((*sessionEstablishCmd_in).valid) {
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
  if (outC->requestSafeRadioConnectionSetup) {
    /* 1 */
    sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg(
      &outC->sessionEstablishCmd_mem,
      &br_1_guard_SM1_waitForSafeRadioConnectionSetUp,
      &outC->p42_establishSessionCmd);
  }
  else {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
      &outC->p42_establishSessionCmd,
      (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
        &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
  }
  switch (SM1_state_sel) {
    case _20_SSM_st_sessionEstablished_SM1 :
      if (reset) {
        SM1_state_act = _21_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = _20_SSM_st_sessionEstablished_SM1;
      }
      outC->send_m155_initiationOfACommunicationSession = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      if (br_1_guard_SM1_waitForSystemVersion) {
        SM1_state_act = _21_SSM_st_idle_SM1;
      }
      else if (systemVersionSupported) {
        SM1_state_act = _20_SSM_st_sessionEstablished_SM1;
      }
      else if (systemVersionNotSupported) {
        SM1_state_act = _21_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = SSM_st_waitForSystemVersion_SM1;
      }
      outC->send_m155_initiationOfACommunicationSession = kcg_false;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      br_1_guard_SM1_waitForSafeRadioConnectionSetUp =
        (*connectionStatus).valid & ((*connectionStatus).status ==
          mcs_connected_RCM_Types_Pkg) & ((*connectionStatus).nid_radio ==
          outC->sessionEstablishCmd_mem.nid_radio) &
        outC->sessionEstablishCmd_mem.valid;
      if (br_1_guard_SM1_waitForSafeRadioConnectionSetUp) {
        SM1_state_act = SSM_st_waitForSystemVersion_SM1;
        outC->send_m155_initiationOfACommunicationSession = kcg_true;
      }
      else {
        if (reset) {
          SM1_state_act = _21_SSM_st_idle_SM1;
        }
        else {
          SM1_state_act = SSM_st_waitForSafeRadioConnectionSetUp_SM1;
        }
        outC->send_m155_initiationOfACommunicationSession = kcg_false;
      }
      break;
    case _21_SSM_st_idle_SM1 :
      if (br_1_guard_SM1_idle) {
        SM1_state_act = SSM_st_waitForSafeRadioConnectionSetUp_SM1;
      }
      else {
        SM1_state_act = _21_SSM_st_idle_SM1;
      }
      outC->send_m155_initiationOfACommunicationSession = kcg_false;
      break;
    
  }
  switch (SM1_state_act) {
    case _20_SSM_st_sessionEstablished_SM1 :
      outC->sessionStatus.phase = sp_establishing_RCM_Session_Types_Pkg;
      outC->SM1_state_nxt = _20_SSM_st_sessionEstablished_SM1;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      outC->sessionStatus.phase = sp_establishing_RCM_Session_Types_Pkg;
      outC->SM1_state_nxt = SSM_st_waitForSystemVersion_SM1;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      outC->sessionStatus.phase = sp_establishing_RCM_Session_Types_Pkg;
      outC->SM1_state_nxt = SSM_st_waitForSafeRadioConnectionSetUp_SM1;
      break;
    case _21_SSM_st_idle_SM1 :
      outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
      outC->SM1_state_nxt = _21_SSM_st_idle_SM1;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

