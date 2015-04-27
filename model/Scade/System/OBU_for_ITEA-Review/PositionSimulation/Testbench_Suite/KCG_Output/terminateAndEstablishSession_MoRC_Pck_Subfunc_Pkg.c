/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg.h"

void terminateAndEstablishSession_init_MoRC_Pck_Subfunc_Pkg(
  outC_terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->storedOrder.nid_radio = 0;
  outC->storedOrder.nid_rbc = 0;
  outC->storedOrder.nid_c = 0;
  outC->storedOrder.q_rbc = Q_RBC_Terminate_communication_session;
  outC->storedOrder.q_dir = Q_DIR_Reverse;
  outC->storedOrder.source = msrc_undefined_Common_Types_Pkg;
  outC->storedOrder.establishOrderDoesNotRequestToContactAnAcceptingRBC =
    kcg_true;
  outC->storedOrder.useTheShortNumberStoredOnboard = kcg_true;
  outC->storedOrder.contactLastKnownRBC = kcg_true;
  outC->storedOrder.terminate = kcg_true;
  outC->storedOrder.establish = kcg_true;
  outC->SM1_state_nxt = SSM_st_NoTerminationInProgress_SM1;
  outC->newOrderToEstablishASession_out.nid_radio = 0;
  outC->newOrderToEstablishASession_out.nid_rbc = 0;
  outC->newOrderToEstablishASession_out.nid_c = 0;
  outC->newOrderToEstablishASession_out.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->newOrderToEstablishASession_out.q_dir = Q_DIR_Reverse;
  outC->newOrderToEstablishASession_out.source =
    msrc_undefined_Common_Types_Pkg;
  outC->newOrderToEstablishASession_out.establishOrderDoesNotRequestToContactAnAcceptingRBC =
    kcg_true;
  outC->newOrderToEstablishASession_out.useTheShortNumberStoredOnboard =
    kcg_true;
  outC->newOrderToEstablishASession_out.contactLastKnownRBC = kcg_true;
  outC->newOrderToEstablishASession_out.terminate = kcg_true;
  outC->newOrderToEstablishASession_out.establish = kcg_true;
  outC->initiateEstablishingNewSession = kcg_true;
  outC->initiateTermination = kcg_true;
}


void terminateAndEstablishSession_reset_MoRC_Pck_Subfunc_Pkg(
  outC_terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
}

/* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession */
void terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::newOrderToEstablishASession_in */ p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *newOrderToEstablishASession_in,
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::sessionStatus */ sessionStatus_Type_Radio_Types_Pkg sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::OBU_hasToEstablishANewSession */ kcg_bool OBU_hasToEstablishANewSession,
  outC_terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::SM1 */ _15_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::SM1 */ _15_SSM_ST_SM1 SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::_L26 */ kcg_bool _L26;
  
  if ((*newOrderToEstablishASession_in).establish |
    (*newOrderToEstablishASession_in).terminate) {
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
      &outC->storedOrder,
      newOrderToEstablishASession_in);
  }
  else if (outC->init) {
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
      &outC->storedOrder,
      (p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *)
        &cInvalidOrder_MoRC_Pck_Coder_Pkg);
  }
  if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = SSM_st_NoTerminationInProgress_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  _L26 = sessionStatus != morc_st_inactive_Radio_Types_Pkg;
  outC->initiateTermination = (*newOrderToEstablishASession_in).terminate &
    OBU_hasToEstablishANewSession & _L26;
  switch (SM1_state_sel) {
    case SSM_st_NoTerminationInProgress_SM1 :
      if (outC->initiateTermination) {
        SM1_state_act = SSM_st_TerminationInProgress_SM1;
      }
      else {
        SM1_state_act = SSM_st_NoTerminationInProgress_SM1;
      }
      break;
    case SSM_st_TerminationInProgress_SM1 :
      if (_L26) {
        SM1_state_act = SSM_st_TerminationInProgress_SM1;
      }
      else {
        SM1_state_act = SSM_st_EstablishNewSession_SM1;
      }
      break;
    case SSM_st_EstablishNewSession_SM1 :
      SM1_state_act = SSM_st_NoTerminationInProgress_SM1;
      break;
    
  }
  switch (SM1_state_act) {
    case SSM_st_NoTerminationInProgress_SM1 :
      outC->initiateEstablishingNewSession = kcg_false;
      outC->SM1_state_nxt = SSM_st_NoTerminationInProgress_SM1;
      kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
        &outC->newOrderToEstablishASession_out,
        newOrderToEstablishASession_in);
      break;
    case SSM_st_TerminationInProgress_SM1 :
      outC->initiateEstablishingNewSession = kcg_false;
      outC->SM1_state_nxt = SSM_st_TerminationInProgress_SM1;
      kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
        &outC->newOrderToEstablishASession_out,
        (p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *)
          &cInvalidOrder_MoRC_Pck_Coder_Pkg);
      break;
    case SSM_st_EstablishNewSession_SM1 :
      outC->initiateEstablishingNewSession = kcg_true;
      outC->SM1_state_nxt = SSM_st_EstablishNewSession_SM1;
      kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
        &outC->newOrderToEstablishASession_out,
        &outC->storedOrder);
      break;
    
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

