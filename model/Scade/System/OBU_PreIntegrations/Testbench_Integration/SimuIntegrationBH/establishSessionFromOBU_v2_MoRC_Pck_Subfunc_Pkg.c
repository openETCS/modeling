/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void establishSessionFromOBU_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = _37_SSM_st_idle_SM1;
  outC->_L8_1.valid = kcg_true;
  outC->_L8_1.initiatedByOBU = kcg_true;
  outC->_L8_1.initiatedByRBC = kcg_true;
  outC->_L8_1.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L8_1.nid_c = 0;
  outC->_L8_1.nid_rbc = 0;
  outC->_L8_1.nid_radio = 0;
  outC->_L8_1.origin.valid = kcg_true;
  outC->_L8_1.origin.nid_c = 0;
  outC->_L8_1.origin.rbc_id = 0;
  outC->_L8_1.origin.device_id = 0;
  outC->_L8_1.m38.valid = kcg_true;
  outC->_L8_1.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L8_1.m38.origin.valid = kcg_true;
  outC->_L8_1.m38.origin.nid_c = 0;
  outC->_L8_1.m38.origin.rbc_id = 0;
  outC->_L8_1.m38.origin.device_id = 0;
  outC->_L8_1.p42.valid = kcg_true;
  outC->_L8_1.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L8_1.p42.q_dir = Q_DIR_Reverse;
  outC->_L8_1.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L8_1.p42.nid_c = 0;
  outC->_L8_1.p42.nid_RBC = 0;
  outC->_L8_1.p42.nid_radio = 0;
  outC->_L8_1.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L8_1.p42.origin.valid = kcg_true;
  outC->_L8_1.p42.origin.nid_c = 0;
  outC->_L8_1.p42.origin.rbc_id = 0;
  outC->_L8_1.p42.origin.device_id = 0;
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
}
#endif /* KCG_USER_DEFINED_INIT */


void establishSessionFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
}

