/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establishSession_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void establishSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = _26_SSM_st_idle_SM1;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus.nid_c = 0;
  outC->sessionStatus.nid_rbc = 0;
  outC->sessionStatus.nid_radio = 0;
  outC->established = kcg_true;
  outC->infomDriverNoCompatibleVersionSupported = kcg_true;
  outC->terminateCommunicationSession = kcg_true;
  outC->requestSafeRadioConnectionSetup = kcg_true;
  outC->send_m154_noCompatibleVersionSupported = kcg_true;
  outC->send_m159_sessionEstablishedReport = kcg_true;
  outC->send_m155_initiationOfACommunicationSession = kcg_true;
  outC->p42_establishSessionCmd.valid = kcg_true;
  outC->p42_establishSessionCmd.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p42_establishSessionCmd.q_dir = Q_DIR_Reverse;
  outC->p42_establishSessionCmd.q_rbc = Q_RBC_Terminate_communication_session;
  outC->p42_establishSessionCmd.nid_c = 0;
  outC->p42_establishSessionCmd.nid_RBC = 0;
  outC->p42_establishSessionCmd.nid_radio = 0;
  outC->p42_establishSessionCmd.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->p42_establishSessionCmd.origin.valid = kcg_true;
  outC->p42_establishSessionCmd.origin.nid_c = 0;
  outC->p42_establishSessionCmd.origin.rbc_id = 0;
  outC->p42_establishSessionCmd.origin.device_id = 0;
  /* 1 */
  establishSessionFromRBC_v2_init_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 1 */
  establishSessionFromOBU_v2_init_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void establishSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  establishSessionFromRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 1 */
  establishSessionFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
}

