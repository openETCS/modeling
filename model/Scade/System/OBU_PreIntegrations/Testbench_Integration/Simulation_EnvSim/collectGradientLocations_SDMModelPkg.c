/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "collectGradientLocations_SDMModelPkg.h"

/* SDMModelPkg::collectGradientLocations */
void collectGradientLocations_SDMModelPkg(
  /* SDMModelPkg::collectGradientLocations::last_loc */L_internal_real_Type_SDM_Types_Pkg last_loc,
  /* SDMModelPkg::collectGradientLocations::Gsection */A_gradient_element_t_SDM_GradientAcceleration_types *Gsection,
  /* SDMModelPkg::collectGradientLocations::location_ */L_internal_real_Type_SDM_Types_Pkg *location_,
  /* SDMModelPkg::collectGradientLocations::location */L_internal_real_Type_SDM_Types_Pkg *location)
{
  if ((*Gsection).valid) {
    *location_ = (*Gsection).position;
  }
  else {
    *location_ = last_loc;
  }
  *location = *location_;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** collectGradientLocations_SDMModelPkg.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