/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2 */
void establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sessionEstablishCmd_in */ sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::m32_SystemVersion */ m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::reset */ kcg_bool reset,
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* linear::Memory::Out */
  static sessionCmd_T_RCM_Session_Types_Pkg Out_1;
  /* linear::Memory::InitVal */
  static sessionCmd_T_RCM_Session_Types_Pkg InitVal_1;
  /* linear::Memory::MemCond */
  static kcg_bool MemCond_1;
  /* linear::Memory::Reset */
  static kcg_bool Reset_1;
  /* linear::Memory::M_Input */
  static sessionCmd_T_RCM_Session_Types_Pkg M_Input_1;
  /* linear::Memory::_L9 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L9_1;
  /* linear::Memory::_L1 */
  static kcg_bool _L1_1;
  /* linear::Memory::_L2 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L2_1;
  /* linear::Memory::_L3 */
  static kcg_bool _L3_1;
  /* linear::Memory::_L5 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L5_1;
  /* linear::Memory::_L6 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L6_1;
  /* linear::Memory::_L7 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L7_1;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg op_call;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2 */
  static kcg_bool _1_op_call;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _42_SSM_TR_SM1 _13_SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static kcg_bool _12_SM1_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _38_SSM_ST_SM1 _11_SM1_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::phase */
  static sessionPhase_T_RCM_Session_Types_Pkg phase10;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::idle::_L1 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L1_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _42_SSM_TR_SM1 _9_SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static kcg_bool _8_SM1_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _38_SSM_ST_SM1 _7_SM1_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::phase */
  static sessionPhase_T_RCM_Session_Types_Pkg phase6;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSafeRadioConnectionSetUp::_L1 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L1_SM1_waitForSafeRadioConnectionSetUp;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _42_SSM_TR_SM1 _5_SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static kcg_bool _4_SM1_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _38_SSM_ST_SM1 _3_SM1_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::phase */
  static sessionPhase_T_RCM_Session_Types_Pkg phase2;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSystemVersion::_L1 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L1_SM1_waitForSystemVersion;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _42_SSM_TR_SM1 SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static kcg_bool SM1_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _38_SSM_ST_SM1 SM1_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::phase */
  static sessionPhase_T_RCM_Session_Types_Pkg phase;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::sessionEstablished::_L1 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L1_SM1_sessionEstablished;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _42_SSM_TR_SM1 _22_SM1_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static kcg_bool _21_SM1_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _38_SSM_ST_SM1 _20_SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::idle */
  static kcg_bool br_1_guard_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::idle */
  static kcg_bool br_1_clock_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _42_SSM_TR_SM1 _19_SM1_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static kcg_bool _18_SM1_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _38_SSM_ST_SM1 _17_SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSafeRadioConnectionSetUp */
  static kcg_bool br_2_guard_SM1_waitForSafeRadioConnectionSetUp;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSafeRadioConnectionSetUp */
  static kcg_bool br_1_guard_SM1_waitForSafeRadioConnectionSetUp;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSafeRadioConnectionSetUp */
  static kcg_bool br_1_clock_SM1_waitForSafeRadioConnectionSetUp;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _42_SSM_TR_SM1 _16_SM1_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static kcg_bool _15_SM1_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _38_SSM_ST_SM1 _14_SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSystemVersion */
  static kcg_bool br_3_guard_SM1_waitForSystemVersion;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSystemVersion */
  static kcg_bool br_2_guard_SM1_waitForSystemVersion;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSystemVersion */
  static kcg_bool br_1_guard_SM1_waitForSystemVersion;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSystemVersion */
  static kcg_bool br_1_clock_SM1_waitForSystemVersion;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSystemVersion */
  static kcg_bool br_3_clock_SM1_waitForSystemVersion;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSystemVersion */
  static kcg_bool br_2_clock_SM1_waitForSystemVersion;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _42_SSM_TR_SM1 SM1_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static kcg_bool SM1_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _38_SSM_ST_SM1 SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::sessionEstablished */
  static kcg_bool br_1_guard_SM1_sessionEstablished;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2 */
  static kcg_bool ck_every;
  static kcg_bool noname;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sEstablished */
  static kcg_bool sEstablished;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sTerminateComSession */
  static kcg_bool sTerminateComSession;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sInformTheDriverNoCompatibleVersion */
  static kcg_bool sInformTheDriverNoCompatibleVersion;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sSendNoCompatibleVersionSupported */
  static kcg_bool sSendNoCompatibleVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sSendSessionEstablishedReport */
  static kcg_bool sSendSessionEstablishedReport;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sendInitiationOfCommSessionToTrack */
  static kcg_bool sendInitiationOfCommSessionToTrack;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sRequestSafeRadioConnectionSetup */
  static kcg_bool sRequestSafeRadioConnectionSetup;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _38_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _38_SSM_ST_SM1 _25_SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static kcg_bool SM1_reset_sel;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static kcg_bool SM1_reset_prv;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _42_SSM_TR_SM1 _24_SM1_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _42_SSM_TR_SM1 _23_SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::initiatedByOBU */
  static kcg_bool initiatedByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::safeRadioConnectionSetUp */
  static kcg_bool safeRadioConnectionSetUp;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sessionEstablishCmd_mem */
  static sessionCmd_T_RCM_Session_Types_Pkg sessionEstablishCmd_mem;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::systemVersionSupported */
  static kcg_bool systemVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::systemVersionNotSupported */
  static kcg_bool systemVersionNotSupported;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::phase */
  static sessionPhase_T_RCM_Session_Types_Pkg phase26;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L1 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L1;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L22 */
  static kcg_bool _L22;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L23 */
  static kcg_bool _L23;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L24 */
  static kcg_bool _L24;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L25 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L25;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L40 */
  static kcg_bool _L40;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L41 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L41;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L42 */
  static kcg_bool _L42;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L43 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L43;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L44 */
  static kcg_bool _L44;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L45 */
  static NID_RADIO _L45;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L46 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L46;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L47 */
  static kcg_bool _L47;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L48 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L48;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L49 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L49;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L50 */
  static kcg_bool _L50;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L51 */
  static NID_RADIO _L51;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L52 */
  static kcg_bool _L52;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L53 */
  static m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg _L53;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L54 */
  static kcg_bool _L54;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L55 */
  static kcg_bool _L55;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L56 */
  static kcg_bool _L56;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L57 */
  static kcg_bool _L57;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L58 */
  static kcg_bool _L58;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L64 */
  static kcg_bool _L64;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L65 */
  static kcg_bool _L65;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L66 */
  static kcg_bool _L66;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L67 */
  static kcg_bool _L67;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L68 */
  static kcg_bool _L68;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L69 */
  static kcg_bool _L69;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L70 */
  static kcg_bool _L70;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L71 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L71;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L73 */
  static kcg_bool _L73;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L74 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L74;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L75 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L75;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L76 */
  static NID_C _L76;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L77 */
  static NID_RBC _L77;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L78 */
  static NID_RADIO _L78;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L79 */
  static kcg_bool _L79;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L80 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L80;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L84 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L84;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L83 */
  static kcg_bool _L83;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L86 */
  static kcg_bool _L86;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L87 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L87;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::_L89 */
  static kcg_bool _L89;
  
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = _37_SSM_st_idle_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L1, sessionEstablishCmd_in);
  _L22 = _L1.valid;
  _L23 = _L1.initiatedByOBU;
  _L24 = _L22 & _L23;
  initiatedByOBU = _L24;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _37_SSM_st_idle_SM1 :
      br_1_guard_SM1_idle = initiatedByOBU;
      br_1_clock_SM1_idle = br_1_guard_SM1_idle;
      /* cb_anon_sm */ if (br_1_clock_SM1_idle) {
        sRequestSafeRadioConnectionSetup = kcg_true;
      }
      else {
        sRequestSafeRadioConnectionSetup = kcg_false;
      }
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      sRequestSafeRadioConnectionSetup = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      sRequestSafeRadioConnectionSetup = kcg_false;
      break;
    case _36_SSM_st_sessionEstablished_SM1 :
      sRequestSafeRadioConnectionSetup = kcg_false;
      break;
    
  }
  _L79 = sRequestSafeRadioConnectionSetup;
  ck_every = _L79;
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &_L48,
    (sessionCmd_T_RCM_Session_Types_Pkg *)
      &cNoSessionCmd_RCM_Session_Types_Pkg);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&InitVal_1, &_L48);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L9_1, &InitVal_1);
  /* 1_fby_1_init_7 */ if (outC->init) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L5_1, &_L9_1);
  }
  else {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L5_1, &outC->_L8_1);
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_waitForSystemVersion_SM1 :
      br_1_guard_SM1_waitForSystemVersion = reset;
      br_1_clock_SM1_waitForSystemVersion = br_1_guard_SM1_waitForSystemVersion;
      break;
    
  }
  kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
    &_L53,
    m32_SystemVersion);
  _L54 = _L53.valid;
  _L55 = _L53.versionSupported;
  _L56 = _L54 & _L55;
  systemVersionSupported = _L56;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_waitForSystemVersion_SM1 :
      br_2_guard_SM1_waitForSystemVersion = systemVersionSupported;
      /* cb_anon_sm */ if (br_1_clock_SM1_waitForSystemVersion) {
      }
      else {
        br_2_clock_SM1_waitForSystemVersion =
          br_2_guard_SM1_waitForSystemVersion;
      }
      break;
    
  }
  _L57 = !_L55;
  _L58 = _L54 & _L57;
  systemVersionNotSupported = _L58;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _37_SSM_st_idle_SM1 :
      sTerminateComSession = kcg_false;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      sTerminateComSession = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      br_3_guard_SM1_waitForSystemVersion = systemVersionNotSupported;
      /* cb_anon_sm */ if (br_1_clock_SM1_waitForSystemVersion) {
        sTerminateComSession = kcg_false;
      }
      else /* cb_anon_sm */ if (br_2_clock_SM1_waitForSystemVersion) {
        sTerminateComSession = kcg_false;
      }
      else {
        br_3_clock_SM1_waitForSystemVersion =
          br_3_guard_SM1_waitForSystemVersion;
        /* cb_anon_sm */ if (br_3_clock_SM1_waitForSystemVersion) {
          sTerminateComSession = kcg_true;
        }
        else {
          sTerminateComSession = kcg_false;
        }
      }
      break;
    case _36_SSM_st_sessionEstablished_SM1 :
      sTerminateComSession = kcg_false;
      break;
    
  }
  _L70 = sTerminateComSession;
  _L47 = reset;
  _L69 = _L70 | _L47;
  Reset_1 = _L69;
  _L1_1 = Reset_1;
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L2_1, &InitVal_1);
  MemCond_1 = _L22;
  _L3_1 = MemCond_1;
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&M_Input_1, &_L1);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L6_1, &M_Input_1);
  /* 4 */ if (_L3_1) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L7_1, &_L6_1);
  }
  else {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L7_1, &_L5_1);
  }
  /* 1 */ if (_L1_1) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&outC->_L8_1, &_L2_1);
  }
  else {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&outC->_L8_1, &_L7_1);
  }
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&Out_1, &outC->_L8_1);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L46, &Out_1);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&sessionEstablishCmd_mem, &_L46);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L80, &sessionEstablishCmd_mem);
  /* ck_establishSessionFromOBU_v2 */ if (ck_every) {
    /* 1 */
    sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg(&_L80, &_1_op_call, &op_call);
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _37_SSM_st_idle_SM1 :
      sEstablished = kcg_false;
      sInformTheDriverNoCompatibleVersion = kcg_false;
      sSendNoCompatibleVersionSupported = kcg_false;
      sSendSessionEstablishedReport = kcg_false;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      sEstablished = kcg_false;
      sInformTheDriverNoCompatibleVersion = kcg_false;
      sSendNoCompatibleVersionSupported = kcg_false;
      sSendSessionEstablishedReport = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      /* cb_anon_sm */ if (br_1_clock_SM1_waitForSystemVersion) {
        sEstablished = kcg_false;
        sInformTheDriverNoCompatibleVersion = kcg_false;
        sSendNoCompatibleVersionSupported = kcg_false;
        sSendSessionEstablishedReport = kcg_false;
      }
      else /* cb_anon_sm */ if (br_2_clock_SM1_waitForSystemVersion) {
        sEstablished = kcg_true;
        sInformTheDriverNoCompatibleVersion = kcg_false;
        sSendNoCompatibleVersionSupported = kcg_false;
        sSendSessionEstablishedReport = kcg_true;
      }
      else {
        sEstablished = kcg_false;
        /* cb_anon_sm */ if (br_3_clock_SM1_waitForSystemVersion) {
          sInformTheDriverNoCompatibleVersion = kcg_true;
          sSendNoCompatibleVersionSupported = kcg_true;
        }
        else {
          sInformTheDriverNoCompatibleVersion = kcg_false;
          sSendNoCompatibleVersionSupported = kcg_false;
        }
        sSendSessionEstablishedReport = kcg_false;
      }
      break;
    case _36_SSM_st_sessionEstablished_SM1 :
      sEstablished = kcg_false;
      sInformTheDriverNoCompatibleVersion = kcg_false;
      sSendNoCompatibleVersionSupported = kcg_false;
      sSendSessionEstablishedReport = kcg_false;
      break;
    
  }
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(&_L25, connectionStatus);
  _L40 = _L25.valid;
  _L41 = _L25.status;
  _L43 = mcs_connected_RCM_Types_Pkg;
  _L42 = _L41 == _L43;
  _L45 = _L25.nid_radio;
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&_L49, &sessionEstablishCmd_mem);
  _L51 = _L49.nid_radio;
  _L52 = _L45 == _L51;
  _L50 = _L49.valid;
  _L44 = _L40 & _L42 & _L52 & _L50;
  safeRadioConnectionSetUp = _L44;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _37_SSM_st_idle_SM1 :
      sendInitiationOfCommSessionToTrack = kcg_false;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      br_1_guard_SM1_waitForSafeRadioConnectionSetUp = safeRadioConnectionSetUp;
      br_1_clock_SM1_waitForSafeRadioConnectionSetUp =
        br_1_guard_SM1_waitForSafeRadioConnectionSetUp;
      /* cb_anon_sm */ if (br_1_clock_SM1_waitForSafeRadioConnectionSetUp) {
        sendInitiationOfCommSessionToTrack = kcg_true;
      }
      else {
        sendInitiationOfCommSessionToTrack = kcg_false;
      }
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      sendInitiationOfCommSessionToTrack = kcg_false;
      break;
    case _36_SSM_st_sessionEstablished_SM1 :
      sendInitiationOfCommSessionToTrack = kcg_false;
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
    case _37_SSM_st_idle_SM1 :
      if (br_1_guard_SM1_idle) {
        _20_SM1_state_act = SSM_st_waitForSafeRadioConnectionSetUp_SM1;
      }
      else {
        _20_SM1_state_act = _37_SSM_st_idle_SM1;
      }
      _25_SM1_state_act = _20_SM1_state_act;
      _21_SM1_reset_act = br_1_guard_SM1_idle;
      outC->SM1_reset_act = _21_SM1_reset_act;
      if (br_1_guard_SM1_idle) {
        _22_SM1_fired_strong = _40_SSM_TR_idle_1_SM1;
      }
      else {
        _22_SM1_fired_strong = _41_SSM_TR_no_trans_SM1;
      }
      _24_SM1_fired_strong = _22_SM1_fired_strong;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      br_2_guard_SM1_waitForSafeRadioConnectionSetUp = reset;
      if (br_1_guard_SM1_waitForSafeRadioConnectionSetUp) {
        _17_SM1_state_act = SSM_st_waitForSystemVersion_SM1;
      }
      else if (br_2_guard_SM1_waitForSafeRadioConnectionSetUp) {
        _17_SM1_state_act = _37_SSM_st_idle_SM1;
      }
      else {
        _17_SM1_state_act = SSM_st_waitForSafeRadioConnectionSetUp_SM1;
      }
      _25_SM1_state_act = _17_SM1_state_act;
      if (br_1_guard_SM1_waitForSafeRadioConnectionSetUp) {
        _18_SM1_reset_act = kcg_true;
      }
      else {
        _18_SM1_reset_act = br_2_guard_SM1_waitForSafeRadioConnectionSetUp;
      }
      outC->SM1_reset_act = _18_SM1_reset_act;
      if (br_1_guard_SM1_waitForSafeRadioConnectionSetUp) {
        _19_SM1_fired_strong = SSM_TR_waitForSafeRadioConnectionSetUp_1_SM1;
      }
      else if (br_2_guard_SM1_waitForSafeRadioConnectionSetUp) {
        _19_SM1_fired_strong = SSM_TR_waitForSafeRadioConnectionSetUp_2_SM1;
      }
      else {
        _19_SM1_fired_strong = _41_SSM_TR_no_trans_SM1;
      }
      _24_SM1_fired_strong = _19_SM1_fired_strong;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      if (br_1_guard_SM1_waitForSystemVersion) {
        _14_SM1_state_act = _37_SSM_st_idle_SM1;
      }
      else if (br_2_guard_SM1_waitForSystemVersion) {
        _14_SM1_state_act = _36_SSM_st_sessionEstablished_SM1;
      }
      else if (br_3_guard_SM1_waitForSystemVersion) {
        _14_SM1_state_act = _37_SSM_st_idle_SM1;
      }
      else {
        _14_SM1_state_act = SSM_st_waitForSystemVersion_SM1;
      }
      _25_SM1_state_act = _14_SM1_state_act;
      if (br_1_guard_SM1_waitForSystemVersion) {
        _15_SM1_reset_act = kcg_true;
      }
      else if (br_2_guard_SM1_waitForSystemVersion) {
        _15_SM1_reset_act = kcg_true;
      }
      else {
        _15_SM1_reset_act = br_3_guard_SM1_waitForSystemVersion;
      }
      outC->SM1_reset_act = _15_SM1_reset_act;
      if (br_1_guard_SM1_waitForSystemVersion) {
        _16_SM1_fired_strong = SSM_TR_waitForSystemVersion_1_SM1;
      }
      else if (br_2_guard_SM1_waitForSystemVersion) {
        _16_SM1_fired_strong = SSM_TR_waitForSystemVersion_2_SM1;
      }
      else if (br_3_guard_SM1_waitForSystemVersion) {
        _16_SM1_fired_strong = SSM_TR_waitForSystemVersion_3_SM1;
      }
      else {
        _16_SM1_fired_strong = _41_SSM_TR_no_trans_SM1;
      }
      _24_SM1_fired_strong = _16_SM1_fired_strong;
      break;
    case _36_SSM_st_sessionEstablished_SM1 :
      br_1_guard_SM1_sessionEstablished = reset;
      if (br_1_guard_SM1_sessionEstablished) {
        SM1_state_act = _37_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = _36_SSM_st_sessionEstablished_SM1;
      }
      _25_SM1_state_act = SM1_state_act;
      SM1_reset_act = br_1_guard_SM1_sessionEstablished;
      outC->SM1_reset_act = SM1_reset_act;
      if (br_1_guard_SM1_sessionEstablished) {
        SM1_fired_strong = _39_SSM_TR_sessionEstablished_1_SM1;
      }
      else {
        SM1_fired_strong = _41_SSM_TR_no_trans_SM1;
      }
      _24_SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  /* act_SM1 */ switch (_25_SM1_state_act) {
    case _37_SSM_st_idle_SM1 :
      _L1_SM1_idle = sp_terminated_RCM_Session_Types_Pkg;
      phase10 = _L1_SM1_idle;
      phase26 = phase10;
      _11_SM1_state_nxt = _37_SSM_st_idle_SM1;
      outC->SM1_state_nxt = _11_SM1_state_nxt;
      _12_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _12_SM1_reset_nxt;
      _13_SM1_fired = _24_SM1_fired_strong;
      _23_SM1_fired = _13_SM1_fired;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      _L1_SM1_waitForSafeRadioConnectionSetUp =
        sp_establishing_RCM_Session_Types_Pkg;
      phase6 = _L1_SM1_waitForSafeRadioConnectionSetUp;
      phase26 = phase6;
      _7_SM1_state_nxt = SSM_st_waitForSafeRadioConnectionSetUp_SM1;
      outC->SM1_state_nxt = _7_SM1_state_nxt;
      _8_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _8_SM1_reset_nxt;
      _9_SM1_fired = _24_SM1_fired_strong;
      _23_SM1_fired = _9_SM1_fired;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      _L1_SM1_waitForSystemVersion = sp_establishing_RCM_Session_Types_Pkg;
      phase2 = _L1_SM1_waitForSystemVersion;
      phase26 = phase2;
      _3_SM1_state_nxt = SSM_st_waitForSystemVersion_SM1;
      outC->SM1_state_nxt = _3_SM1_state_nxt;
      _4_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _4_SM1_reset_nxt;
      _5_SM1_fired = _24_SM1_fired_strong;
      _23_SM1_fired = _5_SM1_fired;
      break;
    case _36_SSM_st_sessionEstablished_SM1 :
      _L1_SM1_sessionEstablished = sp_establishing_RCM_Session_Types_Pkg;
      phase = _L1_SM1_sessionEstablished;
      phase26 = phase;
      SM1_state_nxt = _36_SSM_st_sessionEstablished_SM1;
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      SM1_fired = _24_SM1_fired_strong;
      _23_SM1_fired = SM1_fired;
      break;
    
  }
  _L64 = sTerminateComSession;
  outC->terminateCommunicationSession = _L64;
  _L65 = sInformTheDriverNoCompatibleVersion;
  outC->infomDriverNoCompatibleVersionSupported = _L65;
  _L66 = sendInitiationOfCommSessionToTrack;
  outC->send_m155_initiationOfACommunicationSession = _L66;
  _L67 = sSendSessionEstablishedReport;
  outC->send_m159_sessionEstablishedReport = _L67;
  _L68 = sSendNoCompatibleVersionSupported;
  outC->send_m154_noCompatibleVersionSupported = _L68;
  _L73 = kcg_true;
  _L74 = phase26;
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
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &_L87,
    (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
      &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
  /* ck_establishSessionFromOBU_v2 */ if (ck_every) {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&_L84, &op_call);
  }
  else {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&_L84, &_L87);
  }
  _L86 = kcg_false;
  /* ck_establishSessionFromOBU_v2 */ if (ck_every) {
    _L83 = _1_op_call;
  }
  else {
    _L83 = _L86;
  }
  noname = _L83;
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->p42_establishSessionCmd,
    &_L84);
  outC->requestSafeRadioConnectionSetup = _L79;
  _L89 = sEstablished;
  outC->established = _L89;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

