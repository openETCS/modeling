/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void establishSessionFromRBC_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = _31_SSM_st_idle_SM1;
  outC->_L8_2.valid = kcg_true;
  outC->_L8_2.initiatedByOBU = kcg_true;
  outC->_L8_2.initiatedByRBC = kcg_true;
  outC->_L8_2.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L8_2.nid_c = 0;
  outC->_L8_2.nid_rbc = 0;
  outC->_L8_2.nid_radio = 0;
  outC->_L8_2.origin.valid = kcg_true;
  outC->_L8_2.origin.nid_c = 0;
  outC->_L8_2.origin.rbc_id = 0;
  outC->_L8_2.origin.device_id = 0;
  outC->_L8_2.m38.valid = kcg_true;
  outC->_L8_2.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L8_2.m38.origin.valid = kcg_true;
  outC->_L8_2.m38.origin.nid_c = 0;
  outC->_L8_2.m38.origin.rbc_id = 0;
  outC->_L8_2.m38.origin.device_id = 0;
  outC->_L8_2.p42.valid = kcg_true;
  outC->_L8_2.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L8_2.p42.q_dir = Q_DIR_Reverse;
  outC->_L8_2.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L8_2.p42.nid_c = 0;
  outC->_L8_2.p42.nid_RBC = 0;
  outC->_L8_2.p42.nid_radio = 0;
  outC->_L8_2.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L8_2.p42.origin.valid = kcg_true;
  outC->_L8_2.p42.origin.nid_c = 0;
  outC->_L8_2.p42.origin.rbc_id = 0;
  outC->_L8_2.p42.origin.device_id = 0;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus.nid_c = 0;
  outC->sessionStatus.nid_rbc = 0;
  outC->sessionStatus.nid_radio = 0;
  outC->established = kcg_true;
  outC->send_m159_sessionEstablishedReport = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void establishSessionFromRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
}

