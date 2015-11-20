/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineNewIndices_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::DetermineNewIndices */
void DetermineNewIndices_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::Accu */ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::IncFrontIdx */kcg_bool IncFrontIdx,
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::frontIndex */kcg_int *frontIndex,
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::rearIndex */kcg_int *rearIndex)
{
  if (IncFrontIdx) {
    *rearIndex = (*Accu).rearIndex;
    *frontIndex = (*Accu).frontIndex + 1;
  }
  else {
    *rearIndex = 1 + (*Accu).rearIndex;
    *frontIndex = (*Accu).frontIndex;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DetermineNewIndices_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

