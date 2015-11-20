/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:55
*************************************************************$ */
#ifndef _TrainLengthCompensation_SDM_GradientAcceleration_Pkg_H_
#define _TrainLengthCompensation_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "TransformL_intToL_real_SDM_Types_Pkg.h"
#include "internalCycle_SDM_GradientAcceleration_Pkg.h"
#include "SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg.h"

/* =====================  no input structure  ====================== */


/* SDM_GradientAcceleration_Pkg::TrainLengthCompensation */
extern void TrainLengthCompensation_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::d_est_front */L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::GradientProfile */GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::SvLPosition */L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::CompensatedProfile */GradientProfile_real_compensated_t_SDM_GradientAcceleration_types *CompensatedProfile);

#endif /* _TrainLengthCompensation_SDM_GradientAcceleration_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrainLengthCompensation_SDM_GradientAcceleration_Pkg.h
** Generation date: 2015-11-20T19:46:55
*************************************************************$ */

