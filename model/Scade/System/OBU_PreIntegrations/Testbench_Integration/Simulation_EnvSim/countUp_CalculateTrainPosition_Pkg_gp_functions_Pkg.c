/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.h"

void countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  outC->init = kcg_true;
}

/* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp */
void countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::count */kcg_bool count,
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::reset */kcg_bool reset,
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  static kcg_int tmp1;
  static kcg_int tmp;
  
  if (reset) {
    outC->counter = 0;
  }
  else {
    if (outC->init) {
      tmp1 = 0;
    }
    else {
      tmp1 = outC->counter;
    }
    if (count) {
      tmp = 1;
    }
    else {
      tmp = 0;
    }
    outC->counter = tmp1 + tmp;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

