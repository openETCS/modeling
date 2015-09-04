/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_8_2_3_a_MA_Request.h"

void op_3_8_2_3_a_reset_MA_Request(outC_op_3_8_2_3_a_MA_Request *outC)
{
  /* 2 */ DIV_real_reset_XCP_numeric(&outC->Context_2);
  /* 1 */ DIV_real_reset_XCP_numeric(&outC->Context_1);
}

/* MA_Request::op_3_8_2_3_a */
void op_3_8_2_3_a_MA_Request(
  /* MA_Request::op_3_8_2_3_a::t_mar */T_MAR t_mar,
  /* MA_Request::op_3_8_2_3_a::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* MA_Request::op_3_8_2_3_a::preindicationLoc */L_internal_Type_Obu_BasicTypes_Pkg preindicationLoc,
  /* MA_Request::op_3_8_2_3_a::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  outC_op_3_8_2_3_a_MA_Request *outC)
{
  outC->_L28 = - 1.0;
  outC->_L27 = - 1.0;
  outC->_L3 = preindicationLoc;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L1, trainPosition);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L5,
    &outC->_L1.trainPosition);
  outC->_L7 = outC->_L5.d_max;
  outC->_L8 = outC->_L3 - outC->_L7;
  outC->_L10 = (kcg_real) outC->_L8;
  outC->_L13 = 100.0;
  /* 1 */
  DIV_real_XCP_numeric(outC->_L10, outC->_L13, outC->_L27, &outC->Context_1);
  outC->_L20 = outC->Context_1.Result;
  outC->_L21 = outC->Context_1.Exception;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L4, odometry);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&outC->_L9, &outC->_L4.speed);
  outC->_L19 = outC->_L9.v_upper;
  outC->_L11 = (kcg_real) outC->_L19;
  outC->_L14 = 0.28;
  outC->_L15 = outC->_L11 * outC->_L14;
  /* 2 */
  DIV_real_XCP_numeric(outC->_L20, outC->_L15, outC->_L28, &outC->Context_2);
  outC->_L24 = outC->Context_2.Result;
  outC->_L25 = outC->Context_2.Exception;
  outC->_L26 = outC->_L25 | outC->_L21;
  outC->exception = outC->_L26;
  outC->_L2 = t_mar;
  outC->_L17 = (kcg_real) outC->_L2;
  outC->_L18 = outC->_L17 <= outC->_L24;
  outC->triggerMA = outC->_L18;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_3_8_2_3_a_MA_Request.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

