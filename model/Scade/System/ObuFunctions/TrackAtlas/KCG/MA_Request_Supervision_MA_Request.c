/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Request_Supervision_MA_Request.h"

void MA_Request_Supervision_reset_MA_Request(
  outC_MA_Request_Supervision_MA_Request *outC)
{
  outC->init = kcg_true;
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
  /* MA_Request::MA_Request_Supervision::SM1 */ SSM_ST_SM1 SM1_state_sel;
  /* MA_Request::MA_Request_Supervision::SM1 */ SSM_ST_SM1 SM1_state_act;
  /* MA_Request::MA_Request_Supervision::_L42 */ kcg_bool _L42;
  
  if (outC->init) {
    SM1_state_sel = SSM_st_init_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (SM1_state_sel) {
    case SSM_st_init_SM1 :
      SM1_state_act = SSM_st_NoReqPending_SM1;
      break;
    case SSM_st_NoReqPending_SM1 :
      if (in_triggerMA) {
        SM1_state_act = SSM_st_ReqPending_SM1;
      }
      else {
        SM1_state_act = SSM_st_NoReqPending_SM1;
      }
      break;
    case SSM_st_ReqPending_SM1 :
      if (ma_received) {
        SM1_state_act = SSM_st_NoReqPending_SM1;
      }
      else {
        SM1_state_act = SSM_st_ReqPending_SM1;
      }
      break;
    
  }
  switch (SM1_state_act) {
    case SSM_st_init_SM1 :
      outC->SM1_state_nxt = SSM_st_init_SM1;
      if (outC->init) {
        outC->pendingReq = kcg_false;
      }
      break;
    case SSM_st_NoReqPending_SM1 :
      outC->SM1_state_nxt = SSM_st_NoReqPending_SM1;
      outC->pendingReq = kcg_false;
      break;
    case SSM_st_ReqPending_SM1 :
      outC->SM1_state_nxt = SSM_st_ReqPending_SM1;
      outC->pendingReq = kcg_true;
      break;
    
  }
  _L42 = 1023 == (*ma_RequestParams).t_timeoutrqst;
  if (_L42) {
    outC->_L46 = /* op_3_8_2_3_b */
      op_3_8_2_3_b_MA_Request((*ma_RequestParams).t_timeoutrqst, MAs);
  }
  else if (outC->init) {
    outC->_L46 = kcg_false;
  }
  _L42 = 255 == (*ma_RequestParams).t_mar;
  if (_L42) {
    outC->_L23 = /* op_3_8_2_3_a */
      op_3_8_2_3_a_MA_Request(
        (*ma_RequestParams).t_mar,
        trainPosition,
        preindicationLocation,
        odometry);
  }
  else if (outC->init) {
    outC->_L23 = kcg_false;
  }
  /* 1 */
  op_RepeatReq_MA_Request(
    (*ma_RequestParams).t_cycrqst,
    in_triggerMA,
    systemTime,
    &outC->Context_1);
  if (outC->pendingReq & (255 == (*ma_RequestParams).t_cycrqst)) {
    _L42 = kcg_false;
  }
  else {
    _L42 = outC->Context_1.trigger;
  }
  outC->triggerMA = outC->_L23 | outC->_L46 | _L42 | trackDescrDeleted |
    (*fromDriver).trackAheadFree | (*fromDriver).driverSelectsStart;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MA_Request_Supervision_MA_Request.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

