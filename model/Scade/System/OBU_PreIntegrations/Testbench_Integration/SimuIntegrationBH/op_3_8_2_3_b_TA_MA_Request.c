/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_8_2_3_b_TA_MA_Request.h"

/* TA_MA_Request::op_3_8_2_3_b */
kcg_bool op_3_8_2_3_b_TA_MA_Request(
  /* TA_MA_Request::op_3_8_2_3_b::t_timeoutrqst */ kcg_int t_timeoutrqst,
  /* TA_MA_Request::op_3_8_2_3_b::ma_s */ MovementAuthority_t_TrackAtlasTypes *ma_s)
{
  /* TA_MA_Request::op_3_8_2_3_b */
  static kcg_int acc;
  static kcg_int i;
  /* TA_MA_Request::op_3_8_2_3_b::_L3 */
  static kcg_int _L3;
  /* TA_MA_Request::op_3_8_2_3_b::_L1 */
  static MovementAuthority_t_TrackAtlasTypes _L1;
  /* TA_MA_Request::op_3_8_2_3_b::_L5 */
  static kcg_int _L5;
  /* TA_MA_Request::op_3_8_2_3_b::_L6 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L6;
  /* TA_MA_Request::op_3_8_2_3_b::_L7 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L7;
  /* TA_MA_Request::op_3_8_2_3_b::_L8 */
  static kcg_bool _L8;
  /* TA_MA_Request::op_3_8_2_3_b::_L9 */
  static kcg_bool _L9;
  /* TA_MA_Request::op_3_8_2_3_b::_L10 */
  static kcg_bool _L10;
  /* TA_MA_Request::op_3_8_2_3_b::_L11 */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes _L11;
  /* TA_MA_Request::op_3_8_2_3_b::triggerMA */
  static kcg_bool triggerMA;
  
  _L3 = t_timeoutrqst;
  _L5 = 10000;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L1, ma_s);
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&_L11, &_L1.sections);
  _L6 = _L5;
  /* 4 */ for (i = 0; i < 10; i++) {
    acc = _L6;
    _L6 = /* 1 */ CompareSectionTimer_TA_MA_Request(acc, &_L11[i]);
  }
  _L10 = _L3 <= _L6;
  _L7 = _L1.t_loa;
  _L8 = _L3 <= _L7;
  _L9 = _L10 | _L8;
  triggerMA = _L9;
  return triggerMA;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_8_2_3_b_TA_MA_Request.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

