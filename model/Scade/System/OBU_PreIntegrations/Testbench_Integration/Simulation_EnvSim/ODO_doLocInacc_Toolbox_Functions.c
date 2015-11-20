/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_doLocInacc_Toolbox_Functions.h"

/* Toolbox::Functions::ODO_doLocInacc */
void ODO_doLocInacc_Toolbox_Functions(
  /* Toolbox::Functions::ODO_doLocInacc::d_min */L_internal_Type_Obu_BasicTypes_Pkg d_min,
  /* Toolbox::Functions::ODO_doLocInacc::d_Max */L_internal_Type_Obu_BasicTypes_Pkg d_Max,
  /* Toolbox::Functions::ODO_doLocInacc::locInAcc */LocWithInAcc_T_Obu_BasicTypes_Pkg *locInAcc)
{
  (*locInAcc).nominal = 0;
  (*locInAcc).d_min = d_min;
  (*locInAcc).d_max = d_Max;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_doLocInacc_Toolbox_Functions.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