/* MoRC_Pck::Subfunc_Pkg::establishSession_v2 */
void establishSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::sessionEstablishCmd_in */ sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::m32_SystemVersion */ m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::reset */ kcg_bool reset,
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _30_SSM_TR_SM1 _24_SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static kcg_bool _23_SM1_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _27_SSM_ST_SM1 _22_SM1_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::sessionStatus */
  static sessionStatus_T_RCM_Session_Types_Pkg _21_sessionStatus;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::established */
  static kcg_bool _20_established;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::infomDriverNoCompatibleVersionSupported */
  static kcg_bool _19_infomDriverNoCompatibleVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::terminateCommunicationSession */
  static kcg_bool _18_terminateCommunicationSession;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::requestSafeRadioConnectionSetup */
  static kcg_bool _17_requestSafeRadioConnectionSetup;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::send_m154_noCompatibleVersionSupported */
  static kcg_bool _16_send_m154_noCompatibleVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::send_m159_sessionEstablishedReport */
  static kcg_bool _15_send_m159_sessionEstablishedReport;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::send_m155_initiationOfACommunicationSession */
  static kcg_bool _14_send_m155_initiationOfACommunicationSession;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::p42_establishSessionCmd */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _13_p42_establishSessionCmd;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::idle::_L12 */
  static kcg_bool _L12_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::idle::_L11 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L11_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::idle::_L9 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L9_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::idle::_L3 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L3_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::idle::_L4 */
  static kcg_bool _L4_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _30_SSM_TR_SM1 _12_SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static kcg_bool _11_SM1_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _27_SSM_ST_SM1 _10_SM1_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::sessionStatus */
  static sessionStatus_T_RCM_Session_Types_Pkg _9_sessionStatus;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::established */
  static kcg_bool _8_established;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::infomDriverNoCompatibleVersionSupported */
  static kcg_bool _7_infomDriverNoCompatibleVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::terminateCommunicationSession */
  static kcg_bool _6_terminateCommunicationSession;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::requestSafeRadioConnectionSetup */
  static kcg_bool _5_requestSafeRadioConnectionSetup;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::send_m154_noCompatibleVersionSupported */
  static kcg_bool _4_send_m154_noCompatibleVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::send_m159_sessionEstablishedReport */
  static kcg_bool _3_send_m159_sessionEstablishedReport;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::send_m155_initiationOfACommunicationSession */
  static kcg_bool _2_send_m155_initiationOfACommunicationSession;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::p42_establishSessionCmd */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _1_p42_establishSessionCmd;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByOBU::_L14 */
  static kcg_bool _L14_SM1_establishingByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByOBU::_L13 */
  static kcg_bool _L13_SM1_establishingByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByOBU::_L12 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L12_SM1_establishingByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByOBU::_L11 */
  static m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg _L11_SM1_establishingByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByOBU::_L10 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L10_SM1_establishingByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByOBU::_L2 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L2_SM1_establishingByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByOBU::_L3 */
  static kcg_bool _L3_SM1_establishingByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByOBU::_L4 */
  static kcg_bool _L4_SM1_establishingByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByOBU::_L5 */
  static kcg_bool _L5_SM1_establishingByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByOBU::_L6 */
  static kcg_bool _L6_SM1_establishingByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByOBU::_L7 */
  static kcg_bool _L7_SM1_establishingByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByOBU::_L8 */
  static kcg_bool _L8_SM1_establishingByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByOBU::_L9 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L9_SM1_establishingByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _30_SSM_TR_SM1 SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static kcg_bool SM1_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _27_SSM_ST_SM1 SM1_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::sessionStatus */
  static sessionStatus_T_RCM_Session_Types_Pkg sessionStatus;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::established */
  static kcg_bool established;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::infomDriverNoCompatibleVersionSupported */
  static kcg_bool infomDriverNoCompatibleVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::terminateCommunicationSession */
  static kcg_bool terminateCommunicationSession;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::requestSafeRadioConnectionSetup */
  static kcg_bool requestSafeRadioConnectionSetup;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::send_m154_noCompatibleVersionSupported */
  static kcg_bool send_m154_noCompatibleVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::send_m159_sessionEstablishedReport */
  static kcg_bool send_m159_sessionEstablishedReport;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::send_m155_initiationOfACommunicationSession */
  static kcg_bool send_m155_initiationOfACommunicationSession;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::p42_establishSessionCmd */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg p42_establishSessionCmd;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByRBC::_L9 */
  static kcg_bool _L9_SM1_establishingByRBC;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByRBC::_L8 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L8_SM1_establishingByRBC;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByRBC::_L7 */
  static kcg_bool _L7_SM1_establishingByRBC;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByRBC::_L6 */
  static kcg_bool _L6_SM1_establishingByRBC;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByRBC::_L5 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L5_SM1_establishingByRBC;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByRBC::_L4 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L4_SM1_establishingByRBC;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByRBC::_L2 */
  static kcg_bool _L2_SM1_establishingByRBC;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByRBC::_L3 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L3_SM1_establishingByRBC;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _30_SSM_TR_SM1 _30_SM1_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static kcg_bool _29_SM1_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _27_SSM_ST_SM1 _28_SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::idle */
  static kcg_bool br_2_guard_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::idle */
  static kcg_bool br_1_guard_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _30_SSM_TR_SM1 _27_SM1_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static kcg_bool _26_SM1_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _27_SSM_ST_SM1 _25_SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByOBU */
  static kcg_bool br_1_guard_SM1_establishingByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _30_SSM_TR_SM1 SM1_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static kcg_bool SM1_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _27_SSM_ST_SM1 SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1::establishingByRBC */
  static kcg_bool br_1_guard_SM1_establishingByRBC;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _27_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _27_SSM_ST_SM1 _33_SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static kcg_bool SM1_reset_sel;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static kcg_bool SM1_reset_prv;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _30_SSM_TR_SM1 _32_SM1_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _30_SSM_TR_SM1 _31_SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::initiatedByOBU */
  static kcg_bool initiatedByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::initiatedByRBC */
  static kcg_bool initiatedByRBC;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::_L1 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L1;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::_L22 */
  static kcg_bool _L22;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::_L23 */
  static kcg_bool _L23;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::_L24 */
  static kcg_bool _L24;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::_L111 */
  static kcg_bool _L111;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::_L109 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L109;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::_L107 */
  static kcg_bool _L107;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::_L106 */
  static kcg_bool _L106;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::_L105 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L105;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::_L104 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L104;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::_L103 */
  static kcg_bool _L103;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::_L102 */
  static kcg_bool _L102;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::_L101 */
  static kcg_bool _L101;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::_L100 */
  static m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg _L100;
  
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L1, sessionEstablishCmd_in);
  _L22 = _L1.valid;
  _L23 = _L1.initiatedByOBU;
  _L24 = _L22 & _L23;
  initiatedByOBU = _L24;
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = _26_SSM_st_idle_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  /* init_SM1 */ if (outC->init) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  /* init_SM1 */ if (outC->init) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _26_SSM_st_idle_SM1 :
      br_1_guard_SM1_idle = initiatedByOBU;
      break;
    case SSM_st_establishingByOBU_SM1 :
      br_1_guard_SM1_establishingByOBU = reset;
      if (br_1_guard_SM1_establishingByOBU) {
        _25_SM1_state_act = _26_SSM_st_idle_SM1;
      }
      else {
        _25_SM1_state_act = SSM_st_establishingByOBU_SM1;
      }
      break;
    case SSM_st_establishingByRBC_SM1 :
      br_1_guard_SM1_establishingByRBC = reset;
      if (br_1_guard_SM1_establishingByRBC) {
        SM1_state_act = _26_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = SSM_st_establishingByRBC_SM1;
      }
      break;
    
  }
  _L103 = _L1.initiatedByRBC;
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &_L100,
    &_L1.m38);
  _L111 = _L100.valid;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(&_L105, connectionStatus);
  _L106 = _L105.valid;
  _L104 = _L105.status;
  _L109 = mcs_connected_RCM_Types_Pkg;
  _L101 = _L104 == _L109;
  _L107 = _L106 & _L101;
  _L102 = _L22 & _L103 & _L111 & _L107;
  initiatedByRBC = _L102;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _26_SSM_st_idle_SM1 :
      br_2_guard_SM1_idle = initiatedByRBC;
      if (br_1_guard_SM1_idle) {
        _28_SM1_state_act = SSM_st_establishingByOBU_SM1;
      }
      else if (br_2_guard_SM1_idle) {
        _28_SM1_state_act = SSM_st_establishingByRBC_SM1;
      }
      else {
        _28_SM1_state_act = _26_SSM_st_idle_SM1;
      }
      _33_SM1_state_act = _28_SM1_state_act;
      if (br_1_guard_SM1_idle) {
        _29_SM1_reset_act = kcg_true;
      }
      else {
        _29_SM1_reset_act = br_2_guard_SM1_idle;
      }
      outC->SM1_reset_act = _29_SM1_reset_act;
      if (br_1_guard_SM1_idle) {
        _30_SM1_fired_strong = _28_SSM_TR_idle_1_SM1;
      }
      else if (br_2_guard_SM1_idle) {
        _30_SM1_fired_strong = SSM_TR_idle_2_SM1;
      }
      else {
        _30_SM1_fired_strong = _29_SSM_TR_no_trans_SM1;
      }
      _32_SM1_fired_strong = _30_SM1_fired_strong;
      break;
    case SSM_st_establishingByOBU_SM1 :
      _33_SM1_state_act = _25_SM1_state_act;
      _26_SM1_reset_act = br_1_guard_SM1_establishingByOBU;
      outC->SM1_reset_act = _26_SM1_reset_act;
      if (br_1_guard_SM1_establishingByOBU) {
        _27_SM1_fired_strong = SSM_TR_establishingByOBU_1_SM1;
      }
      else {
        _27_SM1_fired_strong = _29_SSM_TR_no_trans_SM1;
      }
      _32_SM1_fired_strong = _27_SM1_fired_strong;
      break;
    case SSM_st_establishingByRBC_SM1 :
      _33_SM1_state_act = SM1_state_act;
      SM1_reset_act = br_1_guard_SM1_establishingByRBC;
      outC->SM1_reset_act = SM1_reset_act;
      if (br_1_guard_SM1_establishingByRBC) {
        SM1_fired_strong = SSM_TR_establishingByRBC_1_SM1;
      }
      else {
        SM1_fired_strong = _29_SSM_TR_no_trans_SM1;
      }
      _32_SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  /* act_SM1 */ switch (_33_SM1_state_act) {
    case _26_SSM_st_idle_SM1 :
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_L3_SM1_idle,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_13_p42_establishSessionCmd,
        &_L3_SM1_idle);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_establishSessionCmd,
        &_13_p42_establishSessionCmd);
      _L4_SM1_idle = kcg_false;
      _14_send_m155_initiationOfACommunicationSession = _L4_SM1_idle;
      outC->send_m155_initiationOfACommunicationSession =
        _14_send_m155_initiationOfACommunicationSession;
      _15_send_m159_sessionEstablishedReport = _L4_SM1_idle;
      outC->send_m159_sessionEstablishedReport =
        _15_send_m159_sessionEstablishedReport;
      _16_send_m154_noCompatibleVersionSupported = _L4_SM1_idle;
      outC->send_m154_noCompatibleVersionSupported =
        _16_send_m154_noCompatibleVersionSupported;
      _17_requestSafeRadioConnectionSetup = _L4_SM1_idle;
      outC->requestSafeRadioConnectionSetup =
        _17_requestSafeRadioConnectionSetup;
      _18_terminateCommunicationSession = _L4_SM1_idle;
      outC->terminateCommunicationSession = _18_terminateCommunicationSession;
      _19_infomDriverNoCompatibleVersionSupported = _L4_SM1_idle;
      outC->infomDriverNoCompatibleVersionSupported =
        _19_infomDriverNoCompatibleVersionSupported;
      _20_established = _L4_SM1_idle;
      outC->established = _20_established;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_L9_SM1_idle,
        (sessionStatus_T_RCM_Session_Types_Pkg *)
          &cNoSessionStatus_RCM_Session_Types_Pkg);
      _L12_SM1_idle = kcg_true;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_L11_SM1_idle,
        &_L9_SM1_idle);
      if (kcg_true) {
        _L11_SM1_idle.valid = _L12_SM1_idle;
      }
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_21_sessionStatus,
        &_L11_SM1_idle);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &_21_sessionStatus);
      _22_SM1_state_nxt = _26_SSM_st_idle_SM1;
      outC->SM1_state_nxt = _22_SM1_state_nxt;
      _23_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _23_SM1_reset_nxt;
      _24_SM1_fired = _32_SM1_fired_strong;
      _31_SM1_fired = _24_SM1_fired;
      break;
    case SSM_st_establishingByOBU_SM1 :
      kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
        &_L10_SM1_establishingByOBU,
        sessionEstablishCmd_in);
      kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
        &_L11_SM1_establishingByOBU,
        m32_SystemVersion);
      kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
        &_L12_SM1_establishingByOBU,
        connectionStatus);
      _L13_SM1_establishingByOBU = reset;
      if (outC->SM1_reset_act) {
        /* 1 */
        establishSessionFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
      }
      /* 1 */
      establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
        &_L10_SM1_establishingByOBU,
        &_L11_SM1_establishingByOBU,
        &_L12_SM1_establishingByOBU,
        _L13_SM1_establishingByOBU,
        &outC->Context_1);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_L2_SM1_establishingByOBU,
        &outC->Context_1.p42_establishSessionCmd);
      _L3_SM1_establishingByOBU =
        outC->Context_1.send_m155_initiationOfACommunicationSession;
      _L4_SM1_establishingByOBU =
        outC->Context_1.send_m159_sessionEstablishedReport;
      _L5_SM1_establishingByOBU =
        outC->Context_1.send_m154_noCompatibleVersionSupported;
      _L6_SM1_establishingByOBU =
        outC->Context_1.requestSafeRadioConnectionSetup;
      _L7_SM1_establishingByOBU = outC->Context_1.terminateCommunicationSession;
      _L8_SM1_establishingByOBU =
        outC->Context_1.infomDriverNoCompatibleVersionSupported;
      _L14_SM1_establishingByOBU = outC->Context_1.established;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_L9_SM1_establishingByOBU,
        &outC->Context_1.sessionStatus);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_1_p42_establishSessionCmd,
        &_L2_SM1_establishingByOBU);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_establishSessionCmd,
        &_1_p42_establishSessionCmd);
      _2_send_m155_initiationOfACommunicationSession =
        _L3_SM1_establishingByOBU;
      outC->send_m155_initiationOfACommunicationSession =
        _2_send_m155_initiationOfACommunicationSession;
      _3_send_m159_sessionEstablishedReport = _L4_SM1_establishingByOBU;
      outC->send_m159_sessionEstablishedReport =
        _3_send_m159_sessionEstablishedReport;
      _4_send_m154_noCompatibleVersionSupported = _L5_SM1_establishingByOBU;
      outC->send_m154_noCompatibleVersionSupported =
        _4_send_m154_noCompatibleVersionSupported;
      _5_requestSafeRadioConnectionSetup = _L6_SM1_establishingByOBU;
      outC->requestSafeRadioConnectionSetup =
        _5_requestSafeRadioConnectionSetup;
      _6_terminateCommunicationSession = _L7_SM1_establishingByOBU;
      outC->terminateCommunicationSession = _6_terminateCommunicationSession;
      _7_infomDriverNoCompatibleVersionSupported = _L8_SM1_establishingByOBU;
      outC->infomDriverNoCompatibleVersionSupported =
        _7_infomDriverNoCompatibleVersionSupported;
      _8_established = _L14_SM1_establishingByOBU;
      outC->established = _8_established;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_9_sessionStatus,
        &_L9_SM1_establishingByOBU);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &_9_sessionStatus);
      _10_SM1_state_nxt = SSM_st_establishingByOBU_SM1;
      outC->SM1_state_nxt = _10_SM1_state_nxt;
      _11_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _11_SM1_reset_nxt;
      _12_SM1_fired = _32_SM1_fired_strong;
      _31_SM1_fired = _12_SM1_fired;
      break;
    case SSM_st_establishingByRBC_SM1 :
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_L8_SM1_establishingByRBC,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &p42_establishSessionCmd,
        &_L8_SM1_establishingByRBC);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_establishSessionCmd,
        &p42_establishSessionCmd);
      _L7_SM1_establishingByRBC = kcg_false;
      send_m155_initiationOfACommunicationSession = _L7_SM1_establishingByRBC;
      outC->send_m155_initiationOfACommunicationSession =
        send_m155_initiationOfACommunicationSession;
      kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
        &_L4_SM1_establishingByRBC,
        sessionEstablishCmd_in);
      kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
        &_L5_SM1_establishingByRBC,
        connectionStatus);
      _L6_SM1_establishingByRBC = reset;
      if (outC->SM1_reset_act) {
        /* 1 */
        establishSessionFromRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(
          &outC->_1_Context_1);
      }
      /* 1 */
      establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg(
        &_L4_SM1_establishingByRBC,
        &_L5_SM1_establishingByRBC,
        _L6_SM1_establishingByRBC,
        &outC->_1_Context_1);
      _L2_SM1_establishingByRBC =
        outC->_1_Context_1.send_m159_sessionEstablishedReport;
      _L9_SM1_establishingByRBC = outC->_1_Context_1.established;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_L3_SM1_establishingByRBC,
        &outC->_1_Context_1.sessionStatus);
      send_m159_sessionEstablishedReport = _L2_SM1_establishingByRBC;
      outC->send_m159_sessionEstablishedReport =
        send_m159_sessionEstablishedReport;
      send_m154_noCompatibleVersionSupported = _L7_SM1_establishingByRBC;
      outC->send_m154_noCompatibleVersionSupported =
        send_m154_noCompatibleVersionSupported;
      requestSafeRadioConnectionSetup = _L7_SM1_establishingByRBC;
      outC->requestSafeRadioConnectionSetup = requestSafeRadioConnectionSetup;
      terminateCommunicationSession = _L7_SM1_establishingByRBC;
      outC->terminateCommunicationSession = terminateCommunicationSession;
      infomDriverNoCompatibleVersionSupported = _L7_SM1_establishingByRBC;
      outC->infomDriverNoCompatibleVersionSupported =
        infomDriverNoCompatibleVersionSupported;
      established = _L9_SM1_establishingByRBC;
      outC->established = established;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &sessionStatus,
        &_L3_SM1_establishingByRBC);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &sessionStatus);
      SM1_state_nxt = SSM_st_establishingByRBC_SM1;
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      SM1_fired = _32_SM1_fired_strong;
      _31_SM1_fired = SM1_fired;
      break;
    
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** establishSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

