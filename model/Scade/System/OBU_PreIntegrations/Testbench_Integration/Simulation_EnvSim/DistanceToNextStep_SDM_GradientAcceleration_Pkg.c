/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DistanceToNextStep_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::DistanceToNextStep */
void DistanceToNextStep_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::position */L_internal_real_Type_SDM_Types_Pkg position,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::relatedIndex */kcg_int relatedIndex,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::GradientProfile */GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::distance */L_internal_real_Type_SDM_Types_Pkg *distance,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::validDistance */kcg_bool *validDistance)
{
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::_L15 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L15;
  
  /* 2 */
  selectGradientOffset_SDM_GradientAcceleration_Pkg(
    GradientProfile,
    relatedIndex,
    1,
    &_L15);
  *validDistance = _L15.valid;
  *distance = _L15.location - position;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DistanceToNextStep_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

