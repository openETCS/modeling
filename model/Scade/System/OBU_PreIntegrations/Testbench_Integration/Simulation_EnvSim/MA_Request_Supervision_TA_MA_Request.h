/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _MA_Request_Supervision_TA_MA_Request_H_
#define _MA_Request_Supervision_TA_MA_Request_H_

#include "kcg_types.h"
#include "op_3_8_2_3_b_TA_MA_Request.h"
#include "RisingEdge_digital.h"
#include "op_3_8_2_3_a_TA_MA_Request.h"
#include "op_RepeatReq_TA_MA_Request.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MA_Request::MA_Request_Supervision::triggerMA */ triggerMA;
  kcg_bool /* TA_MA_Request::MA_Request_Supervision::exception */ exception;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _27_SSM_ST_SM1 /* TA_MA_Request::MA_Request_Supervision::SM1 */ SM1_state_nxt;
  kcg_bool /* TA_MA_Request::MA_Request_Supervision::pendingReq */ pendingReq;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_op_3_8_2_3_a_TA_MA_Request /* op_3_8_2_3_a */ Context_op_3_8_2_3_a;
  outC_op_RepeatReq_TA_MA_Request /* 1 */ _1_Context_1;
  outC_RisingEdge_digital /* 1 */ Context_1;
  outC_RisingEdge_digital /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MA_Request_Supervision_TA_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::MA_Request_Supervision */
extern void MA_Request_Supervision_TA_MA_Request(
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
  outC_MA_Request_Supervision_TA_MA_Request *outC);

extern void MA_Request_Supervision_reset_TA_MA_Request(
  outC_MA_Request_Supervision_TA_MA_Request *outC);

#endif /* _MA_Request_Supervision_TA_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MA_Request_Supervision_TA_MA_Request.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

