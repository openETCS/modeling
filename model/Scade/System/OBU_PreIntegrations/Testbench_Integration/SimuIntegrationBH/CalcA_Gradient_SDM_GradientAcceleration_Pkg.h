/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CalcA_Gradient_SDM_GradientAcceleration_Pkg_H_
#define _CalcA_Gradient_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "TrainLengthCompensation_SDM_GradientAcceleration_Pkg.h"
#include "calcAccFromGradient_SDM_GradientAcceleration_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_GradientAcceleration_Pkg::CalcA_Gradient */
extern void CalcA_Gradient_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::d_est_front */ L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::SvLPosition */ L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::A_gradient */ A_gradient_t_SDM_GradientAcceleration_types *A_gradient);

#endif /* _CalcA_Gradient_SDM_GradientAcceleration_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalcA_Gradient_SDM_GradientAcceleration_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

