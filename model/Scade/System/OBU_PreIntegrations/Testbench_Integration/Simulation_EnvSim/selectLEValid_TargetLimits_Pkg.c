/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "selectLEValid_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::selectLEValid */
void selectLEValid_TargetLimits_Pkg(
  /* TargetLimits_Pkg::selectLEValid::valid1 */kcg_bool valid1,
  /* TargetLimits_Pkg::selectLEValid::i1 */kcg_real i1,
  /* TargetLimits_Pkg::selectLEValid::valid2 */kcg_bool valid2,
  /* TargetLimits_Pkg::selectLEValid::i2 */kcg_real i2,
  /* TargetLimits_Pkg::selectLEValid::isUpper */kcg_bool *isUpper,
  /* TargetLimits_Pkg::selectLEValid::valid */kcg_bool *valid,
  /* TargetLimits_Pkg::selectLEValid::o */kcg_real *o)
{
  *isUpper = /* 1 */ isLEValid_TargetLimits_Pkg(valid1, i1, valid2, i2);
  if (*isUpper) {
    *o = i1;
    *valid = valid1;
  }
  else {
    *o = i2;
    *valid = valid2;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** selectLEValid_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

