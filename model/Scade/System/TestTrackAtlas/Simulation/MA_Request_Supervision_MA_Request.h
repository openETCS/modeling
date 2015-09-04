/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _MA_Request_Supervision_MA_Request_H_
#define _MA_Request_Supervision_MA_Request_H_

#include "kcg_types.h"
#include "op_3_8_2_3_a_MA_Request.h"
#include "op_3_8_2_3_b_MA_Request.h"
#include "op_RepeatReq_MA_Request.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MA_Request::MA_Request_Supervision::triggerMA */ triggerMA;
  kcg_bool /* MA_Request::MA_Request_Supervision::exception */ exception;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM1 /* MA_Request::MA_Request_Supervision::SM1 */ SM1_state_nxt;
  kcg_bool /* MA_Request::MA_Request_Supervision::SM1 */ SM1_reset_act;
  kcg_bool /* MA_Request::MA_Request_Supervision::SM1 */ SM1_reset_nxt;
  kcg_bool /* MA_Request::MA_Request_Supervision::pendingReq */ pendingReq;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L23 */ _L23;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L46 */ _L46;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L73 */ _L73;
  kcg_bool /* MA_Request::MA_Request_Supervision::in_triggerMA */ rem_in_triggerMA;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_op_3_8_2_3_b_MA_Request /* op_3_8_2_3_b */ Context_op_3_8_2_3_b;
  outC_op_RepeatReq_MA_Request /* 1 */ Context_1;
  outC_op_3_8_2_3_a_MA_Request /* op_3_8_2_3_a */ Context_op_3_8_2_3_a;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  kcg_bool tmp1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* MA_Request::MA_Request_Supervision::SM1::NoReqPending::_L1 */ _L1_SM1_NoReqPending;
  kcg_bool /* MA_Request::MA_Request_Supervision::SM1::ReqPending::_L4 */ _L4_SM1_ReqPending;
  SSM_ST_SM1 /* MA_Request::MA_Request_Supervision::SM1 */ SM1_state_sel;
  SSM_ST_SM1 /* MA_Request::MA_Request_Supervision::SM1 */ SM1_state_act;
  SSM_TR_SM1 /* MA_Request::MA_Request_Supervision::SM1 */ SM1_fired_strong;
  SSM_TR_SM1 /* MA_Request::MA_Request_Supervision::SM1 */ SM1_fired;
  kcg_bool /* MA_Request::MA_Request_Supervision::errorInRepeatReq */ errorInRepeatReq;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* MA_Request::MA_Request_Supervision::_L1 */ _L1;
  trainPosition_T_TrainPosition_Types_Pck /* MA_Request::MA_Request_Supervision::_L2 */ _L2;
  T_internal_Type_Obu_BasicTypes_Pkg /* MA_Request::MA_Request_Supervision::_L3 */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* MA_Request::MA_Request_Supervision::_L6 */ _L6;
  odometry_T_Obu_BasicTypes_Pkg /* MA_Request::MA_Request_Supervision::_L9 */ _L9;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L22 */ _L22;
  MovementAuthority_t_TrackAtlasTypes /* MA_Request::MA_Request_Supervision::_L24 */ _L24;
  T_TIMEOUTRQST /* MA_Request::MA_Request_Supervision::_L30 */ _L30;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L37 */ _L37;
  kcg_int /* MA_Request::MA_Request_Supervision::_L38 */ _L38;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L40 */ _L40;
  T_MAR /* MA_Request::MA_Request_Supervision::_L41 */ _L41;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L42 */ _L42;
  kcg_int /* MA_Request::MA_Request_Supervision::_L43 */ _L43;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L48 */ _L48;
  T_CYCRQST /* MA_Request::MA_Request_Supervision::_L49 */ _L49;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L50 */ _L50;
  kcg_int /* MA_Request::MA_Request_Supervision::_L51 */ _L51;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L52 */ _L52;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L53 */ _L53;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L55 */ _L55;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L59 */ _L59;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L60 */ _L60;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L61 */ _L61;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L66 */ _L66;
  Driver2MAR_T_MA_Request /* MA_Request::MA_Request_Supervision::_L67 */ _L67;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L68 */ _L68;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L72 */ _L72;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L71 */ _L71;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L74 */ _L74;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L76 */ _L76;
  kcg_bool /* MA_Request::MA_Request_Supervision::_L77 */ _L77;
} outC_MA_Request_Supervision_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* MA_Request::MA_Request_Supervision */
extern void MA_Request_Supervision_MA_Request(
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
  outC_MA_Request_Supervision_MA_Request *outC);

extern void MA_Request_Supervision_reset_MA_Request(
  outC_MA_Request_Supervision_MA_Request *outC);

#endif /* _MA_Request_Supervision_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MA_Request_Supervision_MA_Request.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

