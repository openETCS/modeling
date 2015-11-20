/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AGradient_SDM_GradientAcceleration_Pkg.h"

void AGradient_reset_SDM_GradientAcceleration_Pkg(
  outC_AGradient_SDM_GradientAcceleration_Pkg *outC)
{
  outC->init = kcg_true;
}

/* SDM_GradientAcceleration_Pkg::AGradient */
void AGradient_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::AGradient::TrainLocations */TrainLocations_real_T_SDM_Types_Pkg *TrainLocations,
  /* SDM_GradientAcceleration_Pkg::AGradient::GradientProfile */GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::AGradient::GradientProfile_updated */kcg_bool GradientProfile_updated,
  /* SDM_GradientAcceleration_Pkg::AGradient::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::AGradient::targetCollection */TargetCollection_T_TargetManagement_types *targetCollection,
  outC_AGradient_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_int i;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L15 */
  static kcg_bool _L15;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L17 */
  static A_gradient_element_t_SDM_GradientAcceleration_types _L17;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L20 */
  static array__158000 _L20;
  
  _L17.position = 0.0;
  _L17.gradient_acceleration = 0.0;
  _L17.valid = kcg_false;
  for (i = 0; i < 100; i++) {
    kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types(
      &_L20[i],
      &_L17);
  }
  _L15 = ((*targetCollection).updatedTargetList | GradientProfile_updated) &
    ((*targetCollection).SvL_LoA_target.targetType !=
      invalid_TargetManagement_types);
  if (_L15) {
    /* 1 */
    CalcA_Gradient_SDM_GradientAcceleration_Pkg(
      (*TrainLocations).d_est_frontendPos,
      GradientProfile,
      trainData,
      (*targetCollection).SvL_LoA_target.distance,
      &outC->A_gradient);
  }
  else if (outC->init) {
    kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(
      &outC->A_gradient,
      &_L20);
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** AGradient_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

