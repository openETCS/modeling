/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeMsgToBus_RCM_Utils_Pkg_encoders.h"

void mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC)
{
  outC->init = kcg_true;
}

/* RCM_Utils_Pkg::encoders::mergeMsgToBus */
void mergeMsgToBus_RCM_Utils_Pkg_encoders(
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::request */kcg_bool request,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::messageAvailable */kcg_bool messageAvailable,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::message */M_TrainTrack_Message_T_TM_radio_messages *message,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::messageBus_in */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *messageBus_in,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC)
{
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1::notRequested */
  static kcg_bool br_1_guard_SM1_notRequested;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static _1_SSM_ST_SM1 SM1_state_sel;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static _1_SSM_ST_SM1 SM1_state_act;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::_L5 */
  static kcg_int _L5;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::_L9 */
  static kcg_bool _L9;
  
  if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = SSM_st_notRequested_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  /* 1 */
  CheckSpace_TM_TrainTrack_Bus(
    messageBus_in,
    &br_1_guard_SM1_notRequested,
    &_L5);
  switch (SM1_state_sel) {
    case SSM_st_requested_SM1 :
      if (messageAvailable) {
        _L9 = kcg_true;
        SM1_state_act = SSM_st_notRequested_SM1;
      }
      else {
        _L9 = kcg_false;
        SM1_state_act = SSM_st_requested_SM1;
      }
      break;
    case SSM_st_notRequested_SM1 :
      br_1_guard_SM1_notRequested = request & messageAvailable;
      if (br_1_guard_SM1_notRequested) {
        _L9 = kcg_true;
        SM1_state_act = SSM_st_notRequested_SM1;
      }
      else {
        _L9 = kcg_false;
        if (request) {
          SM1_state_act = SSM_st_requested_SM1;
        }
        else {
          SM1_state_act = SSM_st_notRequested_SM1;
        }
      }
      break;
    
  }
  if (_L9) {
    /* 1 */
    MergeMessageToBus_TM_TrainTrack_Bus(
      message,
      _L5,
      messageBus_in,
      t_train_global,
      &outC->messageBus_out,
      &outC->t_train_assigned);
  }
  else {
    outC->t_train_assigned = t_train_global;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->messageBus_out,
      messageBus_in);
  }
  switch (SM1_state_act) {
    case SSM_st_notRequested_SM1 :
      outC->SM1_state_nxt = SSM_st_notRequested_SM1;
      break;
    case SSM_st_requested_SM1 :
      outC->SM1_state_nxt = SSM_st_requested_SM1;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** mergeMsgToBus_RCM_Utils_Pkg_encoders.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

