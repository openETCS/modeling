/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainLengthCompensation_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::TrainLengthCompensation */
void TrainLengthCompensation_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::d_est_front */L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::GradientProfile */GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::SvLPosition */L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::CompensatedProfile */GradientProfile_real_compensated_t_SDM_GradientAcceleration_types *CompensatedProfile)
{
  static struct__157992 tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L3 */
  static ACC_SDM_GradientAcceleration_Pkg _L3;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L11 */
  static Gradient_section_real_t_SDM_GradientAcceleration_types _L11;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L94 */
  static kcg_real _L94;
  
  _L3.frontPos = d_est_front;
  _L11.location = 0.0;
  _L11.gradient = 0.0;
  _L11.valid = kcg_false;
  _L94 = d_est_front - /* 1 */
    TransformL_intToL_real_SDM_Types_Pkg((*trainData).trainLength);
  _L3.rearPos = _L94;
  for (i = 0; i < 100; i++) {
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
      &_L3.compensatedGradientProfile[i],
      &_L11);
  }
  _L3.frontIndex = /* SearchIndexInGradientProfile */
    SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg(
      GradientProfile,
      d_est_front);
  _L3.rearIndex = /* 1 */
    SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg(
      GradientProfile,
      _L94);
  if ((*GradientProfile)[0].valid) {
    for (i = 0; i < 100; i++) {
      kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&tmp1, &_L3);
      /* 1 */
      internalCycle_SDM_GradientAcceleration_Pkg(
        i,
        &tmp1,
        SvLPosition,
        GradientProfile,
        &tmp,
        &_L3);
      if (!tmp) {
        break;
      }
    }
  }
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    CompensatedProfile,
    &_L3.compensatedGradientProfile);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrainLengthCompensation_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

