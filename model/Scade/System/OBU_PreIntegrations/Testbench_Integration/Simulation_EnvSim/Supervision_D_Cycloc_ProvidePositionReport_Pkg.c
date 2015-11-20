/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_D_Cycloc_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Supervision_D_Cycloc */
kcg_bool Supervision_D_Cycloc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervision_D_Cycloc::dcycloc */D_CYCLOC dcycloc)
{
  /* ProvidePositionReport_Pkg::Supervision_D_Cycloc::trigger */
  static kcg_bool trigger;
  
  trigger = kcg_false;
  return trigger;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Supervision_D_Cycloc_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

