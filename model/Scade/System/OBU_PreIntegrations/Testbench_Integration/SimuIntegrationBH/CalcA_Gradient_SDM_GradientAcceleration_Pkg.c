/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcA_Gradient_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::CalcA_Gradient */
void CalcA_Gradient_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::d_est_front */ L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::SvLPosition */ L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::A_gradient */ A_gradient_t_SDM_GradientAcceleration_types *A_gradient)
{
  static kcg_int i1;
  static kcg_int i;
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::_L1 */
  static GradientProfile_real_compensated_t_SDM_GradientAcceleration_types _L1;
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::_L2 */
  static L_internal_real_Type_SDM_Types_Pkg _L2;
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::_L3 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L3;
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::_L4 */
  static trainData_T_TIU_Types_Pkg _L4;
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::_L5 */
  static L_internal_real_Type_SDM_Types_Pkg _L5;
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::_L16 */
  static A_gradient_t_SDM_GradientAcceleration_types _L16;
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::_L17 */
  static trainData_T_TIU_Types_Pkg _L17;
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::_L18 */
  static array_169593 _L18;
  
  _L2 = d_est_front;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L3,
    GradientProfile);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L4, trainData);
  _L5 = SvLPosition;
  /* 1 */
  TrainLengthCompensation_SDM_GradientAcceleration_Pkg(
    _L2,
    &_L3,
    &_L4,
    _L5,
    &_L1);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L17, trainData);
  /* pow */ for (i1 = 0; i1 < 100; i1++) {
    kcg_copy_trainData_T_TIU_Types_Pkg(&_L18[i1], &_L17);
  }
  /* 2 */ for (i = 0; i < 100; i++) {
    /* 2 */
    calcAccFromGradient_SDM_GradientAcceleration_Pkg(
      &_L1[i],
      &_L18[i],
      &_L16[i]);
  }
  kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(A_gradient, &_L16);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcA_Gradient_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

