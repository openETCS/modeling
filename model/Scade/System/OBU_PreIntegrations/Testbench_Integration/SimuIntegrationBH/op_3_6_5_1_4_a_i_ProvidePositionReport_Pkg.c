/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_a_i_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_odometry.valid = kcg_true;
  outC->rem_odometry.timestamp = 0;
  outC->rem_odometry.odo.o_nominal = 0;
  outC->rem_odometry.odo.o_min = 0;
  outC->rem_odometry.odo.o_max = 0;
  outC->rem_odometry.speed.v_safeNominal = 0;
  outC->rem_odometry.speed.v_rawNominal = 0;
  outC->rem_odometry.speed.v_lower = 0;
  outC->rem_odometry.speed.v_upper = 0;
  outC->rem_odometry.acceleration = 0;
  outC->rem_odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->rem_odometry.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->trigger = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_a_i_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i */
void op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::odometry */
  static odometry_T_Obu_BasicTypes_Pkg last_odometry;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::_L17 */
  static odoMotionState_T_Obu_BasicTypes_Pkg _L17;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::_L19 */
  static odoMotionState_T_Obu_BasicTypes_Pkg _L19;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::_L22 */
  static kcg_bool _L22;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::_L26 */
  static odometry_T_Obu_BasicTypes_Pkg _L26;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::_L27 */
  static odometry_T_Obu_BasicTypes_Pkg _L27;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::_L33 */
  static kcg_bool _L33;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::_L34 */
  static kcg_bool _L34;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::_L35 */
  static kcg_bool _L35;
  
  /* last_init_ck_odometry */ if (outC->init) {
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
      &last_odometry,
      (odometry_T_Obu_BasicTypes_Pkg *) &cOdomerty_ProvidePositionReport_Pkg);
  }
  else {
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&last_odometry, &outC->rem_odometry);
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L27, &last_odometry);
  _L35 = _L27.valid;
  _L19 = _L27.motionState;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L26, odometry);
  _L17 = _L26.motionState;
  _L33 = _L19 != _L17;
  _L22 = _L26.valid;
  _L34 = _L35 & _L33 & _L22;
  outC->trigger = _L34;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->rem_odometry, odometry);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

