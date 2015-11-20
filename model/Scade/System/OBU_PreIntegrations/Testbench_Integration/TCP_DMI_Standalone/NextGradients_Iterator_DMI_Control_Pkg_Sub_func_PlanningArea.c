/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator */
void NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator::inTrainPosition */kcg_real inTrainPosition,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator::inGradientsStart */kcg_real inGradientsStart,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator::outFirstIndexOfNextGradients */kcg_bool *outFirstIndexOfNextGradients,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator::AccOut */kcg_real *AccOut)
{
  *AccOut = inTrainPosition;
  *outFirstIndexOfNextGradients = *AccOut >= inGradientsStart;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

