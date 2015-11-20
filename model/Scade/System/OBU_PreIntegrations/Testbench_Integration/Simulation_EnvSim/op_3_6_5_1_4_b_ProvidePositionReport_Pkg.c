/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_b_ProvidePositionReport_Pkg.h"

void op_3_6_5_1_4_b_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_b */
void op_3_6_5_1_4_b_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_b::modeLevelStatus */ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *outC)
{
  static M_MODE tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = cModeAndLevelStatus_ProvidePositionReport_Pkg.currMode;
  }
  else {
    tmp = outC->rem_modeLevelStatus.currMode;
  }
  outC->trigger = (*modeLevelStatus).currMode != tmp;
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->rem_modeLevelStatus,
    modeLevelStatus);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_3_6_5_1_4_b_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

