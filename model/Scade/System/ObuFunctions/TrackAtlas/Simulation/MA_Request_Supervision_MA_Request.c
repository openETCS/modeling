/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Request_Supervision_MA_Request.h"

void MA_Request_Supervision_reset_MA_Request(
  outC_MA_Request_Supervision_MA_Request *outC)
{
  outC->init = kcg_true;
  /* op_3_8_2_3_a */ op_3_8_2_3_a_reset_MA_Request(&outC->Context_op_3_8_2_3_a);
  /* op_3_8_2_3_b */ op_3_8_2_3_b_reset_MA_Request(&outC->Context_op_3_8_2_3_b);
  /* 1 */ op_RepeatReq_reset_MA_Request(&outC->Context_1);
}

/* MA_Request::MA_Request_Supervision */
void MA_Request_Supervision_MA_Request(
  /* MA_Request::MA_Request_Supervision::ma_RequestParams */P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *ma_RequestParams,
  /* MA_Request::MA_Request_Supervision::ma_received */kcg_bool ma_received,
  /* MA_Request::MA_Request_Supervision::in_triggerMA */kcg_bool in_triggerMA,
  /* MA_Request::MA_Request_Supervision::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* MA_Request::MA_Request_Supervision::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* MA_Request::MA_Request_Supervision::preindicationLocation */L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* MA_Request::MA_Request_Supervision::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* MA_Request::MA_Request_Supervision::MAs */MovementAuthority_t_TrackAtlasTypes *MAs,
  /* MA_Request::MA_Request_Supervision::fromDriver */Driver2MAR_T_MA_Request *fromDriver,
  /* MA_Request::MA_Request_Supervision::trackDescrDeleted */kcg_bool trackDescrDeleted,
  outC_MA_Request_Supervision_MA_Request *outC)
{
  kcg_bool tmp1;
  kcg_bool tmp;
  kcg_bool tmp3;
  kcg_bool tmp2;
  /* MA_Request::MA_Request_Supervision::SM1 */ SSM_TR_SM1 _11_SM1_fired;
  /* MA_Request::MA_Request_Supervision::SM1 */ kcg_bool _10_SM1_reset_nxt;
  /* MA_Request::MA_Request_Supervision::SM1 */ SSM_ST_SM1 _9_SM1_state_nxt;
  /* MA_Request::MA_Request_Supervision::pendingReq */ kcg_bool _8_pendingReq;
  /* MA_Request::MA_Request_Supervision::SM1 */ SSM_TR_SM1 _7_SM1_fired;
  /* MA_Request::MA_Request_Supervision::SM1 */ kcg_bool _6_SM1_reset_nxt;
  /* MA_Request::MA_Request_Supervision::SM1 */ SSM_ST_SM1 _5_SM1_state_nxt;
  /* MA_Request::MA_Request_Supervision::pendingReq */ kcg_bool _4_pendingReq;
  /* MA_Request::MA_Request_Supervision::SM1 */ SSM_TR_SM1 SM1_fired;
  /* MA_Request::MA_Request_Supervision::SM1 */ kcg_bool SM1_reset_nxt;
  /* MA_Request::MA_Request_Supervision::SM1 */ SSM_ST_SM1 SM1_state_nxt;
  /* MA_Request::MA_Request_Supervision::pendingReq */ kcg_bool pendingReq;
  /* MA_Request::MA_Request_Supervision::SM1 */ SSM_TR_SM1 _17_SM1_fired_strong;
  /* MA_Request::MA_Request_Supervision::SM1 */ kcg_bool _16_SM1_reset_act;
  /* MA_Request::MA_Request_Supervision::SM1 */ SSM_ST_SM1 _15_SM1_state_act;
  /* MA_Request::MA_Request_Supervision::SM1::init */ kcg_bool br_1_guard_SM1_init;
  /* MA_Request::MA_Request_Supervision::SM1 */ SSM_TR_SM1 _14_SM1_fired_strong;
  /* MA_Request::MA_Request_Supervision::SM1 */ kcg_bool _13_SM1_reset_act;
  /* MA_Request::MA_Request_Supervision::SM1 */ SSM_ST_SM1 _12_SM1_state_act;
  /* MA_Request::MA_Request_Supervision::SM1::NoReqPending */ kcg_bool br_1_guard_SM1_NoReqPending;
  /* MA_Request::MA_Request_Supervision::SM1 */ SSM_TR_SM1 SM1_fired_strong;
  /* MA_Request::MA_Request_Supervision::SM1 */ kcg_bool SM1_reset_act;
  /* MA_Request::MA_Request_Supervision::SM1 */ SSM_ST_SM1 SM1_state_act;
  /* MA_Request::MA_Request_Supervision::SM1::ReqPending */ kcg_bool br_1_guard_SM1_ReqPending;
  kcg_bool noname;
  /* MA_Request::MA_Request_Supervision::pendingReq */ kcg_bool last_pendingReq;
  /* MA_Request::MA_Request_Supervision::triggerMA */ kcg_bool last_triggerMA;
  /* MA_Request::MA_Request_Supervision::in_triggerMA */ kcg_bool last_in_triggerMA;
  /* MA_Request::MA_Request_Supervision::SM1 */ kcg_bool SM1_reset_sel;
  /* MA_Request::MA_Request_Supervision::SM1 */ kcg_bool SM1_reset_prv;
  
  kcg_copy_Driver2MAR_T_MA_Request(&outC->_L67, fromDriver);
  outC->_L72 = outC->_L67.driverSelectsStart;
  if (outC->init) {
    last_pendingReq = kcg_false;
  }
  else {
    last_pendingReq = outC->pendingReq;
  }
  if (outC->init) {
    last_triggerMA = kcg_false;
  }
  else {
    last_triggerMA = outC->triggerMA;
  }
  if (outC->init) {
    last_in_triggerMA = kcg_false;
  }
  else {
    last_in_triggerMA = outC->rem_in_triggerMA;
  }
  outC->_L71 = outC->_L67.trackAheadFree;
  outC->_L68 = trackDescrDeleted;
  outC->_L66 = in_triggerMA;
  outC->_L61 = ma_received;
  noname = outC->_L61;
  if (outC->init) {
    outC->SM1_state_sel = SSM_st_init_SM1;
  }
  else {
    outC->SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_init_SM1 :
      br_1_guard_SM1_init = kcg_true;
      if (br_1_guard_SM1_init) {
        _15_SM1_state_act = SSM_st_NoReqPending_SM1;
      }
      else {
        _15_SM1_state_act = SSM_st_init_SM1;
      }
      outC->SM1_state_act = _15_SM1_state_act;
      break;
    case SSM_st_NoReqPending_SM1 :
      br_1_guard_SM1_NoReqPending = in_triggerMA == kcg_true;
      if (br_1_guard_SM1_NoReqPending) {
        _12_SM1_state_act = SSM_st_ReqPending_SM1;
      }
      else {
        _12_SM1_state_act = SSM_st_NoReqPending_SM1;
      }
      outC->SM1_state_act = _12_SM1_state_act;
      break;
    case SSM_st_ReqPending_SM1 :
      br_1_guard_SM1_ReqPending = ma_received == kcg_true;
      if (br_1_guard_SM1_ReqPending) {
        SM1_state_act = SSM_st_NoReqPending_SM1;
      }
      else {
        SM1_state_act = SSM_st_ReqPending_SM1;
      }
      outC->SM1_state_act = SM1_state_act;
      break;
    
  }
  switch (outC->SM1_state_act) {
    case SSM_st_init_SM1 :
      _8_pendingReq = last_pendingReq;
      outC->pendingReq = _8_pendingReq;
      break;
    case SSM_st_NoReqPending_SM1 :
      outC->_L1_SM1_NoReqPending = kcg_false;
      _4_pendingReq = outC->_L1_SM1_NoReqPending;
      outC->pendingReq = _4_pendingReq;
      break;
    case SSM_st_ReqPending_SM1 :
      outC->_L4_SM1_ReqPending = kcg_true;
      pendingReq = outC->_L4_SM1_ReqPending;
      outC->pendingReq = pendingReq;
      break;
    
  }
  outC->_L60 = outC->pendingReq;
  outC->_L51 = 255;
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->_L1,
    ma_RequestParams);
  outC->_L49 = outC->_L1.t_cycrqst;
  outC->_L50 = outC->_L51 == outC->_L49;
  outC->_L59 = outC->_L60 & outC->_L50;
  switch (outC->SM1_state_sel) {
    case SSM_st_init_SM1 :
      if (br_1_guard_SM1_init) {
        _17_SM1_fired_strong = SSM_TR_init_1_SM1;
      }
      else {
        _17_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _17_SM1_fired_strong;
      break;
    case SSM_st_NoReqPending_SM1 :
      if (br_1_guard_SM1_NoReqPending) {
        _14_SM1_fired_strong = SSM_TR_NoReqPending_1_SM1;
      }
      else {
        _14_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _14_SM1_fired_strong;
      break;
    case SSM_st_ReqPending_SM1 :
      if (br_1_guard_SM1_ReqPending) {
        SM1_fired_strong = SSM_TR_ReqPending_1_SM1;
      }
      else {
        SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  switch (outC->SM1_state_act) {
    case SSM_st_init_SM1 :
      _11_SM1_fired = outC->SM1_fired_strong;
      _10_SM1_reset_nxt = kcg_false;
      _9_SM1_state_nxt = SSM_st_init_SM1;
      outC->SM1_fired = _11_SM1_fired;
      break;
    case SSM_st_NoReqPending_SM1 :
      _7_SM1_fired = outC->SM1_fired_strong;
      _6_SM1_reset_nxt = kcg_false;
      _5_SM1_state_nxt = SSM_st_NoReqPending_SM1;
      outC->SM1_fired = _7_SM1_fired;
      break;
    case SSM_st_ReqPending_SM1 :
      SM1_fired = outC->SM1_fired_strong;
      SM1_reset_nxt = kcg_false;
      SM1_state_nxt = SSM_st_ReqPending_SM1;
      outC->SM1_fired = SM1_fired;
      break;
    
  }
  if (outC->init) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_init_SM1 :
      outC->SM1_reset_nxt = _10_SM1_reset_nxt;
      outC->SM1_state_nxt = _9_SM1_state_nxt;
      break;
    case SSM_st_NoReqPending_SM1 :
      outC->SM1_reset_nxt = _6_SM1_reset_nxt;
      outC->SM1_state_nxt = _5_SM1_state_nxt;
      break;
    case SSM_st_ReqPending_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt;
      outC->SM1_state_nxt = SM1_state_nxt;
      break;
    
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_init_SM1 :
      _16_SM1_reset_act = br_1_guard_SM1_init;
      break;
    case SSM_st_NoReqPending_SM1 :
      _13_SM1_reset_act = br_1_guard_SM1_NoReqPending;
      break;
    case SSM_st_ReqPending_SM1 :
      SM1_reset_act = br_1_guard_SM1_ReqPending;
      break;
    
  }
  if (outC->init) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_init_SM1 :
      outC->SM1_reset_act = _16_SM1_reset_act;
      break;
    case SSM_st_NoReqPending_SM1 :
      outC->SM1_reset_act = _13_SM1_reset_act;
      break;
    case SSM_st_ReqPending_SM1 :
      outC->SM1_reset_act = SM1_reset_act;
      break;
    
  }
  outC->_L3 = systemTime;
  /* 1 */
  op_RepeatReq_MA_Request(outC->_L49, outC->_L66, outC->_L3, &outC->Context_1);
  outC->_L55 = outC->Context_1.trigger;
  outC->_L53 = kcg_false;
  if (outC->_L59) {
    outC->_L52 = outC->_L53;
  }
  else {
    outC->_L52 = outC->_L55;
  }
  outC->_L48 = kcg_false;
  outC->_L38 = 1023;
  outC->_L30 = outC->_L1.t_timeoutrqst;
  outC->_L37 = outC->_L38 == outC->_L30;
  outC->tmp = outC->_L37;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L24, MAs);
  if (outC->tmp) {
    /* op_3_8_2_3_b */
    op_3_8_2_3_b_MA_Request(
      outC->_L30,
      &outC->_L24,
      &outC->Context_op_3_8_2_3_b);
    tmp3 = outC->Context_op_3_8_2_3_b.triggerMA;
    outC->_L46 = tmp3;
  }
  else {
    if (outC->init) {
      tmp1 = outC->_L48;
    }
    else {
      tmp1 = outC->_L46;
    }
    outC->_L46 = tmp1;
  }
  outC->_L43 = 255;
  outC->_L41 = outC->_L1.t_mar;
  outC->_L42 = outC->_L43 == outC->_L41;
  outC->_L40 = kcg_false;
  outC->tmp1 = outC->_L42;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L2, trainPosition);
  outC->_L6 = preindicationLocation;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L9, odometry);
  if (outC->tmp1) {
    /* op_3_8_2_3_a */
    op_3_8_2_3_a_MA_Request(
      outC->_L41,
      &outC->_L2,
      outC->_L6,
      &outC->_L9,
      &outC->Context_op_3_8_2_3_a);
    tmp2 = outC->Context_op_3_8_2_3_a.triggerMA;
    outC->_L23 = tmp2;
  }
  else {
    if (outC->init) {
      tmp = outC->_L40;
    }
    else {
      tmp = outC->_L23;
    }
    outC->_L23 = tmp;
  }
  outC->_L22 = outC->_L23 | outC->_L46 | outC->_L52 | outC->_L68 | outC->_L71 |
    outC->_L72;
  outC->triggerMA = outC->_L22;
  outC->rem_in_triggerMA = in_triggerMA;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MA_Request_Supervision_MA_Request.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

