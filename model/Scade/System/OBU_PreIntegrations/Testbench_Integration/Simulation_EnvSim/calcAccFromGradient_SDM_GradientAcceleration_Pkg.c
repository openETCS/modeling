/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calcAccFromGradient_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::calcAccFromGradient */
void calcAccFromGradient_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::GradientSection */Gradient_section_real_t_SDM_GradientAcceleration_types *GradientSection,
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::calcAccFromGradient::A_gradient_section */A_gradient_element_t_SDM_GradientAcceleration_types *A_gradient_section)
{
  static kcg_int tmp;
  
  (*A_gradient_section).position = (*GradientSection).location;
  (*A_gradient_section).valid = (*GradientSection).valid;
  if ((*GradientSection).gradient <= 0.0) {
    tmp = M_rotating_min_SDM_Types_Pkg;
  }
  else {
    tmp = M_rotating_max_SDM_Types_Pkg;
  }
  (*A_gradient_section).gradient_acceleration = /* 1 */
    TransformA_intToA_real_SDM_Types_Pkg(A_gravity_SDM_Types_Pkg) *
    (*GradientSection).gradient / (kcg_real) (1000 + tmp * 10);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** calcAccFromGradient_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

