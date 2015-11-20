/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "handOverSequencer_Handover_Pkg_handoverUtils_Pkg.h"

void handOverSequencer_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->init4 = kcg_true;
  /* 28 */ RisingEdge_reset_digital(&outC->Context_28);
  /* 26 */ RisingEdge_reset_digital(&outC->Context_26);
  /* 9 */ RisingEdge_reset_digital(&outC->Context_9);
  /* 8 */ RisingEdge_reset_digital(&outC->Context_8);
  /* 4 */ RisingEdge_reset_digital(&outC->Context_4);
  /* 5 */ RisingEdge_reset_digital(&outC->Context_5);
}

/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer */
void handOverSequencer_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_in */msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_in,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p131_transitionOrder */msgFromTrack_T_RCM_MsgTypes_Pkg *p131_transitionOrder,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_terminateCmd_from_handingOverRBC */msgFromTrack_T_RCM_MsgTypes_Pkg *p42_terminateCmd_from_handingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::morcStatusFromAcceptingRBC */morcStatus_T_RCM_Session_Types_Pkg *morcStatusFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::morcStatusFromHandingOverRBC */morcStatus_T_RCM_Session_Types_Pkg *morcStatusFromHandingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::maxSafeFrontEndPassesHandOverLocation */kcg_bool maxSafeFrontEndPassesHandOverLocation,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::minSafeReadEndPassesHandOverLocation */kcg_bool minSafeReadEndPassesHandOverLocation,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::mode */M_MODE mode,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sessionManagementAbility */abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC)
{
  static msgFromTrack_T_RCM_MsgTypes_Pkg tmp3;
  static msgFromTrack_T_RCM_MsgTypes_Pkg tmp2;
  static kcg_bool tmp1;
  static kcg_bool tmp;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static kcg_bool handOver_with_2_Sessions_SM_reset_sel_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_ST_handOver_with_2_Sessions_SM_IfBlock1 handOver_with_2_Sessions_SM_state_act_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCRegistered::handingOverRBCReregistered */
  static kcg_bool handingOverRBCReregistered_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::unregistered_or_noReregisterRequired */
  static kcg_bool unregistered_or_noReregisterRequired_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L28 */
  static kcg_bool _L28_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L25 */
  static kcg_bool _L25_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L26 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L26_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L21 */
  static kcg_bool _L21_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L18 */
  static kcg_bool _L18_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated::sessionWithHandingOverRBC_terminated */
  static kcg_bool sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTermi;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::terminationWithHandingOverRBCOrdered */
  static kcg_bool terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFro;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L3 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L26 */
  static kcg_bool _L26_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L27 */
  static P42_SessionManagement_T_Packet_Types_Pkg _L27_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished::sessionWithAcceptingRBCEstablished */
  static kcg_bool sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingR;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTransitionOrder::_L4 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static kcg_bool handOver_with_1_Session_SM_reset_sel_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_ST_handOver_with_1_Session_SM_IfBlock1 handOver_with_1_Session_SM_state_act_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p131_transitionOrder_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg last_p131_transitionOrder_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCRegistered::handingOverRBCReregistered */
  static kcg_bool handingOverRBCReregistered_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::unregistered_or_noReregisterRequired */
  static kcg_bool unregistered_or_noReregisterRequired_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L38 */
  static kcg_bool _L38_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L39 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L39_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L44 */
  static kcg_bool _L44_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L43 */
  static kcg_bool _L43_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L53 */
  static kcg_bool _L53_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCTerminated::sessionWithHandingOverRBC_terminated */
  static kcg_bool sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTermin;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::terminationWithHandingOverRBCOrdered */
  static kcg_bool terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFrom;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L3 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L3_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L28 */
  static kcg_bool _L28_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L29 */
  static P42_SessionManagement_T_Packet_Types_Pkg _L29_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::sessionWithAcceptingRBCEstablished */
  static kcg_bool sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRB;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageTwoSessions_Handover_Pkg;
  if (outC->init4) {
    tmp = kcg_false;
  }
  else {
    tmp = outC->handoverFinished;
  }
  if (tmp) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p131_transitionOrder_mem,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  }
  else if ((*p131_transitionOrder).valid) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p131_transitionOrder_mem,
      p131_transitionOrder);
  }
  else if (outC->init4) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p131_transitionOrder_mem,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  }
  outC->init4 = kcg_false;
  if (IfBlock1_clock) {
    if (outC->init3) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
      handOver_with_2_Sessions_SM_state_act_IfBlock1 =
        SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
      outC->init3 = kcg_false;
      handOver_with_2_Sessions_SM_reset_sel_IfBlock1 = kcg_false;
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
        &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
      handOver_with_2_Sessions_SM_state_act_IfBlock1 =
        outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
      handOver_with_2_Sessions_SM_reset_sel_IfBlock1 =
        outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
    }
    switch (handOver_with_2_Sessions_SM_state_act_IfBlock1) {
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM :
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingRBC = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_true;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        handingOverRBCReregistered_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered =
          mrs_registered_RCM_Types_Pkg ==
          (*morcStatusFromHandingOverRBC).registration.status;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        if ((*p131_transitionOrder).valid) {
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
          outC->handoverFinished = kcg_false;
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            handingOverRBCReregistered_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
          if (handingOverRBCReregistered_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered) {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
          }
          else {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM;
          }
          if (handingOverRBCReregistered_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered) {
            outC->handoverFinished = kcg_true;
            outC->notReady = kcg_true;
          }
          else {
            outC->handoverFinished = kcg_false;
            outC->notReady = kcg_false;
          }
        }
        break;
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        outC->handoverFinished = kcg_false;
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingRBC = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_true;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        /* 2 */
        Read_P045_TM(
          &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets,
          &_L25_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC,
          &_L26_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC);
        _L21_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          mrs_registered_RCM_Types_Pkg ==
          (*morcStatusFromHandingOverRBC).registration.status;
        _L18_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          (*morcStatusFromHandingOverRBC).registration.status ==
          mrs_unregistered_RCM_Types_Pkg;
        _L28_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.valid &
          _L25_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC &
          (((_L26_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC.nid_mn !=
                (*morcStatusFromHandingOverRBC).registration.nid_mn) &
              _L21_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC) |
            _L18_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC);
        unregistered_or_noReregisterRequired_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          (!_L28_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC &
            _L21_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC) |
          (_L28_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC &
            _L18_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        if (handOver_with_2_Sessions_SM_reset_sel_IfBlock1) {
          outC->init2 = kcg_true;
        }
        if (outC->init2) {
          outC->init2 = kcg_false;
          tmp1 = kcg_true;
        }
        else {
          tmp1 = kcg_false;
        }
        if (_L28_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC &
          tmp1) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
            &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
            (msgFromTrack_T_RCM_MsgTypes_Pkg *)
              &cNoMessageFromTrack_Handover_Pkg);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        if ((*p131_transitionOrder).valid) {
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            unregistered_or_noReregisterRequired_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
          if (unregistered_or_noReregisterRequired_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC) {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM;
          }
          else {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM;
          }
          if (unregistered_or_noReregisterRequired_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
        }
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM :
        outC->handoverFinished = kcg_false;
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingRBC = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_true;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTermi =
          ((*morcStatusFromHandingOverRBC).connection.status ==
            mcs_disconnected_RCM_Types_Pkg) &
          ((*morcStatusFromHandingOverRBC).session.phase ==
            sp_terminated_RCM_Session_Types_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        if ((*p131_transitionOrder).valid) {
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTermi;
          if (sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTermi) {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM;
          }
          else {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM;
          }
          if (sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTermi) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
        }
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        outC->handoverFinished = kcg_false;
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingRBC = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_true;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        /* 3 */
        checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
          p42_terminateCmd_from_handingOverRBC,
          morcStatusFromHandingOverRBC,
          &_L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC);
        /* 1 */
        Read_P042_TM(
          &_L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC.packets,
          &_L26_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC,
          &_L27_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC);
        terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFro =
          _L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC.valid &
          _L26_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC &
          (_L27_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC.q_rbc ==
            Q_RBC_Terminate_communication_session);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        if (terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFro) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p42_sessionCmd_for_handingOverRBC,
            &_L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p42_sessionCmd_for_handingOverRBC,
            (msgFromTrack_T_RCM_MsgTypes_Pkg *)
              &cNoMessageFromTrack_Handover_Pkg);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        if ((*p131_transitionOrder).valid) {
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFro;
          if (terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFro) {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM;
          }
          else {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM;
          }
          if (terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFro) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
        }
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM :
        outC->handoverFinished = kcg_false;
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingRBC = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingR =
          (*morcStatusFromAcceptingRBC).session.phase ==
          sp_maintaining_RCM_Session_Types_Pkg;
        outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
          sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingR;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->sendTrainData_2_acceptingRBC =
          sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingR &
          !((M_MODE_Sleeping == mode) | (mode == M_MODE_Non_Leading));
        if (sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingR) {
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM;
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM;
          outC->notReady = kcg_false;
        }
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        outC->handoverFinished = kcg_false;
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingRBC = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_true;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        if (handOver_with_2_Sessions_SM_reset_sel_IfBlock1) {
          /* 8 */ RisingEdge_reset_digital(&outC->Context_8);
          /* 9 */ RisingEdge_reset_digital(&outC->Context_9);
        }
        /* 8 */
        RisingEdge_digital(
          (kcg_bool)
            (((*morcStatusFromHandingOverRBC).session.phase ==
                sp_maintaining_RCM_Session_Types_Pkg) &
              minSafeReadEndPassesHandOverLocation),
          &outC->Context_8);
        /* 9 */
        RisingEdge_digital(
          (kcg_bool)
            (minSafeReadEndPassesHandOverLocation &
              ((*morcStatusFromAcceptingRBC).session.phase ==
                sp_maintaining_RCM_Session_Types_Pkg)),
          &outC->Context_9);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->sendPositionReport_2_handingOverRBC = outC->Context_8.RE_Output;
        outC->sendPositionReport_2_acceptingRBC = outC->Context_9.RE_Output;
        if ((*p131_transitionOrder).valid) {
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            outC->Context_8.RE_Output;
          if (outC->Context_8.RE_Output) {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM;
          }
          else {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM;
          }
          if (outC->Context_8.RE_Output) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
        }
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        outC->handoverFinished = kcg_false;
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingRBC = kcg_true;
        outC->useInformationFromAcceptingRBC = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        if (handOver_with_2_Sessions_SM_reset_sel_IfBlock1) {
          /* 5 */ RisingEdge_reset_digital(&outC->Context_5);
          /* 4 */ RisingEdge_reset_digital(&outC->Context_4);
        }
        /* 5 */
        RisingEdge_digital(
          (kcg_bool)
            (((*morcStatusFromHandingOverRBC).session.phase ==
                sp_maintaining_RCM_Session_Types_Pkg) &
              maxSafeFrontEndPassesHandOverLocation),
          &outC->Context_5);
        /* 4 */
        RisingEdge_digital(
          (kcg_bool)
            (maxSafeFrontEndPassesHandOverLocation &
              ((*morcStatusFromAcceptingRBC).session.phase ==
                sp_maintaining_RCM_Session_Types_Pkg)),
          &outC->Context_4);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->sendPositionReport_2_handingOverRBC = outC->Context_5.RE_Output;
        outC->sendPositionReport_2_acceptingRBC = outC->Context_4.RE_Output;
        if ((*p131_transitionOrder).valid) {
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            outC->Context_5.RE_Output;
          if (outC->Context_5.RE_Output) {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM;
          }
          else {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM;
          }
          if (outC->Context_5.RE_Output) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
        }
        break;
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM :
        if ((*p45_radioNetworkRegistrationOrder_in).valid) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
            p45_radioNetworkRegistrationOrder_in);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
            &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        }
        /* 2 */
        p131_rbcTransitionOrder_2_p42_establishSession_Handover_Pkg_handoverUtils_Pkg(
          &outC->p131_transitionOrder_mem,
          &tmp3);
        /* 2 */
        checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
          &tmp3,
          morcStatusFromAcceptingRBC,
          &_L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder);
        outC->handoverFinished = kcg_false;
        outC->bufferInformationFromAcceptingRBC = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
          _L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder.valid;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          &_L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->handoverInprogress =
          _L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder.valid;
        if (_L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder.valid) {
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM;
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
          outC->notReady = kcg_false;
        }
        break;
      
    }
  }
  else {
    outC->bufferInformationFromAcceptingRBC = kcg_false;
    outC->useInformationFromAcceptingRBC = kcg_false;
    if (outC->init1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &last_p131_transitionOrder_loc_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
      handOver_with_1_Session_SM_state_act_IfBlock1 =
        SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
      outC->init1 = kcg_false;
      handOver_with_1_Session_SM_reset_sel_IfBlock1 = kcg_false;
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
        &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &last_p131_transitionOrder_loc_IfBlock1,
        &outC->p131_transitionOrder_loc_IfBlock1);
      handOver_with_1_Session_SM_state_act_IfBlock1 =
        outC->handOver_with_1_Session_SM_state_nxt_IfBlock1;
      handOver_with_1_Session_SM_reset_sel_IfBlock1 =
        outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1;
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionCmd_for_acceptingRBC,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    switch (handOver_with_1_Session_SM_state_act_IfBlock1) {
      case SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        /* 8 */
        p131_rbcTransitionOrder_2_p42_establishSession_Handover_Pkg_handoverUtils_Pkg(
          &last_p131_transitionOrder_loc_IfBlock1,
          &tmp2);
        /* 12 */
        checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
          &tmp2,
          morcStatusFromHandingOverRBC,
          &outC->p42_sessionCmd_for_handingOverRBC);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->handoverFinished = kcg_false;
        outC->handoverInprogress = kcg_true;
        if ((*p131_transitionOrder).valid) {
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM;
          outC->notReady = kcg_true;
        }
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM :
        handingOverRBCReregistered_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered =
          mrs_registered_RCM_Types_Pkg ==
          (*morcStatusFromHandingOverRBC).registration.status;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->handoverFinished = kcg_false;
        outC->handoverInprogress = kcg_true;
        if ((*p131_transitionOrder).valid) {
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            handingOverRBCReregistered_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
          if (handingOverRBCReregistered_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered) {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM;
          }
          else {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM;
          }
          if (handingOverRBCReregistered_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
        }
        break;
      case SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        /* 1 */
        Read_P045_TM(
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets,
          &_L38_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC,
          &_L39_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC);
        _L43_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          mrs_registered_RCM_Types_Pkg ==
          (*morcStatusFromHandingOverRBC).registration.status;
        _L44_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          (*morcStatusFromHandingOverRBC).registration.status ==
          mrs_unregistered_RCM_Types_Pkg;
        _L53_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.valid &
          _L38_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC &
          (((_L39_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC.nid_mn !=
                (*morcStatusFromHandingOverRBC).registration.nid_mn) &
              _L43_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC) |
            _L44_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC);
        unregistered_or_noReregisterRequired_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          (!_L53_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC &
            _L43_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC) |
          (_L53_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC &
            _L44_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        if (handOver_with_1_Session_SM_reset_sel_IfBlock1) {
          outC->init = kcg_true;
        }
        if (outC->init) {
          tmp = kcg_true;
        }
        else {
          tmp = kcg_false;
        }
        if (_L53_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC &
          tmp) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
            &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
            (msgFromTrack_T_RCM_MsgTypes_Pkg *)
              &cNoMessageFromTrack_Handover_Pkg);
        }
        outC->init = kcg_false;
        outC->handoverFinished = kcg_false;
        outC->handoverInprogress = kcg_true;
        if ((*p131_transitionOrder).valid) {
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            unregistered_or_noReregisterRequired_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
          if (unregistered_or_noReregisterRequired_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC) {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM;
          }
          else {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM;
          }
          if (unregistered_or_noReregisterRequired_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
        }
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM :
        sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTermin =
          (*morcStatusFromHandingOverRBC).session.phase ==
          sp_terminated_RCM_Session_Types_Pkg;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->handoverFinished = kcg_false;
        outC->handoverInprogress = kcg_true;
        if ((*p131_transitionOrder).valid) {
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTermin;
          if (sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTermin) {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM;
          }
          else {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM;
          }
          if (sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTermin) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
        }
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM :
        /* 11 */
        checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
          p42_terminateCmd_from_handingOverRBC,
          morcStatusFromHandingOverRBC,
          &_L3_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC);
        /* 2 */
        Read_P042_TM(
          &_L3_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC.packets,
          &_L28_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC,
          &_L29_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC);
        terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFrom =
          _L3_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC.valid &
          _L28_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC &
          (_L29_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC.q_rbc ==
            Q_RBC_Terminate_communication_session);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        if (terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFrom) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p42_sessionCmd_for_handingOverRBC,
            &_L3_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p42_sessionCmd_for_handingOverRBC,
            (msgFromTrack_T_RCM_MsgTypes_Pkg *)
              &cNoMessageFromTrack_Handover_Pkg);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->handoverFinished = kcg_false;
        outC->handoverInprogress =
          terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFrom;
        if ((*p131_transitionOrder).valid) {
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFrom;
          if (terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFrom) {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM;
          }
          else {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM;
          }
          if (terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFrom) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
        }
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM :
        sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRB =
          (*morcStatusFromHandingOverRBC).session.phase ==
          sp_maintaining_RCM_Session_Types_Pkg;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->sendPositionReport_2_acceptingRBC =
          sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRB;
        outC->sendTrainData_2_acceptingRBC =
          sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRB &
          !((M_MODE_Sleeping == mode) | (mode == M_MODE_Non_Leading));
        outC->handoverInprogress = kcg_true;
        if ((*p131_transitionOrder).valid) {
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
          outC->handoverFinished = kcg_false;
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRB;
          if (sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRB) {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
          }
          else {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM;
          }
          if (sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRB) {
            outC->handoverFinished = kcg_true;
            outC->notReady = kcg_true;
          }
          else {
            outC->handoverFinished = kcg_false;
            outC->notReady = kcg_false;
          }
        }
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM :
        if (handOver_with_1_Session_SM_reset_sel_IfBlock1) {
          /* 28 */ RisingEdge_reset_digital(&outC->Context_28);
        }
        /* 28 */
        RisingEdge_digital(
          (kcg_bool)
            (((*morcStatusFromHandingOverRBC).session.phase ==
                sp_maintaining_RCM_Session_Types_Pkg) &
              minSafeReadEndPassesHandOverLocation),
          &outC->Context_28);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->sendPositionReport_2_handingOverRBC = outC->Context_28.RE_Output;
        outC->handoverFinished = kcg_false;
        outC->handoverInprogress = kcg_true;
        if ((*p131_transitionOrder).valid) {
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            outC->Context_28.RE_Output;
          if (outC->Context_28.RE_Output) {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM;
          }
          else {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM;
          }
          if (outC->Context_28.RE_Output) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
        }
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM :
        if (handOver_with_1_Session_SM_reset_sel_IfBlock1) {
          /* 26 */ RisingEdge_reset_digital(&outC->Context_26);
        }
        /* 26 */
        RisingEdge_digital(
          (kcg_bool)
            (((*morcStatusFromHandingOverRBC).session.phase ==
                sp_maintaining_RCM_Session_Types_Pkg) &
              maxSafeFrontEndPassesHandOverLocation),
          &outC->Context_26);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->sendPositionReport_2_handingOverRBC = outC->Context_26.RE_Output;
        outC->handoverFinished = kcg_false;
        outC->handoverInprogress = kcg_true;
        if ((*p131_transitionOrder).valid) {
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            outC->Context_26.RE_Output;
          if (outC->Context_26.RE_Output) {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM;
          }
          else {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM;
          }
          if (outC->Context_26.RE_Output) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
        }
        break;
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM :
        outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
          outC->p131_transitionOrder_mem.valid;
        if ((*p45_radioNetworkRegistrationOrder_in).valid) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
            p45_radioNetworkRegistrationOrder_in);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
            &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        }
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          p45_radioNetworkRegistrationOrder_in);
        outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.valid =
          !outC->p131_transitionOrder_mem.valid &
          (*p45_radioNetworkRegistrationOrder_in).valid;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->handoverFinished = kcg_false;
        outC->handoverInprogress = kcg_false;
        if (outC->p131_transitionOrder_mem.valid) {
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM;
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p131_transitionOrder_loc_IfBlock1,
            &outC->p131_transitionOrder_mem);
          outC->notReady = kcg_true;
        }
        else {
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p131_transitionOrder_loc_IfBlock1,
            &last_p131_transitionOrder_loc_IfBlock1);
          outC->notReady = kcg_false;
        }
        break;
      
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** handOverSequencer_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

