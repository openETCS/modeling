/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg.h"

void registeringToTheRadioNetwork_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 8 */ RisingEdge_reset_digital(&outC->Context_8);
  /* 1 */ FallingEdge_reset_digital(&outC->Context_1);
  /* 6 */ RisingEdge_reset_digital(&outC->Context_6);
  /* 7 */ RisingEdge_reset_digital(&outC->Context_7);
}

/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2 */
void registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::atPowerUpRadioNetworkID */P45_RadioNetworkRegistration_T_Packet_Types_Pkg *atPowerUpRadioNetworkID,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::newRadioNetworkIDFromDriver */P45_RadioNetworkRegistration_T_Packet_Types_Pkg *newRadioNetworkIDFromDriver,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::p45_registrationOrder */msgFromTrack_T_RCM_MsgTypes_Pkg *p45_registrationOrder,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::level */M_LEVEL level,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::eventsAndPhases */obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::sessionStatus */sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::connectionStatus */mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::mobileRegistrationContext */mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::reset */kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::RadioNetworkID_Default */P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_Default,
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Registering */
  static kcg_bool br_1_guard_Register_SM_Registering;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Reregistering */
  static kcg_bool br_1_guard_Register_SM_Reregistering;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_ST_Register_SM Register_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
  static SSM_ST_Register_SM Register_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::orderRegistrationImmediately */
  static kcg_bool orderRegistrationImmediately;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::registrationStatus */
  static mobileRegistrationStatus_T_RCM_Types_Pkg registrationStatus;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L149 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L149;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L185 */
  static kcg_bool _L185;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L242 */
  static kcg_bool _L242;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L313 */
  static kcg_bool _L313;
  
  outC->mobileRegistrationCmd.mobileDeviceNo =
    (*mobileRegistrationContext).mobileDeviceNo;
  br_1_guard_Register_SM_Registering = (*newRadioNetworkIDFromDriver).valid &
    ((M_LEVEL_Level_2 == level) | (level == M_LEVEL_Level_3));
  /* 7 */
  RisingEdge_digital(br_1_guard_Register_SM_Registering, &outC->Context_7);
  /* 1 */ Read_P045_TM(&(*p45_registrationOrder).packets, &_L185, &_L149);
  _L242 = (*p45_registrationOrder).valid & _L185;
  /* 6 */
  RisingEdge_digital((*atPowerUpRadioNetworkID).valid, &outC->Context_6);
  _L185 = outC->Context_6.RE_Output | outC->Context_7.RE_Output | _L242;
  if (reset) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L153,
      (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
        &cNoP45_RadioNetworkRegistration_RCM_Types_Pkg);
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L173,
      (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
        &cNoP45_RadioNetworkRegistration_RCM_Types_Pkg);
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L163,
      (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
        &cNoP45_RadioNetworkRegistration_RCM_Types_Pkg);
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->lastReceivedRadioNetworkID,
      RadioNetworkID_Default);
  }
  else {
    if (_L242) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->_L153,
        &_L149);
    }
    else if (outC->init) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->_L153,
        (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
          &cNoP45_RadioNetworkRegistration_RCM_Types_Pkg);
    }
    if (br_1_guard_Register_SM_Registering) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->_L173,
        newRadioNetworkIDFromDriver);
    }
    else if (outC->init) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->_L173,
        (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
          &cNoP45_RadioNetworkRegistration_RCM_Types_Pkg);
    }
    if ((*atPowerUpRadioNetworkID).valid) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->_L163,
        atPowerUpRadioNetworkID);
    }
    else if (outC->init) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->_L163,
        (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
          &cNoP45_RadioNetworkRegistration_RCM_Types_Pkg);
    }
    if (_L185) {
      if (_L242) {
        kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
          &outC->lastReceivedRadioNetworkID,
          &outC->_L153);
      }
      else if (outC->Context_7.RE_Output) {
        kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
          &outC->lastReceivedRadioNetworkID,
          &outC->_L173);
      }
      else {
        kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
          &outC->lastReceivedRadioNetworkID,
          &outC->_L163);
      }
    }
    else if (outC->init) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->lastReceivedRadioNetworkID,
        RadioNetworkID_Default);
    }
  }
  outC->mobileRegistrationCmd.network_id =
    outC->lastReceivedRadioNetworkID.nid_mn;
  br_1_guard_Register_SM_Registering = outC->lastReceivedRadioNetworkID.valid &
    (_L185 | (*eventsAndPhases).triggerDecisionThatNoRadioNetworkIDAvailable);
  _L242 = (*connectionStatus).valid & (((*connectionStatus).status ==
        mcs_connecting_RCM_Types_Pkg) | ((*connectionStatus).status ==
        mcs_connected_RCM_Types_Pkg));
  _L185 = ((*sessionStatus).phase == sp_establishing_RCM_Session_Types_Pkg) |
    ((*sessionStatus).phase == sp_terminating_RCM_Session_Types_Pkg) |
    ((*sessionStatus).phase == sp_maintaining_RCM_Session_Types_Pkg);
  br_1_guard_Register_SM_Reregistering =
    outC->lastReceivedRadioNetworkID.valid &
    (outC->lastReceivedRadioNetworkID.nid_mn !=
      (*mobileRegistrationContext).nid_mn) & (*mobileRegistrationContext).valid;
  if (outC->init) {
    outC->init = kcg_false;
    outC->orderRegistrationDelayed = kcg_false;
    Register_SM_state_sel = SSM_st_Unregistered_Register_SM;
  }
  else {
    outC->orderRegistrationDelayed = (br_1_guard_Register_SM_Registering &
        (_L242 | (_L185 & (*sessionStatus).valid)) &
        br_1_guard_Register_SM_Reregistering) | (!outC->resetDelayedOrderFlag &
        outC->orderRegistrationDelayed);
    Register_SM_state_sel = outC->Register_SM_state_nxt;
  }
  orderRegistrationImmediately = br_1_guard_Register_SM_Registering &
    ((*mobileRegistrationContext).valid &
      (((*mobileRegistrationContext).status == mrs_unregistered_RCM_Types_Pkg) |
        ((((*mobileRegistrationContext).status ==
              mrs_registered_RCM_Types_Pkg) |
            ((*mobileRegistrationContext).status ==
              mrs_registering_RCM_Types_Pkg)) &
          br_1_guard_Register_SM_Reregistering))) & ((*sessionStatus).valid &
      !_L185);
  if ((*mobileRegistrationContext).valid &
    ((*mobileRegistrationContext).healthStatus == mhs_ok_RCM_Types_Pkg)) {
    registrationStatus = (*mobileRegistrationContext).status;
  }
  else {
    registrationStatus = mrs_unregistered_RCM_Types_Pkg;
  }
  /* 1 */
  FallingEdge_digital(
    (kcg_bool)
      (_L185 | ((*connectionStatus).status == mcs_connecting_RCM_Types_Pkg) |
        ((*connectionStatus).status == mcs_connected_RCM_Types_Pkg) | _L242),
    &outC->Context_1);
  _L185 = (*sessionStatus).valid & (*connectionStatus).valid &
    outC->Context_1.FE_Output;
  switch (Register_SM_state_sel) {
    case SSM_st_Reregistering_Register_SM :
      br_1_guard_Register_SM_Reregistering = registrationStatus ==
        mrs_unregistered_RCM_Types_Pkg;
      outC->resetDelayedOrderFlag = kcg_false;
      if (br_1_guard_Register_SM_Reregistering) {
        _L313 = kcg_true;
        Register_SM_state_act = SSM_st_Registering_Register_SM;
      }
      else {
        _L313 = kcg_false;
        Register_SM_state_act = SSM_st_Reregistering_Register_SM;
      }
      break;
    case SSM_st_Registered_Register_SM :
      _L313 = kcg_false;
      _L242 = orderRegistrationImmediately | (outC->orderRegistrationDelayed &
          _L185);
      if (_L242) {
        outC->resetDelayedOrderFlag = kcg_true;
        Register_SM_state_act = SSM_st_Reregistering_Register_SM;
      }
      else {
        outC->resetDelayedOrderFlag = kcg_false;
        if (registrationStatus == mrs_registering_RCM_Types_Pkg) {
          Register_SM_state_act = SSM_st_Registering_Register_SM;
        }
        else if (registrationStatus == mrs_unregistered_RCM_Types_Pkg) {
          Register_SM_state_act = SSM_st_Unregistered_Register_SM;
        }
        else {
          Register_SM_state_act = SSM_st_Registered_Register_SM;
        }
      }
      break;
    case SSM_st_Registering_Register_SM :
      _L313 = kcg_false;
      br_1_guard_Register_SM_Registering = orderRegistrationImmediately |
        (outC->orderRegistrationDelayed & _L185);
      if (br_1_guard_Register_SM_Registering) {
        outC->resetDelayedOrderFlag = kcg_true;
        Register_SM_state_act = SSM_st_Reregistering_Register_SM;
      }
      else {
        outC->resetDelayedOrderFlag = kcg_false;
        if (registrationStatus == mrs_registered_RCM_Types_Pkg) {
          Register_SM_state_act = SSM_st_Registered_Register_SM;
        }
        else {
          Register_SM_state_act = SSM_st_Registering_Register_SM;
        }
      }
      break;
    case SSM_st_Unregistered_Register_SM :
      outC->resetDelayedOrderFlag = kcg_false;
      if (orderRegistrationImmediately) {
        _L313 = kcg_true;
        Register_SM_state_act = SSM_st_Registering_Register_SM;
      }
      else {
        _L313 = kcg_false;
        if (registrationStatus == mrs_registering_RCM_Types_Pkg) {
          Register_SM_state_act = SSM_st_Registering_Register_SM;
        }
        else if (registrationStatus == mrs_registered_RCM_Types_Pkg) {
          Register_SM_state_act = SSM_st_Registered_Register_SM;
        }
        else {
          Register_SM_state_act = SSM_st_Unregistered_Register_SM;
        }
      }
      break;
    
  }
  outC->mobileRegistrationCmd.valid = _L313 | outC->resetDelayedOrderFlag;
  switch (Register_SM_state_act) {
    case SSM_st_Unregistered_Register_SM :
      registrationStatus = mrs_unregistered_RCM_Types_Pkg;
      outC->Register_SM_state_nxt = SSM_st_Unregistered_Register_SM;
      break;
    case SSM_st_Registering_Register_SM :
      registrationStatus = mrs_registering_RCM_Types_Pkg;
      outC->Register_SM_state_nxt = SSM_st_Registering_Register_SM;
      break;
    case SSM_st_Registered_Register_SM :
      registrationStatus = mrs_registered_RCM_Types_Pkg;
      outC->Register_SM_state_nxt = SSM_st_Registered_Register_SM;
      break;
    case SSM_st_Reregistering_Register_SM :
      registrationStatus = mrs_registering_RCM_Types_Pkg;
      outC->Register_SM_state_nxt = SSM_st_Reregistering_Register_SM;
      break;
    
  }
  if (_L313) {
    outC->mobileRegistrationCmd.action = mra_register_RCM_Types_Pkg;
  }
  else {
    outC->mobileRegistrationCmd.action = mra_unregister_RCM_Types_Pkg;
  }
  /* 8 */ RisingEdge_digital((*eventsAndPhases).atPowerDown, &outC->Context_8);
  outC->memorizeTheLastRadioNetworkID = outC->Context_8.RE_Output;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->mobileRegistrationStatus,
    mobileRegistrationContext);
  outC->mobileRegistrationStatus.status = registrationStatus;
  outC->rejectOrderToContactRBC_or_RIU = registrationStatus !=
    mrs_registered_RCM_Types_Pkg;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

