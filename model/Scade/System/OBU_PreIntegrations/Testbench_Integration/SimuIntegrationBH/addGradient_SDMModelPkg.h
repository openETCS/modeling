/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _addGradient_SDMModelPkg_H_
#define _addGradient_SDMModelPkg_H_

#include "kcg_types.h"
#include "collectGradientLocations_SDMModelPkg.h"
#include "iterateASafeData_SDMModelPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDMModelPkg::addGradient */
extern void addGradient_SDMModelPkg(
  /* SDMModelPkg::addGradient::aBrakeSafe */ ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* SDMModelPkg::addGradient::aGradient */ A_gradient_t_SDM_GradientAcceleration_types *aGradient,
  /* SDMModelPkg::addGradient::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe);

#endif /* _addGradient_SDMModelPkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** addGradient_SDMModelPkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

