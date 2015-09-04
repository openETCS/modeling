/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _op_3_8_2_3_b_MA_Request_H_
#define _op_3_8_2_3_b_MA_Request_H_

#include "kcg_types.h"
#include "CompareSectionTimer_MA_Request.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MA_Request::op_3_8_2_3_b::triggerMA */ triggerMA;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CompareSectionTimer_MA_Request /* 1 */ Context_1[10];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* MA_Request::op_3_8_2_3_b::_L3 */ _L3;
  MovementAuthority_t_TrackAtlasTypes /* MA_Request::op_3_8_2_3_b::_L1 */ _L1;
  kcg_int /* MA_Request::op_3_8_2_3_b::_L5 */ _L5;
  T_internal_Type_Obu_BasicTypes_Pkg /* MA_Request::op_3_8_2_3_b::_L6 */ _L6;
  T_internal_Type_Obu_BasicTypes_Pkg /* MA_Request::op_3_8_2_3_b::_L7 */ _L7;
  kcg_bool /* MA_Request::op_3_8_2_3_b::_L8 */ _L8;
  kcg_bool /* MA_Request::op_3_8_2_3_b::_L9 */ _L9;
  kcg_bool /* MA_Request::op_3_8_2_3_b::_L10 */ _L10;
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* MA_Request::op_3_8_2_3_b::_L11 */ _L11;
} outC_op_3_8_2_3_b_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* MA_Request::op_3_8_2_3_b */
extern void op_3_8_2_3_b_MA_Request(
  /* MA_Request::op_3_8_2_3_b::t_timeoutrqst */kcg_int t_timeoutrqst,
  /* MA_Request::op_3_8_2_3_b::ma_s */MovementAuthority_t_TrackAtlasTypes *ma_s,
  outC_op_3_8_2_3_b_MA_Request *outC);

extern void op_3_8_2_3_b_reset_MA_Request(outC_op_3_8_2_3_b_MA_Request *outC);

#endif /* _op_3_8_2_3_b_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_3_8_2_3_b_MA_Request.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

