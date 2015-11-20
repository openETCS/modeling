/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:55
*************************************************************$ */
#ifndef _addGradient_SDMModelPkg_H_
#define _addGradient_SDMModelPkg_H_

#include "kcg_types.h"
#include "collectGradientLocations_SDMModelPkg.h"
#include "iterateASafeData_SDMModelPkg.h"

/* =====================  no input structure  ====================== */


/* SDMModelPkg::addGradient */
extern void addGradient_SDMModelPkg(
  /* SDMModelPkg::addGradient::aBrakeSafe */ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* SDMModelPkg::addGradient::aGradient */A_gradient_t_SDM_GradientAcceleration_types *aGradient,
  /* SDMModelPkg::addGradient::aSafe */ASafe_T_CalcBrakingCurves_types *aSafe);

#endif /* _addGradient_SDMModelPkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** addGradient_SDMModelPkg.h
** Generation date: 2015-11-20T19:46:55
*************************************************************$ */

