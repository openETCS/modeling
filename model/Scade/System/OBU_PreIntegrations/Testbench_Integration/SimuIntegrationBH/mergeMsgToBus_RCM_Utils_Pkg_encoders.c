/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeMsgToBus_RCM_Utils_Pkg_encoders.h"

#ifndef KCG_USER_DEFINED_INIT
void mergeMsgToBus_init_RCM_Utils_Pkg_encoders(
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = SSM_st_notRequested_SM1;
  outC->t_train_assigned = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->messageBus_out[i1].Message.valid = kcg_true;
    outC->messageBus_out[i1].Message.nid_message = 0;
    outC->messageBus_out[i1].Message.l_message = 0;
    outC->messageBus_out[i1].Message.t_train = 0;
    outC->messageBus_out[i1].Message.nid_engine = 0;
    outC->messageBus_out[i1].Message.field1 = 0;
    outC->messageBus_out[i1].Message.field2 = 0;
    outC->messageBus_out[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->messageBus_out[i1].OptionalPackets[i] = 0;
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RCM_Utils_Pkg::encoders::mergeMsgToBus */
void mergeMsgToBus_RCM_Utils_Pkg_encoders(
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::request */ kcg_bool request,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::messageAvailable */ kcg_bool messageAvailable,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::message */ M_TrainTrack_Message_T_TM_radio_messages *message,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::messageBus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *messageBus_in,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC)
{
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus */
  static kcg_int op_call;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _1_op_call;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static _19_SSM_TR_SM1 _4_SM1_fired;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static kcg_bool _3_SM1_reset_nxt;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static _17_SSM_ST_SM1 _2_SM1_state_nxt;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static _19_SSM_TR_SM1 SM1_fired;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static kcg_bool SM1_reset_nxt;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static _17_SSM_ST_SM1 SM1_state_nxt;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static _19_SSM_TR_SM1 _7_SM1_fired_strong;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static kcg_bool _6_SM1_reset_act;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static _17_SSM_ST_SM1 _5_SM1_state_act;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1::notRequested */
  static kcg_bool br_2_guard_SM1_notRequested;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1::notRequested */
  static kcg_bool br_1_guard_SM1_notRequested;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1::notRequested */
  static kcg_bool br_1_clock_SM1_notRequested;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static _19_SSM_TR_SM1 SM1_fired_strong;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static kcg_bool SM1_reset_act;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static _17_SSM_ST_SM1 SM1_state_act;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1::requested */
  static kcg_bool br_1_guard_SM1_requested;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1::requested */
  static kcg_bool br_1_clock_SM1_requested;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus */
  static kcg_bool ck_every;
  static kcg_bool noname;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::sMergeMsg */
  static kcg_bool sMergeMsg;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static _17_SSM_ST_SM1 SM1_state_sel;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static _17_SSM_ST_SM1 _10_SM1_state_act;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static kcg_bool SM1_reset_sel;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static kcg_bool SM1_reset_prv;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static _19_SSM_TR_SM1 _9_SM1_fired_strong;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static _19_SSM_TR_SM1 _8_SM1_fired;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::_L2 */
  static kcg_int _L2;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::_L1 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L1;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::_L3 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L3;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::_L5 */
  static kcg_int _L5;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::_L4 */
  static kcg_bool _L4;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::_L6 */
  static M_TrainTrack_Message_T_TM_radio_messages _L6;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::_L7 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L7;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::_L9 */
  static kcg_bool _L9;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::_L12 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L12;
  
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = SSM_st_notRequested_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_notRequested_SM1 :
      br_1_guard_SM1_notRequested = request & messageAvailable;
      br_1_clock_SM1_notRequested = br_1_guard_SM1_notRequested;
      /* cb_anon_sm */ if (br_1_clock_SM1_notRequested) {
        sMergeMsg = kcg_true;
      }
      else {
        sMergeMsg = kcg_false;
      }
      break;
    case SSM_st_requested_SM1 :
      br_1_guard_SM1_requested = messageAvailable;
      br_1_clock_SM1_requested = br_1_guard_SM1_requested;
      /* cb_anon_sm */ if (br_1_clock_SM1_requested) {
        sMergeMsg = kcg_true;
      }
      else {
        sMergeMsg = kcg_false;
      }
      break;
    
  }
  _L9 = sMergeMsg;
  ck_every = _L9;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L6, message);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L3, messageBus_in);
  /* 1 */ CheckSpace_TM_TrainTrack_Bus(&_L3, &_L4, &_L5);
  _L7 = t_train_global;
  /* ck_mergeMsgToBus */ if (ck_every) {
    /* 1 */
    MergeMessageToBus_TM_TrainTrack_Bus(
      &_L6,
      _L5,
      &_L3,
      _L7,
      &_1_op_call,
      &op_call);
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
    case SSM_st_notRequested_SM1 :
      br_2_guard_SM1_notRequested = request;
      if (br_1_guard_SM1_notRequested) {
        _5_SM1_state_act = SSM_st_notRequested_SM1;
      }
      else if (br_2_guard_SM1_notRequested) {
        _5_SM1_state_act = SSM_st_requested_SM1;
      }
      else {
        _5_SM1_state_act = SSM_st_notRequested_SM1;
      }
      _10_SM1_state_act = _5_SM1_state_act;
      if (br_1_guard_SM1_notRequested) {
        _6_SM1_reset_act = kcg_true;
      }
      else {
        _6_SM1_reset_act = br_2_guard_SM1_notRequested;
      }
      outC->SM1_reset_act = _6_SM1_reset_act;
      if (br_1_guard_SM1_notRequested) {
        _7_SM1_fired_strong = SSM_TR_notRequested_1_SM1;
      }
      else if (br_2_guard_SM1_notRequested) {
        _7_SM1_fired_strong = SSM_TR_notRequested_2_SM1;
      }
      else {
        _7_SM1_fired_strong = _18_SSM_TR_no_trans_SM1;
      }
      _9_SM1_fired_strong = _7_SM1_fired_strong;
      break;
    case SSM_st_requested_SM1 :
      if (br_1_guard_SM1_requested) {
        SM1_state_act = SSM_st_notRequested_SM1;
      }
      else {
        SM1_state_act = SSM_st_requested_SM1;
      }
      _10_SM1_state_act = SM1_state_act;
      SM1_reset_act = br_1_guard_SM1_requested;
      outC->SM1_reset_act = SM1_reset_act;
      if (br_1_guard_SM1_requested) {
        SM1_fired_strong = SSM_TR_requested_1_SM1;
      }
      else {
        SM1_fired_strong = _18_SSM_TR_no_trans_SM1;
      }
      _9_SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  /* act_SM1 */ switch (_10_SM1_state_act) {
    case SSM_st_notRequested_SM1 :
      _2_SM1_state_nxt = SSM_st_notRequested_SM1;
      outC->SM1_state_nxt = _2_SM1_state_nxt;
      _3_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _3_SM1_reset_nxt;
      _4_SM1_fired = _9_SM1_fired_strong;
      _8_SM1_fired = _4_SM1_fired;
      break;
    case SSM_st_requested_SM1 :
      SM1_state_nxt = SSM_st_requested_SM1;
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      SM1_fired = _9_SM1_fired_strong;
      _8_SM1_fired = SM1_fired;
      break;
    
  }
  /* ck_mergeMsgToBus */ if (ck_every) {
    _L2 = op_call;
  }
  else {
    _L2 = _L7;
  }
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L12, messageBus_in);
  /* ck_mergeMsgToBus */ if (ck_every) {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L1, &_1_op_call);
  }
  else {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L1, &_L12);
  }
  noname = _L4;
  outC->t_train_assigned = _L2;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->messageBus_out,
    &_L1);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mergeMsgToBus_RCM_Utils_Pkg_encoders.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

