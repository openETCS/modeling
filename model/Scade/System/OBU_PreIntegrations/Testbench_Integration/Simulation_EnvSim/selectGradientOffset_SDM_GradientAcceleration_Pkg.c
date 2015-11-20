/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "selectGradientOffset_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::selectGradientOffset */
void selectGradientOffset_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::GradientProfile */GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::Index */kcg_int Index,
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::Offset */kcg_int Offset,
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::GradientSect */Gradient_section_real_t_SDM_GradientAcceleration_types *GradientSect)
{
  if ((0 <= Index + Offset) & (Index + Offset < 50)) {
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
      GradientSect,
      &(*GradientProfile)[Index + Offset]);
  }
  else {
    (*GradientSect).location = 0.0;
    (*GradientSect).gradient = 0.0;
    (*GradientSect).valid = kcg_false;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** selectGradientOffset_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

