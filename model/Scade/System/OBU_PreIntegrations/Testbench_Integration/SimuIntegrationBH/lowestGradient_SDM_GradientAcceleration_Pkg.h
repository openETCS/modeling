/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _lowestGradient_SDM_GradientAcceleration_Pkg_H_
#define _lowestGradient_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "selectGradientOffset_SDM_GradientAcceleration_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_GradientAcceleration_Pkg::lowestGradient */
extern void lowestGradient_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::lowestGradient::Index */ kcg_int Index,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::lowestGradientAccu */ Gradient_real_t_SDM_GradientAcceleration_types lowestGradientAccu,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::BeginIndex */ kcg_int BeginIndex,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::EndIndex */ kcg_int EndIndex,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::cond */ kcg_bool *cond,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::lowestGradientOut */ Gradient_real_t_SDM_GradientAcceleration_types *lowestGradientOut);

#endif /* _lowestGradient_SDM_GradientAcceleration_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** lowestGradient_SDM_GradientAcceleration_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

