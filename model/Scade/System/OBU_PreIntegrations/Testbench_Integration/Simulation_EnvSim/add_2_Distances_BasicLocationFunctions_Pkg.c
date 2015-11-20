/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::add_2_Distances */
void add_2_Distances_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::add_2_Distances::dist_2 */LocWithInAcc_T_Obu_BasicTypes_Pkg *dist_2,
  /* BasicLocationFunctions_Pkg::add_2_Distances::dist_1 */LocWithInAcc_T_Obu_BasicTypes_Pkg *dist_1,
  /* BasicLocationFunctions_Pkg::add_2_Distances::distance */LocWithInAcc_T_Obu_BasicTypes_Pkg *distance)
{
  (*distance).nominal = (*dist_2).nominal + (*dist_1).nominal;
  (*distance).d_min = (*dist_2).d_min + (*dist_1).d_min;
  (*distance).d_max = (*dist_2).d_max + (*dist_1).d_max;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** add_2_Distances_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

