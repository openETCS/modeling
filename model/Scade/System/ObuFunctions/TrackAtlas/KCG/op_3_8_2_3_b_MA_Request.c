/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_8_2_3_b_MA_Request.h"

/* MA_Request::op_3_8_2_3_b */
kcg_bool op_3_8_2_3_b_MA_Request(
  /* MA_Request::op_3_8_2_3_b::t_timeoutrqst */kcg_int t_timeoutrqst,
  /* MA_Request::op_3_8_2_3_b::ma_s */MovementAuthority_t_TrackAtlasTypes *ma_s)
{
  T_internal_Type_Obu_BasicTypes_Pkg tmp1;
  kcg_int tmp;
  kcg_int i;
  /* MA_Request::op_3_8_2_3_b::triggerMA */ kcg_bool triggerMA;
  
  tmp1 = 10000;
  for (i = 0; i < 10; i++) {
    tmp = tmp1;
    tmp1 = /* 1 */ CompareSectionTimer_MA_Request(tmp, &(*ma_s).sections[i]);
  }
  triggerMA = (t_timeoutrqst <= tmp1) | (t_timeoutrqst <= (*ma_s).t_loa);
  return triggerMA;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_3_8_2_3_b_MA_Request.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

