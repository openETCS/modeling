/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg.h"

void op_3_6_5_1_4_a_i_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_odometry.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->rem_odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->rem_odometry.acceleration = 0;
  outC->rem_odometry.speed.v_upper = 0;
  outC->rem_odometry.speed.v_lower = 0;
  outC->rem_odometry.speed.v_rawNominal = 0;
  outC->rem_odometry.speed.v_safeNominal = 0;
  outC->rem_odometry.odo.o_max = 0;
  outC->rem_odometry.odo.o_min = 0;
  outC->rem_odometry.odo.o_nominal = 0;
  outC->rem_odometry.timestamp = 0;
  outC->rem_odometry.valid = kcg_true;
  outC->b = kcg_true;
}


void op_3_6_5_1_4_a_i_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i */
void op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::_L27 */ odometry_T_Obu_BasicTypes_Pkg _L27;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
      &_L27,
      (odometry_T_Obu_BasicTypes_Pkg *) &cOdomerty_ProvidePositionReport_Pkg);
  }
  else {
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L27, &outC->rem_odometry);
  }
  outC->b = _L27.valid & (_L27.motionState != (*odometry).motionState) &
    (*odometry).valid;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->rem_odometry, odometry);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

