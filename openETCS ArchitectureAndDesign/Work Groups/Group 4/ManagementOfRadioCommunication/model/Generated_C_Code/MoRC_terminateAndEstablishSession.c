/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_terminateAndEstablishSession.h"

void MoRC_terminateAndEstablishSession_init(
  MoRC_outC_terminateAndEstablishSession *outC)
{
  outC->init = kcg_true;
  outC->storedOrder.appliesAlsoToSleepingUnits = kcg_true;
  outC->storedOrder.actionToBePerformed = MoRC_morc_rbca_noAction;
  outC->storedOrder.telephoneNoOfTheRBC = 0;
  outC->storedOrder.rbc_id = 0;
  outC->storedOrder.valid = kcg_true;
  outC->SM1_state_nxt = MoRC_SSM_st_NoTerminationInProgress_SM1;
  outC->newOrderToEstablishASession_out.appliesAlsoToSleepingUnits = kcg_true;
  outC->newOrderToEstablishASession_out.actionToBePerformed =
    MoRC_morc_rbca_noAction;
  outC->newOrderToEstablishASession_out.telephoneNoOfTheRBC = 0;
  outC->newOrderToEstablishASession_out.rbc_id = 0;
  outC->newOrderToEstablishASession_out.valid = kcg_true;
  outC->initiateEstablishingNewSession = kcg_true;
  outC->initiateTermination = kcg_true;
}


void MoRC_terminateAndEstablishSession_reset(
  MoRC_outC_terminateAndEstablishSession *outC)
{
  outC->init = kcg_true;
}

/* terminateAndEstablishSession */
void MoRC_terminateAndEstablishSession(
  /* terminateAndEstablishSession::newOrderToEstablishASession_in */ MoRC_orderToContactAnRBC_Type *newOrderToEstablishASession_in,
  /* terminateAndEstablishSession::sessionStatus */ MoRC_sessionStatus_Type sessionStatus,
  /* terminateAndEstablishSession::OBU_hasToEstablishANewSession */ kcg_bool OBU_hasToEstablishANewSession,
  MoRC_outC_terminateAndEstablishSession *outC)
{
  /* terminateAndEstablishSession::SM1 */ MoRC_SSM_ST_SM1 SM1_state_sel;
  /* terminateAndEstablishSession::SM1 */ MoRC_SSM_ST_SM1 SM1_state_act;
  /* terminateAndEstablishSession::_L26 */ kcg_bool _L26;
  
  if ((*newOrderToEstablishASession_in).valid) {
    MoRC_kcg_copy_orderToContactAnRBC_Type(
      &outC->storedOrder,
      newOrderToEstablishASession_in);
  }
  else if (outC->init) {
    MoRC_kcg_copy_orderToContactAnRBC_Type(
      &outC->storedOrder,
      (MoRC_orderToContactAnRBC_Type *) &MoRC_cInvalidOrderToContactAnRBC);
  }
  if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = MoRC_SSM_st_NoTerminationInProgress_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  _L26 = sessionStatus != MoRC_morc_st_inactive;
  outC->initiateTermination = (*newOrderToEstablishASession_in).valid &&
    OBU_hasToEstablishANewSession &&
    (*newOrderToEstablishASession_in).actionToBePerformed ==
    MoRC_morc_rbca_establishSession && _L26;
  switch (SM1_state_sel) {
    case MoRC_SSM_st_NoTerminationInProgress_SM1 :
      if (outC->initiateTermination) {
        SM1_state_act = MoRC_SSM_st_TerminationInProgress_SM1;
      }
      else {
        SM1_state_act = MoRC_SSM_st_NoTerminationInProgress_SM1;
      }
      break;
    case MoRC_SSM_st_TerminationInProgress_SM1 :
      if (_L26) {
        SM1_state_act = MoRC_SSM_st_TerminationInProgress_SM1;
      }
      else {
        SM1_state_act = MoRC_SSM_st_EstablishNewSession_SM1;
      }
      break;
    case MoRC_SSM_st_EstablishNewSession_SM1 :
      SM1_state_act = MoRC_SSM_st_NoTerminationInProgress_SM1;
      break;
    
  }
  switch (SM1_state_act) {
    case MoRC_SSM_st_NoTerminationInProgress_SM1 :
      outC->initiateEstablishingNewSession = kcg_false;
      outC->SM1_state_nxt = MoRC_SSM_st_NoTerminationInProgress_SM1;
      MoRC_kcg_copy_orderToContactAnRBC_Type(
        &outC->newOrderToEstablishASession_out,
        newOrderToEstablishASession_in);
      break;
    case MoRC_SSM_st_TerminationInProgress_SM1 :
      outC->initiateEstablishingNewSession = kcg_false;
      outC->SM1_state_nxt = MoRC_SSM_st_TerminationInProgress_SM1;
      MoRC_kcg_copy_orderToContactAnRBC_Type(
        &outC->newOrderToEstablishASession_out,
        (MoRC_orderToContactAnRBC_Type *) &MoRC_cInvalidOrderToContactAnRBC);
      break;
    case MoRC_SSM_st_EstablishNewSession_SM1 :
      outC->initiateEstablishingNewSession = kcg_true;
      outC->SM1_state_nxt = MoRC_SSM_st_EstablishNewSession_SM1;
      MoRC_kcg_copy_orderToContactAnRBC_Type(
        &outC->newOrderToEstablishASession_out,
        &outC->storedOrder);
      break;
    
  }
}

/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_terminateAndEstablishSession.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