/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2 */
void establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::sessionEstablishCmd_in */ sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::reset */ kcg_bool reset,
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* linear::Memory::Out */
  static sessionCmd_T_RCM_Session_Types_Pkg Out_2;
  /* linear::Memory::InitVal */
  static sessionCmd_T_RCM_Session_Types_Pkg InitVal_2;
  /* linear::Memory::MemCond */
  static kcg_bool MemCond_2;
  /* linear::Memory::Reset */
  static kcg_bool Reset_2;
  /* linear::Memory::M_Input */
  static sessionCmd_T_RCM_Session_Types_Pkg M_Input_2;
  /* linear::Memory::_L9 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L9_2;
  /* linear::Memory::_L1 */
  static kcg_bool _L1_2;
  /* linear::Memory::_L2 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L2_2;
  /* linear::Memory::_L3 */
  static kcg_bool _L3_2;
  /* linear::Memory::_L5 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L5_2;
  /* linear::Memory::_L6 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L6_2;
  /* linear::Memory::_L7 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L7_2;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static _35_SSM_TR_SM1 _4_SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static kcg_bool _3_SM1_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static _32_SSM_ST_SM1 _2_SM1_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::phase */
  static sessionPhase_T_RCM_Session_Types_Pkg phase1;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1::idle::_L1 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L1_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static _35_SSM_TR_SM1 SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static kcg_bool SM1_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static _32_SSM_ST_SM1 SM1_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::phase */
  static sessionPhase_T_RCM_Session_Types_Pkg phase;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1::sessionEstablished::_L1 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L1_SM1_sessionEstablished;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static _35_SSM_TR_SM1 _7_SM1_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static kcg_bool _6_SM1_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static _32_SSM_ST_SM1 _5_SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1::idle */
  static kcg_bool br_1_guard_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1::idle */
  static kcg_bool br_1_clock_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static _35_SSM_TR_SM1 SM1_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static kcg_bool SM1_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static _32_SSM_ST_SM1 SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1::sessionEstablished */
  static kcg_bool br_1_guard_SM1_sessionEstablished;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::sEstablished */
  static kcg_bool sEstablished;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::sSendSessionEstablishedReport */
  static kcg_bool sSendSessionEstablishedReport;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static _32_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static _32_SSM_ST_SM1 _10_SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static kcg_bool SM1_reset_sel;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static kcg_bool SM1_reset_prv;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static _35_SSM_TR_SM1 _9_SM1_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
  static _35_SSM_TR_SM1 _8_SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::initiatedByRBC */
  static kcg_bool initiatedByRBC;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::sessionEstablishCmd_mem */
  static sessionCmd_T_RCM_Session_Types_Pkg sessionEstablishCmd_mem;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::phase */
  static sessionPhase_T_RCM_Session_Types_Pkg phase11;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L1 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L1;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L22 */
  static kcg_bool _L22;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L23 */
  static kcg_bool _L23;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L24 */
  static kcg_bool _L24;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L25 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L25;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L40 */
  static kcg_bool _L40;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L41 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L41;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L42 */
  static kcg_bool _L42;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L43 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L43;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L71 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L71;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L73 */
  static kcg_bool _L73;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L74 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L74;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L75 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L75;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L76 */
  static NID_C _L76;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L77 */
  static NID_RBC _L77;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L78 */
  static NID_RADIO _L78;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L88 */
  static m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg _L88;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L89 */
  static kcg_bool _L89;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L90 */
  static kcg_bool _L90;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L93 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L93;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L91 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L91;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L94 */
  static kcg_bool _L94;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L95 */
  static kcg_bool _L95;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::_L96 */
  static kcg_bool _L96;
  
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = _31_SSM_st_idle_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L1, sessionEstablishCmd_in);
  _L22 = _L1.valid;
  _L23 = _L1.initiatedByRBC;
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &_L88,
    &_L1.m38);
  _L89 = _L88.valid;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(&_L25, connectionStatus);
  _L40 = _L25.valid;
  _L41 = _L25.status;
  _L43 = mcs_connected_RCM_Types_Pkg;
  _L42 = _L41 == _L43;
  _L90 = _L40 & _L42;
  _L24 = _L22 & _L23 & _L89 & _L90;
  initiatedByRBC = _L24;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _31_SSM_st_idle_SM1 :
      br_1_guard_SM1_idle = initiatedByRBC;
      br_1_clock_SM1_idle = br_1_guard_SM1_idle;
      /* cb_anon_sm */ if (br_1_clock_SM1_idle) {
        sEstablished = kcg_true;
        sSendSessionEstablishedReport = kcg_true;
      }
      else {
        sEstablished = kcg_false;
        sSendSessionEstablishedReport = kcg_false;
      }
      break;
    case SSM_st_sessionEstablished_SM1 :
      sEstablished = kcg_false;
      sSendSessionEstablishedReport = kcg_false;
      break;
    
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
    case _31_SSM_st_idle_SM1 :
      if (br_1_guard_SM1_idle) {
        _5_SM1_state_act = SSM_st_sessionEstablished_SM1;
      }
      else {
        _5_SM1_state_act = _31_SSM_st_idle_SM1;
      }
      _10_SM1_state_act = _5_SM1_state_act;
      _6_SM1_reset_act = br_1_guard_SM1_idle;
      outC->SM1_reset_act = _6_SM1_reset_act;
      if (br_1_guard_SM1_idle) {
        _7_SM1_fired_strong = _33_SSM_TR_idle_1_SM1;
      }
      else {
        _7_SM1_fired_strong = _34_SSM_TR_no_trans_SM1;
      }
      _9_SM1_fired_strong = _7_SM1_fired_strong;
      break;
    case SSM_st_sessionEstablished_SM1 :
      br_1_guard_SM1_sessionEstablished = reset;
      if (br_1_guard_SM1_sessionEstablished) {
        SM1_state_act = _31_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = SSM_st_sessionEstablished_SM1;
      }
      _10_SM1_state_act = SM1_state_act;
      SM1_reset_act = br_1_guard_SM1_sessionEstablished;
      outC->SM1_reset_act = SM1_reset_act;
      if (br_1_guard_SM1_sessionEstablished) {
        SM1_fired_strong = SSM_TR_sessionEstablished_1_SM1;
      }
      else {
        SM1_fired_strong = _34_SSM_TR_no_trans_SM1;
      }
      _9_SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  /* act_SM1 */ switch (_10_SM1_state_act) {
    case _31_SSM_st_idle_SM1 :
      _L1_SM1_idle = sp_terminated_RCM_Session_Types_Pkg;
      phase1 = _L1_SM1_idle;
      phase11 = phase1;
      _2_SM1_state_nxt = _31_SSM_st_idle_SM1;
      outC->SM1_state_nxt = _2_SM1_state_nxt;
      _3_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _3_SM1_reset_nxt;
      _4_SM1_fired = _9_SM1_fired_strong;
      _8_SM1_fired = _4_SM1_fired;
      break;
    case SSM_st_sessionEstablished_SM1 :
      _L1_SM1_sessionEstablished = sp_establishing_RCM_Session_Types_Pkg;
      phase = _L1_SM1_sessionEstablished;
      phase11 = phase;
      SM1_state_nxt = SSM_st_sessionEstablished_SM1;
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      SM1_fired = _9_SM1_fired_strong;
      _8_SM1_fired = SM1_fired;
      break;
    
  }
  _L73 = kcg_true;
  _L74 = phase11;
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &_L93,
    (sessionCmd_T_RCM_Session_Types_Pkg *)
      &cNoSessionCmd_RCM_Session_Types_Pkg);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&InitVal_2, &_L93);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L9_2, &InitVal_2);
  /* 2_fby_1_init_7 */ if (outC->init) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L5_2, &_L9_2);
  }
  else {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L5_2, &outC->_L8_2);
  }
  _L94 = reset;
  Reset_2 = _L94;
  _L1_2 = Reset_2;
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L2_2, &InitVal_2);
  MemCond_2 = _L24;
  _L3_2 = MemCond_2;
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&M_Input_2, &_L1);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L6_2, &M_Input_2);
  /* 4 */ if (_L3_2) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L7_2, &_L6_2);
  }
  else {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L7_2, &_L5_2);
  }
  /* 1 */ if (_L1_2) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&outC->_L8_2, &_L2_2);
  }
  else {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&outC->_L8_2, &_L7_2);
  }
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&Out_2, &outC->_L8_2);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L91, &Out_2);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&sessionEstablishCmd_mem, &_L91);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L75, &sessionEstablishCmd_mem);
  _L76 = _L75.nid_c;
  _L77 = _L75.nid_rbc;
  _L78 = _L75.nid_radio;
  _L71.valid = _L73;
  _L71.phase = _L74;
  _L71.nid_c = _L76;
  _L71.nid_rbc = _L77;
  _L71.nid_radio = _L78;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->sessionStatus, &_L71);
  _L95 = sSendSessionEstablishedReport;
  outC->send_m159_sessionEstablishedReport = _L95;
  _L96 = sEstablished;
  outC->established = _L96;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

