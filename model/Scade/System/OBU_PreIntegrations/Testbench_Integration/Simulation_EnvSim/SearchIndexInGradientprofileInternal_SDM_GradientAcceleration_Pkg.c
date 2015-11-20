/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal */
void SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::index */kcg_int index,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::indexOfPosition */kcg_int indexOfPosition,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::position */L_internal_real_Type_SDM_Types_Pkg position,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::GradientProfile */GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::cond */kcg_bool *cond,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::indexOfPositionOut */kcg_int *indexOfPositionOut)
{
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::_L5 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L5;
  
  if ((0 <= index) & (index < 50)) {
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
      &_L5,
      &(*GradientProfile)[index]);
  }
  else {
    _L5.location = 0.0;
    _L5.gradient = 0.0;
    _L5.valid = kcg_false;
  }
  *cond = (position >= _L5.location) & _L5.valid;
  if (*cond) {
    *indexOfPositionOut = index;
  }
  else {
    *indexOfPositionOut = indexOfPosition;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

