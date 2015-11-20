/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void registeringToTheRadioNetwork_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->p45_registrationOrderReceived_p = kcg_true;
  outC->init = kcg_true;
  outC->resetDelayedOrderFlag = kcg_true;
  outC->Register_SM_reset_nxt = kcg_true;
  outC->Register_SM_reset_act = kcg_true;
  outC->Register_SM_state_nxt = SSM_st_Unregistered_Register_SM;
  outC->_L2_1 = kcg_true;
  outC->_L8_5.valid = kcg_true;
  outC->_L8_5.q_dir = Q_DIR_Reverse;
  outC->_L8_5.nid_mn = 0;
  outC->_L8_4.valid = kcg_true;
  outC->_L8_4.q_dir = Q_DIR_Reverse;
  outC->_L8_4.nid_mn = 0;
  outC->_L8_2.valid = kcg_true;
  outC->_L8_2.q_dir = Q_DIR_Reverse;
  outC->_L8_2.nid_mn = 0;
  outC->_L8_1.valid = kcg_true;
  outC->_L8_1.q_dir = Q_DIR_Reverse;
  outC->_L8_1.nid_mn = 0;
  outC->mobileRegistrationStatus.valid = kcg_true;
  outC->mobileRegistrationStatus.mobileDeviceNo = 0;
  outC->mobileRegistrationStatus.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->mobileRegistrationStatus.status = mrs_unregistered_RCM_Types_Pkg;
  outC->mobileRegistrationStatus.nid_mn = 0;
  outC->mobileRegistrationCmd.valid = kcg_true;
  outC->mobileRegistrationCmd.mobileDeviceNo = 0;
  outC->mobileRegistrationCmd.action = mra_nop_RCM_Types_Pkg;
  outC->mobileRegistrationCmd.network_id = 0;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->lastReceivedRadioNetworkID.valid = kcg_true;
  outC->lastReceivedRadioNetworkID.q_dir = Q_DIR_Reverse;
  outC->lastReceivedRadioNetworkID.nid_mn = 0;
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  /* 8 */ RisingEdge_init_digital(&outC->Context_8);
  /* 1 */ FallingEdge_init_digital(&outC->Context_1);
  /* 7 */ RisingEdge_init_digital(&outC->Context_7);
  /* 6 */ RisingEdge_init_digital(&outC->Context_6);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void registeringToTheRadioNetwork_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 8 */ RisingEdge_reset_digital(&outC->Context_8);
  /* 1 */ FallingEdge_reset_digital(&outC->Context_1);
  /* 7 */ RisingEdge_reset_digital(&outC->Context_7);
  /* 6 */ RisingEdge_reset_digital(&outC->Context_6);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2 */
void registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::atPowerUpRadioNetworkID */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *atPowerUpRadioNetworkID,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::newRadioNetworkIDFromDriver */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *newRadioNetworkIDFromDriver,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::p45_registrationOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_registrationOrder,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::level */ M_LEVEL level,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::sessionStatus */ sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::mobileRegistrationContext */ mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::RadioNetworkID_Default */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_Default,
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* linear::Memory::Out */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg Out_1;
  /* linear::Memory::InitVal */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg InitVal_1;
  /* linear::Memory::MemCond */
  static kcg_bool MemCond_1;
  /* linear::Memory::Reset */
  static kcg_bool _3_Reset_1;
  /* linear::Memory::M_Input */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg M_Input_1;
  /* linear::Memory::_L9 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L9_1;
  /* linear::Memory::_L1 */
  static kcg_bool _L1_1;
  /* linear::Memory::_L2 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L2_1;
  /* linear::Memory::_L3 */
  static kcg_bool _L3_1;
  /* linear::Memory::_L5 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L5_11;
  /* linear::Memory::_L6 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L6_12;
  /* linear::Memory::_L7 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L7_1;
  /* linear::Memory::Out */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg Out_2;
  /* linear::Memory::InitVal */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg InitVal_2;
  /* linear::Memory::MemCond */
  static kcg_bool MemCond_2;
  /* linear::Memory::Reset */
  static kcg_bool Reset_2;
  /* linear::Memory::M_Input */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg M_Input_2;
  /* linear::Memory::_L9 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L9_2;
  /* linear::Memory::_L1 */
  static kcg_bool _L1_2;
  /* linear::Memory::_L2 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L2_2;
  /* linear::Memory::_L3 */
  static kcg_bool _L3_2;
  /* linear::Memory::_L5 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L5_2;
  /* linear::Memory::_L6 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L6_2;
  /* linear::Memory::_L7 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L7_2;
  /* linear::Memory::Out */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg Out_4;
  /* linear::Memory::InitVal */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg InitVal_4;
  /* linear::Memory::MemCond */
  static kcg_bool MemCond_4;
  /* linear::Memory::Reset */
  static kcg_bool Reset_4;
  /* linear::Memory::M_Input */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg M_Input_4;
  /* linear::Memory::_L9 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L9_4;
  /* linear::Memory::_L1 */
  static kcg_bool _L1_4;
  /* linear::Memory::_L2 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L2_4;
  /* linear::Memory::_L3 */
  static kcg_bool _L3_4;
  /* linear::Memory::_L5 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L5_4;
  /* linear::Memory::_L6 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L6_4;
  /* linear::Memory::_L7 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L7_4;
  /* linear::Memory::Out */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg Out_5;
  /* linear::Memory::InitVal */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg InitVal_5;
  /* linear::Memory::MemCond */
  static kcg_bool MemCond_5;
  /* linear::Memory::Reset */
  static kcg_bool Reset_5;
  /* linear::Memory::M_Input */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg M_Input_5;
  /* linear::Memory::_L9 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L9_5;
  /* linear::Memory::_L1 */
  static kcg_bool _L1_5;
  /* linear::Memory::_L2 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L2_5;
  /* linear::Memory::_L3 */
  static kcg_bool _L3_5;
  /* linear::Memory::_L5 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L5_5;
  /* linear::Memory::_L6 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L6_5;
  /* linear::Memory::_L7 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L7_5;
  /* digital::FlipFlopSet::FFS_Output */
  static kcg_bool FFS_Output_1;
  /* digital::FlipFlopSet::Init */
  static kcg_bool Init_1;
  /* digital::FlipFlopSet::Reset */
  static kcg_bool Reset_1;
  /* digital::FlipFlopSet::Set */
  static kcg_bool Set_1;
  /* digital::FlipFlopSet::_L13 */
  static kcg_bool _L13_1;
  /* digital::FlipFlopSet::_L12 */
  static kcg_bool _L12_1;
  /* digital::FlipFlopSet::_L11 */
  static kcg_bool _L11_1;
  /* digital::FlipFlopSet::_L6 */
  static kcg_bool _L6_1;
  /* digital::FlipFlopSet::_L5 */
  static kcg_bool _L5_1;
  /* digital::FlipFlopSet::_L4 */
  static kcg_bool _L4_1;
  /* digital::FlipFlopSet::_L10 */
  static kcg_bool _L10_1;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_TR_Register_SM _15_Register_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static kcg_bool _14_Register_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_ST_Register_SM _13_Register_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::registrationStatus */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _12_registrationStatus;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Unregistered::_L2 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L2_Register_SM_Unregistered;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_TR_Register_SM _11_Register_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static kcg_bool _10_Register_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_ST_Register_SM _9_Register_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::registrationStatus */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _8_registrationStatus;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Registering::_L3 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L3_Register_SM_Registering;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_TR_Register_SM _7_Register_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static kcg_bool _6_Register_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_ST_Register_SM _5_Register_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::registrationStatus */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _4_registrationStatus;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Registered::_L1 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L1_Register_SM_Registered;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_TR_Register_SM Register_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static kcg_bool Register_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_ST_Register_SM Register_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::registrationStatus */
  static mobileRegistrationStatus_T_RCM_Types_Pkg registrationStatus;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Reregistering::_L1 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L1_Register_SM_Reregistering;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_TR_Register_SM _24_Register_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static kcg_bool _23_Register_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_ST_Register_SM _22_Register_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Unregistered */
  static kcg_bool br_3_guard_Register_SM_Unregistered;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Unregistered */
  static kcg_bool br_2_guard_Register_SM_Unregistered;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Unregistered */
  static kcg_bool br_1_guard_Register_SM_Unregistered;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Unregistered */
  static kcg_bool br_1_clock_Register_SM_Unregistered;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_TR_Register_SM _21_Register_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static kcg_bool _20_Register_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_ST_Register_SM _19_Register_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Registering */
  static kcg_bool br_2_guard_Register_SM_Registering;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Registering */
  static kcg_bool br_1_guard_Register_SM_Registering;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Registering */
  static kcg_bool br_1_clock_Register_SM_Registering;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_TR_Register_SM _18_Register_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static kcg_bool _17_Register_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_ST_Register_SM _16_Register_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Registered */
  static kcg_bool br_3_guard_Register_SM_Registered;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Registered */
  static kcg_bool br_2_guard_Register_SM_Registered;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Registered */
  static kcg_bool br_1_guard_Register_SM_Registered;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Registered */
  static kcg_bool br_1_clock_Register_SM_Registered;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_TR_Register_SM Register_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static kcg_bool Register_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_ST_Register_SM Register_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Reregistering */
  static kcg_bool br_1_guard_Register_SM_Reregistering;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Reregistering */
  static kcg_bool br_1_clock_Register_SM_Reregistering;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::resetDelayedOrderFlag */
  static kcg_bool last_resetDelayedOrderFlag;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::sResetDelayedOrderFlag */
  static kcg_bool sResetDelayedOrderFlag;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::sUnregister */
  static kcg_bool sUnregister;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::sRegister */
  static kcg_bool sRegister;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_ST_Register_SM Register_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_ST_Register_SM _27_Register_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static kcg_bool Register_SM_reset_sel;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static kcg_bool Register_SM_reset_prv;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_TR_Register_SM _26_Register_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_TR_Register_SM _25_Register_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::triggerRegistrationOfMobile */
  static kcg_bool triggerRegistrationOfMobile;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::lastReceivedRadioNetworkID_loc */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg lastReceivedRadioNetworkID_loc;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::orderRegistrationImmediately */
  static kcg_bool orderRegistrationImmediately;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::orderRegistrationDelayed */
  static kcg_bool orderRegistrationDelayed;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::safeRadioConnectionReleased */
  static kcg_bool safeRadioConnectionReleased;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::registrationStatusFromMobile */
  static mobileRegistrationStatus_T_RCM_Types_Pkg registrationStatusFromMobile;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::registrationStatus */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _28_registrationStatus;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L132 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L132;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L148 */
  static kcg_bool _L148;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L149 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L149;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L147 */
  static CompressedPackets_T_Common_Types_Pkg _L147;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L150 */
  static kcg_bool _L150;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L151 */
  static kcg_bool _L151;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L153 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L153;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L154 */
  static kcg_bool _L154;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L164 */
  static kcg_bool _L164;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L163 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L163;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L165 */
  static kcg_bool _L165;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L131 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L131;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L175 */
  static kcg_bool _L175;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L174 */
  static kcg_bool _L174;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L173 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L173;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L176 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L176;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L178 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L178;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L177 */
  static kcg_bool _L177;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L180 */
  static kcg_bool _L180;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L181 */
  static kcg_bool _L181;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L182 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L182;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L183 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L183;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L184 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L184;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L185 */
  static kcg_bool _L185;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L199 */
  static M_LEVEL _L199;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L198 */
  static kcg_bool _L198;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L197 */
  static kcg_bool _L197;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L196 */
  static kcg_bool _L196;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L195 */
  static kcg_bool _L195;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L194 */
  static M_LEVEL _L194;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L193 */
  static M_LEVEL _L193;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L200 */
  static kcg_bool _L200;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L211 */
  static kcg_bool _L211;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L212 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L212;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L213 */
  static kcg_bool _L213;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L214 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L214;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L217 */
  static kcg_bool _L217;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L218 */
  static kcg_bool _L218;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L219 */
  static kcg_bool _L219;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L220 */
  static kcg_bool _L220;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L221 */
  static kcg_bool _L221;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L222 */
  static kcg_bool _L222;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L223 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L223;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L224 */
  static kcg_bool _L224;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L225 */
  static NID_MN _L225;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L228 */
  static NID_MN _L228;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L227 */
  static kcg_bool _L227;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L229 */
  static kcg_bool _L229;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L230 */
  static kcg_bool _L230;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L231 */
  static kcg_bool _L231;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L232 */
  static kcg_bool _L232;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L237 */
  static kcg_bool _L237;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L240 */
  static kcg_bool _L240;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L241 */
  static kcg_bool _L241;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L242 */
  static kcg_bool _L242;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L243 */
  static kcg_bool _L243;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L244 */
  static kcg_bool _L244;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L245 */
  static kcg_bool _L245;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L247 */
  static kcg_bool _L247;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L249 */
  static kcg_bool _L249;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L252 */
  static kcg_bool _L252;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L253 */
  static kcg_bool _L253;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L254 */
  static kcg_bool _L254;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L255 */
  static kcg_bool _L255;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L256 */
  static kcg_bool _L256;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L289 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L289;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L290 */
  static kcg_bool _L290;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L291 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L291;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L292 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L292;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L293 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L293;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L294 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L294;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L295 */
  static kcg_bool _L295;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L296 */
  static kcg_bool _L296;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L297 */
  static kcg_bool _L297;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L299 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L299;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L300 */
  static kcg_bool _L300;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L302 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L302;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L303 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L303;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L304 */
  static kcg_bool _L304;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L305 */
  static kcg_bool _L305;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L306 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L306;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L307 */
  static kcg_bool _L307;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L308 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L308;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L309 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L309;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L310 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L310;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L311 */
  static kcg_bool _L311;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L312 */
  static kcg_bool _L312;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L313 */
  static kcg_bool _L313;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L314 */
  static kcg_bool _L314;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L315 */
  static mobileRegistrationCmd_T_RCM_Types_Pkg _L315;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L316 */
  static kcg_bool _L316;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L317 */
  static mobileRegistrationAction_T_RCM_Types_Pkg _L317;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L318 */
  static mobileRegistrationAction_T_RCM_Types_Pkg _L318;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L319 */
  static mobileRegistrationAction_T_RCM_Types_Pkg _L319;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L320 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L320;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L321 */
  static NID_MN _L321;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L324 */
  static kcg_bool _L324;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L325 */
  static mobileHealthStatus_T_RCM_Types_Pkg _L325;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L326 */
  static mobileHealthStatus_T_RCM_Types_Pkg _L326;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L327 */
  static kcg_bool _L327;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L328 */
  static kcg_bool _L328;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L331 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L331;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L332 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L332;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L333 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L333;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L334 */
  static kcg_bool _L334;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L335 */
  static kcg_bool _L335;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L343 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L343;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L345 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L345;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L346 */
  static kcg_int _L346;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L347 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L347;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L349 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L349;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L353 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L353;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L354 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L354;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L355 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L355;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L357 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L357;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L358 */
  static kcg_bool _L358;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L359 */
  static kcg_bool _L359;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L360 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L360;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L363 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L363;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L364 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L364;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L365 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L365;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L366 */
  static obuEventsAndPhases_T_RCM_Session_Types_Pkg _L366;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L367 */
  static kcg_bool _L367;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L369 */
  static kcg_bool _L369;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L368 */
  static obuEventsAndPhases_T_RCM_Session_Types_Pkg _L368;
  
  /* init_Register_SM */ if (outC->init) {
    Register_SM_state_sel = SSM_st_Unregistered_Register_SM;
  }
  else {
    Register_SM_state_sel = outC->Register_SM_state_nxt;
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L182,
    RadioNetworkID_Default);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&InitVal_5, &_L182);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L9_5, &InitVal_5);
  /* 5_fby_1_init_7 */ if (outC->init) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L5_5, &_L9_5);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &_L5_5,
      &outC->_L8_5);
  }
  _L177 = reset;
  Reset_5 = _L177;
  _L1_5 = Reset_5;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L2_5, &InitVal_5);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L131,
    atPowerUpRadioNetworkID);
  _L165 = _L131.valid;
  /* 6 */ RisingEdge_digital(_L165, &outC->Context_6);
  _L180 = outC->Context_6.RE_Output;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L176,
    newRadioNetworkIDFromDriver);
  _L174 = _L176.valid;
  _L194 = M_LEVEL_Level_2;
  _L199 = level;
  _L195 = _L194 == _L199;
  _L193 = M_LEVEL_Level_3;
  _L198 = _L199 == _L193;
  _L197 = _L195 | _L198;
  _L196 = _L174 & _L197;
  /* 7 */ RisingEdge_digital(_L196, &outC->Context_7);
  _L181 = outC->Context_7.RE_Output;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L132, p45_registrationOrder);
  _L150 = _L132.valid;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L147, &_L132.packets);
  /* 1 */ Read_P045_TM(&_L147, &_L148, &_L149);
  _L151 = _L150 & _L148;
  _L185 = _L180 | _L181 | _L151;
  MemCond_5 = _L185;
  _L3_5 = MemCond_5;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L347,
    (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
      &cNoP45_RadioNetworkRegistration_RCM_Types_Pkg);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&InitVal_1, &_L347);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L9_1, &InitVal_1);
  /* 1_fby_1_init_7 */ if (outC->init) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L5_11, &_L9_1);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &_L5_11,
      &outC->_L8_1);
  }
  _L154 = reset;
  _3_Reset_1 = _L154;
  _L1_1 = _3_Reset_1;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L2_1, &InitVal_1);
  MemCond_1 = _L151;
  _L3_1 = MemCond_1;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&M_Input_1, &_L149);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L6_12, &M_Input_1);
  /* 4 */ if (_L3_1) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L7_1, &_L6_12);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L7_1, &_L5_11);
  }
  /* 1 */ if (_L1_1) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L8_1,
      &_L2_1);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L8_1,
      &_L7_1);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &Out_1,
    &outC->_L8_1);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L153, &Out_1);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L349,
    (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
      &cNoP45_RadioNetworkRegistration_RCM_Types_Pkg);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&InitVal_4, &_L349);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L9_4, &InitVal_4);
  /* 4_fby_1_init_7 */ if (outC->init) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L5_4, &_L9_4);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &_L5_4,
      &outC->_L8_4);
  }
  _L175 = reset;
  Reset_4 = _L175;
  _L1_4 = Reset_4;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L2_4, &InitVal_4);
  MemCond_4 = _L196;
  _L3_4 = MemCond_4;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&M_Input_4, &_L176);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L6_4, &M_Input_4);
  /* 4 */ if (_L3_4) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L7_4, &_L6_4);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L7_4, &_L5_4);
  }
  /* 1 */ if (_L1_4) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L8_4,
      &_L2_4);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L8_4,
      &_L7_4);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &Out_4,
    &outC->_L8_4);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L173, &Out_4);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&InitVal_2, &_L349);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L9_2, &InitVal_2);
  /* 2_fby_1_init_7 */ if (outC->init) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L5_2, &_L9_2);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &_L5_2,
      &outC->_L8_2);
  }
  _L164 = reset;
  Reset_2 = _L164;
  _L1_2 = Reset_2;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L2_2, &InitVal_2);
  MemCond_2 = _L165;
  _L3_2 = MemCond_2;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&M_Input_2, &_L131);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L6_2, &M_Input_2);
  /* 4 */ if (_L3_2) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L7_2, &_L6_2);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L7_2, &_L5_2);
  }
  /* 1 */ if (_L1_2) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L8_2,
      &_L2_2);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L8_2,
      &_L7_2);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &Out_2,
    &outC->_L8_2);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L163, &Out_2);
  /* 5 */ if (_L181) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L183, &_L173);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L183, &_L163);
  }
  /* 6 */ if (_L151) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L184, &_L153);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L184, &_L183);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&M_Input_5, &_L184);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L6_5, &M_Input_5);
  /* 4 */ if (_L3_5) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L7_5, &_L6_5);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L7_5, &_L5_5);
  }
  /* 1 */ if (_L1_5) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L8_5,
      &_L2_5);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L8_5,
      &_L7_5);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &Out_5,
    &outC->_L8_5);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L178, &Out_5);
  _L311 = _L178.valid;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_L368, eventsAndPhases);
  _L369 = _L368.triggerDecisionThatNoRadioNetworkIDAvailable;
  _L249 = _L185 | _L369;
  _L312 = _L311 & _L249;
  triggerRegistrationOfMobile = _L312;
  _L200 = triggerRegistrationOfMobile;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L289,
    mobileRegistrationContext);
  _L290 = _L289.valid;
  _L291 = _L289.status;
  _L292 = mrs_unregistered_RCM_Types_Pkg;
  _L295 = _L291 == _L292;
  _L294 = mrs_registered_RCM_Types_Pkg;
  _L296 = _L291 == _L294;
  _L293 = mrs_registering_RCM_Types_Pkg;
  _L297 = _L291 == _L293;
  _L237 = _L296 | _L297;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &lastReceivedRadioNetworkID_loc,
    &_L178);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L223,
    &lastReceivedRadioNetworkID_loc);
  _L224 = _L223.valid;
  _L225 = _L223.nid_mn;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L343,
    mobileRegistrationContext);
  _L228 = _L343.nid_mn;
  _L229 = _L225 != _L228;
  _L227 = _L343.valid;
  _L230 = _L224 & _L229 & _L227;
  _L222 = _L237 & _L230;
  _L211 = _L295 | _L222;
  _L221 = _L290 & _L211;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L212, sessionStatus);
  _L213 = _L212.valid;
  _L214 = _L212.phase;
  _L353 = sp_establishing_RCM_Session_Types_Pkg;
  _L217 = _L214 == _L353;
  _L355 = sp_terminating_RCM_Session_Types_Pkg;
  _L218 = _L214 == _L355;
  _L354 = sp_maintaining_RCM_Session_Types_Pkg;
  _L358 = _L214 == _L354;
  _L219 = _L217 | _L218 | _L358;
  _L232 = !_L219;
  _L220 = _L213 & _L232;
  _L231 = _L200 & _L221 & _L220;
  orderRegistrationImmediately = _L231;
  _L4_1 = outC->_L2_1;
  Init_1 = kcg_false;
  _L10_1 = Init_1;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(&_L365, connectionStatus);
  _L300 = _L365.valid;
  _L299 = _L365.status;
  _L302 = mcs_connecting_RCM_Types_Pkg;
  _L304 = _L299 == _L302;
  _L303 = mcs_connected_RCM_Types_Pkg;
  _L305 = _L299 == _L303;
  _L240 = _L304 | _L305;
  _L242 = _L300 & _L240;
  _L241 = _L219 & _L213;
  _L243 = _L242 | _L241;
  _L244 = _L200 & _L243 & _L230;
  Set_1 = _L244;
  _L5_1 = Set_1;
  /* last_init_ck_resetDelayedOrderFlag */ if (outC->init) {
    last_resetDelayedOrderFlag = kcg_false;
  }
  else {
    last_resetDelayedOrderFlag = outC->resetDelayedOrderFlag;
  }
  _L247 = last_resetDelayedOrderFlag;
  Reset_1 = _L247;
  _L6_1 = Reset_1;
  _L11_1 = !_L6_1;
  _L12_1 = _L11_1 & _L4_1;
  _L13_1 = _L5_1 | _L12_1;
  /* 1_1 */ if (outC->init) {
    outC->_L2_1 = _L10_1;
  }
  else {
    outC->_L2_1 = _L13_1;
  }
  FFS_Output_1 = outC->_L2_1;
  _L245 = FFS_Output_1;
  orderRegistrationDelayed = _L245;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(&_L357, connectionStatus);
  _L359 = _L357.valid;
  _L360 = _L357.status;
  _L363 = mcs_connecting_RCM_Types_Pkg;
  _L252 = _L360 == _L363;
  _L364 = mcs_connected_RCM_Types_Pkg;
  _L253 = _L360 == _L364;
  _L254 = _L219 | _L252 | _L253 | _L242;
  /* 1 */ FallingEdge_digital(_L254, &outC->Context_1);
  _L255 = outC->Context_1.FE_Output;
  _L256 = _L213 & _L359 & _L255;
  safeRadioConnectionReleased = _L256;
  /* sel_Register_SM */ switch (Register_SM_state_sel) {
    case SSM_st_Unregistered_Register_SM :
      sResetDelayedOrderFlag = kcg_false;
      sUnregister = kcg_false;
      br_1_guard_Register_SM_Unregistered = orderRegistrationImmediately;
      br_1_clock_Register_SM_Unregistered = br_1_guard_Register_SM_Unregistered;
      break;
    case SSM_st_Registering_Register_SM :
      br_1_guard_Register_SM_Registering = orderRegistrationImmediately |
        (orderRegistrationDelayed & safeRadioConnectionReleased);
      br_1_clock_Register_SM_Registering = br_1_guard_Register_SM_Registering;
      /* cb_anon_sm */ if (br_1_clock_Register_SM_Registering) {
        sResetDelayedOrderFlag = kcg_true;
        sUnregister = kcg_true;
      }
      else {
        sResetDelayedOrderFlag = kcg_false;
        sUnregister = kcg_false;
      }
      break;
    case SSM_st_Registered_Register_SM :
      br_1_guard_Register_SM_Registered = orderRegistrationImmediately |
        (orderRegistrationDelayed & safeRadioConnectionReleased);
      br_1_clock_Register_SM_Registered = br_1_guard_Register_SM_Registered;
      /* cb_anon_sm */ if (br_1_clock_Register_SM_Registered) {
        sResetDelayedOrderFlag = kcg_true;
        sUnregister = kcg_true;
      }
      else {
        sResetDelayedOrderFlag = kcg_false;
        sUnregister = kcg_false;
      }
      break;
    case SSM_st_Reregistering_Register_SM :
      sResetDelayedOrderFlag = kcg_false;
      sUnregister = kcg_false;
      break;
    
  }
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L306,
    mobileRegistrationContext);
  _L307 = _L306.valid;
  _L325 = _L306.healthStatus;
  _L326 = mhs_ok_RCM_Types_Pkg;
  _L327 = _L325 == _L326;
  _L328 = _L307 & _L327;
  _L308 = _L306.status;
  _L309 = mrs_unregistered_RCM_Types_Pkg;
  /* 9 */ if (_L328) {
    _L310 = _L308;
  }
  else {
    _L310 = _L309;
  }
  registrationStatusFromMobile = _L310;
  /* sel_Register_SM */ switch (Register_SM_state_sel) {
    case SSM_st_Unregistered_Register_SM :
      /* cb_anon_sm */ if (br_1_clock_Register_SM_Unregistered) {
        sRegister = kcg_true;
      }
      else {
        sRegister = kcg_false;
      }
      break;
    case SSM_st_Registering_Register_SM :
      sRegister = kcg_false;
      break;
    case SSM_st_Registered_Register_SM :
      sRegister = kcg_false;
      break;
    case SSM_st_Reregistering_Register_SM :
      br_1_guard_Register_SM_Reregistering = registrationStatusFromMobile ==
        mrs_unregistered_RCM_Types_Pkg;
      br_1_clock_Register_SM_Reregistering =
        br_1_guard_Register_SM_Reregistering;
      /* cb_anon_sm */ if (br_1_clock_Register_SM_Reregistering) {
        sRegister = kcg_true;
      }
      else {
        sRegister = kcg_false;
      }
      break;
    
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->lastReceivedRadioNetworkID,
    &_L178);
  /* init_Register_SM */ if (outC->init) {
    Register_SM_reset_sel = kcg_false;
  }
  else {
    Register_SM_reset_sel = outC->Register_SM_reset_nxt;
  }
  /* init_Register_SM */ if (outC->init) {
    Register_SM_reset_prv = kcg_false;
  }
  else {
    Register_SM_reset_prv = outC->Register_SM_reset_act;
  }
  /* sel_Register_SM */ switch (Register_SM_state_sel) {
    case SSM_st_Unregistered_Register_SM :
      br_2_guard_Register_SM_Unregistered = registrationStatusFromMobile ==
        mrs_registering_RCM_Types_Pkg;
      br_3_guard_Register_SM_Unregistered = registrationStatusFromMobile ==
        mrs_registered_RCM_Types_Pkg;
      if (br_1_guard_Register_SM_Unregistered) {
        _22_Register_SM_state_act = SSM_st_Registering_Register_SM;
      }
      else if (br_2_guard_Register_SM_Unregistered) {
        _22_Register_SM_state_act = SSM_st_Registering_Register_SM;
      }
      else if (br_3_guard_Register_SM_Unregistered) {
        _22_Register_SM_state_act = SSM_st_Registered_Register_SM;
      }
      else {
        _22_Register_SM_state_act = SSM_st_Unregistered_Register_SM;
      }
      _27_Register_SM_state_act = _22_Register_SM_state_act;
      if (br_1_guard_Register_SM_Unregistered) {
        _23_Register_SM_reset_act = kcg_true;
      }
      else if (br_2_guard_Register_SM_Unregistered) {
        _23_Register_SM_reset_act = kcg_true;
      }
      else {
        _23_Register_SM_reset_act = br_3_guard_Register_SM_Unregistered;
      }
      outC->Register_SM_reset_act = _23_Register_SM_reset_act;
      if (br_1_guard_Register_SM_Unregistered) {
        _24_Register_SM_fired_strong = SSM_TR_Unregistered_1_Register_SM;
      }
      else if (br_2_guard_Register_SM_Unregistered) {
        _24_Register_SM_fired_strong = SSM_TR_Unregistered_2_Register_SM;
      }
      else if (br_3_guard_Register_SM_Unregistered) {
        _24_Register_SM_fired_strong = SSM_TR_Unregistered_3_Register_SM;
      }
      else {
        _24_Register_SM_fired_strong = SSM_TR_no_trans_Register_SM;
      }
      _26_Register_SM_fired_strong = _24_Register_SM_fired_strong;
      break;
    case SSM_st_Registering_Register_SM :
      br_2_guard_Register_SM_Registering = registrationStatusFromMobile ==
        mrs_registered_RCM_Types_Pkg;
      if (br_1_guard_Register_SM_Registering) {
        _19_Register_SM_state_act = SSM_st_Reregistering_Register_SM;
      }
      else if (br_2_guard_Register_SM_Registering) {
        _19_Register_SM_state_act = SSM_st_Registered_Register_SM;
      }
      else {
        _19_Register_SM_state_act = SSM_st_Registering_Register_SM;
      }
      _27_Register_SM_state_act = _19_Register_SM_state_act;
      if (br_1_guard_Register_SM_Registering) {
        _20_Register_SM_reset_act = kcg_true;
      }
      else {
        _20_Register_SM_reset_act = br_2_guard_Register_SM_Registering;
      }
      outC->Register_SM_reset_act = _20_Register_SM_reset_act;
      if (br_1_guard_Register_SM_Registering) {
        _21_Register_SM_fired_strong = SSM_TR_Registering_1_Register_SM;
      }
      else if (br_2_guard_Register_SM_Registering) {
        _21_Register_SM_fired_strong = SSM_TR_Registering_2_Register_SM;
      }
      else {
        _21_Register_SM_fired_strong = SSM_TR_no_trans_Register_SM;
      }
      _26_Register_SM_fired_strong = _21_Register_SM_fired_strong;
      break;
    case SSM_st_Registered_Register_SM :
      br_2_guard_Register_SM_Registered = registrationStatusFromMobile ==
        mrs_registering_RCM_Types_Pkg;
      br_3_guard_Register_SM_Registered = registrationStatusFromMobile ==
        mrs_unregistered_RCM_Types_Pkg;
      if (br_1_guard_Register_SM_Registered) {
        _16_Register_SM_state_act = SSM_st_Reregistering_Register_SM;
      }
      else if (br_2_guard_Register_SM_Registered) {
        _16_Register_SM_state_act = SSM_st_Registering_Register_SM;
      }
      else if (br_3_guard_Register_SM_Registered) {
        _16_Register_SM_state_act = SSM_st_Unregistered_Register_SM;
      }
      else {
        _16_Register_SM_state_act = SSM_st_Registered_Register_SM;
      }
      _27_Register_SM_state_act = _16_Register_SM_state_act;
      if (br_1_guard_Register_SM_Registered) {
        _17_Register_SM_reset_act = kcg_true;
      }
      else if (br_2_guard_Register_SM_Registered) {
        _17_Register_SM_reset_act = kcg_true;
      }
      else {
        _17_Register_SM_reset_act = br_3_guard_Register_SM_Registered;
      }
      outC->Register_SM_reset_act = _17_Register_SM_reset_act;
      if (br_1_guard_Register_SM_Registered) {
        _18_Register_SM_fired_strong = SSM_TR_Registered_1_Register_SM;
      }
      else if (br_2_guard_Register_SM_Registered) {
        _18_Register_SM_fired_strong = SSM_TR_Registered_2_Register_SM;
      }
      else if (br_3_guard_Register_SM_Registered) {
        _18_Register_SM_fired_strong = SSM_TR_Registered_3_Register_SM;
      }
      else {
        _18_Register_SM_fired_strong = SSM_TR_no_trans_Register_SM;
      }
      _26_Register_SM_fired_strong = _18_Register_SM_fired_strong;
      break;
    case SSM_st_Reregistering_Register_SM :
      if (br_1_guard_Register_SM_Reregistering) {
        Register_SM_state_act = SSM_st_Registering_Register_SM;
      }
      else {
        Register_SM_state_act = SSM_st_Reregistering_Register_SM;
      }
      _27_Register_SM_state_act = Register_SM_state_act;
      Register_SM_reset_act = br_1_guard_Register_SM_Reregistering;
      outC->Register_SM_reset_act = Register_SM_reset_act;
      if (br_1_guard_Register_SM_Reregistering) {
        Register_SM_fired_strong = SSM_TR_Reregistering_1_Register_SM;
      }
      else {
        Register_SM_fired_strong = SSM_TR_no_trans_Register_SM;
      }
      _26_Register_SM_fired_strong = Register_SM_fired_strong;
      break;
    
  }
  /* act_Register_SM */ switch (_27_Register_SM_state_act) {
    case SSM_st_Unregistered_Register_SM :
      _L2_Register_SM_Unregistered = mrs_unregistered_RCM_Types_Pkg;
      _12_registrationStatus = _L2_Register_SM_Unregistered;
      _28_registrationStatus = _12_registrationStatus;
      _13_Register_SM_state_nxt = SSM_st_Unregistered_Register_SM;
      outC->Register_SM_state_nxt = _13_Register_SM_state_nxt;
      _14_Register_SM_reset_nxt = kcg_false;
      outC->Register_SM_reset_nxt = _14_Register_SM_reset_nxt;
      _15_Register_SM_fired = _26_Register_SM_fired_strong;
      _25_Register_SM_fired = _15_Register_SM_fired;
      break;
    case SSM_st_Registering_Register_SM :
      _L3_Register_SM_Registering = mrs_registering_RCM_Types_Pkg;
      _8_registrationStatus = _L3_Register_SM_Registering;
      _28_registrationStatus = _8_registrationStatus;
      _9_Register_SM_state_nxt = SSM_st_Registering_Register_SM;
      outC->Register_SM_state_nxt = _9_Register_SM_state_nxt;
      _10_Register_SM_reset_nxt = kcg_false;
      outC->Register_SM_reset_nxt = _10_Register_SM_reset_nxt;
      _11_Register_SM_fired = _26_Register_SM_fired_strong;
      _25_Register_SM_fired = _11_Register_SM_fired;
      break;
    case SSM_st_Registered_Register_SM :
      _L1_Register_SM_Registered = mrs_registered_RCM_Types_Pkg;
      _4_registrationStatus = _L1_Register_SM_Registered;
      _28_registrationStatus = _4_registrationStatus;
      _5_Register_SM_state_nxt = SSM_st_Registered_Register_SM;
      outC->Register_SM_state_nxt = _5_Register_SM_state_nxt;
      _6_Register_SM_reset_nxt = kcg_false;
      outC->Register_SM_reset_nxt = _6_Register_SM_reset_nxt;
      _7_Register_SM_fired = _26_Register_SM_fired_strong;
      _25_Register_SM_fired = _7_Register_SM_fired;
      break;
    case SSM_st_Reregistering_Register_SM :
      _L1_Register_SM_Reregistering = mrs_registering_RCM_Types_Pkg;
      registrationStatus = _L1_Register_SM_Reregistering;
      _28_registrationStatus = registrationStatus;
      Register_SM_state_nxt = SSM_st_Reregistering_Register_SM;
      outC->Register_SM_state_nxt = Register_SM_state_nxt;
      Register_SM_reset_nxt = kcg_false;
      outC->Register_SM_reset_nxt = Register_SM_reset_nxt;
      Register_SM_fired = _26_Register_SM_fired_strong;
      _25_Register_SM_fired = Register_SM_fired;
      break;
    
  }
  _L313 = sRegister;
  _L314 = sUnregister;
  _L316 = _L313 | _L314;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L345,
    mobileRegistrationContext);
  _L346 = _L345.mobileDeviceNo;
  _L317 = mra_register_RCM_Types_Pkg;
  _L318 = mra_unregister_RCM_Types_Pkg;
  /* 10 */ if (_L313) {
    _L319 = _L317;
  }
  else {
    _L319 = _L318;
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L320,
    &lastReceivedRadioNetworkID_loc);
  _L321 = _L320.nid_mn;
  _L315.valid = _L316;
  _L315.mobileDeviceNo = _L346;
  _L315.action = _L319;
  _L315.network_id = _L321;
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->mobileRegistrationCmd,
    &_L315);
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_L366, eventsAndPhases);
  _L367 = _L366.atPowerDown;
  /* 8 */ RisingEdge_digital(_L367, &outC->Context_8);
  _L324 = outC->Context_8.RE_Output;
  outC->memorizeTheLastRadioNetworkID = _L324;
  _L332 = _28_registrationStatus;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(&_L331, &_L306);
  if (kcg_true) {
    _L331.status = _L332;
  }
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->mobileRegistrationStatus,
    &_L331);
  _L333 = mrs_registered_RCM_Types_Pkg;
  _L334 = _L332 != _L333;
  outC->rejectOrderToContactRBC_or_RIU = _L334;
  _L335 = sResetDelayedOrderFlag;
  outC->resetDelayedOrderFlag = _L335;
  outC->p45_registrationOrderReceived_p = _L151;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

