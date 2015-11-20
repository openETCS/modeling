/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_8_2_3_a_TA_MA_Request.h"

void op_3_8_2_3_a_reset_TA_MA_Request(outC_op_3_8_2_3_a_TA_MA_Request *outC)
{
  outC->init = kcg_true;
  /* 1 */ RisingEdge_reset_digital(&outC->Context_1);
}

/* TA_MA_Request::op_3_8_2_3_a */
void op_3_8_2_3_a_TA_MA_Request(
  /* TA_MA_Request::op_3_8_2_3_a::t_mar */T_MAR t_mar,
  /* TA_MA_Request::op_3_8_2_3_a::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* TA_MA_Request::op_3_8_2_3_a::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TA_MA_Request::op_3_8_2_3_a::preindicationLoc */L_internal_Type_Obu_BasicTypes_Pkg preindicationLoc,
  outC_op_3_8_2_3_a_TA_MA_Request *outC)
{
  static L_internal_Type_Obu_BasicTypes_Pkg tmp;
  /* TA_MA_Request::op_3_8_2_3_a::_L20 */
  static kcg_real _L20;
  
  /* 1 */
  DIV_real_XCP_numeric(
    (kcg_real)
      (preindicationLoc - ((*trainPosition).trainPosition.d_max +
          (*trainPosition).trainPosition.nominal)),
    (kcg_real) (*odometry).speed.v_upper,
    - 1.0,
    &_L20,
    &outC->exception);
  if (outC->init) {
    outC->init = kcg_false;
    tmp = cLocation_TA_MA_Request;
  }
  else {
    tmp = outC->rem_preindicationLoc;
  }
  /* 1 */
  RisingEdge_digital((kcg_bool) (tmp != preindicationLoc), &outC->Context_1);
  outC->triggerMA = !outC->Context_1.RE_Output & ((kcg_real) t_mar >= _L20);
  outC->rem_preindicationLoc = preindicationLoc;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_3_8_2_3_a_TA_MA_Request.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

