/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "lowestGradient_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::lowestGradient */
void lowestGradient_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::lowestGradient::Index */kcg_int Index,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::lowestGradientAccu */Gradient_real_t_SDM_GradientAcceleration_types lowestGradientAccu,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::GradientProfile */GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::BeginIndex */kcg_int BeginIndex,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::EndIndex */kcg_int EndIndex,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::cond */kcg_bool *cond,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::lowestGradientOut */Gradient_real_t_SDM_GradientAcceleration_types *lowestGradientOut)
{
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L23 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L23;
  
  /* selectGradientOffset */
  selectGradientOffset_SDM_GradientAcceleration_Pkg(
    GradientProfile,
    Index,
    BeginIndex,
    &_L23);
  if (_L23.valid & (_L23.gradient < lowestGradientAccu)) {
    *lowestGradientOut = _L23.gradient;
  }
  else {
    *lowestGradientOut = lowestGradientAccu;
  }
  *cond = Index + BeginIndex < EndIndex;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** lowestGradient_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

