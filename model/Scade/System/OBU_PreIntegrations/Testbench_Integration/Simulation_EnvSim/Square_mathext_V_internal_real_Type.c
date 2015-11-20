/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Square_mathext_V_internal_real_Type.h"

/* mathext::Square */
kcg_real Square_mathext_V_internal_real_Type(
  /* mathext::Square::Square_In */kcg_real Square_In)
{
  /* mathext::Square::Square_Out */
  static kcg_real Square_Out;
  
  Square_Out = Square_In * Square_In;
  return Square_Out;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Square_mathext_V_internal_real_Type.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

