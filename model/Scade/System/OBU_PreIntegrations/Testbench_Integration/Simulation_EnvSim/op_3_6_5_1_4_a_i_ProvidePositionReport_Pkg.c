/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg.h"

void op_3_6_5_1_4_a_i_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i */
void op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::_L27 */
  static odometry_T_Obu_BasicTypes_Pkg _L27;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
      &_L27,
      (odometry_T_Obu_BasicTypes_Pkg *) &cOdomerty_ProvidePositionReport_Pkg);
  }
  else {
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L27, &outC->rem_odometry);
  }
  outC->trigger = _L27.valid & (_L27.motionState != (*odometry).motionState) &
    (*odometry).valid;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->rem_odometry, odometry);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

