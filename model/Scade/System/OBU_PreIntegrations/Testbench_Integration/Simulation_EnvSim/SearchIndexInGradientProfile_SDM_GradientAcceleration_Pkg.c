/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile */
kcg_int SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::GradientProfile */GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::position */L_internal_real_Type_SDM_Types_Pkg position)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::index */
  static kcg_int index;
  
  index = - 1;
  if ((*GradientProfile)[0].valid) {
    for (i = 0; i < 50; i++) {
      tmp1 = index;
      /* 1 */
      SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg(
        i,
        tmp1,
        position,
        GradientProfile,
        &tmp,
        &index);
      if (!tmp) {
        break;
      }
    }
  }
  return index;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

