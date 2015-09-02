/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_8_2_3_a_MA_Request.h"

/* MA_Request::op_3_8_2_3_a */
kcg_bool op_3_8_2_3_a_MA_Request(
  /* MA_Request::op_3_8_2_3_a::t_mar */T_MAR t_mar,
  /* MA_Request::op_3_8_2_3_a::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* MA_Request::op_3_8_2_3_a::preindicationLoc */L_internal_Type_Obu_BasicTypes_Pkg preindicationLoc,
  /* MA_Request::op_3_8_2_3_a::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry)
{
  kcg_real tmp1;
  kcg_real tmp;
  /* MA_Request::op_3_8_2_3_a::triggerMA */ kcg_bool triggerMA;
  
  tmp = /* 1 */
    Safe_DIV_real(
      (kcg_real) (preindicationLoc - (*trainPosition).trainPosition.d_max),
      100.0);
  tmp1 = /* 2 */
    Safe_DIV_real(tmp, (kcg_real) (*odometry).speed.v_upper * 0.28);
  triggerMA = (kcg_real) t_mar <= tmp1;
  return triggerMA;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_3_8_2_3_a_MA_Request.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

