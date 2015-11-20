/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Request_Supervision_TA_MA_Request.h"

void MA_Request_Supervision_reset_TA_MA_Request(
  outC_MA_Request_Supervision_TA_MA_Request *outC)
{
  outC->init = kcg_true;
  /* 2 */ RisingEdge_reset_digital(&outC->Context_2);
  /* 1 */ RisingEdge_reset_digital(&outC->Context_1);
  /* 1 */ op_RepeatReq_reset_TA_MA_Request(&outC->_1_Context_1);
  /* op_3_8_2_3_a */
  op_3_8_2_3_a_reset_TA_MA_Request(&outC->Context_op_3_8_2_3_a);
}

/* TA_MA_Request::MA_Request_Supervision */
void MA_Request_Supervision_TA_MA_Request(
  /* TA_MA_Request::MA_Request_Supervision::ma_RequestParams */P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *ma_RequestParams,
  /* TA_MA_Request::MA_Request_Supervision::ma_received */kcg_bool ma_received,
  /* TA_MA_Request::MA_Request_Supervision::in_triggerMA */kcg_bool in_triggerMA,
  /* TA_MA_Request::MA_Request_Supervision::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* TA_MA_Request::MA_Request_Supervision::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* TA_MA_Request::MA_Request_Supervision::preindicationLocation */L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* TA_MA_Request::MA_Request_Supervision::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TA_MA_Request::MA_Request_Supervision::MAs */MovementAuthority_t_TrackAtlasTypes *MAs,
  /* TA_MA_Request::MA_Request_Supervision::fromDriver */Driver2MAR_T_TA_MA_Request *fromDriver,
  /* TA_MA_Request::MA_Request_Supervision::trackDescrDeleted */kcg_bool trackDescrDeleted,
  /* TA_MA_Request::MA_Request_Supervision::modeLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *modeLevel,
  outC_MA_Request_Supervision_TA_MA_Request *outC)
{
  static kcg_bool tmp1;
  static kcg_bool tmp;
  static kcg_bool tmp2;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _27_SSM_ST_SM1 SM1_state_sel;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _27_SSM_ST_SM1 SM1_state_act;
  /* TA_MA_Request::MA_Request_Supervision::_L80 */
  static kcg_bool _L80;
  /* TA_MA_Request::MA_Request_Supervision::_L81 */
  static kcg_bool _L81;
  
  _L80 = 255 != (*ma_RequestParams).t_mar;
  _L81 = 1023 != (*ma_RequestParams).t_timeoutrqst;
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
    case SSM_st_ReqPending_SM1 :
      outC->pendingReq = kcg_true;
      outC->SM1_state_nxt = SSM_st_ReqPending_SM1;
      break;
    case SSM_st_NoReqPending_SM1 :
      outC->pendingReq = kcg_false;
      outC->SM1_state_nxt = SSM_st_NoReqPending_SM1;
      break;
    case SSM_st_init_SM1 :
      if (outC->init) {
        outC->pendingReq = kcg_false;
      }
      outC->SM1_state_nxt = SSM_st_init_SM1;
      break;
    
  }
  outC->init = kcg_false;
  /* 1 */
  op_RepeatReq_TA_MA_Request(
    (*ma_RequestParams).t_cycrqst,
    in_triggerMA,
    systemTime,
    &outC->_1_Context_1);
  if (_L80) {
    /* op_3_8_2_3_a */
    op_3_8_2_3_a_TA_MA_Request(
      (*ma_RequestParams).t_mar,
      trainPosition,
      odometry,
      preindicationLocation,
      &outC->Context_op_3_8_2_3_a);
    tmp2 = outC->Context_op_3_8_2_3_a.exception;
    tmp = outC->Context_op_3_8_2_3_a.triggerMA;
  }
  else {
    tmp = kcg_false;
  }
  /* 1 */ RisingEdge_digital(tmp, &outC->Context_1);
  if (_L81) {
    tmp1 = /* op_3_8_2_3_b */
      op_3_8_2_3_b_TA_MA_Request((*ma_RequestParams).t_timeoutrqst, MAs);
  }
  else {
    tmp1 = kcg_false;
  }
  /* 2 */ RisingEdge_digital(tmp1, &outC->Context_2);
  outC->triggerMA = (((*modeLevel).level == M_LEVEL_Level_2) |
      ((*modeLevel).level == M_LEVEL_Level_3)) & (outC->Context_1.RE_Output |
      outC->Context_2.RE_Output | (outC->pendingReq & (255 !=
          (*ma_RequestParams).t_cycrqst) & ((*ma_RequestParams).t_cycrqst !=
          0) & outC->_1_Context_1.trigger) | trackDescrDeleted |
      (*fromDriver).trackAheadFree | (*fromDriver).driverSelectsStart);
  if (_L80) {
    tmp = tmp2;
  }
  else {
    tmp = kcg_false;
  }
  outC->exception = tmp | outC->_1_Context_1.exception;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MA_Request_Supervision_TA_MA_Request.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

