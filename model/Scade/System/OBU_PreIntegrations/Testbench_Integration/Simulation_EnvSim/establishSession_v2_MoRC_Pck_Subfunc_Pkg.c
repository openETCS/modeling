/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establishSession_v2_MoRC_Pck_Subfunc_Pkg.h"

void establishSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  establishSessionFromRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
  /* 1 */
  establishSessionFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
}

/* MoRC_Pck::Subfunc_Pkg::establishSession_v2 */
void establishSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::sessionEstablishCmd_in */sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::m32_SystemVersion */m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::connectionStatus */mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::reset */kcg_bool reset,
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _11_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _11_SSM_ST_SM1 SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static kcg_bool SM1_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::initiatedByOBU */
  static kcg_bool initiatedByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::initiatedByRBC */
  static kcg_bool initiatedByRBC;
  
  initiatedByRBC = (*sessionEstablishCmd_in).valid &
    (*sessionEstablishCmd_in).initiatedByRBC &
    (*sessionEstablishCmd_in).m38.valid & ((*connectionStatus).valid &
      ((*connectionStatus).status == mcs_connected_RCM_Types_Pkg));
  if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = _10_SSM_st_idle_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  initiatedByOBU = (*sessionEstablishCmd_in).valid &
    (*sessionEstablishCmd_in).initiatedByOBU;
  switch (SM1_state_sel) {
    case _10_SSM_st_idle_SM1 :
      if (initiatedByOBU) {
        SM1_reset_act = kcg_true;
        SM1_state_act = SSM_st_establishingByOBU_SM1;
      }
      else {
        if (initiatedByRBC) {
          SM1_state_act = SSM_st_establishingByRBC_SM1;
        }
        else {
          SM1_state_act = _10_SSM_st_idle_SM1;
        }
        SM1_reset_act = initiatedByRBC;
      }
      break;
    case SSM_st_establishingByOBU_SM1 :
      if (reset) {
        SM1_state_act = _10_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = SSM_st_establishingByOBU_SM1;
      }
      SM1_reset_act = reset;
      break;
    case SSM_st_establishingByRBC_SM1 :
      if (reset) {
        SM1_state_act = _10_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = SSM_st_establishingByRBC_SM1;
      }
      SM1_reset_act = reset;
      break;
    
  }
  switch (SM1_state_act) {
    case _10_SSM_st_idle_SM1 :
      outC->send_m155_initiationOfACommunicationSession = kcg_false;
      outC->send_m159_sessionEstablishedReport = kcg_false;
      outC->send_m154_noCompatibleVersionSupported = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      outC->terminateCommunicationSession = kcg_false;
      outC->infomDriverNoCompatibleVersionSupported = kcg_false;
      outC->established = kcg_false;
      outC->SM1_state_nxt = _10_SSM_st_idle_SM1;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        (sessionStatus_T_RCM_Session_Types_Pkg *)
          &cNoSessionStatus_RCM_Session_Types_Pkg);
      outC->sessionStatus.valid = kcg_true;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_establishSessionCmd,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      break;
    case SSM_st_establishingByOBU_SM1 :
      if (SM1_reset_act) {
        /* 1 */
        establishSessionFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
          &outC->_1_Context_1);
      }
      /* 1 */
      establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
        sessionEstablishCmd_in,
        m32_SystemVersion,
        connectionStatus,
        reset,
        &outC->_1_Context_1);
      outC->SM1_state_nxt = SSM_st_establishingByOBU_SM1;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &outC->_1_Context_1.sessionStatus);
      outC->established = outC->_1_Context_1.established;
      outC->infomDriverNoCompatibleVersionSupported =
        outC->_1_Context_1.infomDriverNoCompatibleVersionSupported;
      outC->terminateCommunicationSession =
        outC->_1_Context_1.terminateCommunicationSession;
      outC->requestSafeRadioConnectionSetup =
        outC->_1_Context_1.requestSafeRadioConnectionSetup;
      outC->send_m154_noCompatibleVersionSupported =
        outC->_1_Context_1.send_m154_noCompatibleVersionSupported;
      outC->send_m159_sessionEstablishedReport =
        outC->_1_Context_1.send_m159_sessionEstablishedReport;
      outC->send_m155_initiationOfACommunicationSession =
        outC->_1_Context_1.send_m155_initiationOfACommunicationSession;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_establishSessionCmd,
        &outC->_1_Context_1.p42_establishSessionCmd);
      break;
    case SSM_st_establishingByRBC_SM1 :
      outC->send_m155_initiationOfACommunicationSession = kcg_false;
      outC->send_m154_noCompatibleVersionSupported = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      outC->terminateCommunicationSession = kcg_false;
      outC->infomDriverNoCompatibleVersionSupported = kcg_false;
      if (SM1_reset_act) {
        /* 1 */
        establishSessionFromRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
      }
      /* 1 */
      establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg(
        sessionEstablishCmd_in,
        connectionStatus,
        reset,
        &outC->Context_1);
      outC->SM1_state_nxt = SSM_st_establishingByRBC_SM1;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &outC->Context_1.sessionStatus);
      outC->established = outC->Context_1.established;
      outC->send_m159_sessionEstablishedReport =
        outC->Context_1.send_m159_sessionEstablishedReport;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_establishSessionCmd,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** establishSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

