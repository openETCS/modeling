/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcNearestDistance_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::CalcNearestDistance */
void CalcNearestDistance_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::Accu */ ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::oneValid */ kcg_bool *oneValid,
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::NearestDistance */ kcg_real *NearestDistance,
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::nearestDistanceIsFrontend */ kcg_bool *nearestDistanceIsFrontend)
{
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L2 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L2;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L3 */
  static kcg_int _L3;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L4 */
  static L_internal_real_Type_SDM_Types_Pkg _L4;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L5 */
  static L_internal_real_Type_SDM_Types_Pkg _L5;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L6 */
  static kcg_bool _L6;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L7 */
  static L_internal_real_Type_SDM_Types_Pkg _L7;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L8 */
  static kcg_int _L8;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L9 */
  static L_internal_real_Type_SDM_Types_Pkg _L9;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L10 */
  static kcg_bool _L10;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L11 */
  static L_internal_real_Type_SDM_Types_Pkg _L11;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L12 */
  static kcg_bool _L12;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L13 */
  static kcg_bool _L13;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L14 */
  static ACC_SDM_GradientAcceleration_Pkg _L14;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L17 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L17;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L18 */
  static kcg_bool _L18;
  
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&_L14, Accu);
  _L4 = _L14.frontPos;
  _L3 = _L14.frontIndex;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L2,
    GradientProfile);
  /* DistanceToNextStep */
  DistanceToNextStep_SDM_GradientAcceleration_Pkg(_L4, _L3, &_L2, &_L5, &_L6);
  _L7 = _L14.rearPos;
  _L8 = _L14.rearIndex;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L17,
    GradientProfile);
  /* 1 */
  DistanceToNextStep_SDM_GradientAcceleration_Pkg(_L7, _L8, &_L17, &_L9, &_L10);
  _L12 = _L5 < _L9;
  _L13 = _L12 & _L6;
  *nearestDistanceIsFrontend = _L13;
  _L18 = _L6 | _L10;
  *oneValid = _L18;
  /* 1 */ if (_L13) {
    _L11 = _L5;
  }
  else {
    _L11 = _L9;
  }
  *NearestDistance = _L11;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcNearestDistance_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

