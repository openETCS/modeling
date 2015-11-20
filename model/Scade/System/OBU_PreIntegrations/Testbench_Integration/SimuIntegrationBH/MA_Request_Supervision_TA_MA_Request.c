/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Request_Supervision_TA_MA_Request.h"

#ifndef KCG_USER_DEFINED_INIT
void MA_Request_Supervision_init_TA_MA_Request(
  outC_MA_Request_Supervision_TA_MA_Request *outC)
{
  outC->init = kcg_true;
  outC->rem_in_triggerMA = kcg_true;
  outC->pendingReq = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = SSM_st_init_SM1;
  outC->exception = kcg_true;
  outC->triggerMA = kcg_true;
  /* 1 */ op_RepeatReq_init_TA_MA_Request(&outC->_1_Context_1);
  /* 2 */ RisingEdge_init_digital(&outC->Context_2);
  /* 1 */ RisingEdge_init_digital(&outC->Context_1);
  /* op_3_8_2_3_a */
  op_3_8_2_3_a_init_TA_MA_Request(&outC->Context_op_3_8_2_3_a);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MA_Request_Supervision_reset_TA_MA_Request(
  outC_MA_Request_Supervision_TA_MA_Request *outC)
{
  outC->init = kcg_true;
  /* 1 */ op_RepeatReq_reset_TA_MA_Request(&outC->_1_Context_1);
  /* 2 */ RisingEdge_reset_digital(&outC->Context_2);
  /* 1 */ RisingEdge_reset_digital(&outC->Context_1);
  /* op_3_8_2_3_a */
  op_3_8_2_3_a_reset_TA_MA_Request(&outC->Context_op_3_8_2_3_a);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_Request::MA_Request_Supervision */
void MA_Request_Supervision_TA_MA_Request(
  /* TA_MA_Request::MA_Request_Supervision::ma_RequestParams */ P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *ma_RequestParams,
  /* TA_MA_Request::MA_Request_Supervision::ma_received */ kcg_bool ma_received,
  /* TA_MA_Request::MA_Request_Supervision::in_triggerMA */ kcg_bool in_triggerMA,
  /* TA_MA_Request::MA_Request_Supervision::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* TA_MA_Request::MA_Request_Supervision::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* TA_MA_Request::MA_Request_Supervision::preindicationLocation */ L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* TA_MA_Request::MA_Request_Supervision::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TA_MA_Request::MA_Request_Supervision::MAs */ MovementAuthority_t_TrackAtlasTypes *MAs,
  /* TA_MA_Request::MA_Request_Supervision::fromDriver */ Driver2MAR_T_TA_MA_Request *fromDriver,
  /* TA_MA_Request::MA_Request_Supervision::trackDescrDeleted */ kcg_bool trackDescrDeleted,
  /* TA_MA_Request::MA_Request_Supervision::modeLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *modeLevel,
  outC_MA_Request_Supervision_TA_MA_Request *outC)
{
  /* TA_MA_Request::MA_Request_Supervision */
  static kcg_bool _2_op_call;
  /* TA_MA_Request::MA_Request_Supervision */
  static kcg_bool op_call;
  /* TA_MA_Request::MA_Request_Supervision */
  static kcg_bool _1_op_call;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _45_SSM_TR_SM1 _10_SM1_fired;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static kcg_bool _9_SM1_reset_nxt;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _43_SSM_ST_SM1 _8_SM1_state_nxt;
  /* TA_MA_Request::MA_Request_Supervision::pendingReq */
  static kcg_bool _7_pendingReq;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _45_SSM_TR_SM1 _6_SM1_fired;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static kcg_bool _5_SM1_reset_nxt;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _43_SSM_ST_SM1 _4_SM1_state_nxt;
  /* TA_MA_Request::MA_Request_Supervision::pendingReq */
  static kcg_bool _3_pendingReq;
  /* TA_MA_Request::MA_Request_Supervision::SM1::NoReqPending::_L1 */
  static kcg_bool _L1_SM1_NoReqPending;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _45_SSM_TR_SM1 SM1_fired;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static kcg_bool SM1_reset_nxt;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _43_SSM_ST_SM1 SM1_state_nxt;
  /* TA_MA_Request::MA_Request_Supervision::pendingReq */
  static kcg_bool pendingReq;
  /* TA_MA_Request::MA_Request_Supervision::SM1::ReqPending::_L4 */
  static kcg_bool _L4_SM1_ReqPending;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _45_SSM_TR_SM1 _16_SM1_fired_strong;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static kcg_bool _15_SM1_reset_act;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _43_SSM_ST_SM1 _14_SM1_state_act;
  /* TA_MA_Request::MA_Request_Supervision::SM1::init */
  static kcg_bool br_1_guard_SM1_init;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _45_SSM_TR_SM1 _13_SM1_fired_strong;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static kcg_bool _12_SM1_reset_act;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _43_SSM_ST_SM1 _11_SM1_state_act;
  /* TA_MA_Request::MA_Request_Supervision::SM1::NoReqPending */
  static kcg_bool br_1_guard_SM1_NoReqPending;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _45_SSM_TR_SM1 SM1_fired_strong;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static kcg_bool SM1_reset_act;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _43_SSM_ST_SM1 SM1_state_act;
  /* TA_MA_Request::MA_Request_Supervision::SM1::ReqPending */
  static kcg_bool br_1_guard_SM1_ReqPending;
  /* TA_MA_Request::MA_Request_Supervision */
  static kcg_bool ck_every;
  /* TA_MA_Request::MA_Request_Supervision */
  static kcg_bool _17_ck_every;
  static kcg_bool noname;
  /* TA_MA_Request::MA_Request_Supervision::pendingReq */
  static kcg_bool last_pendingReq;
  /* TA_MA_Request::MA_Request_Supervision::triggerMA */
  static kcg_bool last_triggerMA;
  /* TA_MA_Request::MA_Request_Supervision::in_triggerMA */
  static kcg_bool last_in_triggerMA;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _43_SSM_ST_SM1 SM1_state_sel;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _43_SSM_ST_SM1 _20_SM1_state_act;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static kcg_bool SM1_reset_sel;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static kcg_bool SM1_reset_prv;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _45_SSM_TR_SM1 _19_SM1_fired_strong;
  /* TA_MA_Request::MA_Request_Supervision::SM1 */
  static _45_SSM_TR_SM1 _18_SM1_fired;
  /* TA_MA_Request::MA_Request_Supervision::errorInRepeatReq */
  static kcg_bool errorInRepeatReq;
  /* TA_MA_Request::MA_Request_Supervision::_L1 */
  static P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg _L1;
  /* TA_MA_Request::MA_Request_Supervision::_L2 */
  static trainPosition_T_TrainPosition_Types_Pck _L2;
  /* TA_MA_Request::MA_Request_Supervision::_L3 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* TA_MA_Request::MA_Request_Supervision::_L6 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L6;
  /* TA_MA_Request::MA_Request_Supervision::_L9 */
  static odometry_T_Obu_BasicTypes_Pkg _L9;
  /* TA_MA_Request::MA_Request_Supervision::_L22 */
  static kcg_bool _L22;
  /* TA_MA_Request::MA_Request_Supervision::_L23 */
  static kcg_bool _L23;
  /* TA_MA_Request::MA_Request_Supervision::_L24 */
  static MovementAuthority_t_TrackAtlasTypes _L24;
  /* TA_MA_Request::MA_Request_Supervision::_L30 */
  static T_TIMEOUTRQST _L30;
  /* TA_MA_Request::MA_Request_Supervision::_L38 */
  static kcg_int _L38;
  /* TA_MA_Request::MA_Request_Supervision::_L40 */
  static kcg_bool _L40;
  /* TA_MA_Request::MA_Request_Supervision::_L41 */
  static T_MAR _L41;
  /* TA_MA_Request::MA_Request_Supervision::_L43 */
  static kcg_int _L43;
  /* TA_MA_Request::MA_Request_Supervision::_L46 */
  static kcg_bool _L46;
  /* TA_MA_Request::MA_Request_Supervision::_L48 */
  static kcg_bool _L48;
  /* TA_MA_Request::MA_Request_Supervision::_L49 */
  static T_CYCRQST _L49;
  /* TA_MA_Request::MA_Request_Supervision::_L51 */
  static kcg_int _L51;
  /* TA_MA_Request::MA_Request_Supervision::_L55 */
  static kcg_bool _L55;
  /* TA_MA_Request::MA_Request_Supervision::_L59 */
  static kcg_bool _L59;
  /* TA_MA_Request::MA_Request_Supervision::_L60 */
  static kcg_bool _L60;
  /* TA_MA_Request::MA_Request_Supervision::_L61 */
  static kcg_bool _L61;
  /* TA_MA_Request::MA_Request_Supervision::_L66 */
  static kcg_bool _L66;
  /* TA_MA_Request::MA_Request_Supervision::_L67 */
  static Driver2MAR_T_TA_MA_Request _L67;
  /* TA_MA_Request::MA_Request_Supervision::_L68 */
  static kcg_bool _L68;
  /* TA_MA_Request::MA_Request_Supervision::_L72 */
  static kcg_bool _L72;
  /* TA_MA_Request::MA_Request_Supervision::_L71 */
  static kcg_bool _L71;
  /* TA_MA_Request::MA_Request_Supervision::_L73 */
  static kcg_bool _L73;
  /* TA_MA_Request::MA_Request_Supervision::_L74 */
  static kcg_bool _L74;
  /* TA_MA_Request::MA_Request_Supervision::_L76 */
  static kcg_bool _L76;
  /* TA_MA_Request::MA_Request_Supervision::_L77 */
  static kcg_bool _L77;
  /* TA_MA_Request::MA_Request_Supervision::_L78 */
  static kcg_bool _L78;
  /* TA_MA_Request::MA_Request_Supervision::_L79 */
  static kcg_bool _L79;
  /* TA_MA_Request::MA_Request_Supervision::_L80 */
  static kcg_bool _L80;
  /* TA_MA_Request::MA_Request_Supervision::_L81 */
  static kcg_bool _L81;
  /* TA_MA_Request::MA_Request_Supervision::_L82 */
  static kcg_bool _L82;
  /* TA_MA_Request::MA_Request_Supervision::_L83 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L83;
  /* TA_MA_Request::MA_Request_Supervision::_L85 */
  static M_LEVEL _L85;
  /* TA_MA_Request::MA_Request_Supervision::_L86 */
  static kcg_bool _L86;
  /* TA_MA_Request::MA_Request_Supervision::_L87 */
  static M_LEVEL _L87;
  /* TA_MA_Request::MA_Request_Supervision::_L90 */
  static kcg_bool _L90;
  /* TA_MA_Request::MA_Request_Supervision::_L89 */
  static M_LEVEL _L89;
  /* TA_MA_Request::MA_Request_Supervision::_L88 */
  static M_LEVEL _L88;
  /* TA_MA_Request::MA_Request_Supervision::_L91 */
  static kcg_bool _L91;
  /* TA_MA_Request::MA_Request_Supervision::_L93 */
  static kcg_bool _L93;
  /* TA_MA_Request::MA_Request_Supervision::_L94 */
  static kcg_int _L94;
  /* TA_MA_Request::MA_Request_Supervision::_L95 */
  static kcg_bool _L95;
  
  _L38 = 1023;
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &_L1,
    ma_RequestParams);
  _L30 = _L1.t_timeoutrqst;
  _L81 = _L38 != _L30;
  ck_every = _L81;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L24, MAs);
  /* ck_MA_Request_Supervision */ if (ck_every) {
    _2_op_call = /* op_3_8_2_3_b */ op_3_8_2_3_b_TA_MA_Request(_L30, &_L24);
  }
  _L43 = 255;
  _L41 = _L1.t_mar;
  _L80 = _L43 != _L41;
  _17_ck_every = _L80;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L2, trainPosition);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L9, odometry);
  _L6 = preindicationLocation;
  /* ck_MA_Request_Supervision */ if (_17_ck_every) {
    /* op_3_8_2_3_a */
    op_3_8_2_3_a_TA_MA_Request(
      _L41,
      &_L2,
      &_L9,
      _L6,
      &outC->Context_op_3_8_2_3_a);
    _1_op_call = outC->Context_op_3_8_2_3_a.exception;
    op_call = outC->Context_op_3_8_2_3_a.triggerMA;
  }
  _L3 = systemTime;
  /* last_init_ck_triggerMA */ if (outC->init) {
    last_triggerMA = kcg_false;
  }
  else {
    last_triggerMA = outC->triggerMA;
  }
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L83, modeLevel);
  _L85 = _L83.level;
  _L87 = M_LEVEL_Level_2;
  _L86 = _L85 == _L87;
  _L88 = _L83.level;
  _L89 = M_LEVEL_Level_3;
  _L90 = _L88 == _L89;
  _L91 = _L86 | _L90;
  _L40 = kcg_false;
  /* ck_MA_Request_Supervision */ if (_17_ck_every) {
    _L23 = op_call;
  }
  else {
    _L23 = _L40;
  }
  /* 1 */ RisingEdge_digital(_L23, &outC->Context_1);
  _L78 = outC->Context_1.RE_Output;
  _L48 = kcg_false;
  /* ck_MA_Request_Supervision */ if (ck_every) {
    _L46 = _2_op_call;
  }
  else {
    _L46 = _L48;
  }
  /* 2 */ RisingEdge_digital(_L46, &outC->Context_2);
  _L79 = outC->Context_2.RE_Output;
  /* last_init_ck_pendingReq */ if (outC->init) {
    last_pendingReq = kcg_false;
  }
  else {
    last_pendingReq = outC->pendingReq;
  }
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = SSM_st_init_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_init_SM1 :
      br_1_guard_SM1_init = kcg_true;
      if (br_1_guard_SM1_init) {
        _14_SM1_state_act = SSM_st_NoReqPending_SM1;
      }
      else {
        _14_SM1_state_act = SSM_st_init_SM1;
      }
      _20_SM1_state_act = _14_SM1_state_act;
      break;
    case SSM_st_NoReqPending_SM1 :
      br_1_guard_SM1_NoReqPending = in_triggerMA == kcg_true;
      if (br_1_guard_SM1_NoReqPending) {
        _11_SM1_state_act = SSM_st_ReqPending_SM1;
      }
      else {
        _11_SM1_state_act = SSM_st_NoReqPending_SM1;
      }
      _20_SM1_state_act = _11_SM1_state_act;
      break;
    case SSM_st_ReqPending_SM1 :
      br_1_guard_SM1_ReqPending = ma_received == kcg_true;
      if (br_1_guard_SM1_ReqPending) {
        SM1_state_act = SSM_st_NoReqPending_SM1;
      }
      else {
        SM1_state_act = SSM_st_ReqPending_SM1;
      }
      _20_SM1_state_act = SM1_state_act;
      break;
    
  }
  /* act_SM1 */ switch (_20_SM1_state_act) {
    case SSM_st_init_SM1 :
      _7_pendingReq = last_pendingReq;
      outC->pendingReq = _7_pendingReq;
      break;
    case SSM_st_NoReqPending_SM1 :
      _L1_SM1_NoReqPending = kcg_false;
      _3_pendingReq = _L1_SM1_NoReqPending;
      outC->pendingReq = _3_pendingReq;
      break;
    case SSM_st_ReqPending_SM1 :
      _L4_SM1_ReqPending = kcg_true;
      pendingReq = _L4_SM1_ReqPending;
      outC->pendingReq = pendingReq;
      break;
    
  }
  _L60 = outC->pendingReq;
  _L51 = 255;
  _L49 = _L1.t_cycrqst;
  _L82 = _L51 != _L49;
  _L94 = 0;
  _L93 = _L49 != _L94;
  _L66 = in_triggerMA;
  /* 1 */ op_RepeatReq_TA_MA_Request(_L49, _L66, _L3, &outC->_1_Context_1);
  _L55 = outC->_1_Context_1.trigger;
  _L74 = outC->_1_Context_1.exception;
  _L59 = _L60 & _L82 & _L93 & _L55;
  _L68 = trackDescrDeleted;
  kcg_copy_Driver2MAR_T_TA_MA_Request(&_L67, fromDriver);
  _L71 = _L67.trackAheadFree;
  _L72 = _L67.driverSelectsStart;
  _L22 = _L78 | _L79 | _L59 | _L68 | _L71 | _L72;
  _L95 = _L91 & _L22;
  outC->triggerMA = _L95;
  /* ck_MA_Request_Supervision */ if (_17_ck_every) {
    _L73 = _1_op_call;
  }
  else {
    _L73 = _L40;
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
    case SSM_st_init_SM1 :
      _15_SM1_reset_act = br_1_guard_SM1_init;
      outC->SM1_reset_act = _15_SM1_reset_act;
      if (br_1_guard_SM1_init) {
        _16_SM1_fired_strong = SSM_TR_init_1_SM1;
      }
      else {
        _16_SM1_fired_strong = _44_SSM_TR_no_trans_SM1;
      }
      _19_SM1_fired_strong = _16_SM1_fired_strong;
      break;
    case SSM_st_NoReqPending_SM1 :
      _12_SM1_reset_act = br_1_guard_SM1_NoReqPending;
      outC->SM1_reset_act = _12_SM1_reset_act;
      if (br_1_guard_SM1_NoReqPending) {
        _13_SM1_fired_strong = SSM_TR_NoReqPending_1_SM1;
      }
      else {
        _13_SM1_fired_strong = _44_SSM_TR_no_trans_SM1;
      }
      _19_SM1_fired_strong = _13_SM1_fired_strong;
      break;
    case SSM_st_ReqPending_SM1 :
      SM1_reset_act = br_1_guard_SM1_ReqPending;
      outC->SM1_reset_act = SM1_reset_act;
      if (br_1_guard_SM1_ReqPending) {
        SM1_fired_strong = SSM_TR_ReqPending_1_SM1;
      }
      else {
        SM1_fired_strong = _44_SSM_TR_no_trans_SM1;
      }
      _19_SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  /* act_SM1 */ switch (_20_SM1_state_act) {
    case SSM_st_init_SM1 :
      _8_SM1_state_nxt = SSM_st_init_SM1;
      outC->SM1_state_nxt = _8_SM1_state_nxt;
      _9_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _9_SM1_reset_nxt;
      _10_SM1_fired = _19_SM1_fired_strong;
      _18_SM1_fired = _10_SM1_fired;
      break;
    case SSM_st_NoReqPending_SM1 :
      _4_SM1_state_nxt = SSM_st_NoReqPending_SM1;
      outC->SM1_state_nxt = _4_SM1_state_nxt;
      _5_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _5_SM1_reset_nxt;
      _6_SM1_fired = _19_SM1_fired_strong;
      _18_SM1_fired = _6_SM1_fired;
      break;
    case SSM_st_ReqPending_SM1 :
      SM1_state_nxt = SSM_st_ReqPending_SM1;
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      SM1_fired = _19_SM1_fired_strong;
      _18_SM1_fired = SM1_fired;
      break;
    
  }
  _L61 = ma_received;
  noname = _L61;
  errorInRepeatReq = _L74;
  _L77 = errorInRepeatReq;
  _L76 = _L73 | _L77;
  outC->exception = _L76;
  /* last_init_ck_in_triggerMA */ if (outC->init) {
    last_in_triggerMA = kcg_false;
  }
  else {
    last_in_triggerMA = outC->rem_in_triggerMA;
  }
  outC->rem_in_triggerMA = in_triggerMA;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MA_Request_Supervision_TA_MA_Request.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

