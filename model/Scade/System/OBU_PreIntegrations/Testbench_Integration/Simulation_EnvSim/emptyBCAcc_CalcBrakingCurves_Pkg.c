/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "emptyBCAcc_CalcBrakingCurves_Pkg.h"

/* CalcBrakingCurves_Pkg::emptyBCAcc */
void emptyBCAcc_CalcBrakingCurves_Pkg(
  /* CalcBrakingCurves_Pkg::emptyBCAcc::Output1 */BCAccumulator_type_CalcBrakingCurves_Pkg *Output1)
{
  (*Output1).distance = 0.0;
  (*Output1).speed = 0.0;
  (*Output1).distanceIndex = 0;
  (*Output1).speedIndex = 0;
  /* 2 */ makeEmptyParabolaCurve_CalcBrakingCurves_types(&(*Output1).BC);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** emptyBCAcc_CalcBrakingCurves_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

