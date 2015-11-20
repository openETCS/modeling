/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "signChanged_BasicLocationFunctions_Pkg.h"

void signChanged_reset_BasicLocationFunctions_Pkg(
  outC_signChanged_BasicLocationFunctions_Pkg *outC)
{
  outC->init = kcg_true;
}

/* BasicLocationFunctions_Pkg::signChanged */
void signChanged_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::signChanged::val */kcg_int val,
  outC_signChanged_BasicLocationFunctions_Pkg *outC)
{
  static kcg_int tmp2;
  static kcg_int tmp1;
  static kcg_int tmp;
  /* BasicLocationFunctions_Pkg::signChanged::_L2 */
  static kcg_int _L2;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L2 = 0;
  }
  else {
    _L2 = outC->rem_val;
  }
  tmp1 = val + _L2;
  if (0 <= tmp1) {
    tmp2 = tmp1;
  }
  else {
    tmp2 = - tmp1;
  }
  if (0 <= val) {
    tmp1 = val;
  }
  else {
    tmp1 = - val;
  }
  if (0 <= _L2) {
    tmp = _L2;
  }
  else {
    tmp = - _L2;
  }
  outC->change = tmp2 < tmp1 + tmp;
  outC->rem_val = val;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** signChanged_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

